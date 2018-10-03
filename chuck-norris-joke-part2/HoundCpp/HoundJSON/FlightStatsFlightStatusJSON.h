/* file "FlightStatsFlightStatusJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef FLIGHTSTATSFLIGHTSTATUSJSON_H
#define FLIGHTSTATSFLIGHTSTATUSJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONHoldingArrayGenerator.h"
#include "JSONStringGenerator.h"
#include "JSONIntegerUnboundRangeGenerator.h"
#include <vector>
#include <string>
#include "OInteger.h"
#include "FlightStatsAirlineJSON.h"
#include "FlightStatsAirportJSON.h"
#include "FlightStatsAirportJSON.h"
#include "FlightStatsAirportJSON.h"
#include "FlightStatsTimesJSON.h"
#include "FlightStatsTimesJSON.h"
#include "FlightStatsOperationalTimesJSON.h"
#include "FlightStatsCodeshareJSON.h"
#include "FlightStatsAirportResourcesJSON.h"
#include "FlightStatsEquipmentJSON.h"
#include "FlightStatsEquipmentJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class FlightStatsFlightStatusJSON : public ReferenceCounted
  {
  public:
    enum Typestatus
      {
        status_A,
        status_C,
        status_D,
        status_DN,
        status_L,
        status_NO,
        status_R,
        status_S,
        status_U
      };

    static Typestatus  stringTostatus(const char *chars);
    static const char * stringFromstatus(Typestatus the_enum);
    class TypeflightEquipmentJSON : public ReferenceCounted
      {
      private:
        bool flagHasscheduledEquipment;
        FlightStatsEquipmentJSON * storescheduledEquipment;
        bool flagHasscheduledEquipmentIataCode;
        std::string storescheduledEquipmentIataCode;
        bool flagHasactualEquipment;
        FlightStatsEquipmentJSON * storeactualEquipment;
        bool flagHasactualEquipmentIataCode;
        std::string storeactualEquipmentIataCode;
        bool flagHastailNumber;
        std::string storetailNumber;
        std::vector<std::string> extraKeys;
        std::vector<JSONValue *> extraValues;
        string_index *extraIndex;

        TypeflightEquipmentJSON(const TypeflightEquipmentJSON &);
        TypeflightEquipmentJSON & operator=(const TypeflightEquipmentJSON &other);

        void  fromJSONscheduledEquipment(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONscheduledEquipmentIataCode(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONactualEquipment(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONactualEquipmentIataCode(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONtailNumber(JSONValue *json_value, bool ignore_extras = false);


      public:
        TypeflightEquipmentJSON(void);
        virtual ~TypeflightEquipmentJSON(void);
        bool  hasscheduledEquipment(void) const;
        FlightStatsEquipmentJSON *  getscheduledEquipment(void);
        const FlightStatsEquipmentJSON *  getscheduledEquipment(void) const;
        bool  hasscheduledEquipmentIataCode(void) const;
        std::string  getscheduledEquipmentIataCode(void);
        const std::string  getscheduledEquipmentIataCode(void) const;
        bool  hasactualEquipment(void) const;
        FlightStatsEquipmentJSON *  getactualEquipment(void);
        const FlightStatsEquipmentJSON *  getactualEquipment(void) const;
        bool  hasactualEquipmentIataCode(void) const;
        std::string  getactualEquipmentIataCode(void);
        const std::string  getactualEquipmentIataCode(void) const;
        bool  hastailNumber(void) const;
        std::string  gettailNumber(void);
        const std::string  gettailNumber(void) const;

        virtual size_t extraTypeflightEquipmentComponentCount(void) const
          {
            assert(extraKeys.size() == extraValues.size());
            return extraKeys.size();
          }
        virtual const char *extraTypeflightEquipmentComponentKey(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraKeys[component_num].c_str();
          }
        virtual JSONValue *extraTypeflightEquipmentComponentValue(size_t component_num)
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        virtual const JSONValue *extraTypeflightEquipmentComponentValue(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        virtual JSONValue *extraTypeflightEquipmentLookup(const char *field_name)
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }
        virtual const JSONValue *extraTypeflightEquipmentLookup(const char *field_name) const
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }

        void setscheduledEquipment(FlightStatsEquipmentJSON * new_value)
          {
            new_value->add_reference();
            if (flagHasscheduledEquipment)
              {
                storescheduledEquipment->remove_reference();
              }
            flagHasscheduledEquipment = true;
            storescheduledEquipment = new_value;
          }
        void unsetscheduledEquipment(void)
          {
            if (flagHasscheduledEquipment)
              {
                storescheduledEquipment->remove_reference();
              }
            flagHasscheduledEquipment = false;
          }
        void setscheduledEquipmentIataCode(std::string new_value)
          {
            flagHasscheduledEquipmentIataCode = true;
            storescheduledEquipmentIataCode = new_value;
          }
        void unsetscheduledEquipmentIataCode(void)
          {
            flagHasscheduledEquipmentIataCode = false;
          }
        void setactualEquipment(FlightStatsEquipmentJSON * new_value)
          {
            new_value->add_reference();
            if (flagHasactualEquipment)
              {
                storeactualEquipment->remove_reference();
              }
            flagHasactualEquipment = true;
            storeactualEquipment = new_value;
          }
        void unsetactualEquipment(void)
          {
            if (flagHasactualEquipment)
              {
                storeactualEquipment->remove_reference();
              }
            flagHasactualEquipment = false;
          }
        void setactualEquipmentIataCode(std::string new_value)
          {
            flagHasactualEquipmentIataCode = true;
            storeactualEquipmentIataCode = new_value;
          }
        void unsetactualEquipmentIataCode(void)
          {
            flagHasactualEquipmentIataCode = false;
          }
        void settailNumber(std::string new_value)
          {
            flagHastailNumber = true;
            storetailNumber = new_value;
          }
        void unsettailNumber(void)
          {
            flagHastailNumber = false;
          }

        virtual void extraTypeflightEquipmentAppendPair(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            assert(extraKeys.size() == extraValues.size());
            extraKeys.push_back(key);
            extraValues.push_back(new_component);
            enter_into_string_index(extraIndex, key, new_component);
            new_component->add_reference();
          }
        virtual void extraTypeflightEquipmentSetField(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            JSONValue *old_field = extraTypeflightEquipmentLookup(key);
            if (old_field == NULL)
              {
                extraTypeflightEquipmentAppendPair(key, new_component);
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
            if (flagHasscheduledEquipment)
              {
                handler->start_pair("scheduledEquipment");
                storescheduledEquipment->write_as_json(handler);
              }
            if (flagHasscheduledEquipmentIataCode)
              {
                handler->start_pair("scheduledEquipmentIataCode");
                handler->string_value(storescheduledEquipmentIataCode);
              }
            if (flagHasactualEquipment)
              {
                handler->start_pair("actualEquipment");
                storeactualEquipment->write_as_json(handler);
              }
            if (flagHasactualEquipmentIataCode)
              {
                handler->start_pair("actualEquipmentIataCode");
                handler->string_value(storeactualEquipmentIataCode);
              }
            if (flagHastailNumber)
              {
                handler->start_pair("tailNumber");
                handler->string_value(storetailNumber);
              }
          }
        virtual const char *missing_field_error(void) const
          {
            return NULL;
          }

        static TypeflightEquipmentJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
        static TypeflightEquipmentJSON *from_text(const char *text, bool ignore_extras = false)
          {
            TypeflightEquipmentJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeflightEquipmentJSON>, TypeflightEquipmentJSON *, bool> generator("Type TypeflightEquipment", ignore_extras);
                parse_json_value(text, "Text for TypeflightEquipmentJSON", &generator);
                assert(generator.have_value);
                result = generator.value.referenced();
                result->add_reference();
              };
            result->remove_reference_no_delete();
            return result;
          }
        static TypeflightEquipmentJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
          {
            TypeflightEquipmentJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeflightEquipmentJSON>, TypeflightEquipmentJSON *, bool> generator("Type TypeflightEquipment", ignore_extras);
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
            JSONHoldingGenerator<FlightStatsEquipmentJSON::Generator, RCHandle<FlightStatsEquipmentJSON>, FlightStatsEquipmentJSON *, bool > fieldGeneratorscheduledEquipment;
            JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorscheduledEquipmentIataCode;
            JSONHoldingGenerator<FlightStatsEquipmentJSON::Generator, RCHandle<FlightStatsEquipmentJSON>, FlightStatsEquipmentJSON *, bool > fieldGeneratoractualEquipment;
            JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratoractualEquipmentIataCode;
            JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratortailNumber;
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
                TypeflightEquipmentJSON *result = new TypeflightEquipmentJSON();
                assert(result != NULL);
                RCHandle<TypeflightEquipmentJSON> result_holder = result;
                finish(result);
                size_t extra_count = unknownFieldGenerator.field_names.size();
                assert(extra_count == unknownFieldGenerator.field_values.size());
                for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
                  {
                    result->extraTypeflightEquipmentAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
                  }
                unknownFieldGenerator.field_names.clear();
                unknownFieldGenerator.field_values.clear();
                destroy_string_index(unknownFieldGenerator.index);
            unknownFieldGenerator.index = create_string_index();
                handle_result(result);
              }
            void finish(TypeflightEquipmentJSON *result)
              {
                if (fieldGeneratorscheduledEquipment.have_value)
                  {
                    result->setscheduledEquipment(fieldGeneratorscheduledEquipment.value.referenced());
                    fieldGeneratorscheduledEquipment.have_value = false;
                  }
                if (fieldGeneratorscheduledEquipmentIataCode.have_value)
                  {
                    result->setscheduledEquipmentIataCode(fieldGeneratorscheduledEquipmentIataCode.value);
                    fieldGeneratorscheduledEquipmentIataCode.have_value = false;
                  }
                if (fieldGeneratoractualEquipment.have_value)
                  {
                    result->setactualEquipment(fieldGeneratoractualEquipment.value.referenced());
                    fieldGeneratoractualEquipment.have_value = false;
                  }
                if (fieldGeneratoractualEquipmentIataCode.have_value)
                  {
                    result->setactualEquipmentIataCode(fieldGeneratoractualEquipmentIataCode.value);
                    fieldGeneratoractualEquipmentIataCode.have_value = false;
                  }
                if (fieldGeneratortailNumber.have_value)
                  {
                    result->settailNumber(fieldGeneratortailNumber.value);
                    fieldGeneratortailNumber.have_value = false;
                  }
              }
            virtual void handle_result(TypeflightEquipmentJSON *new_result) = 0;
            virtual JSONHandler *start_known_field(const char *field_name)
              {
                switch ((unsigned char)(field_name[0]))
                  {
                    case 'a':
                        if (strncmp(&(field_name[1]), "ctualEquipment", 14) == 0)
                          {
                            switch ((unsigned char)(field_name[15]))
                              {
                                case 0:
                                    return &fieldGeneratoractualEquipment;
                                case 'I':
                                    if (strcmp(&(field_name[16]), "ataCode") == 0)
                                        return &fieldGeneratoractualEquipmentIataCode;
                                    break;
                                default:
                                    break;
                              }
                          }
                        break;
                    case 's':
                        if (strncmp(&(field_name[1]), "cheduledEquipment", 17) == 0)
                          {
                            switch ((unsigned char)(field_name[18]))
                              {
                                case 0:
                                    return &fieldGeneratorscheduledEquipment;
                                case 'I':
                                    if (strcmp(&(field_name[19]), "ataCode") == 0)
                                        return &fieldGeneratorscheduledEquipmentIataCode;
                                    break;
                                default:
                                    break;
                              }
                          }
                        break;
                    case 't':
                        if (strcmp(&(field_name[1]), "ailNumber") == 0)
                            return &fieldGeneratortailNumber;
                        break;
                    default:
                        break;
                  }
                return NULL;
              }

          public:
            Generator(bool ignore_extras = false) : fieldGeneratorscheduledEquipment("field \"scheduledEquipment\" of the TypeflightEquipment class", ignore_extras), fieldGeneratorscheduledEquipmentIataCode("field \"scheduledEquipmentIataCode\" of the TypeflightEquipment class"), fieldGeneratoractualEquipment("field \"actualEquipment\" of the TypeflightEquipment class", ignore_extras), fieldGeneratoractualEquipmentIataCode("field \"actualEquipmentIataCode\" of the TypeflightEquipment class"), fieldGeneratortailNumber("field \"tailNumber\" of the TypeflightEquipment class"), unknownFieldGenerator(ignore_extras)
              {
                set_what("the TypeflightEquipment class");
              }
            ~Generator(void)
              {
              }

            void reset(void)
              {
                fieldGeneratorscheduledEquipment.reset();
                fieldGeneratorscheduledEquipmentIataCode.reset();
                fieldGeneratoractualEquipment.reset();
                fieldGeneratoractualEquipmentIataCode.reset();
                fieldGeneratortailNumber.reset();
                JSONObjectGenerator::reset();
                unknownFieldGenerator.reset();
              }
          };
      };

  private:
    bool flagHasflightId;
    OInteger storeflightId;
    bool flagHascarrier;
    FlightStatsAirlineJSON * storecarrier;
    bool flagHasflightNumber;
    std::string storeflightNumber;
    bool flagHasdepartureAirport;
    FlightStatsAirportJSON * storedepartureAirport;
    bool flagHasarrivalAirport;
    FlightStatsAirportJSON * storearrivalAirport;
    bool flagHasdivertedAirport;
    FlightStatsAirportJSON * storedivertedAirport;
    bool flagHasdepartureDate;
    FlightStatsTimesJSON * storedepartureDate;
    bool flagHasarrivalDate;
    FlightStatsTimesJSON * storearrivalDate;
    bool flagHasstatus;
    Typestatus storestatus;
    bool flagHasoperationalTimes;
    FlightStatsOperationalTimesJSON * storeoperationalTimes;
    bool flagHascodeshares;
    std::vector< FlightStatsCodeshareJSON * > storecodeshares;
    bool flagHasairportResources;
    FlightStatsAirportResourcesJSON * storeairportResources;
    bool flagHasflightEquipment;
    TypeflightEquipmentJSON * storeflightEquipment;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    FlightStatsFlightStatusJSON(const FlightStatsFlightStatusJSON &);
    FlightStatsFlightStatusJSON & operator=(const FlightStatsFlightStatusJSON &other);

    void  fromJSONflightId(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONcarrier(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONflightNumber(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONdepartureAirport(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONarrivalAirport(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONdivertedAirport(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONdepartureDate(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONarrivalDate(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONstatus(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONoperationalTimes(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONcodeshares(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONairportResources(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONflightEquipment(JSONValue *json_value, bool ignore_extras = false);


  public:
    FlightStatsFlightStatusJSON(void);
    virtual ~FlightStatsFlightStatusJSON(void);
    bool  hasflightId(void) const;
    OInteger  getflightId(void);
    const OInteger  getflightId(void) const;
    bool  hascarrier(void) const;
    FlightStatsAirlineJSON *  getcarrier(void);
    const FlightStatsAirlineJSON *  getcarrier(void) const;
    bool  hasflightNumber(void) const;
    std::string  getflightNumber(void);
    const std::string  getflightNumber(void) const;
    bool  hasdepartureAirport(void) const;
    FlightStatsAirportJSON *  getdepartureAirport(void);
    const FlightStatsAirportJSON *  getdepartureAirport(void) const;
    bool  hasarrivalAirport(void) const;
    FlightStatsAirportJSON *  getarrivalAirport(void);
    const FlightStatsAirportJSON *  getarrivalAirport(void) const;
    bool  hasdivertedAirport(void) const;
    FlightStatsAirportJSON *  getdivertedAirport(void);
    const FlightStatsAirportJSON *  getdivertedAirport(void) const;
    bool  hasdepartureDate(void) const;
    FlightStatsTimesJSON *  getdepartureDate(void);
    const FlightStatsTimesJSON *  getdepartureDate(void) const;
    bool  hasarrivalDate(void) const;
    FlightStatsTimesJSON *  getarrivalDate(void);
    const FlightStatsTimesJSON *  getarrivalDate(void) const;
    bool  hasstatus(void) const;
    Typestatus  getstatus(void);
    const Typestatus  getstatus(void) const;
    const char * getstatusAsChars(void) const;
    std::string  getstatusAsString(void) const;
    bool  hasoperationalTimes(void) const;
    FlightStatsOperationalTimesJSON *  getoperationalTimes(void);
    const FlightStatsOperationalTimesJSON *  getoperationalTimes(void) const;
    bool  hascodeshares(void) const;
    size_t  countOfcodeshares(void) const;
    FlightStatsCodeshareJSON *  elementOfcodeshares(size_t element_num);
    const FlightStatsCodeshareJSON *  elementOfcodeshares(size_t element_num) const;
    std::vector< FlightStatsCodeshareJSON * >  getcodeshares(void);
    const std::vector< FlightStatsCodeshareJSON * >  getcodeshares(void) const;
    bool  hasairportResources(void) const;
    FlightStatsAirportResourcesJSON *  getairportResources(void);
    const FlightStatsAirportResourcesJSON *  getairportResources(void) const;
    bool  hasflightEquipment(void) const;
    TypeflightEquipmentJSON *  getflightEquipment(void);
    const TypeflightEquipmentJSON *  getflightEquipment(void) const;

    virtual size_t extraFlightStatsFlightStatusComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraFlightStatsFlightStatusComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraFlightStatsFlightStatusComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraFlightStatsFlightStatusComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraFlightStatsFlightStatusLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraFlightStatsFlightStatusLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }

    void setflightId(OInteger new_value)
      {
        flagHasflightId = true;
        storeflightId = new_value;
      }
    void unsetflightId(void)
      {
        flagHasflightId = false;
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
    void setdepartureAirport(FlightStatsAirportJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasdepartureAirport)
          {
            storedepartureAirport->remove_reference();
          }
        flagHasdepartureAirport = true;
        storedepartureAirport = new_value;
      }
    void unsetdepartureAirport(void)
      {
        if (flagHasdepartureAirport)
          {
            storedepartureAirport->remove_reference();
          }
        flagHasdepartureAirport = false;
      }
    void setarrivalAirport(FlightStatsAirportJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasarrivalAirport)
          {
            storearrivalAirport->remove_reference();
          }
        flagHasarrivalAirport = true;
        storearrivalAirport = new_value;
      }
    void unsetarrivalAirport(void)
      {
        if (flagHasarrivalAirport)
          {
            storearrivalAirport->remove_reference();
          }
        flagHasarrivalAirport = false;
      }
    void setdivertedAirport(FlightStatsAirportJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasdivertedAirport)
          {
            storedivertedAirport->remove_reference();
          }
        flagHasdivertedAirport = true;
        storedivertedAirport = new_value;
      }
    void unsetdivertedAirport(void)
      {
        if (flagHasdivertedAirport)
          {
            storedivertedAirport->remove_reference();
          }
        flagHasdivertedAirport = false;
      }
    void setdepartureDate(FlightStatsTimesJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasdepartureDate)
          {
            storedepartureDate->remove_reference();
          }
        flagHasdepartureDate = true;
        storedepartureDate = new_value;
      }
    void unsetdepartureDate(void)
      {
        if (flagHasdepartureDate)
          {
            storedepartureDate->remove_reference();
          }
        flagHasdepartureDate = false;
      }
    void setarrivalDate(FlightStatsTimesJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasarrivalDate)
          {
            storearrivalDate->remove_reference();
          }
        flagHasarrivalDate = true;
        storearrivalDate = new_value;
      }
    void unsetarrivalDate(void)
      {
        if (flagHasarrivalDate)
          {
            storearrivalDate->remove_reference();
          }
        flagHasarrivalDate = false;
      }
    void setstatus(Typestatus new_value)
      {
        flagHasstatus = true;
        storestatus = new_value;
      }
    void setstatus(const char *chars)
      {
        setstatus(stringTostatus(chars));
      }
    void setstatus(std::string the_string)
      {
        setstatus(stringTostatus(the_string.c_str()));
      }
    void unsetstatus(void)
      {
        flagHasstatus = false;
      }
    void setoperationalTimes(FlightStatsOperationalTimesJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasoperationalTimes)
          {
            storeoperationalTimes->remove_reference();
          }
        flagHasoperationalTimes = true;
        storeoperationalTimes = new_value;
      }
    void unsetoperationalTimes(void)
      {
        if (flagHasoperationalTimes)
          {
            storeoperationalTimes->remove_reference();
          }
        flagHasoperationalTimes = false;
      }
    void initcodeshares(void)
      {
        if (flagHascodeshares)
          {
            for (size_t num2 = 0; num2 < storecodeshares.size(); ++num2)
              {
                storecodeshares[num2]->remove_reference();
              }
          }
        flagHascodeshares = true;
        storecodeshares.clear();
      }
    void appendcodeshares(FlightStatsCodeshareJSON * to_append)
      {
        if (!flagHascodeshares)
          {
            flagHascodeshares = true;
            storecodeshares.clear();
          }
        assert(flagHascodeshares);
        to_append->add_reference();
        storecodeshares.push_back(to_append);
      }
    void unsetcodeshares(void)
      {
        if (flagHascodeshares)
          {
            for (size_t num3 = 0; num3 < storecodeshares.size(); ++num3)
              {
                storecodeshares[num3]->remove_reference();
              }
          }
        flagHascodeshares = false;
        storecodeshares.clear();
      }
    void setairportResources(FlightStatsAirportResourcesJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasairportResources)
          {
            storeairportResources->remove_reference();
          }
        flagHasairportResources = true;
        storeairportResources = new_value;
      }
    void unsetairportResources(void)
      {
        if (flagHasairportResources)
          {
            storeairportResources->remove_reference();
          }
        flagHasairportResources = false;
      }
    void setflightEquipment(TypeflightEquipmentJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasflightEquipment)
          {
            storeflightEquipment->remove_reference();
          }
        flagHasflightEquipment = true;
        storeflightEquipment = new_value;
      }
    void unsetflightEquipment(void)
      {
        if (flagHasflightEquipment)
          {
            storeflightEquipment->remove_reference();
          }
        flagHasflightEquipment = false;
      }

    virtual void extraFlightStatsFlightStatusAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraFlightStatsFlightStatusSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraFlightStatsFlightStatusLookup(key);
        if (old_field == NULL)
          {
            extraFlightStatsFlightStatusAppendPair(key, new_component);
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
        assert(flagHasflightId);
        handler->start_pair("flightId");
        handler->number_value(storeflightId.get_o_integer());
        if (flagHascarrier)
          {
            handler->start_pair("carrier");
            storecarrier->write_as_json(handler);
          }
        assert(flagHasflightNumber);
        handler->start_pair("flightNumber");
        handler->string_value(storeflightNumber);
        if (flagHasdepartureAirport)
          {
            handler->start_pair("departureAirport");
            storedepartureAirport->write_as_json(handler);
          }
        if (flagHasarrivalAirport)
          {
            handler->start_pair("arrivalAirport");
            storearrivalAirport->write_as_json(handler);
          }
        if (flagHasdivertedAirport)
          {
            handler->start_pair("divertedAirport");
            storedivertedAirport->write_as_json(handler);
          }
        assert(flagHasdepartureDate);
        handler->start_pair("departureDate");
        storedepartureDate->write_as_json(handler);
        assert(flagHasarrivalDate);
        handler->start_pair("arrivalDate");
        storearrivalDate->write_as_json(handler);
        assert(flagHasstatus);
        handler->start_pair("status");
        switch (storestatus)
          {
            case status_A:
                handler->string_value("A");
                break;
            case status_C:
                handler->string_value("C");
                break;
            case status_D:
                handler->string_value("D");
                break;
            case status_DN:
                handler->string_value("DN");
                break;
            case status_L:
                handler->string_value("L");
                break;
            case status_NO:
                handler->string_value("NO");
                break;
            case status_R:
                handler->string_value("R");
                break;
            case status_S:
                handler->string_value("S");
                break;
            case status_U:
                handler->string_value("U");
                break;
            default:
                assert(false);
          }
        assert(flagHasoperationalTimes);
        handler->start_pair("operationalTimes");
        storeoperationalTimes->write_as_json(handler);
        if (flagHascodeshares)
          {
            handler->start_pair("codeshares");
            handler->start_array();
            for (size_t num1 = 0; num1 < storecodeshares.size(); ++num1)
              {
                storecodeshares[num1]->write_as_json(handler);
              }
            handler->finish_array();
          }
        if (flagHasairportResources)
          {
            handler->start_pair("airportResources");
            storeairportResources->write_as_json(handler);
          }
        if (flagHasflightEquipment)
          {
            handler->start_pair("flightEquipment");
            storeflightEquipment->write_as_json(handler);
          }
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasflightId()))
          {
            return "When parsing the object for %what%, the \"flightId\" field was missing.";
          }
        if (!(hasflightNumber()))
          {
            return "When parsing the object for %what%, the \"flightNumber\" field was missing.";
          }
        if (!(hasdepartureDate()))
          {
            return "When parsing the object for %what%, the \"departureDate\" field was missing.";
          }
        if (!(hasarrivalDate()))
          {
            return "When parsing the object for %what%, the \"arrivalDate\" field was missing.";
          }
        if (!(hasstatus()))
          {
            return "When parsing the object for %what%, the \"status\" field was missing.";
          }
        if (!(hasoperationalTimes()))
          {
            return "When parsing the object for %what%, the \"operationalTimes\" field was missing.";
          }
        return NULL;
      }

    static FlightStatsFlightStatusJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static FlightStatsFlightStatusJSON *from_text(const char *text, bool ignore_extras = false)
      {
        FlightStatsFlightStatusJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<FlightStatsFlightStatusJSON>, FlightStatsFlightStatusJSON *, bool> generator("Type FlightStatsFlightStatus", ignore_extras);
            parse_json_value(text, "Text for FlightStatsFlightStatusJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static FlightStatsFlightStatusJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        FlightStatsFlightStatusJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<FlightStatsFlightStatusJSON>, FlightStatsFlightStatusJSON *, bool> generator("Type FlightStatsFlightStatus", ignore_extras);
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
        JSONHoldingGenerator<JSONIntegerUnboundRangeGenerator, OInteger, o_integer > fieldGeneratorflightId;
        JSONHoldingGenerator<FlightStatsAirlineJSON::Generator, RCHandle<FlightStatsAirlineJSON>, FlightStatsAirlineJSON *, bool > fieldGeneratorcarrier;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorflightNumber;
        JSONHoldingGenerator<FlightStatsAirportJSON::Generator, RCHandle<FlightStatsAirportJSON>, FlightStatsAirportJSON *, bool > fieldGeneratordepartureAirport;
        JSONHoldingGenerator<FlightStatsAirportJSON::Generator, RCHandle<FlightStatsAirportJSON>, FlightStatsAirportJSON *, bool > fieldGeneratorarrivalAirport;
        JSONHoldingGenerator<FlightStatsAirportJSON::Generator, RCHandle<FlightStatsAirportJSON>, FlightStatsAirportJSON *, bool > fieldGeneratordivertedAirport;
        JSONHoldingGenerator<FlightStatsTimesJSON::Generator, RCHandle<FlightStatsTimesJSON>, FlightStatsTimesJSON *, bool > fieldGeneratordepartureDate;
        JSONHoldingGenerator<FlightStatsTimesJSON::Generator, RCHandle<FlightStatsTimesJSON>, FlightStatsTimesJSON *, bool > fieldGeneratorarrivalDate;
    class FieldGeneratorstatus : public JSONStringGenerator
          {
          protected:
            FieldGeneratorstatus(const char *what)
              {
                set_what(what);
              }
            FieldGeneratorstatus(void)
              {
              }
            void handle_result(const char *result)
              {
                handle_result(stringTostatus(result));
              }
            virtual void handle_result(Typestatus result) = 0;
          };
        JSONHoldingGenerator<FieldGeneratorstatus, Typestatus, Typestatus > fieldGeneratorstatus;
        JSONHoldingGenerator<FlightStatsOperationalTimesJSON::Generator, RCHandle<FlightStatsOperationalTimesJSON>, FlightStatsOperationalTimesJSON *, bool > fieldGeneratoroperationalTimes;
        JSONHoldingArrayGenerator<FlightStatsCodeshareJSON::Generator, RCHandle<FlightStatsCodeshareJSON>, FlightStatsCodeshareJSON *, bool > fieldGeneratorcodeshares;
        JSONHoldingGenerator<FlightStatsAirportResourcesJSON::Generator, RCHandle<FlightStatsAirportResourcesJSON>, FlightStatsAirportResourcesJSON *, bool > fieldGeneratorairportResources;
        JSONHoldingGenerator<TypeflightEquipmentJSON::Generator, RCHandle<TypeflightEquipmentJSON>, TypeflightEquipmentJSON *, bool > fieldGeneratorflightEquipment;
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
            FlightStatsFlightStatusJSON *result = new FlightStatsFlightStatusJSON();
            assert(result != NULL);
            RCHandle<FlightStatsFlightStatusJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraFlightStatsFlightStatusAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void finish(FlightStatsFlightStatusJSON *result)
          {
            if (fieldGeneratorflightId.have_value)
              {
                result->setflightId(fieldGeneratorflightId.value);
                fieldGeneratorflightId.have_value = false;
              }
            else if (!(result->hasflightId()))
              {
                error("When parsing the object for %what%, the \"flightId\" field was missing.");
              }
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
            else if (!(result->hasflightNumber()))
              {
                error("When parsing the object for %what%, the \"flightNumber\" field was missing.");
              }
            if (fieldGeneratordepartureAirport.have_value)
              {
                result->setdepartureAirport(fieldGeneratordepartureAirport.value.referenced());
                fieldGeneratordepartureAirport.have_value = false;
              }
            if (fieldGeneratorarrivalAirport.have_value)
              {
                result->setarrivalAirport(fieldGeneratorarrivalAirport.value.referenced());
                fieldGeneratorarrivalAirport.have_value = false;
              }
            if (fieldGeneratordivertedAirport.have_value)
              {
                result->setdivertedAirport(fieldGeneratordivertedAirport.value.referenced());
                fieldGeneratordivertedAirport.have_value = false;
              }
            if (fieldGeneratordepartureDate.have_value)
              {
                result->setdepartureDate(fieldGeneratordepartureDate.value.referenced());
                fieldGeneratordepartureDate.have_value = false;
              }
            else if (!(result->hasdepartureDate()))
              {
                error("When parsing the object for %what%, the \"departureDate\" field was missing.");
              }
            if (fieldGeneratorarrivalDate.have_value)
              {
                result->setarrivalDate(fieldGeneratorarrivalDate.value.referenced());
                fieldGeneratorarrivalDate.have_value = false;
              }
            else if (!(result->hasarrivalDate()))
              {
                error("When parsing the object for %what%, the \"arrivalDate\" field was missing.");
              }
            if (fieldGeneratorstatus.have_value)
              {
                result->setstatus(fieldGeneratorstatus.value);
                fieldGeneratorstatus.have_value = false;
              }
            else if (!(result->hasstatus()))
              {
                error("When parsing the object for %what%, the \"status\" field was missing.");
              }
            if (fieldGeneratoroperationalTimes.have_value)
              {
                result->setoperationalTimes(fieldGeneratoroperationalTimes.value.referenced());
                fieldGeneratoroperationalTimes.have_value = false;
              }
            else if (!(result->hasoperationalTimes()))
              {
                error("When parsing the object for %what%, the \"operationalTimes\" field was missing.");
              }
            if (fieldGeneratorcodeshares.have_value)
              {
                result->initcodeshares();
                size_t count = fieldGeneratorcodeshares.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendcodeshares(fieldGeneratorcodeshares.value[num].referenced());
                  }
                fieldGeneratorcodeshares.value.clear();
                fieldGeneratorcodeshares.have_value = false;
              }
            if (fieldGeneratorairportResources.have_value)
              {
                result->setairportResources(fieldGeneratorairportResources.value.referenced());
                fieldGeneratorairportResources.have_value = false;
              }
            if (fieldGeneratorflightEquipment.have_value)
              {
                result->setflightEquipment(fieldGeneratorflightEquipment.value.referenced());
                fieldGeneratorflightEquipment.have_value = false;
              }
          }
        virtual void handle_result(FlightStatsFlightStatusJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'a':
                    switch ((unsigned char)(field_name[1]))
                      {
                        case 'i':
                            if (strcmp(&(field_name[2]), "rportResources") == 0)
                                return &fieldGeneratorairportResources;
                            break;
                        case 'r':
                            if (strncmp(&(field_name[2]), "rival", 5) == 0)
                              {
                                switch ((unsigned char)(field_name[7]))
                                  {
                                    case 'A':
                                        if (strcmp(&(field_name[8]), "irport") == 0)
                                            return &fieldGeneratorarrivalAirport;
                                        break;
                                    case 'D':
                                        if (strcmp(&(field_name[8]), "ate") == 0)
                                            return &fieldGeneratorarrivalDate;
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
                case 'c':
                    switch ((unsigned char)(field_name[1]))
                      {
                        case 'a':
                            if (strcmp(&(field_name[2]), "rrier") == 0)
                                return &fieldGeneratorcarrier;
                            break;
                        case 'o':
                            if (strcmp(&(field_name[2]), "deshares") == 0)
                                return &fieldGeneratorcodeshares;
                            break;
                        default:
                            break;
                      }
                    break;
                case 'd':
                    switch ((unsigned char)(field_name[1]))
                      {
                        case 'e':
                            if (strncmp(&(field_name[2]), "parture", 7) == 0)
                              {
                                switch ((unsigned char)(field_name[9]))
                                  {
                                    case 'A':
                                        if (strcmp(&(field_name[10]), "irport") == 0)
                                            return &fieldGeneratordepartureAirport;
                                        break;
                                    case 'D':
                                        if (strcmp(&(field_name[10]), "ate") == 0)
                                            return &fieldGeneratordepartureDate;
                                        break;
                                    default:
                                        break;
                                  }
                              }
                            break;
                        case 'i':
                            if (strcmp(&(field_name[2]), "vertedAirport") == 0)
                                return &fieldGeneratordivertedAirport;
                            break;
                        default:
                            break;
                      }
                    break;
                case 'f':
                    if (strncmp(&(field_name[1]), "light", 5) == 0)
                      {
                        switch ((unsigned char)(field_name[6]))
                          {
                            case 'E':
                                if (strcmp(&(field_name[7]), "quipment") == 0)
                                    return &fieldGeneratorflightEquipment;
                                break;
                            case 'I':
                                if (strcmp(&(field_name[7]), "d") == 0)
                                    return &fieldGeneratorflightId;
                                break;
                            case 'N':
                                if (strcmp(&(field_name[7]), "umber") == 0)
                                    return &fieldGeneratorflightNumber;
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 'o':
                    if (strcmp(&(field_name[1]), "perationalTimes") == 0)
                        return &fieldGeneratoroperationalTimes;
                    break;
                case 's':
                    if (strcmp(&(field_name[1]), "tatus") == 0)
                        return &fieldGeneratorstatus;
                    break;
                default:
                    break;
              }
            return NULL;
          }

      public:
        Generator(bool ignore_extras = false) : fieldGeneratorflightId("field \"flightId\" of the FlightStatsFlightStatus class"), fieldGeneratorcarrier("field \"carrier\" of the FlightStatsFlightStatus class", ignore_extras), fieldGeneratorflightNumber("field \"flightNumber\" of the FlightStatsFlightStatus class"), fieldGeneratordepartureAirport("field \"departureAirport\" of the FlightStatsFlightStatus class", ignore_extras), fieldGeneratorarrivalAirport("field \"arrivalAirport\" of the FlightStatsFlightStatus class", ignore_extras), fieldGeneratordivertedAirport("field \"divertedAirport\" of the FlightStatsFlightStatus class", ignore_extras), fieldGeneratordepartureDate("field \"departureDate\" of the FlightStatsFlightStatus class", ignore_extras), fieldGeneratorarrivalDate("field \"arrivalDate\" of the FlightStatsFlightStatus class", ignore_extras), fieldGeneratorstatus("field \"status\" of the FlightStatsFlightStatus class"), fieldGeneratoroperationalTimes("field \"operationalTimes\" of the FlightStatsFlightStatus class", ignore_extras), fieldGeneratorcodeshares("field \"codeshares\" of the FlightStatsFlightStatus class", ignore_extras), fieldGeneratorairportResources("field \"airportResources\" of the FlightStatsFlightStatus class", ignore_extras), fieldGeneratorflightEquipment("field \"flightEquipment\" of the FlightStatsFlightStatus class", ignore_extras), unknownFieldGenerator(ignore_extras)
          {
            set_what("the FlightStatsFlightStatus class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorflightId.reset();
            fieldGeneratorcarrier.reset();
            fieldGeneratorflightNumber.reset();
            fieldGeneratordepartureAirport.reset();
            fieldGeneratorarrivalAirport.reset();
            fieldGeneratordivertedAirport.reset();
            fieldGeneratordepartureDate.reset();
            fieldGeneratorarrivalDate.reset();
            fieldGeneratorstatus.reset();
            fieldGeneratoroperationalTimes.reset();
            fieldGeneratorcodeshares.reset();
            fieldGeneratorairportResources.reset();
            fieldGeneratorflightEquipment.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* FLIGHTSTATSFLIGHTSTATUSJSON_H */
