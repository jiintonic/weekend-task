/* file "EmailJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef EMAILJSON_H
#define EMAILJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONHoldingArrayGenerator.h"
#include "JSONStringGenerator.h"
#include <vector>
#include <string>
#include "EmailAddressFieldJSON.h"
#include "EmailAddressFieldJSON.h"
#include "EmailAddressFieldJSON.h"
#include "EmailContactResultJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class EmailJSON : public ReferenceCounted
  {
  private:
    bool flagHasTo;
    EmailAddressFieldJSON * storeTo;
    bool flagHasCc;
    EmailAddressFieldJSON * storeCc;
    bool flagHasBcc;
    EmailAddressFieldJSON * storeBcc;
    bool flagHasRecipients;
    std::vector< EmailContactResultJSON * > storeRecipients;
    bool flagHasSpokenSubject;
    std::string storeSpokenSubject;
    bool flagHasSpokenBody;
    std::string storeSpokenBody;
    bool flagHasSubject;
    std::string storeSubject;
    bool flagHasBody;
    std::string storeBody;

    EmailJSON(const EmailJSON &);
    EmailJSON & operator=(const EmailJSON &other);

    void  fromJSONTo(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONCc(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONBcc(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONRecipients(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONSpokenSubject(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONSpokenBody(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONSubject(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONBody(JSONValue *json_value, bool ignore_extras = false);


  public:
    EmailJSON(void);
    virtual ~EmailJSON(void);
    bool  hasTo(void) const;
    EmailAddressFieldJSON *  getTo(void);
    const EmailAddressFieldJSON *  getTo(void) const;
    bool  hasCc(void) const;
    EmailAddressFieldJSON *  getCc(void);
    const EmailAddressFieldJSON *  getCc(void) const;
    bool  hasBcc(void) const;
    EmailAddressFieldJSON *  getBcc(void);
    const EmailAddressFieldJSON *  getBcc(void) const;
    bool  hasRecipients(void) const;
    size_t  countOfRecipients(void) const;
    EmailContactResultJSON *  elementOfRecipients(size_t element_num);
    const EmailContactResultJSON *  elementOfRecipients(size_t element_num) const;
    std::vector< EmailContactResultJSON * >  getRecipients(void);
    const std::vector< EmailContactResultJSON * >  getRecipients(void) const;
    bool  hasSpokenSubject(void) const;
    std::string  getSpokenSubject(void);
    const std::string  getSpokenSubject(void) const;
    bool  hasSpokenBody(void) const;
    std::string  getSpokenBody(void);
    const std::string  getSpokenBody(void) const;
    bool  hasSubject(void) const;
    std::string  getSubject(void);
    const std::string  getSubject(void) const;
    bool  hasBody(void) const;
    std::string  getBody(void);
    const std::string  getBody(void) const;


    void setTo(EmailAddressFieldJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasTo)
          {
            storeTo->remove_reference();
          }
        flagHasTo = true;
        storeTo = new_value;
      }
    void unsetTo(void)
      {
        if (flagHasTo)
          {
            storeTo->remove_reference();
          }
        flagHasTo = false;
      }
    void setCc(EmailAddressFieldJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasCc)
          {
            storeCc->remove_reference();
          }
        flagHasCc = true;
        storeCc = new_value;
      }
    void unsetCc(void)
      {
        if (flagHasCc)
          {
            storeCc->remove_reference();
          }
        flagHasCc = false;
      }
    void setBcc(EmailAddressFieldJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasBcc)
          {
            storeBcc->remove_reference();
          }
        flagHasBcc = true;
        storeBcc = new_value;
      }
    void unsetBcc(void)
      {
        if (flagHasBcc)
          {
            storeBcc->remove_reference();
          }
        flagHasBcc = false;
      }
    void initRecipients(void)
      {
        if (flagHasRecipients)
          {
            for (size_t num2 = 0; num2 < storeRecipients.size(); ++num2)
              {
                storeRecipients[num2]->remove_reference();
              }
          }
        flagHasRecipients = true;
        storeRecipients.clear();
      }
    void appendRecipients(EmailContactResultJSON * to_append)
      {
        if (!flagHasRecipients)
          {
            flagHasRecipients = true;
            storeRecipients.clear();
          }
        assert(flagHasRecipients);
        to_append->add_reference();
        storeRecipients.push_back(to_append);
      }
    void unsetRecipients(void)
      {
        if (flagHasRecipients)
          {
            for (size_t num3 = 0; num3 < storeRecipients.size(); ++num3)
              {
                storeRecipients[num3]->remove_reference();
              }
          }
        flagHasRecipients = false;
        storeRecipients.clear();
      }
    void setSpokenSubject(std::string new_value)
      {
        flagHasSpokenSubject = true;
        storeSpokenSubject = new_value;
      }
    void unsetSpokenSubject(void)
      {
        flagHasSpokenSubject = false;
      }
    void setSpokenBody(std::string new_value)
      {
        flagHasSpokenBody = true;
        storeSpokenBody = new_value;
      }
    void unsetSpokenBody(void)
      {
        flagHasSpokenBody = false;
      }
    void setSubject(std::string new_value)
      {
        flagHasSubject = true;
        storeSubject = new_value;
      }
    void unsetSubject(void)
      {
        flagHasSubject = false;
      }
    void setBody(std::string new_value)
      {
        flagHasBody = true;
        storeBody = new_value;
      }
    void unsetBody(void)
      {
        flagHasBody = false;
      }


    void write_as_json(JSONHandler *handler) const
      {
        handler->start_object();
        write_fields_as_json(handler);
        handler->finish_object();
      }

    virtual void write_fields_as_json(JSONHandler *handler) const
      {
        if (flagHasTo)
          {
            handler->start_pair("To");
            storeTo->write_as_json(handler);
          }
        if (flagHasCc)
          {
            handler->start_pair("Cc");
            storeCc->write_as_json(handler);
          }
        if (flagHasBcc)
          {
            handler->start_pair("Bcc");
            storeBcc->write_as_json(handler);
          }
        if (flagHasRecipients)
          {
            handler->start_pair("Recipients");
            handler->start_array();
            for (size_t num1 = 0; num1 < storeRecipients.size(); ++num1)
              {
                storeRecipients[num1]->write_as_json(handler);
              }
            handler->finish_array();
          }
        if (flagHasSpokenSubject)
          {
            handler->start_pair("SpokenSubject");
            handler->string_value(storeSpokenSubject);
          }
        if (flagHasSpokenBody)
          {
            handler->start_pair("SpokenBody");
            handler->string_value(storeSpokenBody);
          }
        assert(flagHasSubject);
        handler->start_pair("Subject");
        handler->string_value(storeSubject);
        assert(flagHasBody);
        handler->start_pair("Body");
        handler->string_value(storeBody);
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasSubject()))
          {
            return "When parsing the object for %what%, the \"Subject\" field was missing.";
          }
        if (!(hasBody()))
          {
            return "When parsing the object for %what%, the \"Body\" field was missing.";
          }
        return NULL;
      }

    static EmailJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static EmailJSON *from_text(const char *text, bool ignore_extras = false)
      {
        EmailJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<EmailJSON>, EmailJSON *, bool> generator("Type Email", ignore_extras);
            parse_json_value(text, "Text for EmailJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static EmailJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        EmailJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<EmailJSON>, EmailJSON *, bool> generator("Type Email", ignore_extras);
            parse_json_value(fp, file_name, &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    class Generator : public JSONObjectGenerator
      {
      private:
        JSONHoldingGenerator<EmailAddressFieldJSON::Generator, RCHandle<EmailAddressFieldJSON>, EmailAddressFieldJSON *, bool > fieldGeneratorTo;
        JSONHoldingGenerator<EmailAddressFieldJSON::Generator, RCHandle<EmailAddressFieldJSON>, EmailAddressFieldJSON *, bool > fieldGeneratorCc;
        JSONHoldingGenerator<EmailAddressFieldJSON::Generator, RCHandle<EmailAddressFieldJSON>, EmailAddressFieldJSON *, bool > fieldGeneratorBcc;
        JSONHoldingArrayGenerator<EmailContactResultJSON::Generator, RCHandle<EmailContactResultJSON>, EmailContactResultJSON *, bool > fieldGeneratorRecipients;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorSpokenSubject;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorSpokenBody;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorSubject;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorBody;


      protected:
        void start(void)
          {
          }
        JSONHandler *start_field(const char *field_name)
          {
            JSONHandler *result = start_known_field(field_name);
            if (result != NULL)
                return result;
            std::string message("");
            message = message + "Field \"" + field_name + "\" found for a type that doesn't allow extra fields.";
            char *message_chars = (char *)(malloc(strlen(message.c_str()) + 1));
            strcpy(message_chars, message.c_str());
            throw(message_chars);
          }
        void finish_field(const char *field_name, JSONHandler *field_handler)
          {
          }
        void finish(void)
          {
            EmailJSON *result = new EmailJSON();
            assert(result != NULL);
            RCHandle<EmailJSON> result_holder = result;
            finish(result);
            handle_result(result);
          }
        void finish(EmailJSON *result)
          {
            if (fieldGeneratorTo.have_value)
              {
                result->setTo(fieldGeneratorTo.value.referenced());
                fieldGeneratorTo.have_value = false;
              }
            if (fieldGeneratorCc.have_value)
              {
                result->setCc(fieldGeneratorCc.value.referenced());
                fieldGeneratorCc.have_value = false;
              }
            if (fieldGeneratorBcc.have_value)
              {
                result->setBcc(fieldGeneratorBcc.value.referenced());
                fieldGeneratorBcc.have_value = false;
              }
            if (fieldGeneratorRecipients.have_value)
              {
                result->initRecipients();
                size_t count = fieldGeneratorRecipients.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendRecipients(fieldGeneratorRecipients.value[num].referenced());
                  }
                fieldGeneratorRecipients.value.clear();
                fieldGeneratorRecipients.have_value = false;
              }
            if (fieldGeneratorSpokenSubject.have_value)
              {
                result->setSpokenSubject(fieldGeneratorSpokenSubject.value);
                fieldGeneratorSpokenSubject.have_value = false;
              }
            if (fieldGeneratorSpokenBody.have_value)
              {
                result->setSpokenBody(fieldGeneratorSpokenBody.value);
                fieldGeneratorSpokenBody.have_value = false;
              }
            if (fieldGeneratorSubject.have_value)
              {
                result->setSubject(fieldGeneratorSubject.value);
                fieldGeneratorSubject.have_value = false;
              }
            else if (!(result->hasSubject()))
              {
                error("When parsing the object for %what%, the \"Subject\" field was missing.");
              }
            if (fieldGeneratorBody.have_value)
              {
                result->setBody(fieldGeneratorBody.value);
                fieldGeneratorBody.have_value = false;
              }
            else if (!(result->hasBody()))
              {
                error("When parsing the object for %what%, the \"Body\" field was missing.");
              }
          }
        virtual void handle_result(EmailJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'B':
                    switch ((unsigned char)(field_name[1]))
                      {
                        case 'c':
                            if (strcmp(&(field_name[2]), "c") == 0)
                                return &fieldGeneratorBcc;
                            break;
                        case 'o':
                            if (strcmp(&(field_name[2]), "dy") == 0)
                                return &fieldGeneratorBody;
                            break;
                        default:
                            break;
                      }
                    break;
                case 'C':
                    if (strcmp(&(field_name[1]), "c") == 0)
                        return &fieldGeneratorCc;
                    break;
                case 'R':
                    if (strcmp(&(field_name[1]), "ecipients") == 0)
                        return &fieldGeneratorRecipients;
                    break;
                case 'S':
                    switch ((unsigned char)(field_name[1]))
                      {
                        case 'p':
                            if (strncmp(&(field_name[2]), "oken", 4) == 0)
                              {
                                switch ((unsigned char)(field_name[6]))
                                  {
                                    case 'B':
                                        if (strcmp(&(field_name[7]), "ody") == 0)
                                            return &fieldGeneratorSpokenBody;
                                        break;
                                    case 'S':
                                        if (strcmp(&(field_name[7]), "ubject") == 0)
                                            return &fieldGeneratorSpokenSubject;
                                        break;
                                    default:
                                        break;
                                  }
                              }
                            break;
                        case 'u':
                            if (strcmp(&(field_name[2]), "bject") == 0)
                                return &fieldGeneratorSubject;
                            break;
                        default:
                            break;
                      }
                    break;
                case 'T':
                    if (strcmp(&(field_name[1]), "o") == 0)
                        return &fieldGeneratorTo;
                    break;
                default:
                    break;
              }
            return NULL;
          }

      public:
        Generator(bool ignore_extras = false) : fieldGeneratorTo("field \"To\" of the Email class", ignore_extras), fieldGeneratorCc("field \"Cc\" of the Email class", ignore_extras), fieldGeneratorBcc("field \"Bcc\" of the Email class", ignore_extras), fieldGeneratorRecipients("field \"Recipients\" of the Email class", ignore_extras), fieldGeneratorSpokenSubject("field \"SpokenSubject\" of the Email class"), fieldGeneratorSpokenBody("field \"SpokenBody\" of the Email class"), fieldGeneratorSubject("field \"Subject\" of the Email class"), fieldGeneratorBody("field \"Body\" of the Email class")
          {
            set_what("the Email class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorTo.reset();
            fieldGeneratorCc.reset();
            fieldGeneratorBcc.reset();
            fieldGeneratorRecipients.reset();
            fieldGeneratorSpokenSubject.reset();
            fieldGeneratorSpokenBody.reset();
            fieldGeneratorSubject.reset();
            fieldGeneratorBody.reset();
            JSONObjectGenerator::reset();
          }
      };
  };

#endif /* EMAILJSON_H */
