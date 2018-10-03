/* file "EmailStateJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef EMAILSTATEJSON_H
#define EMAILSTATEJSON_H

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


class EmailStateJSON : public ReferenceCounted
  {
  public:
    enum TypeValue
      {
        Value_DisambiguatingRecipientsAfterCreate,
        Value_DisambiguatingRecipientsAfterEditRecipients,
        Value_ExpectingAddRecipientsCc,
        Value_ExpectingAddRecipientsTo,
        Value_ExpectingAddRecipientsBcc,
        Value_ExpectingContinuationOfBody,
        Value_ExpectingEmailAddress,
        Value_ExpectingEmptyBodyOkYesNo,
        Value_ExpectingEmptySubjectOkYesNo,
        Value_ExpectingRemoveRecipientsCc,
        Value_ExpectingRemoveRecipientsTo,
        Value_ExpectingRemoveRecipientsBcc,
        Value_ExpectingResponseAfterEmailReady,
        Value_ExpectingSendItNowYesNo,
        Value_ExpectingStartOfBody,
        Value_ExpectingSubject,
        Value_Unknown
      };

    static TypeValue  stringToValue(const char *chars);
    static const char * stringFromValue(TypeValue the_enum);

  private:
    bool flagHasValue;
    TypeValue storeValue;

    EmailStateJSON(const EmailStateJSON &);
    EmailStateJSON & operator=(const EmailStateJSON &other);

    void  fromJSONValue(JSONValue *json_value, bool ignore_extras = false);


  public:
    EmailStateJSON(void);
    EmailStateJSON(TypeValue init_value);
    EmailStateJSON(const char *init_value);
    EmailStateJSON(std::string init_value);
    virtual ~EmailStateJSON(void);
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
            case Value_DisambiguatingRecipientsAfterCreate:
                handler->string_value("DisambiguatingRecipientsAfterCreate");
                break;
            case Value_DisambiguatingRecipientsAfterEditRecipients:
                handler->string_value("DisambiguatingRecipientsAfterEditRecipients");
                break;
            case Value_ExpectingAddRecipientsCc:
                handler->string_value("ExpectingAddRecipientsCc");
                break;
            case Value_ExpectingAddRecipientsTo:
                handler->string_value("ExpectingAddRecipientsTo");
                break;
            case Value_ExpectingAddRecipientsBcc:
                handler->string_value("ExpectingAddRecipientsBcc");
                break;
            case Value_ExpectingContinuationOfBody:
                handler->string_value("ExpectingContinuationOfBody");
                break;
            case Value_ExpectingEmailAddress:
                handler->string_value("ExpectingEmailAddress");
                break;
            case Value_ExpectingEmptyBodyOkYesNo:
                handler->string_value("ExpectingEmptyBodyOkYesNo");
                break;
            case Value_ExpectingEmptySubjectOkYesNo:
                handler->string_value("ExpectingEmptySubjectOkYesNo");
                break;
            case Value_ExpectingRemoveRecipientsCc:
                handler->string_value("ExpectingRemoveRecipientsCc");
                break;
            case Value_ExpectingRemoveRecipientsTo:
                handler->string_value("ExpectingRemoveRecipientsTo");
                break;
            case Value_ExpectingRemoveRecipientsBcc:
                handler->string_value("ExpectingRemoveRecipientsBcc");
                break;
            case Value_ExpectingResponseAfterEmailReady:
                handler->string_value("ExpectingResponseAfterEmailReady");
                break;
            case Value_ExpectingSendItNowYesNo:
                handler->string_value("ExpectingSendItNowYesNo");
                break;
            case Value_ExpectingStartOfBody:
                handler->string_value("ExpectingStartOfBody");
                break;
            case Value_ExpectingSubject:
                handler->string_value("ExpectingSubject");
                break;
            case Value_Unknown:
                handler->string_value("Unknown");
                break;
            default:
                assert(false);
          }
      }

    static EmailStateJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static EmailStateJSON *from_text(const char *text, bool ignore_extras = false)
      {
        EmailStateJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<EmailStateJSON>, EmailStateJSON *, bool> generator("Type EmailState", ignore_extras);
            parse_json_value(text, "Text for EmailStateJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static EmailStateJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        EmailStateJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<EmailStateJSON>, EmailStateJSON *, bool> generator("Type EmailState", ignore_extras);
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
            EmailStateJSON *result = new EmailStateJSON();
            result->setValue(new_value);
            handle_result(result);
          }
        virtual void handle_result(EmailStateJSON *new_result) = 0;

      public:
        Generator(bool ignore_extras = false)
          {
          }
        ~Generator(void)  { }
      };
  };

#endif /* EMAILSTATEJSON_H */
