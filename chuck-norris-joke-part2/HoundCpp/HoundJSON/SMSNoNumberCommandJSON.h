/* file "SMSNoNumberCommandJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef SMSNONUMBERCOMMANDJSON_H
#define SMSNONUMBERCOMMANDJSON_H

#pragma interface

#include "SMSCommandJSON.h"
#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONStringGenerator.h"
#include <string>
#include "PersonGroupJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class SMSNoNumberCommandJSON : public SMSCommandJSON
  {
  private:
    bool flagHasNoNumberPersonGroup;
    PersonGroupJSON * storeNoNumberPersonGroup;
    bool flagHasPreviousMessage;
    std::string storePreviousMessage;
    bool flagHasSpokenBody;
    std::string storeSpokenBody;
    bool flagHasWrittenBody;
    std::string storeWrittenBody;
    bool flagHasErrorMessage;
    std::string storeErrorMessage;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    SMSNoNumberCommandJSON(const SMSNoNumberCommandJSON &);
    SMSNoNumberCommandJSON & operator=(const SMSNoNumberCommandJSON &other);

    JSONValue * extraNoNumberPersonGroupToJSON(void) const;
    JSONValue * extraPreviousMessageToJSON(void) const;
    JSONValue * extraSpokenBodyToJSON(void) const;
    JSONValue * extraWrittenBodyToJSON(void) const;
    JSONValue * extraErrorMessageToJSON(void) const;

    void  fromJSONNoNumberPersonGroup(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONPreviousMessage(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONSpokenBody(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONWrittenBody(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONErrorMessage(JSONValue *json_value, bool ignore_extras = false);


  public:
    SMSNoNumberCommandJSON(void);
    virtual ~SMSNoNumberCommandJSON(void);
    const char * getSMSCommandKind(void) const;
    bool  hasNoNumberPersonGroup(void) const;
    PersonGroupJSON *  getNoNumberPersonGroup(void);
    const PersonGroupJSON *  getNoNumberPersonGroup(void) const;
    bool  hasPreviousMessage(void) const;
    std::string  getPreviousMessage(void);
    const std::string  getPreviousMessage(void) const;
    bool  hasSpokenBody(void) const;
    std::string  getSpokenBody(void);
    const std::string  getSpokenBody(void) const;
    bool  hasWrittenBody(void) const;
    std::string  getWrittenBody(void);
    const std::string  getWrittenBody(void) const;
    bool  hasErrorMessage(void) const;
    std::string  getErrorMessage(void);
    const std::string  getErrorMessage(void) const;

    virtual size_t extraSMSNoNumberCommandComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraSMSNoNumberCommandComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraSMSNoNumberCommandComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraSMSNoNumberCommandComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraSMSNoNumberCommandLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraSMSNoNumberCommandLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    size_t extraSMSCommandComponentCount(void) const
      {
        size_t result = 0;
        if (flagHasNoNumberPersonGroup)
            ++result;
        if (flagHasPreviousMessage)
            ++result;
        if (flagHasSpokenBody)
            ++result;
        if (flagHasWrittenBody)
            ++result;
        if (flagHasErrorMessage)
            ++result;
        result += extraSMSNoNumberCommandComponentCount();
        return result;
      }
    const char *extraSMSCommandComponentKey(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasNoNumberPersonGroup)
          {
            if (remainder == 0)
                return "NoNumberPersonGroup";
            --remainder;
          }
        if (flagHasPreviousMessage)
          {
            if (remainder == 0)
                return "PreviousMessage";
            --remainder;
          }
        if (flagHasSpokenBody)
          {
            if (remainder == 0)
                return "SpokenBody";
            --remainder;
          }
        if (flagHasWrittenBody)
          {
            if (remainder == 0)
                return "WrittenBody";
            --remainder;
          }
        if (flagHasErrorMessage)
          {
            if (remainder == 0)
                return "ErrorMessage";
            --remainder;
          }
        return extraSMSNoNumberCommandComponentKey(remainder);
      }
    JSONValue *extraSMSCommandComponentValue(size_t component_num)
      {
        size_t remainder = component_num;
        if (flagHasNoNumberPersonGroup)
          {
            if (remainder == 0)
                return extraNoNumberPersonGroupToJSON();
            --remainder;
          }
        if (flagHasPreviousMessage)
          {
            if (remainder == 0)
                return extraPreviousMessageToJSON();
            --remainder;
          }
        if (flagHasSpokenBody)
          {
            if (remainder == 0)
                return extraSpokenBodyToJSON();
            --remainder;
          }
        if (flagHasWrittenBody)
          {
            if (remainder == 0)
                return extraWrittenBodyToJSON();
            --remainder;
          }
        if (flagHasErrorMessage)
          {
            if (remainder == 0)
                return extraErrorMessageToJSON();
            --remainder;
          }
        return extraSMSNoNumberCommandComponentValue(remainder);
      }
    const JSONValue *extraSMSCommandComponentValue(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasNoNumberPersonGroup)
          {
            if (remainder == 0)
                return extraNoNumberPersonGroupToJSON();
            --remainder;
          }
        if (flagHasPreviousMessage)
          {
            if (remainder == 0)
                return extraPreviousMessageToJSON();
            --remainder;
          }
        if (flagHasSpokenBody)
          {
            if (remainder == 0)
                return extraSpokenBodyToJSON();
            --remainder;
          }
        if (flagHasWrittenBody)
          {
            if (remainder == 0)
                return extraWrittenBodyToJSON();
            --remainder;
          }
        if (flagHasErrorMessage)
          {
            if (remainder == 0)
                return extraErrorMessageToJSON();
            --remainder;
          }
        return extraSMSNoNumberCommandComponentValue(remainder);
      }
    JSONValue *extraSMSCommandLookup(const char *field_name)
      {
        switch ((unsigned char)(field_name[0]))
          {
            case 'E':
                if (strcmp(&(field_name[1]), "rrorMessage") == 0)
                    return (flagHasErrorMessage ? extraErrorMessageToJSON() : NULL);
                break;
            case 'N':
                if (strcmp(&(field_name[1]), "oNumberPersonGroup") == 0)
                    return (flagHasNoNumberPersonGroup ? extraNoNumberPersonGroupToJSON() : NULL);
                break;
            case 'P':
                if (strcmp(&(field_name[1]), "reviousMessage") == 0)
                    return (flagHasPreviousMessage ? extraPreviousMessageToJSON() : NULL);
                break;
            case 'S':
                if (strcmp(&(field_name[1]), "pokenBody") == 0)
                    return (flagHasSpokenBody ? extraSpokenBodyToJSON() : NULL);
                break;
            case 'W':
                if (strcmp(&(field_name[1]), "rittenBody") == 0)
                    return (flagHasWrittenBody ? extraWrittenBodyToJSON() : NULL);
                break;
            default:
                break;
          }
        return extraSMSNoNumberCommandLookup(field_name);
      }
    const JSONValue *extraSMSCommandLookup(const char *field_name) const
      {
        switch ((unsigned char)(field_name[0]))
          {
            case 'E':
                if (strcmp(&(field_name[1]), "rrorMessage") == 0)
                    return (flagHasErrorMessage ? extraErrorMessageToJSON() : NULL);
                break;
            case 'N':
                if (strcmp(&(field_name[1]), "oNumberPersonGroup") == 0)
                    return (flagHasNoNumberPersonGroup ? extraNoNumberPersonGroupToJSON() : NULL);
                break;
            case 'P':
                if (strcmp(&(field_name[1]), "reviousMessage") == 0)
                    return (flagHasPreviousMessage ? extraPreviousMessageToJSON() : NULL);
                break;
            case 'S':
                if (strcmp(&(field_name[1]), "pokenBody") == 0)
                    return (flagHasSpokenBody ? extraSpokenBodyToJSON() : NULL);
                break;
            case 'W':
                if (strcmp(&(field_name[1]), "rittenBody") == 0)
                    return (flagHasWrittenBody ? extraWrittenBodyToJSON() : NULL);
                break;
            default:
                break;
          }
        return extraSMSNoNumberCommandLookup(field_name);
      }

    void setNoNumberPersonGroup(PersonGroupJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasNoNumberPersonGroup)
          {
            storeNoNumberPersonGroup->remove_reference();
          }
        flagHasNoNumberPersonGroup = true;
        storeNoNumberPersonGroup = new_value;
      }
    void unsetNoNumberPersonGroup(void)
      {
        if (flagHasNoNumberPersonGroup)
          {
            storeNoNumberPersonGroup->remove_reference();
          }
        flagHasNoNumberPersonGroup = false;
      }
    void setPreviousMessage(std::string new_value)
      {
        flagHasPreviousMessage = true;
        storePreviousMessage = new_value;
      }
    void unsetPreviousMessage(void)
      {
        flagHasPreviousMessage = false;
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
    void setWrittenBody(std::string new_value)
      {
        flagHasWrittenBody = true;
        storeWrittenBody = new_value;
      }
    void unsetWrittenBody(void)
      {
        flagHasWrittenBody = false;
      }
    void setErrorMessage(std::string new_value)
      {
        flagHasErrorMessage = true;
        storeErrorMessage = new_value;
      }
    void unsetErrorMessage(void)
      {
        flagHasErrorMessage = false;
      }

    virtual void extraSMSNoNumberCommandAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraSMSNoNumberCommandSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraSMSNoNumberCommandLookup(key);
        if (old_field == NULL)
          {
            extraSMSNoNumberCommandAppendPair(key, new_component);
          }
        else
          {
            size_t count = extraKeys.size();
            assert(count == extraValues.size());
            for (size_t num = 0; num < count; ++num)
              {
                if (strcmp(extraKeys[num].c_str(),  key) == 0)
                  {
                    extraValues[num] = new_component;
                    break;
                  }
              }
            enter_into_string_index(extraIndex, key, new_component);
            new_component->add_reference();
            old_field->remove_reference();
            old_field->remove_reference();
          }
      }
    void extraSMSCommandAppendPair(const char *key, JSONValue *new_component)
      {
        switch ((unsigned char)(key[0]))
          {
            case 'E':
                if (strcmp(&(key[1]), "rrorMessage") == 0)
                    {
                    fromJSONErrorMessage(new_component, false);
                    return;
                    }
                break;
            case 'N':
                if (strcmp(&(key[1]), "oNumberPersonGroup") == 0)
                    {
                    fromJSONNoNumberPersonGroup(new_component, false);
                    return;
                    }
                break;
            case 'P':
                if (strcmp(&(key[1]), "reviousMessage") == 0)
                    {
                    fromJSONPreviousMessage(new_component, false);
                    return;
                    }
                break;
            case 'S':
                if (strcmp(&(key[1]), "pokenBody") == 0)
                    {
                    fromJSONSpokenBody(new_component, false);
                    return;
                    }
                break;
            case 'W':
                if (strcmp(&(key[1]), "rittenBody") == 0)
                    {
                    fromJSONWrittenBody(new_component, false);
                    return;
                    }
                break;
            default:
                break;
          }
        extraSMSNoNumberCommandAppendPair(key, new_component);
      }
    void extraSMSCommandSetField(const char *key, JSONValue *new_component)
      {
        switch ((unsigned char)(key[0]))
          {
            case 'E':
                if (strcmp(&(key[1]), "rrorMessage") == 0)
                    {
                    fromJSONErrorMessage(new_component, false);
                    return;
                    }
                break;
            case 'N':
                if (strcmp(&(key[1]), "oNumberPersonGroup") == 0)
                    {
                    fromJSONNoNumberPersonGroup(new_component, false);
                    return;
                    }
                break;
            case 'P':
                if (strcmp(&(key[1]), "reviousMessage") == 0)
                    {
                    fromJSONPreviousMessage(new_component, false);
                    return;
                    }
                break;
            case 'S':
                if (strcmp(&(key[1]), "pokenBody") == 0)
                    {
                    fromJSONSpokenBody(new_component, false);
                    return;
                    }
                break;
            case 'W':
                if (strcmp(&(key[1]), "rittenBody") == 0)
                    {
                    fromJSONWrittenBody(new_component, false);
                    return;
                    }
                break;
            default:
                break;
          }
        extraSMSNoNumberCommandSetField(key, new_component);
      }

    virtual void write_as_json(JSONHandler *handler) const
      {
        handler->start_object();
        write_fields_as_json(handler);
        size_t extra_count = extraKeys.size();
        assert(extra_count == extraValues.size());
        for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
          {
            handler->start_pair(extraKeys[extra_num].c_str());
            extraValues[extra_num]->write(handler);
          }
        handler->finish_object();
      }

    virtual void write_fields_as_json(JSONHandler *handler) const
      {
        SMSCommandJSON::write_fields_as_json(handler);
        assert(flagHasNoNumberPersonGroup);
        handler->start_pair("NoNumberPersonGroup");
        storeNoNumberPersonGroup->write_as_json(handler);
        if (flagHasPreviousMessage)
          {
            handler->start_pair("PreviousMessage");
            handler->string_value(storePreviousMessage);
          }
        if (flagHasSpokenBody)
          {
            handler->start_pair("SpokenBody");
            handler->string_value(storeSpokenBody);
          }
        if (flagHasWrittenBody)
          {
            handler->start_pair("WrittenBody");
            handler->string_value(storeWrittenBody);
          }
        if (flagHasErrorMessage)
          {
            handler->start_pair("ErrorMessage");
            handler->string_value(storeErrorMessage);
          }
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasNoNumberPersonGroup()))
          {
            return "When parsing the object for %what%, the \"NoNumberPersonGroup\" field was missing.";
          }
        return NULL;
      }

    static SMSNoNumberCommandJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static SMSNoNumberCommandJSON *from_text(const char *text, bool ignore_extras = false)
      {
        SMSNoNumberCommandJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<SMSNoNumberCommandJSON>, SMSNoNumberCommandJSON *, bool> generator("Type SMSNoNumberCommand", ignore_extras);
            parse_json_value(text, "Text for SMSNoNumberCommandJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static SMSNoNumberCommandJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        SMSNoNumberCommandJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<SMSNoNumberCommandJSON>, SMSNoNumberCommandJSON *, bool> generator("Type SMSNoNumberCommand", ignore_extras);
            parse_json_value(fp, file_name, &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    class Generator : public SMSCommandJSON::Generator
      {
      private:
        JSONHoldingGenerator<PersonGroupJSON::Generator, RCHandle<PersonGroupJSON>, PersonGroupJSON *, bool > fieldGeneratorNoNumberPersonGroup;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorPreviousMessage;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorSpokenBody;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorWrittenBody;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorErrorMessage;
        class UnknownFieldGenerator : public JSONValueHandler
          {
          public:
            bool ignore;
            std::vector<std::string> field_names;
            std::vector<RCHandle<JSONValue> > field_values;
            string_index *index;
            UnknownFieldGenerator(bool init_ignore) : ignore(init_ignore)
              {
            index = create_string_index();
              }
            ~UnknownFieldGenerator(void)
              {
                destroy_string_index(index);
              }


          protected:
            void new_value(JSONValue *item)
              {
                if (ignore)
                    return;
                assert(field_names.size() == (field_values.size() + 1));
                enter_into_string_index(index, field_names[field_values.size()].c_str(), item);
                field_values.push_back(item);
              }

          public:
            void reset()
              {
                field_names.clear();
                field_values.clear();
                destroy_string_index(index);
            index = create_string_index();
              }
          };
        UnknownFieldGenerator unknownFieldGenerator;


      protected:
        void start(void)
          {
          }
        JSONHandler *start_field(const char *field_name)
          {
            JSONHandler *result = start_known_field(field_name);
            if (result != NULL)
                return result;
            assert(unknownFieldGenerator.field_names.size() ==
                   unknownFieldGenerator.field_values.size());
            if (unknownFieldGenerator.ignore)
              {
                assert(unknownFieldGenerator.field_names.size() == 0);
              }
            else
              {
                unknownFieldGenerator.field_names.push_back(field_name);
              }
            return &unknownFieldGenerator;
          }
        void finish_field(const char *field_name, JSONHandler *field_handler)
          {
          }
        void finish(void)
          {
            if (!(strcmp(getSMSCommandJSONKey().c_str(), "SMSNoNumberCommand") == 0))
                throw("The key field has a value other than `SMSNoNumberCommand'.");
            SMSNoNumberCommandJSON *result = new SMSNoNumberCommandJSON();
            assert(result != NULL);
            RCHandle<SMSNoNumberCommandJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraSMSNoNumberCommandAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void handle_result(SMSCommandJSON *new_result)
          {
            handle_result((SMSNoNumberCommandJSON *)new_result);
          }
        void finish(SMSNoNumberCommandJSON *result)
          {
            if (fieldGeneratorNoNumberPersonGroup.have_value)
              {
                result->setNoNumberPersonGroup(fieldGeneratorNoNumberPersonGroup.value.referenced());
                fieldGeneratorNoNumberPersonGroup.have_value = false;
              }
            else if (!(result->hasNoNumberPersonGroup()))
              {
                error("When parsing the object for %what%, the \"NoNumberPersonGroup\" field was missing.");
              }
            if (fieldGeneratorPreviousMessage.have_value)
              {
                result->setPreviousMessage(fieldGeneratorPreviousMessage.value);
                fieldGeneratorPreviousMessage.have_value = false;
              }
            if (fieldGeneratorSpokenBody.have_value)
              {
                result->setSpokenBody(fieldGeneratorSpokenBody.value);
                fieldGeneratorSpokenBody.have_value = false;
              }
            if (fieldGeneratorWrittenBody.have_value)
              {
                result->setWrittenBody(fieldGeneratorWrittenBody.value);
                fieldGeneratorWrittenBody.have_value = false;
              }
            if (fieldGeneratorErrorMessage.have_value)
              {
                result->setErrorMessage(fieldGeneratorErrorMessage.value);
                fieldGeneratorErrorMessage.have_value = false;
              }
            SMSCommandJSON::Generator::finish(result);
          }
        virtual void handle_result(SMSNoNumberCommandJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'E':
                    if (strcmp(&(field_name[1]), "rrorMessage") == 0)
                        return &fieldGeneratorErrorMessage;
                    break;
                case 'N':
                    if (strcmp(&(field_name[1]), "oNumberPersonGroup") == 0)
                        return &fieldGeneratorNoNumberPersonGroup;
                    break;
                case 'P':
                    if (strcmp(&(field_name[1]), "reviousMessage") == 0)
                        return &fieldGeneratorPreviousMessage;
                    break;
                case 'S':
                    if (strcmp(&(field_name[1]), "pokenBody") == 0)
                        return &fieldGeneratorSpokenBody;
                    break;
                case 'W':
                    if (strcmp(&(field_name[1]), "rittenBody") == 0)
                        return &fieldGeneratorWrittenBody;
                    break;
                default:
                    break;
              }
            return SMSCommandJSON::Generator::start_known_field(field_name);
          }

      public:
        Generator(bool ignore_extras = false) : SMSCommandJSON::Generator(ignore_extras), fieldGeneratorNoNumberPersonGroup("field \"NoNumberPersonGroup\" of the SMSNoNumberCommand class", ignore_extras), fieldGeneratorPreviousMessage("field \"PreviousMessage\" of the SMSNoNumberCommand class"), fieldGeneratorSpokenBody("field \"SpokenBody\" of the SMSNoNumberCommand class"), fieldGeneratorWrittenBody("field \"WrittenBody\" of the SMSNoNumberCommand class"), fieldGeneratorErrorMessage("field \"ErrorMessage\" of the SMSNoNumberCommand class"), unknownFieldGenerator(ignore_extras)
          {
            set_what("the SMSNoNumberCommand class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorNoNumberPersonGroup.reset();
            fieldGeneratorPreviousMessage.reset();
            fieldGeneratorSpokenBody.reset();
            fieldGeneratorWrittenBody.reset();
            fieldGeneratorErrorMessage.reset();
            SMSCommandJSON::Generator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* SMSNONUMBERCOMMANDJSON_H */
