/* file "WhatDrinkCanMakeQuestionJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef WHATDRINKCANMAKEQUESTIONJSON_H
#define WHATDRINKCANMAKEQUESTIONJSON_H

#pragma interface

#include "InformationNuggetJSON.h"
#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONHoldingArrayGenerator.h"
#include <vector>
#include "DrinkIngredientJSON.h"
#include "DrinkRecipeJSON.h"
#include "DrinkRecipeJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class WhatDrinkCanMakeQuestionJSON : public InformationNuggetJSON
  {
  private:
    bool flagHasIngredients;
    std::vector< DrinkIngredientJSON * > storeIngredients;
    bool flagHasCanMake;
    std::vector< DrinkRecipeJSON * > storeCanMake;
    bool flagHasCanAlmostMake;
    std::vector< DrinkRecipeJSON * > storeCanAlmostMake;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    WhatDrinkCanMakeQuestionJSON(const WhatDrinkCanMakeQuestionJSON &);
    WhatDrinkCanMakeQuestionJSON & operator=(const WhatDrinkCanMakeQuestionJSON &other);

    JSONValue * extraIngredientsToJSON(void) const;
    JSONValue * extraCanMakeToJSON(void) const;
    JSONValue * extraCanAlmostMakeToJSON(void) const;

    void  fromJSONIngredients(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONCanMake(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONCanAlmostMake(JSONValue *json_value, bool ignore_extras = false);


  public:
    WhatDrinkCanMakeQuestionJSON(void);
    virtual ~WhatDrinkCanMakeQuestionJSON(void);
    const char * getNuggetKind(void) const;
    bool  hasIngredients(void) const;
    size_t  countOfIngredients(void) const;
    DrinkIngredientJSON *  elementOfIngredients(size_t element_num);
    const DrinkIngredientJSON *  elementOfIngredients(size_t element_num) const;
    std::vector< DrinkIngredientJSON * >  getIngredients(void);
    const std::vector< DrinkIngredientJSON * >  getIngredients(void) const;
    bool  hasCanMake(void) const;
    size_t  countOfCanMake(void) const;
    DrinkRecipeJSON *  elementOfCanMake(size_t element_num);
    const DrinkRecipeJSON *  elementOfCanMake(size_t element_num) const;
    std::vector< DrinkRecipeJSON * >  getCanMake(void);
    const std::vector< DrinkRecipeJSON * >  getCanMake(void) const;
    bool  hasCanAlmostMake(void) const;
    size_t  countOfCanAlmostMake(void) const;
    DrinkRecipeJSON *  elementOfCanAlmostMake(size_t element_num);
    const DrinkRecipeJSON *  elementOfCanAlmostMake(size_t element_num) const;
    std::vector< DrinkRecipeJSON * >  getCanAlmostMake(void);
    const std::vector< DrinkRecipeJSON * >  getCanAlmostMake(void) const;

    virtual size_t extraWhatDrinkCanMakeQuestionComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraWhatDrinkCanMakeQuestionComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraWhatDrinkCanMakeQuestionComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraWhatDrinkCanMakeQuestionComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraWhatDrinkCanMakeQuestionLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraWhatDrinkCanMakeQuestionLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    size_t extraInformationNuggetComponentCount(void) const
      {
        size_t result = 0;
        if (flagHasIngredients)
            ++result;
        if (flagHasCanMake)
            ++result;
        if (flagHasCanAlmostMake)
            ++result;
        result += extraWhatDrinkCanMakeQuestionComponentCount();
        return result;
      }
    const char *extraInformationNuggetComponentKey(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasIngredients)
          {
            if (remainder == 0)
                return "Ingredients";
            --remainder;
          }
        if (flagHasCanMake)
          {
            if (remainder == 0)
                return "CanMake";
            --remainder;
          }
        if (flagHasCanAlmostMake)
          {
            if (remainder == 0)
                return "CanAlmostMake";
            --remainder;
          }
        return extraWhatDrinkCanMakeQuestionComponentKey(remainder);
      }
    JSONValue *extraInformationNuggetComponentValue(size_t component_num)
      {
        size_t remainder = component_num;
        if (flagHasIngredients)
          {
            if (remainder == 0)
                return extraIngredientsToJSON();
            --remainder;
          }
        if (flagHasCanMake)
          {
            if (remainder == 0)
                return extraCanMakeToJSON();
            --remainder;
          }
        if (flagHasCanAlmostMake)
          {
            if (remainder == 0)
                return extraCanAlmostMakeToJSON();
            --remainder;
          }
        return extraWhatDrinkCanMakeQuestionComponentValue(remainder);
      }
    const JSONValue *extraInformationNuggetComponentValue(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasIngredients)
          {
            if (remainder == 0)
                return extraIngredientsToJSON();
            --remainder;
          }
        if (flagHasCanMake)
          {
            if (remainder == 0)
                return extraCanMakeToJSON();
            --remainder;
          }
        if (flagHasCanAlmostMake)
          {
            if (remainder == 0)
                return extraCanAlmostMakeToJSON();
            --remainder;
          }
        return extraWhatDrinkCanMakeQuestionComponentValue(remainder);
      }
    JSONValue *extraInformationNuggetLookup(const char *field_name)
      {
        switch ((unsigned char)(field_name[0]))
          {
            case 'C':
                if (strncmp(&(field_name[1]), "an", 2) == 0)
                  {
                    switch ((unsigned char)(field_name[3]))
                      {
                        case 'A':
                            if (strcmp(&(field_name[4]), "lmostMake") == 0)
                                return (flagHasCanAlmostMake ? extraCanAlmostMakeToJSON() : NULL);
                            break;
                        case 'M':
                            if (strcmp(&(field_name[4]), "ake") == 0)
                                return (flagHasCanMake ? extraCanMakeToJSON() : NULL);
                            break;
                        default:
                            break;
                      }
                  }
                break;
            case 'I':
                if (strcmp(&(field_name[1]), "ngredients") == 0)
                    return (flagHasIngredients ? extraIngredientsToJSON() : NULL);
                break;
            default:
                break;
          }
        return extraWhatDrinkCanMakeQuestionLookup(field_name);
      }
    const JSONValue *extraInformationNuggetLookup(const char *field_name) const
      {
        switch ((unsigned char)(field_name[0]))
          {
            case 'C':
                if (strncmp(&(field_name[1]), "an", 2) == 0)
                  {
                    switch ((unsigned char)(field_name[3]))
                      {
                        case 'A':
                            if (strcmp(&(field_name[4]), "lmostMake") == 0)
                                return (flagHasCanAlmostMake ? extraCanAlmostMakeToJSON() : NULL);
                            break;
                        case 'M':
                            if (strcmp(&(field_name[4]), "ake") == 0)
                                return (flagHasCanMake ? extraCanMakeToJSON() : NULL);
                            break;
                        default:
                            break;
                      }
                  }
                break;
            case 'I':
                if (strcmp(&(field_name[1]), "ngredients") == 0)
                    return (flagHasIngredients ? extraIngredientsToJSON() : NULL);
                break;
            default:
                break;
          }
        return extraWhatDrinkCanMakeQuestionLookup(field_name);
      }

    void initIngredients(void)
      {
        if (flagHasIngredients)
          {
            for (size_t num4 = 0; num4 < storeIngredients.size(); ++num4)
              {
                storeIngredients[num4]->remove_reference();
              }
          }
        flagHasIngredients = true;
        storeIngredients.clear();
      }
    void appendIngredients(DrinkIngredientJSON * to_append)
      {
        if (!flagHasIngredients)
          {
            flagHasIngredients = true;
            storeIngredients.clear();
          }
        assert(flagHasIngredients);
        to_append->add_reference();
        storeIngredients.push_back(to_append);
      }
    void unsetIngredients(void)
      {
        if (flagHasIngredients)
          {
            for (size_t num5 = 0; num5 < storeIngredients.size(); ++num5)
              {
                storeIngredients[num5]->remove_reference();
              }
          }
        flagHasIngredients = false;
        storeIngredients.clear();
      }
    void initCanMake(void)
      {
        if (flagHasCanMake)
          {
            for (size_t num6 = 0; num6 < storeCanMake.size(); ++num6)
              {
                storeCanMake[num6]->remove_reference();
              }
          }
        flagHasCanMake = true;
        storeCanMake.clear();
      }
    void appendCanMake(DrinkRecipeJSON * to_append)
      {
        if (!flagHasCanMake)
          {
            flagHasCanMake = true;
            storeCanMake.clear();
          }
        assert(flagHasCanMake);
        to_append->add_reference();
        storeCanMake.push_back(to_append);
      }
    void unsetCanMake(void)
      {
        if (flagHasCanMake)
          {
            for (size_t num7 = 0; num7 < storeCanMake.size(); ++num7)
              {
                storeCanMake[num7]->remove_reference();
              }
          }
        flagHasCanMake = false;
        storeCanMake.clear();
      }
    void initCanAlmostMake(void)
      {
        if (flagHasCanAlmostMake)
          {
            for (size_t num8 = 0; num8 < storeCanAlmostMake.size(); ++num8)
              {
                storeCanAlmostMake[num8]->remove_reference();
              }
          }
        flagHasCanAlmostMake = true;
        storeCanAlmostMake.clear();
      }
    void appendCanAlmostMake(DrinkRecipeJSON * to_append)
      {
        if (!flagHasCanAlmostMake)
          {
            flagHasCanAlmostMake = true;
            storeCanAlmostMake.clear();
          }
        assert(flagHasCanAlmostMake);
        to_append->add_reference();
        storeCanAlmostMake.push_back(to_append);
      }
    void unsetCanAlmostMake(void)
      {
        if (flagHasCanAlmostMake)
          {
            for (size_t num9 = 0; num9 < storeCanAlmostMake.size(); ++num9)
              {
                storeCanAlmostMake[num9]->remove_reference();
              }
          }
        flagHasCanAlmostMake = false;
        storeCanAlmostMake.clear();
      }

    virtual void extraWhatDrinkCanMakeQuestionAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraWhatDrinkCanMakeQuestionSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraWhatDrinkCanMakeQuestionLookup(key);
        if (old_field == NULL)
          {
            extraWhatDrinkCanMakeQuestionAppendPair(key, new_component);
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
            case 'C':
                if (strncmp(&(key[1]), "an", 2) == 0)
                  {
                    switch ((unsigned char)(key[3]))
                      {
                        case 'A':
                            if (strcmp(&(key[4]), "lmostMake") == 0)
                                {
                                fromJSONCanAlmostMake(new_component, false);
                                return;
                                }
                            break;
                        case 'M':
                            if (strcmp(&(key[4]), "ake") == 0)
                                {
                                fromJSONCanMake(new_component, false);
                                return;
                                }
                            break;
                        default:
                            break;
                      }
                  }
                break;
            case 'I':
                if (strcmp(&(key[1]), "ngredients") == 0)
                    {
                    fromJSONIngredients(new_component, false);
                    return;
                    }
                break;
            default:
                break;
          }
        extraWhatDrinkCanMakeQuestionAppendPair(key, new_component);
      }
    void extraInformationNuggetSetField(const char *key, JSONValue *new_component)
      {
        switch ((unsigned char)(key[0]))
          {
            case 'C':
                if (strncmp(&(key[1]), "an", 2) == 0)
                  {
                    switch ((unsigned char)(key[3]))
                      {
                        case 'A':
                            if (strcmp(&(key[4]), "lmostMake") == 0)
                                {
                                fromJSONCanAlmostMake(new_component, false);
                                return;
                                }
                            break;
                        case 'M':
                            if (strcmp(&(key[4]), "ake") == 0)
                                {
                                fromJSONCanMake(new_component, false);
                                return;
                                }
                            break;
                        default:
                            break;
                      }
                  }
                break;
            case 'I':
                if (strcmp(&(key[1]), "ngredients") == 0)
                    {
                    fromJSONIngredients(new_component, false);
                    return;
                    }
                break;
            default:
                break;
          }
        extraWhatDrinkCanMakeQuestionSetField(key, new_component);
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
        assert(flagHasIngredients);
        handler->start_pair("Ingredients");
        handler->start_array();
        for (size_t num1 = 0; num1 < storeIngredients.size(); ++num1)
          {
            storeIngredients[num1]->write_as_json(handler);
          }
        handler->finish_array();
        assert(flagHasCanMake);
        handler->start_pair("CanMake");
        handler->start_array();
        for (size_t num2 = 0; num2 < storeCanMake.size(); ++num2)
          {
            storeCanMake[num2]->write_as_json(handler);
          }
        handler->finish_array();
        assert(flagHasCanAlmostMake);
        handler->start_pair("CanAlmostMake");
        handler->start_array();
        for (size_t num3 = 0; num3 < storeCanAlmostMake.size(); ++num3)
          {
            storeCanAlmostMake[num3]->write_as_json(handler);
          }
        handler->finish_array();
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasIngredients()))
          {
            return "When parsing the object for %what%, the \"Ingredients\" field was missing.";
          }
        if (!(hasCanMake()))
          {
            return "When parsing the object for %what%, the \"CanMake\" field was missing.";
          }
        if (!(hasCanAlmostMake()))
          {
            return "When parsing the object for %what%, the \"CanAlmostMake\" field was missing.";
          }
        return NULL;
      }

    static WhatDrinkCanMakeQuestionJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static WhatDrinkCanMakeQuestionJSON *from_text(const char *text, bool ignore_extras = false)
      {
        WhatDrinkCanMakeQuestionJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<WhatDrinkCanMakeQuestionJSON>, WhatDrinkCanMakeQuestionJSON *, bool> generator("Type WhatDrinkCanMakeQuestion", ignore_extras);
            parse_json_value(text, "Text for WhatDrinkCanMakeQuestionJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static WhatDrinkCanMakeQuestionJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        WhatDrinkCanMakeQuestionJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<WhatDrinkCanMakeQuestionJSON>, WhatDrinkCanMakeQuestionJSON *, bool> generator("Type WhatDrinkCanMakeQuestion", ignore_extras);
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
        JSONHoldingArrayGenerator<DrinkIngredientJSON::Generator, RCHandle<DrinkIngredientJSON>, DrinkIngredientJSON *, bool > fieldGeneratorIngredients;
        JSONHoldingArrayGenerator<DrinkRecipeJSON::Generator, RCHandle<DrinkRecipeJSON>, DrinkRecipeJSON *, bool > fieldGeneratorCanMake;
        JSONHoldingArrayGenerator<DrinkRecipeJSON::Generator, RCHandle<DrinkRecipeJSON>, DrinkRecipeJSON *, bool > fieldGeneratorCanAlmostMake;
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
            if (!(strcmp(getInformationNuggetJSONKey().c_str(), "WhatDrinkCanMakeNugget") == 0))
                throw("The key field has a value other than `WhatDrinkCanMakeNugget'.");
            WhatDrinkCanMakeQuestionJSON *result = new WhatDrinkCanMakeQuestionJSON();
            assert(result != NULL);
            RCHandle<WhatDrinkCanMakeQuestionJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraWhatDrinkCanMakeQuestionAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void handle_result(InformationNuggetJSON *new_result)
          {
            handle_result((WhatDrinkCanMakeQuestionJSON *)new_result);
          }
        void finish(WhatDrinkCanMakeQuestionJSON *result)
          {
            if (fieldGeneratorIngredients.have_value)
              {
                result->initIngredients();
                size_t count = fieldGeneratorIngredients.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendIngredients(fieldGeneratorIngredients.value[num].referenced());
                  }
                fieldGeneratorIngredients.value.clear();
                fieldGeneratorIngredients.have_value = false;
              }
            else if (!(result->hasIngredients()))
              {
                error("When parsing the object for %what%, the \"Ingredients\" field was missing.");
              }
            if (fieldGeneratorCanMake.have_value)
              {
                result->initCanMake();
                size_t count = fieldGeneratorCanMake.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendCanMake(fieldGeneratorCanMake.value[num].referenced());
                  }
                fieldGeneratorCanMake.value.clear();
                fieldGeneratorCanMake.have_value = false;
              }
            else if (!(result->hasCanMake()))
              {
                error("When parsing the object for %what%, the \"CanMake\" field was missing.");
              }
            if (fieldGeneratorCanAlmostMake.have_value)
              {
                result->initCanAlmostMake();
                size_t count = fieldGeneratorCanAlmostMake.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendCanAlmostMake(fieldGeneratorCanAlmostMake.value[num].referenced());
                  }
                fieldGeneratorCanAlmostMake.value.clear();
                fieldGeneratorCanAlmostMake.have_value = false;
              }
            else if (!(result->hasCanAlmostMake()))
              {
                error("When parsing the object for %what%, the \"CanAlmostMake\" field was missing.");
              }
            InformationNuggetJSON::Generator::finish(result);
          }
        virtual void handle_result(WhatDrinkCanMakeQuestionJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'C':
                    if (strncmp(&(field_name[1]), "an", 2) == 0)
                      {
                        switch ((unsigned char)(field_name[3]))
                          {
                            case 'A':
                                if (strcmp(&(field_name[4]), "lmostMake") == 0)
                                    return &fieldGeneratorCanAlmostMake;
                                break;
                            case 'M':
                                if (strcmp(&(field_name[4]), "ake") == 0)
                                    return &fieldGeneratorCanMake;
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 'I':
                    if (strcmp(&(field_name[1]), "ngredients") == 0)
                        return &fieldGeneratorIngredients;
                    break;
                default:
                    break;
              }
            return InformationNuggetJSON::Generator::start_known_field(field_name);
          }

      public:
        Generator(bool ignore_extras = false) : InformationNuggetJSON::Generator(ignore_extras), fieldGeneratorIngredients("field \"Ingredients\" of the WhatDrinkCanMakeQuestion class", ignore_extras), fieldGeneratorCanMake("field \"CanMake\" of the WhatDrinkCanMakeQuestion class", ignore_extras), fieldGeneratorCanAlmostMake("field \"CanAlmostMake\" of the WhatDrinkCanMakeQuestion class", ignore_extras), unknownFieldGenerator(ignore_extras)
          {
            set_what("the WhatDrinkCanMakeQuestion class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorIngredients.reset();
            fieldGeneratorCanMake.reset();
            fieldGeneratorCanAlmostMake.reset();
            InformationNuggetJSON::Generator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* WHATDRINKCANMAKEQUESTIONJSON_H */
