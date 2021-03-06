/* file "TimerDeleteCommandJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef TIMERDELETECOMMANDJSON_H
#define TIMERDELETECOMMANDJSON_H

#pragma interface

#include "TimerCommandJSON.h"
#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONHoldingArrayGenerator.h"
#include <vector>
#include "TimerCriteriaJSON.h"
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


class TimerDeleteCommandJSON : public TimerCommandJSON
  {
  public:
    class TypeNativeDataJSON : public ReferenceCounted
      {
      private:
        bool flagHasTimerCriteria;
        std::vector< TimerCriteriaJSON * > storeTimerCriteria;
        std::vector<std::string> extraKeys;
        std::vector<JSONValue *> extraValues;
        string_index *extraIndex;

        TypeNativeDataJSON(const TypeNativeDataJSON &);
        TypeNativeDataJSON & operator=(const TypeNativeDataJSON &other);

        void  fromJSONTimerCriteria(JSONValue *json_value, bool ignore_extras = false);


      public:
        TypeNativeDataJSON(void);
        virtual ~TypeNativeDataJSON(void);
        bool  hasTimerCriteria(void) const;
        size_t  countOfTimerCriteria(void) const;
        TimerCriteriaJSON *  elementOfTimerCriteria(size_t element_num);
        const TimerCriteriaJSON *  elementOfTimerCriteria(size_t element_num) const;
        std::vector< TimerCriteriaJSON * >  getTimerCriteria(void);
        const std::vector< TimerCriteriaJSON * >  getTimerCriteria(void) const;

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

        void initTimerCriteria(void)
          {
            if (flagHasTimerCriteria)
              {
                for (size_t num2 = 0; num2 < storeTimerCriteria.size(); ++num2)
                  {
                    storeTimerCriteria[num2]->remove_reference();
                  }
              }
            flagHasTimerCriteria = true;
            storeTimerCriteria.clear();
          }
        void appendTimerCriteria(TimerCriteriaJSON * to_append)
          {
            if (!flagHasTimerCriteria)
              {
                flagHasTimerCriteria = true;
                storeTimerCriteria.clear();
              }
            assert(flagHasTimerCriteria);
            to_append->add_reference();
            storeTimerCriteria.push_back(to_append);
          }
        void unsetTimerCriteria(void)
          {
            if (flagHasTimerCriteria)
              {
                for (size_t num3 = 0; num3 < storeTimerCriteria.size(); ++num3)
                  {
                    storeTimerCriteria[num3]->remove_reference();
                  }
              }
            flagHasTimerCriteria = false;
            storeTimerCriteria.clear();
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
            if (flagHasTimerCriteria)
              {
                handler->start_pair("TimerCriteria");
                assert(storeTimerCriteria.size() >= 1);
                handler->start_array();
                for (size_t num1 = 0; num1 < storeTimerCriteria.size(); ++num1)
                  {
                    storeTimerCriteria[num1]->write_as_json(handler);
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
            JSONHoldingArrayGenerator<TimerCriteriaJSON::Generator, RCHandle<TimerCriteriaJSON>, TimerCriteriaJSON *, bool > fieldGeneratorTimerCriteria;
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
                if (fieldGeneratorTimerCriteria.have_value)
                  {
                    result->initTimerCriteria();
                    size_t count = fieldGeneratorTimerCriteria.value.size();
                    for (size_t num = 0; num < count; ++num)
                      {
                        result->appendTimerCriteria(fieldGeneratorTimerCriteria.value[num].referenced());
                      }
                    fieldGeneratorTimerCriteria.value.clear();
                    fieldGeneratorTimerCriteria.have_value = false;
                  }
              }
            virtual void handle_result(TypeNativeDataJSON *new_result) = 0;
            virtual JSONHandler *start_known_field(const char *field_name)
              {
                if (strcmp(field_name, "TimerCriteria") == 0)
                    return &fieldGeneratorTimerCriteria;
                return NULL;
              }

          public:
            Generator(bool ignore_extras = false) : fieldGeneratorTimerCriteria("field \"TimerCriteria\" of the TypeNativeData class", ignore_extras), unknownFieldGenerator(ignore_extras)
              {
                set_what("the TypeNativeData class");
              }
            ~Generator(void)
              {
              }

            void reset(void)
              {
                fieldGeneratorTimerCriteria.reset();
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

    TimerDeleteCommandJSON(const TimerDeleteCommandJSON &);
    TimerDeleteCommandJSON & operator=(const TimerDeleteCommandJSON &other);

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
    TimerDeleteCommandJSON(void);
    virtual ~TimerDeleteCommandJSON(void);
    const char * getTimerCommandKind(void) const;
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

    virtual size_t extraTimerDeleteCommandComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraTimerDeleteCommandComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraTimerDeleteCommandComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraTimerDeleteCommandComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraTimerDeleteCommandLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraTimerDeleteCommandLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    size_t extraTimerCommandComponentCount(void) const
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
        result += extraTimerDeleteCommandComponentCount();
        return result;
      }
    const char *extraTimerCommandComponentKey(size_t component_num) const
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
        return extraTimerDeleteCommandComponentKey(remainder);
      }
    JSONValue *extraTimerCommandComponentValue(size_t component_num)
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
        return extraTimerDeleteCommandComponentValue(remainder);
      }
    const JSONValue *extraTimerCommandComponentValue(size_t component_num) const
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
        return extraTimerDeleteCommandComponentValue(remainder);
      }
    JSONValue *extraTimerCommandLookup(const char *field_name)
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
        return extraTimerDeleteCommandLookup(field_name);
      }
    const JSONValue *extraTimerCommandLookup(const char *field_name) const
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
        return extraTimerDeleteCommandLookup(field_name);
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

    virtual void extraTimerDeleteCommandAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraTimerDeleteCommandSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraTimerDeleteCommandLookup(key);
        if (old_field == NULL)
          {
            extraTimerDeleteCommandAppendPair(key, new_component);
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
    void extraTimerCommandAppendPair(const char *key, JSONValue *new_component)
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
        extraTimerDeleteCommandAppendPair(key, new_component);
      }
    void extraTimerCommandSetField(const char *key, JSONValue *new_component)
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
        extraTimerDeleteCommandSetField(key, new_component);
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
        TimerCommandJSON::write_fields_as_json(handler);
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

    static TimerDeleteCommandJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static TimerDeleteCommandJSON *from_text(const char *text, bool ignore_extras = false)
      {
        TimerDeleteCommandJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<TimerDeleteCommandJSON>, TimerDeleteCommandJSON *, bool> generator("Type TimerDeleteCommand", ignore_extras);
            parse_json_value(text, "Text for TimerDeleteCommandJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static TimerDeleteCommandJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        TimerDeleteCommandJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<TimerDeleteCommandJSON>, TimerDeleteCommandJSON *, bool> generator("Type TimerDeleteCommand", ignore_extras);
            parse_json_value(fp, file_name, &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    class Generator : public TimerCommandJSON::Generator
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
            if (!(strcmp(getTimerCommandJSONKey().c_str(), "TimerDeleteCommand") == 0))
                throw("The key field has a value other than `TimerDeleteCommand'.");
            TimerDeleteCommandJSON *result = new TimerDeleteCommandJSON();
            assert(result != NULL);
            RCHandle<TimerDeleteCommandJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraTimerDeleteCommandAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void handle_result(TimerCommandJSON *new_result)
          {
            handle_result((TimerDeleteCommandJSON *)new_result);
          }
        void finish(TimerDeleteCommandJSON *result)
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
            TimerCommandJSON::Generator::finish(result);
          }
        virtual void handle_result(TimerDeleteCommandJSON *new_result) = 0;
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
            return TimerCommandJSON::Generator::start_known_field(field_name);
          }

      public:
        Generator(bool ignore_extras = false) : TimerCommandJSON::Generator(ignore_extras), fieldGeneratorNativeData("field \"NativeData\" of the TimerDeleteCommand class", ignore_extras), fieldGeneratorDeleteAllDynamicResponse("field \"DeleteAllDynamicResponse\" of the TimerDeleteCommand class", ignore_extras), fieldGeneratorDeleteSingleDynamicResponse("field \"DeleteSingleDynamicResponse\" of the TimerDeleteCommand class", ignore_extras), fieldGeneratorDeleteMultiDynamicResponse("field \"DeleteMultiDynamicResponse\" of the TimerDeleteCommand class", ignore_extras), fieldGeneratorDeleteNoMatchDynamicResponse("field \"DeleteNoMatchDynamicResponse\" of the TimerDeleteCommand class", ignore_extras), fieldGeneratorDeletePartialMatchDynamicResponse("field \"DeletePartialMatchDynamicResponse\" of the TimerDeleteCommand class", ignore_extras), fieldGeneratorFutureSupportDynamicResponse("field \"FutureSupportDynamicResponse\" of the TimerDeleteCommand class", ignore_extras), unknownFieldGenerator(ignore_extras)
          {
            set_what("the TimerDeleteCommand class");
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
            TimerCommandJSON::Generator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* TIMERDELETECOMMANDJSON_H */
