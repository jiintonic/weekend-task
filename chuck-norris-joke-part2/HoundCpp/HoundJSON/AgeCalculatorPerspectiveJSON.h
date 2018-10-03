/* file "AgeCalculatorPerspectiveJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef AGECALCULATORPERSPECTIVEJSON_H
#define AGECALCULATORPERSPECTIVEJSON_H

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


class AgeCalculatorPerspectiveJSON : public ReferenceCounted
  {
  public:
    enum TypeValue
      {
        Value_First,
        Value_Second,
        Value_Third,
        Value_ThirdMale,
        Value_ThirdFemale,
        Value_ThirdObject
      };

    static TypeValue  stringToValue(const char *chars);
    static const char * stringFromValue(TypeValue the_enum);

  private:
    bool flagHasValue;
    TypeValue storeValue;

    AgeCalculatorPerspectiveJSON(const AgeCalculatorPerspectiveJSON &);
    AgeCalculatorPerspectiveJSON & operator=(const AgeCalculatorPerspectiveJSON &other);

    void  fromJSONValue(JSONValue *json_value, bool ignore_extras = false);


  public:
    AgeCalculatorPerspectiveJSON(void);
    AgeCalculatorPerspectiveJSON(TypeValue init_value);
    AgeCalculatorPerspectiveJSON(const char *init_value);
    AgeCalculatorPerspectiveJSON(std::string init_value);
    virtual ~AgeCalculatorPerspectiveJSON(void);
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
            case Value_First:
                handler->string_value("First");
                break;
            case Value_Second:
                handler->string_value("Second");
                break;
            case Value_Third:
                handler->string_value("Third");
                break;
            case Value_ThirdMale:
                handler->string_value("ThirdMale");
                break;
            case Value_ThirdFemale:
                handler->string_value("ThirdFemale");
                break;
            case Value_ThirdObject:
                handler->string_value("ThirdObject");
                break;
            default:
                assert(false);
          }
      }

    static AgeCalculatorPerspectiveJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static AgeCalculatorPerspectiveJSON *from_text(const char *text, bool ignore_extras = false)
      {
        AgeCalculatorPerspectiveJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<AgeCalculatorPerspectiveJSON>, AgeCalculatorPerspectiveJSON *, bool> generator("Type AgeCalculatorPerspective", ignore_extras);
            parse_json_value(text, "Text for AgeCalculatorPerspectiveJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static AgeCalculatorPerspectiveJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        AgeCalculatorPerspectiveJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<AgeCalculatorPerspectiveJSON>, AgeCalculatorPerspectiveJSON *, bool> generator("Type AgeCalculatorPerspective", ignore_extras);
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
            AgeCalculatorPerspectiveJSON *result = new AgeCalculatorPerspectiveJSON();
            result->setValue(new_value);
            handle_result(result);
          }
        virtual void handle_result(AgeCalculatorPerspectiveJSON *new_result) = 0;

      public:
        Generator(bool ignore_extras = false)
          {
          }
        ~Generator(void)  { }
      };
  };

#endif /* AGECALCULATORPERSPECTIVEJSON_H */
