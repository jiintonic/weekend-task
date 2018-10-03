/* file "KeyValueTableTemplateJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef KEYVALUETABLETEMPLATEJSON_H
#define KEYVALUETABLETEMPLATEJSON_H

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
#include "AndroidIntentJSON.h"
#include "AndroidIntentJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class KeyValueTableTemplateJSON : public TemplateJSON
  {
  public:
    class TypeTableItemsJSON : public ReferenceCounted
      {
      private:
        bool flagHasValue;
        std::string storeValue;
        bool flagHasLabel;
        std::string storeLabel;
        bool flagHasActionAndroidIntent;
        AndroidIntentJSON * storeActionAndroidIntent;
        bool flagHasActionURIs;
        std::vector< std::string > storeActionURIs;
        std::vector<std::string> extraKeys;
        std::vector<JSONValue *> extraValues;
        string_index *extraIndex;

        TypeTableItemsJSON(const TypeTableItemsJSON &);
        TypeTableItemsJSON & operator=(const TypeTableItemsJSON &other);

        void  fromJSONValue(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONLabel(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONActionAndroidIntent(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONActionURIs(JSONValue *json_value, bool ignore_extras = false);


      public:
        TypeTableItemsJSON(void);
        virtual ~TypeTableItemsJSON(void);
        bool  hasValue(void) const;
        std::string  getValue(void);
        const std::string  getValue(void) const;
        bool  hasLabel(void) const;
        std::string  getLabel(void);
        const std::string  getLabel(void) const;
        bool  hasActionAndroidIntent(void) const;
        AndroidIntentJSON *  getActionAndroidIntent(void);
        const AndroidIntentJSON *  getActionAndroidIntent(void) const;
        bool  hasActionURIs(void) const;
        size_t  countOfActionURIs(void) const;
        std::string  elementOfActionURIs(size_t element_num);
        const std::string  elementOfActionURIs(size_t element_num) const;
        std::vector< std::string >  getActionURIs(void);
        const std::vector< std::string >  getActionURIs(void) const;

        virtual size_t extraTypeTableItemsComponentCount(void) const
          {
            assert(extraKeys.size() == extraValues.size());
            return extraKeys.size();
          }
        virtual const char *extraTypeTableItemsComponentKey(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraKeys[component_num].c_str();
          }
        virtual JSONValue *extraTypeTableItemsComponentValue(size_t component_num)
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        virtual const JSONValue *extraTypeTableItemsComponentValue(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        virtual JSONValue *extraTypeTableItemsLookup(const char *field_name)
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }
        virtual const JSONValue *extraTypeTableItemsLookup(const char *field_name) const
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }

        void setValue(std::string new_value)
          {
            flagHasValue = true;
            storeValue = new_value;
          }
        void unsetValue(void)
          {
            flagHasValue = false;
          }
        void setLabel(std::string new_value)
          {
            flagHasLabel = true;
            storeLabel = new_value;
          }
        void unsetLabel(void)
          {
            flagHasLabel = false;
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

        virtual void extraTypeTableItemsAppendPair(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            assert(extraKeys.size() == extraValues.size());
            extraKeys.push_back(key);
            extraValues.push_back(new_component);
            enter_into_string_index(extraIndex, key, new_component);
            new_component->add_reference();
          }
        virtual void extraTypeTableItemsSetField(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            JSONValue *old_field = extraTypeTableItemsLookup(key);
            if (old_field == NULL)
              {
                extraTypeTableItemsAppendPair(key, new_component);
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
            assert(flagHasValue);
            handler->start_pair("Value");
            handler->string_value(storeValue);
            if (flagHasLabel)
              {
                handler->start_pair("Label");
                handler->string_value(storeLabel);
              }
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
          }
        virtual const char *missing_field_error(void) const
          {
            if (!(hasValue()))
              {
                return "When parsing the object for %what%, the \"Value\" field was missing.";
              }
            return NULL;
          }

        static TypeTableItemsJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
        static TypeTableItemsJSON *from_text(const char *text, bool ignore_extras = false)
          {
            TypeTableItemsJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeTableItemsJSON>, TypeTableItemsJSON *, bool> generator("Type TypeTableItems", ignore_extras);
                parse_json_value(text, "Text for TypeTableItemsJSON", &generator);
                assert(generator.have_value);
                result = generator.value.referenced();
                result->add_reference();
              };
            result->remove_reference_no_delete();
            return result;
          }
        static TypeTableItemsJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
          {
            TypeTableItemsJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeTableItemsJSON>, TypeTableItemsJSON *, bool> generator("Type TypeTableItems", ignore_extras);
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
            JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorValue;
            JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorLabel;
            JSONHoldingGenerator<AndroidIntentJSON::Generator, RCHandle<AndroidIntentJSON>, AndroidIntentJSON *, bool > fieldGeneratorActionAndroidIntent;
            JSONHoldingArrayGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorActionURIs;
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
                TypeTableItemsJSON *result = new TypeTableItemsJSON();
                assert(result != NULL);
                RCHandle<TypeTableItemsJSON> result_holder = result;
                finish(result);
                size_t extra_count = unknownFieldGenerator.field_names.size();
                assert(extra_count == unknownFieldGenerator.field_values.size());
                for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
                  {
                    result->extraTypeTableItemsAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
                  }
                unknownFieldGenerator.field_names.clear();
                unknownFieldGenerator.field_values.clear();
                destroy_string_index(unknownFieldGenerator.index);
            unknownFieldGenerator.index = create_string_index();
                handle_result(result);
              }
            void finish(TypeTableItemsJSON *result)
              {
                if (fieldGeneratorValue.have_value)
                  {
                    result->setValue(fieldGeneratorValue.value);
                    fieldGeneratorValue.have_value = false;
                  }
                else if (!(result->hasValue()))
                  {
                    error("When parsing the object for %what%, the \"Value\" field was missing.");
                  }
                if (fieldGeneratorLabel.have_value)
                  {
                    result->setLabel(fieldGeneratorLabel.value);
                    fieldGeneratorLabel.have_value = false;
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
              }
            virtual void handle_result(TypeTableItemsJSON *new_result) = 0;
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
                                case 'U':
                                    if (strcmp(&(field_name[7]), "RIs") == 0)
                                        return &fieldGeneratorActionURIs;
                                    break;
                                default:
                                    break;
                              }
                          }
                        break;
                    case 'L':
                        if (strcmp(&(field_name[1]), "abel") == 0)
                            return &fieldGeneratorLabel;
                        break;
                    case 'V':
                        if (strcmp(&(field_name[1]), "alue") == 0)
                            return &fieldGeneratorValue;
                        break;
                    default:
                        break;
                  }
                return NULL;
              }

          public:
            Generator(bool ignore_extras = false) : fieldGeneratorValue("field \"Value\" of the TypeTableItems class"), fieldGeneratorLabel("field \"Label\" of the TypeTableItems class"), fieldGeneratorActionAndroidIntent("field \"ActionAndroidIntent\" of the TypeTableItems class", ignore_extras), fieldGeneratorActionURIs("field \"ActionURIs\" of the TypeTableItems class"), unknownFieldGenerator(ignore_extras)
              {
                set_what("the TypeTableItems class");
              }
            ~Generator(void)
              {
              }

            void reset(void)
              {
                fieldGeneratorValue.reset();
                fieldGeneratorLabel.reset();
                fieldGeneratorActionAndroidIntent.reset();
                fieldGeneratorActionURIs.reset();
                JSONObjectGenerator::reset();
                unknownFieldGenerator.reset();
              }
          };
      };

  private:
    bool flagHasTitle;
    std::string storeTitle;
    bool flagHasSubtitle;
    std::string storeSubtitle;
    bool flagHasFooter;
    std::string storeFooter;
    bool flagHasSingleColumn;
    bool storeSingleColumn;
    bool flagHasTableItems;
    std::vector< TypeTableItemsJSON * > storeTableItems;
    bool flagHasActionAndroidIntent;
    AndroidIntentJSON * storeActionAndroidIntent;
    bool flagHasActionURIs;
    std::vector< std::string > storeActionURIs;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    KeyValueTableTemplateJSON(const KeyValueTableTemplateJSON &);
    KeyValueTableTemplateJSON & operator=(const KeyValueTableTemplateJSON &other);

    JSONValue * extraTitleToJSON(void) const;
    JSONValue * extraSubtitleToJSON(void) const;
    JSONValue * extraFooterToJSON(void) const;
    JSONValue * extraSingleColumnToJSON(void) const;
    JSONValue * extraTableItemsToJSON(void) const;
    JSONValue * extraActionAndroidIntentToJSON(void) const;
    JSONValue * extraActionURIsToJSON(void) const;

    void  fromJSONTitle(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONSubtitle(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONFooter(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONSingleColumn(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONTableItems(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONActionAndroidIntent(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONActionURIs(JSONValue *json_value, bool ignore_extras = false);


  public:
    KeyValueTableTemplateJSON(void);
    virtual ~KeyValueTableTemplateJSON(void);
    const char * getTemplateName(void) const;
    bool  hasTitle(void) const;
    std::string  getTitle(void);
    const std::string  getTitle(void) const;
    bool  hasSubtitle(void) const;
    std::string  getSubtitle(void);
    const std::string  getSubtitle(void) const;
    bool  hasFooter(void) const;
    std::string  getFooter(void);
    const std::string  getFooter(void) const;
    bool  hasSingleColumn(void) const;
    bool  getSingleColumn(void);
    const bool  getSingleColumn(void) const;
    bool  hasTableItems(void) const;
    size_t  countOfTableItems(void) const;
    TypeTableItemsJSON *  elementOfTableItems(size_t element_num);
    const TypeTableItemsJSON *  elementOfTableItems(size_t element_num) const;
    std::vector< TypeTableItemsJSON * >  getTableItems(void);
    const std::vector< TypeTableItemsJSON * >  getTableItems(void) const;
    bool  hasActionAndroidIntent(void) const;
    AndroidIntentJSON *  getActionAndroidIntent(void);
    const AndroidIntentJSON *  getActionAndroidIntent(void) const;
    bool  hasActionURIs(void) const;
    size_t  countOfActionURIs(void) const;
    std::string  elementOfActionURIs(size_t element_num);
    const std::string  elementOfActionURIs(size_t element_num) const;
    std::vector< std::string >  getActionURIs(void);
    const std::vector< std::string >  getActionURIs(void) const;

    virtual size_t extraKeyValueTableTemplateComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraKeyValueTableTemplateComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraKeyValueTableTemplateComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraKeyValueTableTemplateComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraKeyValueTableTemplateLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraKeyValueTableTemplateLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    size_t extraTemplateComponentCount(void) const
      {
        size_t result = 0;
        if (flagHasTitle)
            ++result;
        if (flagHasSubtitle)
            ++result;
        if (flagHasFooter)
            ++result;
        if (flagHasSingleColumn)
            ++result;
        if (flagHasTableItems)
            ++result;
        if (flagHasActionAndroidIntent)
            ++result;
        if (flagHasActionURIs)
            ++result;
        result += extraKeyValueTableTemplateComponentCount();
        return result;
      }
    const char *extraTemplateComponentKey(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasTitle)
          {
            if (remainder == 0)
                return "Title";
            --remainder;
          }
        if (flagHasSubtitle)
          {
            if (remainder == 0)
                return "Subtitle";
            --remainder;
          }
        if (flagHasFooter)
          {
            if (remainder == 0)
                return "Footer";
            --remainder;
          }
        if (flagHasSingleColumn)
          {
            if (remainder == 0)
                return "SingleColumn";
            --remainder;
          }
        if (flagHasTableItems)
          {
            if (remainder == 0)
                return "TableItems";
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
        return extraKeyValueTableTemplateComponentKey(remainder);
      }
    JSONValue *extraTemplateComponentValue(size_t component_num)
      {
        size_t remainder = component_num;
        if (flagHasTitle)
          {
            if (remainder == 0)
                return extraTitleToJSON();
            --remainder;
          }
        if (flagHasSubtitle)
          {
            if (remainder == 0)
                return extraSubtitleToJSON();
            --remainder;
          }
        if (flagHasFooter)
          {
            if (remainder == 0)
                return extraFooterToJSON();
            --remainder;
          }
        if (flagHasSingleColumn)
          {
            if (remainder == 0)
                return extraSingleColumnToJSON();
            --remainder;
          }
        if (flagHasTableItems)
          {
            if (remainder == 0)
                return extraTableItemsToJSON();
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
        return extraKeyValueTableTemplateComponentValue(remainder);
      }
    const JSONValue *extraTemplateComponentValue(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasTitle)
          {
            if (remainder == 0)
                return extraTitleToJSON();
            --remainder;
          }
        if (flagHasSubtitle)
          {
            if (remainder == 0)
                return extraSubtitleToJSON();
            --remainder;
          }
        if (flagHasFooter)
          {
            if (remainder == 0)
                return extraFooterToJSON();
            --remainder;
          }
        if (flagHasSingleColumn)
          {
            if (remainder == 0)
                return extraSingleColumnToJSON();
            --remainder;
          }
        if (flagHasTableItems)
          {
            if (remainder == 0)
                return extraTableItemsToJSON();
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
        return extraKeyValueTableTemplateComponentValue(remainder);
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
                        case 'U':
                            if (strcmp(&(field_name[7]), "RIs") == 0)
                                return (flagHasActionURIs ? extraActionURIsToJSON() : NULL);
                            break;
                        default:
                            break;
                      }
                  }
                break;
            case 'F':
                if (strcmp(&(field_name[1]), "ooter") == 0)
                    return (flagHasFooter ? extraFooterToJSON() : NULL);
                break;
            case 'S':
                switch ((unsigned char)(field_name[1]))
                  {
                    case 'i':
                        if (strcmp(&(field_name[2]), "ngleColumn") == 0)
                            return (flagHasSingleColumn ? extraSingleColumnToJSON() : NULL);
                        break;
                    case 'u':
                        if (strcmp(&(field_name[2]), "btitle") == 0)
                            return (flagHasSubtitle ? extraSubtitleToJSON() : NULL);
                        break;
                    default:
                        break;
                  }
                break;
            case 'T':
                switch ((unsigned char)(field_name[1]))
                  {
                    case 'a':
                        if (strcmp(&(field_name[2]), "bleItems") == 0)
                            return (flagHasTableItems ? extraTableItemsToJSON() : NULL);
                        break;
                    case 'i':
                        if (strcmp(&(field_name[2]), "tle") == 0)
                            return (flagHasTitle ? extraTitleToJSON() : NULL);
                        break;
                    default:
                        break;
                  }
                break;
            default:
                break;
          }
        return extraKeyValueTableTemplateLookup(field_name);
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
                        case 'U':
                            if (strcmp(&(field_name[7]), "RIs") == 0)
                                return (flagHasActionURIs ? extraActionURIsToJSON() : NULL);
                            break;
                        default:
                            break;
                      }
                  }
                break;
            case 'F':
                if (strcmp(&(field_name[1]), "ooter") == 0)
                    return (flagHasFooter ? extraFooterToJSON() : NULL);
                break;
            case 'S':
                switch ((unsigned char)(field_name[1]))
                  {
                    case 'i':
                        if (strcmp(&(field_name[2]), "ngleColumn") == 0)
                            return (flagHasSingleColumn ? extraSingleColumnToJSON() : NULL);
                        break;
                    case 'u':
                        if (strcmp(&(field_name[2]), "btitle") == 0)
                            return (flagHasSubtitle ? extraSubtitleToJSON() : NULL);
                        break;
                    default:
                        break;
                  }
                break;
            case 'T':
                switch ((unsigned char)(field_name[1]))
                  {
                    case 'a':
                        if (strcmp(&(field_name[2]), "bleItems") == 0)
                            return (flagHasTableItems ? extraTableItemsToJSON() : NULL);
                        break;
                    case 'i':
                        if (strcmp(&(field_name[2]), "tle") == 0)
                            return (flagHasTitle ? extraTitleToJSON() : NULL);
                        break;
                    default:
                        break;
                  }
                break;
            default:
                break;
          }
        return extraKeyValueTableTemplateLookup(field_name);
      }

    void setTitle(std::string new_value)
      {
        flagHasTitle = true;
        storeTitle = new_value;
      }
    void unsetTitle(void)
      {
        flagHasTitle = false;
      }
    void setSubtitle(std::string new_value)
      {
        flagHasSubtitle = true;
        storeSubtitle = new_value;
      }
    void unsetSubtitle(void)
      {
        flagHasSubtitle = false;
      }
    void setFooter(std::string new_value)
      {
        flagHasFooter = true;
        storeFooter = new_value;
      }
    void unsetFooter(void)
      {
        flagHasFooter = false;
      }
    void setSingleColumn(bool new_value)
      {
        flagHasSingleColumn = true;
        storeSingleColumn = new_value;
      }
    void unsetSingleColumn(void)
      {
        flagHasSingleColumn = false;
      }
    void initTableItems(void)
      {
        if (flagHasTableItems)
          {
            for (size_t num2 = 0; num2 < storeTableItems.size(); ++num2)
              {
                storeTableItems[num2]->remove_reference();
              }
          }
        flagHasTableItems = true;
        storeTableItems.clear();
      }
    void appendTableItems(TypeTableItemsJSON * to_append)
      {
        if (!flagHasTableItems)
          {
            flagHasTableItems = true;
            storeTableItems.clear();
          }
        assert(flagHasTableItems);
        to_append->add_reference();
        storeTableItems.push_back(to_append);
      }
    void unsetTableItems(void)
      {
        if (flagHasTableItems)
          {
            for (size_t num3 = 0; num3 < storeTableItems.size(); ++num3)
              {
                storeTableItems[num3]->remove_reference();
              }
          }
        flagHasTableItems = false;
        storeTableItems.clear();
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

    virtual void extraKeyValueTableTemplateAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraKeyValueTableTemplateSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraKeyValueTableTemplateLookup(key);
        if (old_field == NULL)
          {
            extraKeyValueTableTemplateAppendPair(key, new_component);
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
            case 'F':
                if (strcmp(&(key[1]), "ooter") == 0)
                    {
                    fromJSONFooter(new_component, false);
                    return;
                    }
                break;
            case 'S':
                switch ((unsigned char)(key[1]))
                  {
                    case 'i':
                        if (strcmp(&(key[2]), "ngleColumn") == 0)
                            {
                            fromJSONSingleColumn(new_component, false);
                            return;
                            }
                        break;
                    case 'u':
                        if (strcmp(&(key[2]), "btitle") == 0)
                            {
                            fromJSONSubtitle(new_component, false);
                            return;
                            }
                        break;
                    default:
                        break;
                  }
                break;
            case 'T':
                switch ((unsigned char)(key[1]))
                  {
                    case 'a':
                        if (strcmp(&(key[2]), "bleItems") == 0)
                            {
                            fromJSONTableItems(new_component, false);
                            return;
                            }
                        break;
                    case 'i':
                        if (strcmp(&(key[2]), "tle") == 0)
                            {
                            fromJSONTitle(new_component, false);
                            return;
                            }
                        break;
                    default:
                        break;
                  }
                break;
            default:
                break;
          }
        extraKeyValueTableTemplateAppendPair(key, new_component);
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
            case 'F':
                if (strcmp(&(key[1]), "ooter") == 0)
                    {
                    fromJSONFooter(new_component, false);
                    return;
                    }
                break;
            case 'S':
                switch ((unsigned char)(key[1]))
                  {
                    case 'i':
                        if (strcmp(&(key[2]), "ngleColumn") == 0)
                            {
                            fromJSONSingleColumn(new_component, false);
                            return;
                            }
                        break;
                    case 'u':
                        if (strcmp(&(key[2]), "btitle") == 0)
                            {
                            fromJSONSubtitle(new_component, false);
                            return;
                            }
                        break;
                    default:
                        break;
                  }
                break;
            case 'T':
                switch ((unsigned char)(key[1]))
                  {
                    case 'a':
                        if (strcmp(&(key[2]), "bleItems") == 0)
                            {
                            fromJSONTableItems(new_component, false);
                            return;
                            }
                        break;
                    case 'i':
                        if (strcmp(&(key[2]), "tle") == 0)
                            {
                            fromJSONTitle(new_component, false);
                            return;
                            }
                        break;
                    default:
                        break;
                  }
                break;
            default:
                break;
          }
        extraKeyValueTableTemplateSetField(key, new_component);
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
        if (flagHasTitle)
          {
            handler->start_pair("Title");
            handler->string_value(storeTitle);
          }
        if (flagHasSubtitle)
          {
            handler->start_pair("Subtitle");
            handler->string_value(storeSubtitle);
          }
        if (flagHasFooter)
          {
            handler->start_pair("Footer");
            handler->string_value(storeFooter);
          }
        if (flagHasSingleColumn)
          {
            handler->start_pair("SingleColumn");
            handler->boolean_value(storeSingleColumn);
          }
        assert(flagHasTableItems);
        handler->start_pair("TableItems");
        assert(storeTableItems.size() >= 1);
        handler->start_array();
        for (size_t num1 = 0; num1 < storeTableItems.size(); ++num1)
          {
            storeTableItems[num1]->write_as_json(handler);
          }
        handler->finish_array();
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
            for (size_t num2 = 0; num2 < storeActionURIs.size(); ++num2)
              {
                handler->string_value(storeActionURIs[num2]);
              }
            handler->finish_array();
          }
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasTableItems()))
          {
            return "When parsing the object for %what%, the \"TableItems\" field was missing.";
          }
        return NULL;
      }

    static KeyValueTableTemplateJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static KeyValueTableTemplateJSON *from_text(const char *text, bool ignore_extras = false)
      {
        KeyValueTableTemplateJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<KeyValueTableTemplateJSON>, KeyValueTableTemplateJSON *, bool> generator("Type KeyValueTableTemplate", ignore_extras);
            parse_json_value(text, "Text for KeyValueTableTemplateJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static KeyValueTableTemplateJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        KeyValueTableTemplateJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<KeyValueTableTemplateJSON>, KeyValueTableTemplateJSON *, bool> generator("Type KeyValueTableTemplate", ignore_extras);
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
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorTitle;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorSubtitle;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorFooter;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorSingleColumn;
        JSONHoldingArrayGenerator<TypeTableItemsJSON::Generator, RCHandle<TypeTableItemsJSON>, TypeTableItemsJSON *, bool > fieldGeneratorTableItems;
        JSONHoldingGenerator<AndroidIntentJSON::Generator, RCHandle<AndroidIntentJSON>, AndroidIntentJSON *, bool > fieldGeneratorActionAndroidIntent;
        JSONHoldingArrayGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorActionURIs;
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
            if (!(strcmp(getTemplateJSONKey().c_str(), "KeyValueTable") == 0))
                throw("The key field has a value other than `KeyValueTable'.");
            KeyValueTableTemplateJSON *result = new KeyValueTableTemplateJSON();
            assert(result != NULL);
            RCHandle<KeyValueTableTemplateJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraKeyValueTableTemplateAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void handle_result(TemplateJSON *new_result)
          {
            handle_result((KeyValueTableTemplateJSON *)new_result);
          }
        void finish(KeyValueTableTemplateJSON *result)
          {
            if (fieldGeneratorTitle.have_value)
              {
                result->setTitle(fieldGeneratorTitle.value);
                fieldGeneratorTitle.have_value = false;
              }
            if (fieldGeneratorSubtitle.have_value)
              {
                result->setSubtitle(fieldGeneratorSubtitle.value);
                fieldGeneratorSubtitle.have_value = false;
              }
            if (fieldGeneratorFooter.have_value)
              {
                result->setFooter(fieldGeneratorFooter.value);
                fieldGeneratorFooter.have_value = false;
              }
            if (fieldGeneratorSingleColumn.have_value)
              {
                result->setSingleColumn(fieldGeneratorSingleColumn.value);
                fieldGeneratorSingleColumn.have_value = false;
              }
            if (fieldGeneratorTableItems.have_value)
              {
                result->initTableItems();
                size_t count = fieldGeneratorTableItems.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendTableItems(fieldGeneratorTableItems.value[num].referenced());
                  }
                fieldGeneratorTableItems.value.clear();
                fieldGeneratorTableItems.have_value = false;
              }
            else if (!(result->hasTableItems()))
              {
                error("When parsing the object for %what%, the \"TableItems\" field was missing.");
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
            TemplateJSON::Generator::finish(result);
          }
        virtual void handle_result(KeyValueTableTemplateJSON *new_result) = 0;
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
                            case 'U':
                                if (strcmp(&(field_name[7]), "RIs") == 0)
                                    return &fieldGeneratorActionURIs;
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 'F':
                    if (strcmp(&(field_name[1]), "ooter") == 0)
                        return &fieldGeneratorFooter;
                    break;
                case 'S':
                    switch ((unsigned char)(field_name[1]))
                      {
                        case 'i':
                            if (strcmp(&(field_name[2]), "ngleColumn") == 0)
                                return &fieldGeneratorSingleColumn;
                            break;
                        case 'u':
                            if (strcmp(&(field_name[2]), "btitle") == 0)
                                return &fieldGeneratorSubtitle;
                            break;
                        default:
                            break;
                      }
                    break;
                case 'T':
                    switch ((unsigned char)(field_name[1]))
                      {
                        case 'a':
                            if (strcmp(&(field_name[2]), "bleItems") == 0)
                                return &fieldGeneratorTableItems;
                            break;
                        case 'i':
                            if (strcmp(&(field_name[2]), "tle") == 0)
                                return &fieldGeneratorTitle;
                            break;
                        default:
                            break;
                      }
                    break;
                default:
                    break;
              }
            return TemplateJSON::Generator::start_known_field(field_name);
          }

      public:
        Generator(bool ignore_extras = false) : TemplateJSON::Generator(ignore_extras), fieldGeneratorTitle("field \"Title\" of the KeyValueTableTemplate class"), fieldGeneratorSubtitle("field \"Subtitle\" of the KeyValueTableTemplate class"), fieldGeneratorFooter("field \"Footer\" of the KeyValueTableTemplate class"), fieldGeneratorSingleColumn("field \"SingleColumn\" of the KeyValueTableTemplate class"), fieldGeneratorTableItems("field \"TableItems\" of the KeyValueTableTemplate class", ignore_extras), fieldGeneratorActionAndroidIntent("field \"ActionAndroidIntent\" of the KeyValueTableTemplate class", ignore_extras), fieldGeneratorActionURIs("field \"ActionURIs\" of the KeyValueTableTemplate class"), unknownFieldGenerator(ignore_extras)
          {
            set_what("the KeyValueTableTemplate class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorTitle.reset();
            fieldGeneratorSubtitle.reset();
            fieldGeneratorFooter.reset();
            fieldGeneratorSingleColumn.reset();
            fieldGeneratorTableItems.reset();
            fieldGeneratorActionAndroidIntent.reset();
            fieldGeneratorActionURIs.reset();
            TemplateJSON::Generator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* KEYVALUETABLETEMPLATEJSON_H */
