/* file "TimerDisplayCommandJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef TIMERDISPLAYCOMMANDJSON_H
#define TIMERDISPLAYCOMMANDJSON_H

#pragma interface

#include "TimerCommandJSON.h"
#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONHoldingArrayGenerator.h"
#include "JSONBooleanGenerator.h"
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


class TimerDisplayCommandJSON : public TimerCommandJSON
  {
  public:
    class TypeNativeDataJSON : public ReferenceCounted
      {
      private:
        bool flagHasTimerCriteria;
        std::vector< TimerCriteriaJSON * > storeTimerCriteria;
        bool flagHasIsTimeRemainingQuery;
        bool storeIsTimeRemainingQuery;
        std::vector<std::string> extraKeys;
        std::vector<JSONValue *> extraValues;
        string_index *extraIndex;

        TypeNativeDataJSON(const TypeNativeDataJSON &);
        TypeNativeDataJSON & operator=(const TypeNativeDataJSON &other);

        void  fromJSONTimerCriteria(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONIsTimeRemainingQuery(JSONValue *json_value, bool ignore_extras = false);


      public:
        TypeNativeDataJSON(void);
        virtual ~TypeNativeDataJSON(void);
        bool  hasTimerCriteria(void) const;
        size_t  countOfTimerCriteria(void) const;
        TimerCriteriaJSON *  elementOfTimerCriteria(size_t element_num);
        const TimerCriteriaJSON *  elementOfTimerCriteria(size_t element_num) const;
        std::vector< TimerCriteriaJSON * >  getTimerCriteria(void);
        const std::vector< TimerCriteriaJSON * >  getTimerCriteria(void) const;
        bool  hasIsTimeRemainingQuery(void) const;
        bool  getIsTimeRemainingQuery(void);
        const bool  getIsTimeRemainingQuery(void) const;

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
        void setIsTimeRemainingQuery(bool new_value)
          {
            flagHasIsTimeRemainingQuery = true;
            storeIsTimeRemainingQuery = new_value;
          }
        void unsetIsTimeRemainingQuery(void)
          {
            flagHasIsTimeRemainingQuery = false;
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
            if (flagHasIsTimeRemainingQuery)
              {
                handler->start_pair("IsTimeRemainingQuery");
                handler->boolean_value(storeIsTimeRemainingQuery);
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
            JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorIsTimeRemainingQuery;
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
                if (fieldGeneratorIsTimeRemainingQuery.have_value)
                  {
                    result->setIsTimeRemainingQuery(fieldGeneratorIsTimeRemainingQuery.value);
                    fieldGeneratorIsTimeRemainingQuery.have_value = false;
                  }
              }
            virtual void handle_result(TypeNativeDataJSON *new_result) = 0;
            virtual JSONHandler *start_known_field(const char *field_name)
              {
                switch ((unsigned char)(field_name[0]))
                  {
                    case 'I':
                        if (strcmp(&(field_name[1]), "sTimeRemainingQuery") == 0)
                            return &fieldGeneratorIsTimeRemainingQuery;
                        break;
                    case 'T':
                        if (strcmp(&(field_name[1]), "imerCriteria") == 0)
                            return &fieldGeneratorTimerCriteria;
                        break;
                    default:
                        break;
                  }
                return NULL;
              }

          public:
            Generator(bool ignore_extras = false) : fieldGeneratorTimerCriteria("field \"TimerCriteria\" of the TypeNativeData class", ignore_extras), fieldGeneratorIsTimeRemainingQuery("field \"IsTimeRemainingQuery\" of the TypeNativeData class"), unknownFieldGenerator(ignore_extras)
              {
                set_what("the TypeNativeData class");
              }
            ~Generator(void)
              {
              }

            void reset(void)
              {
                fieldGeneratorTimerCriteria.reset();
                fieldGeneratorIsTimeRemainingQuery.reset();
                JSONObjectGenerator::reset();
                unknownFieldGenerator.reset();
              }
          };
      };

  private:
    bool flagHasNativeData;
    TypeNativeDataJSON * storeNativeData;
    bool flagHasFutureSupportDynamicResponse;
    DynamicResponseJSON * storeFutureSupportDynamicResponse;
    bool flagHasDisplayAllDynamicResponse;
    DynamicResponseJSON * storeDisplayAllDynamicResponse;
    bool flagHasDisplaySingleDynamicResponse;
    DynamicResponseJSON * storeDisplaySingleDynamicResponse;
    bool flagHasDisplayMultiDynamicResponse;
    DynamicResponseJSON * storeDisplayMultiDynamicResponse;
    bool flagHasDisplayNoMatchDynamicResponse;
    DynamicResponseJSON * storeDisplayNoMatchDynamicResponse;
    bool flagHasDisplayPartialMatchDynamicResponse;
    DynamicResponseJSON * storeDisplayPartialMatchDynamicResponse;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    TimerDisplayCommandJSON(const TimerDisplayCommandJSON &);
    TimerDisplayCommandJSON & operator=(const TimerDisplayCommandJSON &other);

    JSONValue * extraNativeDataToJSON(void) const;
    JSONValue * extraFutureSupportDynamicResponseToJSON(void) const;
    JSONValue * extraDisplayAllDynamicResponseToJSON(void) const;
    JSONValue * extraDisplaySingleDynamicResponseToJSON(void) const;
    JSONValue * extraDisplayMultiDynamicResponseToJSON(void) const;
    JSONValue * extraDisplayNoMatchDynamicResponseToJSON(void) const;
    JSONValue * extraDisplayPartialMatchDynamicResponseToJSON(void) const;

    void  fromJSONNativeData(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONFutureSupportDynamicResponse(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONDisplayAllDynamicResponse(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONDisplaySingleDynamicResponse(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONDisplayMultiDynamicResponse(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONDisplayNoMatchDynamicResponse(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONDisplayPartialMatchDynamicResponse(JSONValue *json_value, bool ignore_extras = false);


  public:
    TimerDisplayCommandJSON(void);
    virtual ~TimerDisplayCommandJSON(void);
    const char * getTimerCommandKind(void) const;
    bool  hasNativeData(void) const;
    TypeNativeDataJSON *  getNativeData(void);
    const TypeNativeDataJSON *  getNativeData(void) const;
    bool  hasFutureSupportDynamicResponse(void) const;
    DynamicResponseJSON *  getFutureSupportDynamicResponse(void);
    const DynamicResponseJSON *  getFutureSupportDynamicResponse(void) const;
    bool  hasDisplayAllDynamicResponse(void) const;
    DynamicResponseJSON *  getDisplayAllDynamicResponse(void);
    const DynamicResponseJSON *  getDisplayAllDynamicResponse(void) const;
    bool  hasDisplaySingleDynamicResponse(void) const;
    DynamicResponseJSON *  getDisplaySingleDynamicResponse(void);
    const DynamicResponseJSON *  getDisplaySingleDynamicResponse(void) const;
    bool  hasDisplayMultiDynamicResponse(void) const;
    DynamicResponseJSON *  getDisplayMultiDynamicResponse(void);
    const DynamicResponseJSON *  getDisplayMultiDynamicResponse(void) const;
    bool  hasDisplayNoMatchDynamicResponse(void) const;
    DynamicResponseJSON *  getDisplayNoMatchDynamicResponse(void);
    const DynamicResponseJSON *  getDisplayNoMatchDynamicResponse(void) const;
    bool  hasDisplayPartialMatchDynamicResponse(void) const;
    DynamicResponseJSON *  getDisplayPartialMatchDynamicResponse(void);
    const DynamicResponseJSON *  getDisplayPartialMatchDynamicResponse(void) const;

    virtual size_t extraTimerDisplayCommandComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraTimerDisplayCommandComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraTimerDisplayCommandComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraTimerDisplayCommandComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraTimerDisplayCommandLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraTimerDisplayCommandLookup(const char *field_name) const
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
        if (flagHasFutureSupportDynamicResponse)
            ++result;
        if (flagHasDisplayAllDynamicResponse)
            ++result;
        if (flagHasDisplaySingleDynamicResponse)
            ++result;
        if (flagHasDisplayMultiDynamicResponse)
            ++result;
        if (flagHasDisplayNoMatchDynamicResponse)
            ++result;
        if (flagHasDisplayPartialMatchDynamicResponse)
            ++result;
        result += extraTimerDisplayCommandComponentCount();
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
        if (flagHasFutureSupportDynamicResponse)
          {
            if (remainder == 0)
                return "FutureSupportDynamicResponse";
            --remainder;
          }
        if (flagHasDisplayAllDynamicResponse)
          {
            if (remainder == 0)
                return "DisplayAllDynamicResponse";
            --remainder;
          }
        if (flagHasDisplaySingleDynamicResponse)
          {
            if (remainder == 0)
                return "DisplaySingleDynamicResponse";
            --remainder;
          }
        if (flagHasDisplayMultiDynamicResponse)
          {
            if (remainder == 0)
                return "DisplayMultiDynamicResponse";
            --remainder;
          }
        if (flagHasDisplayNoMatchDynamicResponse)
          {
            if (remainder == 0)
                return "DisplayNoMatchDynamicResponse";
            --remainder;
          }
        if (flagHasDisplayPartialMatchDynamicResponse)
          {
            if (remainder == 0)
                return "DisplayPartialMatchDynamicResponse";
            --remainder;
          }
        return extraTimerDisplayCommandComponentKey(remainder);
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
        if (flagHasFutureSupportDynamicResponse)
          {
            if (remainder == 0)
                return extraFutureSupportDynamicResponseToJSON();
            --remainder;
          }
        if (flagHasDisplayAllDynamicResponse)
          {
            if (remainder == 0)
                return extraDisplayAllDynamicResponseToJSON();
            --remainder;
          }
        if (flagHasDisplaySingleDynamicResponse)
          {
            if (remainder == 0)
                return extraDisplaySingleDynamicResponseToJSON();
            --remainder;
          }
        if (flagHasDisplayMultiDynamicResponse)
          {
            if (remainder == 0)
                return extraDisplayMultiDynamicResponseToJSON();
            --remainder;
          }
        if (flagHasDisplayNoMatchDynamicResponse)
          {
            if (remainder == 0)
                return extraDisplayNoMatchDynamicResponseToJSON();
            --remainder;
          }
        if (flagHasDisplayPartialMatchDynamicResponse)
          {
            if (remainder == 0)
                return extraDisplayPartialMatchDynamicResponseToJSON();
            --remainder;
          }
        return extraTimerDisplayCommandComponentValue(remainder);
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
        if (flagHasFutureSupportDynamicResponse)
          {
            if (remainder == 0)
                return extraFutureSupportDynamicResponseToJSON();
            --remainder;
          }
        if (flagHasDisplayAllDynamicResponse)
          {
            if (remainder == 0)
                return extraDisplayAllDynamicResponseToJSON();
            --remainder;
          }
        if (flagHasDisplaySingleDynamicResponse)
          {
            if (remainder == 0)
                return extraDisplaySingleDynamicResponseToJSON();
            --remainder;
          }
        if (flagHasDisplayMultiDynamicResponse)
          {
            if (remainder == 0)
                return extraDisplayMultiDynamicResponseToJSON();
            --remainder;
          }
        if (flagHasDisplayNoMatchDynamicResponse)
          {
            if (remainder == 0)
                return extraDisplayNoMatchDynamicResponseToJSON();
            --remainder;
          }
        if (flagHasDisplayPartialMatchDynamicResponse)
          {
            if (remainder == 0)
                return extraDisplayPartialMatchDynamicResponseToJSON();
            --remainder;
          }
        return extraTimerDisplayCommandComponentValue(remainder);
      }
    JSONValue *extraTimerCommandLookup(const char *field_name)
      {
        switch ((unsigned char)(field_name[0]))
          {
            case 'D':
                if (strncmp(&(field_name[1]), "isplay", 6) == 0)
                  {
                    switch ((unsigned char)(field_name[7]))
                      {
                        case 'A':
                            if (strcmp(&(field_name[8]), "llDynamicResponse") == 0)
                                return (flagHasDisplayAllDynamicResponse ? extraDisplayAllDynamicResponseToJSON() : NULL);
                            break;
                        case 'M':
                            if (strcmp(&(field_name[8]), "ultiDynamicResponse") == 0)
                                return (flagHasDisplayMultiDynamicResponse ? extraDisplayMultiDynamicResponseToJSON() : NULL);
                            break;
                        case 'N':
                            if (strcmp(&(field_name[8]), "oMatchDynamicResponse") == 0)
                                return (flagHasDisplayNoMatchDynamicResponse ? extraDisplayNoMatchDynamicResponseToJSON() : NULL);
                            break;
                        case 'P':
                            if (strcmp(&(field_name[8]), "artialMatchDynamicResponse") == 0)
                                return (flagHasDisplayPartialMatchDynamicResponse ? extraDisplayPartialMatchDynamicResponseToJSON() : NULL);
                            break;
                        case 'S':
                            if (strcmp(&(field_name[8]), "ingleDynamicResponse") == 0)
                                return (flagHasDisplaySingleDynamicResponse ? extraDisplaySingleDynamicResponseToJSON() : NULL);
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
        return extraTimerDisplayCommandLookup(field_name);
      }
    const JSONValue *extraTimerCommandLookup(const char *field_name) const
      {
        switch ((unsigned char)(field_name[0]))
          {
            case 'D':
                if (strncmp(&(field_name[1]), "isplay", 6) == 0)
                  {
                    switch ((unsigned char)(field_name[7]))
                      {
                        case 'A':
                            if (strcmp(&(field_name[8]), "llDynamicResponse") == 0)
                                return (flagHasDisplayAllDynamicResponse ? extraDisplayAllDynamicResponseToJSON() : NULL);
                            break;
                        case 'M':
                            if (strcmp(&(field_name[8]), "ultiDynamicResponse") == 0)
                                return (flagHasDisplayMultiDynamicResponse ? extraDisplayMultiDynamicResponseToJSON() : NULL);
                            break;
                        case 'N':
                            if (strcmp(&(field_name[8]), "oMatchDynamicResponse") == 0)
                                return (flagHasDisplayNoMatchDynamicResponse ? extraDisplayNoMatchDynamicResponseToJSON() : NULL);
                            break;
                        case 'P':
                            if (strcmp(&(field_name[8]), "artialMatchDynamicResponse") == 0)
                                return (flagHasDisplayPartialMatchDynamicResponse ? extraDisplayPartialMatchDynamicResponseToJSON() : NULL);
                            break;
                        case 'S':
                            if (strcmp(&(field_name[8]), "ingleDynamicResponse") == 0)
                                return (flagHasDisplaySingleDynamicResponse ? extraDisplaySingleDynamicResponseToJSON() : NULL);
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
        return extraTimerDisplayCommandLookup(field_name);
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
    void setDisplayAllDynamicResponse(DynamicResponseJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasDisplayAllDynamicResponse)
          {
            storeDisplayAllDynamicResponse->remove_reference();
          }
        flagHasDisplayAllDynamicResponse = true;
        storeDisplayAllDynamicResponse = new_value;
      }
    void unsetDisplayAllDynamicResponse(void)
      {
        if (flagHasDisplayAllDynamicResponse)
          {
            storeDisplayAllDynamicResponse->remove_reference();
          }
        flagHasDisplayAllDynamicResponse = false;
      }
    void setDisplaySingleDynamicResponse(DynamicResponseJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasDisplaySingleDynamicResponse)
          {
            storeDisplaySingleDynamicResponse->remove_reference();
          }
        flagHasDisplaySingleDynamicResponse = true;
        storeDisplaySingleDynamicResponse = new_value;
      }
    void unsetDisplaySingleDynamicResponse(void)
      {
        if (flagHasDisplaySingleDynamicResponse)
          {
            storeDisplaySingleDynamicResponse->remove_reference();
          }
        flagHasDisplaySingleDynamicResponse = false;
      }
    void setDisplayMultiDynamicResponse(DynamicResponseJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasDisplayMultiDynamicResponse)
          {
            storeDisplayMultiDynamicResponse->remove_reference();
          }
        flagHasDisplayMultiDynamicResponse = true;
        storeDisplayMultiDynamicResponse = new_value;
      }
    void unsetDisplayMultiDynamicResponse(void)
      {
        if (flagHasDisplayMultiDynamicResponse)
          {
            storeDisplayMultiDynamicResponse->remove_reference();
          }
        flagHasDisplayMultiDynamicResponse = false;
      }
    void setDisplayNoMatchDynamicResponse(DynamicResponseJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasDisplayNoMatchDynamicResponse)
          {
            storeDisplayNoMatchDynamicResponse->remove_reference();
          }
        flagHasDisplayNoMatchDynamicResponse = true;
        storeDisplayNoMatchDynamicResponse = new_value;
      }
    void unsetDisplayNoMatchDynamicResponse(void)
      {
        if (flagHasDisplayNoMatchDynamicResponse)
          {
            storeDisplayNoMatchDynamicResponse->remove_reference();
          }
        flagHasDisplayNoMatchDynamicResponse = false;
      }
    void setDisplayPartialMatchDynamicResponse(DynamicResponseJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasDisplayPartialMatchDynamicResponse)
          {
            storeDisplayPartialMatchDynamicResponse->remove_reference();
          }
        flagHasDisplayPartialMatchDynamicResponse = true;
        storeDisplayPartialMatchDynamicResponse = new_value;
      }
    void unsetDisplayPartialMatchDynamicResponse(void)
      {
        if (flagHasDisplayPartialMatchDynamicResponse)
          {
            storeDisplayPartialMatchDynamicResponse->remove_reference();
          }
        flagHasDisplayPartialMatchDynamicResponse = false;
      }

    virtual void extraTimerDisplayCommandAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraTimerDisplayCommandSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraTimerDisplayCommandLookup(key);
        if (old_field == NULL)
          {
            extraTimerDisplayCommandAppendPair(key, new_component);
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
                if (strncmp(&(key[1]), "isplay", 6) == 0)
                  {
                    switch ((unsigned char)(key[7]))
                      {
                        case 'A':
                            if (strcmp(&(key[8]), "llDynamicResponse") == 0)
                                {
                                fromJSONDisplayAllDynamicResponse(new_component, false);
                                return;
                                }
                            break;
                        case 'M':
                            if (strcmp(&(key[8]), "ultiDynamicResponse") == 0)
                                {
                                fromJSONDisplayMultiDynamicResponse(new_component, false);
                                return;
                                }
                            break;
                        case 'N':
                            if (strcmp(&(key[8]), "oMatchDynamicResponse") == 0)
                                {
                                fromJSONDisplayNoMatchDynamicResponse(new_component, false);
                                return;
                                }
                            break;
                        case 'P':
                            if (strcmp(&(key[8]), "artialMatchDynamicResponse") == 0)
                                {
                                fromJSONDisplayPartialMatchDynamicResponse(new_component, false);
                                return;
                                }
                            break;
                        case 'S':
                            if (strcmp(&(key[8]), "ingleDynamicResponse") == 0)
                                {
                                fromJSONDisplaySingleDynamicResponse(new_component, false);
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
        extraTimerDisplayCommandAppendPair(key, new_component);
      }
    void extraTimerCommandSetField(const char *key, JSONValue *new_component)
      {
        switch ((unsigned char)(key[0]))
          {
            case 'D':
                if (strncmp(&(key[1]), "isplay", 6) == 0)
                  {
                    switch ((unsigned char)(key[7]))
                      {
                        case 'A':
                            if (strcmp(&(key[8]), "llDynamicResponse") == 0)
                                {
                                fromJSONDisplayAllDynamicResponse(new_component, false);
                                return;
                                }
                            break;
                        case 'M':
                            if (strcmp(&(key[8]), "ultiDynamicResponse") == 0)
                                {
                                fromJSONDisplayMultiDynamicResponse(new_component, false);
                                return;
                                }
                            break;
                        case 'N':
                            if (strcmp(&(key[8]), "oMatchDynamicResponse") == 0)
                                {
                                fromJSONDisplayNoMatchDynamicResponse(new_component, false);
                                return;
                                }
                            break;
                        case 'P':
                            if (strcmp(&(key[8]), "artialMatchDynamicResponse") == 0)
                                {
                                fromJSONDisplayPartialMatchDynamicResponse(new_component, false);
                                return;
                                }
                            break;
                        case 'S':
                            if (strcmp(&(key[8]), "ingleDynamicResponse") == 0)
                                {
                                fromJSONDisplaySingleDynamicResponse(new_component, false);
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
        extraTimerDisplayCommandSetField(key, new_component);
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
        if (flagHasFutureSupportDynamicResponse)
          {
            handler->start_pair("FutureSupportDynamicResponse");
            storeFutureSupportDynamicResponse->write_as_json(handler);
          }
        if (flagHasDisplayAllDynamicResponse)
          {
            handler->start_pair("DisplayAllDynamicResponse");
            storeDisplayAllDynamicResponse->write_as_json(handler);
          }
        if (flagHasDisplaySingleDynamicResponse)
          {
            handler->start_pair("DisplaySingleDynamicResponse");
            storeDisplaySingleDynamicResponse->write_as_json(handler);
          }
        if (flagHasDisplayMultiDynamicResponse)
          {
            handler->start_pair("DisplayMultiDynamicResponse");
            storeDisplayMultiDynamicResponse->write_as_json(handler);
          }
        if (flagHasDisplayNoMatchDynamicResponse)
          {
            handler->start_pair("DisplayNoMatchDynamicResponse");
            storeDisplayNoMatchDynamicResponse->write_as_json(handler);
          }
        if (flagHasDisplayPartialMatchDynamicResponse)
          {
            handler->start_pair("DisplayPartialMatchDynamicResponse");
            storeDisplayPartialMatchDynamicResponse->write_as_json(handler);
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

    static TimerDisplayCommandJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static TimerDisplayCommandJSON *from_text(const char *text, bool ignore_extras = false)
      {
        TimerDisplayCommandJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<TimerDisplayCommandJSON>, TimerDisplayCommandJSON *, bool> generator("Type TimerDisplayCommand", ignore_extras);
            parse_json_value(text, "Text for TimerDisplayCommandJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static TimerDisplayCommandJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        TimerDisplayCommandJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<TimerDisplayCommandJSON>, TimerDisplayCommandJSON *, bool> generator("Type TimerDisplayCommand", ignore_extras);
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
        JSONHoldingGenerator<DynamicResponseJSON::Generator, RCHandle<DynamicResponseJSON>, DynamicResponseJSON *, bool > fieldGeneratorFutureSupportDynamicResponse;
        JSONHoldingGenerator<DynamicResponseJSON::Generator, RCHandle<DynamicResponseJSON>, DynamicResponseJSON *, bool > fieldGeneratorDisplayAllDynamicResponse;
        JSONHoldingGenerator<DynamicResponseJSON::Generator, RCHandle<DynamicResponseJSON>, DynamicResponseJSON *, bool > fieldGeneratorDisplaySingleDynamicResponse;
        JSONHoldingGenerator<DynamicResponseJSON::Generator, RCHandle<DynamicResponseJSON>, DynamicResponseJSON *, bool > fieldGeneratorDisplayMultiDynamicResponse;
        JSONHoldingGenerator<DynamicResponseJSON::Generator, RCHandle<DynamicResponseJSON>, DynamicResponseJSON *, bool > fieldGeneratorDisplayNoMatchDynamicResponse;
        JSONHoldingGenerator<DynamicResponseJSON::Generator, RCHandle<DynamicResponseJSON>, DynamicResponseJSON *, bool > fieldGeneratorDisplayPartialMatchDynamicResponse;
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
            if (!(strcmp(getTimerCommandJSONKey().c_str(), "TimerDisplayCommand") == 0))
                throw("The key field has a value other than `TimerDisplayCommand'.");
            TimerDisplayCommandJSON *result = new TimerDisplayCommandJSON();
            assert(result != NULL);
            RCHandle<TimerDisplayCommandJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraTimerDisplayCommandAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void handle_result(TimerCommandJSON *new_result)
          {
            handle_result((TimerDisplayCommandJSON *)new_result);
          }
        void finish(TimerDisplayCommandJSON *result)
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
            if (fieldGeneratorFutureSupportDynamicResponse.have_value)
              {
                result->setFutureSupportDynamicResponse(fieldGeneratorFutureSupportDynamicResponse.value.referenced());
                fieldGeneratorFutureSupportDynamicResponse.have_value = false;
              }
            if (fieldGeneratorDisplayAllDynamicResponse.have_value)
              {
                result->setDisplayAllDynamicResponse(fieldGeneratorDisplayAllDynamicResponse.value.referenced());
                fieldGeneratorDisplayAllDynamicResponse.have_value = false;
              }
            if (fieldGeneratorDisplaySingleDynamicResponse.have_value)
              {
                result->setDisplaySingleDynamicResponse(fieldGeneratorDisplaySingleDynamicResponse.value.referenced());
                fieldGeneratorDisplaySingleDynamicResponse.have_value = false;
              }
            if (fieldGeneratorDisplayMultiDynamicResponse.have_value)
              {
                result->setDisplayMultiDynamicResponse(fieldGeneratorDisplayMultiDynamicResponse.value.referenced());
                fieldGeneratorDisplayMultiDynamicResponse.have_value = false;
              }
            if (fieldGeneratorDisplayNoMatchDynamicResponse.have_value)
              {
                result->setDisplayNoMatchDynamicResponse(fieldGeneratorDisplayNoMatchDynamicResponse.value.referenced());
                fieldGeneratorDisplayNoMatchDynamicResponse.have_value = false;
              }
            if (fieldGeneratorDisplayPartialMatchDynamicResponse.have_value)
              {
                result->setDisplayPartialMatchDynamicResponse(fieldGeneratorDisplayPartialMatchDynamicResponse.value.referenced());
                fieldGeneratorDisplayPartialMatchDynamicResponse.have_value = false;
              }
            TimerCommandJSON::Generator::finish(result);
          }
        virtual void handle_result(TimerDisplayCommandJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'D':
                    if (strncmp(&(field_name[1]), "isplay", 6) == 0)
                      {
                        switch ((unsigned char)(field_name[7]))
                          {
                            case 'A':
                                if (strcmp(&(field_name[8]), "llDynamicResponse") == 0)
                                    return &fieldGeneratorDisplayAllDynamicResponse;
                                break;
                            case 'M':
                                if (strcmp(&(field_name[8]), "ultiDynamicResponse") == 0)
                                    return &fieldGeneratorDisplayMultiDynamicResponse;
                                break;
                            case 'N':
                                if (strcmp(&(field_name[8]), "oMatchDynamicResponse") == 0)
                                    return &fieldGeneratorDisplayNoMatchDynamicResponse;
                                break;
                            case 'P':
                                if (strcmp(&(field_name[8]), "artialMatchDynamicResponse") == 0)
                                    return &fieldGeneratorDisplayPartialMatchDynamicResponse;
                                break;
                            case 'S':
                                if (strcmp(&(field_name[8]), "ingleDynamicResponse") == 0)
                                    return &fieldGeneratorDisplaySingleDynamicResponse;
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
        Generator(bool ignore_extras = false) : TimerCommandJSON::Generator(ignore_extras), fieldGeneratorNativeData("field \"NativeData\" of the TimerDisplayCommand class", ignore_extras), fieldGeneratorFutureSupportDynamicResponse("field \"FutureSupportDynamicResponse\" of the TimerDisplayCommand class", ignore_extras), fieldGeneratorDisplayAllDynamicResponse("field \"DisplayAllDynamicResponse\" of the TimerDisplayCommand class", ignore_extras), fieldGeneratorDisplaySingleDynamicResponse("field \"DisplaySingleDynamicResponse\" of the TimerDisplayCommand class", ignore_extras), fieldGeneratorDisplayMultiDynamicResponse("field \"DisplayMultiDynamicResponse\" of the TimerDisplayCommand class", ignore_extras), fieldGeneratorDisplayNoMatchDynamicResponse("field \"DisplayNoMatchDynamicResponse\" of the TimerDisplayCommand class", ignore_extras), fieldGeneratorDisplayPartialMatchDynamicResponse("field \"DisplayPartialMatchDynamicResponse\" of the TimerDisplayCommand class", ignore_extras), unknownFieldGenerator(ignore_extras)
          {
            set_what("the TimerDisplayCommand class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorNativeData.reset();
            fieldGeneratorFutureSupportDynamicResponse.reset();
            fieldGeneratorDisplayAllDynamicResponse.reset();
            fieldGeneratorDisplaySingleDynamicResponse.reset();
            fieldGeneratorDisplayMultiDynamicResponse.reset();
            fieldGeneratorDisplayNoMatchDynamicResponse.reset();
            fieldGeneratorDisplayPartialMatchDynamicResponse.reset();
            TimerCommandJSON::Generator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* TIMERDISPLAYCOMMANDJSON_H */
