/* file "VerticalTemplateListTemplateJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef VERTICALTEMPLATELISTTEMPLATEJSON_H
#define VERTICALTEMPLATELISTTEMPLATEJSON_H

#pragma interface

#include "TemplateJSON.h"
#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONHoldingArrayGenerator.h"
#include "JSONStringGenerator.h"
#include "JSONBooleanGenerator.h"
#include <vector>
#include <string>
#include "TemplateJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class VerticalTemplateListTemplateJSON : public TemplateJSON
  {
  public:
    class TypeItemsJSON : public ReferenceCounted
      {
      private:
        bool flagHasDividerBelow;
        bool storeDividerBelow;
        bool flagHasTemplateName;
        std::string storeTemplateName;
        bool flagHasTemplateData;
        TemplateJSON * storeTemplateData;
        std::vector<std::string> extraKeys;
        std::vector<JSONValue *> extraValues;
        string_index *extraIndex;

        TypeItemsJSON(const TypeItemsJSON &);
        TypeItemsJSON & operator=(const TypeItemsJSON &other);

        void  fromJSONDividerBelow(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONTemplateName(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONTemplateData(JSONValue *json_value, bool ignore_extras = false);


      public:
        TypeItemsJSON(void);
        virtual ~TypeItemsJSON(void);
        bool  hasDividerBelow(void) const;
        bool  getDividerBelow(void);
        const bool  getDividerBelow(void) const;
        bool  hasTemplateName(void) const;
        std::string  getTemplateName(void);
        const std::string  getTemplateName(void) const;
        bool  hasTemplateData(void) const;
        TemplateJSON *  getTemplateData(void);
        const TemplateJSON *  getTemplateData(void) const;

        virtual size_t extraTypeItemsComponentCount(void) const
          {
            assert(extraKeys.size() == extraValues.size());
            return extraKeys.size();
          }
        virtual const char *extraTypeItemsComponentKey(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraKeys[component_num].c_str();
          }
        virtual JSONValue *extraTypeItemsComponentValue(size_t component_num)
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        virtual const JSONValue *extraTypeItemsComponentValue(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        virtual JSONValue *extraTypeItemsLookup(const char *field_name)
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }
        virtual const JSONValue *extraTypeItemsLookup(const char *field_name) const
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }

        void setDividerBelow(bool new_value)
          {
            flagHasDividerBelow = true;
            storeDividerBelow = new_value;
          }
        void unsetDividerBelow(void)
          {
            flagHasDividerBelow = false;
          }
        void setTemplateName(std::string new_value)
          {
            flagHasTemplateName = true;
            storeTemplateName = new_value;
          }
        void unsetTemplateName(void)
          {
            flagHasTemplateName = false;
          }
        void setTemplateData(TemplateJSON * new_value)
          {
            new_value->add_reference();
            if (flagHasTemplateData)
              {
                storeTemplateData->remove_reference();
              }
            flagHasTemplateData = true;
            storeTemplateData = new_value;
          }
        void unsetTemplateData(void)
          {
            if (flagHasTemplateData)
              {
                storeTemplateData->remove_reference();
              }
            flagHasTemplateData = false;
          }

        virtual void extraTypeItemsAppendPair(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            assert(extraKeys.size() == extraValues.size());
            extraKeys.push_back(key);
            extraValues.push_back(new_component);
            enter_into_string_index(extraIndex, key, new_component);
            new_component->add_reference();
          }
        virtual void extraTypeItemsSetField(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            JSONValue *old_field = extraTypeItemsLookup(key);
            if (old_field == NULL)
              {
                extraTypeItemsAppendPair(key, new_component);
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
            if (flagHasDividerBelow)
              {
                handler->start_pair("DividerBelow");
                handler->boolean_value(storeDividerBelow);
              }
            assert(flagHasTemplateName);
            handler->start_pair("TemplateName");
            handler->string_value(storeTemplateName);
            assert(flagHasTemplateData);
            handler->start_pair("TemplateData");
            storeTemplateData->write_as_json(handler);
          }
        virtual const char *missing_field_error(void) const
          {
            if (!(hasTemplateName()))
              {
                return "When parsing the object for %what%, the \"TemplateName\" field was missing.";
              }
            if (!(hasTemplateData()))
              {
                return "When parsing the object for %what%, the \"TemplateData\" field was missing.";
              }
            return NULL;
          }

        static TypeItemsJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
        static TypeItemsJSON *from_text(const char *text, bool ignore_extras = false)
          {
            TypeItemsJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeItemsJSON>, TypeItemsJSON *, bool> generator("Type TypeItems", ignore_extras);
                parse_json_value(text, "Text for TypeItemsJSON", &generator);
                assert(generator.have_value);
                result = generator.value.referenced();
                result->add_reference();
              };
            result->remove_reference_no_delete();
            return result;
          }
        static TypeItemsJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
          {
            TypeItemsJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeItemsJSON>, TypeItemsJSON *, bool> generator("Type TypeItems", ignore_extras);
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
            JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorDividerBelow;
            JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorTemplateName;
            JSONHoldingGenerator<TemplateJSON::Generator, RCHandle<TemplateJSON>, TemplateJSON *, bool > fieldGeneratorTemplateData;
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
                TypeItemsJSON *result = new TypeItemsJSON();
                assert(result != NULL);
                RCHandle<TypeItemsJSON> result_holder = result;
                finish(result);
                size_t extra_count = unknownFieldGenerator.field_names.size();
                assert(extra_count == unknownFieldGenerator.field_values.size());
                for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
                  {
                    result->extraTypeItemsAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
                  }
                unknownFieldGenerator.field_names.clear();
                unknownFieldGenerator.field_values.clear();
                destroy_string_index(unknownFieldGenerator.index);
            unknownFieldGenerator.index = create_string_index();
                handle_result(result);
              }
            void finish(TypeItemsJSON *result)
              {
                if (fieldGeneratorDividerBelow.have_value)
                  {
                    result->setDividerBelow(fieldGeneratorDividerBelow.value);
                    fieldGeneratorDividerBelow.have_value = false;
                  }
                if (fieldGeneratorTemplateName.have_value)
                  {
                    result->setTemplateName(fieldGeneratorTemplateName.value);
                    fieldGeneratorTemplateName.have_value = false;
                  }
                else if (!(result->hasTemplateName()))
                  {
                    error("When parsing the object for %what%, the \"TemplateName\" field was missing.");
                  }
                if (fieldGeneratorTemplateData.have_value)
                  {
                    result->setTemplateData(fieldGeneratorTemplateData.value.referenced());
                    fieldGeneratorTemplateData.have_value = false;
                  }
                else if (!(result->hasTemplateData()))
                  {
                    error("When parsing the object for %what%, the \"TemplateData\" field was missing.");
                  }
              }
            virtual void handle_result(TypeItemsJSON *new_result) = 0;
            virtual JSONHandler *start_known_field(const char *field_name)
              {
                switch ((unsigned char)(field_name[0]))
                  {
                    case 'D':
                        if (strcmp(&(field_name[1]), "ividerBelow") == 0)
                            return &fieldGeneratorDividerBelow;
                        break;
                    case 'T':
                        if (strncmp(&(field_name[1]), "emplate", 7) == 0)
                          {
                            switch ((unsigned char)(field_name[8]))
                              {
                                case 'D':
                                    if (strcmp(&(field_name[9]), "ata") == 0)
                                        return &fieldGeneratorTemplateData;
                                    break;
                                case 'N':
                                    if (strcmp(&(field_name[9]), "ame") == 0)
                                        return &fieldGeneratorTemplateName;
                                    break;
                                default:
                                    break;
                              }
                          }
                        break;
                    default:
                        break;
                  }
                return NULL;
              }

          public:
            Generator(bool ignore_extras = false) : fieldGeneratorDividerBelow("field \"DividerBelow\" of the TypeItems class"), fieldGeneratorTemplateName("field \"TemplateName\" of the TypeItems class"), fieldGeneratorTemplateData("field \"TemplateData\" of the TypeItems class", ignore_extras), unknownFieldGenerator(ignore_extras)
              {
                set_what("the TypeItems class");
              }
            ~Generator(void)
              {
              }

            void reset(void)
              {
                fieldGeneratorDividerBelow.reset();
                fieldGeneratorTemplateName.reset();
                fieldGeneratorTemplateData.reset();
                JSONObjectGenerator::reset();
                unknownFieldGenerator.reset();
              }
          };
      };

  private:
    bool flagHasItems;
    std::vector< TypeItemsJSON * > storeItems;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    VerticalTemplateListTemplateJSON(const VerticalTemplateListTemplateJSON &);
    VerticalTemplateListTemplateJSON & operator=(const VerticalTemplateListTemplateJSON &other);

    JSONValue * extraItemsToJSON(void) const;

    void  fromJSONItems(JSONValue *json_value, bool ignore_extras = false);


  public:
    VerticalTemplateListTemplateJSON(void);
    virtual ~VerticalTemplateListTemplateJSON(void);
    const char * getTemplateName(void) const;
    bool  hasItems(void) const;
    size_t  countOfItems(void) const;
    TypeItemsJSON *  elementOfItems(size_t element_num);
    const TypeItemsJSON *  elementOfItems(size_t element_num) const;
    std::vector< TypeItemsJSON * >  getItems(void);
    const std::vector< TypeItemsJSON * >  getItems(void) const;

    virtual size_t extraVerticalTemplateListTemplateComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraVerticalTemplateListTemplateComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraVerticalTemplateListTemplateComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraVerticalTemplateListTemplateComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraVerticalTemplateListTemplateLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraVerticalTemplateListTemplateLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    size_t extraTemplateComponentCount(void) const
      {
        size_t result = 0;
        if (flagHasItems)
            ++result;
        result += extraVerticalTemplateListTemplateComponentCount();
        return result;
      }
    const char *extraTemplateComponentKey(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasItems)
          {
            if (remainder == 0)
                return "Items";
            --remainder;
          }
        return extraVerticalTemplateListTemplateComponentKey(remainder);
      }
    JSONValue *extraTemplateComponentValue(size_t component_num)
      {
        size_t remainder = component_num;
        if (flagHasItems)
          {
            if (remainder == 0)
                return extraItemsToJSON();
            --remainder;
          }
        return extraVerticalTemplateListTemplateComponentValue(remainder);
      }
    const JSONValue *extraTemplateComponentValue(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasItems)
          {
            if (remainder == 0)
                return extraItemsToJSON();
            --remainder;
          }
        return extraVerticalTemplateListTemplateComponentValue(remainder);
      }
    JSONValue *extraTemplateLookup(const char *field_name)
      {
        if (strcmp(field_name, "Items") == 0)
            return (flagHasItems ? extraItemsToJSON() : NULL);
        return extraVerticalTemplateListTemplateLookup(field_name);
      }
    const JSONValue *extraTemplateLookup(const char *field_name) const
      {
        if (strcmp(field_name, "Items") == 0)
            return (flagHasItems ? extraItemsToJSON() : NULL);
        return extraVerticalTemplateListTemplateLookup(field_name);
      }

    void initItems(void)
      {
        if (flagHasItems)
          {
            for (size_t num2 = 0; num2 < storeItems.size(); ++num2)
              {
                storeItems[num2]->remove_reference();
              }
          }
        flagHasItems = true;
        storeItems.clear();
      }
    void appendItems(TypeItemsJSON * to_append)
      {
        if (!flagHasItems)
          {
            flagHasItems = true;
            storeItems.clear();
          }
        assert(flagHasItems);
        to_append->add_reference();
        storeItems.push_back(to_append);
      }
    void unsetItems(void)
      {
        if (flagHasItems)
          {
            for (size_t num3 = 0; num3 < storeItems.size(); ++num3)
              {
                storeItems[num3]->remove_reference();
              }
          }
        flagHasItems = false;
        storeItems.clear();
      }

    virtual void extraVerticalTemplateListTemplateAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraVerticalTemplateListTemplateSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraVerticalTemplateListTemplateLookup(key);
        if (old_field == NULL)
          {
            extraVerticalTemplateListTemplateAppendPair(key, new_component);
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
    void extraTemplateAppendPair(const char *key, JSONValue *new_component)
      {
        if (strcmp(key, "Items") == 0)
            {
            fromJSONItems(new_component, false);
            return;
            }
        extraVerticalTemplateListTemplateAppendPair(key, new_component);
      }
    void extraTemplateSetField(const char *key, JSONValue *new_component)
      {
        if (strcmp(key, "Items") == 0)
            {
            fromJSONItems(new_component, false);
            return;
            }
        extraVerticalTemplateListTemplateSetField(key, new_component);
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
        TemplateJSON::write_fields_as_json(handler);
        assert(flagHasItems);
        handler->start_pair("Items");
        assert(storeItems.size() >= 1);
        handler->start_array();
        for (size_t num1 = 0; num1 < storeItems.size(); ++num1)
          {
            storeItems[num1]->write_as_json(handler);
          }
        handler->finish_array();
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasItems()))
          {
            return "When parsing the object for %what%, the \"Items\" field was missing.";
          }
        return NULL;
      }

    static VerticalTemplateListTemplateJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static VerticalTemplateListTemplateJSON *from_text(const char *text, bool ignore_extras = false)
      {
        VerticalTemplateListTemplateJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<VerticalTemplateListTemplateJSON>, VerticalTemplateListTemplateJSON *, bool> generator("Type VerticalTemplateListTemplate", ignore_extras);
            parse_json_value(text, "Text for VerticalTemplateListTemplateJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static VerticalTemplateListTemplateJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        VerticalTemplateListTemplateJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<VerticalTemplateListTemplateJSON>, VerticalTemplateListTemplateJSON *, bool> generator("Type VerticalTemplateListTemplate", ignore_extras);
            parse_json_value(fp, file_name, &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    class Generator : public TemplateJSON::Generator
      {
      private:
        JSONHoldingArrayGenerator<TypeItemsJSON::Generator, RCHandle<TypeItemsJSON>, TypeItemsJSON *, bool > fieldGeneratorItems;
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
            if (!(strcmp(getTemplateJSONKey().c_str(), "VerticalTemplateList") == 0))
                throw("The key field has a value other than `VerticalTemplateList'.");
            VerticalTemplateListTemplateJSON *result = new VerticalTemplateListTemplateJSON();
            assert(result != NULL);
            RCHandle<VerticalTemplateListTemplateJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraVerticalTemplateListTemplateAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void handle_result(TemplateJSON *new_result)
          {
            handle_result((VerticalTemplateListTemplateJSON *)new_result);
          }
        void finish(VerticalTemplateListTemplateJSON *result)
          {
            if (fieldGeneratorItems.have_value)
              {
                result->initItems();
                size_t count = fieldGeneratorItems.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendItems(fieldGeneratorItems.value[num].referenced());
                  }
                fieldGeneratorItems.value.clear();
                fieldGeneratorItems.have_value = false;
              }
            else if (!(result->hasItems()))
              {
                error("When parsing the object for %what%, the \"Items\" field was missing.");
              }
            TemplateJSON::Generator::finish(result);
          }
        virtual void handle_result(VerticalTemplateListTemplateJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            if (strcmp(field_name, "Items") == 0)
                return &fieldGeneratorItems;
            return TemplateJSON::Generator::start_known_field(field_name);
          }

      public:
        Generator(bool ignore_extras = false) : TemplateJSON::Generator(ignore_extras), fieldGeneratorItems("field \"Items\" of the VerticalTemplateListTemplate class", ignore_extras), unknownFieldGenerator(ignore_extras)
          {
            set_what("the VerticalTemplateListTemplate class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorItems.reset();
            TemplateJSON::Generator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* VERTICALTEMPLATELISTTEMPLATEJSON_H */
