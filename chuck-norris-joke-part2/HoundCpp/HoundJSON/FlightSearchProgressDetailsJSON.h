/* file "FlightSearchProgressDetailsJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef FLIGHTSEARCHPROGRESSDETAILSJSON_H
#define FLIGHTSEARCHPROGRESSDETAILSJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONHoldingArrayGenerator.h"
#include "JSONIntegerLowerBoundOnlyGenerator.h"
#include "JSONBooleanGenerator.h"
#include <vector>
#include "OInteger.h"
#include "FlightDataProviderJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class FlightSearchProgressDetailsJSON : public ReferenceCounted
  {
  private:
    bool flagHasSearchComplete;
    bool storeSearchComplete;
    bool flagHasProgressUpdateCount;
    OInteger storeProgressUpdateCount;
    bool flagHasWaitingForDataProviders;
    std::vector< FlightDataProviderJSON * > storeWaitingForDataProviders;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    FlightSearchProgressDetailsJSON(const FlightSearchProgressDetailsJSON &);
    FlightSearchProgressDetailsJSON & operator=(const FlightSearchProgressDetailsJSON &other);

    void  fromJSONSearchComplete(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONProgressUpdateCount(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONWaitingForDataProviders(JSONValue *json_value, bool ignore_extras = false);


  public:
    FlightSearchProgressDetailsJSON(void);
    virtual ~FlightSearchProgressDetailsJSON(void);
    bool  hasSearchComplete(void) const;
    bool  getSearchComplete(void);
    const bool  getSearchComplete(void) const;
    bool  hasProgressUpdateCount(void) const;
    OInteger  getProgressUpdateCount(void);
    const OInteger  getProgressUpdateCount(void) const;
    bool  hasWaitingForDataProviders(void) const;
    size_t  countOfWaitingForDataProviders(void) const;
    FlightDataProviderJSON *  elementOfWaitingForDataProviders(size_t element_num);
    const FlightDataProviderJSON *  elementOfWaitingForDataProviders(size_t element_num) const;
    std::vector< FlightDataProviderJSON * >  getWaitingForDataProviders(void);
    const std::vector< FlightDataProviderJSON * >  getWaitingForDataProviders(void) const;

    virtual size_t extraFlightSearchProgressDetailsComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraFlightSearchProgressDetailsComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraFlightSearchProgressDetailsComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraFlightSearchProgressDetailsComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraFlightSearchProgressDetailsLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraFlightSearchProgressDetailsLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }

    void setSearchComplete(bool new_value)
      {
        flagHasSearchComplete = true;
        storeSearchComplete = new_value;
      }
    void unsetSearchComplete(void)
      {
        flagHasSearchComplete = false;
      }
    void setProgressUpdateCount(OInteger new_value)
      {
        flagHasProgressUpdateCount = true;
        if (new_value < 1)
            throw("The value for field ProgressUpdateCount of FlightSearchProgressDetailsJSON is less than the lower bound (1) for that field.");
        storeProgressUpdateCount = new_value;
      }
    void unsetProgressUpdateCount(void)
      {
        flagHasProgressUpdateCount = false;
      }
    void initWaitingForDataProviders(void)
      {
        if (flagHasWaitingForDataProviders)
          {
            for (size_t num2 = 0; num2 < storeWaitingForDataProviders.size(); ++num2)
              {
                storeWaitingForDataProviders[num2]->remove_reference();
              }
          }
        flagHasWaitingForDataProviders = true;
        storeWaitingForDataProviders.clear();
      }
    void appendWaitingForDataProviders(FlightDataProviderJSON * to_append)
      {
        if (!flagHasWaitingForDataProviders)
          {
            flagHasWaitingForDataProviders = true;
            storeWaitingForDataProviders.clear();
          }
        assert(flagHasWaitingForDataProviders);
        to_append->add_reference();
        storeWaitingForDataProviders.push_back(to_append);
      }
    void unsetWaitingForDataProviders(void)
      {
        if (flagHasWaitingForDataProviders)
          {
            for (size_t num3 = 0; num3 < storeWaitingForDataProviders.size(); ++num3)
              {
                storeWaitingForDataProviders[num3]->remove_reference();
              }
          }
        flagHasWaitingForDataProviders = false;
        storeWaitingForDataProviders.clear();
      }

    virtual void extraFlightSearchProgressDetailsAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraFlightSearchProgressDetailsSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraFlightSearchProgressDetailsLookup(key);
        if (old_field == NULL)
          {
            extraFlightSearchProgressDetailsAppendPair(key, new_component);
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
        if (flagHasSearchComplete)
          {
            handler->start_pair("SearchComplete");
            handler->boolean_value(storeSearchComplete);
          }
        if (flagHasProgressUpdateCount)
          {
            handler->start_pair("ProgressUpdateCount");
            handler->number_value(storeProgressUpdateCount.get_o_integer());
          }
        if (flagHasWaitingForDataProviders)
          {
            handler->start_pair("WaitingForDataProviders");
            assert(storeWaitingForDataProviders.size() >= 1);
            handler->start_array();
            for (size_t num1 = 0; num1 < storeWaitingForDataProviders.size(); ++num1)
              {
                storeWaitingForDataProviders[num1]->write_as_json(handler);
              }
            handler->finish_array();
          }
      }
    virtual const char *missing_field_error(void) const
      {
        return NULL;
      }

    static FlightSearchProgressDetailsJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static FlightSearchProgressDetailsJSON *from_text(const char *text, bool ignore_extras = false)
      {
        FlightSearchProgressDetailsJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<FlightSearchProgressDetailsJSON>, FlightSearchProgressDetailsJSON *, bool> generator("Type FlightSearchProgressDetails", ignore_extras);
            parse_json_value(text, "Text for FlightSearchProgressDetailsJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static FlightSearchProgressDetailsJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        FlightSearchProgressDetailsJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<FlightSearchProgressDetailsJSON>, FlightSearchProgressDetailsJSON *, bool> generator("Type FlightSearchProgressDetails", ignore_extras);
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
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorSearchComplete;
        static char lowerBoundProgressUpdateCount[];
        JSONHoldingGenerator<JSONIntegerLowerBoundOnlyGenerator<lowerBoundProgressUpdateCount>, OInteger, o_integer > fieldGeneratorProgressUpdateCount;
        JSONHoldingArrayGenerator<FlightDataProviderJSON::Generator, RCHandle<FlightDataProviderJSON>, FlightDataProviderJSON *, bool > fieldGeneratorWaitingForDataProviders;
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
            FlightSearchProgressDetailsJSON *result = new FlightSearchProgressDetailsJSON();
            assert(result != NULL);
            RCHandle<FlightSearchProgressDetailsJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraFlightSearchProgressDetailsAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void finish(FlightSearchProgressDetailsJSON *result)
          {
            if (fieldGeneratorSearchComplete.have_value)
              {
                result->setSearchComplete(fieldGeneratorSearchComplete.value);
                fieldGeneratorSearchComplete.have_value = false;
              }
            if (fieldGeneratorProgressUpdateCount.have_value)
              {
                result->setProgressUpdateCount(fieldGeneratorProgressUpdateCount.value);
                fieldGeneratorProgressUpdateCount.have_value = false;
              }
            if (fieldGeneratorWaitingForDataProviders.have_value)
              {
                result->initWaitingForDataProviders();
                size_t count = fieldGeneratorWaitingForDataProviders.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendWaitingForDataProviders(fieldGeneratorWaitingForDataProviders.value[num].referenced());
                  }
                fieldGeneratorWaitingForDataProviders.value.clear();
                fieldGeneratorWaitingForDataProviders.have_value = false;
              }
          }
        virtual void handle_result(FlightSearchProgressDetailsJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'P':
                    if (strcmp(&(field_name[1]), "rogressUpdateCount") == 0)
                        return &fieldGeneratorProgressUpdateCount;
                    break;
                case 'S':
                    if (strcmp(&(field_name[1]), "earchComplete") == 0)
                        return &fieldGeneratorSearchComplete;
                    break;
                case 'W':
                    if (strcmp(&(field_name[1]), "aitingForDataProviders") == 0)
                        return &fieldGeneratorWaitingForDataProviders;
                    break;
                default:
                    break;
              }
            return NULL;
          }

      public:
        Generator(bool ignore_extras = false) : fieldGeneratorSearchComplete("field \"SearchComplete\" of the FlightSearchProgressDetails class"), fieldGeneratorProgressUpdateCount("field \"ProgressUpdateCount\" of the FlightSearchProgressDetails class"), fieldGeneratorWaitingForDataProviders("field \"WaitingForDataProviders\" of the FlightSearchProgressDetails class", ignore_extras), unknownFieldGenerator(ignore_extras)
          {
            set_what("the FlightSearchProgressDetails class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorSearchComplete.reset();
            fieldGeneratorProgressUpdateCount.reset();
            fieldGeneratorWaitingForDataProviders.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* FLIGHTSEARCHPROGRESSDETAILSJSON_H */
