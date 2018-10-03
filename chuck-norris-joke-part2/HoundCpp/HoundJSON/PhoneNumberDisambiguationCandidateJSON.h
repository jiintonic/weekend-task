/* file "PhoneNumberDisambiguationCandidateJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef PHONENUMBERDISAMBIGUATIONCANDIDATEJSON_H
#define PHONENUMBERDISAMBIGUATIONCANDIDATEJSON_H

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


class PhoneNumberDisambiguationCandidateJSON : public ReferenceCounted
  {
  public:
    class TypePhoneNumbersJSON : public ReferenceCounted
      {
      private:
        bool flagHasLabel;
        std::string storeLabel;
        bool flagHasNumber;
        std::string storeNumber;

        TypePhoneNumbersJSON(const TypePhoneNumbersJSON &);
        TypePhoneNumbersJSON & operator=(const TypePhoneNumbersJSON &other);

        void  fromJSONLabel(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONNumber(JSONValue *json_value, bool ignore_extras = false);


      public:
        TypePhoneNumbersJSON(void);
        virtual ~TypePhoneNumbersJSON(void);
        bool  hasLabel(void) const;
        std::string  getLabel(void);
        const std::string  getLabel(void) const;
        bool  hasNumber(void) const;
        std::string  getNumber(void);
        const std::string  getNumber(void) const;


        void setLabel(std::string new_value)
          {
            flagHasLabel = true;
            storeLabel = new_value;
          }
        void unsetLabel(void)
          {
            flagHasLabel = false;
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
            assert(flagHasLabel);
            handler->start_pair("Label");
            handler->string_value(storeLabel);
            assert(flagHasNumber);
            handler->start_pair("Number");
            handler->string_value(storeNumber);
          }
        virtual const char *missing_field_error(void) const
          {
            if (!(hasLabel()))
              {
                return "When parsing the object for %what%, the \"Label\" field was missing.";
              }
            if (!(hasNumber()))
              {
                return "When parsing the object for %what%, the \"Number\" field was missing.";
              }
            return NULL;
          }

        static TypePhoneNumbersJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
        static TypePhoneNumbersJSON *from_text(const char *text, bool ignore_extras = false)
          {
            TypePhoneNumbersJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypePhoneNumbersJSON>, TypePhoneNumbersJSON *, bool> generator("Type TypePhoneNumbers", ignore_extras);
                parse_json_value(text, "Text for TypePhoneNumbersJSON", &generator);
                assert(generator.have_value);
                result = generator.value.referenced();
                result->add_reference();
              };
            result->remove_reference_no_delete();
            return result;
          }
        static TypePhoneNumbersJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
          {
            TypePhoneNumbersJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypePhoneNumbersJSON>, TypePhoneNumbersJSON *, bool> generator("Type TypePhoneNumbers", ignore_extras);
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
                TypePhoneNumbersJSON *result = new TypePhoneNumbersJSON();
                assert(result != NULL);
                RCHandle<TypePhoneNumbersJSON> result_holder = result;
                finish(result);
                handle_result(result);
              }
            void finish(TypePhoneNumbersJSON *result)
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
            virtual void handle_result(TypePhoneNumbersJSON *new_result) = 0;
            virtual JSONHandler *start_known_field(const char *field_name)
              {
                switch ((unsigned char)(field_name[0]))
                  {
                    case 'L':
                        if (strcmp(&(field_name[1]), "abel") == 0)
                            return &fieldGeneratorLabel;
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
            Generator(bool ignore_extras = false) : fieldGeneratorLabel("field \"Label\" of the TypePhoneNumbers class"), fieldGeneratorNumber("field \"Number\" of the TypePhoneNumbers class")
              {
                set_what("the TypePhoneNumbers class");
              }
            ~Generator(void)
              {
              }

            void reset(void)
              {
                fieldGeneratorLabel.reset();
                fieldGeneratorNumber.reset();
                JSONObjectGenerator::reset();
              }
          };
      };

  private:
    bool flagHasContactName;
    std::string storeContactName;
    bool flagHasContactID;
    std::string storeContactID;
    bool flagHasPhoneNumbers;
    std::vector< TypePhoneNumbersJSON * > storePhoneNumbers;

    PhoneNumberDisambiguationCandidateJSON(const PhoneNumberDisambiguationCandidateJSON &);
    PhoneNumberDisambiguationCandidateJSON & operator=(const PhoneNumberDisambiguationCandidateJSON &other);

    void  fromJSONContactName(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONContactID(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONPhoneNumbers(JSONValue *json_value, bool ignore_extras = false);


  public:
    PhoneNumberDisambiguationCandidateJSON(void);
    virtual ~PhoneNumberDisambiguationCandidateJSON(void);
    bool  hasContactName(void) const;
    std::string  getContactName(void);
    const std::string  getContactName(void) const;
    bool  hasContactID(void) const;
    std::string  getContactID(void);
    const std::string  getContactID(void) const;
    bool  hasPhoneNumbers(void) const;
    size_t  countOfPhoneNumbers(void) const;
    TypePhoneNumbersJSON *  elementOfPhoneNumbers(size_t element_num);
    const TypePhoneNumbersJSON *  elementOfPhoneNumbers(size_t element_num) const;
    std::vector< TypePhoneNumbersJSON * >  getPhoneNumbers(void);
    const std::vector< TypePhoneNumbersJSON * >  getPhoneNumbers(void) const;


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
    void initPhoneNumbers(void)
      {
        if (flagHasPhoneNumbers)
          {
            for (size_t num2 = 0; num2 < storePhoneNumbers.size(); ++num2)
              {
                storePhoneNumbers[num2]->remove_reference();
              }
          }
        flagHasPhoneNumbers = true;
        storePhoneNumbers.clear();
      }
    void appendPhoneNumbers(TypePhoneNumbersJSON * to_append)
      {
        if (!flagHasPhoneNumbers)
          {
            flagHasPhoneNumbers = true;
            storePhoneNumbers.clear();
          }
        assert(flagHasPhoneNumbers);
        to_append->add_reference();
        storePhoneNumbers.push_back(to_append);
      }
    void unsetPhoneNumbers(void)
      {
        if (flagHasPhoneNumbers)
          {
            for (size_t num3 = 0; num3 < storePhoneNumbers.size(); ++num3)
              {
                storePhoneNumbers[num3]->remove_reference();
              }
          }
        flagHasPhoneNumbers = false;
        storePhoneNumbers.clear();
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
        assert(flagHasPhoneNumbers);
        handler->start_pair("PhoneNumbers");
        handler->start_array();
        for (size_t num1 = 0; num1 < storePhoneNumbers.size(); ++num1)
          {
            storePhoneNumbers[num1]->write_as_json(handler);
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
        if (!(hasPhoneNumbers()))
          {
            return "When parsing the object for %what%, the \"PhoneNumbers\" field was missing.";
          }
        return NULL;
      }

    static PhoneNumberDisambiguationCandidateJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static PhoneNumberDisambiguationCandidateJSON *from_text(const char *text, bool ignore_extras = false)
      {
        PhoneNumberDisambiguationCandidateJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<PhoneNumberDisambiguationCandidateJSON>, PhoneNumberDisambiguationCandidateJSON *, bool> generator("Type PhoneNumberDisambiguationCandidate", ignore_extras);
            parse_json_value(text, "Text for PhoneNumberDisambiguationCandidateJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static PhoneNumberDisambiguationCandidateJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        PhoneNumberDisambiguationCandidateJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<PhoneNumberDisambiguationCandidateJSON>, PhoneNumberDisambiguationCandidateJSON *, bool> generator("Type PhoneNumberDisambiguationCandidate", ignore_extras);
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
        JSONHoldingArrayGenerator<TypePhoneNumbersJSON::Generator, RCHandle<TypePhoneNumbersJSON>, TypePhoneNumbersJSON *, bool > fieldGeneratorPhoneNumbers;


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
            PhoneNumberDisambiguationCandidateJSON *result = new PhoneNumberDisambiguationCandidateJSON();
            assert(result != NULL);
            RCHandle<PhoneNumberDisambiguationCandidateJSON> result_holder = result;
            finish(result);
            handle_result(result);
          }
        void finish(PhoneNumberDisambiguationCandidateJSON *result)
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
            if (fieldGeneratorPhoneNumbers.have_value)
              {
                result->initPhoneNumbers();
                size_t count = fieldGeneratorPhoneNumbers.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendPhoneNumbers(fieldGeneratorPhoneNumbers.value[num].referenced());
                  }
                fieldGeneratorPhoneNumbers.value.clear();
                fieldGeneratorPhoneNumbers.have_value = false;
              }
            else if (!(result->hasPhoneNumbers()))
              {
                error("When parsing the object for %what%, the \"PhoneNumbers\" field was missing.");
              }
          }
        virtual void handle_result(PhoneNumberDisambiguationCandidateJSON *new_result) = 0;
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
                case 'P':
                    if (strcmp(&(field_name[1]), "honeNumbers") == 0)
                        return &fieldGeneratorPhoneNumbers;
                    break;
                default:
                    break;
              }
            return NULL;
          }

      public:
        Generator(bool ignore_extras = false) : fieldGeneratorContactName("field \"ContactName\" of the PhoneNumberDisambiguationCandidate class"), fieldGeneratorContactID("field \"ContactID\" of the PhoneNumberDisambiguationCandidate class"), fieldGeneratorPhoneNumbers("field \"PhoneNumbers\" of the PhoneNumberDisambiguationCandidate class", ignore_extras)
          {
            set_what("the PhoneNumberDisambiguationCandidate class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorContactName.reset();
            fieldGeneratorContactID.reset();
            fieldGeneratorPhoneNumbers.reset();
            JSONObjectGenerator::reset();
          }
      };
  };

#endif /* PHONENUMBERDISAMBIGUATIONCANDIDATEJSON_H */
