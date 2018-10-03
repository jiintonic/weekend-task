/* file "TimerResetCommandJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef TIMERRESETCOMMANDJSON_H
#define TIMERRESETCOMMANDJSON_H

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


class TimerResetCommandJSON : public TimerCommandJSON
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
    bool flagHasResetAllDynamicResponse;
    DynamicResponseJSON * storeResetAllDynamicResponse;
    bool flagHasResetSingleDynamicResponse;
    DynamicResponseJSON * storeResetSingleDynamicResponse;
    bool flagHasResetMultiDynamicResponse;
    DynamicResponseJSON * storeResetMultiDynamicResponse;
    bool flagHasResetNoMatchDynamicResponse;
    DynamicResponseJSON * storeResetNoMatchDynamicResponse;
    bool flagHasResetPartialMatchDynamicResponse;
    DynamicResponseJSON * storeResetPartialMatchDynamicResponse;
    bool flagHasFutureSupportDynamicResponse;
    DynamicResponseJSON * storeFutureSupportDynamicResponse;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    TimerResetCommandJSON(const TimerResetCommandJSON &);
    TimerResetCommandJSON & operator=(const TimerResetCommandJSON &other);

    JSONValue * extraNativeDataToJSON(void) const;
    JSONValue * extraResetAllDynamicResponseToJSON(void) const;
    JSONValue * extraResetSingleDynamicResponseToJSON(void) const;
    JSONValue * extraResetMultiDynamicResponseToJSON(void) const;
    JSONValue * extraResetNoMatchDynamicResponseToJSON(void) const;
    JSONValue * extraResetPartialMatchDynamicResponseToJSON(void) const;
    JSONValue * extraFutureSupportDynamicResponseToJSON(void) const;

    void  fromJSONNativeData(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONResetAllDynamicResponse(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONResetSingleDynamicResponse(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONResetMultiDynamicResponse(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONResetNoMatchDynamicResponse(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONResetPartialMatchDynamicResponse(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONFutureSupportDynamicResponse(JSONValue *json_value, bool ignore_extras = false);


  public:
    TimerResetCommandJSON(void);
    virtual ~TimerResetCommandJSON(void);
    const char * getTimerCommandKind(void) const;
    bool  hasNativeData(void) const;
    TypeNativeDataJSON *  getNativeData(void);
    const TypeNativeDataJSON *  getNativeData(void) const;
    bool  hasResetAllDynamicResponse(void) const;
    DynamicResponseJSON *  getResetAllDynamicResponse(void);
    const DynamicResponseJSON *  getResetAllDynamicResponse(void) const;
    bool  hasResetSingleDynamicResponse(void) const;
    DynamicResponseJSON *  getResetSingleDynamicResponse(void);
    const DynamicResponseJSON *  getResetSingleDynamicResponse(void) const;
    bool  hasResetMultiDynamicResponse(void) const;
    DynamicResponseJSON *  getResetMultiDynamicResponse(void);
    const DynamicResponseJSON *  getResetMultiDynamicResponse(void) const;
    bool  hasResetNoMatchDynamicResponse(void) const;
    DynamicResponseJSON *  getResetNoMatchDynamicResponse(void);
    const DynamicResponseJSON *  getResetNoMatchDynamicResponse(void) const;
    bool  hasResetPartialMatchDynamicResponse(void) const;
    DynamicResponseJSON *  getResetPartialMatchDynamicResponse(void);
    const DynamicResponseJSON *  getResetPartialMatchDynamicResponse(void) const;
    bool  hasFutureSupportDynamicResponse(void) const;
    DynamicResponseJSON *  getFutureSupportDynamicResponse(void);
    const DynamicResponseJSON *  getFutureSupportDynamicResponse(void) const;

    virtual size_t extraTimerResetCommandComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraTimerResetCommandComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraTimerResetCommandComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraTimerResetCommandComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraTimerResetCommandLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraTimerResetCommandLookup(const char *field_name) const
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
        if (flagHasResetAllDynamicResponse)
            ++result;
        if (flagHasResetSingleDynamicResponse)
            ++result;
        if (flagHasResetMultiDynamicResponse)
            ++result;
        if (flagHasResetNoMatchDynamicResponse)
            ++result;
        if (flagHasResetPartialMatchDynamicResponse)
            ++result;
        if (flagHasFutureSupportDynamicResponse)
            ++result;
        result += extraTimerResetCommandComponentCount();
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
        if (flagHasResetAllDynamicResponse)
          {
            if (remainder == 0)
                return "ResetAllDynamicResponse";
            --remainder;
          }
        if (flagHasResetSingleDynamicResponse)
          {
            if (remainder == 0)
                return "ResetSingleDynamicResponse";
            --remainder;
          }
        if (flagHasResetMultiDynamicResponse)
          {
            if (remainder == 0)
                return "ResetMultiDynamicResponse";
            --remainder;
          }
        if (flagHasResetNoMatchDynamicResponse)
          {
            if (remainder == 0)
                return "ResetNoMatchDynamicResponse";
            --remainder;
          }
        if (flagHasResetPartialMatchDynamicResponse)
          {
            if (remainder == 0)
                return "ResetPartialMatchDynamicResponse";
            --remainder;
          }
        if (flagHasFutureSupportDynamicResponse)
          {
            if (remainder == 0)
                return "FutureSupportDynamicResponse";
            --remainder;
          }
        return extraTimerResetCommandComponentKey(remainder);
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
        if (flagHasResetAllDynamicResponse)
          {
            if (remainder == 0)
                return extraResetAllDynamicResponseToJSON();
            --remainder;
          }
        if (flagHasResetSingleDynamicResponse)
          {
            if (remainder == 0)
                return extraResetSingleDynamicResponseToJSON();
            --remainder;
          }
        if (flagHasResetMultiDynamicResponse)
          {
            if (remainder == 0)
                return extraResetMultiDynamicResponseToJSON();
            --remainder;
          }
        if (flagHasResetNoMatchDynamicResponse)
          {
            if (remainder == 0)
                return extraResetNoMatchDynamicResponseToJSON();
            --remainder;
          }
        if (flagHasResetPartialMatchDynamicResponse)
          {
            if (remainder == 0)
                return extraResetPartialMatchDynamicResponseToJSON();
            --remainder;
          }
        if (flagHasFutureSupportDynamicResponse)
          {
            if (remainder == 0)
                return extraFutureSupportDynamicResponseToJSON();
            --remainder;
          }
        return extraTimerResetCommandComponentValue(remainder);
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
        if (flagHasResetAllDynamicResponse)
          {
            if (remainder == 0)
                return extraResetAllDynamicResponseToJSON();
            --remainder;
          }
        if (flagHasResetSingleDynamicResponse)
          {
            if (remainder == 0)
                return extraResetSingleDynamicResponseToJSON();
            --remainder;
          }
        if (flagHasResetMultiDynamicResponse)
          {
            if (remainder == 0)
                return extraResetMultiDynamicResponseToJSON();
            --remainder;
          }
        if (flagHasResetNoMatchDynamicResponse)
          {
            if (remainder == 0)
                return extraResetNoMatchDynamicResponseToJSON();
            --remainder;
          }
        if (flagHasResetPartialMatchDynamicResponse)
          {
            if (remainder == 0)
                return extraResetPartialMatchDynamicResponseToJSON();
            --remainder;
          }
        if (flagHasFutureSupportDynamicResponse)
          {
            if (remainder == 0)
                return extraFutureSupportDynamicResponseToJSON();
            --remainder;
          }
        return extraTimerResetCommandComponentValue(remainder);
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
                if (strncmp(&(field_name[1]), "eset", 4) == 0)
                  {
                    switch ((unsigned char)(field_name[5]))
                      {
                        case 'A':
                            if (strcmp(&(field_name[6]), "llDynamicResponse") == 0)
                                return (flagHasResetAllDynamicResponse ? extraResetAllDynamicResponseToJSON() : NULL);
                            break;
                        case 'M':
                            if (strcmp(&(field_name[6]), "ultiDynamicResponse") == 0)
                                return (flagHasResetMultiDynamicResponse ? extraResetMultiDynamicResponseToJSON() : NULL);
                            break;
                        case 'N':
                            if (strcmp(&(field_name[6]), "oMatchDynamicResponse") == 0)
                                return (flagHasResetNoMatchDynamicResponse ? extraResetNoMatchDynamicResponseToJSON() : NULL);
                            break;
                        case 'P':
                            if (strcmp(&(field_name[6]), "artialMatchDynamicResponse") == 0)
                                return (flagHasResetPartialMatchDynamicResponse ? extraResetPartialMatchDynamicResponseToJSON() : NULL);
                            break;
                        case 'S':
                            if (strcmp(&(field_name[6]), "ingleDynamicResponse") == 0)
                                return (flagHasResetSingleDynamicResponse ? extraResetSingleDynamicResponseToJSON() : NULL);
                            break;
                        default:
                            break;
                      }
                  }
                break;
            default:
                break;
          }
        return extraTimerResetCommandLookup(field_name);
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
                if (strncmp(&(field_name[1]), "eset", 4) == 0)
                  {
                    switch ((unsigned char)(field_name[5]))
                      {
                        case 'A':
                            if (strcmp(&(field_name[6]), "llDynamicResponse") == 0)
                                return (flagHasResetAllDynamicResponse ? extraResetAllDynamicResponseToJSON() : NULL);
                            break;
                        case 'M':
                            if (strcmp(&(field_name[6]), "ultiDynamicResponse") == 0)
                                return (flagHasResetMultiDynamicResponse ? extraResetMultiDynamicResponseToJSON() : NULL);
                            break;
                        case 'N':
                            if (strcmp(&(field_name[6]), "oMatchDynamicResponse") == 0)
                                return (flagHasResetNoMatchDynamicResponse ? extraResetNoMatchDynamicResponseToJSON() : NULL);
                            break;
                        case 'P':
                            if (strcmp(&(field_name[6]), "artialMatchDynamicResponse") == 0)
                                return (flagHasResetPartialMatchDynamicResponse ? extraResetPartialMatchDynamicResponseToJSON() : NULL);
                            break;
                        case 'S':
                            if (strcmp(&(field_name[6]), "ingleDynamicResponse") == 0)
                                return (flagHasResetSingleDynamicResponse ? extraResetSingleDynamicResponseToJSON() : NULL);
                            break;
                        default:
                            break;
                      }
                  }
                break;
            default:
                break;
          }
        return extraTimerResetCommandLookup(field_name);
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
    void setResetAllDynamicResponse(DynamicResponseJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasResetAllDynamicResponse)
          {
            storeResetAllDynamicResponse->remove_reference();
          }
        flagHasResetAllDynamicResponse = true;
        storeResetAllDynamicResponse = new_value;
      }
    void unsetResetAllDynamicResponse(void)
      {
        if (flagHasResetAllDynamicResponse)
          {
            storeResetAllDynamicResponse->remove_reference();
          }
        flagHasResetAllDynamicResponse = false;
      }
    void setResetSingleDynamicResponse(DynamicResponseJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasResetSingleDynamicResponse)
          {
            storeResetSingleDynamicResponse->remove_reference();
          }
        flagHasResetSingleDynamicResponse = true;
        storeResetSingleDynamicResponse = new_value;
      }
    void unsetResetSingleDynamicResponse(void)
      {
        if (flagHasResetSingleDynamicResponse)
          {
            storeResetSingleDynamicResponse->remove_reference();
          }
        flagHasResetSingleDynamicResponse = false;
      }
    void setResetMultiDynamicResponse(DynamicResponseJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasResetMultiDynamicResponse)
          {
            storeResetMultiDynamicResponse->remove_reference();
          }
        flagHasResetMultiDynamicResponse = true;
        storeResetMultiDynamicResponse = new_value;
      }
    void unsetResetMultiDynamicResponse(void)
      {
        if (flagHasResetMultiDynamicResponse)
          {
            storeResetMultiDynamicResponse->remove_reference();
          }
        flagHasResetMultiDynamicResponse = false;
      }
    void setResetNoMatchDynamicResponse(DynamicResponseJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasResetNoMatchDynamicResponse)
          {
            storeResetNoMatchDynamicResponse->remove_reference();
          }
        flagHasResetNoMatchDynamicResponse = true;
        storeResetNoMatchDynamicResponse = new_value;
      }
    void unsetResetNoMatchDynamicResponse(void)
      {
        if (flagHasResetNoMatchDynamicResponse)
          {
            storeResetNoMatchDynamicResponse->remove_reference();
          }
        flagHasResetNoMatchDynamicResponse = false;
      }
    void setResetPartialMatchDynamicResponse(DynamicResponseJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasResetPartialMatchDynamicResponse)
          {
            storeResetPartialMatchDynamicResponse->remove_reference();
          }
        flagHasResetPartialMatchDynamicResponse = true;
        storeResetPartialMatchDynamicResponse = new_value;
      }
    void unsetResetPartialMatchDynamicResponse(void)
      {
        if (flagHasResetPartialMatchDynamicResponse)
          {
            storeResetPartialMatchDynamicResponse->remove_reference();
          }
        flagHasResetPartialMatchDynamicResponse = false;
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

    virtual void extraTimerResetCommandAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraTimerResetCommandSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraTimerResetCommandLookup(key);
        if (old_field == NULL)
          {
            extraTimerResetCommandAppendPair(key, new_component);
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
                if (strncmp(&(key[1]), "eset", 4) == 0)
                  {
                    switch ((unsigned char)(key[5]))
                      {
                        case 'A':
                            if (strcmp(&(key[6]), "llDynamicResponse") == 0)
                                {
                                fromJSONResetAllDynamicResponse(new_component, false);
                                return;
                                }
                            break;
                        case 'M':
                            if (strcmp(&(key[6]), "ultiDynamicResponse") == 0)
                                {
                                fromJSONResetMultiDynamicResponse(new_component, false);
                                return;
                                }
                            break;
                        case 'N':
                            if (strcmp(&(key[6]), "oMatchDynamicResponse") == 0)
                                {
                                fromJSONResetNoMatchDynamicResponse(new_component, false);
                                return;
                                }
                            break;
                        case 'P':
                            if (strcmp(&(key[6]), "artialMatchDynamicResponse") == 0)
                                {
                                fromJSONResetPartialMatchDynamicResponse(new_component, false);
                                return;
                                }
                            break;
                        case 'S':
                            if (strcmp(&(key[6]), "ingleDynamicResponse") == 0)
                                {
                                fromJSONResetSingleDynamicResponse(new_component, false);
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
        extraTimerResetCommandAppendPair(key, new_component);
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
                if (strncmp(&(key[1]), "eset", 4) == 0)
                  {
                    switch ((unsigned char)(key[5]))
                      {
                        case 'A':
                            if (strcmp(&(key[6]), "llDynamicResponse") == 0)
                                {
                                fromJSONResetAllDynamicResponse(new_component, false);
                                return;
                                }
                            break;
                        case 'M':
                            if (strcmp(&(key[6]), "ultiDynamicResponse") == 0)
                                {
                                fromJSONResetMultiDynamicResponse(new_component, false);
                                return;
                                }
                            break;
                        case 'N':
                            if (strcmp(&(key[6]), "oMatchDynamicResponse") == 0)
                                {
                                fromJSONResetNoMatchDynamicResponse(new_component, false);
                                return;
                                }
                            break;
                        case 'P':
                            if (strcmp(&(key[6]), "artialMatchDynamicResponse") == 0)
                                {
                                fromJSONResetPartialMatchDynamicResponse(new_component, false);
                                return;
                                }
                            break;
                        case 'S':
                            if (strcmp(&(key[6]), "ingleDynamicResponse") == 0)
                                {
                                fromJSONResetSingleDynamicResponse(new_component, false);
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
        extraTimerResetCommandSetField(key, new_component);
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
        if (flagHasResetAllDynamicResponse)
          {
            handler->start_pair("ResetAllDynamicResponse");
            storeResetAllDynamicResponse->write_as_json(handler);
          }
        if (flagHasResetSingleDynamicResponse)
          {
            handler->start_pair("ResetSingleDynamicResponse");
            storeResetSingleDynamicResponse->write_as_json(handler);
          }
        if (flagHasResetMultiDynamicResponse)
          {
            handler->start_pair("ResetMultiDynamicResponse");
            storeResetMultiDynamicResponse->write_as_json(handler);
          }
        if (flagHasResetNoMatchDynamicResponse)
          {
            handler->start_pair("ResetNoMatchDynamicResponse");
            storeResetNoMatchDynamicResponse->write_as_json(handler);
          }
        if (flagHasResetPartialMatchDynamicResponse)
          {
            handler->start_pair("ResetPartialMatchDynamicResponse");
            storeResetPartialMatchDynamicResponse->write_as_json(handler);
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

    static TimerResetCommandJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static TimerResetCommandJSON *from_text(const char *text, bool ignore_extras = false)
      {
        TimerResetCommandJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<TimerResetCommandJSON>, TimerResetCommandJSON *, bool> generator("Type TimerResetCommand", ignore_extras);
            parse_json_value(text, "Text for TimerResetCommandJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static TimerResetCommandJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        TimerResetCommandJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<TimerResetCommandJSON>, TimerResetCommandJSON *, bool> generator("Type TimerResetCommand", ignore_extras);
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
        JSONHoldingGenerator<DynamicResponseJSON::Generator, RCHandle<DynamicResponseJSON>, DynamicResponseJSON *, bool > fieldGeneratorResetAllDynamicResponse;
        JSONHoldingGenerator<DynamicResponseJSON::Generator, RCHandle<DynamicResponseJSON>, DynamicResponseJSON *, bool > fieldGeneratorResetSingleDynamicResponse;
        JSONHoldingGenerator<DynamicResponseJSON::Generator, RCHandle<DynamicResponseJSON>, DynamicResponseJSON *, bool > fieldGeneratorResetMultiDynamicResponse;
        JSONHoldingGenerator<DynamicResponseJSON::Generator, RCHandle<DynamicResponseJSON>, DynamicResponseJSON *, bool > fieldGeneratorResetNoMatchDynamicResponse;
        JSONHoldingGenerator<DynamicResponseJSON::Generator, RCHandle<DynamicResponseJSON>, DynamicResponseJSON *, bool > fieldGeneratorResetPartialMatchDynamicResponse;
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
            if (!(strcmp(getTimerCommandJSONKey().c_str(), "TimerResetCommand") == 0))
                throw("The key field has a value other than `TimerResetCommand'.");
            TimerResetCommandJSON *result = new TimerResetCommandJSON();
            assert(result != NULL);
            RCHandle<TimerResetCommandJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraTimerResetCommandAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void handle_result(TimerCommandJSON *new_result)
          {
            handle_result((TimerResetCommandJSON *)new_result);
          }
        void finish(TimerResetCommandJSON *result)
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
            if (fieldGeneratorResetAllDynamicResponse.have_value)
              {
                result->setResetAllDynamicResponse(fieldGeneratorResetAllDynamicResponse.value.referenced());
                fieldGeneratorResetAllDynamicResponse.have_value = false;
              }
            if (fieldGeneratorResetSingleDynamicResponse.have_value)
              {
                result->setResetSingleDynamicResponse(fieldGeneratorResetSingleDynamicResponse.value.referenced());
                fieldGeneratorResetSingleDynamicResponse.have_value = false;
              }
            if (fieldGeneratorResetMultiDynamicResponse.have_value)
              {
                result->setResetMultiDynamicResponse(fieldGeneratorResetMultiDynamicResponse.value.referenced());
                fieldGeneratorResetMultiDynamicResponse.have_value = false;
              }
            if (fieldGeneratorResetNoMatchDynamicResponse.have_value)
              {
                result->setResetNoMatchDynamicResponse(fieldGeneratorResetNoMatchDynamicResponse.value.referenced());
                fieldGeneratorResetNoMatchDynamicResponse.have_value = false;
              }
            if (fieldGeneratorResetPartialMatchDynamicResponse.have_value)
              {
                result->setResetPartialMatchDynamicResponse(fieldGeneratorResetPartialMatchDynamicResponse.value.referenced());
                fieldGeneratorResetPartialMatchDynamicResponse.have_value = false;
              }
            if (fieldGeneratorFutureSupportDynamicResponse.have_value)
              {
                result->setFutureSupportDynamicResponse(fieldGeneratorFutureSupportDynamicResponse.value.referenced());
                fieldGeneratorFutureSupportDynamicResponse.have_value = false;
              }
            TimerCommandJSON::Generator::finish(result);
          }
        virtual void handle_result(TimerResetCommandJSON *new_result) = 0;
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
                    if (strncmp(&(field_name[1]), "eset", 4) == 0)
                      {
                        switch ((unsigned char)(field_name[5]))
                          {
                            case 'A':
                                if (strcmp(&(field_name[6]), "llDynamicResponse") == 0)
                                    return &fieldGeneratorResetAllDynamicResponse;
                                break;
                            case 'M':
                                if (strcmp(&(field_name[6]), "ultiDynamicResponse") == 0)
                                    return &fieldGeneratorResetMultiDynamicResponse;
                                break;
                            case 'N':
                                if (strcmp(&(field_name[6]), "oMatchDynamicResponse") == 0)
                                    return &fieldGeneratorResetNoMatchDynamicResponse;
                                break;
                            case 'P':
                                if (strcmp(&(field_name[6]), "artialMatchDynamicResponse") == 0)
                                    return &fieldGeneratorResetPartialMatchDynamicResponse;
                                break;
                            case 'S':
                                if (strcmp(&(field_name[6]), "ingleDynamicResponse") == 0)
                                    return &fieldGeneratorResetSingleDynamicResponse;
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
        Generator(bool ignore_extras = false) : TimerCommandJSON::Generator(ignore_extras), fieldGeneratorNativeData("field \"NativeData\" of the TimerResetCommand class", ignore_extras), fieldGeneratorResetAllDynamicResponse("field \"ResetAllDynamicResponse\" of the TimerResetCommand class", ignore_extras), fieldGeneratorResetSingleDynamicResponse("field \"ResetSingleDynamicResponse\" of the TimerResetCommand class", ignore_extras), fieldGeneratorResetMultiDynamicResponse("field \"ResetMultiDynamicResponse\" of the TimerResetCommand class", ignore_extras), fieldGeneratorResetNoMatchDynamicResponse("field \"ResetNoMatchDynamicResponse\" of the TimerResetCommand class", ignore_extras), fieldGeneratorResetPartialMatchDynamicResponse("field \"ResetPartialMatchDynamicResponse\" of the TimerResetCommand class", ignore_extras), fieldGeneratorFutureSupportDynamicResponse("field \"FutureSupportDynamicResponse\" of the TimerResetCommand class", ignore_extras), unknownFieldGenerator(ignore_extras)
          {
            set_what("the TimerResetCommand class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorNativeData.reset();
            fieldGeneratorResetAllDynamicResponse.reset();
            fieldGeneratorResetSingleDynamicResponse.reset();
            fieldGeneratorResetMultiDynamicResponse.reset();
            fieldGeneratorResetNoMatchDynamicResponse.reset();
            fieldGeneratorResetPartialMatchDynamicResponse.reset();
            fieldGeneratorFutureSupportDynamicResponse.reset();
            TimerCommandJSON::Generator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* TIMERRESETCOMMANDJSON_H */
