/* file "EmailContactResultActionJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef EMAILCONTACTRESULTACTIONJSON_H
#define EMAILCONTACTRESULTACTIONJSON_H

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


class EmailContactResultActionJSON : public ReferenceCounted
  {
  public:
    enum TypeValue
      {
        Value_ADD,
        Value_REMOVE,
        Value_UNSPECIFIED
      };

    static TypeValue  stringToValue(const char *chars);
    static const char * stringFromValue(TypeValue the_enum);

  private:
    bool flagHasValue;
    TypeValue storeValue;

    EmailContactResultActionJSON(const EmailContactResultActionJSON &);
    EmailContactResultActionJSON & operator=(const EmailContactResultActionJSON &other);

    void  fromJSONValue(JSONValue *json_value, bool ignore_extras = false);


  public:
    EmailContactResultActionJSON(void);
    EmailContactResultActionJSON(TypeValue init_value);
    EmailContactResultActionJSON(const char *init_value);
    EmailContactResultActionJSON(std::string init_value);
    virtual ~EmailContactResultActionJSON(void);
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
            case Value_ADD:
                handler->string_value("ADD");
                break;
            case Value_REMOVE:
                handler->string_value("REMOVE");
                break;
            case Value_UNSPECIFIED:
                handler->string_value("UNSPECIFIED");
                break;
            default:
                assert(false);
          }
      }

    static EmailContactResultActionJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static EmailContactResultActionJSON *from_text(const char *text, bool ignore_extras = false)
      {
        EmailContactResultActionJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<EmailContactResultActionJSON>, EmailContactResultActionJSON *, bool> generator("Type EmailContactResultAction", ignore_extras);
            parse_json_value(text, "Text for EmailContactResultActionJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static EmailContactResultActionJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        EmailContactResultActionJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<EmailContactResultActionJSON>, EmailContactResultActionJSON *, bool> generator("Type EmailContactResultAction", ignore_extras);
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
            EmailContactResultActionJSON *result = new EmailContactResultActionJSON();
            result->setValue(new_value);
            handle_result(result);
          }
        virtual void handle_result(EmailContactResultActionJSON *new_result) = 0;

      public:
        Generator(bool ignore_extras = false)
          {
          }
        ~Generator(void)  { }
      };
  };

#endif /* EMAILCONTACTRESULTACTIONJSON_H */
