/* file "SMSFieldTypeJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef SMSFIELDTYPEJSON_H
#define SMSFIELDTYPEJSON_H

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


class SMSFieldTypeJSON : public ReferenceCounted
  {
  public:
    enum TypeValue
      {
        Value_To,
        Value_Body,
        Value_AllRecipients,
        Value_Unknown
      };

    static TypeValue  stringToValue(const char *chars);
    static const char * stringFromValue(TypeValue the_enum);

  private:
    bool flagHasValue;
    TypeValue storeValue;

    SMSFieldTypeJSON(const SMSFieldTypeJSON &);
    SMSFieldTypeJSON & operator=(const SMSFieldTypeJSON &other);

    void  fromJSONValue(JSONValue *json_value, bool ignore_extras = false);


  public:
    SMSFieldTypeJSON(void);
    SMSFieldTypeJSON(TypeValue init_value);
    SMSFieldTypeJSON(const char *init_value);
    SMSFieldTypeJSON(std::string init_value);
    virtual ~SMSFieldTypeJSON(void);
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

    static SMSFieldTypeJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static SMSFieldTypeJSON *from_text(const char *text, bool ignore_extras = false)
      {
        SMSFieldTypeJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<SMSFieldTypeJSON>, SMSFieldTypeJSON *, bool> generator("Type SMSFieldType", ignore_extras);
            parse_json_value(text, "Text for SMSFieldTypeJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static SMSFieldTypeJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        SMSFieldTypeJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<SMSFieldTypeJSON>, SMSFieldTypeJSON *, bool> generator("Type SMSFieldType", ignore_extras);
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
            SMSFieldTypeJSON *result = new SMSFieldTypeJSON();
            result->setValue(new_value);
            handle_result(result);
          }
        virtual void handle_result(SMSFieldTypeJSON *new_result) = 0;

      public:
        Generator(bool ignore_extras = false)
          {
          }
        ~Generator(void)  { }
      };
  };

#endif /* SMSFIELDTYPEJSON_H */
