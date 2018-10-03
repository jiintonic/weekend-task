/* file "CarMirrorSelectionEnumJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef CARMIRRORSELECTIONENUMJSON_H
#define CARMIRRORSELECTIONENUMJSON_H

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


class CarMirrorSelectionEnumJSON : public ReferenceCounted
  {
  public:
    enum TypeValue
      {
        Value_LeftMirror,
        Value_RightMirror,
        Value_DriverMirror,
        Value_PassengerMirror,
        Value_BothMirrors
      };

    static TypeValue  stringToValue(const char *chars);
    static const char * stringFromValue(TypeValue the_enum);

  private:
    bool flagHasValue;
    TypeValue storeValue;

    CarMirrorSelectionEnumJSON(const CarMirrorSelectionEnumJSON &);
    CarMirrorSelectionEnumJSON & operator=(const CarMirrorSelectionEnumJSON &other);

    void  fromJSONValue(JSONValue *json_value, bool ignore_extras = false);


  public:
    CarMirrorSelectionEnumJSON(void);
    CarMirrorSelectionEnumJSON(TypeValue init_value);
    CarMirrorSelectionEnumJSON(const char *init_value);
    CarMirrorSelectionEnumJSON(std::string init_value);
    virtual ~CarMirrorSelectionEnumJSON(void);
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
            case Value_LeftMirror:
                handler->string_value("LeftMirror");
                break;
            case Value_RightMirror:
                handler->string_value("RightMirror");
                break;
            case Value_DriverMirror:
                handler->string_value("DriverMirror");
                break;
            case Value_PassengerMirror:
                handler->string_value("PassengerMirror");
                break;
            case Value_BothMirrors:
                handler->string_value("BothMirrors");
                break;
            default:
                assert(false);
          }
      }

    static CarMirrorSelectionEnumJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static CarMirrorSelectionEnumJSON *from_text(const char *text, bool ignore_extras = false)
      {
        CarMirrorSelectionEnumJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<CarMirrorSelectionEnumJSON>, CarMirrorSelectionEnumJSON *, bool> generator("Type CarMirrorSelectionEnum", ignore_extras);
            parse_json_value(text, "Text for CarMirrorSelectionEnumJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static CarMirrorSelectionEnumJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        CarMirrorSelectionEnumJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<CarMirrorSelectionEnumJSON>, CarMirrorSelectionEnumJSON *, bool> generator("Type CarMirrorSelectionEnum", ignore_extras);
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
            CarMirrorSelectionEnumJSON *result = new CarMirrorSelectionEnumJSON();
            result->setValue(new_value);
            handle_result(result);
          }
        virtual void handle_result(CarMirrorSelectionEnumJSON *new_result) = 0;

      public:
        Generator(bool ignore_extras = false)
          {
          }
        ~Generator(void)  { }
      };
  };

#endif /* CARMIRRORSELECTIONENUMJSON_H */
