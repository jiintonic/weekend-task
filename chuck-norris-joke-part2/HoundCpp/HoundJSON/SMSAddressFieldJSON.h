/* file "SMSAddressFieldJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef SMSADDRESSFIELDJSON_H
#define SMSADDRESSFIELDJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONHoldingArrayGenerator.h"
#include "JSONStringGenerator.h"
#include <vector>
#include <string>
#include "DisambiguatePhoneNumberJSON.h"
#include "ValidPhoneNumberJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class SMSAddressFieldJSON : public ReferenceCounted
  {
  private:
    bool flagHasMissingPhoneNumbers;
    std::vector< std::string > storeMissingPhoneNumbers;
    bool flagHasDisambiguatePhoneNumbers;
    std::vector< DisambiguatePhoneNumberJSON * > storeDisambiguatePhoneNumbers;
    bool flagHasValidPhoneNumbers;
    std::vector< ValidPhoneNumberJSON * > storeValidPhoneNumbers;

    SMSAddressFieldJSON(const SMSAddressFieldJSON &);
    SMSAddressFieldJSON & operator=(const SMSAddressFieldJSON &other);

    void  fromJSONMissingPhoneNumbers(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONDisambiguatePhoneNumbers(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONValidPhoneNumbers(JSONValue *json_value, bool ignore_extras = false);


  public:
    SMSAddressFieldJSON(void);
    virtual ~SMSAddressFieldJSON(void);
    bool  hasMissingPhoneNumbers(void) const;
    size_t  countOfMissingPhoneNumbers(void) const;
    std::string  elementOfMissingPhoneNumbers(size_t element_num);
    const std::string  elementOfMissingPhoneNumbers(size_t element_num) const;
    std::vector< std::string >  getMissingPhoneNumbers(void);
    const std::vector< std::string >  getMissingPhoneNumbers(void) const;
    bool  hasDisambiguatePhoneNumbers(void) const;
    size_t  countOfDisambiguatePhoneNumbers(void) const;
    DisambiguatePhoneNumberJSON *  elementOfDisambiguatePhoneNumbers(size_t element_num);
    const DisambiguatePhoneNumberJSON *  elementOfDisambiguatePhoneNumbers(size_t element_num) const;
    std::vector< DisambiguatePhoneNumberJSON * >  getDisambiguatePhoneNumbers(void);
    const std::vector< DisambiguatePhoneNumberJSON * >  getDisambiguatePhoneNumbers(void) const;
    bool  hasValidPhoneNumbers(void) const;
    size_t  countOfValidPhoneNumbers(void) const;
    ValidPhoneNumberJSON *  elementOfValidPhoneNumbers(size_t element_num);
    const ValidPhoneNumberJSON *  elementOfValidPhoneNumbers(size_t element_num) const;
    std::vector< ValidPhoneNumberJSON * >  getValidPhoneNumbers(void);
    const std::vector< ValidPhoneNumberJSON * >  getValidPhoneNumbers(void) const;


    void initMissingPhoneNumbers(void)
      {
        flagHasMissingPhoneNumbers = true;
        storeMissingPhoneNumbers.clear();
      }
    void appendMissingPhoneNumbers(std::string to_append)
      {
        if (!flagHasMissingPhoneNumbers)
          {
            flagHasMissingPhoneNumbers = true;
            storeMissingPhoneNumbers.clear();
          }
        assert(flagHasMissingPhoneNumbers);
        storeMissingPhoneNumbers.push_back(to_append);
      }
    void unsetMissingPhoneNumbers(void)
      {
        flagHasMissingPhoneNumbers = false;
        storeMissingPhoneNumbers.clear();
      }
    void initDisambiguatePhoneNumbers(void)
      {
        if (flagHasDisambiguatePhoneNumbers)
          {
            for (size_t num3 = 0; num3 < storeDisambiguatePhoneNumbers.size(); ++num3)
              {
                storeDisambiguatePhoneNumbers[num3]->remove_reference();
              }
          }
        flagHasDisambiguatePhoneNumbers = true;
        storeDisambiguatePhoneNumbers.clear();
      }
    void appendDisambiguatePhoneNumbers(DisambiguatePhoneNumberJSON * to_append)
      {
        if (!flagHasDisambiguatePhoneNumbers)
          {
            flagHasDisambiguatePhoneNumbers = true;
            storeDisambiguatePhoneNumbers.clear();
          }
        assert(flagHasDisambiguatePhoneNumbers);
        to_append->add_reference();
        storeDisambiguatePhoneNumbers.push_back(to_append);
      }
    void unsetDisambiguatePhoneNumbers(void)
      {
        if (flagHasDisambiguatePhoneNumbers)
          {
            for (size_t num4 = 0; num4 < storeDisambiguatePhoneNumbers.size(); ++num4)
              {
                storeDisambiguatePhoneNumbers[num4]->remove_reference();
              }
          }
        flagHasDisambiguatePhoneNumbers = false;
        storeDisambiguatePhoneNumbers.clear();
      }
    void initValidPhoneNumbers(void)
      {
        if (flagHasValidPhoneNumbers)
          {
            for (size_t num5 = 0; num5 < storeValidPhoneNumbers.size(); ++num5)
              {
                storeValidPhoneNumbers[num5]->remove_reference();
              }
          }
        flagHasValidPhoneNumbers = true;
        storeValidPhoneNumbers.clear();
      }
    void appendValidPhoneNumbers(ValidPhoneNumberJSON * to_append)
      {
        if (!flagHasValidPhoneNumbers)
          {
            flagHasValidPhoneNumbers = true;
            storeValidPhoneNumbers.clear();
          }
        assert(flagHasValidPhoneNumbers);
        to_append->add_reference();
        storeValidPhoneNumbers.push_back(to_append);
      }
    void unsetValidPhoneNumbers(void)
      {
        if (flagHasValidPhoneNumbers)
          {
            for (size_t num6 = 0; num6 < storeValidPhoneNumbers.size(); ++num6)
              {
                storeValidPhoneNumbers[num6]->remove_reference();
              }
          }
        flagHasValidPhoneNumbers = false;
        storeValidPhoneNumbers.clear();
      }


    void write_as_json(JSONHandler *handler) const
      {
        handler->start_object();
        write_fields_as_json(handler);
        handler->finish_object();
      }

    virtual void write_fields_as_json(JSONHandler *handler) const
      {
        if (flagHasMissingPhoneNumbers)
          {
            handler->start_pair("MissingPhoneNumbers");
            handler->start_array();
            for (size_t num1 = 0; num1 < storeMissingPhoneNumbers.size(); ++num1)
              {
                handler->string_value(storeMissingPhoneNumbers[num1]);
              }
            handler->finish_array();
          }
        if (flagHasDisambiguatePhoneNumbers)
          {
            handler->start_pair("DisambiguatePhoneNumbers");
            handler->start_array();
            for (size_t num2 = 0; num2 < storeDisambiguatePhoneNumbers.size(); ++num2)
              {
                storeDisambiguatePhoneNumbers[num2]->write_as_json(handler);
              }
            handler->finish_array();
          }
        if (flagHasValidPhoneNumbers)
          {
            handler->start_pair("ValidPhoneNumbers");
            handler->start_array();
            for (size_t num3 = 0; num3 < storeValidPhoneNumbers.size(); ++num3)
              {
                storeValidPhoneNumbers[num3]->write_as_json(handler);
              }
            handler->finish_array();
          }
      }
    virtual const char *missing_field_error(void) const
      {
        return NULL;
      }

    static SMSAddressFieldJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static SMSAddressFieldJSON *from_text(const char *text, bool ignore_extras = false)
      {
        SMSAddressFieldJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<SMSAddressFieldJSON>, SMSAddressFieldJSON *, bool> generator("Type SMSAddressField", ignore_extras);
            parse_json_value(text, "Text for SMSAddressFieldJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static SMSAddressFieldJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        SMSAddressFieldJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<SMSAddressFieldJSON>, SMSAddressFieldJSON *, bool> generator("Type SMSAddressField", ignore_extras);
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
        JSONHoldingArrayGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorMissingPhoneNumbers;
        JSONHoldingArrayGenerator<DisambiguatePhoneNumberJSON::Generator, RCHandle<DisambiguatePhoneNumberJSON>, DisambiguatePhoneNumberJSON *, bool > fieldGeneratorDisambiguatePhoneNumbers;
        JSONHoldingArrayGenerator<ValidPhoneNumberJSON::Generator, RCHandle<ValidPhoneNumberJSON>, ValidPhoneNumberJSON *, bool > fieldGeneratorValidPhoneNumbers;


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
            SMSAddressFieldJSON *result = new SMSAddressFieldJSON();
            assert(result != NULL);
            RCHandle<SMSAddressFieldJSON> result_holder = result;
            finish(result);
            handle_result(result);
          }
        void finish(SMSAddressFieldJSON *result)
          {
            if (fieldGeneratorMissingPhoneNumbers.have_value)
              {
                result->initMissingPhoneNumbers();
                size_t count = fieldGeneratorMissingPhoneNumbers.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendMissingPhoneNumbers(fieldGeneratorMissingPhoneNumbers.value[num]);
                  }
                fieldGeneratorMissingPhoneNumbers.value.clear();
                fieldGeneratorMissingPhoneNumbers.have_value = false;
              }
            if (fieldGeneratorDisambiguatePhoneNumbers.have_value)
              {
                result->initDisambiguatePhoneNumbers();
                size_t count = fieldGeneratorDisambiguatePhoneNumbers.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendDisambiguatePhoneNumbers(fieldGeneratorDisambiguatePhoneNumbers.value[num].referenced());
                  }
                fieldGeneratorDisambiguatePhoneNumbers.value.clear();
                fieldGeneratorDisambiguatePhoneNumbers.have_value = false;
              }
            if (fieldGeneratorValidPhoneNumbers.have_value)
              {
                result->initValidPhoneNumbers();
                size_t count = fieldGeneratorValidPhoneNumbers.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendValidPhoneNumbers(fieldGeneratorValidPhoneNumbers.value[num].referenced());
                  }
                fieldGeneratorValidPhoneNumbers.value.clear();
                fieldGeneratorValidPhoneNumbers.have_value = false;
              }
          }
        virtual void handle_result(SMSAddressFieldJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'D':
                    if (strcmp(&(field_name[1]), "isambiguatePhoneNumbers") == 0)
                        return &fieldGeneratorDisambiguatePhoneNumbers;
                    break;
                case 'M':
                    if (strcmp(&(field_name[1]), "issingPhoneNumbers") == 0)
                        return &fieldGeneratorMissingPhoneNumbers;
                    break;
                case 'V':
                    if (strcmp(&(field_name[1]), "alidPhoneNumbers") == 0)
                        return &fieldGeneratorValidPhoneNumbers;
                    break;
                default:
                    break;
              }
            return NULL;
          }

      public:
        Generator(bool ignore_extras = false) : fieldGeneratorMissingPhoneNumbers("field \"MissingPhoneNumbers\" of the SMSAddressField class"), fieldGeneratorDisambiguatePhoneNumbers("field \"DisambiguatePhoneNumbers\" of the SMSAddressField class", ignore_extras), fieldGeneratorValidPhoneNumbers("field \"ValidPhoneNumbers\" of the SMSAddressField class", ignore_extras)
          {
            set_what("the SMSAddressField class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorMissingPhoneNumbers.reset();
            fieldGeneratorDisambiguatePhoneNumbers.reset();
            fieldGeneratorValidPhoneNumbers.reset();
            JSONObjectGenerator::reset();
          }
      };
  };

#endif /* SMSADDRESSFIELDJSON_H */
