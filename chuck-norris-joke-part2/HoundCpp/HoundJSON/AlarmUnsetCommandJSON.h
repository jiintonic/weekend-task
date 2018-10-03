/* file "AlarmUnsetCommandJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef ALARMUNSETCOMMANDJSON_H
#define ALARMUNSETCOMMANDJSON_H

#pragma interface

#include "AlarmCommandJSON.h"
#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONHoldingArrayGenerator.h"
#include <vector>
#include "AlarmJSON.h"
#include "AlarmCriteriaJSON.h"
#include "DynamicResponseJSON.h"
#include "DynamicResponseJSON.h"
#include "DynamicResponseJSON.h"
#include "DynamicResponseJSON.h"
#include "DynamicResponseJSON.h"
#include "DynamicResponseJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class AlarmUnsetCommandJSON : public AlarmCommandJSON
  {
  public:
    class TypeNativeDataJSON : public ReferenceCounted
      {
      private:
        bool flagHasAlarms;
        std::vector< AlarmJSON * > storeAlarms;
        bool flagHasAlarmCriteria;
        std::vector< AlarmCriteriaJSON * > storeAlarmCriteria;
        std::vector<std::string> extraKeys;
        std::vector<JSONValue *> extraValues;
        string_index *extraIndex;

        TypeNativeDataJSON(const TypeNativeDataJSON &);
        TypeNativeDataJSON & operator=(const TypeNativeDataJSON &other);

        void  fromJSONAlarms(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONAlarmCriteria(JSONValue *json_value, bool ignore_extras = false);


      public:
        TypeNativeDataJSON(void);
        virtual ~TypeNativeDataJSON(void);
        bool  hasAlarms(void) const;
        size_t  countOfAlarms(void) const;
        AlarmJSON *  elementOfAlarms(size_t element_num);
        const AlarmJSON *  elementOfAlarms(size_t element_num) const;
        std::vector< AlarmJSON * >  getAlarms(void);
        const std::vector< AlarmJSON * >  getAlarms(void) const;
        bool  hasAlarmCriteria(void) const;
        size_t  countOfAlarmCriteria(void) const;
        AlarmCriteriaJSON *  elementOfAlarmCriteria(size_t element_num);
        const AlarmCriteriaJSON *  elementOfAlarmCriteria(size_t element_num) const;
        std::vector< AlarmCriteriaJSON * >  getAlarmCriteria(void);
        const std::vector< AlarmCriteriaJSON * >  getAlarmCriteria(void) const;

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

        void initAlarms(void)
          {
            if (flagHasAlarms)
              {
                for (size_t num3 = 0; num3 < storeAlarms.size(); ++num3)
                  {
                    storeAlarms[num3]->remove_reference();
                  }
              }
            flagHasAlarms = true;
            storeAlarms.clear();
          }
        void appendAlarms(AlarmJSON * to_append)
          {
            if (!flagHasAlarms)
              {
                flagHasAlarms = true;
                storeAlarms.clear();
              }
            assert(flagHasAlarms);
            to_append->add_reference();
            storeAlarms.push_back(to_append);
          }
        void unsetAlarms(void)
          {
            if (flagHasAlarms)
              {
                for (size_t num4 = 0; num4 < storeAlarms.size(); ++num4)
                  {
                    storeAlarms[num4]->remove_reference();
                  }
              }
            flagHasAlarms = false;
            storeAlarms.clear();
          }
        void initAlarmCriteria(void)
          {
            if (flagHasAlarmCriteria)
              {
                for (size_t num5 = 0; num5 < storeAlarmCriteria.size(); ++num5)
                  {
                    storeAlarmCriteria[num5]->remove_reference();
                  }
              }
            flagHasAlarmCriteria = true;
            storeAlarmCriteria.clear();
          }
        void appendAlarmCriteria(AlarmCriteriaJSON * to_append)
          {
            if (!flagHasAlarmCriteria)
              {
                flagHasAlarmCriteria = true;
                storeAlarmCriteria.clear();
              }
            assert(flagHasAlarmCriteria);
            to_append->add_reference();
            storeAlarmCriteria.push_back(to_append);
          }
        void unsetAlarmCriteria(void)
          {
            if (flagHasAlarmCriteria)
              {
                for (size_t num6 = 0; num6 < storeAlarmCriteria.size(); ++num6)
                  {
                    storeAlarmCriteria[num6]->remove_reference();
                  }
              }
            flagHasAlarmCriteria = false;
            storeAlarmCriteria.clear();
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
            if (flagHasAlarms)
              {
                handler->start_pair("Alarms");
                assert(storeAlarms.size() >= 1);
                handler->start_array();
                for (size_t num1 = 0; num1 < storeAlarms.size(); ++num1)
                  {
                    storeAlarms[num1]->write_as_json(handler);
                  }
                handler->finish_array();
              }
            if (flagHasAlarmCriteria)
              {
                handler->start_pair("AlarmCriteria");
                assert(storeAlarmCriteria.size() >= 1);
                handler->start_array();
                for (size_t num2 = 0; num2 < storeAlarmCriteria.size(); ++num2)
                  {
                    storeAlarmCriteria[num2]->write_as_json(handler);
                  }
                handler->finish_array();
              }
          }
        virtual const char *missing_field_error(void) const
          {
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
            JSONHoldingArrayGenerator<AlarmJSON::Generator, RCHandle<AlarmJSON>, AlarmJSON *, bool > fieldGeneratorAlarms;
            JSONHoldingArrayGenerator<AlarmCriteriaJSON::Generator, RCHandle<AlarmCriteriaJSON>, AlarmCriteriaJSON *, bool > fieldGeneratorAlarmCriteria;
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
                if (fieldGeneratorAlarms.have_value)
                  {
                    result->initAlarms();
                    size_t count = fieldGeneratorAlarms.value.size();
                    for (size_t num = 0; num < count; ++num)
                      {
                        result->appendAlarms(fieldGeneratorAlarms.value[num].referenced());
                      }
                    fieldGeneratorAlarms.value.clear();
                    fieldGeneratorAlarms.have_value = false;
                  }
                if (fieldGeneratorAlarmCriteria.have_value)
                  {
                    result->initAlarmCriteria();
                    size_t count = fieldGeneratorAlarmCriteria.value.size();
                    for (size_t num = 0; num < count; ++num)
                      {
                        result->appendAlarmCriteria(fieldGeneratorAlarmCriteria.value[num].referenced());
                      }
                    fieldGeneratorAlarmCriteria.value.clear();
                    fieldGeneratorAlarmCriteria.have_value = false;
                  }
              }
            virtual void handle_result(TypeNativeDataJSON *new_result) = 0;
            virtual JSONHandler *start_known_field(const char *field_name)
              {
                if (strncmp(field_name, "Alarm", 5) == 0)
                  {
                    switch ((unsigned char)(field_name[5]))
                      {
                        case 'C':
                            if (strcmp(&(field_name[6]), "riteria") == 0)
                                return &fieldGeneratorAlarmCriteria;
                            break;
                        case 's':
                            if (field_name[6] == 0)
                                return &fieldGeneratorAlarms;
                            break;
                        default:
                            break;
                      }
                  }
                return NULL;
              }

          public:
            Generator(bool ignore_extras = false) : fieldGeneratorAlarms("field \"Alarms\" of the TypeNativeData class", ignore_extras), fieldGeneratorAlarmCriteria("field \"AlarmCriteria\" of the TypeNativeData class", ignore_extras), unknownFieldGenerator(ignore_extras)
              {
                set_what("the TypeNativeData class");
              }
            ~Generator(void)
              {
              }

            void reset(void)
              {
                fieldGeneratorAlarms.reset();
                fieldGeneratorAlarmCriteria.reset();
                JSONObjectGenerator::reset();
                unknownFieldGenerator.reset();
              }
          };
      };

  private:
    bool flagHasNativeData;
    TypeNativeDataJSON * storeNativeData;
    bool flagHasDeleteAllDynamicResponse;
    DynamicResponseJSON * storeDeleteAllDynamicResponse;
    bool flagHasDeleteSingleDynamicResponse;
    DynamicResponseJSON * storeDeleteSingleDynamicResponse;
    bool flagHasDeleteMultiDynamicResponse;
    DynamicResponseJSON * storeDeleteMultiDynamicResponse;
    bool flagHasDeleteNoMatchDynamicResponse;
    DynamicResponseJSON * storeDeleteNoMatchDynamicResponse;
    bool flagHasDeletePartialMatchDynamicResponse;
    DynamicResponseJSON * storeDeletePartialMatchDynamicResponse;
    bool flagHasFutureSupportDynamicResponse;
    DynamicResponseJSON * storeFutureSupportDynamicResponse;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    AlarmUnsetCommandJSON(const AlarmUnsetCommandJSON &);
    AlarmUnsetCommandJSON & operator=(const AlarmUnsetCommandJSON &other);

    JSONValue * extraNativeDataToJSON(void) const;
    JSONValue * extraDeleteAllDynamicResponseToJSON(void) const;
    JSONValue * extraDeleteSingleDynamicResponseToJSON(void) const;
    JSONValue * extraDeleteMultiDynamicResponseToJSON(void) const;
    JSONValue * extraDeleteNoMatchDynamicResponseToJSON(void) const;
    JSONValue * extraDeletePartialMatchDynamicResponseToJSON(void) const;
    JSONValue * extraFutureSupportDynamicResponseToJSON(void) const;

    void  fromJSONNativeData(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONDeleteAllDynamicResponse(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONDeleteSingleDynamicResponse(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONDeleteMultiDynamicResponse(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONDeleteNoMatchDynamicResponse(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONDeletePartialMatchDynamicResponse(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONFutureSupportDynamicResponse(JSONValue *json_value, bool ignore_extras = false);


  public:
    AlarmUnsetCommandJSON(void);
    virtual ~AlarmUnsetCommandJSON(void);
    const char * getAlarmCommandKind(void) const;
    bool  hasNativeData(void) const;
    TypeNativeDataJSON *  getNativeData(void);
    const TypeNativeDataJSON *  getNativeData(void) const;
    bool  hasDeleteAllDynamicResponse(void) const;
    DynamicResponseJSON *  getDeleteAllDynamicResponse(void);
    const DynamicResponseJSON *  getDeleteAllDynamicResponse(void) const;
    bool  hasDeleteSingleDynamicResponse(void) const;
    DynamicResponseJSON *  getDeleteSingleDynamicResponse(void);
    const DynamicResponseJSON *  getDeleteSingleDynamicResponse(void) const;
    bool  hasDeleteMultiDynamicResponse(void) const;
    DynamicResponseJSON *  getDeleteMultiDynamicResponse(void);
    const DynamicResponseJSON *  getDeleteMultiDynamicResponse(void) const;
    bool  hasDeleteNoMatchDynamicResponse(void) const;
    DynamicResponseJSON *  getDeleteNoMatchDynamicResponse(void);
    const DynamicResponseJSON *  getDeleteNoMatchDynamicResponse(void) const;
    bool  hasDeletePartialMatchDynamicResponse(void) const;
    DynamicResponseJSON *  getDeletePartialMatchDynamicResponse(void);
    const DynamicResponseJSON *  getDeletePartialMatchDynamicResponse(void) const;
    bool  hasFutureSupportDynamicResponse(void) const;
    DynamicResponseJSON *  getFutureSupportDynamicResponse(void);
    const DynamicResponseJSON *  getFutureSupportDynamicResponse(void) const;

    virtual size_t extraAlarmUnsetCommandComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraAlarmUnsetCommandComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraAlarmUnsetCommandComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraAlarmUnsetCommandComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraAlarmUnsetCommandLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraAlarmUnsetCommandLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    size_t extraAlarmCommandComponentCount(void) const
      {
        size_t result = 0;
        if (flagHasNativeData)
            ++result;
        if (flagHasDeleteAllDynamicResponse)
            ++result;
        if (flagHasDeleteSingleDynamicResponse)
            ++result;
        if (flagHasDeleteMultiDynamicResponse)
            ++result;
        if (flagHasDeleteNoMatchDynamicResponse)
            ++result;
        if (flagHasDeletePartialMatchDynamicResponse)
            ++result;
        if (flagHasFutureSupportDynamicResponse)
            ++result;
        result += extraAlarmUnsetCommandComponentCount();
        return result;
      }
    const char *extraAlarmCommandComponentKey(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasNativeData)
          {
            if (remainder == 0)
                return "NativeData";
            --remainder;
          }
        if (flagHasDeleteAllDynamicResponse)
          {
            if (remainder == 0)
                return "DeleteAllDynamicResponse";
            --remainder;
          }
        if (flagHasDeleteSingleDynamicResponse)
          {
            if (remainder == 0)
                return "DeleteSingleDynamicResponse";
            --remainder;
          }
        if (flagHasDeleteMultiDynamicResponse)
          {
            if (remainder == 0)
                return "DeleteMultiDynamicResponse";
            --remainder;
          }
        if (flagHasDeleteNoMatchDynamicResponse)
          {
            if (remainder == 0)
                return "DeleteNoMatchDynamicResponse";
            --remainder;
          }
        if (flagHasDeletePartialMatchDynamicResponse)
          {
            if (remainder == 0)
                return "DeletePartialMatchDynamicResponse";
            --remainder;
          }
        if (flagHasFutureSupportDynamicResponse)
          {
            if (remainder == 0)
                return "FutureSupportDynamicResponse";
            --remainder;
          }
        return extraAlarmUnsetCommandComponentKey(remainder);
      }
    JSONValue *extraAlarmCommandComponentValue(size_t component_num)
      {
        size_t remainder = component_num;
        if (flagHasNativeData)
          {
            if (remainder == 0)
                return extraNativeDataToJSON();
            --remainder;
          }
        if (flagHasDeleteAllDynamicResponse)
          {
            if (remainder == 0)
                return extraDeleteAllDynamicResponseToJSON();
            --remainder;
          }
        if (flagHasDeleteSingleDynamicResponse)
          {
            if (remainder == 0)
                return extraDeleteSingleDynamicResponseToJSON();
            --remainder;
          }
        if (flagHasDeleteMultiDynamicResponse)
          {
            if (remainder == 0)
                return extraDeleteMultiDynamicResponseToJSON();
            --remainder;
          }
        if (flagHasDeleteNoMatchDynamicResponse)
          {
            if (remainder == 0)
                return extraDeleteNoMatchDynamicResponseToJSON();
            --remainder;
          }
        if (flagHasDeletePartialMatchDynamicResponse)
          {
            if (remainder == 0)
                return extraDeletePartialMatchDynamicResponseToJSON();
            --remainder;
          }
        if (flagHasFutureSupportDynamicResponse)
          {
            if (remainder == 0)
                return extraFutureSupportDynamicResponseToJSON();
            --remainder;
          }
        return extraAlarmUnsetCommandComponentValue(remainder);
      }
    const JSONValue *extraAlarmCommandComponentValue(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasNativeData)
          {
            if (remainder == 0)
                return extraNativeDataToJSON();
            --remainder;
          }
        if (flagHasDeleteAllDynamicResponse)
          {
            if (remainder == 0)
                return extraDeleteAllDynamicResponseToJSON();
            --remainder;
          }
        if (flagHasDeleteSingleDynamicResponse)
          {
            if (remainder == 0)
                return extraDeleteSingleDynamicResponseToJSON();
            --remainder;
          }
        if (flagHasDeleteMultiDynamicResponse)
          {
            if (remainder == 0)
                return extraDeleteMultiDynamicResponseToJSON();
            --remainder;
          }
        if (flagHasDeleteNoMatchDynamicResponse)
          {
            if (remainder == 0)
                return extraDeleteNoMatchDynamicResponseToJSON();
            --remainder;
          }
        if (flagHasDeletePartialMatchDynamicResponse)
          {
            if (remainder == 0)
                return extraDeletePartialMatchDynamicResponseToJSON();
            --remainder;
          }
        if (flagHasFutureSupportDynamicResponse)
          {
            if (remainder == 0)
                return extraFutureSupportDynamicResponseToJSON();
            --remainder;
          }
        return extraAlarmUnsetCommandComponentValue(remainder);
      }
    JSONValue *extraAlarmCommandLookup(const char *field_name)
      {
        switch ((unsigned char)(field_name[0]))
          {
            case 'D':
                if (strncmp(&(field_name[1]), "elete", 5) == 0)
                  {
                    switch ((unsigned char)(field_name[6]))
                      {
                        case 'A':
                            if (strcmp(&(field_name[7]), "llDynamicResponse") == 0)
                                return (flagHasDeleteAllDynamicResponse ? extraDeleteAllDynamicResponseToJSON() : NULL);
                            break;
                        case 'M':
                            if (strcmp(&(field_name[7]), "ultiDynamicResponse") == 0)
                                return (flagHasDeleteMultiDynamicResponse ? extraDeleteMultiDynamicResponseToJSON() : NULL);
                            break;
                        case 'N':
                            if (strcmp(&(field_name[7]), "oMatchDynamicResponse") == 0)
                                return (flagHasDeleteNoMatchDynamicResponse ? extraDeleteNoMatchDynamicResponseToJSON() : NULL);
                            break;
                        case 'P':
                            if (strcmp(&(field_name[7]), "artialMatchDynamicResponse") == 0)
                                return (flagHasDeletePartialMatchDynamicResponse ? extraDeletePartialMatchDynamicResponseToJSON() : NULL);
                            break;
                        case 'S':
                            if (strcmp(&(field_name[7]), "ingleDynamicResponse") == 0)
                                return (flagHasDeleteSingleDynamicResponse ? extraDeleteSingleDynamicResponseToJSON() : NULL);
                            break;
                        default:
                            break;
                      }
                  }
                break;
            case 'F':
                if (strcmp(&(field_name[1]), "utureSupportDynamicResponse") == 0)
                    return (flagHasFutureSupportDynamicResponse ? extraFutureSupportDynamicResponseToJSON() : NULL);
                break;
            case 'N':
                if (strcmp(&(field_name[1]), "ativeData") == 0)
                    return (flagHasNativeData ? extraNativeDataToJSON() : NULL);
                break;
            default:
                break;
          }
        return extraAlarmUnsetCommandLookup(field_name);
      }
    const JSONValue *extraAlarmCommandLookup(const char *field_name) const
      {
        switch ((unsigned char)(field_name[0]))
          {
            case 'D':
                if (strncmp(&(field_name[1]), "elete", 5) == 0)
                  {
                    switch ((unsigned char)(field_name[6]))
                      {
                        case 'A':
                            if (strcmp(&(field_name[7]), "llDynamicResponse") == 0)
                                return (flagHasDeleteAllDynamicResponse ? extraDeleteAllDynamicResponseToJSON() : NULL);
                            break;
                        case 'M':
                            if (strcmp(&(field_name[7]), "ultiDynamicResponse") == 0)
                                return (flagHasDeleteMultiDynamicResponse ? extraDeleteMultiDynamicResponseToJSON() : NULL);
                            break;
                        case 'N':
                            if (strcmp(&(field_name[7]), "oMatchDynamicResponse") == 0)
                                return (flagHasDeleteNoMatchDynamicResponse ? extraDeleteNoMatchDynamicResponseToJSON() : NULL);
                            break;
                        case 'P':
                            if (strcmp(&(field_name[7]), "artialMatchDynamicResponse") == 0)
                                return (flagHasDeletePartialMatchDynamicResponse ? extraDeletePartialMatchDynamicResponseToJSON() : NULL);
                            break;
                        case 'S':
                            if (strcmp(&(field_name[7]), "ingleDynamicResponse") == 0)
                                return (flagHasDeleteSingleDynamicResponse ? extraDeleteSingleDynamicResponseToJSON() : NULL);
                            break;
                        default:
                            break;
                      }
                  }
                break;
            case 'F':
                if (strcmp(&(field_name[1]), "utureSupportDynamicResponse") == 0)
                    return (flagHasFutureSupportDynamicResponse ? extraFutureSupportDynamicResponseToJSON() : NULL);
                break;
            case 'N':
                if (strcmp(&(field_name[1]), "ativeData") == 0)
                    return (flagHasNativeData ? extraNativeDataToJSON() : NULL);
                break;
            default:
                break;
          }
        return extraAlarmUnsetCommandLookup(field_name);
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
    void setDeleteAllDynamicResponse(DynamicResponseJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasDeleteAllDynamicResponse)
          {
            storeDeleteAllDynamicResponse->remove_reference();
          }
        flagHasDeleteAllDynamicResponse = true;
        storeDeleteAllDynamicResponse = new_value;
      }
    void unsetDeleteAllDynamicResponse(void)
      {
        if (flagHasDeleteAllDynamicResponse)
          {
            storeDeleteAllDynamicResponse->remove_reference();
          }
        flagHasDeleteAllDynamicResponse = false;
      }
    void setDeleteSingleDynamicResponse(DynamicResponseJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasDeleteSingleDynamicResponse)
          {
            storeDeleteSingleDynamicResponse->remove_reference();
          }
        flagHasDeleteSingleDynamicResponse = true;
        storeDeleteSingleDynamicResponse = new_value;
      }
    void unsetDeleteSingleDynamicResponse(void)
      {
        if (flagHasDeleteSingleDynamicResponse)
          {
            storeDeleteSingleDynamicResponse->remove_reference();
          }
        flagHasDeleteSingleDynamicResponse = false;
      }
    void setDeleteMultiDynamicResponse(DynamicResponseJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasDeleteMultiDynamicResponse)
          {
            storeDeleteMultiDynamicResponse->remove_reference();
          }
        flagHasDeleteMultiDynamicResponse = true;
        storeDeleteMultiDynamicResponse = new_value;
      }
    void unsetDeleteMultiDynamicResponse(void)
      {
        if (flagHasDeleteMultiDynamicResponse)
          {
            storeDeleteMultiDynamicResponse->remove_reference();
          }
        flagHasDeleteMultiDynamicResponse = false;
      }
    void setDeleteNoMatchDynamicResponse(DynamicResponseJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasDeleteNoMatchDynamicResponse)
          {
            storeDeleteNoMatchDynamicResponse->remove_reference();
          }
        flagHasDeleteNoMatchDynamicResponse = true;
        storeDeleteNoMatchDynamicResponse = new_value;
      }
    void unsetDeleteNoMatchDynamicResponse(void)
      {
        if (flagHasDeleteNoMatchDynamicResponse)
          {
            storeDeleteNoMatchDynamicResponse->remove_reference();
          }
        flagHasDeleteNoMatchDynamicResponse = false;
      }
    void setDeletePartialMatchDynamicResponse(DynamicResponseJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasDeletePartialMatchDynamicResponse)
          {
            storeDeletePartialMatchDynamicResponse->remove_reference();
          }
        flagHasDeletePartialMatchDynamicResponse = true;
        storeDeletePartialMatchDynamicResponse = new_value;
      }
    void unsetDeletePartialMatchDynamicResponse(void)
      {
        if (flagHasDeletePartialMatchDynamicResponse)
          {
            storeDeletePartialMatchDynamicResponse->remove_reference();
          }
        flagHasDeletePartialMatchDynamicResponse = false;
      }
    void setFutureSupportDynamicResponse(DynamicResponseJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasFutureSupportDynamicResponse)
          {
            storeFutureSupportDynamicResponse->remove_reference();
          }
        flagHasFutureSupportDynamicResponse = true;
        storeFutureSupportDynamicResponse = new_value;
      }
    void unsetFutureSupportDynamicResponse(void)
      {
        if (flagHasFutureSupportDynamicResponse)
          {
            storeFutureSupportDynamicResponse->remove_reference();
          }
        flagHasFutureSupportDynamicResponse = false;
      }

    virtual void extraAlarmUnsetCommandAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraAlarmUnsetCommandSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraAlarmUnsetCommandLookup(key);
        if (old_field == NULL)
          {
            extraAlarmUnsetCommandAppendPair(key, new_component);
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
    void extraAlarmCommandAppendPair(const char *key, JSONValue *new_component)
      {
        switch ((unsigned char)(key[0]))
          {
            case 'D':
                if (strncmp(&(key[1]), "elete", 5) == 0)
                  {
                    switch ((unsigned char)(key[6]))
                      {
                        case 'A':
                            if (strcmp(&(key[7]), "llDynamicResponse") == 0)
                                {
                                fromJSONDeleteAllDynamicResponse(new_component, false);
                                return;
                                }
                            break;
                        case 'M':
                            if (strcmp(&(key[7]), "ultiDynamicResponse") == 0)
                                {
                                fromJSONDeleteMultiDynamicResponse(new_component, false);
                                return;
                                }
                            break;
                        case 'N':
                            if (strcmp(&(key[7]), "oMatchDynamicResponse") == 0)
                                {
                                fromJSONDeleteNoMatchDynamicResponse(new_component, false);
                                return;
                                }
                            break;
                        case 'P':
                            if (strcmp(&(key[7]), "artialMatchDynamicResponse") == 0)
                                {
                                fromJSONDeletePartialMatchDynamicResponse(new_component, false);
                                return;
                                }
                            break;
                        case 'S':
                            if (strcmp(&(key[7]), "ingleDynamicResponse") == 0)
                                {
                                fromJSONDeleteSingleDynamicResponse(new_component, false);
                                return;
                                }
                            break;
                        default:
                            break;
                      }
                  }
                break;
            case 'F':
                if (strcmp(&(key[1]), "utureSupportDynamicResponse") == 0)
                    {
                    fromJSONFutureSupportDynamicResponse(new_component, false);
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
        extraAlarmUnsetCommandAppendPair(key, new_component);
      }
    void extraAlarmCommandSetField(const char *key, JSONValue *new_component)
      {
        switch ((unsigned char)(key[0]))
          {
            case 'D':
                if (strncmp(&(key[1]), "elete", 5) == 0)
                  {
                    switch ((unsigned char)(key[6]))
                      {
                        case 'A':
                            if (strcmp(&(key[7]), "llDynamicResponse") == 0)
                                {
                                fromJSONDeleteAllDynamicResponse(new_component, false);
                                return;
                                }
                            break;
                        case 'M':
                            if (strcmp(&(key[7]), "ultiDynamicResponse") == 0)
                                {
                                fromJSONDeleteMultiDynamicResponse(new_component, false);
                                return;
                                }
                            break;
                        case 'N':
                            if (strcmp(&(key[7]), "oMatchDynamicResponse") == 0)
                                {
                                fromJSONDeleteNoMatchDynamicResponse(new_component, false);
                                return;
                                }
                            break;
                        case 'P':
                            if (strcmp(&(key[7]), "artialMatchDynamicResponse") == 0)
                                {
                                fromJSONDeletePartialMatchDynamicResponse(new_component, false);
                                return;
                                }
                            break;
                        case 'S':
                            if (strcmp(&(key[7]), "ingleDynamicResponse") == 0)
                                {
                                fromJSONDeleteSingleDynamicResponse(new_component, false);
                                return;
                                }
                            break;
                        default:
                            break;
                      }
                  }
                break;
            case 'F':
                if (strcmp(&(key[1]), "utureSupportDynamicResponse") == 0)
                    {
                    fromJSONFutureSupportDynamicResponse(new_component, false);
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
        extraAlarmUnsetCommandSetField(key, new_component);
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
        AlarmCommandJSON::write_fields_as_json(handler);
        assert(flagHasNativeData);
        handler->start_pair("NativeData");
        storeNativeData->write_as_json(handler);
        if (flagHasDeleteAllDynamicResponse)
          {
            handler->start_pair("DeleteAllDynamicResponse");
            storeDeleteAllDynamicResponse->write_as_json(handler);
          }
        if (flagHasDeleteSingleDynamicResponse)
          {
            handler->start_pair("DeleteSingleDynamicResponse");
            storeDeleteSingleDynamicResponse->write_as_json(handler);
          }
        if (flagHasDeleteMultiDynamicResponse)
          {
            handler->start_pair("DeleteMultiDynamicResponse");
            storeDeleteMultiDynamicResponse->write_as_json(handler);
          }
        if (flagHasDeleteNoMatchDynamicResponse)
          {
            handler->start_pair("DeleteNoMatchDynamicResponse");
            storeDeleteNoMatchDynamicResponse->write_as_json(handler);
          }
        if (flagHasDeletePartialMatchDynamicResponse)
          {
            handler->start_pair("DeletePartialMatchDynamicResponse");
            storeDeletePartialMatchDynamicResponse->write_as_json(handler);
          }
        if (flagHasFutureSupportDynamicResponse)
          {
            handler->start_pair("FutureSupportDynamicResponse");
            storeFutureSupportDynamicResponse->write_as_json(handler);
          }
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasNativeData()))
          {
            return "When parsing the object for %what%, the \"NativeData\" field was missing.";
          }
        return NULL;
      }

    static AlarmUnsetCommandJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static AlarmUnsetCommandJSON *from_text(const char *text, bool ignore_extras = false)
      {
        AlarmUnsetCommandJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<AlarmUnsetCommandJSON>, AlarmUnsetCommandJSON *, bool> generator("Type AlarmUnsetCommand", ignore_extras);
            parse_json_value(text, "Text for AlarmUnsetCommandJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static AlarmUnsetCommandJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        AlarmUnsetCommandJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<AlarmUnsetCommandJSON>, AlarmUnsetCommandJSON *, bool> generator("Type AlarmUnsetCommand", ignore_extras);
            parse_json_value(fp, file_name, &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    class Generator : public AlarmCommandJSON::Generator
      {
      private:
        JSONHoldingGenerator<TypeNativeDataJSON::Generator, RCHandle<TypeNativeDataJSON>, TypeNativeDataJSON *, bool > fieldGeneratorNativeData;
        JSONHoldingGenerator<DynamicResponseJSON::Generator, RCHandle<DynamicResponseJSON>, DynamicResponseJSON *, bool > fieldGeneratorDeleteAllDynamicResponse;
        JSONHoldingGenerator<DynamicResponseJSON::Generator, RCHandle<DynamicResponseJSON>, DynamicResponseJSON *, bool > fieldGeneratorDeleteSingleDynamicResponse;
        JSONHoldingGenerator<DynamicResponseJSON::Generator, RCHandle<DynamicResponseJSON>, DynamicResponseJSON *, bool > fieldGeneratorDeleteMultiDynamicResponse;
        JSONHoldingGenerator<DynamicResponseJSON::Generator, RCHandle<DynamicResponseJSON>, DynamicResponseJSON *, bool > fieldGeneratorDeleteNoMatchDynamicResponse;
        JSONHoldingGenerator<DynamicResponseJSON::Generator, RCHandle<DynamicResponseJSON>, DynamicResponseJSON *, bool > fieldGeneratorDeletePartialMatchDynamicResponse;
        JSONHoldingGenerator<DynamicResponseJSON::Generator, RCHandle<DynamicResponseJSON>, DynamicResponseJSON *, bool > fieldGeneratorFutureSupportDynamicResponse;
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
            if (!(strcmp(getAlarmCommandJSONKey().c_str(), "AlarmUnsetCommand") == 0))
                throw("The key field has a value other than `AlarmUnsetCommand'.");
            AlarmUnsetCommandJSON *result = new AlarmUnsetCommandJSON();
            assert(result != NULL);
            RCHandle<AlarmUnsetCommandJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraAlarmUnsetCommandAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void handle_result(AlarmCommandJSON *new_result)
          {
            handle_result((AlarmUnsetCommandJSON *)new_result);
          }
        void finish(AlarmUnsetCommandJSON *result)
          {
            if (fieldGeneratorNativeData.have_value)
              {
                result->setNativeData(fieldGeneratorNativeData.value.referenced());
                fieldGeneratorNativeData.have_value = false;
              }
            else if (!(result->hasNativeData()))
              {
                error("When parsing the object for %what%, the \"NativeData\" field was missing.");
              }
            if (fieldGeneratorDeleteAllDynamicResponse.have_value)
              {
                result->setDeleteAllDynamicResponse(fieldGeneratorDeleteAllDynamicResponse.value.referenced());
                fieldGeneratorDeleteAllDynamicResponse.have_value = false;
              }
            if (fieldGeneratorDeleteSingleDynamicResponse.have_value)
              {
                result->setDeleteSingleDynamicResponse(fieldGeneratorDeleteSingleDynamicResponse.value.referenced());
                fieldGeneratorDeleteSingleDynamicResponse.have_value = false;
              }
            if (fieldGeneratorDeleteMultiDynamicResponse.have_value)
              {
                result->setDeleteMultiDynamicResponse(fieldGeneratorDeleteMultiDynamicResponse.value.referenced());
                fieldGeneratorDeleteMultiDynamicResponse.have_value = false;
              }
            if (fieldGeneratorDeleteNoMatchDynamicResponse.have_value)
              {
                result->setDeleteNoMatchDynamicResponse(fieldGeneratorDeleteNoMatchDynamicResponse.value.referenced());
                fieldGeneratorDeleteNoMatchDynamicResponse.have_value = false;
              }
            if (fieldGeneratorDeletePartialMatchDynamicResponse.have_value)
              {
                result->setDeletePartialMatchDynamicResponse(fieldGeneratorDeletePartialMatchDynamicResponse.value.referenced());
                fieldGeneratorDeletePartialMatchDynamicResponse.have_value = false;
              }
            if (fieldGeneratorFutureSupportDynamicResponse.have_value)
              {
                result->setFutureSupportDynamicResponse(fieldGeneratorFutureSupportDynamicResponse.value.referenced());
                fieldGeneratorFutureSupportDynamicResponse.have_value = false;
              }
            AlarmCommandJSON::Generator::finish(result);
          }
        virtual void handle_result(AlarmUnsetCommandJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'D':
                    if (strncmp(&(field_name[1]), "elete", 5) == 0)
                      {
                        switch ((unsigned char)(field_name[6]))
                          {
                            case 'A':
                                if (strcmp(&(field_name[7]), "llDynamicResponse") == 0)
                                    return &fieldGeneratorDeleteAllDynamicResponse;
                                break;
                            case 'M':
                                if (strcmp(&(field_name[7]), "ultiDynamicResponse") == 0)
                                    return &fieldGeneratorDeleteMultiDynamicResponse;
                                break;
                            case 'N':
                                if (strcmp(&(field_name[7]), "oMatchDynamicResponse") == 0)
                                    return &fieldGeneratorDeleteNoMatchDynamicResponse;
                                break;
                            case 'P':
                                if (strcmp(&(field_name[7]), "artialMatchDynamicResponse") == 0)
                                    return &fieldGeneratorDeletePartialMatchDynamicResponse;
                                break;
                            case 'S':
                                if (strcmp(&(field_name[7]), "ingleDynamicResponse") == 0)
                                    return &fieldGeneratorDeleteSingleDynamicResponse;
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 'F':
                    if (strcmp(&(field_name[1]), "utureSupportDynamicResponse") == 0)
                        return &fieldGeneratorFutureSupportDynamicResponse;
                    break;
                case 'N':
                    if (strcmp(&(field_name[1]), "ativeData") == 0)
                        return &fieldGeneratorNativeData;
                    break;
                default:
                    break;
              }
            return AlarmCommandJSON::Generator::start_known_field(field_name);
          }

      public:
        Generator(bool ignore_extras = false) : AlarmCommandJSON::Generator(ignore_extras), fieldGeneratorNativeData("field \"NativeData\" of the AlarmUnsetCommand class", ignore_extras), fieldGeneratorDeleteAllDynamicResponse("field \"DeleteAllDynamicResponse\" of the AlarmUnsetCommand class", ignore_extras), fieldGeneratorDeleteSingleDynamicResponse("field \"DeleteSingleDynamicResponse\" of the AlarmUnsetCommand class", ignore_extras), fieldGeneratorDeleteMultiDynamicResponse("field \"DeleteMultiDynamicResponse\" of the AlarmUnsetCommand class", ignore_extras), fieldGeneratorDeleteNoMatchDynamicResponse("field \"DeleteNoMatchDynamicResponse\" of the AlarmUnsetCommand class", ignore_extras), fieldGeneratorDeletePartialMatchDynamicResponse("field \"DeletePartialMatchDynamicResponse\" of the AlarmUnsetCommand class", ignore_extras), fieldGeneratorFutureSupportDynamicResponse("field \"FutureSupportDynamicResponse\" of the AlarmUnsetCommand class", ignore_extras), unknownFieldGenerator(ignore_extras)
          {
            set_what("the AlarmUnsetCommand class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorNativeData.reset();
            fieldGeneratorDeleteAllDynamicResponse.reset();
            fieldGeneratorDeleteSingleDynamicResponse.reset();
            fieldGeneratorDeleteMultiDynamicResponse.reset();
            fieldGeneratorDeleteNoMatchDynamicResponse.reset();
            fieldGeneratorDeletePartialMatchDynamicResponse.reset();
            fieldGeneratorFutureSupportDynamicResponse.reset();
            AlarmCommandJSON::Generator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* ALARMUNSETCOMMANDJSON_H */
