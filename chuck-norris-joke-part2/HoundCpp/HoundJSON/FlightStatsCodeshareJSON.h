/* file "FlightStatsCodeshareJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef FLIGHTSTATSCODESHAREJSON_H
#define FLIGHTSTATSCODESHAREJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONStringGenerator.h"
#include <string>
#include "FlightStatsAirlineJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class FlightStatsCodeshareJSON : public ReferenceCounted
  {
  private:
    bool flagHascarrier;
    FlightStatsAirlineJSON * storecarrier;
    bool flagHasflightNumber;
    std::string storeflightNumber;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    FlightStatsCodeshareJSON(const FlightStatsCodeshareJSON &);
    FlightStatsCodeshareJSON & operator=(const FlightStatsCodeshareJSON &other);

    void  fromJSONcarrier(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONflightNumber(JSONValue *json_value, bool ignore_extras = false);


  public:
    FlightStatsCodeshareJSON(void);
    virtual ~FlightStatsCodeshareJSON(void);
    bool  hascarrier(void) const;
    FlightStatsAirlineJSON *  getcarrier(void);
    const FlightStatsAirlineJSON *  getcarrier(void) const;
    bool  hasflightNumber(void) const;
    std::string  getflightNumber(void);
    const std::string  getflightNumber(void) const;

    virtual size_t extraFlightStatsCodeshareComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraFlightStatsCodeshareComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraFlightStatsCodeshareComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraFlightStatsCodeshareComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraFlightStatsCodeshareLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraFlightStatsCodeshareLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }

    void setcarrier(FlightStatsAirlineJSON * new_value)
      {
        new_value->add_reference();
        if (flagHascarrier)
          {
            storecarrier->remove_reference();
          }
        flagHascarrier = true;
        storecarrier = new_value;
      }
    void unsetcarrier(void)
      {
        if (flagHascarrier)
          {
            storecarrier->remove_reference();
          }
        flagHascarrier = false;
      }
    void setflightNumber(std::string new_value)
      {
        flagHasflightNumber = true;
        storeflightNumber = new_value;
      }
    void unsetflightNumber(void)
      {
        flagHasflightNumber = false;
      }

    virtual void extraFlightStatsCodeshareAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraFlightStatsCodeshareSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraFlightStatsCodeshareLookup(key);
        if (old_field == NULL)
          {
            extraFlightStatsCodeshareAppendPair(key, new_component);
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
        if (flagHascarrier)
          {
            handler->start_pair("carrier");
            storecarrier->write_as_json(handler);
          }
        if (flagHasflightNumber)
          {
            handler->start_pair("flightNumber");
            handler->string_value(storeflightNumber);
          }
      }
    virtual const char *missing_field_error(void) const
      {
        return NULL;
      }

    static FlightStatsCodeshareJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static FlightStatsCodeshareJSON *from_text(const char *text, bool ignore_extras = false)
      {
        FlightStatsCodeshareJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<FlightStatsCodeshareJSON>, FlightStatsCodeshareJSON *, bool> generator("Type FlightStatsCodeshare", ignore_extras);
            parse_json_value(text, "Text for FlightStatsCodeshareJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static FlightStatsCodeshareJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        FlightStatsCodeshareJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<FlightStatsCodeshareJSON>, FlightStatsCodeshareJSON *, bool> generator("Type FlightStatsCodeshare", ignore_extras);
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
        JSONHoldingGenerator<FlightStatsAirlineJSON::Generator, RCHandle<FlightStatsAirlineJSON>, FlightStatsAirlineJSON *, bool > fieldGeneratorcarrier;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorflightNumber;
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
            FlightStatsCodeshareJSON *result = new FlightStatsCodeshareJSON();
            assert(result != NULL);
            RCHandle<FlightStatsCodeshareJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraFlightStatsCodeshareAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void finish(FlightStatsCodeshareJSON *result)
          {
            if (fieldGeneratorcarrier.have_value)
              {
                result->setcarrier(fieldGeneratorcarrier.value.referenced());
                fieldGeneratorcarrier.have_value = false;
              }
            if (fieldGeneratorflightNumber.have_value)
              {
                result->setflightNumber(fieldGeneratorflightNumber.value);
                fieldGeneratorflightNumber.have_value = false;
              }
          }
        virtual void handle_result(FlightStatsCodeshareJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'c':
                    if (strcmp(&(field_name[1]), "arrier") == 0)
                        return &fieldGeneratorcarrier;
                    break;
                case 'f':
                    if (strcmp(&(field_name[1]), "lightNumber") == 0)
                        return &fieldGeneratorflightNumber;
                    break;
                default:
                    break;
              }
            return NULL;
          }

      public:
        Generator(bool ignore_extras = false) : fieldGeneratorcarrier("field \"carrier\" of the FlightStatsCodeshare class", ignore_extras), fieldGeneratorflightNumber("field \"flightNumber\" of the FlightStatsCodeshare class"), unknownFieldGenerator(ignore_extras)
          {
            set_what("the FlightStatsCodeshare class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorcarrier.reset();
            fieldGeneratorflightNumber.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* FLIGHTSTATSCODESHAREJSON_H */
