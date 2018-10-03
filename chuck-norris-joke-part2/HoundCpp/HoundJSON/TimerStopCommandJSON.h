/* file "TimerStopCommandJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef TIMERSTOPCOMMANDJSON_H
#define TIMERSTOPCOMMANDJSON_H

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


class TimerStopCommandJSON : public TimerCommandJSON
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
    bool flagHasStopAllDynamicResponse;
    DynamicResponseJSON * storeStopAllDynamicResponse;
    bool flagHasStopSingleDynamicResponse;
    DynamicResponseJSON * storeStopSingleDynamicResponse;
    bool flagHasStopMultiDynamicResponse;
    DynamicResponseJSON * storeStopMultiDynamicResponse;
    bool flagHasStopNoMatchDynamicResponse;
    DynamicResponseJSON * storeStopNoMatchDynamicResponse;
    bool flagHasStopPartialMatchDynamicResponse;
    DynamicResponseJSON * storeStopPartialMatchDynamicResponse;
    bool flagHasFutureSupportDynamicResponse;
    DynamicResponseJSON * storeFutureSupportDynamicResponse;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    TimerStopCommandJSON(const TimerStopCommandJSON &);
    TimerStopCommandJSON & operator=(const TimerStopCommandJSON &other);

    JSONValue * extraNativeDataToJSON(void) const;
    JSONValue * extraStopAllDynamicResponseToJSON(void) const;
    JSONValue * extraStopSingleDynamicResponseToJSON(void) const;
    JSONValue * extraStopMultiDynamicResponseToJSON(void) const;
    JSONValue * extraStopNoMatchDynamicResponseToJSON(void) const;
    JSONValue * extraStopPartialMatchDynamicResponseToJSON(void) const;
    JSONValue * extraFutureSupportDynamicResponseToJSON(void) const;

    void  fromJSONNativeData(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONStopAllDynamicResponse(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONStopSingleDynamicResponse(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONStopMultiDynamicResponse(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONStopNoMatchDynamicResponse(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONStopPartialMatchDynamicResponse(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONFutureSupportDynamicResponse(JSONValue *json_value, bool ignore_extras = false);


  public:
    TimerStopCommandJSON(void);
    virtual ~TimerStopCommandJSON(void);
    const char * getTimerCommandKind(void) const;
    bool  hasNativeData(void) const;
    TypeNativeDataJSON *  getNativeData(void);
    const TypeNativeDataJSON *  getNativeData(void) const;
    bool  hasStopAllDynamicResponse(void) const;
    DynamicResponseJSON *  getStopAllDynamicResponse(void);
    const DynamicResponseJSON *  getStopAllDynamicResponse(void) const;
    bool  hasStopSingleDynamicResponse(void) const;
    DynamicResponseJSON *  getStopSingleDynamicResponse(void);
    const DynamicResponseJSON *  getStopSingleDynamicResponse(void) const;
    bool  hasStopMultiDynamicResponse(void) const;
    DynamicResponseJSON *  getStopMultiDynamicResponse(void);
    const DynamicResponseJSON *  getStopMultiDynamicResponse(void) const;
    bool  hasStopNoMatchDynamicResponse(void) const;
    DynamicResponseJSON *  getStopNoMatchDynamicResponse(void);
    const DynamicResponseJSON *  getStopNoMatchDynamicResponse(void) const;
    bool  hasStopPartialMatchDynamicResponse(void) const;
    DynamicResponseJSON *  getStopPartialMatchDynamicResponse(void);
    const DynamicResponseJSON *  getStopPartialMatchDynamicResponse(void) const;
    bool  hasFutureSupportDynamicResponse(void) const;
    DynamicResponseJSON *  getFutureSupportDynamicResponse(void);
    const DynamicResponseJSON *  getFutureSupportDynamicResponse(void) const;

    virtual size_t extraTimerStopCommandComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraTimerStopCommandComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraTimerStopCommandComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraTimerStopCommandComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraTimerStopCommandLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraTimerStopCommandLookup(const char *field_name) const
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
        if (flagHasStopAllDynamicResponse)
            ++result;
        if (flagHasStopSingleDynamicResponse)
            ++result;
        if (flagHasStopMultiDynamicResponse)
            ++result;
        if (flagHasStopNoMatchDynamicResponse)
            ++result;
        if (flagHasStopPartialMatchDynamicResponse)
            ++result;
        if (flagHasFutureSupportDynamicResponse)
            ++result;
        result += extraTimerStopCommandComponentCount();
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
        if (flagHasStopAllDynamicResponse)
          {
            if (remainder == 0)
                return "StopAllDynamicResponse";
            --remainder;
          }
        if (flagHasStopSingleDynamicResponse)
          {
            if (remainder == 0)
                return "StopSingleDynamicResponse";
            --remainder;
          }
        if (flagHasStopMultiDynamicResponse)
          {
            if (remainder == 0)
                return "StopMultiDynamicResponse";
            --remainder;
          }
        if (flagHasStopNoMatchDynamicResponse)
          {
            if (remainder == 0)
                return "StopNoMatchDynamicResponse";
            --remainder;
          }
        if (flagHasStopPartialMatchDynamicResponse)
          {
            if (remainder == 0)
                return "StopPartialMatchDynamicResponse";
            --remainder;
          }
        if (flagHasFutureSupportDynamicResponse)
          {
            if (remainder == 0)
                return "FutureSupportDynamicResponse";
            --remainder;
          }
        return extraTimerStopCommandComponentKey(remainder);
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
        if (flagHasStopAllDynamicResponse)
          {
            if (remainder == 0)
                return extraStopAllDynamicResponseToJSON();
            --remainder;
          }
        if (flagHasStopSingleDynamicResponse)
          {
            if (remainder == 0)
                return extraStopSingleDynamicResponseToJSON();
            --remainder;
          }
        if (flagHasStopMultiDynamicResponse)
          {
            if (remainder == 0)
                return extraStopMultiDynamicResponseToJSON();
            --remainder;
          }
        if (flagHasStopNoMatchDynamicResponse)
          {
            if (remainder == 0)
                return extraStopNoMatchDynamicResponseToJSON();
            --remainder;
          }
        if (flagHasStopPartialMatchDynamicResponse)
          {
            if (remainder == 0)
                return extraStopPartialMatchDynamicResponseToJSON();
            --remainder;
          }
        if (flagHasFutureSupportDynamicResponse)
          {
            if (remainder == 0)
                return extraFutureSupportDynamicResponseToJSON();
            --remainder;
          }
        return extraTimerStopCommandComponentValue(remainder);
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
        if (flagHasStopAllDynamicResponse)
          {
            if (remainder == 0)
                return extraStopAllDynamicResponseToJSON();
            --remainder;
          }
        if (flagHasStopSingleDynamicResponse)
          {
            if (remainder == 0)
                return extraStopSingleDynamicResponseToJSON();
            --remainder;
          }
        if (flagHasStopMultiDynamicResponse)
          {
            if (remainder == 0)
                return extraStopMultiDynamicResponseToJSON();
            --remainder;
          }
        if (flagHasStopNoMatchDynamicResponse)
          {
            if (remainder == 0)
                return extraStopNoMatchDynamicResponseToJSON();
            --remainder;
          }
        if (flagHasStopPartialMatchDynamicResponse)
          {
            if (remainder == 0)
                return extraStopPartialMatchDynamicResponseToJSON();
            --remainder;
          }
        if (flagHasFutureSupportDynamicResponse)
          {
            if (remainder == 0)
                return extraFutureSupportDynamicResponseToJSON();
            --remainder;
          }
        return extraTimerStopCommandComponentValue(remainder);
      }
    JSONValue *extraTimerCommandLookup(const char *field_name)
      {
        switch ((unsigned char)(field_name[0]))
          {
            case 'F':
                if (strcmp(&(field_name[1]), "utureSupportDynamicResponse") == 0)
                    return (flagHasFutureSupportDynamicResponse ? extraFutureSupportDynamicResponseToJSON() : NULL);
                break;
            case 'N':
                if (strcmp(&(field_name[1]), "ativeData") == 0)
                    return (flagHasNativeData ? extraNativeDataToJSON() : NULL);
                break;
            case 'S':
                if (strncmp(&(field_name[1]), "top", 3) == 0)
                  {
                    switch ((unsigned char)(field_name[4]))
                      {
                        case 'A':
                            if (strcmp(&(field_name[5]), "llDynamicResponse") == 0)
                                return (flagHasStopAllDynamicResponse ? extraStopAllDynamicResponseToJSON() : NULL);
                            break;
                        case 'M':
                            if (strcmp(&(field_name[5]), "ultiDynamicResponse") == 0)
                                return (flagHasStopMultiDynamicResponse ? extraStopMultiDynamicResponseToJSON() : NULL);
                            break;
                        case 'N':
                            if (strcmp(&(field_name[5]), "oMatchDynamicResponse") == 0)
                                return (flagHasStopNoMatchDynamicResponse ? extraStopNoMatchDynamicResponseToJSON() : NULL);
                            break;
                        case 'P':
                            if (strcmp(&(field_name[5]), "artialMatchDynamicResponse") == 0)
                                return (flagHasStopPartialMatchDynamicResponse ? extraStopPartialMatchDynamicResponseToJSON() : NULL);
                            break;
                        case 'S':
                            if (strcmp(&(field_name[5]), "ingleDynamicResponse") == 0)
                                return (flagHasStopSingleDynamicResponse ? extraStopSingleDynamicResponseToJSON() : NULL);
                            break;
                        default:
                            break;
                      }
                  }
                break;
            default:
                break;
          }
        return extraTimerStopCommandLookup(field_name);
      }
    const JSONValue *extraTimerCommandLookup(const char *field_name) const
      {
        switch ((unsigned char)(field_name[0]))
          {
            case 'F':
                if (strcmp(&(field_name[1]), "utureSupportDynamicResponse") == 0)
                    return (flagHasFutureSupportDynamicResponse ? extraFutureSupportDynamicResponseToJSON() : NULL);
                break;
            case 'N':
                if (strcmp(&(field_name[1]), "ativeData") == 0)
                    return (flagHasNativeData ? extraNativeDataToJSON() : NULL);
                break;
            case 'S':
                if (strncmp(&(field_name[1]), "top", 3) == 0)
                  {
                    switch ((unsigned char)(field_name[4]))
                      {
                        case 'A':
                            if (strcmp(&(field_name[5]), "llDynamicResponse") == 0)
                                return (flagHasStopAllDynamicResponse ? extraStopAllDynamicResponseToJSON() : NULL);
                            break;
                        case 'M':
                            if (strcmp(&(field_name[5]), "ultiDynamicResponse") == 0)
                                return (flagHasStopMultiDynamicResponse ? extraStopMultiDynamicResponseToJSON() : NULL);
                            break;
                        case 'N':
                            if (strcmp(&(field_name[5]), "oMatchDynamicResponse") == 0)
                                return (flagHasStopNoMatchDynamicResponse ? extraStopNoMatchDynamicResponseToJSON() : NULL);
                            break;
                        case 'P':
                            if (strcmp(&(field_name[5]), "artialMatchDynamicResponse") == 0)
                                return (flagHasStopPartialMatchDynamicResponse ? extraStopPartialMatchDynamicResponseToJSON() : NULL);
                            break;
                        case 'S':
                            if (strcmp(&(field_name[5]), "ingleDynamicResponse") == 0)
                                return (flagHasStopSingleDynamicResponse ? extraStopSingleDynamicResponseToJSON() : NULL);
                            break;
                        default:
                            break;
                      }
                  }
                break;
            default:
                break;
          }
        return extraTimerStopCommandLookup(field_name);
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
    void setStopAllDynamicResponse(DynamicResponseJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasStopAllDynamicResponse)
          {
            storeStopAllDynamicResponse->remove_reference();
          }
        flagHasStopAllDynamicResponse = true;
        storeStopAllDynamicResponse = new_value;
      }
    void unsetStopAllDynamicResponse(void)
      {
        if (flagHasStopAllDynamicResponse)
          {
            storeStopAllDynamicResponse->remove_reference();
          }
        flagHasStopAllDynamicResponse = false;
      }
    void setStopSingleDynamicResponse(DynamicResponseJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasStopSingleDynamicResponse)
          {
            storeStopSingleDynamicResponse->remove_reference();
          }
        flagHasStopSingleDynamicResponse = true;
        storeStopSingleDynamicResponse = new_value;
      }
    void unsetStopSingleDynamicResponse(void)
      {
        if (flagHasStopSingleDynamicResponse)
          {
            storeStopSingleDynamicResponse->remove_reference();
          }
        flagHasStopSingleDynamicResponse = false;
      }
    void setStopMultiDynamicResponse(DynamicResponseJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasStopMultiDynamicResponse)
          {
            storeStopMultiDynamicResponse->remove_reference();
          }
        flagHasStopMultiDynamicResponse = true;
        storeStopMultiDynamicResponse = new_value;
      }
    void unsetStopMultiDynamicResponse(void)
      {
        if (flagHasStopMultiDynamicResponse)
          {
            storeStopMultiDynamicResponse->remove_reference();
          }
        flagHasStopMultiDynamicResponse = false;
      }
    void setStopNoMatchDynamicResponse(DynamicResponseJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasStopNoMatchDynamicResponse)
          {
            storeStopNoMatchDynamicResponse->remove_reference();
          }
        flagHasStopNoMatchDynamicResponse = true;
        storeStopNoMatchDynamicResponse = new_value;
      }
    void unsetStopNoMatchDynamicResponse(void)
      {
        if (flagHasStopNoMatchDynamicResponse)
          {
            storeStopNoMatchDynamicResponse->remove_reference();
          }
        flagHasStopNoMatchDynamicResponse = false;
      }
    void setStopPartialMatchDynamicResponse(DynamicResponseJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasStopPartialMatchDynamicResponse)
          {
            storeStopPartialMatchDynamicResponse->remove_reference();
          }
        flagHasStopPartialMatchDynamicResponse = true;
        storeStopPartialMatchDynamicResponse = new_value;
      }
    void unsetStopPartialMatchDynamicResponse(void)
      {
        if (flagHasStopPartialMatchDynamicResponse)
          {
            storeStopPartialMatchDynamicResponse->remove_reference();
          }
        flagHasStopPartialMatchDynamicResponse = false;
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

    virtual void extraTimerStopCommandAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraTimerStopCommandSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraTimerStopCommandLookup(key);
        if (old_field == NULL)
          {
            extraTimerStopCommandAppendPair(key, new_component);
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
            case 'S':
                if (strncmp(&(key[1]), "top", 3) == 0)
                  {
                    switch ((unsigned char)(key[4]))
                      {
                        case 'A':
                            if (strcmp(&(key[5]), "llDynamicResponse") == 0)
                                {
                                fromJSONStopAllDynamicResponse(new_component, false);
                                return;
                                }
                            break;
                        case 'M':
                            if (strcmp(&(key[5]), "ultiDynamicResponse") == 0)
                                {
                                fromJSONStopMultiDynamicResponse(new_component, false);
                                return;
                                }
                            break;
                        case 'N':
                            if (strcmp(&(key[5]), "oMatchDynamicResponse") == 0)
                                {
                                fromJSONStopNoMatchDynamicResponse(new_component, false);
                                return;
                                }
                            break;
                        case 'P':
                            if (strcmp(&(key[5]), "artialMatchDynamicResponse") == 0)
                                {
                                fromJSONStopPartialMatchDynamicResponse(new_component, false);
                                return;
                                }
                            break;
                        case 'S':
                            if (strcmp(&(key[5]), "ingleDynamicResponse") == 0)
                                {
                                fromJSONStopSingleDynamicResponse(new_component, false);
                                return;
                                }
                            break;
                        default:
                            break;
                      }
                  }
                break;
            default:
                break;
          }
        extraTimerStopCommandAppendPair(key, new_component);
      }
    void extraTimerCommandSetField(const char *key, JSONValue *new_component)
      {
        switch ((unsigned char)(key[0]))
          {
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
            case 'S':
                if (strncmp(&(key[1]), "top", 3) == 0)
                  {
                    switch ((unsigned char)(key[4]))
                      {
                        case 'A':
                            if (strcmp(&(key[5]), "llDynamicResponse") == 0)
                                {
                                fromJSONStopAllDynamicResponse(new_component, false);
                                return;
                                }
                            break;
                        case 'M':
                            if (strcmp(&(key[5]), "ultiDynamicResponse") == 0)
                                {
                                fromJSONStopMultiDynamicResponse(new_component, false);
                                return;
                                }
                            break;
                        case 'N':
                            if (strcmp(&(key[5]), "oMatchDynamicResponse") == 0)
                                {
                                fromJSONStopNoMatchDynamicResponse(new_component, false);
                                return;
                                }
                            break;
                        case 'P':
                            if (strcmp(&(key[5]), "artialMatchDynamicResponse") == 0)
                                {
                                fromJSONStopPartialMatchDynamicResponse(new_component, false);
                                return;
                                }
                            break;
                        case 'S':
                            if (strcmp(&(key[5]), "ingleDynamicResponse") == 0)
                                {
                                fromJSONStopSingleDynamicResponse(new_component, false);
                                return;
                                }
                            break;
                        default:
                            break;
                      }
                  }
                break;
            default:
                break;
          }
        extraTimerStopCommandSetField(key, new_component);
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
        if (flagHasStopAllDynamicResponse)
          {
            handler->start_pair("StopAllDynamicResponse");
            storeStopAllDynamicResponse->write_as_json(handler);
          }
        if (flagHasStopSingleDynamicResponse)
          {
            handler->start_pair("StopSingleDynamicResponse");
            storeStopSingleDynamicResponse->write_as_json(handler);
          }
        if (flagHasStopMultiDynamicResponse)
          {
            handler->start_pair("StopMultiDynamicResponse");
            storeStopMultiDynamicResponse->write_as_json(handler);
          }
        if (flagHasStopNoMatchDynamicResponse)
          {
            handler->start_pair("StopNoMatchDynamicResponse");
            storeStopNoMatchDynamicResponse->write_as_json(handler);
          }
        if (flagHasStopPartialMatchDynamicResponse)
          {
            handler->start_pair("StopPartialMatchDynamicResponse");
            storeStopPartialMatchDynamicResponse->write_as_json(handler);
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

    static TimerStopCommandJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static TimerStopCommandJSON *from_text(const char *text, bool ignore_extras = false)
      {
        TimerStopCommandJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<TimerStopCommandJSON>, TimerStopCommandJSON *, bool> generator("Type TimerStopCommand", ignore_extras);
            parse_json_value(text, "Text for TimerStopCommandJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static TimerStopCommandJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        TimerStopCommandJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<TimerStopCommandJSON>, TimerStopCommandJSON *, bool> generator("Type TimerStopCommand", ignore_extras);
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
        JSONHoldingGenerator<DynamicResponseJSON::Generator, RCHandle<DynamicResponseJSON>, DynamicResponseJSON *, bool > fieldGeneratorStopAllDynamicResponse;
        JSONHoldingGenerator<DynamicResponseJSON::Generator, RCHandle<DynamicResponseJSON>, DynamicResponseJSON *, bool > fieldGeneratorStopSingleDynamicResponse;
        JSONHoldingGenerator<DynamicResponseJSON::Generator, RCHandle<DynamicResponseJSON>, DynamicResponseJSON *, bool > fieldGeneratorStopMultiDynamicResponse;
        JSONHoldingGenerator<DynamicResponseJSON::Generator, RCHandle<DynamicResponseJSON>, DynamicResponseJSON *, bool > fieldGeneratorStopNoMatchDynamicResponse;
        JSONHoldingGenerator<DynamicResponseJSON::Generator, RCHandle<DynamicResponseJSON>, DynamicResponseJSON *, bool > fieldGeneratorStopPartialMatchDynamicResponse;
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
            if (!(strcmp(getTimerCommandJSONKey().c_str(), "TimerStopCommand") == 0))
                throw("The key field has a value other than `TimerStopCommand'.");
            TimerStopCommandJSON *result = new TimerStopCommandJSON();
            assert(result != NULL);
            RCHandle<TimerStopCommandJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraTimerStopCommandAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void handle_result(TimerCommandJSON *new_result)
          {
            handle_result((TimerStopCommandJSON *)new_result);
          }
        void finish(TimerStopCommandJSON *result)
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
            if (fieldGeneratorStopAllDynamicResponse.have_value)
              {
                result->setStopAllDynamicResponse(fieldGeneratorStopAllDynamicResponse.value.referenced());
                fieldGeneratorStopAllDynamicResponse.have_value = false;
              }
            if (fieldGeneratorStopSingleDynamicResponse.have_value)
              {
                result->setStopSingleDynamicResponse(fieldGeneratorStopSingleDynamicResponse.value.referenced());
                fieldGeneratorStopSingleDynamicResponse.have_value = false;
              }
            if (fieldGeneratorStopMultiDynamicResponse.have_value)
              {
                result->setStopMultiDynamicResponse(fieldGeneratorStopMultiDynamicResponse.value.referenced());
                fieldGeneratorStopMultiDynamicResponse.have_value = false;
              }
            if (fieldGeneratorStopNoMatchDynamicResponse.have_value)
              {
                result->setStopNoMatchDynamicResponse(fieldGeneratorStopNoMatchDynamicResponse.value.referenced());
                fieldGeneratorStopNoMatchDynamicResponse.have_value = false;
              }
            if (fieldGeneratorStopPartialMatchDynamicResponse.have_value)
              {
                result->setStopPartialMatchDynamicResponse(fieldGeneratorStopPartialMatchDynamicResponse.value.referenced());
                fieldGeneratorStopPartialMatchDynamicResponse.have_value = false;
              }
            if (fieldGeneratorFutureSupportDynamicResponse.have_value)
              {
                result->setFutureSupportDynamicResponse(fieldGeneratorFutureSupportDynamicResponse.value.referenced());
                fieldGeneratorFutureSupportDynamicResponse.have_value = false;
              }
            TimerCommandJSON::Generator::finish(result);
          }
        virtual void handle_result(TimerStopCommandJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'F':
                    if (strcmp(&(field_name[1]), "utureSupportDynamicResponse") == 0)
                        return &fieldGeneratorFutureSupportDynamicResponse;
                    break;
                case 'N':
                    if (strcmp(&(field_name[1]), "ativeData") == 0)
                        return &fieldGeneratorNativeData;
                    break;
                case 'S':
                    if (strncmp(&(field_name[1]), "top", 3) == 0)
                      {
                        switch ((unsigned char)(field_name[4]))
                          {
                            case 'A':
                                if (strcmp(&(field_name[5]), "llDynamicResponse") == 0)
                                    return &fieldGeneratorStopAllDynamicResponse;
                                break;
                            case 'M':
                                if (strcmp(&(field_name[5]), "ultiDynamicResponse") == 0)
                                    return &fieldGeneratorStopMultiDynamicResponse;
                                break;
                            case 'N':
                                if (strcmp(&(field_name[5]), "oMatchDynamicResponse") == 0)
                                    return &fieldGeneratorStopNoMatchDynamicResponse;
                                break;
                            case 'P':
                                if (strcmp(&(field_name[5]), "artialMatchDynamicResponse") == 0)
                                    return &fieldGeneratorStopPartialMatchDynamicResponse;
                                break;
                            case 'S':
                                if (strcmp(&(field_name[5]), "ingleDynamicResponse") == 0)
                                    return &fieldGeneratorStopSingleDynamicResponse;
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                default:
                    break;
              }
            return TimerCommandJSON::Generator::start_known_field(field_name);
          }

      public:
        Generator(bool ignore_extras = false) : TimerCommandJSON::Generator(ignore_extras), fieldGeneratorNativeData("field \"NativeData\" of the TimerStopCommand class", ignore_extras), fieldGeneratorStopAllDynamicResponse("field \"StopAllDynamicResponse\" of the TimerStopCommand class", ignore_extras), fieldGeneratorStopSingleDynamicResponse("field \"StopSingleDynamicResponse\" of the TimerStopCommand class", ignore_extras), fieldGeneratorStopMultiDynamicResponse("field \"StopMultiDynamicResponse\" of the TimerStopCommand class", ignore_extras), fieldGeneratorStopNoMatchDynamicResponse("field \"StopNoMatchDynamicResponse\" of the TimerStopCommand class", ignore_extras), fieldGeneratorStopPartialMatchDynamicResponse("field \"StopPartialMatchDynamicResponse\" of the TimerStopCommand class", ignore_extras), fieldGeneratorFutureSupportDynamicResponse("field \"FutureSupportDynamicResponse\" of the TimerStopCommand class", ignore_extras), unknownFieldGenerator(ignore_extras)
          {
            set_what("the TimerStopCommand class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorNativeData.reset();
            fieldGeneratorStopAllDynamicResponse.reset();
            fieldGeneratorStopSingleDynamicResponse.reset();
            fieldGeneratorStopMultiDynamicResponse.reset();
            fieldGeneratorStopNoMatchDynamicResponse.reset();
            fieldGeneratorStopPartialMatchDynamicResponse.reset();
            fieldGeneratorFutureSupportDynamicResponse.reset();
            TimerCommandJSON::Generator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* TIMERSTOPCOMMANDJSON_H */
