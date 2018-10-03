/* file "FlightSortFieldJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef FLIGHTSORTFIELDJSON_H
#define FLIGHTSORTFIELDJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONStringGenerator.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class FlightSortFieldJSON : public ReferenceCounted
  {
  public:
    enum TypeValueKnownValues
      {
        Value_Price,
        Value_TravelDuration,
        Value_TotalLayoverDuration,
        Value_OutboundDepartureDate,
        Value_OutboundDepartureTime,
        Value_OutboundArrivalDate,
        Value_OutboundArrivalTime,
        Value_OutboundDepartureAirport,
        Value_OutboundDestinationAirport,
        Value_ReturnDepartureDate,
        Value_ReturnDepartureTime,
        Value_ReturnArrivalDate,
        Value_ReturnArrivalTime,
        Value_ReturnDepartureAirport,
        Value_ReturnDestinationAirport,
        Value_CabinClass,
        Value_Airline,
        Value__none
      };
    struct TypeValue
      {
        bool in_known_list;
        std::string string_value;
        TypeValueKnownValues list_value;

        TypeValue(void);
        TypeValue(const TypeValue &other);
        TypeValue(TypeValueKnownValues other);
        bool  operator==(const TypeValue &other) const;
        bool  operator!=(const TypeValue &other) const;
        bool  operator<(const TypeValue &other) const;
        bool  operator>(const TypeValue &other) const;
        bool  operator>=(const TypeValue &other) const;
        bool  operator<=(const TypeValue &other) const;

      };

    static TypeValueKnownValues  stringToValue(const char *chars);
    static const char * stringFromValue(TypeValueKnownValues the_enum);

  private:
    bool flagHasValue;
    TypeValue storeValue;

    FlightSortFieldJSON(const FlightSortFieldJSON &);
    FlightSortFieldJSON & operator=(const FlightSortFieldJSON &other);

    void  fromJSONValue(JSONValue *json_value, bool ignore_extras = false);


  public:
    FlightSortFieldJSON(void);
    FlightSortFieldJSON(TypeValue init_value);
    FlightSortFieldJSON(const char *init_value);
    FlightSortFieldJSON(std::string init_value);
    FlightSortFieldJSON(TypeValueKnownValues init_value);
    virtual ~FlightSortFieldJSON(void);
    bool  hasValue(void) const;
    TypeValue  getValue(void);
    const TypeValue  getValue(void) const;
    const char * getValueAsChars(void) const;
    std::string  getValueAsString(void) const;


    void setValue(TypeValue new_value)
      {
        flagHasValue = true;
        storeValue = new_value;
      }
    void setValue(const char *chars)
      {
        TypeValueKnownValues known = stringToValue(chars);
        TypeValue new_value;
        if (known == Value__none)
          {
            new_value.in_known_list = false;
            new_value.string_value = chars;
          }
        else
          {
            new_value.in_known_list = true;
            new_value.list_value = known;
          }
        setValue(new_value);
      }
    void setValue(std::string the_string)
      {
        setValue(the_string.c_str());
      }
    void setValue(TypeValueKnownValues new_value)
      {
        TypeValue new_full_value;
        assert(new_value != Value__none);
        new_full_value.in_known_list = true;
        new_full_value.list_value = new_value;
        setValue(new_full_value);
      }
    void unsetValue(void)
      {
        flagHasValue = false;
      }


    void write_as_json(JSONHandler *handler) const
      {
        if (storeValue.in_known_list)
          {
            switch (storeValue.list_value)
              {
                case Value_Price:
                    handler->string_value("Price");
                    break;
                case Value_TravelDuration:
                    handler->string_value("TravelDuration");
                    break;
                case Value_TotalLayoverDuration:
                    handler->string_value("TotalLayoverDuration");
                    break;
                case Value_OutboundDepartureDate:
                    handler->string_value("OutboundDepartureDate");
                    break;
                case Value_OutboundDepartureTime:
                    handler->string_value("OutboundDepartureTime");
                    break;
                case Value_OutboundArrivalDate:
                    handler->string_value("OutboundArrivalDate");
                    break;
                case Value_OutboundArrivalTime:
                    handler->string_value("OutboundArrivalTime");
                    break;
                case Value_OutboundDepartureAirport:
                    handler->string_value("OutboundDepartureAirport");
                    break;
                case Value_OutboundDestinationAirport:
                    handler->string_value("OutboundDestinationAirport");
                    break;
                case Value_ReturnDepartureDate:
                    handler->string_value("ReturnDepartureDate");
                    break;
                case Value_ReturnDepartureTime:
                    handler->string_value("ReturnDepartureTime");
                    break;
                case Value_ReturnArrivalDate:
                    handler->string_value("ReturnArrivalDate");
                    break;
                case Value_ReturnArrivalTime:
                    handler->string_value("ReturnArrivalTime");
                    break;
                case Value_ReturnDepartureAirport:
                    handler->string_value("ReturnDepartureAirport");
                    break;
                case Value_ReturnDestinationAirport:
                    handler->string_value("ReturnDestinationAirport");
                    break;
                case Value_CabinClass:
                    handler->string_value("CabinClass");
                    break;
                case Value_Airline:
                    handler->string_value("Airline");
                    break;
                default:
                    assert(false);
              }
          }
        else
          {
                    handler->string_value(storeValue.string_value);
          }
      }

    static FlightSortFieldJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static FlightSortFieldJSON *from_text(const char *text, bool ignore_extras = false)
      {
        FlightSortFieldJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<FlightSortFieldJSON>, FlightSortFieldJSON *, bool> generator("Type FlightSortField", ignore_extras);
            parse_json_value(text, "Text for FlightSortFieldJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static FlightSortFieldJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        FlightSortFieldJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<FlightSortFieldJSON>, FlightSortFieldJSON *, bool> generator("Type FlightSortField", ignore_extras);
            parse_json_value(fp, file_name, &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    class FieldGeneratorValue : public JSONStringGenerator
      {
      protected:
        FieldGeneratorValue(const char *what)
          {
            set_what(what);
          }
        FieldGeneratorValue(void)
          {
          }
        void handle_result(const char *result)
          {
            TypeValueKnownValues known = stringToValue(result);
            TypeValue new_value;
            if (known == Value__none)
              {
                new_value.in_known_list = false;
                new_value.string_value = result;
              }
            else
              {
                new_value.in_known_list = true;
                new_value.list_value = known;
              }
            handle_result(new_value);
          }
        virtual void handle_result(TypeValue result) = 0;
      };
    class Generator : public FieldGeneratorValue
      {
      protected:
        void handle_result(TypeValue new_value)
          {
            FlightSortFieldJSON *result = new FlightSortFieldJSON();
            result->setValue(new_value);
            handle_result(result);
          }
        virtual void handle_result(FlightSortFieldJSON *new_result) = 0;

      public:
        Generator(bool ignore_extras = false)
          {
          }
        ~Generator(void)  { }
      };
  };

#endif /* FLIGHTSORTFIELDJSON_H */
