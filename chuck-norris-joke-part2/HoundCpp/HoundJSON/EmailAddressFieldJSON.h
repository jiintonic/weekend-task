/* file "EmailAddressFieldJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef EMAILADDRESSFIELDJSON_H
#define EMAILADDRESSFIELDJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONHoldingArrayGenerator.h"
#include "JSONStringGenerator.h"
#include <vector>
#include <string>
#include "DisambiguateEmailJSON.h"
#include "ValidEmailJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class EmailAddressFieldJSON : public ReferenceCounted
  {
  private:
    bool flagHasMissingEmails;
    std::vector< std::string > storeMissingEmails;
    bool flagHasDisambiguateEmails;
    std::vector< DisambiguateEmailJSON * > storeDisambiguateEmails;
    bool flagHasValidEmails;
    std::vector< ValidEmailJSON * > storeValidEmails;

    EmailAddressFieldJSON(const EmailAddressFieldJSON &);
    EmailAddressFieldJSON & operator=(const EmailAddressFieldJSON &other);

    void  fromJSONMissingEmails(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONDisambiguateEmails(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONValidEmails(JSONValue *json_value, bool ignore_extras = false);


  public:
    EmailAddressFieldJSON(void);
    virtual ~EmailAddressFieldJSON(void);
    bool  hasMissingEmails(void) const;
    size_t  countOfMissingEmails(void) const;
    std::string  elementOfMissingEmails(size_t element_num);
    const std::string  elementOfMissingEmails(size_t element_num) const;
    std::vector< std::string >  getMissingEmails(void);
    const std::vector< std::string >  getMissingEmails(void) const;
    bool  hasDisambiguateEmails(void) const;
    size_t  countOfDisambiguateEmails(void) const;
    DisambiguateEmailJSON *  elementOfDisambiguateEmails(size_t element_num);
    const DisambiguateEmailJSON *  elementOfDisambiguateEmails(size_t element_num) const;
    std::vector< DisambiguateEmailJSON * >  getDisambiguateEmails(void);
    const std::vector< DisambiguateEmailJSON * >  getDisambiguateEmails(void) const;
    bool  hasValidEmails(void) const;
    size_t  countOfValidEmails(void) const;
    ValidEmailJSON *  elementOfValidEmails(size_t element_num);
    const ValidEmailJSON *  elementOfValidEmails(size_t element_num) const;
    std::vector< ValidEmailJSON * >  getValidEmails(void);
    const std::vector< ValidEmailJSON * >  getValidEmails(void) const;


    void initMissingEmails(void)
      {
        flagHasMissingEmails = true;
        storeMissingEmails.clear();
      }
    void appendMissingEmails(std::string to_append)
      {
        if (!flagHasMissingEmails)
          {
            flagHasMissingEmails = true;
            storeMissingEmails.clear();
          }
        assert(flagHasMissingEmails);
        storeMissingEmails.push_back(to_append);
      }
    void unsetMissingEmails(void)
      {
        flagHasMissingEmails = false;
        storeMissingEmails.clear();
      }
    void initDisambiguateEmails(void)
      {
        if (flagHasDisambiguateEmails)
          {
            for (size_t num3 = 0; num3 < storeDisambiguateEmails.size(); ++num3)
              {
                storeDisambiguateEmails[num3]->remove_reference();
              }
          }
        flagHasDisambiguateEmails = true;
        storeDisambiguateEmails.clear();
      }
    void appendDisambiguateEmails(DisambiguateEmailJSON * to_append)
      {
        if (!flagHasDisambiguateEmails)
          {
            flagHasDisambiguateEmails = true;
            storeDisambiguateEmails.clear();
          }
        assert(flagHasDisambiguateEmails);
        to_append->add_reference();
        storeDisambiguateEmails.push_back(to_append);
      }
    void unsetDisambiguateEmails(void)
      {
        if (flagHasDisambiguateEmails)
          {
            for (size_t num4 = 0; num4 < storeDisambiguateEmails.size(); ++num4)
              {
                storeDisambiguateEmails[num4]->remove_reference();
              }
          }
        flagHasDisambiguateEmails = false;
        storeDisambiguateEmails.clear();
      }
    void initValidEmails(void)
      {
        if (flagHasValidEmails)
          {
            for (size_t num5 = 0; num5 < storeValidEmails.size(); ++num5)
              {
                storeValidEmails[num5]->remove_reference();
              }
          }
        flagHasValidEmails = true;
        storeValidEmails.clear();
      }
    void appendValidEmails(ValidEmailJSON * to_append)
      {
        if (!flagHasValidEmails)
          {
            flagHasValidEmails = true;
            storeValidEmails.clear();
          }
        assert(flagHasValidEmails);
        to_append->add_reference();
        storeValidEmails.push_back(to_append);
      }
    void unsetValidEmails(void)
      {
        if (flagHasValidEmails)
          {
            for (size_t num6 = 0; num6 < storeValidEmails.size(); ++num6)
              {
                storeValidEmails[num6]->remove_reference();
              }
          }
        flagHasValidEmails = false;
        storeValidEmails.clear();
      }


    void write_as_json(JSONHandler *handler) const
      {
        handler->start_object();
        write_fields_as_json(handler);
        handler->finish_object();
      }

    virtual void write_fields_as_json(JSONHandler *handler) const
      {
        if (flagHasMissingEmails)
          {
            handler->start_pair("MissingEmails");
            handler->start_array();
            for (size_t num1 = 0; num1 < storeMissingEmails.size(); ++num1)
              {
                handler->string_value(storeMissingEmails[num1]);
              }
            handler->finish_array();
          }
        if (flagHasDisambiguateEmails)
          {
            handler->start_pair("DisambiguateEmails");
            handler->start_array();
            for (size_t num2 = 0; num2 < storeDisambiguateEmails.size(); ++num2)
              {
                storeDisambiguateEmails[num2]->write_as_json(handler);
              }
            handler->finish_array();
          }
        if (flagHasValidEmails)
          {
            handler->start_pair("ValidEmails");
            handler->start_array();
            for (size_t num3 = 0; num3 < storeValidEmails.size(); ++num3)
              {
                storeValidEmails[num3]->write_as_json(handler);
              }
            handler->finish_array();
          }
      }
    virtual const char *missing_field_error(void) const
      {
        return NULL;
      }

    static EmailAddressFieldJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static EmailAddressFieldJSON *from_text(const char *text, bool ignore_extras = false)
      {
        EmailAddressFieldJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<EmailAddressFieldJSON>, EmailAddressFieldJSON *, bool> generator("Type EmailAddressField", ignore_extras);
            parse_json_value(text, "Text for EmailAddressFieldJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static EmailAddressFieldJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        EmailAddressFieldJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<EmailAddressFieldJSON>, EmailAddressFieldJSON *, bool> generator("Type EmailAddressField", ignore_extras);
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
        JSONHoldingArrayGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorMissingEmails;
        JSONHoldingArrayGenerator<DisambiguateEmailJSON::Generator, RCHandle<DisambiguateEmailJSON>, DisambiguateEmailJSON *, bool > fieldGeneratorDisambiguateEmails;
        JSONHoldingArrayGenerator<ValidEmailJSON::Generator, RCHandle<ValidEmailJSON>, ValidEmailJSON *, bool > fieldGeneratorValidEmails;


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
            EmailAddressFieldJSON *result = new EmailAddressFieldJSON();
            assert(result != NULL);
            RCHandle<EmailAddressFieldJSON> result_holder = result;
            finish(result);
            handle_result(result);
          }
        void finish(EmailAddressFieldJSON *result)
          {
            if (fieldGeneratorMissingEmails.have_value)
              {
                result->initMissingEmails();
                size_t count = fieldGeneratorMissingEmails.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendMissingEmails(fieldGeneratorMissingEmails.value[num]);
                  }
                fieldGeneratorMissingEmails.value.clear();
                fieldGeneratorMissingEmails.have_value = false;
              }
            if (fieldGeneratorDisambiguateEmails.have_value)
              {
                result->initDisambiguateEmails();
                size_t count = fieldGeneratorDisambiguateEmails.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendDisambiguateEmails(fieldGeneratorDisambiguateEmails.value[num].referenced());
                  }
                fieldGeneratorDisambiguateEmails.value.clear();
                fieldGeneratorDisambiguateEmails.have_value = false;
              }
            if (fieldGeneratorValidEmails.have_value)
              {
                result->initValidEmails();
                size_t count = fieldGeneratorValidEmails.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendValidEmails(fieldGeneratorValidEmails.value[num].referenced());
                  }
                fieldGeneratorValidEmails.value.clear();
                fieldGeneratorValidEmails.have_value = false;
              }
          }
        virtual void handle_result(EmailAddressFieldJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'D':
                    if (strcmp(&(field_name[1]), "isambiguateEmails") == 0)
                        return &fieldGeneratorDisambiguateEmails;
                    break;
                case 'M':
                    if (strcmp(&(field_name[1]), "issingEmails") == 0)
                        return &fieldGeneratorMissingEmails;
                    break;
                case 'V':
                    if (strcmp(&(field_name[1]), "alidEmails") == 0)
                        return &fieldGeneratorValidEmails;
                    break;
                default:
                    break;
              }
            return NULL;
          }

      public:
        Generator(bool ignore_extras = false) : fieldGeneratorMissingEmails("field \"MissingEmails\" of the EmailAddressField class"), fieldGeneratorDisambiguateEmails("field \"DisambiguateEmails\" of the EmailAddressField class", ignore_extras), fieldGeneratorValidEmails("field \"ValidEmails\" of the EmailAddressField class", ignore_extras)
          {
            set_what("the EmailAddressField class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorMissingEmails.reset();
            fieldGeneratorDisambiguateEmails.reset();
            fieldGeneratorValidEmails.reset();
            JSONObjectGenerator::reset();
          }
      };
  };

#endif /* EMAILADDRESSFIELDJSON_H */
