/* file "EmailClientStateJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef EMAILCLIENTSTATEJSON_H
#define EMAILCLIENTSTATEJSON_H

#pragma interface

#include "ClientVerticalStateJSON.h"
#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONHoldingArrayGenerator.h"
#include "JSONStringGenerator.h"
#include <vector>
#include <string>
#include "EmailJSON.h"
#include "EmailFieldTypeJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class EmailClientStateJSON : public ClientVerticalStateJSON
  {
  public:
    enum TypeCompositionStep
      {
        CompositionStep_Disambiguating,
        CompositionStep_Composing
      };

    static TypeCompositionStep  stringToCompositionStep(const char *chars);
    static const char * stringFromCompositionStep(TypeCompositionStep the_enum);

  private:
    bool flagHasCompositionStep;
    TypeCompositionStep storeCompositionStep;
    bool flagHasDisambiguationOrderedList;
    std::vector< std::string > storeDisambiguationOrderedList;
    bool flagHasDisambiguateChoiceIds;
    std::vector< std::string > storeDisambiguateChoiceIds;
    bool flagHasEmail;
    EmailJSON * storeEmail;
    bool flagHasLastEditedTextFieldType;
    EmailFieldTypeJSON * storeLastEditedTextFieldType;

    EmailClientStateJSON(const EmailClientStateJSON &);
    EmailClientStateJSON & operator=(const EmailClientStateJSON &other);

    JSONValue * extraCompositionStepToJSON(void) const;
    JSONValue * extraDisambiguationOrderedListToJSON(void) const;
    JSONValue * extraDisambiguateChoiceIdsToJSON(void) const;
    JSONValue * extraEmailToJSON(void) const;
    JSONValue * extraLastEditedTextFieldTypeToJSON(void) const;

    void  fromJSONCompositionStep(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONDisambiguationOrderedList(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONDisambiguateChoiceIds(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONEmail(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONLastEditedTextFieldType(JSONValue *json_value, bool ignore_extras = false);


  public:
    EmailClientStateJSON(void);
    virtual ~EmailClientStateJSON(void);
    const char * getClientVerticalStateKind(void) const;
    bool  hasCompositionStep(void) const;
    TypeCompositionStep  getCompositionStep(void);
    const TypeCompositionStep  getCompositionStep(void) const;
    const char * getCompositionStepAsChars(void) const;
    std::string  getCompositionStepAsString(void) const;
    bool  hasDisambiguationOrderedList(void) const;
    size_t  countOfDisambiguationOrderedList(void) const;
    std::string  elementOfDisambiguationOrderedList(size_t element_num);
    const std::string  elementOfDisambiguationOrderedList(size_t element_num) const;
    std::vector< std::string >  getDisambiguationOrderedList(void);
    const std::vector< std::string >  getDisambiguationOrderedList(void) const;
    bool  hasDisambiguateChoiceIds(void) const;
    size_t  countOfDisambiguateChoiceIds(void) const;
    std::string  elementOfDisambiguateChoiceIds(size_t element_num);
    const std::string  elementOfDisambiguateChoiceIds(size_t element_num) const;
    std::vector< std::string >  getDisambiguateChoiceIds(void);
    const std::vector< std::string >  getDisambiguateChoiceIds(void) const;
    bool  hasEmail(void) const;
    EmailJSON *  getEmail(void);
    const EmailJSON *  getEmail(void) const;
    bool  hasLastEditedTextFieldType(void) const;
    EmailFieldTypeJSON *  getLastEditedTextFieldType(void);
    const EmailFieldTypeJSON *  getLastEditedTextFieldType(void) const;
    EmailFieldTypeJSON::TypeValue  getLastEditedTextFieldTypeValue(void);
    const EmailFieldTypeJSON::TypeValue  getLastEditedTextFieldTypeValue(void) const;
    const char * getLastEditedTextFieldTypeAsChars(void) const;
    std::string  getLastEditedTextFieldTypeAsString(void) const;

    size_t extraClientVerticalStateComponentCount(void) const
      {
        size_t result = 0;
        if (flagHasCompositionStep)
            ++result;
        if (flagHasDisambiguationOrderedList)
            ++result;
        if (flagHasDisambiguateChoiceIds)
            ++result;
        if (flagHasEmail)
            ++result;
        if (flagHasLastEditedTextFieldType)
            ++result;
        return result;
      }
    const char *extraClientVerticalStateComponentKey(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasCompositionStep)
          {
            if (remainder == 0)
                return "CompositionStep";
            --remainder;
          }
        if (flagHasDisambiguationOrderedList)
          {
            if (remainder == 0)
                return "DisambiguationOrderedList";
            --remainder;
          }
        if (flagHasDisambiguateChoiceIds)
          {
            if (remainder == 0)
                return "DisambiguateChoiceIds";
            --remainder;
          }
        if (flagHasEmail)
          {
            if (remainder == 0)
                return "Email";
            --remainder;
          }
        if (flagHasLastEditedTextFieldType)
          {
            if (remainder == 0)
                return "LastEditedTextFieldType";
            --remainder;
          }
        assert(false);
        return NULL;
      }
    JSONValue *extraClientVerticalStateComponentValue(size_t component_num)
      {
        size_t remainder = component_num;
        if (flagHasCompositionStep)
          {
            if (remainder == 0)
                return extraCompositionStepToJSON();
            --remainder;
          }
        if (flagHasDisambiguationOrderedList)
          {
            if (remainder == 0)
                return extraDisambiguationOrderedListToJSON();
            --remainder;
          }
        if (flagHasDisambiguateChoiceIds)
          {
            if (remainder == 0)
                return extraDisambiguateChoiceIdsToJSON();
            --remainder;
          }
        if (flagHasEmail)
          {
            if (remainder == 0)
                return extraEmailToJSON();
            --remainder;
          }
        if (flagHasLastEditedTextFieldType)
          {
            if (remainder == 0)
                return extraLastEditedTextFieldTypeToJSON();
            --remainder;
          }
        assert(false);
        return NULL;
      }
    const JSONValue *extraClientVerticalStateComponentValue(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasCompositionStep)
          {
            if (remainder == 0)
                return extraCompositionStepToJSON();
            --remainder;
          }
        if (flagHasDisambiguationOrderedList)
          {
            if (remainder == 0)
                return extraDisambiguationOrderedListToJSON();
            --remainder;
          }
        if (flagHasDisambiguateChoiceIds)
          {
            if (remainder == 0)
                return extraDisambiguateChoiceIdsToJSON();
            --remainder;
          }
        if (flagHasEmail)
          {
            if (remainder == 0)
                return extraEmailToJSON();
            --remainder;
          }
        if (flagHasLastEditedTextFieldType)
          {
            if (remainder == 0)
                return extraLastEditedTextFieldTypeToJSON();
            --remainder;
          }
        assert(false);
        return NULL;
      }
    JSONValue *extraClientVerticalStateLookup(const char *field_name)
      {
        switch ((unsigned char)(field_name[0]))
          {
            case 'C':
                if (strcmp(&(field_name[1]), "ompositionStep") == 0)
                    return (flagHasCompositionStep ? extraCompositionStepToJSON() : NULL);
                break;
            case 'D':
                if (strncmp(&(field_name[1]), "isambiguat", 10) == 0)
                  {
                    switch ((unsigned char)(field_name[11]))
                      {
                        case 'e':
                            if (strcmp(&(field_name[12]), "ChoiceIds") == 0)
                                return (flagHasDisambiguateChoiceIds ? extraDisambiguateChoiceIdsToJSON() : NULL);
                            break;
                        case 'i':
                            if (strcmp(&(field_name[12]), "onOrderedList") == 0)
                                return (flagHasDisambiguationOrderedList ? extraDisambiguationOrderedListToJSON() : NULL);
                            break;
                        default:
                            break;
                      }
                  }
                break;
            case 'E':
                if (strcmp(&(field_name[1]), "mail") == 0)
                    return (flagHasEmail ? extraEmailToJSON() : NULL);
                break;
            case 'L':
                if (strcmp(&(field_name[1]), "astEditedTextFieldType") == 0)
                    return (flagHasLastEditedTextFieldType ? extraLastEditedTextFieldTypeToJSON() : NULL);
                break;
            default:
                break;
          }
        return NULL;
      }
    const JSONValue *extraClientVerticalStateLookup(const char *field_name) const
      {
        switch ((unsigned char)(field_name[0]))
          {
            case 'C':
                if (strcmp(&(field_name[1]), "ompositionStep") == 0)
                    return (flagHasCompositionStep ? extraCompositionStepToJSON() : NULL);
                break;
            case 'D':
                if (strncmp(&(field_name[1]), "isambiguat", 10) == 0)
                  {
                    switch ((unsigned char)(field_name[11]))
                      {
                        case 'e':
                            if (strcmp(&(field_name[12]), "ChoiceIds") == 0)
                                return (flagHasDisambiguateChoiceIds ? extraDisambiguateChoiceIdsToJSON() : NULL);
                            break;
                        case 'i':
                            if (strcmp(&(field_name[12]), "onOrderedList") == 0)
                                return (flagHasDisambiguationOrderedList ? extraDisambiguationOrderedListToJSON() : NULL);
                            break;
                        default:
                            break;
                      }
                  }
                break;
            case 'E':
                if (strcmp(&(field_name[1]), "mail") == 0)
                    return (flagHasEmail ? extraEmailToJSON() : NULL);
                break;
            case 'L':
                if (strcmp(&(field_name[1]), "astEditedTextFieldType") == 0)
                    return (flagHasLastEditedTextFieldType ? extraLastEditedTextFieldTypeToJSON() : NULL);
                break;
            default:
                break;
          }
        return NULL;
      }

    void setCompositionStep(TypeCompositionStep new_value)
      {
        flagHasCompositionStep = true;
        storeCompositionStep = new_value;
      }
    void setCompositionStep(const char *chars)
      {
        setCompositionStep(stringToCompositionStep(chars));
      }
    void setCompositionStep(std::string the_string)
      {
        setCompositionStep(stringToCompositionStep(the_string.c_str()));
      }
    void unsetCompositionStep(void)
      {
        flagHasCompositionStep = false;
      }
    void initDisambiguationOrderedList(void)
      {
        flagHasDisambiguationOrderedList = true;
        storeDisambiguationOrderedList.clear();
      }
    void appendDisambiguationOrderedList(std::string to_append)
      {
        if (!flagHasDisambiguationOrderedList)
          {
            flagHasDisambiguationOrderedList = true;
            storeDisambiguationOrderedList.clear();
          }
        assert(flagHasDisambiguationOrderedList);
        storeDisambiguationOrderedList.push_back(to_append);
      }
    void unsetDisambiguationOrderedList(void)
      {
        flagHasDisambiguationOrderedList = false;
        storeDisambiguationOrderedList.clear();
      }
    void initDisambiguateChoiceIds(void)
      {
        flagHasDisambiguateChoiceIds = true;
        storeDisambiguateChoiceIds.clear();
      }
    void appendDisambiguateChoiceIds(std::string to_append)
      {
        if (!flagHasDisambiguateChoiceIds)
          {
            flagHasDisambiguateChoiceIds = true;
            storeDisambiguateChoiceIds.clear();
          }
        assert(flagHasDisambiguateChoiceIds);
        storeDisambiguateChoiceIds.push_back(to_append);
      }
    void unsetDisambiguateChoiceIds(void)
      {
        flagHasDisambiguateChoiceIds = false;
        storeDisambiguateChoiceIds.clear();
      }
    void setEmail(EmailJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasEmail)
          {
            storeEmail->remove_reference();
          }
        flagHasEmail = true;
        storeEmail = new_value;
      }
    void unsetEmail(void)
      {
        if (flagHasEmail)
          {
            storeEmail->remove_reference();
          }
        flagHasEmail = false;
      }
    void setLastEditedTextFieldType(EmailFieldTypeJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasLastEditedTextFieldType)
          {
            storeLastEditedTextFieldType->remove_reference();
          }
        flagHasLastEditedTextFieldType = true;
        storeLastEditedTextFieldType = new_value;
      }
    void setLastEditedTextFieldType(EmailFieldTypeJSON::TypeValue new_value)
      {
        setLastEditedTextFieldType(new EmailFieldTypeJSON(new_value));
      }
    void setLastEditedTextFieldType(const char *chars)
      {
        setLastEditedTextFieldType(new EmailFieldTypeJSON(chars));
      }
    void setLastEditedTextFieldType(std::string the_string)
      {
        setLastEditedTextFieldType(new EmailFieldTypeJSON(the_string));
      }
    void unsetLastEditedTextFieldType(void)
      {
        if (flagHasLastEditedTextFieldType)
          {
            storeLastEditedTextFieldType->remove_reference();
          }
        flagHasLastEditedTextFieldType = false;
      }

    void extraClientVerticalStateAppendPair(const char *key, JSONValue *new_component)
      {
        switch ((unsigned char)(key[0]))
          {
            case 'C':
                if (strcmp(&(key[1]), "ompositionStep") == 0)
                    {
                    fromJSONCompositionStep(new_component, false);
                    return;
                    }
                break;
            case 'D':
                if (strncmp(&(key[1]), "isambiguat", 10) == 0)
                  {
                    switch ((unsigned char)(key[11]))
                      {
                        case 'e':
                            if (strcmp(&(key[12]), "ChoiceIds") == 0)
                                {
                                fromJSONDisambiguateChoiceIds(new_component, false);
                                return;
                                }
                            break;
                        case 'i':
                            if (strcmp(&(key[12]), "onOrderedList") == 0)
                                {
                                fromJSONDisambiguationOrderedList(new_component, false);
                                return;
                                }
                            break;
                        default:
                            break;
                      }
                  }
                break;
            case 'E':
                if (strcmp(&(key[1]), "mail") == 0)
                    {
                    fromJSONEmail(new_component, false);
                    return;
                    }
                break;
            case 'L':
                if (strcmp(&(key[1]), "astEditedTextFieldType") == 0)
                    {
                    fromJSONLastEditedTextFieldType(new_component, false);
                    return;
                    }
                break;
            default:
                break;
          }
      }
    void extraClientVerticalStateSetField(const char *key, JSONValue *new_component)
      {
        switch ((unsigned char)(key[0]))
          {
            case 'C':
                if (strcmp(&(key[1]), "ompositionStep") == 0)
                    {
                    fromJSONCompositionStep(new_component, false);
                    return;
                    }
                break;
            case 'D':
                if (strncmp(&(key[1]), "isambiguat", 10) == 0)
                  {
                    switch ((unsigned char)(key[11]))
                      {
                        case 'e':
                            if (strcmp(&(key[12]), "ChoiceIds") == 0)
                                {
                                fromJSONDisambiguateChoiceIds(new_component, false);
                                return;
                                }
                            break;
                        case 'i':
                            if (strcmp(&(key[12]), "onOrderedList") == 0)
                                {
                                fromJSONDisambiguationOrderedList(new_component, false);
                                return;
                                }
                            break;
                        default:
                            break;
                      }
                  }
                break;
            case 'E':
                if (strcmp(&(key[1]), "mail") == 0)
                    {
                    fromJSONEmail(new_component, false);
                    return;
                    }
                break;
            case 'L':
                if (strcmp(&(key[1]), "astEditedTextFieldType") == 0)
                    {
                    fromJSONLastEditedTextFieldType(new_component, false);
                    return;
                    }
                break;
            default:
                break;
          }
      }

    virtual void write_as_json(JSONHandler *handler) const
      {
        handler->start_object();
        write_fields_as_json(handler);
        handler->finish_object();
      }

    virtual void write_fields_as_json(JSONHandler *handler) const
      {
        ClientVerticalStateJSON::write_fields_as_json(handler);
        assert(flagHasCompositionStep);
        handler->start_pair("CompositionStep");
        switch (storeCompositionStep)
          {
            case CompositionStep_Disambiguating:
                handler->string_value("Disambiguating");
                break;
            case CompositionStep_Composing:
                handler->string_value("Composing");
                break;
            default:
                assert(false);
          }
        if (flagHasDisambiguationOrderedList)
          {
            handler->start_pair("DisambiguationOrderedList");
            handler->start_array();
            for (size_t num1 = 0; num1 < storeDisambiguationOrderedList.size(); ++num1)
              {
                handler->string_value(storeDisambiguationOrderedList[num1]);
              }
            handler->finish_array();
          }
        if (flagHasDisambiguateChoiceIds)
          {
            handler->start_pair("DisambiguateChoiceIds");
            handler->start_array();
            for (size_t num2 = 0; num2 < storeDisambiguateChoiceIds.size(); ++num2)
              {
                handler->string_value(storeDisambiguateChoiceIds[num2]);
              }
            handler->finish_array();
          }
        assert(flagHasEmail);
        handler->start_pair("Email");
        storeEmail->write_as_json(handler);
        if (flagHasLastEditedTextFieldType)
          {
            handler->start_pair("LastEditedTextFieldType");
            storeLastEditedTextFieldType->write_as_json(handler);
          }
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasCompositionStep()))
          {
            return "When parsing the object for %what%, the \"CompositionStep\" field was missing.";
          }
        if (!(hasEmail()))
          {
            return "When parsing the object for %what%, the \"Email\" field was missing.";
          }
        return NULL;
      }

    static EmailClientStateJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static EmailClientStateJSON *from_text(const char *text, bool ignore_extras = false)
      {
        EmailClientStateJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<EmailClientStateJSON>, EmailClientStateJSON *, bool> generator("Type EmailClientState", ignore_extras);
            parse_json_value(text, "Text for EmailClientStateJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static EmailClientStateJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        EmailClientStateJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<EmailClientStateJSON>, EmailClientStateJSON *, bool> generator("Type EmailClientState", ignore_extras);
            parse_json_value(fp, file_name, &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    class Generator : public ClientVerticalStateJSON::Generator
      {
      private:
    class FieldGeneratorCompositionStep : public JSONStringGenerator
          {
          protected:
            FieldGeneratorCompositionStep(const char *what)
              {
                set_what(what);
              }
            FieldGeneratorCompositionStep(void)
              {
              }
            void handle_result(const char *result)
              {
                handle_result(stringToCompositionStep(result));
              }
            virtual void handle_result(TypeCompositionStep result) = 0;
          };
        JSONHoldingGenerator<FieldGeneratorCompositionStep, TypeCompositionStep, TypeCompositionStep > fieldGeneratorCompositionStep;
        JSONHoldingArrayGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorDisambiguationOrderedList;
        JSONHoldingArrayGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorDisambiguateChoiceIds;
        JSONHoldingGenerator<EmailJSON::Generator, RCHandle<EmailJSON>, EmailJSON *, bool > fieldGeneratorEmail;
        JSONHoldingGenerator<EmailFieldTypeJSON::Generator, RCHandle<EmailFieldTypeJSON>, EmailFieldTypeJSON *, bool > fieldGeneratorLastEditedTextFieldType;


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
            if (!(strcmp(getClientVerticalStateJSONKey().c_str(), "EmailClientState") == 0))
                throw("The key field has a value other than `EmailClientState'.");
            EmailClientStateJSON *result = new EmailClientStateJSON();
            assert(result != NULL);
            RCHandle<EmailClientStateJSON> result_holder = result;
            finish(result);
            handle_result(result);
          }
        void handle_result(ClientVerticalStateJSON *new_result)
          {
            handle_result((EmailClientStateJSON *)new_result);
          }
        void finish(EmailClientStateJSON *result)
          {
            if (fieldGeneratorCompositionStep.have_value)
              {
                result->setCompositionStep(fieldGeneratorCompositionStep.value);
                fieldGeneratorCompositionStep.have_value = false;
              }
            else if (!(result->hasCompositionStep()))
              {
                error("When parsing the object for %what%, the \"CompositionStep\" field was missing.");
              }
            if (fieldGeneratorDisambiguationOrderedList.have_value)
              {
                result->initDisambiguationOrderedList();
                size_t count = fieldGeneratorDisambiguationOrderedList.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendDisambiguationOrderedList(fieldGeneratorDisambiguationOrderedList.value[num]);
                  }
                fieldGeneratorDisambiguationOrderedList.value.clear();
                fieldGeneratorDisambiguationOrderedList.have_value = false;
              }
            if (fieldGeneratorDisambiguateChoiceIds.have_value)
              {
                result->initDisambiguateChoiceIds();
                size_t count = fieldGeneratorDisambiguateChoiceIds.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendDisambiguateChoiceIds(fieldGeneratorDisambiguateChoiceIds.value[num]);
                  }
                fieldGeneratorDisambiguateChoiceIds.value.clear();
                fieldGeneratorDisambiguateChoiceIds.have_value = false;
              }
            if (fieldGeneratorEmail.have_value)
              {
                result->setEmail(fieldGeneratorEmail.value.referenced());
                fieldGeneratorEmail.have_value = false;
              }
            else if (!(result->hasEmail()))
              {
                error("When parsing the object for %what%, the \"Email\" field was missing.");
              }
            if (fieldGeneratorLastEditedTextFieldType.have_value)
              {
                result->setLastEditedTextFieldType(fieldGeneratorLastEditedTextFieldType.value.referenced());
                fieldGeneratorLastEditedTextFieldType.have_value = false;
              }
            ClientVerticalStateJSON::Generator::finish(result);
          }
        virtual void handle_result(EmailClientStateJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'C':
                    if (strcmp(&(field_name[1]), "ompositionStep") == 0)
                        return &fieldGeneratorCompositionStep;
                    break;
                case 'D':
                    if (strncmp(&(field_name[1]), "isambiguat", 10) == 0)
                      {
                        switch ((unsigned char)(field_name[11]))
                          {
                            case 'e':
                                if (strcmp(&(field_name[12]), "ChoiceIds") == 0)
                                    return &fieldGeneratorDisambiguateChoiceIds;
                                break;
                            case 'i':
                                if (strcmp(&(field_name[12]), "onOrderedList") == 0)
                                    return &fieldGeneratorDisambiguationOrderedList;
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 'E':
                    if (strcmp(&(field_name[1]), "mail") == 0)
                        return &fieldGeneratorEmail;
                    break;
                case 'L':
                    if (strcmp(&(field_name[1]), "astEditedTextFieldType") == 0)
                        return &fieldGeneratorLastEditedTextFieldType;
                    break;
                default:
                    break;
              }
            return ClientVerticalStateJSON::Generator::start_known_field(field_name);
          }

      public:
        Generator(bool ignore_extras = false) : ClientVerticalStateJSON::Generator(ignore_extras), fieldGeneratorCompositionStep("field \"CompositionStep\" of the EmailClientState class"), fieldGeneratorDisambiguationOrderedList("field \"DisambiguationOrderedList\" of the EmailClientState class"), fieldGeneratorDisambiguateChoiceIds("field \"DisambiguateChoiceIds\" of the EmailClientState class"), fieldGeneratorEmail("field \"Email\" of the EmailClientState class", ignore_extras), fieldGeneratorLastEditedTextFieldType("field \"LastEditedTextFieldType\" of the EmailClientState class", ignore_extras)
          {
            set_what("the EmailClientState class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorCompositionStep.reset();
            fieldGeneratorDisambiguationOrderedList.reset();
            fieldGeneratorDisambiguateChoiceIds.reset();
            fieldGeneratorEmail.reset();
            fieldGeneratorLastEditedTextFieldType.reset();
            ClientVerticalStateJSON::Generator::reset();
          }
      };
  };

#endif /* EMAILCLIENTSTATEJSON_H */
