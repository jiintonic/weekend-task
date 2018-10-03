/* file "EmailFieldTypeJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef EMAILFIELDTYPEJSON_H
#define EMAILFIELDTYPEJSON_H

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


class EmailFieldTypeJSON : public ReferenceCounted
  {
  public:
    enum TypeValue
      {
        Value_To,
        Value_Cc,
        Value_Bcc,
        Value_Subject,
        Value_Body,
        Value_AllRecipients,
        Value_Unknown
      };

    static TypeValue  stringToValue(const char *chars);
    static const char * stringFromValue(TypeValue the_enum);

  private:
    bool flagHasValue;
    TypeValue storeValue;

    EmailFieldTypeJSON(const EmailFieldTypeJSON &);
    EmailFieldTypeJSON & operator=(const EmailFieldTypeJSON &other);

    void  fromJSONValue(JSONValue *json_value, bool ignore_extras = false);


  public:
    EmailFieldTypeJSON(void);
    EmailFieldTypeJSON(TypeValue init_value);
    EmailFieldTypeJSON(const char *init_value);
    EmailFieldTypeJSON(std::string init_value);
    virtual ~EmailFieldTypeJSON(void);
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
            case Value_Subject:
                handler->string_value("Subject");
                break;
            case Value_Body:
                handler->string_value("Body");
                break;
            case Value_AllRecipients:
                handler->string_value("AllRecipients");
                break;
            case Value_Unknown:
                handler->string_value("Unknown");
                break;
            default:
                assert(false);
          }
      }

    static EmailFieldTypeJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static EmailFieldTypeJSON *from_text(const char *text, bool ignore_extras = false)
      {
        EmailFieldTypeJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<EmailFieldTypeJSON>, EmailFieldTypeJSON *, bool> generator("Type EmailFieldType", ignore_extras);
            parse_json_value(text, "Text for EmailFieldTypeJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static EmailFieldTypeJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        EmailFieldTypeJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<EmailFieldTypeJSON>, EmailFieldTypeJSON *, bool> generator("Type EmailFieldType", ignore_extras);
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
            EmailFieldTypeJSON *result = new EmailFieldTypeJSON();
            result->setValue(new_value);
            handle_result(result);
          }
        virtual void handle_result(EmailFieldTypeJSON *new_result) = 0;

      public:
        Generator(bool ignore_extras = false)
          {
          }
        ~Generator(void)  { }
      };
  };

#endif /* EMAILFIELDTYPEJSON_H */
