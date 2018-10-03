/* file "ContactAndNumberJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef CONTACTANDNUMBERJSON_H
#define CONTACTANDNUMBERJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONStringGenerator.h"
#include <string>
#include "OneContactJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class ContactAndNumberJSON : public ReferenceCounted
  {
  private:
    bool flagHasContact;
    OneContactJSON * storeContact;
    bool flagHasNumber;
    std::string storeNumber;

    ContactAndNumberJSON(const ContactAndNumberJSON &);
    ContactAndNumberJSON & operator=(const ContactAndNumberJSON &other);

    void  fromJSONContact(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONNumber(JSONValue *json_value, bool ignore_extras = false);


  public:
    ContactAndNumberJSON(void);
    virtual ~ContactAndNumberJSON(void);
    bool  hasContact(void) const;
    OneContactJSON *  getContact(void);
    const OneContactJSON *  getContact(void) const;
    bool  hasNumber(void) const;
    std::string  getNumber(void);
    const std::string  getNumber(void) const;


    void setContact(OneContactJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasContact)
          {
            storeContact->remove_reference();
          }
        flagHasContact = true;
        storeContact = new_value;
      }
    void unsetContact(void)
      {
        if (flagHasContact)
          {
            storeContact->remove_reference();
          }
        flagHasContact = false;
      }
    void setNumber(std::string new_value)
      {
        flagHasNumber = true;
        storeNumber = new_value;
      }
    void unsetNumber(void)
      {
        flagHasNumber = false;
      }


    void write_as_json(JSONHandler *handler) const
      {
        handler->start_object();
        write_fields_as_json(handler);
        handler->finish_object();
      }

    virtual void write_fields_as_json(JSONHandler *handler) const
      {
        assert(flagHasContact);
        handler->start_pair("Contact");
        storeContact->write_as_json(handler);
        assert(flagHasNumber);
        handler->start_pair("Number");
        handler->string_value(storeNumber);
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasContact()))
          {
            return "When parsing the object for %what%, the \"Contact\" field was missing.";
          }
        if (!(hasNumber()))
          {
            return "When parsing the object for %what%, the \"Number\" field was missing.";
          }
        return NULL;
      }

    static ContactAndNumberJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static ContactAndNumberJSON *from_text(const char *text, bool ignore_extras = false)
      {
        ContactAndNumberJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<ContactAndNumberJSON>, ContactAndNumberJSON *, bool> generator("Type ContactAndNumber", ignore_extras);
            parse_json_value(text, "Text for ContactAndNumberJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static ContactAndNumberJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        ContactAndNumberJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<ContactAndNumberJSON>, ContactAndNumberJSON *, bool> generator("Type ContactAndNumber", ignore_extras);
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
        JSONHoldingGenerator<OneContactJSON::Generator, RCHandle<OneContactJSON>, OneContactJSON *, bool > fieldGeneratorContact;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorNumber;


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
            ContactAndNumberJSON *result = new ContactAndNumberJSON();
            assert(result != NULL);
            RCHandle<ContactAndNumberJSON> result_holder = result;
            finish(result);
            handle_result(result);
          }
        void finish(ContactAndNumberJSON *result)
          {
            if (fieldGeneratorContact.have_value)
              {
                result->setContact(fieldGeneratorContact.value.referenced());
                fieldGeneratorContact.have_value = false;
              }
            else if (!(result->hasContact()))
              {
                error("When parsing the object for %what%, the \"Contact\" field was missing.");
              }
            if (fieldGeneratorNumber.have_value)
              {
                result->setNumber(fieldGeneratorNumber.value);
                fieldGeneratorNumber.have_value = false;
              }
            else if (!(result->hasNumber()))
              {
                error("When parsing the object for %what%, the \"Number\" field was missing.");
              }
          }
        virtual void handle_result(ContactAndNumberJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'C':
                    if (strcmp(&(field_name[1]), "ontact") == 0)
                        return &fieldGeneratorContact;
                    break;
                case 'N':
                    if (strcmp(&(field_name[1]), "umber") == 0)
                        return &fieldGeneratorNumber;
                    break;
                default:
                    break;
              }
            return NULL;
          }

      public:
        Generator(bool ignore_extras = false) : fieldGeneratorContact("field \"Contact\" of the ContactAndNumber class", ignore_extras), fieldGeneratorNumber("field \"Number\" of the ContactAndNumber class")
          {
            set_what("the ContactAndNumber class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorContact.reset();
            fieldGeneratorNumber.reset();
            JSONObjectGenerator::reset();
          }
      };
  };

#endif /* CONTACTANDNUMBERJSON_H */
