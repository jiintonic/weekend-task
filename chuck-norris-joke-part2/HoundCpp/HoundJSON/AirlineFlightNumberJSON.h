/* file "AirlineFlightNumberJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef AIRLINEFLIGHTNUMBERJSON_H
#define AIRLINEFLIGHTNUMBERJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONIntegerRangeGenerator.h"
#include <stdint.h>
#include "AirlineJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class AirlineFlightNumberJSON : public ReferenceCounted
  {
  private:
    bool flagHasAirline;
    AirlineJSON * storeAirline;
    bool flagHasFlightNumber;
    uint16_t storeFlightNumber;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    AirlineFlightNumberJSON(const AirlineFlightNumberJSON &);
    AirlineFlightNumberJSON & operator=(const AirlineFlightNumberJSON &other);

    void  fromJSONAirline(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONFlightNumber(JSONValue *json_value, bool ignore_extras = false);


  public:
    AirlineFlightNumberJSON(void);
    virtual ~AirlineFlightNumberJSON(void);
    bool  hasAirline(void) const;
    AirlineJSON *  getAirline(void);
    const AirlineJSON *  getAirline(void) const;
    bool  hasFlightNumber(void) const;
    uint16_t  getFlightNumber(void);
    const uint16_t  getFlightNumber(void) const;

    virtual size_t extraAirlineFlightNumberComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraAirlineFlightNumberComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraAirlineFlightNumberComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraAirlineFlightNumberComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraAirlineFlightNumberLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraAirlineFlightNumberLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }

    void setAirline(AirlineJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasAirline)
          {
            storeAirline->remove_reference();
          }
        flagHasAirline = true;
        storeAirline = new_value;
      }
    void unsetAirline(void)
      {
        if (flagHasAirline)
          {
            storeAirline->remove_reference();
          }
        flagHasAirline = false;
      }
    void setFlightNumber(uint16_t new_value)
      {
        flagHasFlightNumber = true;
        if (new_value < 0)
            throw("The value for field FlightNumber of AirlineFlightNumberJSON is less than the lower bound (0) for that field.");
        if (new_value > 9999)
            throw("The value for field FlightNumber of AirlineFlightNumberJSON is greater than the upper bound (9999) for that field.");
        storeFlightNumber = new_value;
      }
    void unsetFlightNumber(void)
      {
        flagHasFlightNumber = false;
      }

    virtual void extraAirlineFlightNumberAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraAirlineFlightNumberSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraAirlineFlightNumberLookup(key);
        if (old_field == NULL)
          {
            extraAirlineFlightNumberAppendPair(key, new_component);
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
        assert(flagHasAirline);
        handler->start_pair("Airline");
        storeAirline->write_as_json(handler);
        assert(flagHasFlightNumber);
        handler->start_pair("FlightNumber");
        handler->number_value(storeFlightNumber);
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasAirline()))
          {
            return "When parsing the object for %what%, the \"Airline\" field was missing.";
          }
        if (!(hasFlightNumber()))
          {
            return "When parsing the object for %what%, the \"FlightNumber\" field was missing.";
          }
        return NULL;
      }

    static AirlineFlightNumberJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static AirlineFlightNumberJSON *from_text(const char *text, bool ignore_extras = false)
      {
        AirlineFlightNumberJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<AirlineFlightNumberJSON>, AirlineFlightNumberJSON *, bool> generator("Type AirlineFlightNumber", ignore_extras);
            parse_json_value(text, "Text for AirlineFlightNumberJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static AirlineFlightNumberJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        AirlineFlightNumberJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<AirlineFlightNumberJSON>, AirlineFlightNumberJSON *, bool> generator("Type AirlineFlightNumber", ignore_extras);
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
        JSONHoldingGenerator<AirlineJSON::Generator, RCHandle<AirlineJSON>, AirlineJSON *, bool > fieldGeneratorAirline;
        JSONHoldingGenerator<JSONIntegerRangeGenerator<uint16_t, 0, 9999>, uint16_t, uint16_t > fieldGeneratorFlightNumber;
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
            AirlineFlightNumberJSON *result = new AirlineFlightNumberJSON();
            assert(result != NULL);
            RCHandle<AirlineFlightNumberJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraAirlineFlightNumberAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void finish(AirlineFlightNumberJSON *result)
          {
            if (fieldGeneratorAirline.have_value)
              {
                result->setAirline(fieldGeneratorAirline.value.referenced());
                fieldGeneratorAirline.have_value = false;
              }
            else if (!(result->hasAirline()))
              {
                error("When parsing the object for %what%, the \"Airline\" field was missing.");
              }
            if (fieldGeneratorFlightNumber.have_value)
              {
                result->setFlightNumber(fieldGeneratorFlightNumber.value);
                fieldGeneratorFlightNumber.have_value = false;
              }
            else if (!(result->hasFlightNumber()))
              {
                error("When parsing the object for %what%, the \"FlightNumber\" field was missing.");
              }
          }
        virtual void handle_result(AirlineFlightNumberJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'A':
                    if (strcmp(&(field_name[1]), "irline") == 0)
                        return &fieldGeneratorAirline;
                    break;
                case 'F':
                    if (strcmp(&(field_name[1]), "lightNumber") == 0)
                        return &fieldGeneratorFlightNumber;
                    break;
                default:
                    break;
              }
            return NULL;
          }

      public:
        Generator(bool ignore_extras = false) : fieldGeneratorAirline("field \"Airline\" of the AirlineFlightNumber class", ignore_extras), fieldGeneratorFlightNumber("field \"FlightNumber\" of the AirlineFlightNumber class"), unknownFieldGenerator(ignore_extras)
          {
            set_what("the AirlineFlightNumber class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorAirline.reset();
            fieldGeneratorFlightNumber.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* AIRLINEFLIGHTNUMBERJSON_H */
