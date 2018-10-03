/* file "FlightAttributeJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef FLIGHTATTRIBUTEJSON_H
#define FLIGHTATTRIBUTEJSON_H

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


class FlightAttributeJSON : public ReferenceCounted
  {
  public:
    enum TypeValue
      {
        Value_Status,
        Value_DepartureInformation,
        Value_DepartureTime,
        Value_HasDeparted,
        Value_DepartureLocation,
        Value_DepartureAirport,
        Value_DepartureTerminal,
        Value_DepartureGate,
        Value_ArrivalInformation,
        Value_ArrivalTime,
        Value_HasArrived,
        Value_ArrivalLocation,
        Value_ArrivalAirport,
        Value_ArrivalTerminal,
        Value_ArrivalGate,
        Value_FlightDuration
      };

    static TypeValue  stringToValue(const char *chars);
    static const char * stringFromValue(TypeValue the_enum);

  private:
    bool flagHasValue;
    TypeValue storeValue;

    FlightAttributeJSON(const FlightAttributeJSON &);
    FlightAttributeJSON & operator=(const FlightAttributeJSON &other);

    void  fromJSONValue(JSONValue *json_value, bool ignore_extras = false);


  public:
    FlightAttributeJSON(void);
    FlightAttributeJSON(TypeValue init_value);
    FlightAttributeJSON(const char *init_value);
    FlightAttributeJSON(std::string init_value);
    virtual ~FlightAttributeJSON(void);
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
        setValue(stringToValue(chars));
      }
    void setValue(std::string the_string)
      {
        setValue(stringToValue(the_string.c_str()));
      }
    void unsetValue(void)
      {
        flagHasValue = false;
      }


    void write_as_json(JSONHandler *handler) const
      {
        switch (storeValue)
          {
            case Value_Status:
                handler->string_value("Status");
                break;
            case Value_DepartureInformation:
                handler->string_value("DepartureInformation");
                break;
            case Value_DepartureTime:
                handler->string_value("DepartureTime");
                break;
            case Value_HasDeparted:
                handler->string_value("HasDeparted");
                break;
            case Value_DepartureLocation:
                handler->string_value("DepartureLocation");
                break;
            case Value_DepartureAirport:
                handler->string_value("DepartureAirport");
                break;
            case Value_DepartureTerminal:
                handler->string_value("DepartureTerminal");
                break;
            case Value_DepartureGate:
                handler->string_value("DepartureGate");
                break;
            case Value_ArrivalInformation:
                handler->string_value("ArrivalInformation");
                break;
            case Value_ArrivalTime:
                handler->string_value("ArrivalTime");
                break;
            case Value_HasArrived:
                handler->string_value("HasArrived");
                break;
            case Value_ArrivalLocation:
                handler->string_value("ArrivalLocation");
                break;
            case Value_ArrivalAirport:
                handler->string_value("ArrivalAirport");
                break;
            case Value_ArrivalTerminal:
                handler->string_value("ArrivalTerminal");
                break;
            case Value_ArrivalGate:
                handler->string_value("ArrivalGate");
                break;
            case Value_FlightDuration:
                handler->string_value("FlightDuration");
                break;
            default:
                assert(false);
          }
      }

    static FlightAttributeJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static FlightAttributeJSON *from_text(const char *text, bool ignore_extras = false)
      {
        FlightAttributeJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<FlightAttributeJSON>, FlightAttributeJSON *, bool> generator("Type FlightAttribute", ignore_extras);
            parse_json_value(text, "Text for FlightAttributeJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static FlightAttributeJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        FlightAttributeJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<FlightAttributeJSON>, FlightAttributeJSON *, bool> generator("Type FlightAttribute", ignore_extras);
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
            handle_result(stringToValue(result));
          }
        virtual void handle_result(TypeValue result) = 0;
      };
    class Generator : public FieldGeneratorValue
      {
      protected:
        void handle_result(TypeValue new_value)
          {
            FlightAttributeJSON *result = new FlightAttributeJSON();
            result->setValue(new_value);
            handle_result(result);
          }
        virtual void handle_result(FlightAttributeJSON *new_result) = 0;

      public:
        Generator(bool ignore_extras = false)
          {
          }
        ~Generator(void)  { }
      };
  };

#endif /* FLIGHTATTRIBUTEJSON_H */
