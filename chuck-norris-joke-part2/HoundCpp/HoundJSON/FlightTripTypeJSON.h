/* file "FlightTripTypeJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef FLIGHTTRIPTYPEJSON_H
#define FLIGHTTRIPTYPEJSON_H

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


class FlightTripTypeJSON : public ReferenceCounted
  {
  public:
    enum TypeValue
      {
        Value_Unspecified,
        Value_OneWay,
        Value_RoundTrip,
        Value_MultipleDestinations
      };

    static TypeValue  stringToValue(const char *chars);
    static const char * stringFromValue(TypeValue the_enum);

  private:
    bool flagHasValue;
    TypeValue storeValue;

    FlightTripTypeJSON(const FlightTripTypeJSON &);
    FlightTripTypeJSON & operator=(const FlightTripTypeJSON &other);

    void  fromJSONValue(JSONValue *json_value, bool ignore_extras = false);


  public:
    FlightTripTypeJSON(void);
    FlightTripTypeJSON(TypeValue init_value);
    FlightTripTypeJSON(const char *init_value);
    FlightTripTypeJSON(std::string init_value);
    virtual ~FlightTripTypeJSON(void);
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
            case Value_Unspecified:
                handler->string_value("Unspecified");
                break;
            case Value_OneWay:
                handler->string_value("OneWay");
                break;
            case Value_RoundTrip:
                handler->string_value("RoundTrip");
                break;
            case Value_MultipleDestinations:
                handler->string_value("MultipleDestinations");
                break;
            default:
                assert(false);
          }
      }

    static FlightTripTypeJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static FlightTripTypeJSON *from_text(const char *text, bool ignore_extras = false)
      {
        FlightTripTypeJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<FlightTripTypeJSON>, FlightTripTypeJSON *, bool> generator("Type FlightTripType", ignore_extras);
            parse_json_value(text, "Text for FlightTripTypeJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static FlightTripTypeJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        FlightTripTypeJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<FlightTripTypeJSON>, FlightTripTypeJSON *, bool> generator("Type FlightTripType", ignore_extras);
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
            FlightTripTypeJSON *result = new FlightTripTypeJSON();
            result->setValue(new_value);
            handle_result(result);
          }
        virtual void handle_result(FlightTripTypeJSON *new_result) = 0;

      public:
        Generator(bool ignore_extras = false)
          {
          }
        ~Generator(void)  { }
      };
  };

#endif /* FLIGHTTRIPTYPEJSON_H */
