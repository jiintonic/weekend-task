/* file "DepartureOrArrivalJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef DEPARTUREORARRIVALJSON_H
#define DEPARTUREORARRIVALJSON_H

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


class DepartureOrArrivalJSON : public ReferenceCounted
  {
  public:
    enum TypeValue
      {
        Value_Departure,
        Value_Arrival,
        Value_EitherDepartureOrArrival,
        Value_Unknown
      };

    static TypeValue  stringToValue(const char *chars);
    static const char * stringFromValue(TypeValue the_enum);

  private:
    bool flagHasValue;
    TypeValue storeValue;

    DepartureOrArrivalJSON(const DepartureOrArrivalJSON &);
    DepartureOrArrivalJSON & operator=(const DepartureOrArrivalJSON &other);

    void  fromJSONValue(JSONValue *json_value, bool ignore_extras = false);


  public:
    DepartureOrArrivalJSON(void);
    DepartureOrArrivalJSON(TypeValue init_value);
    DepartureOrArrivalJSON(const char *init_value);
    DepartureOrArrivalJSON(std::string init_value);
    virtual ~DepartureOrArrivalJSON(void);
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
            case Value_Departure:
                handler->string_value("Departure");
                break;
            case Value_Arrival:
                handler->string_value("Arrival");
                break;
            case Value_EitherDepartureOrArrival:
                handler->string_value("EitherDepartureOrArrival");
                break;
            case Value_Unknown:
                handler->string_value("Unknown");
                break;
            default:
                assert(false);
          }
      }

    static DepartureOrArrivalJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static DepartureOrArrivalJSON *from_text(const char *text, bool ignore_extras = false)
      {
        DepartureOrArrivalJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<DepartureOrArrivalJSON>, DepartureOrArrivalJSON *, bool> generator("Type DepartureOrArrival", ignore_extras);
            parse_json_value(text, "Text for DepartureOrArrivalJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static DepartureOrArrivalJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        DepartureOrArrivalJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<DepartureOrArrivalJSON>, DepartureOrArrivalJSON *, bool> generator("Type DepartureOrArrival", ignore_extras);
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
            DepartureOrArrivalJSON *result = new DepartureOrArrivalJSON();
            result->setValue(new_value);
            handle_result(result);
          }
        virtual void handle_result(DepartureOrArrivalJSON *new_result) = 0;

      public:
        Generator(bool ignore_extras = false)
          {
          }
        ~Generator(void)  { }
      };
  };

#endif /* DEPARTUREORARRIVALJSON_H */
