/* file "DrinkRecipeJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef DRINKRECIPEJSON_H
#define DRINKRECIPEJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONHoldingArrayGenerator.h"
#include "JSONStringGenerator.h"
#include <vector>
#include <string>
#include "DrinkIngredientJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class DrinkRecipeJSON : public ReferenceCounted
  {
  public:
    enum TypeTagsKnownValues
      {
        Tags_fruity,
        Tags_strong,
        Tags_weak,
        Tags_bitter,
        Tags_sweet,
        Tags_easy,
        Tags_blue,
        Tags_green,
        Tags_red,
        Tags__none
      };
    struct TypeTags
      {
        bool in_known_list;
        std::string string_value;
        TypeTagsKnownValues list_value;

        TypeTags(void);
        TypeTags(const TypeTags &other);
        TypeTags(TypeTagsKnownValues other);
        bool  operator==(const TypeTags &other) const;
        bool  operator!=(const TypeTags &other) const;
        bool  operator<(const TypeTags &other) const;
        bool  operator>(const TypeTags &other) const;
        bool  operator>=(const TypeTags &other) const;
        bool  operator<=(const TypeTags &other) const;

      };

    static TypeTagsKnownValues  stringToTags(const char *chars);
    static const char * stringFromTags(TypeTagsKnownValues the_enum);

  private:
    bool flagHasName;
    std::string storeName;
    bool flagHasGlass;
    std::string storeGlass;
    bool flagHasImage;
    std::string storeImage;
    bool flagHasTags;
    std::vector< TypeTags > storeTags;
    bool flagHasIngredients;
    std::vector< DrinkIngredientJSON * > storeIngredients;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    DrinkRecipeJSON(const DrinkRecipeJSON &);
    DrinkRecipeJSON & operator=(const DrinkRecipeJSON &other);

    void  fromJSONName(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONGlass(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONImage(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONTags(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONIngredients(JSONValue *json_value, bool ignore_extras = false);


  public:
    DrinkRecipeJSON(void);
    virtual ~DrinkRecipeJSON(void);
    bool  hasName(void) const;
    std::string  getName(void);
    const std::string  getName(void) const;
    bool  hasGlass(void) const;
    std::string  getGlass(void);
    const std::string  getGlass(void) const;
    bool  hasImage(void) const;
    std::string  getImage(void);
    const std::string  getImage(void) const;
    bool  hasTags(void) const;
    size_t  countOfTags(void) const;
    TypeTags  elementOfTags(size_t element_num);
    const TypeTags  elementOfTags(size_t element_num) const;
    std::vector< TypeTags >  getTags(void);
    const std::vector< TypeTags >  getTags(void) const;
    bool  hasIngredients(void) const;
    size_t  countOfIngredients(void) const;
    DrinkIngredientJSON *  elementOfIngredients(size_t element_num);
    const DrinkIngredientJSON *  elementOfIngredients(size_t element_num) const;
    std::vector< DrinkIngredientJSON * >  getIngredients(void);
    const std::vector< DrinkIngredientJSON * >  getIngredients(void) const;

    virtual size_t extraDrinkRecipeComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraDrinkRecipeComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraDrinkRecipeComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraDrinkRecipeComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraDrinkRecipeLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraDrinkRecipeLookup(const char *field_name) const
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
    void setGlass(std::string new_value)
      {
        flagHasGlass = true;
        storeGlass = new_value;
      }
    void unsetGlass(void)
      {
        flagHasGlass = false;
      }
    void setImage(std::string new_value)
      {
        flagHasImage = true;
        storeImage = new_value;
      }
    void unsetImage(void)
      {
        flagHasImage = false;
      }
    void initTags(void)
      {
        flagHasTags = true;
        storeTags.clear();
      }
    void appendTags(TypeTags to_append)
      {
        if (!flagHasTags)
          {
            flagHasTags = true;
            storeTags.clear();
          }
        assert(flagHasTags);
        storeTags.push_back(to_append);
      }
    void appendTags(const char *chars)
      {
        TypeTagsKnownValues known = stringToTags(chars);
        TypeTags new_value;
        if (known == Tags__none)
          {
            new_value.in_known_list = false;
            new_value.string_value = chars;
          }
        else
          {
            new_value.in_known_list = true;
            new_value.list_value = known;
          }
        appendTags(new_value);
      }
    void appendTags(std::string the_string)
      {
        appendTags(the_string.c_str());
      }
    void appendTags(TypeTagsKnownValues new_value)
      {
        TypeTags new_full_value;
        assert(new_value != Tags__none);
        new_full_value.in_known_list = true;
        new_full_value.list_value = new_value;
        appendTags(new_full_value);
      }
    void unsetTags(void)
      {
        flagHasTags = false;
        storeTags.clear();
      }
    void initIngredients(void)
      {
        if (flagHasIngredients)
          {
            for (size_t num2 = 0; num2 < storeIngredients.size(); ++num2)
              {
                storeIngredients[num2]->remove_reference();
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
            for (size_t num3 = 0; num3 < storeIngredients.size(); ++num3)
              {
                storeIngredients[num3]->remove_reference();
              }
          }
        flagHasIngredients = false;
        storeIngredients.clear();
      }

    virtual void extraDrinkRecipeAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraDrinkRecipeSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraDrinkRecipeLookup(key);
        if (old_field == NULL)
          {
            extraDrinkRecipeAppendPair(key, new_component);
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
        assert(flagHasName);
        handler->start_pair("Name");
        handler->string_value(storeName);
        if (flagHasGlass)
          {
            handler->start_pair("Glass");
            handler->string_value(storeGlass);
          }
        if (flagHasImage)
          {
            handler->start_pair("Image");
            handler->string_value(storeImage);
          }
        if (flagHasTags)
          {
            handler->start_pair("Tags");
            handler->start_array();
            for (size_t num1 = 0; num1 < storeTags.size(); ++num1)
              {
                if (storeTags[num1].in_known_list)
                  {
                    switch (storeTags[num1].list_value)
                      {
                        case Tags_fruity:
                            handler->string_value("fruity");
                            break;
                        case Tags_strong:
                            handler->string_value("strong");
                            break;
                        case Tags_weak:
                            handler->string_value("weak");
                            break;
                        case Tags_bitter:
                            handler->string_value("bitter");
                            break;
                        case Tags_sweet:
                            handler->string_value("sweet");
                            break;
                        case Tags_easy:
                            handler->string_value("easy");
                            break;
                        case Tags_blue:
                            handler->string_value("blue");
                            break;
                        case Tags_green:
                            handler->string_value("green");
                            break;
                        case Tags_red:
                            handler->string_value("red");
                            break;
                        default:
                            assert(false);
                      }
                  }
                else
                  {
                            handler->string_value(storeTags[num1].string_value);
                  }
              }
            handler->finish_array();
          }
        if (flagHasIngredients)
          {
            handler->start_pair("Ingredients");
            handler->start_array();
            for (size_t num2 = 0; num2 < storeIngredients.size(); ++num2)
              {
                storeIngredients[num2]->write_as_json(handler);
              }
            handler->finish_array();
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

    static DrinkRecipeJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static DrinkRecipeJSON *from_text(const char *text, bool ignore_extras = false)
      {
        DrinkRecipeJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<DrinkRecipeJSON>, DrinkRecipeJSON *, bool> generator("Type DrinkRecipe", ignore_extras);
            parse_json_value(text, "Text for DrinkRecipeJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static DrinkRecipeJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        DrinkRecipeJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<DrinkRecipeJSON>, DrinkRecipeJSON *, bool> generator("Type DrinkRecipe", ignore_extras);
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
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorGlass;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorImage;
    class FieldGeneratorTags : public JSONStringGenerator
          {
          protected:
            FieldGeneratorTags(const char *what)
              {
                set_what(what);
              }
            FieldGeneratorTags(void)
              {
              }
            void handle_result(const char *result)
              {
                TypeTagsKnownValues known = stringToTags(result);
                TypeTags new_value;
                if (known == Tags__none)
                  {
                    new_value.in_known_list = false;
                    new_value.string_value = result;
                  }
                else
                  {
                    new_value.in_known_list = true;
                    new_value.list_value = known;
                  }
                handle_result(new_value);
              }
            virtual void handle_result(TypeTags result) = 0;
          };
        JSONHoldingArrayGenerator<FieldGeneratorTags, TypeTags, TypeTags > fieldGeneratorTags;
        JSONHoldingArrayGenerator<DrinkIngredientJSON::Generator, RCHandle<DrinkIngredientJSON>, DrinkIngredientJSON *, bool > fieldGeneratorIngredients;
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
            DrinkRecipeJSON *result = new DrinkRecipeJSON();
            assert(result != NULL);
            RCHandle<DrinkRecipeJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraDrinkRecipeAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void finish(DrinkRecipeJSON *result)
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
            if (fieldGeneratorGlass.have_value)
              {
                result->setGlass(fieldGeneratorGlass.value);
                fieldGeneratorGlass.have_value = false;
              }
            if (fieldGeneratorImage.have_value)
              {
                result->setImage(fieldGeneratorImage.value);
                fieldGeneratorImage.have_value = false;
              }
            if (fieldGeneratorTags.have_value)
              {
                result->initTags();
                size_t count = fieldGeneratorTags.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendTags(fieldGeneratorTags.value[num]);
                  }
                fieldGeneratorTags.value.clear();
                fieldGeneratorTags.have_value = false;
              }
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
          }
        virtual void handle_result(DrinkRecipeJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'G':
                    if (strcmp(&(field_name[1]), "lass") == 0)
                        return &fieldGeneratorGlass;
                    break;
                case 'I':
                    switch ((unsigned char)(field_name[1]))
                      {
                        case 'm':
                            if (strcmp(&(field_name[2]), "age") == 0)
                                return &fieldGeneratorImage;
                            break;
                        case 'n':
                            if (strcmp(&(field_name[2]), "gredients") == 0)
                                return &fieldGeneratorIngredients;
                            break;
                        default:
                            break;
                      }
                    break;
                case 'N':
                    if (strcmp(&(field_name[1]), "ame") == 0)
                        return &fieldGeneratorName;
                    break;
                case 'T':
                    if (strcmp(&(field_name[1]), "ags") == 0)
                        return &fieldGeneratorTags;
                    break;
                default:
                    break;
              }
            return NULL;
          }

      public:
        Generator(bool ignore_extras = false) : fieldGeneratorName("field \"Name\" of the DrinkRecipe class"), fieldGeneratorGlass("field \"Glass\" of the DrinkRecipe class"), fieldGeneratorImage("field \"Image\" of the DrinkRecipe class"), fieldGeneratorTags("field \"Tags\" of the DrinkRecipe class"), fieldGeneratorIngredients("field \"Ingredients\" of the DrinkRecipe class", ignore_extras), unknownFieldGenerator(ignore_extras)
          {
            set_what("the DrinkRecipe class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorName.reset();
            fieldGeneratorGlass.reset();
            fieldGeneratorImage.reset();
            fieldGeneratorTags.reset();
            fieldGeneratorIngredients.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* DRINKRECIPEJSON_H */
