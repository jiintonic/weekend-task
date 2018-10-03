/* file "SportsOlympicsEventSchedulesAndResultsInformationNuggetJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef SPORTSOLYMPICSEVENTSCHEDULESANDRESULTSINFORMATIONNUGGETJSON_H
#define SPORTSOLYMPICSEVENTSCHEDULESANDRESULTSINFORMATIONNUGGETJSON_H

#pragma interface

#include "SportsOlympicsInformationNuggetJSON.h"
#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONHoldingArrayGenerator.h"
#include <vector>
#include "SportsOlympicsEventSchedulesAndResultsQueryComponentJSON.h"
#include "SportsOlympicsEventSchedulesAndResultsQueryResultJSON.h"
#include "SportsOlympicsEventSchedulesAndResultsInstanceJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class SportsOlympicsEventSchedulesAndResultsInformationNuggetJSON : public SportsOlympicsInformationNuggetJSON
  {
  private:
    bool flagHasQueryComponents;
    std::vector< SportsOlympicsEventSchedulesAndResultsQueryComponentJSON * > storeQueryComponents;
    bool flagHasQueryResults;
    std::vector< SportsOlympicsEventSchedulesAndResultsQueryResultJSON * > storeQueryResults;
    bool flagHasEventInstances;
    std::vector< SportsOlympicsEventSchedulesAndResultsInstanceJSON * > storeEventInstances;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    SportsOlympicsEventSchedulesAndResultsInformationNuggetJSON(const SportsOlympicsEventSchedulesAndResultsInformationNuggetJSON &);
    SportsOlympicsEventSchedulesAndResultsInformationNuggetJSON & operator=(const SportsOlympicsEventSchedulesAndResultsInformationNuggetJSON &other);

    JSONValue * extraQueryComponentsToJSON(void) const;
    JSONValue * extraQueryResultsToJSON(void) const;
    JSONValue * extraEventInstancesToJSON(void) const;

    void  fromJSONQueryComponents(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONQueryResults(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONEventInstances(JSONValue *json_value, bool ignore_extras = false);


  public:
    SportsOlympicsEventSchedulesAndResultsInformationNuggetJSON(void);
    virtual ~SportsOlympicsEventSchedulesAndResultsInformationNuggetJSON(void);
    const char * getSportsOlympicsInformationNuggetKind(void) const;
    bool  hasQueryComponents(void) const;
    size_t  countOfQueryComponents(void) const;
    SportsOlympicsEventSchedulesAndResultsQueryComponentJSON *  elementOfQueryComponents(size_t element_num);
    const SportsOlympicsEventSchedulesAndResultsQueryComponentJSON *  elementOfQueryComponents(size_t element_num) const;
    std::vector< SportsOlympicsEventSchedulesAndResultsQueryComponentJSON * >  getQueryComponents(void);
    const std::vector< SportsOlympicsEventSchedulesAndResultsQueryComponentJSON * >  getQueryComponents(void) const;
    bool  hasQueryResults(void) const;
    size_t  countOfQueryResults(void) const;
    SportsOlympicsEventSchedulesAndResultsQueryResultJSON *  elementOfQueryResults(size_t element_num);
    const SportsOlympicsEventSchedulesAndResultsQueryResultJSON *  elementOfQueryResults(size_t element_num) const;
    std::vector< SportsOlympicsEventSchedulesAndResultsQueryResultJSON * >  getQueryResults(void);
    const std::vector< SportsOlympicsEventSchedulesAndResultsQueryResultJSON * >  getQueryResults(void) const;
    bool  hasEventInstances(void) const;
    size_t  countOfEventInstances(void) const;
    SportsOlympicsEventSchedulesAndResultsInstanceJSON *  elementOfEventInstances(size_t element_num);
    const SportsOlympicsEventSchedulesAndResultsInstanceJSON *  elementOfEventInstances(size_t element_num) const;
    std::vector< SportsOlympicsEventSchedulesAndResultsInstanceJSON * >  getEventInstances(void);
    const std::vector< SportsOlympicsEventSchedulesAndResultsInstanceJSON * >  getEventInstances(void) const;

    virtual size_t extraSportsOlympicsEventSchedulesAndResultsInformationNuggetComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraSportsOlympicsEventSchedulesAndResultsInformationNuggetComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraSportsOlympicsEventSchedulesAndResultsInformationNuggetComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraSportsOlympicsEventSchedulesAndResultsInformationNuggetComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraSportsOlympicsEventSchedulesAndResultsInformationNuggetLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraSportsOlympicsEventSchedulesAndResultsInformationNuggetLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    size_t extraSportsOlympicsInformationNuggetComponentCount(void) const
      {
        size_t result = 0;
        if (flagHasQueryComponents)
            ++result;
        if (flagHasQueryResults)
            ++result;
        if (flagHasEventInstances)
            ++result;
        result += extraSportsOlympicsEventSchedulesAndResultsInformationNuggetComponentCount();
        return result;
      }
    const char *extraSportsOlympicsInformationNuggetComponentKey(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasQueryComponents)
          {
            if (remainder == 0)
                return "QueryComponents";
            --remainder;
          }
        if (flagHasQueryResults)
          {
            if (remainder == 0)
                return "QueryResults";
            --remainder;
          }
        if (flagHasEventInstances)
          {
            if (remainder == 0)
                return "EventInstances";
            --remainder;
          }
        return extraSportsOlympicsEventSchedulesAndResultsInformationNuggetComponentKey(remainder);
      }
    JSONValue *extraSportsOlympicsInformationNuggetComponentValue(size_t component_num)
      {
        size_t remainder = component_num;
        if (flagHasQueryComponents)
          {
            if (remainder == 0)
                return extraQueryComponentsToJSON();
            --remainder;
          }
        if (flagHasQueryResults)
          {
            if (remainder == 0)
                return extraQueryResultsToJSON();
            --remainder;
          }
        if (flagHasEventInstances)
          {
            if (remainder == 0)
                return extraEventInstancesToJSON();
            --remainder;
          }
        return extraSportsOlympicsEventSchedulesAndResultsInformationNuggetComponentValue(remainder);
      }
    const JSONValue *extraSportsOlympicsInformationNuggetComponentValue(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasQueryComponents)
          {
            if (remainder == 0)
                return extraQueryComponentsToJSON();
            --remainder;
          }
        if (flagHasQueryResults)
          {
            if (remainder == 0)
                return extraQueryResultsToJSON();
            --remainder;
          }
        if (flagHasEventInstances)
          {
            if (remainder == 0)
                return extraEventInstancesToJSON();
            --remainder;
          }
        return extraSportsOlympicsEventSchedulesAndResultsInformationNuggetComponentValue(remainder);
      }
    JSONValue *extraSportsOlympicsInformationNuggetLookup(const char *field_name)
      {
        switch ((unsigned char)(field_name[0]))
          {
            case 'E':
                if (strcmp(&(field_name[1]), "ventInstances") == 0)
                    return (flagHasEventInstances ? extraEventInstancesToJSON() : NULL);
                break;
            case 'Q':
                if (strncmp(&(field_name[1]), "uery", 4) == 0)
                  {
                    switch ((unsigned char)(field_name[5]))
                      {
                        case 'C':
                            if (strcmp(&(field_name[6]), "omponents") == 0)
                                return (flagHasQueryComponents ? extraQueryComponentsToJSON() : NULL);
                            break;
                        case 'R':
                            if (strcmp(&(field_name[6]), "esults") == 0)
                                return (flagHasQueryResults ? extraQueryResultsToJSON() : NULL);
                            break;
                        default:
                            break;
                      }
                  }
                break;
            default:
                break;
          }
        return extraSportsOlympicsEventSchedulesAndResultsInformationNuggetLookup(field_name);
      }
    const JSONValue *extraSportsOlympicsInformationNuggetLookup(const char *field_name) const
      {
        switch ((unsigned char)(field_name[0]))
          {
            case 'E':
                if (strcmp(&(field_name[1]), "ventInstances") == 0)
                    return (flagHasEventInstances ? extraEventInstancesToJSON() : NULL);
                break;
            case 'Q':
                if (strncmp(&(field_name[1]), "uery", 4) == 0)
                  {
                    switch ((unsigned char)(field_name[5]))
                      {
                        case 'C':
                            if (strcmp(&(field_name[6]), "omponents") == 0)
                                return (flagHasQueryComponents ? extraQueryComponentsToJSON() : NULL);
                            break;
                        case 'R':
                            if (strcmp(&(field_name[6]), "esults") == 0)
                                return (flagHasQueryResults ? extraQueryResultsToJSON() : NULL);
                            break;
                        default:
                            break;
                      }
                  }
                break;
            default:
                break;
          }
        return extraSportsOlympicsEventSchedulesAndResultsInformationNuggetLookup(field_name);
      }

    void initQueryComponents(void)
      {
        if (flagHasQueryComponents)
          {
            for (size_t num4 = 0; num4 < storeQueryComponents.size(); ++num4)
              {
                storeQueryComponents[num4]->remove_reference();
              }
          }
        flagHasQueryComponents = true;
        storeQueryComponents.clear();
      }
    void appendQueryComponents(SportsOlympicsEventSchedulesAndResultsQueryComponentJSON * to_append)
      {
        if (!flagHasQueryComponents)
          {
            flagHasQueryComponents = true;
            storeQueryComponents.clear();
          }
        assert(flagHasQueryComponents);
        to_append->add_reference();
        storeQueryComponents.push_back(to_append);
      }
    void unsetQueryComponents(void)
      {
        if (flagHasQueryComponents)
          {
            for (size_t num5 = 0; num5 < storeQueryComponents.size(); ++num5)
              {
                storeQueryComponents[num5]->remove_reference();
              }
          }
        flagHasQueryComponents = false;
        storeQueryComponents.clear();
      }
    void initQueryResults(void)
      {
        if (flagHasQueryResults)
          {
            for (size_t num6 = 0; num6 < storeQueryResults.size(); ++num6)
              {
                storeQueryResults[num6]->remove_reference();
              }
          }
        flagHasQueryResults = true;
        storeQueryResults.clear();
      }
    void appendQueryResults(SportsOlympicsEventSchedulesAndResultsQueryResultJSON * to_append)
      {
        if (!flagHasQueryResults)
          {
            flagHasQueryResults = true;
            storeQueryResults.clear();
          }
        assert(flagHasQueryResults);
        to_append->add_reference();
        storeQueryResults.push_back(to_append);
      }
    void unsetQueryResults(void)
      {
        if (flagHasQueryResults)
          {
            for (size_t num7 = 0; num7 < storeQueryResults.size(); ++num7)
              {
                storeQueryResults[num7]->remove_reference();
              }
          }
        flagHasQueryResults = false;
        storeQueryResults.clear();
      }
    void initEventInstances(void)
      {
        if (flagHasEventInstances)
          {
            for (size_t num8 = 0; num8 < storeEventInstances.size(); ++num8)
              {
                storeEventInstances[num8]->remove_reference();
              }
          }
        flagHasEventInstances = true;
        storeEventInstances.clear();
      }
    void appendEventInstances(SportsOlympicsEventSchedulesAndResultsInstanceJSON * to_append)
      {
        if (!flagHasEventInstances)
          {
            flagHasEventInstances = true;
            storeEventInstances.clear();
          }
        assert(flagHasEventInstances);
        to_append->add_reference();
        storeEventInstances.push_back(to_append);
      }
    void unsetEventInstances(void)
      {
        if (flagHasEventInstances)
          {
            for (size_t num9 = 0; num9 < storeEventInstances.size(); ++num9)
              {
                storeEventInstances[num9]->remove_reference();
              }
          }
        flagHasEventInstances = false;
        storeEventInstances.clear();
      }

    virtual void extraSportsOlympicsEventSchedulesAndResultsInformationNuggetAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraSportsOlympicsEventSchedulesAndResultsInformationNuggetSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraSportsOlympicsEventSchedulesAndResultsInformationNuggetLookup(key);
        if (old_field == NULL)
          {
            extraSportsOlympicsEventSchedulesAndResultsInformationNuggetAppendPair(key, new_component);
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
    void extraSportsOlympicsInformationNuggetAppendPair(const char *key, JSONValue *new_component)
      {
        switch ((unsigned char)(key[0]))
          {
            case 'E':
                if (strcmp(&(key[1]), "ventInstances") == 0)
                    {
                    fromJSONEventInstances(new_component, false);
                    return;
                    }
                break;
            case 'Q':
                if (strncmp(&(key[1]), "uery", 4) == 0)
                  {
                    switch ((unsigned char)(key[5]))
                      {
                        case 'C':
                            if (strcmp(&(key[6]), "omponents") == 0)
                                {
                                fromJSONQueryComponents(new_component, false);
                                return;
                                }
                            break;
                        case 'R':
                            if (strcmp(&(key[6]), "esults") == 0)
                                {
                                fromJSONQueryResults(new_component, false);
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
        extraSportsOlympicsEventSchedulesAndResultsInformationNuggetAppendPair(key, new_component);
      }
    void extraSportsOlympicsInformationNuggetSetField(const char *key, JSONValue *new_component)
      {
        switch ((unsigned char)(key[0]))
          {
            case 'E':
                if (strcmp(&(key[1]), "ventInstances") == 0)
                    {
                    fromJSONEventInstances(new_component, false);
                    return;
                    }
                break;
            case 'Q':
                if (strncmp(&(key[1]), "uery", 4) == 0)
                  {
                    switch ((unsigned char)(key[5]))
                      {
                        case 'C':
                            if (strcmp(&(key[6]), "omponents") == 0)
                                {
                                fromJSONQueryComponents(new_component, false);
                                return;
                                }
                            break;
                        case 'R':
                            if (strcmp(&(key[6]), "esults") == 0)
                                {
                                fromJSONQueryResults(new_component, false);
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
        extraSportsOlympicsEventSchedulesAndResultsInformationNuggetSetField(key, new_component);
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
        SportsOlympicsInformationNuggetJSON::write_fields_as_json(handler);
        assert(flagHasQueryComponents);
        handler->start_pair("QueryComponents");
        assert(storeQueryComponents.size() >= 1);
        handler->start_array();
        for (size_t num1 = 0; num1 < storeQueryComponents.size(); ++num1)
          {
            storeQueryComponents[num1]->write_as_json(handler);
          }
        handler->finish_array();
        assert(flagHasQueryResults);
        handler->start_pair("QueryResults");
        assert(storeQueryResults.size() >= 1);
        handler->start_array();
        for (size_t num2 = 0; num2 < storeQueryResults.size(); ++num2)
          {
            storeQueryResults[num2]->write_as_json(handler);
          }
        handler->finish_array();
        if (flagHasEventInstances)
          {
            handler->start_pair("EventInstances");
            handler->start_array();
            for (size_t num3 = 0; num3 < storeEventInstances.size(); ++num3)
              {
                storeEventInstances[num3]->write_as_json(handler);
              }
            handler->finish_array();
          }
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasQueryComponents()))
          {
            return "When parsing the object for %what%, the \"QueryComponents\" field was missing.";
          }
        if (!(hasQueryResults()))
          {
            return "When parsing the object for %what%, the \"QueryResults\" field was missing.";
          }
        return NULL;
      }

    static SportsOlympicsEventSchedulesAndResultsInformationNuggetJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static SportsOlympicsEventSchedulesAndResultsInformationNuggetJSON *from_text(const char *text, bool ignore_extras = false)
      {
        SportsOlympicsEventSchedulesAndResultsInformationNuggetJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<SportsOlympicsEventSchedulesAndResultsInformationNuggetJSON>, SportsOlympicsEventSchedulesAndResultsInformationNuggetJSON *, bool> generator("Type SportsOlympicsEventSchedulesAndResultsInformationNugget", ignore_extras);
            parse_json_value(text, "Text for SportsOlympicsEventSchedulesAndResultsInformationNuggetJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static SportsOlympicsEventSchedulesAndResultsInformationNuggetJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        SportsOlympicsEventSchedulesAndResultsInformationNuggetJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<SportsOlympicsEventSchedulesAndResultsInformationNuggetJSON>, SportsOlympicsEventSchedulesAndResultsInformationNuggetJSON *, bool> generator("Type SportsOlympicsEventSchedulesAndResultsInformationNugget", ignore_extras);
            parse_json_value(fp, file_name, &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    class Generator : public SportsOlympicsInformationNuggetJSON::Generator
      {
      private:
        JSONHoldingArrayGenerator<SportsOlympicsEventSchedulesAndResultsQueryComponentJSON::Generator, RCHandle<SportsOlympicsEventSchedulesAndResultsQueryComponentJSON>, SportsOlympicsEventSchedulesAndResultsQueryComponentJSON *, bool > fieldGeneratorQueryComponents;
        JSONHoldingArrayGenerator<SportsOlympicsEventSchedulesAndResultsQueryResultJSON::Generator, RCHandle<SportsOlympicsEventSchedulesAndResultsQueryResultJSON>, SportsOlympicsEventSchedulesAndResultsQueryResultJSON *, bool > fieldGeneratorQueryResults;
        JSONHoldingArrayGenerator<SportsOlympicsEventSchedulesAndResultsInstanceJSON::Generator, RCHandle<SportsOlympicsEventSchedulesAndResultsInstanceJSON>, SportsOlympicsEventSchedulesAndResultsInstanceJSON *, bool > fieldGeneratorEventInstances;
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
            if (!(strcmp(getSportsOlympicsInformationNuggetJSONKey().c_str(), "SportsOlympicsEventSchedulesAndResultsInformationNugget") == 0))
                throw("The key field has a value other than `SportsOlympicsEventSchedulesAndResultsInformationNugget'.");
            SportsOlympicsEventSchedulesAndResultsInformationNuggetJSON *result = new SportsOlympicsEventSchedulesAndResultsInformationNuggetJSON();
            assert(result != NULL);
            RCHandle<SportsOlympicsEventSchedulesAndResultsInformationNuggetJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraSportsOlympicsEventSchedulesAndResultsInformationNuggetAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void handle_result(SportsOlympicsInformationNuggetJSON *new_result)
          {
            handle_result((SportsOlympicsEventSchedulesAndResultsInformationNuggetJSON *)new_result);
          }
        void finish(SportsOlympicsEventSchedulesAndResultsInformationNuggetJSON *result)
          {
            if (fieldGeneratorQueryComponents.have_value)
              {
                result->initQueryComponents();
                size_t count = fieldGeneratorQueryComponents.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendQueryComponents(fieldGeneratorQueryComponents.value[num].referenced());
                  }
                fieldGeneratorQueryComponents.value.clear();
                fieldGeneratorQueryComponents.have_value = false;
              }
            else if (!(result->hasQueryComponents()))
              {
                error("When parsing the object for %what%, the \"QueryComponents\" field was missing.");
              }
            if (fieldGeneratorQueryResults.have_value)
              {
                result->initQueryResults();
                size_t count = fieldGeneratorQueryResults.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendQueryResults(fieldGeneratorQueryResults.value[num].referenced());
                  }
                fieldGeneratorQueryResults.value.clear();
                fieldGeneratorQueryResults.have_value = false;
              }
            else if (!(result->hasQueryResults()))
              {
                error("When parsing the object for %what%, the \"QueryResults\" field was missing.");
              }
            if (fieldGeneratorEventInstances.have_value)
              {
                result->initEventInstances();
                size_t count = fieldGeneratorEventInstances.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendEventInstances(fieldGeneratorEventInstances.value[num].referenced());
                  }
                fieldGeneratorEventInstances.value.clear();
                fieldGeneratorEventInstances.have_value = false;
              }
            SportsOlympicsInformationNuggetJSON::Generator::finish(result);
          }
        virtual void handle_result(SportsOlympicsEventSchedulesAndResultsInformationNuggetJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'E':
                    if (strcmp(&(field_name[1]), "ventInstances") == 0)
                        return &fieldGeneratorEventInstances;
                    break;
                case 'Q':
                    if (strncmp(&(field_name[1]), "uery", 4) == 0)
                      {
                        switch ((unsigned char)(field_name[5]))
                          {
                            case 'C':
                                if (strcmp(&(field_name[6]), "omponents") == 0)
                                    return &fieldGeneratorQueryComponents;
                                break;
                            case 'R':
                                if (strcmp(&(field_name[6]), "esults") == 0)
                                    return &fieldGeneratorQueryResults;
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                default:
                    break;
              }
            return SportsOlympicsInformationNuggetJSON::Generator::start_known_field(field_name);
          }

      public:
        Generator(bool ignore_extras = false) : SportsOlympicsInformationNuggetJSON::Generator(ignore_extras), fieldGeneratorQueryComponents("field \"QueryComponents\" of the SportsOlympicsEventSchedulesAndResultsInformationNugget class", ignore_extras), fieldGeneratorQueryResults("field \"QueryResults\" of the SportsOlympicsEventSchedulesAndResultsInformationNugget class", ignore_extras), fieldGeneratorEventInstances("field \"EventInstances\" of the SportsOlympicsEventSchedulesAndResultsInformationNugget class", ignore_extras), unknownFieldGenerator(ignore_extras)
          {
            set_what("the SportsOlympicsEventSchedulesAndResultsInformationNugget class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorQueryComponents.reset();
            fieldGeneratorQueryResults.reset();
            fieldGeneratorEventInstances.reset();
            SportsOlympicsInformationNuggetJSON::Generator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* SPORTSOLYMPICSEVENTSCHEDULESANDRESULTSINFORMATIONNUGGETJSON_H */
