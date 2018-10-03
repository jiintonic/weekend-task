/* file "SMSStateJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef SMSSTATEJSON_H
#define SMSSTATEJSON_H

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


class SMSStateJSON : public ReferenceCounted
  {
  public:
    enum TypeValue
      {
        Value_ExpectingAddRecipientsTo,
        Value_ExpectingContinuationOfBody,
        Value_ExpectingEmptyBodyOkYesNo,
        Value_ExpectingPhoneNumber,
        Value_ExpectingRemoveRecipientsTo,
        Value_ExpectingStartOfBody,
        Value_ExpectingSendItNowYesNo,
        Value_ExpectingResponseAfterSMSReady,
        Value_Sent,
        Value_Unknown
      };

    static TypeValue  stringToValue(const char *chars);
    static const char * stringFromValue(TypeValue the_enum);

  private:
    bool flagHasValue;
    TypeValue storeValue;

    SMSStateJSON(const SMSStateJSON &);
    SMSStateJSON & operator=(const SMSStateJSON &other);

    void  fromJSONValue(JSONValue *json_value, bool ignore_extras = false);


  public:
    SMSStateJSON(void);
    SMSStateJSON(TypeValue init_value);
    SMSStateJSON(const char *init_value);
    SMSStateJSON(std::string init_value);
    virtual ~SMSStateJSON(void);
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
            case Value_ExpectingAddRecipientsTo:
                handler->string_value("ExpectingAddRecipientsTo");
                break;
            case Value_ExpectingContinuationOfBody:
                handler->string_value("ExpectingContinuationOfBody");
                break;
            case Value_ExpectingEmptyBodyOkYesNo:
                handler->string_value("ExpectingEmptyBodyOkYesNo");
                break;
            case Value_ExpectingPhoneNumber:
                handler->string_value("ExpectingPhoneNumber");
                break;
            case Value_ExpectingRemoveRecipientsTo:
                handler->string_value("ExpectingRemoveRecipientsTo");
                break;
            case Value_ExpectingStartOfBody:
                handler->string_value("ExpectingStartOfBody");
                break;
            case Value_ExpectingSendItNowYesNo:
                handler->string_value("ExpectingSendItNowYesNo");
                break;
            case Value_ExpectingResponseAfterSMSReady:
                handler->string_value("ExpectingResponseAfterSMSReady");
                break;
            case Value_Sent:
                handler->string_value("Sent");
                break;
            case Value_Unknown:
                handler->string_value("Unknown");
                break;
            default:
                assert(false);
          }
      }

    static SMSStateJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static SMSStateJSON *from_text(const char *text, bool ignore_extras = false)
      {
        SMSStateJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<SMSStateJSON>, SMSStateJSON *, bool> generator("Type SMSState", ignore_extras);
            parse_json_value(text, "Text for SMSStateJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static SMSStateJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        SMSStateJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<SMSStateJSON>, SMSStateJSON *, bool> generator("Type SMSState", ignore_extras);
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
            SMSStateJSON *result = new SMSStateJSON();
            result->setValue(new_value);
            handle_result(result);
          }
        virtual void handle_result(SMSStateJSON *new_result) = 0;

      public:
        Generator(bool ignore_extras = false)
          {
          }
        ~Generator(void)  { }
      };
  };

#endif /* SMSSTATEJSON_H */
