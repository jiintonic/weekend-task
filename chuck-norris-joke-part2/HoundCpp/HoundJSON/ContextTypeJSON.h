/* file "ContextTypeJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef CONTEXTTYPEJSON_H
#define CONTEXTTYPEJSON_H

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


class ContextTypeJSON : public ReferenceCounted
  {
  public:
    enum TypeValue
      {
        Value_AfterCreate,
        Value_AfterEditRecipients
      };

    static TypeValue  stringToValue(const char *chars);
    static const char * stringFromValue(TypeValue the_enum);

  private:
    bool flagHasValue;
    TypeValue storeValue;

    ContextTypeJSON(const ContextTypeJSON &);
    ContextTypeJSON & operator=(const ContextTypeJSON &other);

    void  fromJSONValue(JSONValue *json_value, bool ignore_extras = false);


  public:
    ContextTypeJSON(void);
    ContextTypeJSON(TypeValue init_value);
    ContextTypeJSON(const char *init_value);
    ContextTypeJSON(std::string init_value);
    virtual ~ContextTypeJSON(void);
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
            case Value_AfterCreate:
                handler->string_value("AfterCreate");
                break;
            case Value_AfterEditRecipients:
                handler->string_value("AfterEditRecipients");
                break;
            default:
                assert(false);
          }
      }

    static ContextTypeJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static ContextTypeJSON *from_text(const char *text, bool ignore_extras = false)
      {
        ContextTypeJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<ContextTypeJSON>, ContextTypeJSON *, bool> generator("Type ContextType", ignore_extras);
            parse_json_value(text, "Text for ContextTypeJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static ContextTypeJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        ContextTypeJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<ContextTypeJSON>, ContextTypeJSON *, bool> generator("Type ContextType", ignore_extras);
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
            ContextTypeJSON *result = new ContextTypeJSON();
            result->setValue(new_value);
            handle_result(result);
          }
        virtual void handle_result(ContextTypeJSON *new_result) = 0;

      public:
        Generator(bool ignore_extras = false)
          {
          }
        ~Generator(void)  { }
      };
  };

#endif /* CONTEXTTYPEJSON_H */
