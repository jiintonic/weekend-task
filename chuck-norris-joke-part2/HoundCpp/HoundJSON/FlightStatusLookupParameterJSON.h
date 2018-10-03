/* file "FlightStatusLookupParameterJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef FLIGHTSTATUSLOOKUPPARAMETERJSON_H
#define FLIGHTSTATUSLOOKUPPARAMETERJSON_H

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


class FlightStatusLookupParameterJSON : public ReferenceCounted
  {
  public:
    enum TypeValue
      {
        Value_FlightNumber,
        Value_Airline,
        Value_DepartureLocation,
        Value_ArrivalLocation,
        Value_DepartureOrArrivalDate,
        Value_Nothing
      };

    static TypeValue  stringToValue(const char *chars);
    static const char * stringFromValue(TypeValue the_enum);

  private:
    bool flagHasValue;
    TypeValue storeValue;

    FlightStatusLookupParameterJSON(const FlightStatusLookupParameterJSON &);
    FlightStatusLookupParameterJSON & operator=(const FlightStatusLookupParameterJSON &other);

    void  fromJSONValue(JSONValue *json_value, bool ignore_extras = false);


  public:
    FlightStatusLookupParameterJSON(void);
    FlightStatusLookupParameterJSON(TypeValue init_value);
    FlightStatusLookupParameterJSON(const char *init_value);
    FlightStatusLookupParameterJSON(std::string init_value);
    virtual ~FlightStatusLookupParameterJSON(void);
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
            case Value_FlightNumber:
                handler->string_value("FlightNumber");
                break;
            case Value_Airline:
                handler->string_value("Airline");
                break;
            case Value_DepartureLocation:
                handler->string_value("DepartureLocation");
                break;
            case Value_ArrivalLocation:
                handler->string_value("ArrivalLocation");
                break;
            case Value_DepartureOrArrivalDate:
                handler->string_value("DepartureOrArrivalDate");
                break;
            case Value_Nothing:
                handler->string_value("Nothing");
                break;
            default:
                assert(false);
          }
      }

    static FlightStatusLookupParameterJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static FlightStatusLookupParameterJSON *from_text(const char *text, bool ignore_extras = false)
      {
        FlightStatusLookupParameterJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<FlightStatusLookupParameterJSON>, FlightStatusLookupParameterJSON *, bool> generator("Type FlightStatusLookupParameter", ignore_extras);
            parse_json_value(text, "Text for FlightStatusLookupParameterJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static FlightStatusLookupParameterJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        FlightStatusLookupParameterJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<FlightStatusLookupParameterJSON>, FlightStatusLookupParameterJSON *, bool> generator("Type FlightStatusLookupParameter", ignore_extras);
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
            FlightStatusLookupParameterJSON *result = new FlightStatusLookupParameterJSON();
            result->setValue(new_value);
            handle_result(result);
          }
        virtual void handle_result(FlightStatusLookupParameterJSON *new_result) = 0;

      public:
        Generator(bool ignore_extras = false)
          {
          }
        ~Generator(void)  { }
      };
  };

#endif /* FLIGHTSTATUSLOOKUPPARAMETERJSON_H */
