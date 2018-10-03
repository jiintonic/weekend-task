/* file "FlightStatusAirportJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef FLIGHTSTATUSAIRPORTJSON_H
#define FLIGHTSTATUSAIRPORTJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONStringGenerator.h"
#include <string>
#include "LocationJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class FlightStatusAirportJSON : public ReferenceCounted
  {
  private:
    bool flagHasName;
    std::string storeName;
    bool flagHasIATACode;
    std::string storeIATACode;
    bool flagHasICAOCode;
    std::string storeICAOCode;
    bool flagHasTimeZone;
    std::string storeTimeZone;
    bool flagHasLocation;
    LocationJSON * storeLocation;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    FlightStatusAirportJSON(const FlightStatusAirportJSON &);
    FlightStatusAirportJSON & operator=(const FlightStatusAirportJSON &other);

    void  fromJSONName(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONIATACode(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONICAOCode(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONTimeZone(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONLocation(JSONValue *json_value, bool ignore_extras = false);


  public:
    FlightStatusAirportJSON(void);
    virtual ~FlightStatusAirportJSON(void);
    bool  hasName(void) const;
    std::string  getName(void);
    const std::string  getName(void) const;
    bool  hasIATACode(void) const;
    std::string  getIATACode(void);
    const std::string  getIATACode(void) const;
    bool  hasICAOCode(void) const;
    std::string  getICAOCode(void);
    const std::string  getICAOCode(void) const;
    bool  hasTimeZone(void) const;
    std::string  getTimeZone(void);
    const std::string  getTimeZone(void) const;
    bool  hasLocation(void) const;
    LocationJSON *  getLocation(void);
    const LocationJSON *  getLocation(void) const;

    virtual size_t extraFlightStatusAirportComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraFlightStatusAirportComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraFlightStatusAirportComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraFlightStatusAirportComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraFlightStatusAirportLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraFlightStatusAirportLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }

    void setName(std::string new_value)
      {
        flagHasName = true;
        storeName = new_value;
      }
    void unsetName(void)
      {
        flagHasName = false;
      }
    void setIATACode(std::string new_value)
      {
        flagHasIATACode = true;
        storeIATACode = new_value;
      }
    void unsetIATACode(void)
      {
        flagHasIATACode = false;
      }
    void setICAOCode(std::string new_value)
      {
        flagHasICAOCode = true;
        storeICAOCode = new_value;
      }
    void unsetICAOCode(void)
      {
        flagHasICAOCode = false;
      }
    void setTimeZone(std::string new_value)
      {
        flagHasTimeZone = true;
        storeTimeZone = new_value;
      }
    void unsetTimeZone(void)
      {
        flagHasTimeZone = false;
      }
    void setLocation(LocationJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasLocation)
          {
            storeLocation->remove_reference();
          }
        flagHasLocation = true;
        storeLocation = new_value;
      }
    void unsetLocation(void)
      {
        if (flagHasLocation)
          {
            storeLocation->remove_reference();
          }
        flagHasLocation = false;
      }

    virtual void extraFlightStatusAirportAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraFlightStatusAirportSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraFlightStatusAirportLookup(key);
        if (old_field == NULL)
          {
            extraFlightStatusAirportAppendPair(key, new_component);
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
        assert(flagHasName);
        handler->start_pair("Name");
        handler->string_value(storeName);
        if (flagHasIATACode)
          {
            handler->start_pair("IATACode");
            handler->string_value(storeIATACode);
          }
        if (flagHasICAOCode)
          {
            handler->start_pair("ICAOCode");
            handler->string_value(storeICAOCode);
          }
        assert(flagHasTimeZone);
        handler->start_pair("TimeZone");
        handler->string_value(storeTimeZone);
        assert(flagHasLocation);
        handler->start_pair("Location");
        storeLocation->write_as_json(handler);
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasName()))
          {
            return "When parsing the object for %what%, the \"Name\" field was missing.";
          }
        if (!(hasTimeZone()))
          {
            return "When parsing the object for %what%, the \"TimeZone\" field was missing.";
          }
        if (!(hasLocation()))
          {
            return "When parsing the object for %what%, the \"Location\" field was missing.";
          }
        return NULL;
      }

    static FlightStatusAirportJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static FlightStatusAirportJSON *from_text(const char *text, bool ignore_extras = false)
      {
        FlightStatusAirportJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<FlightStatusAirportJSON>, FlightStatusAirportJSON *, bool> generator("Type FlightStatusAirport", ignore_extras);
            parse_json_value(text, "Text for FlightStatusAirportJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static FlightStatusAirportJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        FlightStatusAirportJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<FlightStatusAirportJSON>, FlightStatusAirportJSON *, bool> generator("Type FlightStatusAirport", ignore_extras);
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
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorName;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorIATACode;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorICAOCode;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorTimeZone;
        JSONHoldingGenerator<LocationJSON::Generator, RCHandle<LocationJSON>, LocationJSON *, bool > fieldGeneratorLocation;
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
            FlightStatusAirportJSON *result = new FlightStatusAirportJSON();
            assert(result != NULL);
            RCHandle<FlightStatusAirportJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraFlightStatusAirportAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void finish(FlightStatusAirportJSON *result)
          {
            if (fieldGeneratorName.have_value)
              {
                result->setName(fieldGeneratorName.value);
                fieldGeneratorName.have_value = false;
              }
            else if (!(result->hasName()))
              {
                error("When parsing the object for %what%, the \"Name\" field was missing.");
              }
            if (fieldGeneratorIATACode.have_value)
              {
                result->setIATACode(fieldGeneratorIATACode.value);
                fieldGeneratorIATACode.have_value = false;
              }
            if (fieldGeneratorICAOCode.have_value)
              {
                result->setICAOCode(fieldGeneratorICAOCode.value);
                fieldGeneratorICAOCode.have_value = false;
              }
            if (fieldGeneratorTimeZone.have_value)
              {
                result->setTimeZone(fieldGeneratorTimeZone.value);
                fieldGeneratorTimeZone.have_value = false;
              }
            else if (!(result->hasTimeZone()))
              {
                error("When parsing the object for %what%, the \"TimeZone\" field was missing.");
              }
            if (fieldGeneratorLocation.have_value)
              {
                result->setLocation(fieldGeneratorLocation.value.referenced());
                fieldGeneratorLocation.have_value = false;
              }
            else if (!(result->hasLocation()))
              {
                error("When parsing the object for %what%, the \"Location\" field was missing.");
              }
          }
        virtual void handle_result(FlightStatusAirportJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'I':
                    switch ((unsigned char)(field_name[1]))
                      {
                        case 'A':
                            if (strcmp(&(field_name[2]), "TACode") == 0)
                                return &fieldGeneratorIATACode;
                            break;
                        case 'C':
                            if (strcmp(&(field_name[2]), "AOCode") == 0)
                                return &fieldGeneratorICAOCode;
                            break;
                        default:
                            break;
                      }
                    break;
                case 'L':
                    if (strcmp(&(field_name[1]), "ocation") == 0)
                        return &fieldGeneratorLocation;
                    break;
                case 'N':
                    if (strcmp(&(field_name[1]), "ame") == 0)
                        return &fieldGeneratorName;
                    break;
                case 'T':
                    if (strcmp(&(field_name[1]), "imeZone") == 0)
                        return &fieldGeneratorTimeZone;
                    break;
                default:
                    break;
              }
            return NULL;
          }

      public:
        Generator(bool ignore_extras = false) : fieldGeneratorName("field \"Name\" of the FlightStatusAirport class"), fieldGeneratorIATACode("field \"IATACode\" of the FlightStatusAirport class"), fieldGeneratorICAOCode("field \"ICAOCode\" of the FlightStatusAirport class"), fieldGeneratorTimeZone("field \"TimeZone\" of the FlightStatusAirport class"), fieldGeneratorLocation("field \"Location\" of the FlightStatusAirport class", ignore_extras), unknownFieldGenerator(ignore_extras)
          {
            set_what("the FlightStatusAirport class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorName.reset();
            fieldGeneratorIATACode.reset();
            fieldGeneratorICAOCode.reset();
            fieldGeneratorTimeZone.reset();
            fieldGeneratorLocation.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* FLIGHTSTATUSAIRPORTJSON_H */
