/* file "EmailDisambiguationCandidateJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef EMAILDISAMBIGUATIONCANDIDATEJSON_H
#define EMAILDISAMBIGUATIONCANDIDATEJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONHoldingArrayGenerator.h"
#include "JSONStringGenerator.h"
#include <vector>
#include <string>
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class EmailDisambiguationCandidateJSON : public ReferenceCounted
  {
  public:
    class TypeEmailsJSON : public ReferenceCounted
      {
      private:
        bool flagHasLabel;
        std::string storeLabel;
        bool flagHasEmail;
        std::string storeEmail;

        TypeEmailsJSON(const TypeEmailsJSON &);
        TypeEmailsJSON & operator=(const TypeEmailsJSON &other);

        void  fromJSONLabel(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONEmail(JSONValue *json_value, bool ignore_extras = false);


      public:
        TypeEmailsJSON(void);
        virtual ~TypeEmailsJSON(void);
        bool  hasLabel(void) const;
        std::string  getLabel(void);
        const std::string  getLabel(void) const;
        bool  hasEmail(void) const;
        std::string  getEmail(void);
        const std::string  getEmail(void) const;


        void setLabel(std::string new_value)
          {
            flagHasLabel = true;
            storeLabel = new_value;
          }
        void unsetLabel(void)
          {
            flagHasLabel = false;
          }
        void setEmail(std::string new_value)
          {
            flagHasEmail = true;
            storeEmail = new_value;
          }
        void unsetEmail(void)
          {
            flagHasEmail = false;
          }


        void write_as_json(JSONHandler *handler) const
          {
            handler->start_object();
            write_fields_as_json(handler);
            handler->finish_object();
          }

        virtual void write_fields_as_json(JSONHandler *handler) const
          {
            assert(flagHasLabel);
            handler->start_pair("Label");
            handler->string_value(storeLabel);
            assert(flagHasEmail);
            handler->start_pair("Email");
            handler->string_value(storeEmail);
          }
        virtual const char *missing_field_error(void) const
          {
            if (!(hasLabel()))
              {
                return "When parsing the object for %what%, the \"Label\" field was missing.";
              }
            if (!(hasEmail()))
              {
                return "When parsing the object for %what%, the \"Email\" field was missing.";
              }
            return NULL;
          }

        static TypeEmailsJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
        static TypeEmailsJSON *from_text(const char *text, bool ignore_extras = false)
          {
            TypeEmailsJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeEmailsJSON>, TypeEmailsJSON *, bool> generator("Type TypeEmails", ignore_extras);
                parse_json_value(text, "Text for TypeEmailsJSON", &generator);
                assert(generator.have_value);
                result = generator.value.referenced();
                result->add_reference();
              };
            result->remove_reference_no_delete();
            return result;
          }
        static TypeEmailsJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
          {
            TypeEmailsJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeEmailsJSON>, TypeEmailsJSON *, bool> generator("Type TypeEmails", ignore_extras);
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
            JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorLabel;
            JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorEmail;


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
                TypeEmailsJSON *result = new TypeEmailsJSON();
                assert(result != NULL);
                RCHandle<TypeEmailsJSON> result_holder = result;
                finish(result);
                handle_result(result);
              }
            void finish(TypeEmailsJSON *result)
              {
                if (fieldGeneratorLabel.have_value)
                  {
                    result->setLabel(fieldGeneratorLabel.value);
                    fieldGeneratorLabel.have_value = false;
                  }
                else if (!(result->hasLabel()))
                  {
                    error("When parsing the object for %what%, the \"Label\" field was missing.");
                  }
                if (fieldGeneratorEmail.have_value)
                  {
                    result->setEmail(fieldGeneratorEmail.value);
                    fieldGeneratorEmail.have_value = false;
                  }
                else if (!(result->hasEmail()))
                  {
                    error("When parsing the object for %what%, the \"Email\" field was missing.");
                  }
              }
            virtual void handle_result(TypeEmailsJSON *new_result) = 0;
            virtual JSONHandler *start_known_field(const char *field_name)
              {
                switch ((unsigned char)(field_name[0]))
                  {
                    case 'E':
                        if (strcmp(&(field_name[1]), "mail") == 0)
                            return &fieldGeneratorEmail;
                        break;
                    case 'L':
                        if (strcmp(&(field_name[1]), "abel") == 0)
                            return &fieldGeneratorLabel;
                        break;
                    default:
                        break;
                  }
                return NULL;
              }

          public:
            Generator(bool ignore_extras = false) : fieldGeneratorLabel("field \"Label\" of the TypeEmails class"), fieldGeneratorEmail("field \"Email\" of the TypeEmails class")
              {
                set_what("the TypeEmails class");
              }
            ~Generator(void)
              {
              }

            void reset(void)
              {
                fieldGeneratorLabel.reset();
                fieldGeneratorEmail.reset();
                JSONObjectGenerator::reset();
              }
          };
      };

  private:
    bool flagHasContactName;
    std::string storeContactName;
    bool flagHasContactID;
    std::string storeContactID;
    bool flagHasEmails;
    std::vector< TypeEmailsJSON * > storeEmails;

    EmailDisambiguationCandidateJSON(const EmailDisambiguationCandidateJSON &);
    EmailDisambiguationCandidateJSON & operator=(const EmailDisambiguationCandidateJSON &other);

    void  fromJSONContactName(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONContactID(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONEmails(JSONValue *json_value, bool ignore_extras = false);


  public:
    EmailDisambiguationCandidateJSON(void);
    virtual ~EmailDisambiguationCandidateJSON(void);
    bool  hasContactName(void) const;
    std::string  getContactName(void);
    const std::string  getContactName(void) const;
    bool  hasContactID(void) const;
    std::string  getContactID(void);
    const std::string  getContactID(void) const;
    bool  hasEmails(void) const;
    size_t  countOfEmails(void) const;
    TypeEmailsJSON *  elementOfEmails(size_t element_num);
    const TypeEmailsJSON *  elementOfEmails(size_t element_num) const;
    std::vector< TypeEmailsJSON * >  getEmails(void);
    const std::vector< TypeEmailsJSON * >  getEmails(void) const;


    void setContactName(std::string new_value)
      {
        flagHasContactName = true;
        storeContactName = new_value;
      }
    void unsetContactName(void)
      {
        flagHasContactName = false;
      }
    void setContactID(std::string new_value)
      {
        flagHasContactID = true;
        storeContactID = new_value;
      }
    void unsetContactID(void)
      {
        flagHasContactID = false;
      }
    void initEmails(void)
      {
        if (flagHasEmails)
          {
            for (size_t num2 = 0; num2 < storeEmails.size(); ++num2)
              {
                storeEmails[num2]->remove_reference();
              }
          }
        flagHasEmails = true;
        storeEmails.clear();
      }
    void appendEmails(TypeEmailsJSON * to_append)
      {
        if (!flagHasEmails)
          {
            flagHasEmails = true;
            storeEmails.clear();
          }
        assert(flagHasEmails);
        to_append->add_reference();
        storeEmails.push_back(to_append);
      }
    void unsetEmails(void)
      {
        if (flagHasEmails)
          {
            for (size_t num3 = 0; num3 < storeEmails.size(); ++num3)
              {
                storeEmails[num3]->remove_reference();
              }
          }
        flagHasEmails = false;
        storeEmails.clear();
      }


    void write_as_json(JSONHandler *handler) const
      {
        handler->start_object();
        write_fields_as_json(handler);
        handler->finish_object();
      }

    virtual void write_fields_as_json(JSONHandler *handler) const
      {
        assert(flagHasContactName);
        handler->start_pair("ContactName");
        handler->string_value(storeContactName);
        assert(flagHasContactID);
        handler->start_pair("ContactID");
        handler->string_value(storeContactID);
        assert(flagHasEmails);
        handler->start_pair("Emails");
        handler->start_array();
        for (size_t num1 = 0; num1 < storeEmails.size(); ++num1)
          {
            storeEmails[num1]->write_as_json(handler);
          }
        handler->finish_array();
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasContactName()))
          {
            return "When parsing the object for %what%, the \"ContactName\" field was missing.";
          }
        if (!(hasContactID()))
          {
            return "When parsing the object for %what%, the \"ContactID\" field was missing.";
          }
        if (!(hasEmails()))
          {
            return "When parsing the object for %what%, the \"Emails\" field was missing.";
          }
        return NULL;
      }

    static EmailDisambiguationCandidateJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static EmailDisambiguationCandidateJSON *from_text(const char *text, bool ignore_extras = false)
      {
        EmailDisambiguationCandidateJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<EmailDisambiguationCandidateJSON>, EmailDisambiguationCandidateJSON *, bool> generator("Type EmailDisambiguationCandidate", ignore_extras);
            parse_json_value(text, "Text for EmailDisambiguationCandidateJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static EmailDisambiguationCandidateJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        EmailDisambiguationCandidateJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<EmailDisambiguationCandidateJSON>, EmailDisambiguationCandidateJSON *, bool> generator("Type EmailDisambiguationCandidate", ignore_extras);
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
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorContactName;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorContactID;
        JSONHoldingArrayGenerator<TypeEmailsJSON::Generator, RCHandle<TypeEmailsJSON>, TypeEmailsJSON *, bool > fieldGeneratorEmails;


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
            EmailDisambiguationCandidateJSON *result = new EmailDisambiguationCandidateJSON();
            assert(result != NULL);
            RCHandle<EmailDisambiguationCandidateJSON> result_holder = result;
            finish(result);
            handle_result(result);
          }
        void finish(EmailDisambiguationCandidateJSON *result)
          {
            if (fieldGeneratorContactName.have_value)
              {
                result->setContactName(fieldGeneratorContactName.value);
                fieldGeneratorContactName.have_value = false;
              }
            else if (!(result->hasContactName()))
              {
                error("When parsing the object for %what%, the \"ContactName\" field was missing.");
              }
            if (fieldGeneratorContactID.have_value)
              {
                result->setContactID(fieldGeneratorContactID.value);
                fieldGeneratorContactID.have_value = false;
              }
            else if (!(result->hasContactID()))
              {
                error("When parsing the object for %what%, the \"ContactID\" field was missing.");
              }
            if (fieldGeneratorEmails.have_value)
              {
                result->initEmails();
                size_t count = fieldGeneratorEmails.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendEmails(fieldGeneratorEmails.value[num].referenced());
                  }
                fieldGeneratorEmails.value.clear();
                fieldGeneratorEmails.have_value = false;
              }
            else if (!(result->hasEmails()))
              {
                error("When parsing the object for %what%, the \"Emails\" field was missing.");
              }
          }
        virtual void handle_result(EmailDisambiguationCandidateJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'C':
                    if (strncmp(&(field_name[1]), "ontact", 6) == 0)
                      {
                        switch ((unsigned char)(field_name[7]))
                          {
                            case 'I':
                                if (strcmp(&(field_name[8]), "D") == 0)
                                    return &fieldGeneratorContactID;
                                break;
                            case 'N':
                                if (strcmp(&(field_name[8]), "ame") == 0)
                                    return &fieldGeneratorContactName;
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 'E':
                    if (strcmp(&(field_name[1]), "mails") == 0)
                        return &fieldGeneratorEmails;
                    break;
                default:
                    break;
              }
            return NULL;
          }

      public:
        Generator(bool ignore_extras = false) : fieldGeneratorContactName("field \"ContactName\" of the EmailDisambiguationCandidate class"), fieldGeneratorContactID("field \"ContactID\" of the EmailDisambiguationCandidate class"), fieldGeneratorEmails("field \"Emails\" of the EmailDisambiguationCandidate class", ignore_extras)
          {
            set_what("the EmailDisambiguationCandidate class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorContactName.reset();
            fieldGeneratorContactID.reset();
            fieldGeneratorEmails.reset();
            JSONObjectGenerator::reset();
          }
      };
  };

#endif /* EMAILDISAMBIGUATIONCANDIDATEJSON_H */
