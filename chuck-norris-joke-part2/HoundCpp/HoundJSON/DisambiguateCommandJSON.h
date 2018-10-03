/* file "DisambiguateCommandJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef DISAMBIGUATECOMMANDJSON_H
#define DISAMBIGUATECOMMANDJSON_H

#pragma interface

#include "CommandResultJSON.h"
#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONHoldingArrayGenerator.h"
#include "JSONStringGenerator.h"
#include "JSONBooleanGenerator.h"
#include <vector>
#include "DisambiguateChoiceJSON.h"
#include "DisambiguateChoiceJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class DisambiguateCommandJSON : public CommandResultJSON
  {
  public:
    class TypeNativeDataJSON : public ReferenceCounted
      {
      private:
        bool flagHasMultiSelect;
        bool storeMultiSelect;
        bool flagHasChoiceList;
        std::vector< DisambiguateChoiceJSON * > storeChoiceList;
        std::vector<std::string> extraKeys;
        std::vector<JSONValue *> extraValues;
        string_index *extraIndex;

        TypeNativeDataJSON(const TypeNativeDataJSON &);
        TypeNativeDataJSON & operator=(const TypeNativeDataJSON &other);

        void  fromJSONMultiSelect(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONChoiceList(JSONValue *json_value, bool ignore_extras = false);


      public:
        TypeNativeDataJSON(void);
        virtual ~TypeNativeDataJSON(void);
        bool  hasMultiSelect(void) const;
        bool  getMultiSelect(void);
        const bool  getMultiSelect(void) const;
        bool  hasChoiceList(void) const;
        size_t  countOfChoiceList(void) const;
        DisambiguateChoiceJSON *  elementOfChoiceList(size_t element_num);
        const DisambiguateChoiceJSON *  elementOfChoiceList(size_t element_num) const;
        std::vector< DisambiguateChoiceJSON * >  getChoiceList(void);
        const std::vector< DisambiguateChoiceJSON * >  getChoiceList(void) const;

        virtual size_t extraTypeNativeDataComponentCount(void) const
          {
            assert(extraKeys.size() == extraValues.size());
            return extraKeys.size();
          }
        virtual const char *extraTypeNativeDataComponentKey(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraKeys[component_num].c_str();
          }
        virtual JSONValue *extraTypeNativeDataComponentValue(size_t component_num)
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        virtual const JSONValue *extraTypeNativeDataComponentValue(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        virtual JSONValue *extraTypeNativeDataLookup(const char *field_name)
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }
        virtual const JSONValue *extraTypeNativeDataLookup(const char *field_name) const
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }

        void setMultiSelect(bool new_value)
          {
            flagHasMultiSelect = true;
            storeMultiSelect = new_value;
          }
        void unsetMultiSelect(void)
          {
            flagHasMultiSelect = false;
          }
        void initChoiceList(void)
          {
            if (flagHasChoiceList)
              {
                for (size_t num2 = 0; num2 < storeChoiceList.size(); ++num2)
                  {
                    storeChoiceList[num2]->remove_reference();
                  }
              }
            flagHasChoiceList = true;
            storeChoiceList.clear();
          }
        void appendChoiceList(DisambiguateChoiceJSON * to_append)
          {
            if (!flagHasChoiceList)
              {
                flagHasChoiceList = true;
                storeChoiceList.clear();
              }
            assert(flagHasChoiceList);
            to_append->add_reference();
            storeChoiceList.push_back(to_append);
          }
        void unsetChoiceList(void)
          {
            if (flagHasChoiceList)
              {
                for (size_t num3 = 0; num3 < storeChoiceList.size(); ++num3)
                  {
                    storeChoiceList[num3]->remove_reference();
                  }
              }
            flagHasChoiceList = false;
            storeChoiceList.clear();
          }

        virtual void extraTypeNativeDataAppendPair(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            assert(extraKeys.size() == extraValues.size());
            extraKeys.push_back(key);
            extraValues.push_back(new_component);
            enter_into_string_index(extraIndex, key, new_component);
            new_component->add_reference();
          }
        virtual void extraTypeNativeDataSetField(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            JSONValue *old_field = extraTypeNativeDataLookup(key);
            if (old_field == NULL)
              {
                extraTypeNativeDataAppendPair(key, new_component);
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
            if (flagHasMultiSelect)
              {
                handler->start_pair("MultiSelect");
                handler->boolean_value(storeMultiSelect);
              }
            assert(flagHasChoiceList);
            handler->start_pair("ChoiceList");
            assert(storeChoiceList.size() >= 2);
            handler->start_array();
            for (size_t num1 = 0; num1 < storeChoiceList.size(); ++num1)
              {
                storeChoiceList[num1]->write_as_json(handler);
              }
            handler->finish_array();
          }
        virtual const char *missing_field_error(void) const
          {
            if (!(hasChoiceList()))
              {
                return "When parsing the object for %what%, the \"ChoiceList\" field was missing.";
              }
            return NULL;
          }

        static TypeNativeDataJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
        static TypeNativeDataJSON *from_text(const char *text, bool ignore_extras = false)
          {
            TypeNativeDataJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeNativeDataJSON>, TypeNativeDataJSON *, bool> generator("Type TypeNativeData", ignore_extras);
                parse_json_value(text, "Text for TypeNativeDataJSON", &generator);
                assert(generator.have_value);
                result = generator.value.referenced();
                result->add_reference();
              };
            result->remove_reference_no_delete();
            return result;
          }
        static TypeNativeDataJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
          {
            TypeNativeDataJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeNativeDataJSON>, TypeNativeDataJSON *, bool> generator("Type TypeNativeData", ignore_extras);
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
            JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorMultiSelect;
            JSONHoldingArrayGenerator<DisambiguateChoiceJSON::Generator, RCHandle<DisambiguateChoiceJSON>, DisambiguateChoiceJSON *, bool > fieldGeneratorChoiceList;
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
                TypeNativeDataJSON *result = new TypeNativeDataJSON();
                assert(result != NULL);
                RCHandle<TypeNativeDataJSON> result_holder = result;
                finish(result);
                size_t extra_count = unknownFieldGenerator.field_names.size();
                assert(extra_count == unknownFieldGenerator.field_values.size());
                for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
                  {
                    result->extraTypeNativeDataAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
                  }
                unknownFieldGenerator.field_names.clear();
                unknownFieldGenerator.field_values.clear();
                destroy_string_index(unknownFieldGenerator.index);
            unknownFieldGenerator.index = create_string_index();
                handle_result(result);
              }
            void finish(TypeNativeDataJSON *result)
              {
                if (fieldGeneratorMultiSelect.have_value)
                  {
                    result->setMultiSelect(fieldGeneratorMultiSelect.value);
                    fieldGeneratorMultiSelect.have_value = false;
                  }
                if (fieldGeneratorChoiceList.have_value)
                  {
                    result->initChoiceList();
                    size_t count = fieldGeneratorChoiceList.value.size();
                    for (size_t num = 0; num < count; ++num)
                      {
                        result->appendChoiceList(fieldGeneratorChoiceList.value[num].referenced());
                      }
                    fieldGeneratorChoiceList.value.clear();
                    fieldGeneratorChoiceList.have_value = false;
                  }
                else if (!(result->hasChoiceList()))
                  {
                    error("When parsing the object for %what%, the \"ChoiceList\" field was missing.");
                  }
              }
            virtual void handle_result(TypeNativeDataJSON *new_result) = 0;
            virtual JSONHandler *start_known_field(const char *field_name)
              {
                switch ((unsigned char)(field_name[0]))
                  {
                    case 'C':
                        if (strcmp(&(field_name[1]), "hoiceList") == 0)
                            return &fieldGeneratorChoiceList;
                        break;
                    case 'M':
                        if (strcmp(&(field_name[1]), "ultiSelect") == 0)
                            return &fieldGeneratorMultiSelect;
                        break;
                    default:
                        break;
                  }
                return NULL;
              }

          public:
            Generator(bool ignore_extras = false) : fieldGeneratorMultiSelect("field \"MultiSelect\" of the TypeNativeData class"), fieldGeneratorChoiceList("field \"ChoiceList\" of the TypeNativeData class", ignore_extras), unknownFieldGenerator(ignore_extras)
              {
                set_what("the TypeNativeData class");
              }
            ~Generator(void)
              {
              }

            void reset(void)
              {
                fieldGeneratorMultiSelect.reset();
                fieldGeneratorChoiceList.reset();
                JSONObjectGenerator::reset();
                unknownFieldGenerator.reset();
              }
          };
      };

  private:
    bool flagHasMultiSelect;
    bool storeMultiSelect;
    bool flagHasChoiceList;
    std::vector< DisambiguateChoiceJSON * > storeChoiceList;
    bool flagHasNativeData;
    TypeNativeDataJSON * storeNativeData;

    DisambiguateCommandJSON(const DisambiguateCommandJSON &);
    DisambiguateCommandJSON & operator=(const DisambiguateCommandJSON &other);

    JSONValue * extraMultiSelectToJSON(void) const;
    JSONValue * extraChoiceListToJSON(void) const;
    JSONValue * extraNativeDataToJSON(void) const;

    void  fromJSONMultiSelect(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONChoiceList(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONNativeData(JSONValue *json_value, bool ignore_extras = false);


  public:
    DisambiguateCommandJSON(void);
    virtual ~DisambiguateCommandJSON(void);
    const char * getCommandKind(void) const;
    virtual const char *getDisambiguateCommandKind(void) const = 0;
    bool  hasMultiSelect(void) const;
    bool  getMultiSelect(void);
    const bool  getMultiSelect(void) const;
    bool  hasChoiceList(void) const;
    size_t  countOfChoiceList(void) const;
    DisambiguateChoiceJSON *  elementOfChoiceList(size_t element_num);
    const DisambiguateChoiceJSON *  elementOfChoiceList(size_t element_num) const;
    std::vector< DisambiguateChoiceJSON * >  getChoiceList(void);
    const std::vector< DisambiguateChoiceJSON * >  getChoiceList(void) const;
    bool  hasNativeData(void) const;
    TypeNativeDataJSON *  getNativeData(void);
    const TypeNativeDataJSON *  getNativeData(void) const;

    virtual size_t extraDisambiguateCommandComponentCount(void) const = 0;
    virtual const char *extraDisambiguateCommandComponentKey(size_t component_num) const = 0;
    virtual JSONValue *extraDisambiguateCommandComponentValue(size_t component_num) = 0;
    virtual const JSONValue *extraDisambiguateCommandComponentValue(size_t component_num) const = 0;
    virtual JSONValue *extraDisambiguateCommandLookup(const char *field_name) = 0;
    virtual const JSONValue *extraDisambiguateCommandLookup(const char *field_name) const = 0;
    size_t extraCommandResultComponentCount(void) const
      {
        size_t result = 1;
        if (flagHasMultiSelect)
            ++result;
        if (flagHasChoiceList)
            ++result;
        if (flagHasNativeData)
            ++result;
        result += extraDisambiguateCommandComponentCount();
        return result;
      }
    const char *extraCommandResultComponentKey(size_t component_num) const
      {
        if (component_num == 0)
            return "DisambiguateCommandKind";
        size_t remainder = (component_num - 1);
        if (flagHasMultiSelect)
          {
            if (remainder == 0)
                return "MultiSelect";
            --remainder;
          }
        if (flagHasChoiceList)
          {
            if (remainder == 0)
                return "ChoiceList";
            --remainder;
          }
        if (flagHasNativeData)
          {
            if (remainder == 0)
                return "NativeData";
            --remainder;
          }
        return extraDisambiguateCommandComponentKey(remainder);
      }
    JSONValue *extraCommandResultComponentValue(size_t component_num)
      {
        if (component_num == 0)
            return new JSONStringValue(getDisambiguateCommandKind());
        size_t remainder = (component_num - 1);
        if (flagHasMultiSelect)
          {
            if (remainder == 0)
                return extraMultiSelectToJSON();
            --remainder;
          }
        if (flagHasChoiceList)
          {
            if (remainder == 0)
                return extraChoiceListToJSON();
            --remainder;
          }
        if (flagHasNativeData)
          {
            if (remainder == 0)
                return extraNativeDataToJSON();
            --remainder;
          }
        return extraDisambiguateCommandComponentValue(remainder);
      }
    const JSONValue *extraCommandResultComponentValue(size_t component_num) const
      {
        if (component_num == 0)
            return new JSONStringValue(getDisambiguateCommandKind());
        size_t remainder = (component_num - 1);
        if (flagHasMultiSelect)
          {
            if (remainder == 0)
                return extraMultiSelectToJSON();
            --remainder;
          }
        if (flagHasChoiceList)
          {
            if (remainder == 0)
                return extraChoiceListToJSON();
            --remainder;
          }
        if (flagHasNativeData)
          {
            if (remainder == 0)
                return extraNativeDataToJSON();
            --remainder;
          }
        return extraDisambiguateCommandComponentValue(remainder);
      }
    JSONValue *extraCommandResultLookup(const char *field_name)
      {
        switch ((unsigned char)(field_name[0]))
          {
            case 'C':
                if (strcmp(&(field_name[1]), "hoiceList") == 0)
                    return (flagHasChoiceList ? extraChoiceListToJSON() : NULL);
                break;
            case 'D':
                if (strcmp(&(field_name[1]), "isambiguateCommandKind") == 0)
                    return new JSONStringValue(getDisambiguateCommandKind());
                break;
            case 'M':
                if (strcmp(&(field_name[1]), "ultiSelect") == 0)
                    return (flagHasMultiSelect ? extraMultiSelectToJSON() : NULL);
                break;
            case 'N':
                if (strcmp(&(field_name[1]), "ativeData") == 0)
                    return (flagHasNativeData ? extraNativeDataToJSON() : NULL);
                break;
            default:
                break;
          }
        return extraDisambiguateCommandLookup(field_name);
      }
    const JSONValue *extraCommandResultLookup(const char *field_name) const
      {
        switch ((unsigned char)(field_name[0]))
          {
            case 'C':
                if (strcmp(&(field_name[1]), "hoiceList") == 0)
                    return (flagHasChoiceList ? extraChoiceListToJSON() : NULL);
                break;
            case 'D':
                if (strcmp(&(field_name[1]), "isambiguateCommandKind") == 0)
                    return new JSONStringValue(getDisambiguateCommandKind());
                break;
            case 'M':
                if (strcmp(&(field_name[1]), "ultiSelect") == 0)
                    return (flagHasMultiSelect ? extraMultiSelectToJSON() : NULL);
                break;
            case 'N':
                if (strcmp(&(field_name[1]), "ativeData") == 0)
                    return (flagHasNativeData ? extraNativeDataToJSON() : NULL);
                break;
            default:
                break;
          }
        return extraDisambiguateCommandLookup(field_name);
      }

    void setMultiSelect(bool new_value)
      {
        flagHasMultiSelect = true;
        storeMultiSelect = new_value;
      }
    void unsetMultiSelect(void)
      {
        flagHasMultiSelect = false;
      }
    void initChoiceList(void)
      {
        if (flagHasChoiceList)
          {
            for (size_t num5 = 0; num5 < storeChoiceList.size(); ++num5)
              {
                storeChoiceList[num5]->remove_reference();
              }
          }
        flagHasChoiceList = true;
        storeChoiceList.clear();
      }
    void appendChoiceList(DisambiguateChoiceJSON * to_append)
      {
        if (!flagHasChoiceList)
          {
            flagHasChoiceList = true;
            storeChoiceList.clear();
          }
        assert(flagHasChoiceList);
        to_append->add_reference();
        storeChoiceList.push_back(to_append);
      }
    void unsetChoiceList(void)
      {
        if (flagHasChoiceList)
          {
            for (size_t num6 = 0; num6 < storeChoiceList.size(); ++num6)
              {
                storeChoiceList[num6]->remove_reference();
              }
          }
        flagHasChoiceList = false;
        storeChoiceList.clear();
      }
    virtual void setNativeData(TypeNativeDataJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasNativeData)
          {
            storeNativeData->remove_reference();
          }
        flagHasNativeData = true;
        storeNativeData = new_value;
      }
    virtual void unsetNativeData(void)
      {
        if (flagHasNativeData)
          {
            storeNativeData->remove_reference();
          }
        flagHasNativeData = false;
      }

    virtual void extraDisambiguateCommandAppendPair(const char *key, JSONValue *new_component) = 0;
    virtual void extraDisambiguateCommandSetField(const char *key, JSONValue *new_component) = 0;
    void extraCommandResultAppendPair(const char *key, JSONValue *new_component)
      {
        switch ((unsigned char)(key[0]))
          {
            case 'C':
                if (strcmp(&(key[1]), "hoiceList") == 0)
                    {
                    fromJSONChoiceList(new_component, false);
                    return;
                    }
                break;
            case 'D':
                if (strcmp(&(key[1]), "isambiguateCommandKind") == 0)
                    return;
                break;
            case 'M':
                if (strcmp(&(key[1]), "ultiSelect") == 0)
                    {
                    fromJSONMultiSelect(new_component, false);
                    return;
                    }
                break;
            case 'N':
                if (strcmp(&(key[1]), "ativeData") == 0)
                    {
                    fromJSONNativeData(new_component, false);
                    return;
                    }
                break;
            default:
                break;
          }
        extraDisambiguateCommandAppendPair(key, new_component);
      }
    void extraCommandResultSetField(const char *key, JSONValue *new_component)
      {
        switch ((unsigned char)(key[0]))
          {
            case 'C':
                if (strcmp(&(key[1]), "hoiceList") == 0)
                    {
                    fromJSONChoiceList(new_component, false);
                    return;
                    }
                break;
            case 'D':
                if (strcmp(&(key[1]), "isambiguateCommandKind") == 0)
                    return;
                break;
            case 'M':
                if (strcmp(&(key[1]), "ultiSelect") == 0)
                    {
                    fromJSONMultiSelect(new_component, false);
                    return;
                    }
                break;
            case 'N':
                if (strcmp(&(key[1]), "ativeData") == 0)
                    {
                    fromJSONNativeData(new_component, false);
                    return;
                    }
                break;
            default:
                break;
          }
        extraDisambiguateCommandSetField(key, new_component);
      }

    virtual void write_as_json(JSONHandler *handler) const
      {
        handler->start_object();
        write_fields_as_json(handler);
        handler->finish_object();
      }

    virtual void write_fields_as_json(JSONHandler *handler) const
      {
        CommandResultJSON::write_fields_as_json(handler);
        handler->pair("DisambiguateCommandKind", getDisambiguateCommandKind());
        if (flagHasMultiSelect)
          {
            handler->start_pair("MultiSelect");
            handler->boolean_value(storeMultiSelect);
          }
        if (flagHasChoiceList)
          {
            handler->start_pair("ChoiceList");
            assert(storeChoiceList.size() >= 2);
            handler->start_array();
            for (size_t num1 = 0; num1 < storeChoiceList.size(); ++num1)
              {
                storeChoiceList[num1]->write_as_json(handler);
              }
            handler->finish_array();
          }
        writeFieldNativeData(handler);
      }
    virtual void writeFieldNativeData(JSONHandler *handler) const
      {
        if (flagHasNativeData)
          {
            handler->start_pair("NativeData");
            storeNativeData->write_as_json(handler);
          }
      }
    virtual const char *missing_field_error(void) const
      {
        return NULL;
      }

    static DisambiguateCommandJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static DisambiguateCommandJSON *from_text(const char *text, bool ignore_extras = false)
      {
        DisambiguateCommandJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<DisambiguateCommandJSON>, DisambiguateCommandJSON *, bool> generator("Type DisambiguateCommand", ignore_extras);
            parse_json_value(text, "Text for DisambiguateCommandJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static DisambiguateCommandJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        DisambiguateCommandJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<DisambiguateCommandJSON>, DisambiguateCommandJSON *, bool> generator("Type DisambiguateCommand", ignore_extras);
            parse_json_value(fp, file_name, &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    class Generator : public CommandResultJSON::Generator
      {
      private:
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorMultiSelect;
        JSONHoldingArrayGenerator<DisambiguateChoiceJSON::Generator, RCHandle<DisambiguateChoiceJSON>, DisambiguateChoiceJSON *, bool > fieldGeneratorChoiceList;
        JSONHoldingGenerator<TypeNativeDataJSON::Generator, RCHandle<TypeNativeDataJSON>, TypeNativeDataJSON *, bool > fieldGeneratorNativeData;
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
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char *> keyGenerator;


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
            if (!(keyGenerator.have_value))
                throw("The `DisambiguateCommandKind' field is missing.");
            if (!(strcmp(getCommandResultJSONKey().c_str(), "DisambiguateCommand") == 0))
                throw("The key field has a value other than `DisambiguateCommand'.");
            DisambiguateCommandJSON *result = createForKey(keyGenerator.value.c_str(), unknownFieldGenerator.index);
            assert(result != NULL);
            RCHandle<DisambiguateCommandJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraDisambiguateCommandAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            const char *missing_field_error = result->missing_field_error();
            if (missing_field_error != NULL)
                error(missing_field_error);
            handle_result(result);
          }
        std::string getDisambiguateCommandJSONKey(void)
          {
            if (!(keyGenerator.have_value))
                throw("The `DisambiguateCommandKind' field is missing.");
            return keyGenerator.value;
          }
        void handle_result(CommandResultJSON *new_result)
          {
            handle_result((DisambiguateCommandJSON *)new_result);
          }
        void finish(DisambiguateCommandJSON *result)
          {
            if (fieldGeneratorMultiSelect.have_value)
              {
                result->setMultiSelect(fieldGeneratorMultiSelect.value);
                fieldGeneratorMultiSelect.have_value = false;
              }
            if (fieldGeneratorChoiceList.have_value)
              {
                result->initChoiceList();
                size_t count = fieldGeneratorChoiceList.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendChoiceList(fieldGeneratorChoiceList.value[num].referenced());
                  }
                fieldGeneratorChoiceList.value.clear();
                fieldGeneratorChoiceList.have_value = false;
              }
            if (fieldGeneratorNativeData.have_value)
              {
                result->setNativeData(fieldGeneratorNativeData.value.referenced());
                fieldGeneratorNativeData.have_value = false;
              }
            CommandResultJSON::Generator::finish(result);
          }
        virtual void handle_result(DisambiguateCommandJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'C':
                    if (strcmp(&(field_name[1]), "hoiceList") == 0)
                        return &fieldGeneratorChoiceList;
                    break;
                case 'D':
                    if (strcmp(&(field_name[1]), "isambiguateCommandKind") == 0)
                        {
                        keyGenerator.reset();
                        return &keyGenerator;
                        }
                    break;
                case 'M':
                    if (strcmp(&(field_name[1]), "ultiSelect") == 0)
                        return &fieldGeneratorMultiSelect;
                    break;
                case 'N':
                    if (strcmp(&(field_name[1]), "ativeData") == 0)
                        return &fieldGeneratorNativeData;
                    break;
                default:
                    break;
              }
            return CommandResultJSON::Generator::start_known_field(field_name);
          }

      public:
        Generator(bool ignore_extras = false) : CommandResultJSON::Generator(ignore_extras), fieldGeneratorMultiSelect("field \"MultiSelect\" of the DisambiguateCommand class"), fieldGeneratorChoiceList("field \"ChoiceList\" of the DisambiguateCommand class", ignore_extras), fieldGeneratorNativeData("field \"NativeData\" of the DisambiguateCommand class", ignore_extras), unknownFieldGenerator(ignore_extras), keyGenerator("key field \"DisambiguateCommandKind\" of the DisambiguateCommand class")
          {
            set_what("the DisambiguateCommand class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorMultiSelect.reset();
            fieldGeneratorChoiceList.reset();
            fieldGeneratorNativeData.reset();
            CommandResultJSON::Generator::reset();
            unknownFieldGenerator.reset();
          }
      };
    static DisambiguateCommandJSON *createForKey(const char *key, string_index *other_field_index);
  };

#endif /* DISAMBIGUATECOMMANDJSON_H */
