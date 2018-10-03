/* file "AutoActionTemplateJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef AUTOACTIONTEMPLATEJSON_H
#define AUTOACTIONTEMPLATEJSON_H

#pragma interface

#include "TemplateJSON.h"
#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONHoldingArrayGenerator.h"
#include "JSONStringGenerator.h"
#include <vector>
#include <string>
#include "AndroidIntentJSON.h"
#include "TemplateJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class AutoActionTemplateJSON : public TemplateJSON
  {
  public:
    class TypeItemJSON : public ReferenceCounted
      {
      private:
        bool flagHasTemplateName;
        std::string storeTemplateName;
        bool flagHasTemplateData;
        TemplateJSON * storeTemplateData;
        std::vector<std::string> extraKeys;
        std::vector<JSONValue *> extraValues;
        string_index *extraIndex;

        TypeItemJSON(const TypeItemJSON &);
        TypeItemJSON & operator=(const TypeItemJSON &other);

        void  fromJSONTemplateName(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONTemplateData(JSONValue *json_value, bool ignore_extras = false);


      public:
        TypeItemJSON(void);
        virtual ~TypeItemJSON(void);
        bool  hasTemplateName(void) const;
        std::string  getTemplateName(void);
        const std::string  getTemplateName(void) const;
        bool  hasTemplateData(void) const;
        TemplateJSON *  getTemplateData(void);
        const TemplateJSON *  getTemplateData(void) const;

        virtual size_t extraTypeItemComponentCount(void) const
          {
            assert(extraKeys.size() == extraValues.size());
            return extraKeys.size();
          }
        virtual const char *extraTypeItemComponentKey(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraKeys[component_num].c_str();
          }
        virtual JSONValue *extraTypeItemComponentValue(size_t component_num)
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        virtual const JSONValue *extraTypeItemComponentValue(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        virtual JSONValue *extraTypeItemLookup(const char *field_name)
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }
        virtual const JSONValue *extraTypeItemLookup(const char *field_name) const
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
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

        virtual void extraTypeItemAppendPair(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            assert(extraKeys.size() == extraValues.size());
            extraKeys.push_back(key);
            extraValues.push_back(new_component);
            enter_into_string_index(extraIndex, key, new_component);
            new_component->add_reference();
          }
        virtual void extraTypeItemSetField(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            JSONValue *old_field = extraTypeItemLookup(key);
            if (old_field == NULL)
              {
                extraTypeItemAppendPair(key, new_component);
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

        static TypeItemJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
        static TypeItemJSON *from_text(const char *text, bool ignore_extras = false)
          {
            TypeItemJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeItemJSON>, TypeItemJSON *, bool> generator("Type TypeItem", ignore_extras);
                parse_json_value(text, "Text for TypeItemJSON", &generator);
                assert(generator.have_value);
                result = generator.value.referenced();
                result->add_reference();
              };
            result->remove_reference_no_delete();
            return result;
          }
        static TypeItemJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
          {
            TypeItemJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeItemJSON>, TypeItemJSON *, bool> generator("Type TypeItem", ignore_extras);
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
                TypeItemJSON *result = new TypeItemJSON();
                assert(result != NULL);
                RCHandle<TypeItemJSON> result_holder = result;
                finish(result);
                size_t extra_count = unknownFieldGenerator.field_names.size();
                assert(extra_count == unknownFieldGenerator.field_values.size());
                for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
                  {
                    result->extraTypeItemAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
                  }
                unknownFieldGenerator.field_names.clear();
                unknownFieldGenerator.field_values.clear();
                destroy_string_index(unknownFieldGenerator.index);
            unknownFieldGenerator.index = create_string_index();
                handle_result(result);
              }
            void finish(TypeItemJSON *result)
              {
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
            virtual void handle_result(TypeItemJSON *new_result) = 0;
            virtual JSONHandler *start_known_field(const char *field_name)
              {
                if (strncmp(field_name, "Template", 8) == 0)
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
                return NULL;
              }

          public:
            Generator(bool ignore_extras = false) : fieldGeneratorTemplateName("field \"TemplateName\" of the TypeItem class"), fieldGeneratorTemplateData("field \"TemplateData\" of the TypeItem class", ignore_extras), unknownFieldGenerator(ignore_extras)
              {
                set_what("the TypeItem class");
              }
            ~Generator(void)
              {
              }

            void reset(void)
              {
                fieldGeneratorTemplateName.reset();
                fieldGeneratorTemplateData.reset();
                JSONObjectGenerator::reset();
                unknownFieldGenerator.reset();
              }
          };
      };

  private:
    bool flagHasActionText;
    std::string storeActionText;
    bool flagHasActionTextInProgress;
    std::string storeActionTextInProgress;
    bool flagHasActionAndroidIntent;
    AndroidIntentJSON * storeActionAndroidIntent;
    bool flagHasActionURIs;
    std::vector< std::string > storeActionURIs;
    bool flagHasItem;
    TypeItemJSON * storeItem;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    AutoActionTemplateJSON(const AutoActionTemplateJSON &);
    AutoActionTemplateJSON & operator=(const AutoActionTemplateJSON &other);

    JSONValue * extraActionTextToJSON(void) const;
    JSONValue * extraActionTextInProgressToJSON(void) const;
    JSONValue * extraActionAndroidIntentToJSON(void) const;
    JSONValue * extraActionURIsToJSON(void) const;
    JSONValue * extraItemToJSON(void) const;

    void  fromJSONActionText(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONActionTextInProgress(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONActionAndroidIntent(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONActionURIs(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONItem(JSONValue *json_value, bool ignore_extras = false);


  public:
    AutoActionTemplateJSON(void);
    virtual ~AutoActionTemplateJSON(void);
    const char * getTemplateName(void) const;
    bool  hasActionText(void) const;
    std::string  getActionText(void);
    const std::string  getActionText(void) const;
    bool  hasActionTextInProgress(void) const;
    std::string  getActionTextInProgress(void);
    const std::string  getActionTextInProgress(void) const;
    bool  hasActionAndroidIntent(void) const;
    AndroidIntentJSON *  getActionAndroidIntent(void);
    const AndroidIntentJSON *  getActionAndroidIntent(void) const;
    bool  hasActionURIs(void) const;
    size_t  countOfActionURIs(void) const;
    std::string  elementOfActionURIs(size_t element_num);
    const std::string  elementOfActionURIs(size_t element_num) const;
    std::vector< std::string >  getActionURIs(void);
    const std::vector< std::string >  getActionURIs(void) const;
    bool  hasItem(void) const;
    TypeItemJSON *  getItem(void);
    const TypeItemJSON *  getItem(void) const;

    virtual size_t extraAutoActionTemplateComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraAutoActionTemplateComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraAutoActionTemplateComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraAutoActionTemplateComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraAutoActionTemplateLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraAutoActionTemplateLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    size_t extraTemplateComponentCount(void) const
      {
        size_t result = 0;
        if (flagHasActionText)
            ++result;
        if (flagHasActionTextInProgress)
            ++result;
        if (flagHasActionAndroidIntent)
            ++result;
        if (flagHasActionURIs)
            ++result;
        if (flagHasItem)
            ++result;
        result += extraAutoActionTemplateComponentCount();
        return result;
      }
    const char *extraTemplateComponentKey(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasActionText)
          {
            if (remainder == 0)
                return "ActionText";
            --remainder;
          }
        if (flagHasActionTextInProgress)
          {
            if (remainder == 0)
                return "ActionTextInProgress";
            --remainder;
          }
        if (flagHasActionAndroidIntent)
          {
            if (remainder == 0)
                return "ActionAndroidIntent";
            --remainder;
          }
        if (flagHasActionURIs)
          {
            if (remainder == 0)
                return "ActionURIs";
            --remainder;
          }
        if (flagHasItem)
          {
            if (remainder == 0)
                return "Item";
            --remainder;
          }
        return extraAutoActionTemplateComponentKey(remainder);
      }
    JSONValue *extraTemplateComponentValue(size_t component_num)
      {
        size_t remainder = component_num;
        if (flagHasActionText)
          {
            if (remainder == 0)
                return extraActionTextToJSON();
            --remainder;
          }
        if (flagHasActionTextInProgress)
          {
            if (remainder == 0)
                return extraActionTextInProgressToJSON();
            --remainder;
          }
        if (flagHasActionAndroidIntent)
          {
            if (remainder == 0)
                return extraActionAndroidIntentToJSON();
            --remainder;
          }
        if (flagHasActionURIs)
          {
            if (remainder == 0)
                return extraActionURIsToJSON();
            --remainder;
          }
        if (flagHasItem)
          {
            if (remainder == 0)
                return extraItemToJSON();
            --remainder;
          }
        return extraAutoActionTemplateComponentValue(remainder);
      }
    const JSONValue *extraTemplateComponentValue(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasActionText)
          {
            if (remainder == 0)
                return extraActionTextToJSON();
            --remainder;
          }
        if (flagHasActionTextInProgress)
          {
            if (remainder == 0)
                return extraActionTextInProgressToJSON();
            --remainder;
          }
        if (flagHasActionAndroidIntent)
          {
            if (remainder == 0)
                return extraActionAndroidIntentToJSON();
            --remainder;
          }
        if (flagHasActionURIs)
          {
            if (remainder == 0)
                return extraActionURIsToJSON();
            --remainder;
          }
        if (flagHasItem)
          {
            if (remainder == 0)
                return extraItemToJSON();
            --remainder;
          }
        return extraAutoActionTemplateComponentValue(remainder);
      }
    JSONValue *extraTemplateLookup(const char *field_name)
      {
        switch ((unsigned char)(field_name[0]))
          {
            case 'A':
                if (strncmp(&(field_name[1]), "ction", 5) == 0)
                  {
                    switch ((unsigned char)(field_name[6]))
                      {
                        case 'A':
                            if (strcmp(&(field_name[7]), "ndroidIntent") == 0)
                                return (flagHasActionAndroidIntent ? extraActionAndroidIntentToJSON() : NULL);
                            break;
                        case 'T':
                            if (strncmp(&(field_name[7]), "ext", 3) == 0)
                              {
                                switch ((unsigned char)(field_name[10]))
                                  {
                                    case 0:
                                        return (flagHasActionText ? extraActionTextToJSON() : NULL);
                                    case 'I':
                                        if (strcmp(&(field_name[11]), "nProgress") == 0)
                                            return (flagHasActionTextInProgress ? extraActionTextInProgressToJSON() : NULL);
                                        break;
                                    default:
                                        break;
                                  }
                              }
                            break;
                        case 'U':
                            if (strcmp(&(field_name[7]), "RIs") == 0)
                                return (flagHasActionURIs ? extraActionURIsToJSON() : NULL);
                            break;
                        default:
                            break;
                      }
                  }
                break;
            case 'I':
                if (strcmp(&(field_name[1]), "tem") == 0)
                    return (flagHasItem ? extraItemToJSON() : NULL);
                break;
            default:
                break;
          }
        return extraAutoActionTemplateLookup(field_name);
      }
    const JSONValue *extraTemplateLookup(const char *field_name) const
      {
        switch ((unsigned char)(field_name[0]))
          {
            case 'A':
                if (strncmp(&(field_name[1]), "ction", 5) == 0)
                  {
                    switch ((unsigned char)(field_name[6]))
                      {
                        case 'A':
                            if (strcmp(&(field_name[7]), "ndroidIntent") == 0)
                                return (flagHasActionAndroidIntent ? extraActionAndroidIntentToJSON() : NULL);
                            break;
                        case 'T':
                            if (strncmp(&(field_name[7]), "ext", 3) == 0)
                              {
                                switch ((unsigned char)(field_name[10]))
                                  {
                                    case 0:
                                        return (flagHasActionText ? extraActionTextToJSON() : NULL);
                                    case 'I':
                                        if (strcmp(&(field_name[11]), "nProgress") == 0)
                                            return (flagHasActionTextInProgress ? extraActionTextInProgressToJSON() : NULL);
                                        break;
                                    default:
                                        break;
                                  }
                              }
                            break;
                        case 'U':
                            if (strcmp(&(field_name[7]), "RIs") == 0)
                                return (flagHasActionURIs ? extraActionURIsToJSON() : NULL);
                            break;
                        default:
                            break;
                      }
                  }
                break;
            case 'I':
                if (strcmp(&(field_name[1]), "tem") == 0)
                    return (flagHasItem ? extraItemToJSON() : NULL);
                break;
            default:
                break;
          }
        return extraAutoActionTemplateLookup(field_name);
      }

    void setActionText(std::string new_value)
      {
        flagHasActionText = true;
        storeActionText = new_value;
      }
    void unsetActionText(void)
      {
        flagHasActionText = false;
      }
    void setActionTextInProgress(std::string new_value)
      {
        flagHasActionTextInProgress = true;
        storeActionTextInProgress = new_value;
      }
    void unsetActionTextInProgress(void)
      {
        flagHasActionTextInProgress = false;
      }
    void setActionAndroidIntent(AndroidIntentJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasActionAndroidIntent)
          {
            storeActionAndroidIntent->remove_reference();
          }
        flagHasActionAndroidIntent = true;
        storeActionAndroidIntent = new_value;
      }
    void unsetActionAndroidIntent(void)
      {
        if (flagHasActionAndroidIntent)
          {
            storeActionAndroidIntent->remove_reference();
          }
        flagHasActionAndroidIntent = false;
      }
    void initActionURIs(void)
      {
        flagHasActionURIs = true;
        storeActionURIs.clear();
      }
    void appendActionURIs(std::string to_append)
      {
        if (!flagHasActionURIs)
          {
            flagHasActionURIs = true;
            storeActionURIs.clear();
          }
        assert(flagHasActionURIs);
        storeActionURIs.push_back(to_append);
      }
    void unsetActionURIs(void)
      {
        flagHasActionURIs = false;
        storeActionURIs.clear();
      }
    void setItem(TypeItemJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasItem)
          {
            storeItem->remove_reference();
          }
        flagHasItem = true;
        storeItem = new_value;
      }
    void unsetItem(void)
      {
        if (flagHasItem)
          {
            storeItem->remove_reference();
          }
        flagHasItem = false;
      }

    virtual void extraAutoActionTemplateAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraAutoActionTemplateSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraAutoActionTemplateLookup(key);
        if (old_field == NULL)
          {
            extraAutoActionTemplateAppendPair(key, new_component);
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
        switch ((unsigned char)(key[0]))
          {
            case 'A':
                if (strncmp(&(key[1]), "ction", 5) == 0)
                  {
                    switch ((unsigned char)(key[6]))
                      {
                        case 'A':
                            if (strcmp(&(key[7]), "ndroidIntent") == 0)
                                {
                                fromJSONActionAndroidIntent(new_component, false);
                                return;
                                }
                            break;
                        case 'T':
                            if (strncmp(&(key[7]), "ext", 3) == 0)
                              {
                                switch ((unsigned char)(key[10]))
                                  {
                                    case 0:
                                        {
                                        fromJSONActionText(new_component, false);
                                        return;
                                        }
                                    case 'I':
                                        if (strcmp(&(key[11]), "nProgress") == 0)
                                            {
                                            fromJSONActionTextInProgress(new_component, false);
                                            return;
                                            }
                                        break;
                                    default:
                                        break;
                                  }
                              }
                            break;
                        case 'U':
                            if (strcmp(&(key[7]), "RIs") == 0)
                                {
                                fromJSONActionURIs(new_component, false);
                                return;
                                }
                            break;
                        default:
                            break;
                      }
                  }
                break;
            case 'I':
                if (strcmp(&(key[1]), "tem") == 0)
                    {
                    fromJSONItem(new_component, false);
                    return;
                    }
                break;
            default:
                break;
          }
        extraAutoActionTemplateAppendPair(key, new_component);
      }
    void extraTemplateSetField(const char *key, JSONValue *new_component)
      {
        switch ((unsigned char)(key[0]))
          {
            case 'A':
                if (strncmp(&(key[1]), "ction", 5) == 0)
                  {
                    switch ((unsigned char)(key[6]))
                      {
                        case 'A':
                            if (strcmp(&(key[7]), "ndroidIntent") == 0)
                                {
                                fromJSONActionAndroidIntent(new_component, false);
                                return;
                                }
                            break;
                        case 'T':
                            if (strncmp(&(key[7]), "ext", 3) == 0)
                              {
                                switch ((unsigned char)(key[10]))
                                  {
                                    case 0:
                                        {
                                        fromJSONActionText(new_component, false);
                                        return;
                                        }
                                    case 'I':
                                        if (strcmp(&(key[11]), "nProgress") == 0)
                                            {
                                            fromJSONActionTextInProgress(new_component, false);
                                            return;
                                            }
                                        break;
                                    default:
                                        break;
                                  }
                              }
                            break;
                        case 'U':
                            if (strcmp(&(key[7]), "RIs") == 0)
                                {
                                fromJSONActionURIs(new_component, false);
                                return;
                                }
                            break;
                        default:
                            break;
                      }
                  }
                break;
            case 'I':
                if (strcmp(&(key[1]), "tem") == 0)
                    {
                    fromJSONItem(new_component, false);
                    return;
                    }
                break;
            default:
                break;
          }
        extraAutoActionTemplateSetField(key, new_component);
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
        assert(flagHasActionText);
        handler->start_pair("ActionText");
        handler->string_value(storeActionText);
        assert(flagHasActionTextInProgress);
        handler->start_pair("ActionTextInProgress");
        handler->string_value(storeActionTextInProgress);
        if (flagHasActionAndroidIntent)
          {
            handler->start_pair("ActionAndroidIntent");
            storeActionAndroidIntent->write_as_json(handler);
          }
        if (flagHasActionURIs)
          {
            handler->start_pair("ActionURIs");
            assert(storeActionURIs.size() >= 1);
            handler->start_array();
            for (size_t num1 = 0; num1 < storeActionURIs.size(); ++num1)
              {
                handler->string_value(storeActionURIs[num1]);
              }
            handler->finish_array();
          }
        if (flagHasItem)
          {
            handler->start_pair("Item");
            storeItem->write_as_json(handler);
          }
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasActionText()))
          {
            return "When parsing the object for %what%, the \"ActionText\" field was missing.";
          }
        if (!(hasActionTextInProgress()))
          {
            return "When parsing the object for %what%, the \"ActionTextInProgress\" field was missing.";
          }
        return NULL;
      }

    static AutoActionTemplateJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static AutoActionTemplateJSON *from_text(const char *text, bool ignore_extras = false)
      {
        AutoActionTemplateJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<AutoActionTemplateJSON>, AutoActionTemplateJSON *, bool> generator("Type AutoActionTemplate", ignore_extras);
            parse_json_value(text, "Text for AutoActionTemplateJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static AutoActionTemplateJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        AutoActionTemplateJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<AutoActionTemplateJSON>, AutoActionTemplateJSON *, bool> generator("Type AutoActionTemplate", ignore_extras);
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
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorActionText;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorActionTextInProgress;
        JSONHoldingGenerator<AndroidIntentJSON::Generator, RCHandle<AndroidIntentJSON>, AndroidIntentJSON *, bool > fieldGeneratorActionAndroidIntent;
        JSONHoldingArrayGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorActionURIs;
        JSONHoldingGenerator<TypeItemJSON::Generator, RCHandle<TypeItemJSON>, TypeItemJSON *, bool > fieldGeneratorItem;
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
            if (!(strcmp(getTemplateJSONKey().c_str(), "AutoAction") == 0))
                throw("The key field has a value other than `AutoAction'.");
            AutoActionTemplateJSON *result = new AutoActionTemplateJSON();
            assert(result != NULL);
            RCHandle<AutoActionTemplateJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraAutoActionTemplateAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void handle_result(TemplateJSON *new_result)
          {
            handle_result((AutoActionTemplateJSON *)new_result);
          }
        void finish(AutoActionTemplateJSON *result)
          {
            if (fieldGeneratorActionText.have_value)
              {
                result->setActionText(fieldGeneratorActionText.value);
                fieldGeneratorActionText.have_value = false;
              }
            else if (!(result->hasActionText()))
              {
                error("When parsing the object for %what%, the \"ActionText\" field was missing.");
              }
            if (fieldGeneratorActionTextInProgress.have_value)
              {
                result->setActionTextInProgress(fieldGeneratorActionTextInProgress.value);
                fieldGeneratorActionTextInProgress.have_value = false;
              }
            else if (!(result->hasActionTextInProgress()))
              {
                error("When parsing the object for %what%, the \"ActionTextInProgress\" field was missing.");
              }
            if (fieldGeneratorActionAndroidIntent.have_value)
              {
                result->setActionAndroidIntent(fieldGeneratorActionAndroidIntent.value.referenced());
                fieldGeneratorActionAndroidIntent.have_value = false;
              }
            if (fieldGeneratorActionURIs.have_value)
              {
                result->initActionURIs();
                size_t count = fieldGeneratorActionURIs.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendActionURIs(fieldGeneratorActionURIs.value[num]);
                  }
                fieldGeneratorActionURIs.value.clear();
                fieldGeneratorActionURIs.have_value = false;
              }
            if (fieldGeneratorItem.have_value)
              {
                result->setItem(fieldGeneratorItem.value.referenced());
                fieldGeneratorItem.have_value = false;
              }
            TemplateJSON::Generator::finish(result);
          }
        virtual void handle_result(AutoActionTemplateJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'A':
                    if (strncmp(&(field_name[1]), "ction", 5) == 0)
                      {
                        switch ((unsigned char)(field_name[6]))
                          {
                            case 'A':
                                if (strcmp(&(field_name[7]), "ndroidIntent") == 0)
                                    return &fieldGeneratorActionAndroidIntent;
                                break;
                            case 'T':
                                if (strncmp(&(field_name[7]), "ext", 3) == 0)
                                  {
                                    switch ((unsigned char)(field_name[10]))
                                      {
                                        case 0:
                                            return &fieldGeneratorActionText;
                                        case 'I':
                                            if (strcmp(&(field_name[11]), "nProgress") == 0)
                                                return &fieldGeneratorActionTextInProgress;
                                            break;
                                        default:
                                            break;
                                      }
                                  }
                                break;
                            case 'U':
                                if (strcmp(&(field_name[7]), "RIs") == 0)
                                    return &fieldGeneratorActionURIs;
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 'I':
                    if (strcmp(&(field_name[1]), "tem") == 0)
                        return &fieldGeneratorItem;
                    break;
                default:
                    break;
              }
            return TemplateJSON::Generator::start_known_field(field_name);
          }

      public:
        Generator(bool ignore_extras = false) : TemplateJSON::Generator(ignore_extras), fieldGeneratorActionText("field \"ActionText\" of the AutoActionTemplate class"), fieldGeneratorActionTextInProgress("field \"ActionTextInProgress\" of the AutoActionTemplate class"), fieldGeneratorActionAndroidIntent("field \"ActionAndroidIntent\" of the AutoActionTemplate class", ignore_extras), fieldGeneratorActionURIs("field \"ActionURIs\" of the AutoActionTemplate class"), fieldGeneratorItem("field \"Item\" of the AutoActionTemplate class", ignore_extras), unknownFieldGenerator(ignore_extras)
          {
            set_what("the AutoActionTemplate class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorActionText.reset();
            fieldGeneratorActionTextInProgress.reset();
            fieldGeneratorActionAndroidIntent.reset();
            fieldGeneratorActionURIs.reset();
            fieldGeneratorItem.reset();
            TemplateJSON::Generator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* AUTOACTIONTEMPLATEJSON_H */
