/* file "TwoColumnTableTemplateJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef TWOCOLUMNTABLETEMPLATEJSON_H
#define TWOCOLUMNTABLETEMPLATEJSON_H

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
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class TwoColumnTableTemplateJSON : public TemplateJSON
  {
  public:
    class TypeRowsJSON : public ReferenceCounted
      {
      private:
        bool flagHasLeftText;
        std::string storeLeftText;
        bool flagHasRightText;
        std::string storeRightText;
        std::vector<std::string> extraKeys;
        std::vector<JSONValue *> extraValues;
        string_index *extraIndex;

        TypeRowsJSON(const TypeRowsJSON &);
        TypeRowsJSON & operator=(const TypeRowsJSON &other);

        void  fromJSONLeftText(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONRightText(JSONValue *json_value, bool ignore_extras = false);


      public:
        TypeRowsJSON(void);
        virtual ~TypeRowsJSON(void);
        bool  hasLeftText(void) const;
        std::string  getLeftText(void);
        const std::string  getLeftText(void) const;
        bool  hasRightText(void) const;
        std::string  getRightText(void);
        const std::string  getRightText(void) const;

        virtual size_t extraTypeRowsComponentCount(void) const
          {
            assert(extraKeys.size() == extraValues.size());
            return extraKeys.size();
          }
        virtual const char *extraTypeRowsComponentKey(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraKeys[component_num].c_str();
          }
        virtual JSONValue *extraTypeRowsComponentValue(size_t component_num)
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        virtual const JSONValue *extraTypeRowsComponentValue(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        virtual JSONValue *extraTypeRowsLookup(const char *field_name)
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }
        virtual const JSONValue *extraTypeRowsLookup(const char *field_name) const
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }

        void setLeftText(std::string new_value)
          {
            flagHasLeftText = true;
            storeLeftText = new_value;
          }
        void unsetLeftText(void)
          {
            flagHasLeftText = false;
          }
        void setRightText(std::string new_value)
          {
            flagHasRightText = true;
            storeRightText = new_value;
          }
        void unsetRightText(void)
          {
            flagHasRightText = false;
          }

        virtual void extraTypeRowsAppendPair(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            assert(extraKeys.size() == extraValues.size());
            extraKeys.push_back(key);
            extraValues.push_back(new_component);
            enter_into_string_index(extraIndex, key, new_component);
            new_component->add_reference();
          }
        virtual void extraTypeRowsSetField(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            JSONValue *old_field = extraTypeRowsLookup(key);
            if (old_field == NULL)
              {
                extraTypeRowsAppendPair(key, new_component);
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
            if (flagHasLeftText)
              {
                handler->start_pair("LeftText");
                handler->string_value(storeLeftText);
              }
            if (flagHasRightText)
              {
                handler->start_pair("RightText");
                handler->string_value(storeRightText);
              }
          }
        virtual const char *missing_field_error(void) const
          {
            return NULL;
          }

        static TypeRowsJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
        static TypeRowsJSON *from_text(const char *text, bool ignore_extras = false)
          {
            TypeRowsJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeRowsJSON>, TypeRowsJSON *, bool> generator("Type TypeRows", ignore_extras);
                parse_json_value(text, "Text for TypeRowsJSON", &generator);
                assert(generator.have_value);
                result = generator.value.referenced();
                result->add_reference();
              };
            result->remove_reference_no_delete();
            return result;
          }
        static TypeRowsJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
          {
            TypeRowsJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeRowsJSON>, TypeRowsJSON *, bool> generator("Type TypeRows", ignore_extras);
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
            JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorLeftText;
            JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorRightText;
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
                TypeRowsJSON *result = new TypeRowsJSON();
                assert(result != NULL);
                RCHandle<TypeRowsJSON> result_holder = result;
                finish(result);
                size_t extra_count = unknownFieldGenerator.field_names.size();
                assert(extra_count == unknownFieldGenerator.field_values.size());
                for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
                  {
                    result->extraTypeRowsAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
                  }
                unknownFieldGenerator.field_names.clear();
                unknownFieldGenerator.field_values.clear();
                destroy_string_index(unknownFieldGenerator.index);
            unknownFieldGenerator.index = create_string_index();
                handle_result(result);
              }
            void finish(TypeRowsJSON *result)
              {
                if (fieldGeneratorLeftText.have_value)
                  {
                    result->setLeftText(fieldGeneratorLeftText.value);
                    fieldGeneratorLeftText.have_value = false;
                  }
                if (fieldGeneratorRightText.have_value)
                  {
                    result->setRightText(fieldGeneratorRightText.value);
                    fieldGeneratorRightText.have_value = false;
                  }
              }
            virtual void handle_result(TypeRowsJSON *new_result) = 0;
            virtual JSONHandler *start_known_field(const char *field_name)
              {
                switch ((unsigned char)(field_name[0]))
                  {
                    case 'L':
                        if (strcmp(&(field_name[1]), "eftText") == 0)
                            return &fieldGeneratorLeftText;
                        break;
                    case 'R':
                        if (strcmp(&(field_name[1]), "ightText") == 0)
                            return &fieldGeneratorRightText;
                        break;
                    default:
                        break;
                  }
                return NULL;
              }

          public:
            Generator(bool ignore_extras = false) : fieldGeneratorLeftText("field \"LeftText\" of the TypeRows class"), fieldGeneratorRightText("field \"RightText\" of the TypeRows class"), unknownFieldGenerator(ignore_extras)
              {
                set_what("the TypeRows class");
              }
            ~Generator(void)
              {
              }

            void reset(void)
              {
                fieldGeneratorLeftText.reset();
                fieldGeneratorRightText.reset();
                JSONObjectGenerator::reset();
                unknownFieldGenerator.reset();
              }
          };
      };

  private:
    bool flagHasRows;
    std::vector< TypeRowsJSON * > storeRows;
    bool flagHasActionAndroidIntent;
    AndroidIntentJSON * storeActionAndroidIntent;
    bool flagHasActionURIs;
    std::vector< std::string > storeActionURIs;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    TwoColumnTableTemplateJSON(const TwoColumnTableTemplateJSON &);
    TwoColumnTableTemplateJSON & operator=(const TwoColumnTableTemplateJSON &other);

    JSONValue * extraRowsToJSON(void) const;
    JSONValue * extraActionAndroidIntentToJSON(void) const;
    JSONValue * extraActionURIsToJSON(void) const;

    void  fromJSONRows(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONActionAndroidIntent(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONActionURIs(JSONValue *json_value, bool ignore_extras = false);


  public:
    TwoColumnTableTemplateJSON(void);
    virtual ~TwoColumnTableTemplateJSON(void);
    const char * getTemplateName(void) const;
    bool  hasRows(void) const;
    size_t  countOfRows(void) const;
    TypeRowsJSON *  elementOfRows(size_t element_num);
    const TypeRowsJSON *  elementOfRows(size_t element_num) const;
    std::vector< TypeRowsJSON * >  getRows(void);
    const std::vector< TypeRowsJSON * >  getRows(void) const;
    bool  hasActionAndroidIntent(void) const;
    AndroidIntentJSON *  getActionAndroidIntent(void);
    const AndroidIntentJSON *  getActionAndroidIntent(void) const;
    bool  hasActionURIs(void) const;
    size_t  countOfActionURIs(void) const;
    std::string  elementOfActionURIs(size_t element_num);
    const std::string  elementOfActionURIs(size_t element_num) const;
    std::vector< std::string >  getActionURIs(void);
    const std::vector< std::string >  getActionURIs(void) const;

    virtual size_t extraTwoColumnTableTemplateComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraTwoColumnTableTemplateComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraTwoColumnTableTemplateComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraTwoColumnTableTemplateComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraTwoColumnTableTemplateLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraTwoColumnTableTemplateLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    size_t extraTemplateComponentCount(void) const
      {
        size_t result = 0;
        if (flagHasRows)
            ++result;
        if (flagHasActionAndroidIntent)
            ++result;
        if (flagHasActionURIs)
            ++result;
        result += extraTwoColumnTableTemplateComponentCount();
        return result;
      }
    const char *extraTemplateComponentKey(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasRows)
          {
            if (remainder == 0)
                return "Rows";
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
        return extraTwoColumnTableTemplateComponentKey(remainder);
      }
    JSONValue *extraTemplateComponentValue(size_t component_num)
      {
        size_t remainder = component_num;
        if (flagHasRows)
          {
            if (remainder == 0)
                return extraRowsToJSON();
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
        return extraTwoColumnTableTemplateComponentValue(remainder);
      }
    const JSONValue *extraTemplateComponentValue(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasRows)
          {
            if (remainder == 0)
                return extraRowsToJSON();
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
        return extraTwoColumnTableTemplateComponentValue(remainder);
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
            case 'R':
                if (strcmp(&(field_name[1]), "ows") == 0)
                    return (flagHasRows ? extraRowsToJSON() : NULL);
                break;
            default:
                break;
          }
        return extraTwoColumnTableTemplateLookup(field_name);
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
            case 'R':
                if (strcmp(&(field_name[1]), "ows") == 0)
                    return (flagHasRows ? extraRowsToJSON() : NULL);
                break;
            default:
                break;
          }
        return extraTwoColumnTableTemplateLookup(field_name);
      }

    void initRows(void)
      {
        if (flagHasRows)
          {
            for (size_t num2 = 0; num2 < storeRows.size(); ++num2)
              {
                storeRows[num2]->remove_reference();
              }
          }
        flagHasRows = true;
        storeRows.clear();
      }
    void appendRows(TypeRowsJSON * to_append)
      {
        if (!flagHasRows)
          {
            flagHasRows = true;
            storeRows.clear();
          }
        assert(flagHasRows);
        to_append->add_reference();
        storeRows.push_back(to_append);
      }
    void unsetRows(void)
      {
        if (flagHasRows)
          {
            for (size_t num3 = 0; num3 < storeRows.size(); ++num3)
              {
                storeRows[num3]->remove_reference();
              }
          }
        flagHasRows = false;
        storeRows.clear();
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

    virtual void extraTwoColumnTableTemplateAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraTwoColumnTableTemplateSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraTwoColumnTableTemplateLookup(key);
        if (old_field == NULL)
          {
            extraTwoColumnTableTemplateAppendPair(key, new_component);
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
            case 'R':
                if (strcmp(&(key[1]), "ows") == 0)
                    {
                    fromJSONRows(new_component, false);
                    return;
                    }
                break;
            default:
                break;
          }
        extraTwoColumnTableTemplateAppendPair(key, new_component);
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
            case 'R':
                if (strcmp(&(key[1]), "ows") == 0)
                    {
                    fromJSONRows(new_component, false);
                    return;
                    }
                break;
            default:
                break;
          }
        extraTwoColumnTableTemplateSetField(key, new_component);
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
        assert(flagHasRows);
        handler->start_pair("Rows");
        assert(storeRows.size() >= 1);
        handler->start_array();
        for (size_t num1 = 0; num1 < storeRows.size(); ++num1)
          {
            storeRows[num1]->write_as_json(handler);
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
        if (!(hasRows()))
          {
            return "When parsing the object for %what%, the \"Rows\" field was missing.";
          }
        return NULL;
      }

    static TwoColumnTableTemplateJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static TwoColumnTableTemplateJSON *from_text(const char *text, bool ignore_extras = false)
      {
        TwoColumnTableTemplateJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<TwoColumnTableTemplateJSON>, TwoColumnTableTemplateJSON *, bool> generator("Type TwoColumnTableTemplate", ignore_extras);
            parse_json_value(text, "Text for TwoColumnTableTemplateJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static TwoColumnTableTemplateJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        TwoColumnTableTemplateJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<TwoColumnTableTemplateJSON>, TwoColumnTableTemplateJSON *, bool> generator("Type TwoColumnTableTemplate", ignore_extras);
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
        JSONHoldingArrayGenerator<TypeRowsJSON::Generator, RCHandle<TypeRowsJSON>, TypeRowsJSON *, bool > fieldGeneratorRows;
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
            if (!(strcmp(getTemplateJSONKey().c_str(), "TwoColumnTable") == 0))
                throw("The key field has a value other than `TwoColumnTable'.");
            TwoColumnTableTemplateJSON *result = new TwoColumnTableTemplateJSON();
            assert(result != NULL);
            RCHandle<TwoColumnTableTemplateJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraTwoColumnTableTemplateAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void handle_result(TemplateJSON *new_result)
          {
            handle_result((TwoColumnTableTemplateJSON *)new_result);
          }
        void finish(TwoColumnTableTemplateJSON *result)
          {
            if (fieldGeneratorRows.have_value)
              {
                result->initRows();
                size_t count = fieldGeneratorRows.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendRows(fieldGeneratorRows.value[num].referenced());
                  }
                fieldGeneratorRows.value.clear();
                fieldGeneratorRows.have_value = false;
              }
            else if (!(result->hasRows()))
              {
                error("When parsing the object for %what%, the \"Rows\" field was missing.");
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
        virtual void handle_result(TwoColumnTableTemplateJSON *new_result) = 0;
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
                case 'R':
                    if (strcmp(&(field_name[1]), "ows") == 0)
                        return &fieldGeneratorRows;
                    break;
                default:
                    break;
              }
            return TemplateJSON::Generator::start_known_field(field_name);
          }

      public:
        Generator(bool ignore_extras = false) : TemplateJSON::Generator(ignore_extras), fieldGeneratorRows("field \"Rows\" of the TwoColumnTableTemplate class", ignore_extras), fieldGeneratorActionAndroidIntent("field \"ActionAndroidIntent\" of the TwoColumnTableTemplate class", ignore_extras), fieldGeneratorActionURIs("field \"ActionURIs\" of the TwoColumnTableTemplate class"), unknownFieldGenerator(ignore_extras)
          {
            set_what("the TwoColumnTableTemplate class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorRows.reset();
            fieldGeneratorActionAndroidIntent.reset();
            fieldGeneratorActionURIs.reset();
            TemplateJSON::Generator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* TWOCOLUMNTABLETEMPLATEJSON_H */
