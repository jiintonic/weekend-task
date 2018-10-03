/* file "CarWindowSelectionEnumJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef CARWINDOWSELECTIONENUMJSON_H
#define CARWINDOWSELECTIONENUMJSON_H

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


class CarWindowSelectionEnumJSON : public ReferenceCounted
  {
  public:
    enum TypeValue
      {
        Value_FrontLeft,
        Value_FrontRight,
        Value_FrontDriver,
        Value_FrontPassenger,
        Value_FrontBoth,
        Value_RearLeft,
        Value_RearRight,
        Value_RearDriver,
        Value_RearPassenger,
        Value_RearBoth,
        Value_MiddleLeft,
        Value_MiddleRight,
        Value_MiddleDriver,
        Value_MiddlePassenger,
        Value_MiddleBoth,
        Value_LeftAll,
        Value_RightAll,
        Value_DriverAll,
        Value_PassengerAll,
        Value_All,
        Value_FrontTop,
        Value_RearTop,
        Value_BothTop,
        Value_Top,
        Value_Rear,
        Value_Front
      };

    static TypeValue  stringToValue(const char *chars);
    static const char * stringFromValue(TypeValue the_enum);

  private:
    bool flagHasValue;
    TypeValue storeValue;

    CarWindowSelectionEnumJSON(const CarWindowSelectionEnumJSON &);
    CarWindowSelectionEnumJSON & operator=(const CarWindowSelectionEnumJSON &other);

    void  fromJSONValue(JSONValue *json_value, bool ignore_extras = false);


  public:
    CarWindowSelectionEnumJSON(void);
    CarWindowSelectionEnumJSON(TypeValue init_value);
    CarWindowSelectionEnumJSON(const char *init_value);
    CarWindowSelectionEnumJSON(std::string init_value);
    virtual ~CarWindowSelectionEnumJSON(void);
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
            case Value_FrontLeft:
                handler->string_value("FrontLeft");
                break;
            case Value_FrontRight:
                handler->string_value("FrontRight");
                break;
            case Value_FrontDriver:
                handler->string_value("FrontDriver");
                break;
            case Value_FrontPassenger:
                handler->string_value("FrontPassenger");
                break;
            case Value_FrontBoth:
                handler->string_value("FrontBoth");
                break;
            case Value_RearLeft:
                handler->string_value("RearLeft");
                break;
            case Value_RearRight:
                handler->string_value("RearRight");
                break;
            case Value_RearDriver:
                handler->string_value("RearDriver");
                break;
            case Value_RearPassenger:
                handler->string_value("RearPassenger");
                break;
            case Value_RearBoth:
                handler->string_value("RearBoth");
                break;
            case Value_MiddleLeft:
                handler->string_value("MiddleLeft");
                break;
            case Value_MiddleRight:
                handler->string_value("MiddleRight");
                break;
            case Value_MiddleDriver:
                handler->string_value("MiddleDriver");
                break;
            case Value_MiddlePassenger:
                handler->string_value("MiddlePassenger");
                break;
            case Value_MiddleBoth:
                handler->string_value("MiddleBoth");
                break;
            case Value_LeftAll:
                handler->string_value("LeftAll");
                break;
            case Value_RightAll:
                handler->string_value("RightAll");
                break;
            case Value_DriverAll:
                handler->string_value("DriverAll");
                break;
            case Value_PassengerAll:
                handler->string_value("PassengerAll");
                break;
            case Value_All:
                handler->string_value("All");
                break;
            case Value_FrontTop:
                handler->string_value("FrontTop");
                break;
            case Value_RearTop:
                handler->string_value("RearTop");
                break;
            case Value_BothTop:
                handler->string_value("BothTop");
                break;
            case Value_Top:
                handler->string_value("Top");
                break;
            case Value_Rear:
                handler->string_value("Rear");
                break;
            case Value_Front:
                handler->string_value("Front");
                break;
            default:
                assert(false);
          }
      }

    static CarWindowSelectionEnumJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static CarWindowSelectionEnumJSON *from_text(const char *text, bool ignore_extras = false)
      {
        CarWindowSelectionEnumJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<CarWindowSelectionEnumJSON>, CarWindowSelectionEnumJSON *, bool> generator("Type CarWindowSelectionEnum", ignore_extras);
            parse_json_value(text, "Text for CarWindowSelectionEnumJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static CarWindowSelectionEnumJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        CarWindowSelectionEnumJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<CarWindowSelectionEnumJSON>, CarWindowSelectionEnumJSON *, bool> generator("Type CarWindowSelectionEnum", ignore_extras);
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
            CarWindowSelectionEnumJSON *result = new CarWindowSelectionEnumJSON();
            result->setValue(new_value);
            handle_result(result);
          }
        virtual void handle_result(CarWindowSelectionEnumJSON *new_result) = 0;

      public:
        Generator(bool ignore_extras = false)
          {
          }
        ~Generator(void)  { }
      };
  };

#endif /* CARWINDOWSELECTIONENUMJSON_H */
