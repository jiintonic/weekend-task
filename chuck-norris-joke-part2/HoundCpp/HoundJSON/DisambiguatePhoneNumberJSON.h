/* file "DisambiguatePhoneNumberJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef DISAMBIGUATEPHONENUMBERJSON_H
#define DISAMBIGUATEPHONENUMBERJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONHoldingArrayGenerator.h"
#include "JSONStringGenerator.h"
#include <vector>
#include <string>
#include "PhoneNumberDisambiguationCandidateJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class DisambiguatePhoneNumberJSON : public ReferenceCounted
  {
  private:
    bool flagHasContactQueryName;
    std::string storeContactQueryName;
    bool flagHasDisambiguationCandidates;
    std::vector< PhoneNumberDisambiguationCandidateJSON * > storeDisambiguationCandidates;

    DisambiguatePhoneNumberJSON(const DisambiguatePhoneNumberJSON &);
    DisambiguatePhoneNumberJSON & operator=(const DisambiguatePhoneNumberJSON &other);

    void  fromJSONContactQueryName(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONDisambiguationCandidates(JSONValue *json_value, bool ignore_extras = false);


  public:
    DisambiguatePhoneNumberJSON(void);
    virtual ~DisambiguatePhoneNumberJSON(void);
    bool  hasContactQueryName(void) const;
    std::string  getContactQueryName(void);
    const std::string  getContactQueryName(void) const;
    bool  hasDisambiguationCandidates(void) const;
    size_t  countOfDisambiguationCandidates(void) const;
    PhoneNumberDisambiguationCandidateJSON *  elementOfDisambiguationCandidates(size_t element_num);
    const PhoneNumberDisambiguationCandidateJSON *  elementOfDisambiguationCandidates(size_t element_num) const;
    std::vector< PhoneNumberDisambiguationCandidateJSON * >  getDisambiguationCandidates(void);
    const std::vector< PhoneNumberDisambiguationCandidateJSON * >  getDisambiguationCandidates(void) const;


    void setContactQueryName(std::string new_value)
      {
        flagHasContactQueryName = true;
        storeContactQueryName = new_value;
      }
    void unsetContactQueryName(void)
      {
        flagHasContactQueryName = false;
      }
    void initDisambiguationCandidates(void)
      {
        if (flagHasDisambiguationCandidates)
          {
            for (size_t num2 = 0; num2 < storeDisambiguationCandidates.size(); ++num2)
              {
                storeDisambiguationCandidates[num2]->remove_reference();
              }
          }
        flagHasDisambiguationCandidates = true;
        storeDisambiguationCandidates.clear();
      }
    void appendDisambiguationCandidates(PhoneNumberDisambiguationCandidateJSON * to_append)
      {
        if (!flagHasDisambiguationCandidates)
          {
            flagHasDisambiguationCandidates = true;
            storeDisambiguationCandidates.clear();
          }
        assert(flagHasDisambiguationCandidates);
        to_append->add_reference();
        storeDisambiguationCandidates.push_back(to_append);
      }
    void unsetDisambiguationCandidates(void)
      {
        if (flagHasDisambiguationCandidates)
          {
            for (size_t num3 = 0; num3 < storeDisambiguationCandidates.size(); ++num3)
              {
                storeDisambiguationCandidates[num3]->remove_reference();
              }
          }
        flagHasDisambiguationCandidates = false;
        storeDisambiguationCandidates.clear();
      }


    void write_as_json(JSONHandler *handler) const
      {
        handler->start_object();
        write_fields_as_json(handler);
        handler->finish_object();
      }

    virtual void write_fields_as_json(JSONHandler *handler) const
      {
        if (flagHasContactQueryName)
          {
            handler->start_pair("ContactQueryName");
            handler->string_value(storeContactQueryName);
          }
        assert(flagHasDisambiguationCandidates);
        handler->start_pair("DisambiguationCandidates");
        handler->start_array();
        for (size_t num1 = 0; num1 < storeDisambiguationCandidates.size(); ++num1)
          {
            storeDisambiguationCandidates[num1]->write_as_json(handler);
          }
        handler->finish_array();
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasDisambiguationCandidates()))
          {
            return "When parsing the object for %what%, the \"DisambiguationCandidates\" field was missing.";
          }
        return NULL;
      }

    static DisambiguatePhoneNumberJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static DisambiguatePhoneNumberJSON *from_text(const char *text, bool ignore_extras = false)
      {
        DisambiguatePhoneNumberJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<DisambiguatePhoneNumberJSON>, DisambiguatePhoneNumberJSON *, bool> generator("Type DisambiguatePhoneNumber", ignore_extras);
            parse_json_value(text, "Text for DisambiguatePhoneNumberJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static DisambiguatePhoneNumberJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        DisambiguatePhoneNumberJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<DisambiguatePhoneNumberJSON>, DisambiguatePhoneNumberJSON *, bool> generator("Type DisambiguatePhoneNumber", ignore_extras);
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
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorContactQueryName;
        JSONHoldingArrayGenerator<PhoneNumberDisambiguationCandidateJSON::Generator, RCHandle<PhoneNumberDisambiguationCandidateJSON>, PhoneNumberDisambiguationCandidateJSON *, bool > fieldGeneratorDisambiguationCandidates;


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
            DisambiguatePhoneNumberJSON *result = new DisambiguatePhoneNumberJSON();
            assert(result != NULL);
            RCHandle<DisambiguatePhoneNumberJSON> result_holder = result;
            finish(result);
            handle_result(result);
          }
        void finish(DisambiguatePhoneNumberJSON *result)
          {
            if (fieldGeneratorContactQueryName.have_value)
              {
                result->setContactQueryName(fieldGeneratorContactQueryName.value);
                fieldGeneratorContactQueryName.have_value = false;
              }
            if (fieldGeneratorDisambiguationCandidates.have_value)
              {
                result->initDisambiguationCandidates();
                size_t count = fieldGeneratorDisambiguationCandidates.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendDisambiguationCandidates(fieldGeneratorDisambiguationCandidates.value[num].referenced());
                  }
                fieldGeneratorDisambiguationCandidates.value.clear();
                fieldGeneratorDisambiguationCandidates.have_value = false;
              }
            else if (!(result->hasDisambiguationCandidates()))
              {
                error("When parsing the object for %what%, the \"DisambiguationCandidates\" field was missing.");
              }
          }
        virtual void handle_result(DisambiguatePhoneNumberJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'C':
                    if (strcmp(&(field_name[1]), "ontactQueryName") == 0)
                        return &fieldGeneratorContactQueryName;
                    break;
                case 'D':
                    if (strcmp(&(field_name[1]), "isambiguationCandidates") == 0)
                        return &fieldGeneratorDisambiguationCandidates;
                    break;
                default:
                    break;
              }
            return NULL;
          }

      public:
        Generator(bool ignore_extras = false) : fieldGeneratorContactQueryName("field \"ContactQueryName\" of the DisambiguatePhoneNumber class"), fieldGeneratorDisambiguationCandidates("field \"DisambiguationCandidates\" of the DisambiguatePhoneNumber class", ignore_extras)
          {
            set_what("the DisambiguatePhoneNumber class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorContactQueryName.reset();
            fieldGeneratorDisambiguationCandidates.reset();
            JSONObjectGenerator::reset();
          }
      };
  };

#endif /* DISAMBIGUATEPHONENUMBERJSON_H */
