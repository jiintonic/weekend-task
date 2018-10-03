/* file "IncludeExcludeStateJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef INCLUDEEXCLUDESTATEJSON_H
#define INCLUDEEXCLUDESTATEJSON_H

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


class IncludeExcludeStateJSON : public ReferenceCounted
  {
  public:
    enum TypeValue
      {
        Value_Include,
        Value_Exclude
      };

    static TypeValue  stringToValue(const char *chars);
    static const char * stringFromValue(TypeValue the_enum);

  private:
    bool flagHasValue;
    TypeValue storeValue;

    IncludeExcludeStateJSON(const IncludeExcludeStateJSON &);
    IncludeExcludeStateJSON & operator=(const IncludeExcludeStateJSON &other);

    void  fromJSONValue(JSONValue *json_value, bool ignore_extras = false);


  public:
    IncludeExcludeStateJSON(void);
    IncludeExcludeStateJSON(TypeValue init_value);
    IncludeExcludeStateJSON(const char *init_value);
    IncludeExcludeStateJSON(std::string init_value);
    virtual ~IncludeExcludeStateJSON(void);
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
            case Value_Include:
                handler->string_value("Include");
                break;
            case Value_Exclude:
                handler->string_value("Exclude");
                break;
            default:
                assert(false);
          }
      }

    static IncludeExcludeStateJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static IncludeExcludeStateJSON *from_text(const char *text, bool ignore_extras = false)
      {
        IncludeExcludeStateJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<IncludeExcludeStateJSON>, IncludeExcludeStateJSON *, bool> generator("Type IncludeExcludeState", ignore_extras);
            parse_json_value(text, "Text for IncludeExcludeStateJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static IncludeExcludeStateJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        IncludeExcludeStateJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<IncludeExcludeStateJSON>, IncludeExcludeStateJSON *, bool> generator("Type IncludeExcludeState", ignore_extras);
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
            IncludeExcludeStateJSON *result = new IncludeExcludeStateJSON();
            result->setValue(new_value);
            handle_result(result);
          }
        virtual void handle_result(IncludeExcludeStateJSON *new_result) = 0;

      public:
        Generator(bool ignore_extras = false)
          {
          }
        ~Generator(void)  { }
      };
  };

#endif /* INCLUDEEXCLUDESTATEJSON_H */
