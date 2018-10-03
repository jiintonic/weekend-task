/* file "SMSJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef SMSJSON_H
#define SMSJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONHoldingArrayGenerator.h"
#include "JSONStringGenerator.h"
#include <vector>
#include <string>
#include "UnambiguousSMSRecipientJSON.h"
#include "SMSAddressFieldJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class SMSJSON : public ReferenceCounted
  {
  private:
    bool flagHasRecipients;
    std::vector< UnambiguousSMSRecipientJSON * > storeRecipients;
    bool flagHasSpokenBody;
    std::string storeSpokenBody;
    bool flagHasWrittenBody;
    std::string storeWrittenBody;
    bool flagHasBody;
    std::string storeBody;
    bool flagHasTo;
    SMSAddressFieldJSON * storeTo;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    SMSJSON(const SMSJSON &);
    SMSJSON & operator=(const SMSJSON &other);

    void  fromJSONRecipients(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONSpokenBody(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONWrittenBody(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONBody(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONTo(JSONValue *json_value, bool ignore_extras = false);


  public:
    SMSJSON(void);
    virtual ~SMSJSON(void);
    bool  hasRecipients(void) const;
    size_t  countOfRecipients(void) const;
    UnambiguousSMSRecipientJSON *  elementOfRecipients(size_t element_num);
    const UnambiguousSMSRecipientJSON *  elementOfRecipients(size_t element_num) const;
    std::vector< UnambiguousSMSRecipientJSON * >  getRecipients(void);
    const std::vector< UnambiguousSMSRecipientJSON * >  getRecipients(void) const;
    bool  hasSpokenBody(void) const;
    std::string  getSpokenBody(void);
    const std::string  getSpokenBody(void) const;
    bool  hasWrittenBody(void) const;
    std::string  getWrittenBody(void);
    const std::string  getWrittenBody(void) const;
    bool  hasBody(void) const;
    std::string  getBody(void);
    const std::string  getBody(void) const;
    bool  hasTo(void) const;
    SMSAddressFieldJSON *  getTo(void);
    const SMSAddressFieldJSON *  getTo(void) const;

    virtual size_t extraSMSComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraSMSComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraSMSComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraSMSComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraSMSLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraSMSLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
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
    void appendRecipients(UnambiguousSMSRecipientJSON * to_append)
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
    void setBody(std::string new_value)
      {
        flagHasBody = true;
        storeBody = new_value;
      }
    void unsetBody(void)
      {
        flagHasBody = false;
      }
    void setTo(SMSAddressFieldJSON * new_value)
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

    virtual void extraSMSAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraSMSSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraSMSLookup(key);
        if (old_field == NULL)
          {
            extraSMSAppendPair(key, new_component);
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

    void write_as_json(JSONHandler *handler) const
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
        if (flagHasBody)
          {
            handler->start_pair("Body");
            handler->string_value(storeBody);
          }
        if (flagHasTo)
          {
            handler->start_pair("To");
            storeTo->write_as_json(handler);
          }
      }
    virtual const char *missing_field_error(void) const
      {
        return NULL;
      }

    static SMSJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static SMSJSON *from_text(const char *text, bool ignore_extras = false)
      {
        SMSJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<SMSJSON>, SMSJSON *, bool> generator("Type SMS", ignore_extras);
            parse_json_value(text, "Text for SMSJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static SMSJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        SMSJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<SMSJSON>, SMSJSON *, bool> generator("Type SMS", ignore_extras);
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
        JSONHoldingArrayGenerator<UnambiguousSMSRecipientJSON::Generator, RCHandle<UnambiguousSMSRecipientJSON>, UnambiguousSMSRecipientJSON *, bool > fieldGeneratorRecipients;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorSpokenBody;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorWrittenBody;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorBody;
        JSONHoldingGenerator<SMSAddressFieldJSON::Generator, RCHandle<SMSAddressFieldJSON>, SMSAddressFieldJSON *, bool > fieldGeneratorTo;
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
            SMSJSON *result = new SMSJSON();
            assert(result != NULL);
            RCHandle<SMSJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraSMSAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void finish(SMSJSON *result)
          {
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
            if (fieldGeneratorBody.have_value)
              {
                result->setBody(fieldGeneratorBody.value);
                fieldGeneratorBody.have_value = false;
              }
            if (fieldGeneratorTo.have_value)
              {
                result->setTo(fieldGeneratorTo.value.referenced());
                fieldGeneratorTo.have_value = false;
              }
          }
        virtual void handle_result(SMSJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'B':
                    if (strcmp(&(field_name[1]), "ody") == 0)
                        return &fieldGeneratorBody;
                    break;
                case 'R':
                    if (strcmp(&(field_name[1]), "ecipients") == 0)
                        return &fieldGeneratorRecipients;
                    break;
                case 'S':
                    if (strcmp(&(field_name[1]), "pokenBody") == 0)
                        return &fieldGeneratorSpokenBody;
                    break;
                case 'T':
                    if (strcmp(&(field_name[1]), "o") == 0)
                        return &fieldGeneratorTo;
                    break;
                case 'W':
                    if (strcmp(&(field_name[1]), "rittenBody") == 0)
                        return &fieldGeneratorWrittenBody;
                    break;
                default:
                    break;
              }
            return NULL;
          }

      public:
        Generator(bool ignore_extras = false) : fieldGeneratorRecipients("field \"Recipients\" of the SMS class", ignore_extras), fieldGeneratorSpokenBody("field \"SpokenBody\" of the SMS class"), fieldGeneratorWrittenBody("field \"WrittenBody\" of the SMS class"), fieldGeneratorBody("field \"Body\" of the SMS class"), fieldGeneratorTo("field \"To\" of the SMS class", ignore_extras), unknownFieldGenerator(ignore_extras)
          {
            set_what("the SMS class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorRecipients.reset();
            fieldGeneratorSpokenBody.reset();
            fieldGeneratorWrittenBody.reset();
            fieldGeneratorBody.reset();
            fieldGeneratorTo.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* SMSJSON_H */
