/* file "CancelCalendarItemCommandJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef CANCELCALENDARITEMCOMMANDJSON_H
#define CANCELCALENDARITEMCOMMANDJSON_H

#pragma interface

#include "CalendarCommandJSON.h"
#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONHoldingArrayGenerator.h"
#include "JSONStringGenerator.h"
#include <vector>
#include <string>
#include "CalendarQueryJSON.h"
#include "CalendarQueryJSON.h"
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


class CancelCalendarItemCommandJSON : public CalendarCommandJSON
  {
  public:
    class TypeNativeDataJSON : public ReferenceCounted
      {
      private:
        bool flagHasEventIDs;
        std::vector< std::string > storeEventIDs;
        bool flagHasQuery;
        CalendarQueryJSON * storeQuery;
        std::vector<std::string> extraKeys;
        std::vector<JSONValue *> extraValues;
        string_index *extraIndex;

        TypeNativeDataJSON(const TypeNativeDataJSON &);
        TypeNativeDataJSON & operator=(const TypeNativeDataJSON &other);

        void  fromJSONEventIDs(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONQuery(JSONValue *json_value, bool ignore_extras = false);


      public:
        TypeNativeDataJSON(void);
        virtual ~TypeNativeDataJSON(void);
        bool  hasEventIDs(void) const;
        size_t  countOfEventIDs(void) const;
        std::string  elementOfEventIDs(size_t element_num);
        const std::string  elementOfEventIDs(size_t element_num) const;
        std::vector< std::string >  getEventIDs(void);
        const std::vector< std::string >  getEventIDs(void) const;
        bool  hasQuery(void) const;
        CalendarQueryJSON *  getQuery(void);
        const CalendarQueryJSON *  getQuery(void) const;

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

        void initEventIDs(void)
          {
            flagHasEventIDs = true;
            storeEventIDs.clear();
          }
        void appendEventIDs(std::string to_append)
          {
            if (!flagHasEventIDs)
              {
                flagHasEventIDs = true;
                storeEventIDs.clear();
              }
            assert(flagHasEventIDs);
            storeEventIDs.push_back(to_append);
          }
        void unsetEventIDs(void)
          {
            flagHasEventIDs = false;
            storeEventIDs.clear();
          }
        void setQuery(CalendarQueryJSON * new_value)
          {
            new_value->add_reference();
            if (flagHasQuery)
              {
                storeQuery->remove_reference();
              }
            flagHasQuery = true;
            storeQuery = new_value;
          }
        void unsetQuery(void)
          {
            if (flagHasQuery)
              {
                storeQuery->remove_reference();
              }
            flagHasQuery = false;
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
            if (flagHasEventIDs)
              {
                handler->start_pair("EventIDs");
                assert(storeEventIDs.size() >= 1);
                handler->start_array();
                for (size_t num1 = 0; num1 < storeEventIDs.size(); ++num1)
                  {
                    handler->string_value(storeEventIDs[num1]);
                  }
                handler->finish_array();
              }
            if (flagHasQuery)
              {
                handler->start_pair("Query");
                storeQuery->write_as_json(handler);
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
            JSONHoldingArrayGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorEventIDs;
            JSONHoldingGenerator<CalendarQueryJSON::Generator, RCHandle<CalendarQueryJSON>, CalendarQueryJSON *, bool > fieldGeneratorQuery;
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
                if (fieldGeneratorEventIDs.have_value)
                  {
                    result->initEventIDs();
                    size_t count = fieldGeneratorEventIDs.value.size();
                    for (size_t num = 0; num < count; ++num)
                      {
                        result->appendEventIDs(fieldGeneratorEventIDs.value[num]);
                      }
                    fieldGeneratorEventIDs.value.clear();
                    fieldGeneratorEventIDs.have_value = false;
                  }
                if (fieldGeneratorQuery.have_value)
                  {
                    result->setQuery(fieldGeneratorQuery.value.referenced());
                    fieldGeneratorQuery.have_value = false;
                  }
              }
            virtual void handle_result(TypeNativeDataJSON *new_result) = 0;
            virtual JSONHandler *start_known_field(const char *field_name)
              {
                switch ((unsigned char)(field_name[0]))
                  {
                    case 'E':
                        if (strcmp(&(field_name[1]), "ventIDs") == 0)
                            return &fieldGeneratorEventIDs;
                        break;
                    case 'Q':
                        if (strcmp(&(field_name[1]), "uery") == 0)
                            return &fieldGeneratorQuery;
                        break;
                    default:
                        break;
                  }
                return NULL;
              }

          public:
            Generator(bool ignore_extras = false) : fieldGeneratorEventIDs("field \"EventIDs\" of the TypeNativeData class"), fieldGeneratorQuery("field \"Query\" of the TypeNativeData class", ignore_extras), unknownFieldGenerator(ignore_extras)
              {
                set_what("the TypeNativeData class");
              }
            ~Generator(void)
              {
              }

            void reset(void)
              {
                fieldGeneratorEventIDs.reset();
                fieldGeneratorQuery.reset();
                JSONObjectGenerator::reset();
                unknownFieldGenerator.reset();
              }
          };
      };

  private:
    bool flagHasEventIDs;
    std::vector< std::string > storeEventIDs;
    bool flagHasQuery;
    CalendarQueryJSON * storeQuery;
    bool flagHasNativeData;
    TypeNativeDataJSON * storeNativeData;
    bool flagHasCalendarPreferenceIsNotSetResult;
    DynamicResponseJSON * storeCalendarPreferenceIsNotSetResult;
    bool flagHasNoMatchResult;
    DynamicResponseJSON * storeNoMatchResult;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    CancelCalendarItemCommandJSON(const CancelCalendarItemCommandJSON &);
    CancelCalendarItemCommandJSON & operator=(const CancelCalendarItemCommandJSON &other);

    JSONValue * extraEventIDsToJSON(void) const;
    JSONValue * extraQueryToJSON(void) const;
    JSONValue * extraNativeDataToJSON(void) const;
    JSONValue * extraCalendarPreferenceIsNotSetResultToJSON(void) const;
    JSONValue * extraNoMatchResultToJSON(void) const;

    void  fromJSONEventIDs(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONQuery(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONNativeData(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONCalendarPreferenceIsNotSetResult(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONNoMatchResult(JSONValue *json_value, bool ignore_extras = false);


  public:
    CancelCalendarItemCommandJSON(void);
    virtual ~CancelCalendarItemCommandJSON(void);
    const char * getCalendarCommandKind(void) const;
    bool  hasEventIDs(void) const;
    size_t  countOfEventIDs(void) const;
    std::string  elementOfEventIDs(size_t element_num);
    const std::string  elementOfEventIDs(size_t element_num) const;
    std::vector< std::string >  getEventIDs(void);
    const std::vector< std::string >  getEventIDs(void) const;
    bool  hasQuery(void) const;
    CalendarQueryJSON *  getQuery(void);
    const CalendarQueryJSON *  getQuery(void) const;
    bool  hasNativeData(void) const;
    TypeNativeDataJSON *  getNativeData(void);
    const TypeNativeDataJSON *  getNativeData(void) const;
    bool  hasCalendarPreferenceIsNotSetResult(void) const;
    DynamicResponseJSON *  getCalendarPreferenceIsNotSetResult(void);
    const DynamicResponseJSON *  getCalendarPreferenceIsNotSetResult(void) const;
    bool  hasNoMatchResult(void) const;
    DynamicResponseJSON *  getNoMatchResult(void);
    const DynamicResponseJSON *  getNoMatchResult(void) const;

    virtual size_t extraCancelCalendarItemCommandComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraCancelCalendarItemCommandComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraCancelCalendarItemCommandComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraCancelCalendarItemCommandComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraCancelCalendarItemCommandLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraCancelCalendarItemCommandLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    size_t extraCalendarCommandComponentCount(void) const
      {
        size_t result = 0;
        if (flagHasEventIDs)
            ++result;
        if (flagHasQuery)
            ++result;
        if (flagHasNativeData)
            ++result;
        if (flagHasCalendarPreferenceIsNotSetResult)
            ++result;
        if (flagHasNoMatchResult)
            ++result;
        result += extraCancelCalendarItemCommandComponentCount();
        return result;
      }
    const char *extraCalendarCommandComponentKey(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasEventIDs)
          {
            if (remainder == 0)
                return "EventIDs";
            --remainder;
          }
        if (flagHasQuery)
          {
            if (remainder == 0)
                return "Query";
            --remainder;
          }
        if (flagHasNativeData)
          {
            if (remainder == 0)
                return "NativeData";
            --remainder;
          }
        if (flagHasCalendarPreferenceIsNotSetResult)
          {
            if (remainder == 0)
                return "CalendarPreferenceIsNotSetResult";
            --remainder;
          }
        if (flagHasNoMatchResult)
          {
            if (remainder == 0)
                return "NoMatchResult";
            --remainder;
          }
        return extraCancelCalendarItemCommandComponentKey(remainder);
      }
    JSONValue *extraCalendarCommandComponentValue(size_t component_num)
      {
        size_t remainder = component_num;
        if (flagHasEventIDs)
          {
            if (remainder == 0)
                return extraEventIDsToJSON();
            --remainder;
          }
        if (flagHasQuery)
          {
            if (remainder == 0)
                return extraQueryToJSON();
            --remainder;
          }
        if (flagHasNativeData)
          {
            if (remainder == 0)
                return extraNativeDataToJSON();
            --remainder;
          }
        if (flagHasCalendarPreferenceIsNotSetResult)
          {
            if (remainder == 0)
                return extraCalendarPreferenceIsNotSetResultToJSON();
            --remainder;
          }
        if (flagHasNoMatchResult)
          {
            if (remainder == 0)
                return extraNoMatchResultToJSON();
            --remainder;
          }
        return extraCancelCalendarItemCommandComponentValue(remainder);
      }
    const JSONValue *extraCalendarCommandComponentValue(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasEventIDs)
          {
            if (remainder == 0)
                return extraEventIDsToJSON();
            --remainder;
          }
        if (flagHasQuery)
          {
            if (remainder == 0)
                return extraQueryToJSON();
            --remainder;
          }
        if (flagHasNativeData)
          {
            if (remainder == 0)
                return extraNativeDataToJSON();
            --remainder;
          }
        if (flagHasCalendarPreferenceIsNotSetResult)
          {
            if (remainder == 0)
                return extraCalendarPreferenceIsNotSetResultToJSON();
            --remainder;
          }
        if (flagHasNoMatchResult)
          {
            if (remainder == 0)
                return extraNoMatchResultToJSON();
            --remainder;
          }
        return extraCancelCalendarItemCommandComponentValue(remainder);
      }
    JSONValue *extraCalendarCommandLookup(const char *field_name)
      {
        switch ((unsigned char)(field_name[0]))
          {
            case 'C':
                if (strcmp(&(field_name[1]), "alendarPreferenceIsNotSetResult") == 0)
                    return (flagHasCalendarPreferenceIsNotSetResult ? extraCalendarPreferenceIsNotSetResultToJSON() : NULL);
                break;
            case 'E':
                if (strcmp(&(field_name[1]), "ventIDs") == 0)
                    return (flagHasEventIDs ? extraEventIDsToJSON() : NULL);
                break;
            case 'N':
                switch ((unsigned char)(field_name[1]))
                  {
                    case 'a':
                        if (strcmp(&(field_name[2]), "tiveData") == 0)
                            return (flagHasNativeData ? extraNativeDataToJSON() : NULL);
                        break;
                    case 'o':
                        if (strcmp(&(field_name[2]), "MatchResult") == 0)
                            return (flagHasNoMatchResult ? extraNoMatchResultToJSON() : NULL);
                        break;
                    default:
                        break;
                  }
                break;
            case 'Q':
                if (strcmp(&(field_name[1]), "uery") == 0)
                    return (flagHasQuery ? extraQueryToJSON() : NULL);
                break;
            default:
                break;
          }
        return extraCancelCalendarItemCommandLookup(field_name);
      }
    const JSONValue *extraCalendarCommandLookup(const char *field_name) const
      {
        switch ((unsigned char)(field_name[0]))
          {
            case 'C':
                if (strcmp(&(field_name[1]), "alendarPreferenceIsNotSetResult") == 0)
                    return (flagHasCalendarPreferenceIsNotSetResult ? extraCalendarPreferenceIsNotSetResultToJSON() : NULL);
                break;
            case 'E':
                if (strcmp(&(field_name[1]), "ventIDs") == 0)
                    return (flagHasEventIDs ? extraEventIDsToJSON() : NULL);
                break;
            case 'N':
                switch ((unsigned char)(field_name[1]))
                  {
                    case 'a':
                        if (strcmp(&(field_name[2]), "tiveData") == 0)
                            return (flagHasNativeData ? extraNativeDataToJSON() : NULL);
                        break;
                    case 'o':
                        if (strcmp(&(field_name[2]), "MatchResult") == 0)
                            return (flagHasNoMatchResult ? extraNoMatchResultToJSON() : NULL);
                        break;
                    default:
                        break;
                  }
                break;
            case 'Q':
                if (strcmp(&(field_name[1]), "uery") == 0)
                    return (flagHasQuery ? extraQueryToJSON() : NULL);
                break;
            default:
                break;
          }
        return extraCancelCalendarItemCommandLookup(field_name);
      }

    void initEventIDs(void)
      {
        flagHasEventIDs = true;
        storeEventIDs.clear();
      }
    void appendEventIDs(std::string to_append)
      {
        if (!flagHasEventIDs)
          {
            flagHasEventIDs = true;
            storeEventIDs.clear();
          }
        assert(flagHasEventIDs);
        storeEventIDs.push_back(to_append);
      }
    void unsetEventIDs(void)
      {
        flagHasEventIDs = false;
        storeEventIDs.clear();
      }
    void setQuery(CalendarQueryJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasQuery)
          {
            storeQuery->remove_reference();
          }
        flagHasQuery = true;
        storeQuery = new_value;
      }
    void unsetQuery(void)
      {
        if (flagHasQuery)
          {
            storeQuery->remove_reference();
          }
        flagHasQuery = false;
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
    void setCalendarPreferenceIsNotSetResult(DynamicResponseJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasCalendarPreferenceIsNotSetResult)
          {
            storeCalendarPreferenceIsNotSetResult->remove_reference();
          }
        flagHasCalendarPreferenceIsNotSetResult = true;
        storeCalendarPreferenceIsNotSetResult = new_value;
      }
    void unsetCalendarPreferenceIsNotSetResult(void)
      {
        if (flagHasCalendarPreferenceIsNotSetResult)
          {
            storeCalendarPreferenceIsNotSetResult->remove_reference();
          }
        flagHasCalendarPreferenceIsNotSetResult = false;
      }
    void setNoMatchResult(DynamicResponseJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasNoMatchResult)
          {
            storeNoMatchResult->remove_reference();
          }
        flagHasNoMatchResult = true;
        storeNoMatchResult = new_value;
      }
    void unsetNoMatchResult(void)
      {
        if (flagHasNoMatchResult)
          {
            storeNoMatchResult->remove_reference();
          }
        flagHasNoMatchResult = false;
      }

    virtual void extraCancelCalendarItemCommandAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraCancelCalendarItemCommandSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraCancelCalendarItemCommandLookup(key);
        if (old_field == NULL)
          {
            extraCancelCalendarItemCommandAppendPair(key, new_component);
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
    void extraCalendarCommandAppendPair(const char *key, JSONValue *new_component)
      {
        switch ((unsigned char)(key[0]))
          {
            case 'C':
                if (strcmp(&(key[1]), "alendarPreferenceIsNotSetResult") == 0)
                    {
                    fromJSONCalendarPreferenceIsNotSetResult(new_component, false);
                    return;
                    }
                break;
            case 'E':
                if (strcmp(&(key[1]), "ventIDs") == 0)
                    {
                    fromJSONEventIDs(new_component, false);
                    return;
                    }
                break;
            case 'N':
                switch ((unsigned char)(key[1]))
                  {
                    case 'a':
                        if (strcmp(&(key[2]), "tiveData") == 0)
                            {
                            fromJSONNativeData(new_component, false);
                            return;
                            }
                        break;
                    case 'o':
                        if (strcmp(&(key[2]), "MatchResult") == 0)
                            {
                            fromJSONNoMatchResult(new_component, false);
                            return;
                            }
                        break;
                    default:
                        break;
                  }
                break;
            case 'Q':
                if (strcmp(&(key[1]), "uery") == 0)
                    {
                    fromJSONQuery(new_component, false);
                    return;
                    }
                break;
            default:
                break;
          }
        extraCancelCalendarItemCommandAppendPair(key, new_component);
      }
    void extraCalendarCommandSetField(const char *key, JSONValue *new_component)
      {
        switch ((unsigned char)(key[0]))
          {
            case 'C':
                if (strcmp(&(key[1]), "alendarPreferenceIsNotSetResult") == 0)
                    {
                    fromJSONCalendarPreferenceIsNotSetResult(new_component, false);
                    return;
                    }
                break;
            case 'E':
                if (strcmp(&(key[1]), "ventIDs") == 0)
                    {
                    fromJSONEventIDs(new_component, false);
                    return;
                    }
                break;
            case 'N':
                switch ((unsigned char)(key[1]))
                  {
                    case 'a':
                        if (strcmp(&(key[2]), "tiveData") == 0)
                            {
                            fromJSONNativeData(new_component, false);
                            return;
                            }
                        break;
                    case 'o':
                        if (strcmp(&(key[2]), "MatchResult") == 0)
                            {
                            fromJSONNoMatchResult(new_component, false);
                            return;
                            }
                        break;
                    default:
                        break;
                  }
                break;
            case 'Q':
                if (strcmp(&(key[1]), "uery") == 0)
                    {
                    fromJSONQuery(new_component, false);
                    return;
                    }
                break;
            default:
                break;
          }
        extraCancelCalendarItemCommandSetField(key, new_component);
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
        CalendarCommandJSON::write_fields_as_json(handler);
        if (flagHasEventIDs)
          {
            handler->start_pair("EventIDs");
            assert(storeEventIDs.size() >= 1);
            handler->start_array();
            for (size_t num1 = 0; num1 < storeEventIDs.size(); ++num1)
              {
                handler->string_value(storeEventIDs[num1]);
              }
            handler->finish_array();
          }
        if (flagHasQuery)
          {
            handler->start_pair("Query");
            storeQuery->write_as_json(handler);
          }
        if (flagHasNativeData)
          {
            handler->start_pair("NativeData");
            storeNativeData->write_as_json(handler);
          }
        if (flagHasCalendarPreferenceIsNotSetResult)
          {
            handler->start_pair("CalendarPreferenceIsNotSetResult");
            storeCalendarPreferenceIsNotSetResult->write_as_json(handler);
          }
        if (flagHasNoMatchResult)
          {
            handler->start_pair("NoMatchResult");
            storeNoMatchResult->write_as_json(handler);
          }
      }
    virtual const char *missing_field_error(void) const
      {
        return NULL;
      }

    static CancelCalendarItemCommandJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static CancelCalendarItemCommandJSON *from_text(const char *text, bool ignore_extras = false)
      {
        CancelCalendarItemCommandJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<CancelCalendarItemCommandJSON>, CancelCalendarItemCommandJSON *, bool> generator("Type CancelCalendarItemCommand", ignore_extras);
            parse_json_value(text, "Text for CancelCalendarItemCommandJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static CancelCalendarItemCommandJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        CancelCalendarItemCommandJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<CancelCalendarItemCommandJSON>, CancelCalendarItemCommandJSON *, bool> generator("Type CancelCalendarItemCommand", ignore_extras);
            parse_json_value(fp, file_name, &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    class Generator : public CalendarCommandJSON::Generator
      {
      private:
        JSONHoldingArrayGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorEventIDs;
        JSONHoldingGenerator<CalendarQueryJSON::Generator, RCHandle<CalendarQueryJSON>, CalendarQueryJSON *, bool > fieldGeneratorQuery;
        JSONHoldingGenerator<TypeNativeDataJSON::Generator, RCHandle<TypeNativeDataJSON>, TypeNativeDataJSON *, bool > fieldGeneratorNativeData;
        JSONHoldingGenerator<DynamicResponseJSON::Generator, RCHandle<DynamicResponseJSON>, DynamicResponseJSON *, bool > fieldGeneratorCalendarPreferenceIsNotSetResult;
        JSONHoldingGenerator<DynamicResponseJSON::Generator, RCHandle<DynamicResponseJSON>, DynamicResponseJSON *, bool > fieldGeneratorNoMatchResult;
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
            if (!(strcmp(getCalendarCommandJSONKey().c_str(), "CancelItem") == 0))
                throw("The key field has a value other than `CancelItem'.");
            CancelCalendarItemCommandJSON *result = new CancelCalendarItemCommandJSON();
            assert(result != NULL);
            RCHandle<CancelCalendarItemCommandJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraCancelCalendarItemCommandAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void handle_result(CalendarCommandJSON *new_result)
          {
            handle_result((CancelCalendarItemCommandJSON *)new_result);
          }
        void finish(CancelCalendarItemCommandJSON *result)
          {
            if (fieldGeneratorEventIDs.have_value)
              {
                result->initEventIDs();
                size_t count = fieldGeneratorEventIDs.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendEventIDs(fieldGeneratorEventIDs.value[num]);
                  }
                fieldGeneratorEventIDs.value.clear();
                fieldGeneratorEventIDs.have_value = false;
              }
            if (fieldGeneratorQuery.have_value)
              {
                result->setQuery(fieldGeneratorQuery.value.referenced());
                fieldGeneratorQuery.have_value = false;
              }
            if (fieldGeneratorNativeData.have_value)
              {
                result->setNativeData(fieldGeneratorNativeData.value.referenced());
                fieldGeneratorNativeData.have_value = false;
              }
            if (fieldGeneratorCalendarPreferenceIsNotSetResult.have_value)
              {
                result->setCalendarPreferenceIsNotSetResult(fieldGeneratorCalendarPreferenceIsNotSetResult.value.referenced());
                fieldGeneratorCalendarPreferenceIsNotSetResult.have_value = false;
              }
            if (fieldGeneratorNoMatchResult.have_value)
              {
                result->setNoMatchResult(fieldGeneratorNoMatchResult.value.referenced());
                fieldGeneratorNoMatchResult.have_value = false;
              }
            CalendarCommandJSON::Generator::finish(result);
          }
        virtual void handle_result(CancelCalendarItemCommandJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'C':
                    if (strcmp(&(field_name[1]), "alendarPreferenceIsNotSetResult") == 0)
                        return &fieldGeneratorCalendarPreferenceIsNotSetResult;
                    break;
                case 'E':
                    if (strcmp(&(field_name[1]), "ventIDs") == 0)
                        return &fieldGeneratorEventIDs;
                    break;
                case 'N':
                    switch ((unsigned char)(field_name[1]))
                      {
                        case 'a':
                            if (strcmp(&(field_name[2]), "tiveData") == 0)
                                return &fieldGeneratorNativeData;
                            break;
                        case 'o':
                            if (strcmp(&(field_name[2]), "MatchResult") == 0)
                                return &fieldGeneratorNoMatchResult;
                            break;
                        default:
                            break;
                      }
                    break;
                case 'Q':
                    if (strcmp(&(field_name[1]), "uery") == 0)
                        return &fieldGeneratorQuery;
                    break;
                default:
                    break;
              }
            return CalendarCommandJSON::Generator::start_known_field(field_name);
          }

      public:
        Generator(bool ignore_extras = false) : CalendarCommandJSON::Generator(ignore_extras), fieldGeneratorEventIDs("field \"EventIDs\" of the CancelCalendarItemCommand class"), fieldGeneratorQuery("field \"Query\" of the CancelCalendarItemCommand class", ignore_extras), fieldGeneratorNativeData("field \"NativeData\" of the CancelCalendarItemCommand class", ignore_extras), fieldGeneratorCalendarPreferenceIsNotSetResult("field \"CalendarPreferenceIsNotSetResult\" of the CancelCalendarItemCommand class", ignore_extras), fieldGeneratorNoMatchResult("field \"NoMatchResult\" of the CancelCalendarItemCommand class", ignore_extras), unknownFieldGenerator(ignore_extras)
          {
            set_what("the CancelCalendarItemCommand class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorEventIDs.reset();
            fieldGeneratorQuery.reset();
            fieldGeneratorNativeData.reset();
            fieldGeneratorCalendarPreferenceIsNotSetResult.reset();
            fieldGeneratorNoMatchResult.reset();
            CalendarCommandJSON::Generator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* CANCELCALENDARITEMCOMMANDJSON_H */
