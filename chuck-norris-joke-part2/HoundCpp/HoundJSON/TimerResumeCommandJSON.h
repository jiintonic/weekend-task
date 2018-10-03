/* file "TimerResumeCommandJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef TIMERRESUMECOMMANDJSON_H
#define TIMERRESUMECOMMANDJSON_H

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


class TimerResumeCommandJSON : public TimerCommandJSON
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
    bool flagHasResumeAllDynamicResponse;
    DynamicResponseJSON * storeResumeAllDynamicResponse;
    bool flagHasResumeSingleDynamicResponse;
    DynamicResponseJSON * storeResumeSingleDynamicResponse;
    bool flagHasResumeMultiDynamicResponse;
    DynamicResponseJSON * storeResumeMultiDynamicResponse;
    bool flagHasResumeNoMatchDynamicResponse;
    DynamicResponseJSON * storeResumeNoMatchDynamicResponse;
    bool flagHasResumePartialMatchDynamicResponse;
    DynamicResponseJSON * storeResumePartialMatchDynamicResponse;
    bool flagHasFutureSupportDynamicResponse;
    DynamicResponseJSON * storeFutureSupportDynamicResponse;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    TimerResumeCommandJSON(const TimerResumeCommandJSON &);
    TimerResumeCommandJSON & operator=(const TimerResumeCommandJSON &other);

    JSONValue * extraNativeDataToJSON(void) const;
    JSONValue * extraResumeAllDynamicResponseToJSON(void) const;
    JSONValue * extraResumeSingleDynamicResponseToJSON(void) const;
    JSONValue * extraResumeMultiDynamicResponseToJSON(void) const;
    JSONValue * extraResumeNoMatchDynamicResponseToJSON(void) const;
    JSONValue * extraResumePartialMatchDynamicResponseToJSON(void) const;
    JSONValue * extraFutureSupportDynamicResponseToJSON(void) const;

    void  fromJSONNativeData(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONResumeAllDynamicResponse(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONResumeSingleDynamicResponse(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONResumeMultiDynamicResponse(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONResumeNoMatchDynamicResponse(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONResumePartialMatchDynamicResponse(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONFutureSupportDynamicResponse(JSONValue *json_value, bool ignore_extras = false);


  public:
    TimerResumeCommandJSON(void);
    virtual ~TimerResumeCommandJSON(void);
    const char * getTimerCommandKind(void) const;
    bool  hasNativeData(void) const;
    TypeNativeDataJSON *  getNativeData(void);
    const TypeNativeDataJSON *  getNativeData(void) const;
    bool  hasResumeAllDynamicResponse(void) const;
    DynamicResponseJSON *  getResumeAllDynamicResponse(void);
    const DynamicResponseJSON *  getResumeAllDynamicResponse(void) const;
    bool  hasResumeSingleDynamicResponse(void) const;
    DynamicResponseJSON *  getResumeSingleDynamicResponse(void);
    const DynamicResponseJSON *  getResumeSingleDynamicResponse(void) const;
    bool  hasResumeMultiDynamicResponse(void) const;
    DynamicResponseJSON *  getResumeMultiDynamicResponse(void);
    const DynamicResponseJSON *  getResumeMultiDynamicResponse(void) const;
    bool  hasResumeNoMatchDynamicResponse(void) const;
    DynamicResponseJSON *  getResumeNoMatchDynamicResponse(void);
    const DynamicResponseJSON *  getResumeNoMatchDynamicResponse(void) const;
    bool  hasResumePartialMatchDynamicResponse(void) const;
    DynamicResponseJSON *  getResumePartialMatchDynamicResponse(void);
    const DynamicResponseJSON *  getResumePartialMatchDynamicResponse(void) const;
    bool  hasFutureSupportDynamicResponse(void) const;
    DynamicResponseJSON *  getFutureSupportDynamicResponse(void);
    const DynamicResponseJSON *  getFutureSupportDynamicResponse(void) const;

    virtual size_t extraTimerResumeCommandComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraTimerResumeCommandComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraTimerResumeCommandComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraTimerResumeCommandComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraTimerResumeCommandLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraTimerResumeCommandLookup(const char *field_name) const
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
        if (flagHasResumeAllDynamicResponse)
            ++result;
        if (flagHasResumeSingleDynamicResponse)
            ++result;
        if (flagHasResumeMultiDynamicResponse)
            ++result;
        if (flagHasResumeNoMatchDynamicResponse)
            ++result;
        if (flagHasResumePartialMatchDynamicResponse)
            ++result;
        if (flagHasFutureSupportDynamicResponse)
            ++result;
        result += extraTimerResumeCommandComponentCount();
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
        if (flagHasResumeAllDynamicResponse)
          {
            if (remainder == 0)
                return "ResumeAllDynamicResponse";
            --remainder;
          }
        if (flagHasResumeSingleDynamicResponse)
          {
            if (remainder == 0)
                return "ResumeSingleDynamicResponse";
            --remainder;
          }
        if (flagHasResumeMultiDynamicResponse)
          {
            if (remainder == 0)
                return "ResumeMultiDynamicResponse";
            --remainder;
          }
        if (flagHasResumeNoMatchDynamicResponse)
          {
            if (remainder == 0)
                return "ResumeNoMatchDynamicResponse";
            --remainder;
          }
        if (flagHasResumePartialMatchDynamicResponse)
          {
            if (remainder == 0)
                return "ResumePartialMatchDynamicResponse";
            --remainder;
          }
        if (flagHasFutureSupportDynamicResponse)
          {
            if (remainder == 0)
                return "FutureSupportDynamicResponse";
            --remainder;
          }
        return extraTimerResumeCommandComponentKey(remainder);
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
        if (flagHasResumeAllDynamicResponse)
          {
            if (remainder == 0)
                return extraResumeAllDynamicResponseToJSON();
            --remainder;
          }
        if (flagHasResumeSingleDynamicResponse)
          {
            if (remainder == 0)
                return extraResumeSingleDynamicResponseToJSON();
            --remainder;
          }
        if (flagHasResumeMultiDynamicResponse)
          {
            if (remainder == 0)
                return extraResumeMultiDynamicResponseToJSON();
            --remainder;
          }
        if (flagHasResumeNoMatchDynamicResponse)
          {
            if (remainder == 0)
                return extraResumeNoMatchDynamicResponseToJSON();
            --remainder;
          }
        if (flagHasResumePartialMatchDynamicResponse)
          {
            if (remainder == 0)
                return extraResumePartialMatchDynamicResponseToJSON();
            --remainder;
          }
        if (flagHasFutureSupportDynamicResponse)
          {
            if (remainder == 0)
                return extraFutureSupportDynamicResponseToJSON();
            --remainder;
          }
        return extraTimerResumeCommandComponentValue(remainder);
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
        if (flagHasResumeAllDynamicResponse)
          {
            if (remainder == 0)
                return extraResumeAllDynamicResponseToJSON();
            --remainder;
          }
        if (flagHasResumeSingleDynamicResponse)
          {
            if (remainder == 0)
                return extraResumeSingleDynamicResponseToJSON();
            --remainder;
          }
        if (flagHasResumeMultiDynamicResponse)
          {
            if (remainder == 0)
                return extraResumeMultiDynamicResponseToJSON();
            --remainder;
          }
        if (flagHasResumeNoMatchDynamicResponse)
          {
            if (remainder == 0)
                return extraResumeNoMatchDynamicResponseToJSON();
            --remainder;
          }
        if (flagHasResumePartialMatchDynamicResponse)
          {
            if (remainder == 0)
                return extraResumePartialMatchDynamicResponseToJSON();
            --remainder;
          }
        if (flagHasFutureSupportDynamicResponse)
          {
            if (remainder == 0)
                return extraFutureSupportDynamicResponseToJSON();
            --remainder;
          }
        return extraTimerResumeCommandComponentValue(remainder);
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
            case 'R':
                if (strncmp(&(field_name[1]), "esume", 5) == 0)
                  {
                    switch ((unsigned char)(field_name[6]))
                      {
                        case 'A':
                            if (strcmp(&(field_name[7]), "llDynamicResponse") == 0)
                                return (flagHasResumeAllDynamicResponse ? extraResumeAllDynamicResponseToJSON() : NULL);
                            break;
                        case 'M':
                            if (strcmp(&(field_name[7]), "ultiDynamicResponse") == 0)
                                return (flagHasResumeMultiDynamicResponse ? extraResumeMultiDynamicResponseToJSON() : NULL);
                            break;
                        case 'N':
                            if (strcmp(&(field_name[7]), "oMatchDynamicResponse") == 0)
                                return (flagHasResumeNoMatchDynamicResponse ? extraResumeNoMatchDynamicResponseToJSON() : NULL);
                            break;
                        case 'P':
                            if (strcmp(&(field_name[7]), "artialMatchDynamicResponse") == 0)
                                return (flagHasResumePartialMatchDynamicResponse ? extraResumePartialMatchDynamicResponseToJSON() : NULL);
                            break;
                        case 'S':
                            if (strcmp(&(field_name[7]), "ingleDynamicResponse") == 0)
                                return (flagHasResumeSingleDynamicResponse ? extraResumeSingleDynamicResponseToJSON() : NULL);
                            break;
                        default:
                            break;
                      }
                  }
                break;
            default:
                break;
          }
        return extraTimerResumeCommandLookup(field_name);
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
            case 'R':
                if (strncmp(&(field_name[1]), "esume", 5) == 0)
                  {
                    switch ((unsigned char)(field_name[6]))
                      {
                        case 'A':
                            if (strcmp(&(field_name[7]), "llDynamicResponse") == 0)
                                return (flagHasResumeAllDynamicResponse ? extraResumeAllDynamicResponseToJSON() : NULL);
                            break;
                        case 'M':
                            if (strcmp(&(field_name[7]), "ultiDynamicResponse") == 0)
                                return (flagHasResumeMultiDynamicResponse ? extraResumeMultiDynamicResponseToJSON() : NULL);
                            break;
                        case 'N':
                            if (strcmp(&(field_name[7]), "oMatchDynamicResponse") == 0)
                                return (flagHasResumeNoMatchDynamicResponse ? extraResumeNoMatchDynamicResponseToJSON() : NULL);
                            break;
                        case 'P':
                            if (strcmp(&(field_name[7]), "artialMatchDynamicResponse") == 0)
                                return (flagHasResumePartialMatchDynamicResponse ? extraResumePartialMatchDynamicResponseToJSON() : NULL);
                            break;
                        case 'S':
                            if (strcmp(&(field_name[7]), "ingleDynamicResponse") == 0)
                                return (flagHasResumeSingleDynamicResponse ? extraResumeSingleDynamicResponseToJSON() : NULL);
                            break;
                        default:
                            break;
                      }
                  }
                break;
            default:
                break;
          }
        return extraTimerResumeCommandLookup(field_name);
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
    void setResumeAllDynamicResponse(DynamicResponseJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasResumeAllDynamicResponse)
          {
            storeResumeAllDynamicResponse->remove_reference();
          }
        flagHasResumeAllDynamicResponse = true;
        storeResumeAllDynamicResponse = new_value;
      }
    void unsetResumeAllDynamicResponse(void)
      {
        if (flagHasResumeAllDynamicResponse)
          {
            storeResumeAllDynamicResponse->remove_reference();
          }
        flagHasResumeAllDynamicResponse = false;
      }
    void setResumeSingleDynamicResponse(DynamicResponseJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasResumeSingleDynamicResponse)
          {
            storeResumeSingleDynamicResponse->remove_reference();
          }
        flagHasResumeSingleDynamicResponse = true;
        storeResumeSingleDynamicResponse = new_value;
      }
    void unsetResumeSingleDynamicResponse(void)
      {
        if (flagHasResumeSingleDynamicResponse)
          {
            storeResumeSingleDynamicResponse->remove_reference();
          }
        flagHasResumeSingleDynamicResponse = false;
      }
    void setResumeMultiDynamicResponse(DynamicResponseJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasResumeMultiDynamicResponse)
          {
            storeResumeMultiDynamicResponse->remove_reference();
          }
        flagHasResumeMultiDynamicResponse = true;
        storeResumeMultiDynamicResponse = new_value;
      }
    void unsetResumeMultiDynamicResponse(void)
      {
        if (flagHasResumeMultiDynamicResponse)
          {
            storeResumeMultiDynamicResponse->remove_reference();
          }
        flagHasResumeMultiDynamicResponse = false;
      }
    void setResumeNoMatchDynamicResponse(DynamicResponseJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasResumeNoMatchDynamicResponse)
          {
            storeResumeNoMatchDynamicResponse->remove_reference();
          }
        flagHasResumeNoMatchDynamicResponse = true;
        storeResumeNoMatchDynamicResponse = new_value;
      }
    void unsetResumeNoMatchDynamicResponse(void)
      {
        if (flagHasResumeNoMatchDynamicResponse)
          {
            storeResumeNoMatchDynamicResponse->remove_reference();
          }
        flagHasResumeNoMatchDynamicResponse = false;
      }
    void setResumePartialMatchDynamicResponse(DynamicResponseJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasResumePartialMatchDynamicResponse)
          {
            storeResumePartialMatchDynamicResponse->remove_reference();
          }
        flagHasResumePartialMatchDynamicResponse = true;
        storeResumePartialMatchDynamicResponse = new_value;
      }
    void unsetResumePartialMatchDynamicResponse(void)
      {
        if (flagHasResumePartialMatchDynamicResponse)
          {
            storeResumePartialMatchDynamicResponse->remove_reference();
          }
        flagHasResumePartialMatchDynamicResponse = false;
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

    virtual void extraTimerResumeCommandAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraTimerResumeCommandSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraTimerResumeCommandLookup(key);
        if (old_field == NULL)
          {
            extraTimerResumeCommandAppendPair(key, new_component);
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
            case 'R':
                if (strncmp(&(key[1]), "esume", 5) == 0)
                  {
                    switch ((unsigned char)(key[6]))
                      {
                        case 'A':
                            if (strcmp(&(key[7]), "llDynamicResponse") == 0)
                                {
                                fromJSONResumeAllDynamicResponse(new_component, false);
                                return;
                                }
                            break;
                        case 'M':
                            if (strcmp(&(key[7]), "ultiDynamicResponse") == 0)
                                {
                                fromJSONResumeMultiDynamicResponse(new_component, false);
                                return;
                                }
                            break;
                        case 'N':
                            if (strcmp(&(key[7]), "oMatchDynamicResponse") == 0)
                                {
                                fromJSONResumeNoMatchDynamicResponse(new_component, false);
                                return;
                                }
                            break;
                        case 'P':
                            if (strcmp(&(key[7]), "artialMatchDynamicResponse") == 0)
                                {
                                fromJSONResumePartialMatchDynamicResponse(new_component, false);
                                return;
                                }
                            break;
                        case 'S':
                            if (strcmp(&(key[7]), "ingleDynamicResponse") == 0)
                                {
                                fromJSONResumeSingleDynamicResponse(new_component, false);
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
        extraTimerResumeCommandAppendPair(key, new_component);
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
            case 'R':
                if (strncmp(&(key[1]), "esume", 5) == 0)
                  {
                    switch ((unsigned char)(key[6]))
                      {
                        case 'A':
                            if (strcmp(&(key[7]), "llDynamicResponse") == 0)
                                {
                                fromJSONResumeAllDynamicResponse(new_component, false);
                                return;
                                }
                            break;
                        case 'M':
                            if (strcmp(&(key[7]), "ultiDynamicResponse") == 0)
                                {
                                fromJSONResumeMultiDynamicResponse(new_component, false);
                                return;
                                }
                            break;
                        case 'N':
                            if (strcmp(&(key[7]), "oMatchDynamicResponse") == 0)
                                {
                                fromJSONResumeNoMatchDynamicResponse(new_component, false);
                                return;
                                }
                            break;
                        case 'P':
                            if (strcmp(&(key[7]), "artialMatchDynamicResponse") == 0)
                                {
                                fromJSONResumePartialMatchDynamicResponse(new_component, false);
                                return;
                                }
                            break;
                        case 'S':
                            if (strcmp(&(key[7]), "ingleDynamicResponse") == 0)
                                {
                                fromJSONResumeSingleDynamicResponse(new_component, false);
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
        extraTimerResumeCommandSetField(key, new_component);
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
        if (flagHasResumeAllDynamicResponse)
          {
            handler->start_pair("ResumeAllDynamicResponse");
            storeResumeAllDynamicResponse->write_as_json(handler);
          }
        if (flagHasResumeSingleDynamicResponse)
          {
            handler->start_pair("ResumeSingleDynamicResponse");
            storeResumeSingleDynamicResponse->write_as_json(handler);
          }
        if (flagHasResumeMultiDynamicResponse)
          {
            handler->start_pair("ResumeMultiDynamicResponse");
            storeResumeMultiDynamicResponse->write_as_json(handler);
          }
        if (flagHasResumeNoMatchDynamicResponse)
          {
            handler->start_pair("ResumeNoMatchDynamicResponse");
            storeResumeNoMatchDynamicResponse->write_as_json(handler);
          }
        if (flagHasResumePartialMatchDynamicResponse)
          {
            handler->start_pair("ResumePartialMatchDynamicResponse");
            storeResumePartialMatchDynamicResponse->write_as_json(handler);
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

    static TimerResumeCommandJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static TimerResumeCommandJSON *from_text(const char *text, bool ignore_extras = false)
      {
        TimerResumeCommandJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<TimerResumeCommandJSON>, TimerResumeCommandJSON *, bool> generator("Type TimerResumeCommand", ignore_extras);
            parse_json_value(text, "Text for TimerResumeCommandJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static TimerResumeCommandJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        TimerResumeCommandJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<TimerResumeCommandJSON>, TimerResumeCommandJSON *, bool> generator("Type TimerResumeCommand", ignore_extras);
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
        JSONHoldingGenerator<DynamicResponseJSON::Generator, RCHandle<DynamicResponseJSON>, DynamicResponseJSON *, bool > fieldGeneratorResumeAllDynamicResponse;
        JSONHoldingGenerator<DynamicResponseJSON::Generator, RCHandle<DynamicResponseJSON>, DynamicResponseJSON *, bool > fieldGeneratorResumeSingleDynamicResponse;
        JSONHoldingGenerator<DynamicResponseJSON::Generator, RCHandle<DynamicResponseJSON>, DynamicResponseJSON *, bool > fieldGeneratorResumeMultiDynamicResponse;
        JSONHoldingGenerator<DynamicResponseJSON::Generator, RCHandle<DynamicResponseJSON>, DynamicResponseJSON *, bool > fieldGeneratorResumeNoMatchDynamicResponse;
        JSONHoldingGenerator<DynamicResponseJSON::Generator, RCHandle<DynamicResponseJSON>, DynamicResponseJSON *, bool > fieldGeneratorResumePartialMatchDynamicResponse;
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
            if (!(strcmp(getTimerCommandJSONKey().c_str(), "TimerResumeCommand") == 0))
                throw("The key field has a value other than `TimerResumeCommand'.");
            TimerResumeCommandJSON *result = new TimerResumeCommandJSON();
            assert(result != NULL);
            RCHandle<TimerResumeCommandJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraTimerResumeCommandAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void handle_result(TimerCommandJSON *new_result)
          {
            handle_result((TimerResumeCommandJSON *)new_result);
          }
        void finish(TimerResumeCommandJSON *result)
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
            if (fieldGeneratorResumeAllDynamicResponse.have_value)
              {
                result->setResumeAllDynamicResponse(fieldGeneratorResumeAllDynamicResponse.value.referenced());
                fieldGeneratorResumeAllDynamicResponse.have_value = false;
              }
            if (fieldGeneratorResumeSingleDynamicResponse.have_value)
              {
                result->setResumeSingleDynamicResponse(fieldGeneratorResumeSingleDynamicResponse.value.referenced());
                fieldGeneratorResumeSingleDynamicResponse.have_value = false;
              }
            if (fieldGeneratorResumeMultiDynamicResponse.have_value)
              {
                result->setResumeMultiDynamicResponse(fieldGeneratorResumeMultiDynamicResponse.value.referenced());
                fieldGeneratorResumeMultiDynamicResponse.have_value = false;
              }
            if (fieldGeneratorResumeNoMatchDynamicResponse.have_value)
              {
                result->setResumeNoMatchDynamicResponse(fieldGeneratorResumeNoMatchDynamicResponse.value.referenced());
                fieldGeneratorResumeNoMatchDynamicResponse.have_value = false;
              }
            if (fieldGeneratorResumePartialMatchDynamicResponse.have_value)
              {
                result->setResumePartialMatchDynamicResponse(fieldGeneratorResumePartialMatchDynamicResponse.value.referenced());
                fieldGeneratorResumePartialMatchDynamicResponse.have_value = false;
              }
            if (fieldGeneratorFutureSupportDynamicResponse.have_value)
              {
                result->setFutureSupportDynamicResponse(fieldGeneratorFutureSupportDynamicResponse.value.referenced());
                fieldGeneratorFutureSupportDynamicResponse.have_value = false;
              }
            TimerCommandJSON::Generator::finish(result);
          }
        virtual void handle_result(TimerResumeCommandJSON *new_result) = 0;
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
                case 'R':
                    if (strncmp(&(field_name[1]), "esume", 5) == 0)
                      {
                        switch ((unsigned char)(field_name[6]))
                          {
                            case 'A':
                                if (strcmp(&(field_name[7]), "llDynamicResponse") == 0)
                                    return &fieldGeneratorResumeAllDynamicResponse;
                                break;
                            case 'M':
                                if (strcmp(&(field_name[7]), "ultiDynamicResponse") == 0)
                                    return &fieldGeneratorResumeMultiDynamicResponse;
                                break;
                            case 'N':
                                if (strcmp(&(field_name[7]), "oMatchDynamicResponse") == 0)
                                    return &fieldGeneratorResumeNoMatchDynamicResponse;
                                break;
                            case 'P':
                                if (strcmp(&(field_name[7]), "artialMatchDynamicResponse") == 0)
                                    return &fieldGeneratorResumePartialMatchDynamicResponse;
                                break;
                            case 'S':
                                if (strcmp(&(field_name[7]), "ingleDynamicResponse") == 0)
                                    return &fieldGeneratorResumeSingleDynamicResponse;
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
        Generator(bool ignore_extras = false) : TimerCommandJSON::Generator(ignore_extras), fieldGeneratorNativeData("field \"NativeData\" of the TimerResumeCommand class", ignore_extras), fieldGeneratorResumeAllDynamicResponse("field \"ResumeAllDynamicResponse\" of the TimerResumeCommand class", ignore_extras), fieldGeneratorResumeSingleDynamicResponse("field \"ResumeSingleDynamicResponse\" of the TimerResumeCommand class", ignore_extras), fieldGeneratorResumeMultiDynamicResponse("field \"ResumeMultiDynamicResponse\" of the TimerResumeCommand class", ignore_extras), fieldGeneratorResumeNoMatchDynamicResponse("field \"ResumeNoMatchDynamicResponse\" of the TimerResumeCommand class", ignore_extras), fieldGeneratorResumePartialMatchDynamicResponse("field \"ResumePartialMatchDynamicResponse\" of the TimerResumeCommand class", ignore_extras), fieldGeneratorFutureSupportDynamicResponse("field \"FutureSupportDynamicResponse\" of the TimerResumeCommand class", ignore_extras), unknownFieldGenerator(ignore_extras)
          {
            set_what("the TimerResumeCommand class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorNativeData.reset();
            fieldGeneratorResumeAllDynamicResponse.reset();
            fieldGeneratorResumeSingleDynamicResponse.reset();
            fieldGeneratorResumeMultiDynamicResponse.reset();
            fieldGeneratorResumeNoMatchDynamicResponse.reset();
            fieldGeneratorResumePartialMatchDynamicResponse.reset();
            fieldGeneratorFutureSupportDynamicResponse.reset();
            TimerCommandJSON::Generator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* TIMERRESUMECOMMANDJSON_H */
