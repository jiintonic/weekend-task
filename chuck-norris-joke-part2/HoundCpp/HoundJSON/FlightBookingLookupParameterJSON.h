/* file "FlightBookingLookupParameterJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef FLIGHTBOOKINGLOOKUPPARAMETERJSON_H
#define FLIGHTBOOKINGLOOKUPPARAMETERJSON_H

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


class FlightBookingLookupParameterJSON : public ReferenceCounted
  {
  public:
    enum TypeValue
      {
        Value_DepartureDate,
        Value_Destination,
        Value_TripType,
        Value_ReturnDate,
        Value_Nothing
      };

    static TypeValue  stringToValue(const char *chars);
    static const char * stringFromValue(TypeValue the_enum);

  private:
    bool flagHasValue;
    TypeValue storeValue;

    FlightBookingLookupParameterJSON(const FlightBookingLookupParameterJSON &);
    FlightBookingLookupParameterJSON & operator=(const FlightBookingLookupParameterJSON &other);

    void  fromJSONValue(JSONValue *json_value, bool ignore_extras = false);


  public:
    FlightBookingLookupParameterJSON(void);
    FlightBookingLookupParameterJSON(TypeValue init_value);
    FlightBookingLookupParameterJSON(const char *init_value);
    FlightBookingLookupParameterJSON(std::string init_value);
    virtual ~FlightBookingLookupParameterJSON(void);
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
            case Value_DepartureDate:
                handler->string_value("DepartureDate");
                break;
            case Value_Destination:
                handler->string_value("Destination");
                break;
            case Value_TripType:
                handler->string_value("TripType");
                break;
            case Value_ReturnDate:
                handler->string_value("ReturnDate");
                break;
            case Value_Nothing:
                handler->string_value("Nothing");
                break;
            default:
                assert(false);
          }
      }

    static FlightBookingLookupParameterJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static FlightBookingLookupParameterJSON *from_text(const char *text, bool ignore_extras = false)
      {
        FlightBookingLookupParameterJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<FlightBookingLookupParameterJSON>, FlightBookingLookupParameterJSON *, bool> generator("Type FlightBookingLookupParameter", ignore_extras);
            parse_json_value(text, "Text for FlightBookingLookupParameterJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static FlightBookingLookupParameterJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        FlightBookingLookupParameterJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<FlightBookingLookupParameterJSON>, FlightBookingLookupParameterJSON *, bool> generator("Type FlightBookingLookupParameter", ignore_extras);
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
            FlightBookingLookupParameterJSON *result = new FlightBookingLookupParameterJSON();
            result->setValue(new_value);
            handle_result(result);
          }
        virtual void handle_result(FlightBookingLookupParameterJSON *new_result) = 0;

      public:
        Generator(bool ignore_extras = false)
          {
          }
        ~Generator(void)  { }
      };
  };

#endif /* FLIGHTBOOKINGLOOKUPPARAMETERJSON_H */
