/* file "FlightStatusInformationNuggetJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef FLIGHTSTATUSINFORMATIONNUGGETJSON_H
#define FLIGHTSTATUSINFORMATIONNUGGETJSON_H

#pragma interface

#include "InformationNuggetJSON.h"
#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONHoldingArrayGenerator.h"
#include <vector>
#include "FlightTimesJSON.h"
#include "FlightTravelLocationJSON.h"
#include "FlightStatusSearchResultJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class FlightStatusInformationNuggetJSON : public InformationNuggetJSON
  {
  private:
    bool flagHasCurrentDateAndTime;
    FlightTimesJSON * storeCurrentDateAndTime;
    bool flagHasFlightTravelLocationForClient;
    FlightTravelLocationJSON * storeFlightTravelLocationForClient;
    bool flagHasFlightStatusSearchResults;
    std::vector< FlightStatusSearchResultJSON * > storeFlightStatusSearchResults;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    FlightStatusInformationNuggetJSON(const FlightStatusInformationNuggetJSON &);
    FlightStatusInformationNuggetJSON & operator=(const FlightStatusInformationNuggetJSON &other);

    JSONValue * extraCurrentDateAndTimeToJSON(void) const;
    JSONValue * extraFlightTravelLocationForClientToJSON(void) const;
    JSONValue * extraFlightStatusSearchResultsToJSON(void) const;

    void  fromJSONCurrentDateAndTime(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONFlightTravelLocationForClient(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONFlightStatusSearchResults(JSONValue *json_value, bool ignore_extras = false);


  public:
    FlightStatusInformationNuggetJSON(void);
    virtual ~FlightStatusInformationNuggetJSON(void);
    const char * getNuggetKind(void) const;
    bool  hasCurrentDateAndTime(void) const;
    FlightTimesJSON *  getCurrentDateAndTime(void);
    const FlightTimesJSON *  getCurrentDateAndTime(void) const;
    bool  hasFlightTravelLocationForClient(void) const;
    FlightTravelLocationJSON *  getFlightTravelLocationForClient(void);
    const FlightTravelLocationJSON *  getFlightTravelLocationForClient(void) const;
    bool  hasFlightStatusSearchResults(void) const;
    size_t  countOfFlightStatusSearchResults(void) const;
    FlightStatusSearchResultJSON *  elementOfFlightStatusSearchResults(size_t element_num);
    const FlightStatusSearchResultJSON *  elementOfFlightStatusSearchResults(size_t element_num) const;
    std::vector< FlightStatusSearchResultJSON * >  getFlightStatusSearchResults(void);
    const std::vector< FlightStatusSearchResultJSON * >  getFlightStatusSearchResults(void) const;

    virtual size_t extraFlightStatusInformationNuggetComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraFlightStatusInformationNuggetComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraFlightStatusInformationNuggetComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraFlightStatusInformationNuggetComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraFlightStatusInformationNuggetLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraFlightStatusInformationNuggetLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    size_t extraInformationNuggetComponentCount(void) const
      {
        size_t result = 0;
        if (flagHasCurrentDateAndTime)
            ++result;
        if (flagHasFlightTravelLocationForClient)
            ++result;
        if (flagHasFlightStatusSearchResults)
            ++result;
        result += extraFlightStatusInformationNuggetComponentCount();
        return result;
      }
    const char *extraInformationNuggetComponentKey(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasCurrentDateAndTime)
          {
            if (remainder == 0)
                return "CurrentDateAndTime";
            --remainder;
          }
        if (flagHasFlightTravelLocationForClient)
          {
            if (remainder == 0)
                return "FlightTravelLocationForClient";
            --remainder;
          }
        if (flagHasFlightStatusSearchResults)
          {
            if (remainder == 0)
                return "FlightStatusSearchResults";
            --remainder;
          }
        return extraFlightStatusInformationNuggetComponentKey(remainder);
      }
    JSONValue *extraInformationNuggetComponentValue(size_t component_num)
      {
        size_t remainder = component_num;
        if (flagHasCurrentDateAndTime)
          {
            if (remainder == 0)
                return extraCurrentDateAndTimeToJSON();
            --remainder;
          }
        if (flagHasFlightTravelLocationForClient)
          {
            if (remainder == 0)
                return extraFlightTravelLocationForClientToJSON();
            --remainder;
          }
        if (flagHasFlightStatusSearchResults)
          {
            if (remainder == 0)
                return extraFlightStatusSearchResultsToJSON();
            --remainder;
          }
        return extraFlightStatusInformationNuggetComponentValue(remainder);
      }
    const JSONValue *extraInformationNuggetComponentValue(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasCurrentDateAndTime)
          {
            if (remainder == 0)
                return extraCurrentDateAndTimeToJSON();
            --remainder;
          }
        if (flagHasFlightTravelLocationForClient)
          {
            if (remainder == 0)
                return extraFlightTravelLocationForClientToJSON();
            --remainder;
          }
        if (flagHasFlightStatusSearchResults)
          {
            if (remainder == 0)
                return extraFlightStatusSearchResultsToJSON();
            --remainder;
          }
        return extraFlightStatusInformationNuggetComponentValue(remainder);
      }
    JSONValue *extraInformationNuggetLookup(const char *field_name)
      {
        switch ((unsigned char)(field_name[0]))
          {
            case 'C':
                if (strcmp(&(field_name[1]), "urrentDateAndTime") == 0)
                    return (flagHasCurrentDateAndTime ? extraCurrentDateAndTimeToJSON() : NULL);
                break;
            case 'F':
                if (strncmp(&(field_name[1]), "light", 5) == 0)
                  {
                    switch ((unsigned char)(field_name[6]))
                      {
                        case 'S':
                            if (strcmp(&(field_name[7]), "tatusSearchResults") == 0)
                                return (flagHasFlightStatusSearchResults ? extraFlightStatusSearchResultsToJSON() : NULL);
                            break;
                        case 'T':
                            if (strcmp(&(field_name[7]), "ravelLocationForClient") == 0)
                                return (flagHasFlightTravelLocationForClient ? extraFlightTravelLocationForClientToJSON() : NULL);
                            break;
                        default:
                            break;
                      }
                  }
                break;
            default:
                break;
          }
        return extraFlightStatusInformationNuggetLookup(field_name);
      }
    const JSONValue *extraInformationNuggetLookup(const char *field_name) const
      {
        switch ((unsigned char)(field_name[0]))
          {
            case 'C':
                if (strcmp(&(field_name[1]), "urrentDateAndTime") == 0)
                    return (flagHasCurrentDateAndTime ? extraCurrentDateAndTimeToJSON() : NULL);
                break;
            case 'F':
                if (strncmp(&(field_name[1]), "light", 5) == 0)
                  {
                    switch ((unsigned char)(field_name[6]))
                      {
                        case 'S':
                            if (strcmp(&(field_name[7]), "tatusSearchResults") == 0)
                                return (flagHasFlightStatusSearchResults ? extraFlightStatusSearchResultsToJSON() : NULL);
                            break;
                        case 'T':
                            if (strcmp(&(field_name[7]), "ravelLocationForClient") == 0)
                                return (flagHasFlightTravelLocationForClient ? extraFlightTravelLocationForClientToJSON() : NULL);
                            break;
                        default:
                            break;
                      }
                  }
                break;
            default:
                break;
          }
        return extraFlightStatusInformationNuggetLookup(field_name);
      }

    void setCurrentDateAndTime(FlightTimesJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasCurrentDateAndTime)
          {
            storeCurrentDateAndTime->remove_reference();
          }
        flagHasCurrentDateAndTime = true;
        storeCurrentDateAndTime = new_value;
      }
    void unsetCurrentDateAndTime(void)
      {
        if (flagHasCurrentDateAndTime)
          {
            storeCurrentDateAndTime->remove_reference();
          }
        flagHasCurrentDateAndTime = false;
      }
    void setFlightTravelLocationForClient(FlightTravelLocationJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasFlightTravelLocationForClient)
          {
            storeFlightTravelLocationForClient->remove_reference();
          }
        flagHasFlightTravelLocationForClient = true;
        storeFlightTravelLocationForClient = new_value;
      }
    void unsetFlightTravelLocationForClient(void)
      {
        if (flagHasFlightTravelLocationForClient)
          {
            storeFlightTravelLocationForClient->remove_reference();
          }
        flagHasFlightTravelLocationForClient = false;
      }
    void initFlightStatusSearchResults(void)
      {
        if (flagHasFlightStatusSearchResults)
          {
            for (size_t num2 = 0; num2 < storeFlightStatusSearchResults.size(); ++num2)
              {
                storeFlightStatusSearchResults[num2]->remove_reference();
              }
          }
        flagHasFlightStatusSearchResults = true;
        storeFlightStatusSearchResults.clear();
      }
    void appendFlightStatusSearchResults(FlightStatusSearchResultJSON * to_append)
      {
        if (!flagHasFlightStatusSearchResults)
          {
            flagHasFlightStatusSearchResults = true;
            storeFlightStatusSearchResults.clear();
          }
        assert(flagHasFlightStatusSearchResults);
        to_append->add_reference();
        storeFlightStatusSearchResults.push_back(to_append);
      }
    void unsetFlightStatusSearchResults(void)
      {
        if (flagHasFlightStatusSearchResults)
          {
            for (size_t num3 = 0; num3 < storeFlightStatusSearchResults.size(); ++num3)
              {
                storeFlightStatusSearchResults[num3]->remove_reference();
              }
          }
        flagHasFlightStatusSearchResults = false;
        storeFlightStatusSearchResults.clear();
      }

    virtual void extraFlightStatusInformationNuggetAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraFlightStatusInformationNuggetSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraFlightStatusInformationNuggetLookup(key);
        if (old_field == NULL)
          {
            extraFlightStatusInformationNuggetAppendPair(key, new_component);
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
    void extraInformationNuggetAppendPair(const char *key, JSONValue *new_component)
      {
        switch ((unsigned char)(key[0]))
          {
            case 'C':
                if (strcmp(&(key[1]), "urrentDateAndTime") == 0)
                    {
                    fromJSONCurrentDateAndTime(new_component, false);
                    return;
                    }
                break;
            case 'F':
                if (strncmp(&(key[1]), "light", 5) == 0)
                  {
                    switch ((unsigned char)(key[6]))
                      {
                        case 'S':
                            if (strcmp(&(key[7]), "tatusSearchResults") == 0)
                                {
                                fromJSONFlightStatusSearchResults(new_component, false);
                                return;
                                }
                            break;
                        case 'T':
                            if (strcmp(&(key[7]), "ravelLocationForClient") == 0)
                                {
                                fromJSONFlightTravelLocationForClient(new_component, false);
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
        extraFlightStatusInformationNuggetAppendPair(key, new_component);
      }
    void extraInformationNuggetSetField(const char *key, JSONValue *new_component)
      {
        switch ((unsigned char)(key[0]))
          {
            case 'C':
                if (strcmp(&(key[1]), "urrentDateAndTime") == 0)
                    {
                    fromJSONCurrentDateAndTime(new_component, false);
                    return;
                    }
                break;
            case 'F':
                if (strncmp(&(key[1]), "light", 5) == 0)
                  {
                    switch ((unsigned char)(key[6]))
                      {
                        case 'S':
                            if (strcmp(&(key[7]), "tatusSearchResults") == 0)
                                {
                                fromJSONFlightStatusSearchResults(new_component, false);
                                return;
                                }
                            break;
                        case 'T':
                            if (strcmp(&(key[7]), "ravelLocationForClient") == 0)
                                {
                                fromJSONFlightTravelLocationForClient(new_component, false);
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
        extraFlightStatusInformationNuggetSetField(key, new_component);
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
        InformationNuggetJSON::write_fields_as_json(handler);
        assert(flagHasCurrentDateAndTime);
        handler->start_pair("CurrentDateAndTime");
        storeCurrentDateAndTime->write_as_json(handler);
        if (flagHasFlightTravelLocationForClient)
          {
            handler->start_pair("FlightTravelLocationForClient");
            storeFlightTravelLocationForClient->write_as_json(handler);
          }
        if (flagHasFlightStatusSearchResults)
          {
            handler->start_pair("FlightStatusSearchResults");
            handler->start_array();
            for (size_t num1 = 0; num1 < storeFlightStatusSearchResults.size(); ++num1)
              {
                storeFlightStatusSearchResults[num1]->write_as_json(handler);
              }
            handler->finish_array();
          }
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasCurrentDateAndTime()))
          {
            return "When parsing the object for %what%, the \"CurrentDateAndTime\" field was missing.";
          }
        return NULL;
      }

    static FlightStatusInformationNuggetJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static FlightStatusInformationNuggetJSON *from_text(const char *text, bool ignore_extras = false)
      {
        FlightStatusInformationNuggetJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<FlightStatusInformationNuggetJSON>, FlightStatusInformationNuggetJSON *, bool> generator("Type FlightStatusInformationNugget", ignore_extras);
            parse_json_value(text, "Text for FlightStatusInformationNuggetJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static FlightStatusInformationNuggetJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        FlightStatusInformationNuggetJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<FlightStatusInformationNuggetJSON>, FlightStatusInformationNuggetJSON *, bool> generator("Type FlightStatusInformationNugget", ignore_extras);
            parse_json_value(fp, file_name, &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    class Generator : public InformationNuggetJSON::Generator
      {
      private:
        JSONHoldingGenerator<FlightTimesJSON::Generator, RCHandle<FlightTimesJSON>, FlightTimesJSON *, bool > fieldGeneratorCurrentDateAndTime;
        JSONHoldingGenerator<FlightTravelLocationJSON::Generator, RCHandle<FlightTravelLocationJSON>, FlightTravelLocationJSON *, bool > fieldGeneratorFlightTravelLocationForClient;
        JSONHoldingArrayGenerator<FlightStatusSearchResultJSON::Generator, RCHandle<FlightStatusSearchResultJSON>, FlightStatusSearchResultJSON *, bool > fieldGeneratorFlightStatusSearchResults;
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
            if (!(strcmp(getInformationNuggetJSONKey().c_str(), "FlightStatus") == 0))
                throw("The key field has a value other than `FlightStatus'.");
            FlightStatusInformationNuggetJSON *result = new FlightStatusInformationNuggetJSON();
            assert(result != NULL);
            RCHandle<FlightStatusInformationNuggetJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraFlightStatusInformationNuggetAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void handle_result(InformationNuggetJSON *new_result)
          {
            handle_result((FlightStatusInformationNuggetJSON *)new_result);
          }
        void finish(FlightStatusInformationNuggetJSON *result)
          {
            if (fieldGeneratorCurrentDateAndTime.have_value)
              {
                result->setCurrentDateAndTime(fieldGeneratorCurrentDateAndTime.value.referenced());
                fieldGeneratorCurrentDateAndTime.have_value = false;
              }
            else if (!(result->hasCurrentDateAndTime()))
              {
                error("When parsing the object for %what%, the \"CurrentDateAndTime\" field was missing.");
              }
            if (fieldGeneratorFlightTravelLocationForClient.have_value)
              {
                result->setFlightTravelLocationForClient(fieldGeneratorFlightTravelLocationForClient.value.referenced());
                fieldGeneratorFlightTravelLocationForClient.have_value = false;
              }
            if (fieldGeneratorFlightStatusSearchResults.have_value)
              {
                result->initFlightStatusSearchResults();
                size_t count = fieldGeneratorFlightStatusSearchResults.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendFlightStatusSearchResults(fieldGeneratorFlightStatusSearchResults.value[num].referenced());
                  }
                fieldGeneratorFlightStatusSearchResults.value.clear();
                fieldGeneratorFlightStatusSearchResults.have_value = false;
              }
            InformationNuggetJSON::Generator::finish(result);
          }
        virtual void handle_result(FlightStatusInformationNuggetJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'C':
                    if (strcmp(&(field_name[1]), "urrentDateAndTime") == 0)
                        return &fieldGeneratorCurrentDateAndTime;
                    break;
                case 'F':
                    if (strncmp(&(field_name[1]), "light", 5) == 0)
                      {
                        switch ((unsigned char)(field_name[6]))
                          {
                            case 'S':
                                if (strcmp(&(field_name[7]), "tatusSearchResults") == 0)
                                    return &fieldGeneratorFlightStatusSearchResults;
                                break;
                            case 'T':
                                if (strcmp(&(field_name[7]), "ravelLocationForClient") == 0)
                                    return &fieldGeneratorFlightTravelLocationForClient;
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                default:
                    break;
              }
            return InformationNuggetJSON::Generator::start_known_field(field_name);
          }

      public:
        Generator(bool ignore_extras = false) : InformationNuggetJSON::Generator(ignore_extras), fieldGeneratorCurrentDateAndTime("field \"CurrentDateAndTime\" of the FlightStatusInformationNugget class", ignore_extras), fieldGeneratorFlightTravelLocationForClient("field \"FlightTravelLocationForClient\" of the FlightStatusInformationNugget class", ignore_extras), fieldGeneratorFlightStatusSearchResults("field \"FlightStatusSearchResults\" of the FlightStatusInformationNugget class", ignore_extras), unknownFieldGenerator(ignore_extras)
          {
            set_what("the FlightStatusInformationNugget class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorCurrentDateAndTime.reset();
            fieldGeneratorFlightTravelLocationForClient.reset();
            fieldGeneratorFlightStatusSearchResults.reset();
            InformationNuggetJSON::Generator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* FLIGHTSTATUSINFORMATIONNUGGETJSON_H */
