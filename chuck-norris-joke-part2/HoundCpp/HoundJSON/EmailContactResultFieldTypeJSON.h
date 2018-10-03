/* file "EmailContactResultFieldTypeJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef EMAILCONTACTRESULTFIELDTYPEJSON_H
#define EMAILCONTACTRESULTFIELDTYPEJSON_H

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


class EmailContactResultFieldTypeJSON : public ReferenceCounted
  {
  public:
    enum TypeValue
      {
        Value_To,
        Value_Cc,
        Value_Bcc,
        Value_Unknown
      };

    static TypeValue  stringToValue(const char *chars);
    static const char * stringFromValue(TypeValue the_enum);

  private:
    bool flagHasValue;
    TypeValue storeValue;

    EmailContactResultFieldTypeJSON(const EmailContactResultFieldTypeJSON &);
    EmailContactResultFieldTypeJSON & operator=(const EmailContactResultFieldTypeJSON &other);

    void  fromJSONValue(JSONValue *json_value, bool ignore_extras = false);


  public:
    EmailContactResultFieldTypeJSON(void);
    EmailContactResultFieldTypeJSON(TypeValue init_value);
    EmailContactResultFieldTypeJSON(const char *init_value);
    EmailContactResultFieldTypeJSON(std::string init_value);
    virtual ~EmailContactResultFieldTypeJSON(void);
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
            case Value_To:
                handler->string_value("To");
                break;
            case Value_Cc:
                handler->string_value("Cc");
                break;
            case Value_Bcc:
                handler->string_value("Bcc");
                break;
            case Value_Unknown:
                handler->string_value("Unknown");
                break;
            default:
                assert(false);
          }
      }

    static EmailContactResultFieldTypeJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static EmailContactResultFieldTypeJSON *from_text(const char *text, bool ignore_extras = false)
      {
        EmailContactResultFieldTypeJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<EmailContactResultFieldTypeJSON>, EmailContactResultFieldTypeJSON *, bool> generator("Type EmailContactResultFieldType", ignore_extras);
            parse_json_value(text, "Text for EmailContactResultFieldTypeJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static EmailContactResultFieldTypeJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        EmailContactResultFieldTypeJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<EmailContactResultFieldTypeJSON>, EmailContactResultFieldTypeJSON *, bool> generator("Type EmailContactResultFieldType", ignore_extras);
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
            EmailContactResultFieldTypeJSON *result = new EmailContactResultFieldTypeJSON();
            result->setValue(new_value);
            handle_result(result);
          }
        virtual void handle_result(EmailContactResultFieldTypeJSON *new_result) = 0;

      public:
        Generator(bool ignore_extras = false)
          {
          }
        ~Generator(void)  { }
      };
  };

#endif /* EMAILCONTACTRESULTFIELDTYPEJSON_H */
