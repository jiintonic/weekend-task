/* file "LocalSearchActionsCallCommandJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef LOCALSEARCHACTIONSCALLCOMMANDJSON_H
#define LOCALSEARCHACTIONSCALLCOMMANDJSON_H

#pragma interface

#include "PhoneCommandJSON.h"
#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONStringGenerator.h"
#include <string>
#include "LocalSearchFilterSpecJSON.h"
#include "LocalSearchFilterSpecJSON.h"
#include "LocalResultJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class LocalSearchActionsCallCommandJSON : public PhoneCommandJSON
  {
  public:
    class TypeNativeDataJSON : public ReferenceCounted
      {
      private:
        bool flagHasNumber;
        std::string storeNumber;
        bool flagHasLocalSearchCriteria;
        LocalSearchFilterSpecJSON * storeLocalSearchCriteria;
        bool flagHasLocalSearchCriteriaIncremental;
        LocalSearchFilterSpecJSON * storeLocalSearchCriteriaIncremental;
        bool flagHasLocalResult;
        LocalResultJSON * storeLocalResult;
        std::vector<std::string> extraKeys;
        std::vector<JSONValue *> extraValues;
        string_index *extraIndex;

        TypeNativeDataJSON(const TypeNativeDataJSON &);
        TypeNativeDataJSON & operator=(const TypeNativeDataJSON &other);

        void  fromJSONNumber(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONLocalSearchCriteria(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONLocalSearchCriteriaIncremental(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONLocalResult(JSONValue *json_value, bool ignore_extras = false);


      public:
        TypeNativeDataJSON(void);
        virtual ~TypeNativeDataJSON(void);
        bool  hasNumber(void) const;
        std::string  getNumber(void);
        const std::string  getNumber(void) const;
        bool  hasLocalSearchCriteria(void) const;
        LocalSearchFilterSpecJSON *  getLocalSearchCriteria(void);
        const LocalSearchFilterSpecJSON *  getLocalSearchCriteria(void) const;
        bool  hasLocalSearchCriteriaIncremental(void) const;
        LocalSearchFilterSpecJSON *  getLocalSearchCriteriaIncremental(void);
        const LocalSearchFilterSpecJSON *  getLocalSearchCriteriaIncremental(void) const;
        bool  hasLocalResult(void) const;
        LocalResultJSON *  getLocalResult(void);
        const LocalResultJSON *  getLocalResult(void) const;

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

        void setNumber(std::string new_value)
          {
            flagHasNumber = true;
            storeNumber = new_value;
          }
        void unsetNumber(void)
          {
            flagHasNumber = false;
          }
        void setLocalSearchCriteria(LocalSearchFilterSpecJSON * new_value)
          {
            new_value->add_reference();
            if (flagHasLocalSearchCriteria)
              {
                storeLocalSearchCriteria->remove_reference();
              }
            flagHasLocalSearchCriteria = true;
            storeLocalSearchCriteria = new_value;
          }
        void unsetLocalSearchCriteria(void)
          {
            if (flagHasLocalSearchCriteria)
              {
                storeLocalSearchCriteria->remove_reference();
              }
            flagHasLocalSearchCriteria = false;
          }
        void setLocalSearchCriteriaIncremental(LocalSearchFilterSpecJSON * new_value)
          {
            new_value->add_reference();
            if (flagHasLocalSearchCriteriaIncremental)
              {
                storeLocalSearchCriteriaIncremental->remove_reference();
              }
            flagHasLocalSearchCriteriaIncremental = true;
            storeLocalSearchCriteriaIncremental = new_value;
          }
        void unsetLocalSearchCriteriaIncremental(void)
          {
            if (flagHasLocalSearchCriteriaIncremental)
              {
                storeLocalSearchCriteriaIncremental->remove_reference();
              }
            flagHasLocalSearchCriteriaIncremental = false;
          }
        void setLocalResult(LocalResultJSON * new_value)
          {
            new_value->add_reference();
            if (flagHasLocalResult)
              {
                storeLocalResult->remove_reference();
              }
            flagHasLocalResult = true;
            storeLocalResult = new_value;
          }
        void unsetLocalResult(void)
          {
            if (flagHasLocalResult)
              {
                storeLocalResult->remove_reference();
              }
            flagHasLocalResult = false;
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
            assert(flagHasNumber);
            handler->start_pair("Number");
            handler->string_value(storeNumber);
            if (flagHasLocalSearchCriteria)
              {
                handler->start_pair("LocalSearchCriteria");
                storeLocalSearchCriteria->write_as_json(handler);
              }
            if (flagHasLocalSearchCriteriaIncremental)
              {
                handler->start_pair("LocalSearchCriteriaIncremental");
                storeLocalSearchCriteriaIncremental->write_as_json(handler);
              }
            assert(flagHasLocalResult);
            handler->start_pair("LocalResult");
            storeLocalResult->write_as_json(handler);
          }
        virtual const char *missing_field_error(void) const
          {
            if (!(hasNumber()))
              {
                return "When parsing the object for %what%, the \"Number\" field was missing.";
              }
            if (!(hasLocalResult()))
              {
                return "When parsing the object for %what%, the \"LocalResult\" field was missing.";
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
            JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorNumber;
            JSONHoldingGenerator<LocalSearchFilterSpecJSON::Generator, RCHandle<LocalSearchFilterSpecJSON>, LocalSearchFilterSpecJSON *, bool > fieldGeneratorLocalSearchCriteria;
            JSONHoldingGenerator<LocalSearchFilterSpecJSON::Generator, RCHandle<LocalSearchFilterSpecJSON>, LocalSearchFilterSpecJSON *, bool > fieldGeneratorLocalSearchCriteriaIncremental;
            JSONHoldingGenerator<LocalResultJSON::Generator, RCHandle<LocalResultJSON>, LocalResultJSON *, bool > fieldGeneratorLocalResult;
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
                if (fieldGeneratorNumber.have_value)
                  {
                    result->setNumber(fieldGeneratorNumber.value);
                    fieldGeneratorNumber.have_value = false;
                  }
                else if (!(result->hasNumber()))
                  {
                    error("When parsing the object for %what%, the \"Number\" field was missing.");
                  }
                if (fieldGeneratorLocalSearchCriteria.have_value)
                  {
                    result->setLocalSearchCriteria(fieldGeneratorLocalSearchCriteria.value.referenced());
                    fieldGeneratorLocalSearchCriteria.have_value = false;
                  }
                if (fieldGeneratorLocalSearchCriteriaIncremental.have_value)
                  {
                    result->setLocalSearchCriteriaIncremental(fieldGeneratorLocalSearchCriteriaIncremental.value.referenced());
                    fieldGeneratorLocalSearchCriteriaIncremental.have_value = false;
                  }
                if (fieldGeneratorLocalResult.have_value)
                  {
                    result->setLocalResult(fieldGeneratorLocalResult.value.referenced());
                    fieldGeneratorLocalResult.have_value = false;
                  }
                else if (!(result->hasLocalResult()))
                  {
                    error("When parsing the object for %what%, the \"LocalResult\" field was missing.");
                  }
              }
            virtual void handle_result(TypeNativeDataJSON *new_result) = 0;
            virtual JSONHandler *start_known_field(const char *field_name)
              {
                switch ((unsigned char)(field_name[0]))
                  {
                    case 'L':
                        if (strncmp(&(field_name[1]), "ocal", 4) == 0)
                          {
                            switch ((unsigned char)(field_name[5]))
                              {
                                case 'R':
                                    if (strcmp(&(field_name[6]), "esult") == 0)
                                        return &fieldGeneratorLocalResult;
                                    break;
                                case 'S':
                                    if (strncmp(&(field_name[6]), "earchCriteria", 13) == 0)
                                      {
                                        switch ((unsigned char)(field_name[19]))
                                          {
                                            case 0:
                                                return &fieldGeneratorLocalSearchCriteria;
                                            case 'I':
                                                if (strcmp(&(field_name[20]), "ncremental") == 0)
                                                    return &fieldGeneratorLocalSearchCriteriaIncremental;
                                                break;
                                            default:
                                                break;
                                          }
                                      }
                                    break;
                                default:
                                    break;
                              }
                          }
                        break;
                    case 'N':
                        if (strcmp(&(field_name[1]), "umber") == 0)
                            return &fieldGeneratorNumber;
                        break;
                    default:
                        break;
                  }
                return NULL;
              }

          public:
            Generator(bool ignore_extras = false) : fieldGeneratorNumber("field \"Number\" of the TypeNativeData class"), fieldGeneratorLocalSearchCriteria("field \"LocalSearchCriteria\" of the TypeNativeData class", ignore_extras), fieldGeneratorLocalSearchCriteriaIncremental("field \"LocalSearchCriteriaIncremental\" of the TypeNativeData class", ignore_extras), fieldGeneratorLocalResult("field \"LocalResult\" of the TypeNativeData class", ignore_extras), unknownFieldGenerator(ignore_extras)
              {
                set_what("the TypeNativeData class");
              }
            ~Generator(void)
              {
              }

            void reset(void)
              {
                fieldGeneratorNumber.reset();
                fieldGeneratorLocalSearchCriteria.reset();
                fieldGeneratorLocalSearchCriteriaIncremental.reset();
                fieldGeneratorLocalResult.reset();
                JSONObjectGenerator::reset();
                unknownFieldGenerator.reset();
              }
          };
      };

  private:
    bool flagHasNumber;
    std::string storeNumber;
    bool flagHasNativeData;
    TypeNativeDataJSON * storeNativeData;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    LocalSearchActionsCallCommandJSON(const LocalSearchActionsCallCommandJSON &);
    LocalSearchActionsCallCommandJSON & operator=(const LocalSearchActionsCallCommandJSON &other);

    JSONValue * extraNumberToJSON(void) const;
    JSONValue * extraNativeDataToJSON(void) const;

    void  fromJSONNumber(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONNativeData(JSONValue *json_value, bool ignore_extras = false);


  public:
    LocalSearchActionsCallCommandJSON(void);
    virtual ~LocalSearchActionsCallCommandJSON(void);
    const char * getPhoneCommandKind(void) const;
    bool  hasNumber(void) const;
    std::string  getNumber(void);
    const std::string  getNumber(void) const;
    bool  hasNativeData(void) const;
    TypeNativeDataJSON *  getNativeData(void);
    const TypeNativeDataJSON *  getNativeData(void) const;

    virtual size_t extraLocalSearchActionsCallCommandComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraLocalSearchActionsCallCommandComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraLocalSearchActionsCallCommandComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraLocalSearchActionsCallCommandComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraLocalSearchActionsCallCommandLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraLocalSearchActionsCallCommandLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    size_t extraPhoneCommandComponentCount(void) const
      {
        size_t result = 0;
        if (flagHasNumber)
            ++result;
        if (flagHasNativeData)
            ++result;
        result += extraLocalSearchActionsCallCommandComponentCount();
        return result;
      }
    const char *extraPhoneCommandComponentKey(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasNumber)
          {
            if (remainder == 0)
                return "Number";
            --remainder;
          }
        if (flagHasNativeData)
          {
            if (remainder == 0)
                return "NativeData";
            --remainder;
          }
        return extraLocalSearchActionsCallCommandComponentKey(remainder);
      }
    JSONValue *extraPhoneCommandComponentValue(size_t component_num)
      {
        size_t remainder = component_num;
        if (flagHasNumber)
          {
            if (remainder == 0)
                return extraNumberToJSON();
            --remainder;
          }
        if (flagHasNativeData)
          {
            if (remainder == 0)
                return extraNativeDataToJSON();
            --remainder;
          }
        return extraLocalSearchActionsCallCommandComponentValue(remainder);
      }
    const JSONValue *extraPhoneCommandComponentValue(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasNumber)
          {
            if (remainder == 0)
                return extraNumberToJSON();
            --remainder;
          }
        if (flagHasNativeData)
          {
            if (remainder == 0)
                return extraNativeDataToJSON();
            --remainder;
          }
        return extraLocalSearchActionsCallCommandComponentValue(remainder);
      }
    JSONValue *extraPhoneCommandLookup(const char *field_name)
      {
        if (strncmp(field_name, "N", 1) == 0)
          {
            switch ((unsigned char)(field_name[1]))
              {
                case 'a':
                    if (strcmp(&(field_name[2]), "tiveData") == 0)
                        return (flagHasNativeData ? extraNativeDataToJSON() : NULL);
                    break;
                case 'u':
                    if (strcmp(&(field_name[2]), "mber") == 0)
                        return (flagHasNumber ? extraNumberToJSON() : NULL);
                    break;
                default:
                    break;
              }
          }
        return extraLocalSearchActionsCallCommandLookup(field_name);
      }
    const JSONValue *extraPhoneCommandLookup(const char *field_name) const
      {
        if (strncmp(field_name, "N", 1) == 0)
          {
            switch ((unsigned char)(field_name[1]))
              {
                case 'a':
                    if (strcmp(&(field_name[2]), "tiveData") == 0)
                        return (flagHasNativeData ? extraNativeDataToJSON() : NULL);
                    break;
                case 'u':
                    if (strcmp(&(field_name[2]), "mber") == 0)
                        return (flagHasNumber ? extraNumberToJSON() : NULL);
                    break;
                default:
                    break;
              }
          }
        return extraLocalSearchActionsCallCommandLookup(field_name);
      }

    void setNumber(std::string new_value)
      {
        flagHasNumber = true;
        storeNumber = new_value;
      }
    void unsetNumber(void)
      {
        flagHasNumber = false;
      }
    void setNativeData(TypeNativeDataJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasNativeData)
          {
            storeNativeData->remove_reference();
          }
        flagHasNativeData = true;
        storeNativeData = new_value;
      }
    void unsetNativeData(void)
      {
        if (flagHasNativeData)
          {
            storeNativeData->remove_reference();
          }
        flagHasNativeData = false;
      }

    virtual void extraLocalSearchActionsCallCommandAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraLocalSearchActionsCallCommandSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraLocalSearchActionsCallCommandLookup(key);
        if (old_field == NULL)
          {
            extraLocalSearchActionsCallCommandAppendPair(key, new_component);
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
    void extraPhoneCommandAppendPair(const char *key, JSONValue *new_component)
      {
        if (strncmp(key, "N", 1) == 0)
          {
            switch ((unsigned char)(key[1]))
              {
                case 'a':
                    if (strcmp(&(key[2]), "tiveData") == 0)
                        {
                        fromJSONNativeData(new_component, false);
                        return;
                        }
                    break;
                case 'u':
                    if (strcmp(&(key[2]), "mber") == 0)
                        {
                        fromJSONNumber(new_component, false);
                        return;
                        }
                    break;
                default:
                    break;
              }
          }
        extraLocalSearchActionsCallCommandAppendPair(key, new_component);
      }
    void extraPhoneCommandSetField(const char *key, JSONValue *new_component)
      {
        if (strncmp(key, "N", 1) == 0)
          {
            switch ((unsigned char)(key[1]))
              {
                case 'a':
                    if (strcmp(&(key[2]), "tiveData") == 0)
                        {
                        fromJSONNativeData(new_component, false);
                        return;
                        }
                    break;
                case 'u':
                    if (strcmp(&(key[2]), "mber") == 0)
                        {
                        fromJSONNumber(new_component, false);
                        return;
                        }
                    break;
                default:
                    break;
              }
          }
        extraLocalSearchActionsCallCommandSetField(key, new_component);
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
        PhoneCommandJSON::write_fields_as_json(handler);
        assert(flagHasNumber);
        handler->start_pair("Number");
        handler->string_value(storeNumber);
        if (flagHasNativeData)
          {
            handler->start_pair("NativeData");
            storeNativeData->write_as_json(handler);
          }
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasNumber()))
          {
            return "When parsing the object for %what%, the \"Number\" field was missing.";
          }
        return NULL;
      }

    static LocalSearchActionsCallCommandJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static LocalSearchActionsCallCommandJSON *from_text(const char *text, bool ignore_extras = false)
      {
        LocalSearchActionsCallCommandJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<LocalSearchActionsCallCommandJSON>, LocalSearchActionsCallCommandJSON *, bool> generator("Type LocalSearchActionsCallCommand", ignore_extras);
            parse_json_value(text, "Text for LocalSearchActionsCallCommandJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static LocalSearchActionsCallCommandJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        LocalSearchActionsCallCommandJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<LocalSearchActionsCallCommandJSON>, LocalSearchActionsCallCommandJSON *, bool> generator("Type LocalSearchActionsCallCommand", ignore_extras);
            parse_json_value(fp, file_name, &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    class Generator : public PhoneCommandJSON::Generator
      {
      private:
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorNumber;
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
            if (!(strcmp(getPhoneCommandJSONKey().c_str(), "CallLocalBusiness") == 0))
                throw("The key field has a value other than `CallLocalBusiness'.");
            LocalSearchActionsCallCommandJSON *result = new LocalSearchActionsCallCommandJSON();
            assert(result != NULL);
            RCHandle<LocalSearchActionsCallCommandJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraLocalSearchActionsCallCommandAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void handle_result(PhoneCommandJSON *new_result)
          {
            handle_result((LocalSearchActionsCallCommandJSON *)new_result);
          }
        void finish(LocalSearchActionsCallCommandJSON *result)
          {
            if (fieldGeneratorNumber.have_value)
              {
                result->setNumber(fieldGeneratorNumber.value);
                fieldGeneratorNumber.have_value = false;
              }
            else if (!(result->hasNumber()))
              {
                error("When parsing the object for %what%, the \"Number\" field was missing.");
              }
            if (fieldGeneratorNativeData.have_value)
              {
                result->setNativeData(fieldGeneratorNativeData.value.referenced());
                fieldGeneratorNativeData.have_value = false;
              }
            PhoneCommandJSON::Generator::finish(result);
          }
        virtual void handle_result(LocalSearchActionsCallCommandJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            if (strncmp(field_name, "N", 1) == 0)
              {
                switch ((unsigned char)(field_name[1]))
                  {
                    case 'a':
                        if (strcmp(&(field_name[2]), "tiveData") == 0)
                            return &fieldGeneratorNativeData;
                        break;
                    case 'u':
                        if (strcmp(&(field_name[2]), "mber") == 0)
                            return &fieldGeneratorNumber;
                        break;
                    default:
                        break;
                  }
              }
            return PhoneCommandJSON::Generator::start_known_field(field_name);
          }

      public:
        Generator(bool ignore_extras = false) : PhoneCommandJSON::Generator(ignore_extras), fieldGeneratorNumber("field \"Number\" of the LocalSearchActionsCallCommand class"), fieldGeneratorNativeData("field \"NativeData\" of the LocalSearchActionsCallCommand class", ignore_extras), unknownFieldGenerator(ignore_extras)
          {
            set_what("the LocalSearchActionsCallCommand class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorNumber.reset();
            fieldGeneratorNativeData.reset();
            PhoneCommandJSON::Generator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* LOCALSEARCHACTIONSCALLCOMMANDJSON_H */
