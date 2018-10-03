/* file "FlightSegmentJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef FLIGHTSEGMENTJSON_H
#define FLIGHTSEGMENTJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONStringGenerator.h"
#include "JSONNumberTextGenerator.h"
#include "JSONDoubleGenerator.h"
#include <string>
#include "FlightTravelLocationJSON.h"
#include "FlightTravelLocationJSON.h"
#include "FlightTimesJSON.h"
#include "FlightTimesJSON.h"
#include "AirlineFlightNumberJSON.h"
#include "AirlineJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class FlightSegmentJSON : public ReferenceCounted
  {
  private:
    bool flagHasFlightSegmentID;
    std::string storeFlightSegmentID;
    bool flagHasDepartureAirport;
    FlightTravelLocationJSON * storeDepartureAirport;
    bool flagHasArrivalAirport;
    FlightTravelLocationJSON * storeArrivalAirport;
    bool flagHasDepartureDateTime;
    FlightTimesJSON * storeDepartureDateTime;
    bool flagHasArrivalDateTime;
    FlightTimesJSON * storeArrivalDateTime;
    bool flagHasAirlineFlightNumber;
    AirlineFlightNumberJSON * storeAirlineFlightNumber;
    bool flagHasOperatingCarrier;
    AirlineJSON * storeOperatingCarrier;
    bool flagHasFlightDuration;
    double storeFlightDuration;
    std::string textStoreFlightDuration;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    FlightSegmentJSON(const FlightSegmentJSON &);
    FlightSegmentJSON & operator=(const FlightSegmentJSON &other);

    void  fromJSONFlightSegmentID(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONDepartureAirport(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONArrivalAirport(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONDepartureDateTime(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONArrivalDateTime(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONAirlineFlightNumber(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONOperatingCarrier(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONFlightDuration(JSONValue *json_value, bool ignore_extras = false);


  public:
    FlightSegmentJSON(void);
    virtual ~FlightSegmentJSON(void);
    bool  hasFlightSegmentID(void) const;
    std::string  getFlightSegmentID(void);
    const std::string  getFlightSegmentID(void) const;
    bool  hasDepartureAirport(void) const;
    FlightTravelLocationJSON *  getDepartureAirport(void);
    const FlightTravelLocationJSON *  getDepartureAirport(void) const;
    bool  hasArrivalAirport(void) const;
    FlightTravelLocationJSON *  getArrivalAirport(void);
    const FlightTravelLocationJSON *  getArrivalAirport(void) const;
    bool  hasDepartureDateTime(void) const;
    FlightTimesJSON *  getDepartureDateTime(void);
    const FlightTimesJSON *  getDepartureDateTime(void) const;
    bool  hasArrivalDateTime(void) const;
    FlightTimesJSON *  getArrivalDateTime(void);
    const FlightTimesJSON *  getArrivalDateTime(void) const;
    bool  hasAirlineFlightNumber(void) const;
    AirlineFlightNumberJSON *  getAirlineFlightNumber(void);
    const AirlineFlightNumberJSON *  getAirlineFlightNumber(void) const;
    bool  hasOperatingCarrier(void) const;
    AirlineJSON *  getOperatingCarrier(void);
    const AirlineJSON *  getOperatingCarrier(void) const;
    bool  hasFlightDuration(void) const;
    double  getFlightDuration(void);
    const double  getFlightDuration(void) const;
    std::string  getFlightDurationAsText(void) const;

    virtual size_t extraFlightSegmentComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraFlightSegmentComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraFlightSegmentComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraFlightSegmentComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraFlightSegmentLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraFlightSegmentLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }

    void setFlightSegmentID(std::string new_value)
      {
        flagHasFlightSegmentID = true;
        storeFlightSegmentID = new_value;
      }
    void unsetFlightSegmentID(void)
      {
        flagHasFlightSegmentID = false;
      }
    void setDepartureAirport(FlightTravelLocationJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasDepartureAirport)
          {
            storeDepartureAirport->remove_reference();
          }
        flagHasDepartureAirport = true;
        storeDepartureAirport = new_value;
      }
    void unsetDepartureAirport(void)
      {
        if (flagHasDepartureAirport)
          {
            storeDepartureAirport->remove_reference();
          }
        flagHasDepartureAirport = false;
      }
    void setArrivalAirport(FlightTravelLocationJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasArrivalAirport)
          {
            storeArrivalAirport->remove_reference();
          }
        flagHasArrivalAirport = true;
        storeArrivalAirport = new_value;
      }
    void unsetArrivalAirport(void)
      {
        if (flagHasArrivalAirport)
          {
            storeArrivalAirport->remove_reference();
          }
        flagHasArrivalAirport = false;
      }
    void setDepartureDateTime(FlightTimesJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasDepartureDateTime)
          {
            storeDepartureDateTime->remove_reference();
          }
        flagHasDepartureDateTime = true;
        storeDepartureDateTime = new_value;
      }
    void unsetDepartureDateTime(void)
      {
        if (flagHasDepartureDateTime)
          {
            storeDepartureDateTime->remove_reference();
          }
        flagHasDepartureDateTime = false;
      }
    void setArrivalDateTime(FlightTimesJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasArrivalDateTime)
          {
            storeArrivalDateTime->remove_reference();
          }
        flagHasArrivalDateTime = true;
        storeArrivalDateTime = new_value;
      }
    void unsetArrivalDateTime(void)
      {
        if (flagHasArrivalDateTime)
          {
            storeArrivalDateTime->remove_reference();
          }
        flagHasArrivalDateTime = false;
      }
    void setAirlineFlightNumber(AirlineFlightNumberJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasAirlineFlightNumber)
          {
            storeAirlineFlightNumber->remove_reference();
          }
        flagHasAirlineFlightNumber = true;
        storeAirlineFlightNumber = new_value;
      }
    void unsetAirlineFlightNumber(void)
      {
        if (flagHasAirlineFlightNumber)
          {
            storeAirlineFlightNumber->remove_reference();
          }
        flagHasAirlineFlightNumber = false;
      }
    void setOperatingCarrier(AirlineJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasOperatingCarrier)
          {
            storeOperatingCarrier->remove_reference();
          }
        flagHasOperatingCarrier = true;
        storeOperatingCarrier = new_value;
      }
    void unsetOperatingCarrier(void)
      {
        if (flagHasOperatingCarrier)
          {
            storeOperatingCarrier->remove_reference();
          }
        flagHasOperatingCarrier = false;
      }
    void setFlightDuration(double new_value)
      {
        flagHasFlightDuration = true;
        storeFlightDuration = new_value;
        textStoreFlightDuration = "";
      }
    void setFlightDurationText(std::string new_value)
      {
        flagHasFlightDuration = true;
        if (!(JSONWriter::is_valid_number_format(new_value.c_str())))
            throw("The text value for field FlightDuration of FlightSegmentJSON is not a valid number.");
        textStoreFlightDuration = new_value;
      }
    void unsetFlightDuration(void)
      {
        flagHasFlightDuration = false;
      }

    virtual void extraFlightSegmentAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraFlightSegmentSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraFlightSegmentLookup(key);
        if (old_field == NULL)
          {
            extraFlightSegmentAppendPair(key, new_component);
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
        assert(flagHasFlightSegmentID);
        handler->start_pair("FlightSegmentID");
        handler->string_value(storeFlightSegmentID);
        assert(flagHasDepartureAirport);
        handler->start_pair("DepartureAirport");
        storeDepartureAirport->write_as_json(handler);
        assert(flagHasArrivalAirport);
        handler->start_pair("ArrivalAirport");
        storeArrivalAirport->write_as_json(handler);
        assert(flagHasDepartureDateTime);
        handler->start_pair("DepartureDateTime");
        storeDepartureDateTime->write_as_json(handler);
        assert(flagHasArrivalDateTime);
        handler->start_pair("ArrivalDateTime");
        storeArrivalDateTime->write_as_json(handler);
        assert(flagHasAirlineFlightNumber);
        handler->start_pair("AirlineFlightNumber");
        storeAirlineFlightNumber->write_as_json(handler);
        if (flagHasOperatingCarrier)
          {
            handler->start_pair("OperatingCarrier");
            storeOperatingCarrier->write_as_json(handler);
          }
        assert(flagHasFlightDuration);
        handler->start_pair("FlightDuration");
        if (textStoreFlightDuration != "")
            handler->number_value(textStoreFlightDuration.c_str());
        else if (((double)(long int)storeFlightDuration) == storeFlightDuration)
            handler->number_value((long int)storeFlightDuration);
        else
            handler->number_value(storeFlightDuration);
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasFlightSegmentID()))
          {
            return "When parsing the object for %what%, the \"FlightSegmentID\" field was missing.";
          }
        if (!(hasDepartureAirport()))
          {
            return "When parsing the object for %what%, the \"DepartureAirport\" field was missing.";
          }
        if (!(hasArrivalAirport()))
          {
            return "When parsing the object for %what%, the \"ArrivalAirport\" field was missing.";
          }
        if (!(hasDepartureDateTime()))
          {
            return "When parsing the object for %what%, the \"DepartureDateTime\" field was missing.";
          }
        if (!(hasArrivalDateTime()))
          {
            return "When parsing the object for %what%, the \"ArrivalDateTime\" field was missing.";
          }
        if (!(hasAirlineFlightNumber()))
          {
            return "When parsing the object for %what%, the \"AirlineFlightNumber\" field was missing.";
          }
        if (!(hasFlightDuration()))
          {
            return "When parsing the object for %what%, the \"FlightDuration\" field was missing.";
          }
        return NULL;
      }

    static FlightSegmentJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static FlightSegmentJSON *from_text(const char *text, bool ignore_extras = false)
      {
        FlightSegmentJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<FlightSegmentJSON>, FlightSegmentJSON *, bool> generator("Type FlightSegment", ignore_extras);
            parse_json_value(text, "Text for FlightSegmentJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static FlightSegmentJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        FlightSegmentJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<FlightSegmentJSON>, FlightSegmentJSON *, bool> generator("Type FlightSegment", ignore_extras);
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
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorFlightSegmentID;
        JSONHoldingGenerator<FlightTravelLocationJSON::Generator, RCHandle<FlightTravelLocationJSON>, FlightTravelLocationJSON *, bool > fieldGeneratorDepartureAirport;
        JSONHoldingGenerator<FlightTravelLocationJSON::Generator, RCHandle<FlightTravelLocationJSON>, FlightTravelLocationJSON *, bool > fieldGeneratorArrivalAirport;
        JSONHoldingGenerator<FlightTimesJSON::Generator, RCHandle<FlightTimesJSON>, FlightTimesJSON *, bool > fieldGeneratorDepartureDateTime;
        JSONHoldingGenerator<FlightTimesJSON::Generator, RCHandle<FlightTimesJSON>, FlightTimesJSON *, bool > fieldGeneratorArrivalDateTime;
        JSONHoldingGenerator<AirlineFlightNumberJSON::Generator, RCHandle<AirlineFlightNumberJSON>, AirlineFlightNumberJSON *, bool > fieldGeneratorAirlineFlightNumber;
        JSONHoldingGenerator<AirlineJSON::Generator, RCHandle<AirlineJSON>, AirlineJSON *, bool > fieldGeneratorOperatingCarrier;
        JSONHoldingGenerator<JSONNumberTextGenerator, std::string, const char * > fieldGeneratorFlightDuration;
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
            FlightSegmentJSON *result = new FlightSegmentJSON();
            assert(result != NULL);
            RCHandle<FlightSegmentJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraFlightSegmentAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void finish(FlightSegmentJSON *result)
          {
            if (fieldGeneratorFlightSegmentID.have_value)
              {
                result->setFlightSegmentID(fieldGeneratorFlightSegmentID.value);
                fieldGeneratorFlightSegmentID.have_value = false;
              }
            else if (!(result->hasFlightSegmentID()))
              {
                error("When parsing the object for %what%, the \"FlightSegmentID\" field was missing.");
              }
            if (fieldGeneratorDepartureAirport.have_value)
              {
                result->setDepartureAirport(fieldGeneratorDepartureAirport.value.referenced());
                fieldGeneratorDepartureAirport.have_value = false;
              }
            else if (!(result->hasDepartureAirport()))
              {
                error("When parsing the object for %what%, the \"DepartureAirport\" field was missing.");
              }
            if (fieldGeneratorArrivalAirport.have_value)
              {
                result->setArrivalAirport(fieldGeneratorArrivalAirport.value.referenced());
                fieldGeneratorArrivalAirport.have_value = false;
              }
            else if (!(result->hasArrivalAirport()))
              {
                error("When parsing the object for %what%, the \"ArrivalAirport\" field was missing.");
              }
            if (fieldGeneratorDepartureDateTime.have_value)
              {
                result->setDepartureDateTime(fieldGeneratorDepartureDateTime.value.referenced());
                fieldGeneratorDepartureDateTime.have_value = false;
              }
            else if (!(result->hasDepartureDateTime()))
              {
                error("When parsing the object for %what%, the \"DepartureDateTime\" field was missing.");
              }
            if (fieldGeneratorArrivalDateTime.have_value)
              {
                result->setArrivalDateTime(fieldGeneratorArrivalDateTime.value.referenced());
                fieldGeneratorArrivalDateTime.have_value = false;
              }
            else if (!(result->hasArrivalDateTime()))
              {
                error("When parsing the object for %what%, the \"ArrivalDateTime\" field was missing.");
              }
            if (fieldGeneratorAirlineFlightNumber.have_value)
              {
                result->setAirlineFlightNumber(fieldGeneratorAirlineFlightNumber.value.referenced());
                fieldGeneratorAirlineFlightNumber.have_value = false;
              }
            else if (!(result->hasAirlineFlightNumber()))
              {
                error("When parsing the object for %what%, the \"AirlineFlightNumber\" field was missing.");
              }
            if (fieldGeneratorOperatingCarrier.have_value)
              {
                result->setOperatingCarrier(fieldGeneratorOperatingCarrier.value.referenced());
                fieldGeneratorOperatingCarrier.have_value = false;
              }
            if (fieldGeneratorFlightDuration.have_value)
              {
                result->setFlightDurationText(fieldGeneratorFlightDuration.value);
                fieldGeneratorFlightDuration.have_value = false;
              }
            else if (!(result->hasFlightDuration()))
              {
                error("When parsing the object for %what%, the \"FlightDuration\" field was missing.");
              }
          }
        virtual void handle_result(FlightSegmentJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'A':
                    switch ((unsigned char)(field_name[1]))
                      {
                        case 'i':
                            if (strcmp(&(field_name[2]), "rlineFlightNumber") == 0)
                                return &fieldGeneratorAirlineFlightNumber;
                            break;
                        case 'r':
                            if (strncmp(&(field_name[2]), "rival", 5) == 0)
                              {
                                switch ((unsigned char)(field_name[7]))
                                  {
                                    case 'A':
                                        if (strcmp(&(field_name[8]), "irport") == 0)
                                            return &fieldGeneratorArrivalAirport;
                                        break;
                                    case 'D':
                                        if (strcmp(&(field_name[8]), "ateTime") == 0)
                                            return &fieldGeneratorArrivalDateTime;
                                        break;
                                    default:
                                        break;
                                  }
                              }
                            break;
                        default:
                            break;
                      }
                    break;
                case 'D':
                    if (strncmp(&(field_name[1]), "eparture", 8) == 0)
                      {
                        switch ((unsigned char)(field_name[9]))
                          {
                            case 'A':
                                if (strcmp(&(field_name[10]), "irport") == 0)
                                    return &fieldGeneratorDepartureAirport;
                                break;
                            case 'D':
                                if (strcmp(&(field_name[10]), "ateTime") == 0)
                                    return &fieldGeneratorDepartureDateTime;
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 'F':
                    if (strncmp(&(field_name[1]), "light", 5) == 0)
                      {
                        switch ((unsigned char)(field_name[6]))
                          {
                            case 'D':
                                if (strcmp(&(field_name[7]), "uration") == 0)
                                    return &fieldGeneratorFlightDuration;
                                break;
                            case 'S':
                                if (strcmp(&(field_name[7]), "egmentID") == 0)
                                    return &fieldGeneratorFlightSegmentID;
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 'O':
                    if (strcmp(&(field_name[1]), "peratingCarrier") == 0)
                        return &fieldGeneratorOperatingCarrier;
                    break;
                default:
                    break;
              }
            return NULL;
          }

      public:
        Generator(bool ignore_extras = false) : fieldGeneratorFlightSegmentID("field \"FlightSegmentID\" of the FlightSegment class"), fieldGeneratorDepartureAirport("field \"DepartureAirport\" of the FlightSegment class", ignore_extras), fieldGeneratorArrivalAirport("field \"ArrivalAirport\" of the FlightSegment class", ignore_extras), fieldGeneratorDepartureDateTime("field \"DepartureDateTime\" of the FlightSegment class", ignore_extras), fieldGeneratorArrivalDateTime("field \"ArrivalDateTime\" of the FlightSegment class", ignore_extras), fieldGeneratorAirlineFlightNumber("field \"AirlineFlightNumber\" of the FlightSegment class", ignore_extras), fieldGeneratorOperatingCarrier("field \"OperatingCarrier\" of the FlightSegment class", ignore_extras), fieldGeneratorFlightDuration("field \"FlightDuration\" of the FlightSegment class"), unknownFieldGenerator(ignore_extras)
          {
            set_what("the FlightSegment class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorFlightSegmentID.reset();
            fieldGeneratorDepartureAirport.reset();
            fieldGeneratorArrivalAirport.reset();
            fieldGeneratorDepartureDateTime.reset();
            fieldGeneratorArrivalDateTime.reset();
            fieldGeneratorAirlineFlightNumber.reset();
            fieldGeneratorOperatingCarrier.reset();
            fieldGeneratorFlightDuration.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* FLIGHTSEGMENTJSON_H */
