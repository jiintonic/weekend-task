/* file "FlightStatsAirportResourcesJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef FLIGHTSTATSAIRPORTRESOURCESJSON_H
#define FLIGHTSTATSAIRPORTRESOURCESJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONStringGenerator.h"
#include <string>
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class FlightStatsAirportResourcesJSON : public ReferenceCounted
  {
  private:
    bool flagHasdepartureTerminal;
    std::string storedepartureTerminal;
    bool flagHasdepartureGate;
    std::string storedepartureGate;
    bool flagHasarrivalTerminal;
    std::string storearrivalTerminal;
    bool flagHasarrivalGate;
    std::string storearrivalGate;
    bool flagHasbaggage;
    std::string storebaggage;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    FlightStatsAirportResourcesJSON(const FlightStatsAirportResourcesJSON &);
    FlightStatsAirportResourcesJSON & operator=(const FlightStatsAirportResourcesJSON &other);

    void  fromJSONdepartureTerminal(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONdepartureGate(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONarrivalTerminal(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONarrivalGate(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONbaggage(JSONValue *json_value, bool ignore_extras = false);


  public:
    FlightStatsAirportResourcesJSON(void);
    virtual ~FlightStatsAirportResourcesJSON(void);
    bool  hasdepartureTerminal(void) const;
    std::string  getdepartureTerminal(void);
    const std::string  getdepartureTerminal(void) const;
    bool  hasdepartureGate(void) const;
    std::string  getdepartureGate(void);
    const std::string  getdepartureGate(void) const;
    bool  hasarrivalTerminal(void) const;
    std::string  getarrivalTerminal(void);
    const std::string  getarrivalTerminal(void) const;
    bool  hasarrivalGate(void) const;
    std::string  getarrivalGate(void);
    const std::string  getarrivalGate(void) const;
    bool  hasbaggage(void) const;
    std::string  getbaggage(void);
    const std::string  getbaggage(void) const;

    virtual size_t extraFlightStatsAirportResourcesComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraFlightStatsAirportResourcesComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraFlightStatsAirportResourcesComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraFlightStatsAirportResourcesComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraFlightStatsAirportResourcesLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraFlightStatsAirportResourcesLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }

    void setdepartureTerminal(std::string new_value)
      {
        flagHasdepartureTerminal = true;
        storedepartureTerminal = new_value;
      }
    void unsetdepartureTerminal(void)
      {
        flagHasdepartureTerminal = false;
      }
    void setdepartureGate(std::string new_value)
      {
        flagHasdepartureGate = true;
        storedepartureGate = new_value;
      }
    void unsetdepartureGate(void)
      {
        flagHasdepartureGate = false;
      }
    void setarrivalTerminal(std::string new_value)
      {
        flagHasarrivalTerminal = true;
        storearrivalTerminal = new_value;
      }
    void unsetarrivalTerminal(void)
      {
        flagHasarrivalTerminal = false;
      }
    void setarrivalGate(std::string new_value)
      {
        flagHasarrivalGate = true;
        storearrivalGate = new_value;
      }
    void unsetarrivalGate(void)
      {
        flagHasarrivalGate = false;
      }
    void setbaggage(std::string new_value)
      {
        flagHasbaggage = true;
        storebaggage = new_value;
      }
    void unsetbaggage(void)
      {
        flagHasbaggage = false;
      }

    virtual void extraFlightStatsAirportResourcesAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraFlightStatsAirportResourcesSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraFlightStatsAirportResourcesLookup(key);
        if (old_field == NULL)
          {
            extraFlightStatsAirportResourcesAppendPair(key, new_component);
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
        if (flagHasdepartureTerminal)
          {
            handler->start_pair("departureTerminal");
            handler->string_value(storedepartureTerminal);
          }
        if (flagHasdepartureGate)
          {
            handler->start_pair("departureGate");
            handler->string_value(storedepartureGate);
          }
        if (flagHasarrivalTerminal)
          {
            handler->start_pair("arrivalTerminal");
            handler->string_value(storearrivalTerminal);
          }
        if (flagHasarrivalGate)
          {
            handler->start_pair("arrivalGate");
            handler->string_value(storearrivalGate);
          }
        if (flagHasbaggage)
          {
            handler->start_pair("baggage");
            handler->string_value(storebaggage);
          }
      }
    virtual const char *missing_field_error(void) const
      {
        return NULL;
      }

    static FlightStatsAirportResourcesJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static FlightStatsAirportResourcesJSON *from_text(const char *text, bool ignore_extras = false)
      {
        FlightStatsAirportResourcesJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<FlightStatsAirportResourcesJSON>, FlightStatsAirportResourcesJSON *, bool> generator("Type FlightStatsAirportResources", ignore_extras);
            parse_json_value(text, "Text for FlightStatsAirportResourcesJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static FlightStatsAirportResourcesJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        FlightStatsAirportResourcesJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<FlightStatsAirportResourcesJSON>, FlightStatsAirportResourcesJSON *, bool> generator("Type FlightStatsAirportResources", ignore_extras);
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
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratordepartureTerminal;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratordepartureGate;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorarrivalTerminal;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorarrivalGate;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorbaggage;
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
            FlightStatsAirportResourcesJSON *result = new FlightStatsAirportResourcesJSON();
            assert(result != NULL);
            RCHandle<FlightStatsAirportResourcesJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraFlightStatsAirportResourcesAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void finish(FlightStatsAirportResourcesJSON *result)
          {
            if (fieldGeneratordepartureTerminal.have_value)
              {
                result->setdepartureTerminal(fieldGeneratordepartureTerminal.value);
                fieldGeneratordepartureTerminal.have_value = false;
              }
            if (fieldGeneratordepartureGate.have_value)
              {
                result->setdepartureGate(fieldGeneratordepartureGate.value);
                fieldGeneratordepartureGate.have_value = false;
              }
            if (fieldGeneratorarrivalTerminal.have_value)
              {
                result->setarrivalTerminal(fieldGeneratorarrivalTerminal.value);
                fieldGeneratorarrivalTerminal.have_value = false;
              }
            if (fieldGeneratorarrivalGate.have_value)
              {
                result->setarrivalGate(fieldGeneratorarrivalGate.value);
                fieldGeneratorarrivalGate.have_value = false;
              }
            if (fieldGeneratorbaggage.have_value)
              {
                result->setbaggage(fieldGeneratorbaggage.value);
                fieldGeneratorbaggage.have_value = false;
              }
          }
        virtual void handle_result(FlightStatsAirportResourcesJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'a':
                    if (strncmp(&(field_name[1]), "rrival", 6) == 0)
                      {
                        switch ((unsigned char)(field_name[7]))
                          {
                            case 'G':
                                if (strcmp(&(field_name[8]), "ate") == 0)
                                    return &fieldGeneratorarrivalGate;
                                break;
                            case 'T':
                                if (strcmp(&(field_name[8]), "erminal") == 0)
                                    return &fieldGeneratorarrivalTerminal;
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 'b':
                    if (strcmp(&(field_name[1]), "aggage") == 0)
                        return &fieldGeneratorbaggage;
                    break;
                case 'd':
                    if (strncmp(&(field_name[1]), "eparture", 8) == 0)
                      {
                        switch ((unsigned char)(field_name[9]))
                          {
                            case 'G':
                                if (strcmp(&(field_name[10]), "ate") == 0)
                                    return &fieldGeneratordepartureGate;
                                break;
                            case 'T':
                                if (strcmp(&(field_name[10]), "erminal") == 0)
                                    return &fieldGeneratordepartureTerminal;
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                default:
                    break;
              }
            return NULL;
          }

      public:
        Generator(bool ignore_extras = false) : fieldGeneratordepartureTerminal("field \"departureTerminal\" of the FlightStatsAirportResources class"), fieldGeneratordepartureGate("field \"departureGate\" of the FlightStatsAirportResources class"), fieldGeneratorarrivalTerminal("field \"arrivalTerminal\" of the FlightStatsAirportResources class"), fieldGeneratorarrivalGate("field \"arrivalGate\" of the FlightStatsAirportResources class"), fieldGeneratorbaggage("field \"baggage\" of the FlightStatsAirportResources class"), unknownFieldGenerator(ignore_extras)
          {
            set_what("the FlightStatsAirportResources class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratordepartureTerminal.reset();
            fieldGeneratordepartureGate.reset();
            fieldGeneratorarrivalTerminal.reset();
            fieldGeneratorarrivalGate.reset();
            fieldGeneratorbaggage.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* FLIGHTSTATSAIRPORTRESOURCESJSON_H */
