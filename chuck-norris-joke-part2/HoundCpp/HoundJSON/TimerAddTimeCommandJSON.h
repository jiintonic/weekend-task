/* file "TimerAddTimeCommandJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef TIMERADDTIMECOMMANDJSON_H
#define TIMERADDTIMECOMMANDJSON_H

#pragma interface

#include "TimerCommandJSON.h"
#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONHoldingArrayGenerator.h"
#include <vector>
#include "TimerCriteriaJSON.h"
#include "TimerJSON.h"
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


class TimerAddTimeCommandJSON : public TimerCommandJSON
  {
  public:
    class TypeNativeDataJSON : public ReferenceCounted
      {
      private:
        bool flagHasTimerCriteria;
        std::vector< TimerCriteriaJSON * > storeTimerCriteria;
        bool flagHasTimer;
        TimerJSON * storeTimer;
        std::vector<std::string> extraKeys;
        std::vector<JSONValue *> extraValues;
        string_index *extraIndex;

        TypeNativeDataJSON(const TypeNativeDataJSON &);
        TypeNativeDataJSON & operator=(const TypeNativeDataJSON &other);

        void  fromJSONTimerCriteria(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONTimer(JSONValue *json_value, bool ignore_extras = false);


      public:
        TypeNativeDataJSON(void);
        virtual ~TypeNativeDataJSON(void);
        bool  hasTimerCriteria(void) const;
        size_t  countOfTimerCriteria(void) const;
        TimerCriteriaJSON *  elementOfTimerCriteria(size_t element_num);
        const TimerCriteriaJSON *  elementOfTimerCriteria(size_t element_num) const;
        std::vector< TimerCriteriaJSON * >  getTimerCriteria(void);
        const std::vector< TimerCriteriaJSON * >  getTimerCriteria(void) const;
        bool  hasTimer(void) const;
        TimerJSON *  getTimer(void);
        const TimerJSON *  getTimer(void) const;

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
        void setTimer(TimerJSON * new_value)
          {
            new_value->add_reference();
            if (flagHasTimer)
              {
                storeTimer->remove_reference();
              }
            flagHasTimer = true;
            storeTimer = new_value;
          }
        void unsetTimer(void)
          {
            if (flagHasTimer)
              {
                storeTimer->remove_reference();
              }
            flagHasTimer = false;
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
            assert(flagHasTimer);
            handler->start_pair("Timer");
            storeTimer->write_as_json(handler);
          }
        virtual const char *missing_field_error(void) const
          {
            if (!(hasTimer()))
              {
                return "When parsing the object for %what%, the \"Timer\" field was missing.";
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
            JSONHoldingArrayGenerator<TimerCriteriaJSON::Generator, RCHandle<TimerCriteriaJSON>, TimerCriteriaJSON *, bool > fieldGeneratorTimerCriteria;
            JSONHoldingGenerator<TimerJSON::Generator, RCHandle<TimerJSON>, TimerJSON *, bool > fieldGeneratorTimer;
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
                if (fieldGeneratorTimer.have_value)
                  {
                    result->setTimer(fieldGeneratorTimer.value.referenced());
                    fieldGeneratorTimer.have_value = false;
                  }
                else if (!(result->hasTimer()))
                  {
                    error("When parsing the object for %what%, the \"Timer\" field was missing.");
                  }
              }
            virtual void handle_result(TypeNativeDataJSON *new_result) = 0;
            virtual JSONHandler *start_known_field(const char *field_name)
              {
                if (strncmp(field_name, "Timer", 5) == 0)
                  {
                    switch ((unsigned char)(field_name[5]))
                      {
                        case 0:
                            return &fieldGeneratorTimer;
                        case 'C':
                            if (strcmp(&(field_name[6]), "riteria") == 0)
                                return &fieldGeneratorTimerCriteria;
                            break;
                        default:
                            break;
                      }
                  }
                return NULL;
              }

          public:
            Generator(bool ignore_extras = false) : fieldGeneratorTimerCriteria("field \"TimerCriteria\" of the TypeNativeData class", ignore_extras), fieldGeneratorTimer("field \"Timer\" of the TypeNativeData class", ignore_extras), unknownFieldGenerator(ignore_extras)
              {
                set_what("the TypeNativeData class");
              }
            ~Generator(void)
              {
              }

            void reset(void)
              {
                fieldGeneratorTimerCriteria.reset();
                fieldGeneratorTimer.reset();
                JSONObjectGenerator::reset();
                unknownFieldGenerator.reset();
              }
          };
      };

  private:
    bool flagHasNativeData;
    TypeNativeDataJSON * storeNativeData;
    bool flagHasAddTimeAllDynamicResponse;
    DynamicResponseJSON * storeAddTimeAllDynamicResponse;
    bool flagHasAddTimeSingleDynamicResponse;
    DynamicResponseJSON * storeAddTimeSingleDynamicResponse;
    bool flagHasAddTimeMultiDynamicResponse;
    DynamicResponseJSON * storeAddTimeMultiDynamicResponse;
    bool flagHasAddTimeNoMatchDynamicResponse;
    DynamicResponseJSON * storeAddTimeNoMatchDynamicResponse;
    bool flagHasAddTimePartialMatchDynamicResponse;
    DynamicResponseJSON * storeAddTimePartialMatchDynamicResponse;
    bool flagHasFutureSupportDynamicResponse;
    DynamicResponseJSON * storeFutureSupportDynamicResponse;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    TimerAddTimeCommandJSON(const TimerAddTimeCommandJSON &);
    TimerAddTimeCommandJSON & operator=(const TimerAddTimeCommandJSON &other);

    JSONValue * extraNativeDataToJSON(void) const;
    JSONValue * extraAddTimeAllDynamicResponseToJSON(void) const;
    JSONValue * extraAddTimeSingleDynamicResponseToJSON(void) const;
    JSONValue * extraAddTimeMultiDynamicResponseToJSON(void) const;
    JSONValue * extraAddTimeNoMatchDynamicResponseToJSON(void) const;
    JSONValue * extraAddTimePartialMatchDynamicResponseToJSON(void) const;
    JSONValue * extraFutureSupportDynamicResponseToJSON(void) const;

    void  fromJSONNativeData(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONAddTimeAllDynamicResponse(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONAddTimeSingleDynamicResponse(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONAddTimeMultiDynamicResponse(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONAddTimeNoMatchDynamicResponse(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONAddTimePartialMatchDynamicResponse(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONFutureSupportDynamicResponse(JSONValue *json_value, bool ignore_extras = false);


  public:
    TimerAddTimeCommandJSON(void);
    virtual ~TimerAddTimeCommandJSON(void);
    const char * getTimerCommandKind(void) const;
    bool  hasNativeData(void) const;
    TypeNativeDataJSON *  getNativeData(void);
    const TypeNativeDataJSON *  getNativeData(void) const;
    bool  hasAddTimeAllDynamicResponse(void) const;
    DynamicResponseJSON *  getAddTimeAllDynamicResponse(void);
    const DynamicResponseJSON *  getAddTimeAllDynamicResponse(void) const;
    bool  hasAddTimeSingleDynamicResponse(void) const;
    DynamicResponseJSON *  getAddTimeSingleDynamicResponse(void);
    const DynamicResponseJSON *  getAddTimeSingleDynamicResponse(void) const;
    bool  hasAddTimeMultiDynamicResponse(void) const;
    DynamicResponseJSON *  getAddTimeMultiDynamicResponse(void);
    const DynamicResponseJSON *  getAddTimeMultiDynamicResponse(void) const;
    bool  hasAddTimeNoMatchDynamicResponse(void) const;
    DynamicResponseJSON *  getAddTimeNoMatchDynamicResponse(void);
    const DynamicResponseJSON *  getAddTimeNoMatchDynamicResponse(void) const;
    bool  hasAddTimePartialMatchDynamicResponse(void) const;
    DynamicResponseJSON *  getAddTimePartialMatchDynamicResponse(void);
    const DynamicResponseJSON *  getAddTimePartialMatchDynamicResponse(void) const;
    bool  hasFutureSupportDynamicResponse(void) const;
    DynamicResponseJSON *  getFutureSupportDynamicResponse(void);
    const DynamicResponseJSON *  getFutureSupportDynamicResponse(void) const;

    virtual size_t extraTimerAddTimeCommandComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraTimerAddTimeCommandComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraTimerAddTimeCommandComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraTimerAddTimeCommandComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraTimerAddTimeCommandLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraTimerAddTimeCommandLookup(const char *field_name) const
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
        if (flagHasAddTimeAllDynamicResponse)
            ++result;
        if (flagHasAddTimeSingleDynamicResponse)
            ++result;
        if (flagHasAddTimeMultiDynamicResponse)
            ++result;
        if (flagHasAddTimeNoMatchDynamicResponse)
            ++result;
        if (flagHasAddTimePartialMatchDynamicResponse)
            ++result;
        if (flagHasFutureSupportDynamicResponse)
            ++result;
        result += extraTimerAddTimeCommandComponentCount();
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
        if (flagHasAddTimeAllDynamicResponse)
          {
            if (remainder == 0)
                return "AddTimeAllDynamicResponse";
            --remainder;
          }
        if (flagHasAddTimeSingleDynamicResponse)
          {
            if (remainder == 0)
                return "AddTimeSingleDynamicResponse";
            --remainder;
          }
        if (flagHasAddTimeMultiDynamicResponse)
          {
            if (remainder == 0)
                return "AddTimeMultiDynamicResponse";
            --remainder;
          }
        if (flagHasAddTimeNoMatchDynamicResponse)
          {
            if (remainder == 0)
                return "AddTimeNoMatchDynamicResponse";
            --remainder;
          }
        if (flagHasAddTimePartialMatchDynamicResponse)
          {
            if (remainder == 0)
                return "AddTimePartialMatchDynamicResponse";
            --remainder;
          }
        if (flagHasFutureSupportDynamicResponse)
          {
            if (remainder == 0)
                return "FutureSupportDynamicResponse";
            --remainder;
          }
        return extraTimerAddTimeCommandComponentKey(remainder);
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
        if (flagHasAddTimeAllDynamicResponse)
          {
            if (remainder == 0)
                return extraAddTimeAllDynamicResponseToJSON();
            --remainder;
          }
        if (flagHasAddTimeSingleDynamicResponse)
          {
            if (remainder == 0)
                return extraAddTimeSingleDynamicResponseToJSON();
            --remainder;
          }
        if (flagHasAddTimeMultiDynamicResponse)
          {
            if (remainder == 0)
                return extraAddTimeMultiDynamicResponseToJSON();
            --remainder;
          }
        if (flagHasAddTimeNoMatchDynamicResponse)
          {
            if (remainder == 0)
                return extraAddTimeNoMatchDynamicResponseToJSON();
            --remainder;
          }
        if (flagHasAddTimePartialMatchDynamicResponse)
          {
            if (remainder == 0)
                return extraAddTimePartialMatchDynamicResponseToJSON();
            --remainder;
          }
        if (flagHasFutureSupportDynamicResponse)
          {
            if (remainder == 0)
                return extraFutureSupportDynamicResponseToJSON();
            --remainder;
          }
        return extraTimerAddTimeCommandComponentValue(remainder);
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
        if (flagHasAddTimeAllDynamicResponse)
          {
            if (remainder == 0)
                return extraAddTimeAllDynamicResponseToJSON();
            --remainder;
          }
        if (flagHasAddTimeSingleDynamicResponse)
          {
            if (remainder == 0)
                return extraAddTimeSingleDynamicResponseToJSON();
            --remainder;
          }
        if (flagHasAddTimeMultiDynamicResponse)
          {
            if (remainder == 0)
                return extraAddTimeMultiDynamicResponseToJSON();
            --remainder;
          }
        if (flagHasAddTimeNoMatchDynamicResponse)
          {
            if (remainder == 0)
                return extraAddTimeNoMatchDynamicResponseToJSON();
            --remainder;
          }
        if (flagHasAddTimePartialMatchDynamicResponse)
          {
            if (remainder == 0)
                return extraAddTimePartialMatchDynamicResponseToJSON();
            --remainder;
          }
        if (flagHasFutureSupportDynamicResponse)
          {
            if (remainder == 0)
                return extraFutureSupportDynamicResponseToJSON();
            --remainder;
          }
        return extraTimerAddTimeCommandComponentValue(remainder);
      }
    JSONValue *extraTimerCommandLookup(const char *field_name)
      {
        switch ((unsigned char)(field_name[0]))
          {
            case 'A':
                if (strncmp(&(field_name[1]), "ddTime", 6) == 0)
                  {
                    switch ((unsigned char)(field_name[7]))
                      {
                        case 'A':
                            if (strcmp(&(field_name[8]), "llDynamicResponse") == 0)
                                return (flagHasAddTimeAllDynamicResponse ? extraAddTimeAllDynamicResponseToJSON() : NULL);
                            break;
                        case 'M':
                            if (strcmp(&(field_name[8]), "ultiDynamicResponse") == 0)
                                return (flagHasAddTimeMultiDynamicResponse ? extraAddTimeMultiDynamicResponseToJSON() : NULL);
                            break;
                        case 'N':
                            if (strcmp(&(field_name[8]), "oMatchDynamicResponse") == 0)
                                return (flagHasAddTimeNoMatchDynamicResponse ? extraAddTimeNoMatchDynamicResponseToJSON() : NULL);
                            break;
                        case 'P':
                            if (strcmp(&(field_name[8]), "artialMatchDynamicResponse") == 0)
                                return (flagHasAddTimePartialMatchDynamicResponse ? extraAddTimePartialMatchDynamicResponseToJSON() : NULL);
                            break;
                        case 'S':
                            if (strcmp(&(field_name[8]), "ingleDynamicResponse") == 0)
                                return (flagHasAddTimeSingleDynamicResponse ? extraAddTimeSingleDynamicResponseToJSON() : NULL);
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
        return extraTimerAddTimeCommandLookup(field_name);
      }
    const JSONValue *extraTimerCommandLookup(const char *field_name) const
      {
        switch ((unsigned char)(field_name[0]))
          {
            case 'A':
                if (strncmp(&(field_name[1]), "ddTime", 6) == 0)
                  {
                    switch ((unsigned char)(field_name[7]))
                      {
                        case 'A':
                            if (strcmp(&(field_name[8]), "llDynamicResponse") == 0)
                                return (flagHasAddTimeAllDynamicResponse ? extraAddTimeAllDynamicResponseToJSON() : NULL);
                            break;
                        case 'M':
                            if (strcmp(&(field_name[8]), "ultiDynamicResponse") == 0)
                                return (flagHasAddTimeMultiDynamicResponse ? extraAddTimeMultiDynamicResponseToJSON() : NULL);
                            break;
                        case 'N':
                            if (strcmp(&(field_name[8]), "oMatchDynamicResponse") == 0)
                                return (flagHasAddTimeNoMatchDynamicResponse ? extraAddTimeNoMatchDynamicResponseToJSON() : NULL);
                            break;
                        case 'P':
                            if (strcmp(&(field_name[8]), "artialMatchDynamicResponse") == 0)
                                return (flagHasAddTimePartialMatchDynamicResponse ? extraAddTimePartialMatchDynamicResponseToJSON() : NULL);
                            break;
                        case 'S':
                            if (strcmp(&(field_name[8]), "ingleDynamicResponse") == 0)
                                return (flagHasAddTimeSingleDynamicResponse ? extraAddTimeSingleDynamicResponseToJSON() : NULL);
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
        return extraTimerAddTimeCommandLookup(field_name);
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
    void setAddTimeAllDynamicResponse(DynamicResponseJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasAddTimeAllDynamicResponse)
          {
            storeAddTimeAllDynamicResponse->remove_reference();
          }
        flagHasAddTimeAllDynamicResponse = true;
        storeAddTimeAllDynamicResponse = new_value;
      }
    void unsetAddTimeAllDynamicResponse(void)
      {
        if (flagHasAddTimeAllDynamicResponse)
          {
            storeAddTimeAllDynamicResponse->remove_reference();
          }
        flagHasAddTimeAllDynamicResponse = false;
      }
    void setAddTimeSingleDynamicResponse(DynamicResponseJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasAddTimeSingleDynamicResponse)
          {
            storeAddTimeSingleDynamicResponse->remove_reference();
          }
        flagHasAddTimeSingleDynamicResponse = true;
        storeAddTimeSingleDynamicResponse = new_value;
      }
    void unsetAddTimeSingleDynamicResponse(void)
      {
        if (flagHasAddTimeSingleDynamicResponse)
          {
            storeAddTimeSingleDynamicResponse->remove_reference();
          }
        flagHasAddTimeSingleDynamicResponse = false;
      }
    void setAddTimeMultiDynamicResponse(DynamicResponseJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasAddTimeMultiDynamicResponse)
          {
            storeAddTimeMultiDynamicResponse->remove_reference();
          }
        flagHasAddTimeMultiDynamicResponse = true;
        storeAddTimeMultiDynamicResponse = new_value;
      }
    void unsetAddTimeMultiDynamicResponse(void)
      {
        if (flagHasAddTimeMultiDynamicResponse)
          {
            storeAddTimeMultiDynamicResponse->remove_reference();
          }
        flagHasAddTimeMultiDynamicResponse = false;
      }
    void setAddTimeNoMatchDynamicResponse(DynamicResponseJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasAddTimeNoMatchDynamicResponse)
          {
            storeAddTimeNoMatchDynamicResponse->remove_reference();
          }
        flagHasAddTimeNoMatchDynamicResponse = true;
        storeAddTimeNoMatchDynamicResponse = new_value;
      }
    void unsetAddTimeNoMatchDynamicResponse(void)
      {
        if (flagHasAddTimeNoMatchDynamicResponse)
          {
            storeAddTimeNoMatchDynamicResponse->remove_reference();
          }
        flagHasAddTimeNoMatchDynamicResponse = false;
      }
    void setAddTimePartialMatchDynamicResponse(DynamicResponseJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasAddTimePartialMatchDynamicResponse)
          {
            storeAddTimePartialMatchDynamicResponse->remove_reference();
          }
        flagHasAddTimePartialMatchDynamicResponse = true;
        storeAddTimePartialMatchDynamicResponse = new_value;
      }
    void unsetAddTimePartialMatchDynamicResponse(void)
      {
        if (flagHasAddTimePartialMatchDynamicResponse)
          {
            storeAddTimePartialMatchDynamicResponse->remove_reference();
          }
        flagHasAddTimePartialMatchDynamicResponse = false;
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

    virtual void extraTimerAddTimeCommandAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraTimerAddTimeCommandSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraTimerAddTimeCommandLookup(key);
        if (old_field == NULL)
          {
            extraTimerAddTimeCommandAppendPair(key, new_component);
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
            case 'A':
                if (strncmp(&(key[1]), "ddTime", 6) == 0)
                  {
                    switch ((unsigned char)(key[7]))
                      {
                        case 'A':
                            if (strcmp(&(key[8]), "llDynamicResponse") == 0)
                                {
                                fromJSONAddTimeAllDynamicResponse(new_component, false);
                                return;
                                }
                            break;
                        case 'M':
                            if (strcmp(&(key[8]), "ultiDynamicResponse") == 0)
                                {
                                fromJSONAddTimeMultiDynamicResponse(new_component, false);
                                return;
                                }
                            break;
                        case 'N':
                            if (strcmp(&(key[8]), "oMatchDynamicResponse") == 0)
                                {
                                fromJSONAddTimeNoMatchDynamicResponse(new_component, false);
                                return;
                                }
                            break;
                        case 'P':
                            if (strcmp(&(key[8]), "artialMatchDynamicResponse") == 0)
                                {
                                fromJSONAddTimePartialMatchDynamicResponse(new_component, false);
                                return;
                                }
                            break;
                        case 'S':
                            if (strcmp(&(key[8]), "ingleDynamicResponse") == 0)
                                {
                                fromJSONAddTimeSingleDynamicResponse(new_component, false);
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
        extraTimerAddTimeCommandAppendPair(key, new_component);
      }
    void extraTimerCommandSetField(const char *key, JSONValue *new_component)
      {
        switch ((unsigned char)(key[0]))
          {
            case 'A':
                if (strncmp(&(key[1]), "ddTime", 6) == 0)
                  {
                    switch ((unsigned char)(key[7]))
                      {
                        case 'A':
                            if (strcmp(&(key[8]), "llDynamicResponse") == 0)
                                {
                                fromJSONAddTimeAllDynamicResponse(new_component, false);
                                return;
                                }
                            break;
                        case 'M':
                            if (strcmp(&(key[8]), "ultiDynamicResponse") == 0)
                                {
                                fromJSONAddTimeMultiDynamicResponse(new_component, false);
                                return;
                                }
                            break;
                        case 'N':
                            if (strcmp(&(key[8]), "oMatchDynamicResponse") == 0)
                                {
                                fromJSONAddTimeNoMatchDynamicResponse(new_component, false);
                                return;
                                }
                            break;
                        case 'P':
                            if (strcmp(&(key[8]), "artialMatchDynamicResponse") == 0)
                                {
                                fromJSONAddTimePartialMatchDynamicResponse(new_component, false);
                                return;
                                }
                            break;
                        case 'S':
                            if (strcmp(&(key[8]), "ingleDynamicResponse") == 0)
                                {
                                fromJSONAddTimeSingleDynamicResponse(new_component, false);
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
        extraTimerAddTimeCommandSetField(key, new_component);
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
        if (flagHasAddTimeAllDynamicResponse)
          {
            handler->start_pair("AddTimeAllDynamicResponse");
            storeAddTimeAllDynamicResponse->write_as_json(handler);
          }
        if (flagHasAddTimeSingleDynamicResponse)
          {
            handler->start_pair("AddTimeSingleDynamicResponse");
            storeAddTimeSingleDynamicResponse->write_as_json(handler);
          }
        if (flagHasAddTimeMultiDynamicResponse)
          {
            handler->start_pair("AddTimeMultiDynamicResponse");
            storeAddTimeMultiDynamicResponse->write_as_json(handler);
          }
        if (flagHasAddTimeNoMatchDynamicResponse)
          {
            handler->start_pair("AddTimeNoMatchDynamicResponse");
            storeAddTimeNoMatchDynamicResponse->write_as_json(handler);
          }
        if (flagHasAddTimePartialMatchDynamicResponse)
          {
            handler->start_pair("AddTimePartialMatchDynamicResponse");
            storeAddTimePartialMatchDynamicResponse->write_as_json(handler);
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

    static TimerAddTimeCommandJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static TimerAddTimeCommandJSON *from_text(const char *text, bool ignore_extras = false)
      {
        TimerAddTimeCommandJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<TimerAddTimeCommandJSON>, TimerAddTimeCommandJSON *, bool> generator("Type TimerAddTimeCommand", ignore_extras);
            parse_json_value(text, "Text for TimerAddTimeCommandJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static TimerAddTimeCommandJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        TimerAddTimeCommandJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<TimerAddTimeCommandJSON>, TimerAddTimeCommandJSON *, bool> generator("Type TimerAddTimeCommand", ignore_extras);
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
        JSONHoldingGenerator<DynamicResponseJSON::Generator, RCHandle<DynamicResponseJSON>, DynamicResponseJSON *, bool > fieldGeneratorAddTimeAllDynamicResponse;
        JSONHoldingGenerator<DynamicResponseJSON::Generator, RCHandle<DynamicResponseJSON>, DynamicResponseJSON *, bool > fieldGeneratorAddTimeSingleDynamicResponse;
        JSONHoldingGenerator<DynamicResponseJSON::Generator, RCHandle<DynamicResponseJSON>, DynamicResponseJSON *, bool > fieldGeneratorAddTimeMultiDynamicResponse;
        JSONHoldingGenerator<DynamicResponseJSON::Generator, RCHandle<DynamicResponseJSON>, DynamicResponseJSON *, bool > fieldGeneratorAddTimeNoMatchDynamicResponse;
        JSONHoldingGenerator<DynamicResponseJSON::Generator, RCHandle<DynamicResponseJSON>, DynamicResponseJSON *, bool > fieldGeneratorAddTimePartialMatchDynamicResponse;
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
            if (!(strcmp(getTimerCommandJSONKey().c_str(), "TimerAddTimeCommand") == 0))
                throw("The key field has a value other than `TimerAddTimeCommand'.");
            TimerAddTimeCommandJSON *result = new TimerAddTimeCommandJSON();
            assert(result != NULL);
            RCHandle<TimerAddTimeCommandJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraTimerAddTimeCommandAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void handle_result(TimerCommandJSON *new_result)
          {
            handle_result((TimerAddTimeCommandJSON *)new_result);
          }
        void finish(TimerAddTimeCommandJSON *result)
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
            if (fieldGeneratorAddTimeAllDynamicResponse.have_value)
              {
                result->setAddTimeAllDynamicResponse(fieldGeneratorAddTimeAllDynamicResponse.value.referenced());
                fieldGeneratorAddTimeAllDynamicResponse.have_value = false;
              }
            if (fieldGeneratorAddTimeSingleDynamicResponse.have_value)
              {
                result->setAddTimeSingleDynamicResponse(fieldGeneratorAddTimeSingleDynamicResponse.value.referenced());
                fieldGeneratorAddTimeSingleDynamicResponse.have_value = false;
              }
            if (fieldGeneratorAddTimeMultiDynamicResponse.have_value)
              {
                result->setAddTimeMultiDynamicResponse(fieldGeneratorAddTimeMultiDynamicResponse.value.referenced());
                fieldGeneratorAddTimeMultiDynamicResponse.have_value = false;
              }
            if (fieldGeneratorAddTimeNoMatchDynamicResponse.have_value)
              {
                result->setAddTimeNoMatchDynamicResponse(fieldGeneratorAddTimeNoMatchDynamicResponse.value.referenced());
                fieldGeneratorAddTimeNoMatchDynamicResponse.have_value = false;
              }
            if (fieldGeneratorAddTimePartialMatchDynamicResponse.have_value)
              {
                result->setAddTimePartialMatchDynamicResponse(fieldGeneratorAddTimePartialMatchDynamicResponse.value.referenced());
                fieldGeneratorAddTimePartialMatchDynamicResponse.have_value = false;
              }
            if (fieldGeneratorFutureSupportDynamicResponse.have_value)
              {
                result->setFutureSupportDynamicResponse(fieldGeneratorFutureSupportDynamicResponse.value.referenced());
                fieldGeneratorFutureSupportDynamicResponse.have_value = false;
              }
            TimerCommandJSON::Generator::finish(result);
          }
        virtual void handle_result(TimerAddTimeCommandJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'A':
                    if (strncmp(&(field_name[1]), "ddTime", 6) == 0)
                      {
                        switch ((unsigned char)(field_name[7]))
                          {
                            case 'A':
                                if (strcmp(&(field_name[8]), "llDynamicResponse") == 0)
                                    return &fieldGeneratorAddTimeAllDynamicResponse;
                                break;
                            case 'M':
                                if (strcmp(&(field_name[8]), "ultiDynamicResponse") == 0)
                                    return &fieldGeneratorAddTimeMultiDynamicResponse;
                                break;
                            case 'N':
                                if (strcmp(&(field_name[8]), "oMatchDynamicResponse") == 0)
                                    return &fieldGeneratorAddTimeNoMatchDynamicResponse;
                                break;
                            case 'P':
                                if (strcmp(&(field_name[8]), "artialMatchDynamicResponse") == 0)
                                    return &fieldGeneratorAddTimePartialMatchDynamicResponse;
                                break;
                            case 'S':
                                if (strcmp(&(field_name[8]), "ingleDynamicResponse") == 0)
                                    return &fieldGeneratorAddTimeSingleDynamicResponse;
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
        Generator(bool ignore_extras = false) : TimerCommandJSON::Generator(ignore_extras), fieldGeneratorNativeData("field \"NativeData\" of the TimerAddTimeCommand class", ignore_extras), fieldGeneratorAddTimeAllDynamicResponse("field \"AddTimeAllDynamicResponse\" of the TimerAddTimeCommand class", ignore_extras), fieldGeneratorAddTimeSingleDynamicResponse("field \"AddTimeSingleDynamicResponse\" of the TimerAddTimeCommand class", ignore_extras), fieldGeneratorAddTimeMultiDynamicResponse("field \"AddTimeMultiDynamicResponse\" of the TimerAddTimeCommand class", ignore_extras), fieldGeneratorAddTimeNoMatchDynamicResponse("field \"AddTimeNoMatchDynamicResponse\" of the TimerAddTimeCommand class", ignore_extras), fieldGeneratorAddTimePartialMatchDynamicResponse("field \"AddTimePartialMatchDynamicResponse\" of the TimerAddTimeCommand class", ignore_extras), fieldGeneratorFutureSupportDynamicResponse("field \"FutureSupportDynamicResponse\" of the TimerAddTimeCommand class", ignore_extras), unknownFieldGenerator(ignore_extras)
          {
            set_what("the TimerAddTimeCommand class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorNativeData.reset();
            fieldGeneratorAddTimeAllDynamicResponse.reset();
            fieldGeneratorAddTimeSingleDynamicResponse.reset();
            fieldGeneratorAddTimeMultiDynamicResponse.reset();
            fieldGeneratorAddTimeNoMatchDynamicResponse.reset();
            fieldGeneratorAddTimePartialMatchDynamicResponse.reset();
            fieldGeneratorFutureSupportDynamicResponse.reset();
            TimerCommandJSON::Generator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* TIMERADDTIMECOMMANDJSON_H */
