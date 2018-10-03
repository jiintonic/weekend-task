/* file "SMSRecipientsJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef SMSRECIPIENTSJSON_H
#define SMSRECIPIENTSJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONHoldingArrayGenerator.h"
#include <vector>
#include "UnambiguousSMSRecipientJSON.h"
#include "WhichContactChoicesJSON.h"
#include "ContactNumberChoicesJSON.h"
#include "PersonGroupJSON.h"
#include "ContactAndNumberJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class SMSRecipientsJSON : public ReferenceCounted
  {
  private:
    bool flagHasUnambiguousRecipients;
    std::vector< UnambiguousSMSRecipientJSON * > storeUnambiguousRecipients;
    bool flagHasAmbiguousMatches;
    std::vector< WhichContactChoicesJSON * > storeAmbiguousMatches;
    bool flagHasPersonsWithAmbiguousPhoneNumbers;
    std::vector< ContactNumberChoicesJSON * > storePersonsWithAmbiguousPhoneNumbers;
    bool flagHasNoNumberMatches;
    std::vector< PersonGroupJSON * > storeNoNumberMatches;
    bool flagHasContactsWithSelectedNumbers;
    std::vector< ContactAndNumberJSON * > storeContactsWithSelectedNumbers;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    SMSRecipientsJSON(const SMSRecipientsJSON &);
    SMSRecipientsJSON & operator=(const SMSRecipientsJSON &other);

    void  fromJSONUnambiguousRecipients(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONAmbiguousMatches(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONPersonsWithAmbiguousPhoneNumbers(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONNoNumberMatches(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONContactsWithSelectedNumbers(JSONValue *json_value, bool ignore_extras = false);


  public:
    SMSRecipientsJSON(void);
    virtual ~SMSRecipientsJSON(void);
    bool  hasUnambiguousRecipients(void) const;
    size_t  countOfUnambiguousRecipients(void) const;
    UnambiguousSMSRecipientJSON *  elementOfUnambiguousRecipients(size_t element_num);
    const UnambiguousSMSRecipientJSON *  elementOfUnambiguousRecipients(size_t element_num) const;
    std::vector< UnambiguousSMSRecipientJSON * >  getUnambiguousRecipients(void);
    const std::vector< UnambiguousSMSRecipientJSON * >  getUnambiguousRecipients(void) const;
    bool  hasAmbiguousMatches(void) const;
    size_t  countOfAmbiguousMatches(void) const;
    WhichContactChoicesJSON *  elementOfAmbiguousMatches(size_t element_num);
    const WhichContactChoicesJSON *  elementOfAmbiguousMatches(size_t element_num) const;
    std::vector< WhichContactChoicesJSON * >  getAmbiguousMatches(void);
    const std::vector< WhichContactChoicesJSON * >  getAmbiguousMatches(void) const;
    bool  hasPersonsWithAmbiguousPhoneNumbers(void) const;
    size_t  countOfPersonsWithAmbiguousPhoneNumbers(void) const;
    ContactNumberChoicesJSON *  elementOfPersonsWithAmbiguousPhoneNumbers(size_t element_num);
    const ContactNumberChoicesJSON *  elementOfPersonsWithAmbiguousPhoneNumbers(size_t element_num) const;
    std::vector< ContactNumberChoicesJSON * >  getPersonsWithAmbiguousPhoneNumbers(void);
    const std::vector< ContactNumberChoicesJSON * >  getPersonsWithAmbiguousPhoneNumbers(void) const;
    bool  hasNoNumberMatches(void) const;
    size_t  countOfNoNumberMatches(void) const;
    PersonGroupJSON *  elementOfNoNumberMatches(size_t element_num);
    const PersonGroupJSON *  elementOfNoNumberMatches(size_t element_num) const;
    std::vector< PersonGroupJSON * >  getNoNumberMatches(void);
    const std::vector< PersonGroupJSON * >  getNoNumberMatches(void) const;
    bool  hasContactsWithSelectedNumbers(void) const;
    size_t  countOfContactsWithSelectedNumbers(void) const;
    ContactAndNumberJSON *  elementOfContactsWithSelectedNumbers(size_t element_num);
    const ContactAndNumberJSON *  elementOfContactsWithSelectedNumbers(size_t element_num) const;
    std::vector< ContactAndNumberJSON * >  getContactsWithSelectedNumbers(void);
    const std::vector< ContactAndNumberJSON * >  getContactsWithSelectedNumbers(void) const;

    virtual size_t extraSMSRecipientsComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraSMSRecipientsComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraSMSRecipientsComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraSMSRecipientsComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraSMSRecipientsLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraSMSRecipientsLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }

    void initUnambiguousRecipients(void)
      {
        if (flagHasUnambiguousRecipients)
          {
            for (size_t num6 = 0; num6 < storeUnambiguousRecipients.size(); ++num6)
              {
                storeUnambiguousRecipients[num6]->remove_reference();
              }
          }
        flagHasUnambiguousRecipients = true;
        storeUnambiguousRecipients.clear();
      }
    void appendUnambiguousRecipients(UnambiguousSMSRecipientJSON * to_append)
      {
        if (!flagHasUnambiguousRecipients)
          {
            flagHasUnambiguousRecipients = true;
            storeUnambiguousRecipients.clear();
          }
        assert(flagHasUnambiguousRecipients);
        to_append->add_reference();
        storeUnambiguousRecipients.push_back(to_append);
      }
    void unsetUnambiguousRecipients(void)
      {
        if (flagHasUnambiguousRecipients)
          {
            for (size_t num7 = 0; num7 < storeUnambiguousRecipients.size(); ++num7)
              {
                storeUnambiguousRecipients[num7]->remove_reference();
              }
          }
        flagHasUnambiguousRecipients = false;
        storeUnambiguousRecipients.clear();
      }
    void initAmbiguousMatches(void)
      {
        if (flagHasAmbiguousMatches)
          {
            for (size_t num8 = 0; num8 < storeAmbiguousMatches.size(); ++num8)
              {
                storeAmbiguousMatches[num8]->remove_reference();
              }
          }
        flagHasAmbiguousMatches = true;
        storeAmbiguousMatches.clear();
      }
    void appendAmbiguousMatches(WhichContactChoicesJSON * to_append)
      {
        if (!flagHasAmbiguousMatches)
          {
            flagHasAmbiguousMatches = true;
            storeAmbiguousMatches.clear();
          }
        assert(flagHasAmbiguousMatches);
        to_append->add_reference();
        storeAmbiguousMatches.push_back(to_append);
      }
    void unsetAmbiguousMatches(void)
      {
        if (flagHasAmbiguousMatches)
          {
            for (size_t num9 = 0; num9 < storeAmbiguousMatches.size(); ++num9)
              {
                storeAmbiguousMatches[num9]->remove_reference();
              }
          }
        flagHasAmbiguousMatches = false;
        storeAmbiguousMatches.clear();
      }
    void initPersonsWithAmbiguousPhoneNumbers(void)
      {
        if (flagHasPersonsWithAmbiguousPhoneNumbers)
          {
            for (size_t num10 = 0; num10 < storePersonsWithAmbiguousPhoneNumbers.size(); ++num10)
              {
                storePersonsWithAmbiguousPhoneNumbers[num10]->remove_reference();
              }
          }
        flagHasPersonsWithAmbiguousPhoneNumbers = true;
        storePersonsWithAmbiguousPhoneNumbers.clear();
      }
    void appendPersonsWithAmbiguousPhoneNumbers(ContactNumberChoicesJSON * to_append)
      {
        if (!flagHasPersonsWithAmbiguousPhoneNumbers)
          {
            flagHasPersonsWithAmbiguousPhoneNumbers = true;
            storePersonsWithAmbiguousPhoneNumbers.clear();
          }
        assert(flagHasPersonsWithAmbiguousPhoneNumbers);
        to_append->add_reference();
        storePersonsWithAmbiguousPhoneNumbers.push_back(to_append);
      }
    void unsetPersonsWithAmbiguousPhoneNumbers(void)
      {
        if (flagHasPersonsWithAmbiguousPhoneNumbers)
          {
            for (size_t num11 = 0; num11 < storePersonsWithAmbiguousPhoneNumbers.size(); ++num11)
              {
                storePersonsWithAmbiguousPhoneNumbers[num11]->remove_reference();
              }
          }
        flagHasPersonsWithAmbiguousPhoneNumbers = false;
        storePersonsWithAmbiguousPhoneNumbers.clear();
      }
    void initNoNumberMatches(void)
      {
        if (flagHasNoNumberMatches)
          {
            for (size_t num12 = 0; num12 < storeNoNumberMatches.size(); ++num12)
              {
                storeNoNumberMatches[num12]->remove_reference();
              }
          }
        flagHasNoNumberMatches = true;
        storeNoNumberMatches.clear();
      }
    void appendNoNumberMatches(PersonGroupJSON * to_append)
      {
        if (!flagHasNoNumberMatches)
          {
            flagHasNoNumberMatches = true;
            storeNoNumberMatches.clear();
          }
        assert(flagHasNoNumberMatches);
        to_append->add_reference();
        storeNoNumberMatches.push_back(to_append);
      }
    void unsetNoNumberMatches(void)
      {
        if (flagHasNoNumberMatches)
          {
            for (size_t num13 = 0; num13 < storeNoNumberMatches.size(); ++num13)
              {
                storeNoNumberMatches[num13]->remove_reference();
              }
          }
        flagHasNoNumberMatches = false;
        storeNoNumberMatches.clear();
      }
    void initContactsWithSelectedNumbers(void)
      {
        if (flagHasContactsWithSelectedNumbers)
          {
            for (size_t num14 = 0; num14 < storeContactsWithSelectedNumbers.size(); ++num14)
              {
                storeContactsWithSelectedNumbers[num14]->remove_reference();
              }
          }
        flagHasContactsWithSelectedNumbers = true;
        storeContactsWithSelectedNumbers.clear();
      }
    void appendContactsWithSelectedNumbers(ContactAndNumberJSON * to_append)
      {
        if (!flagHasContactsWithSelectedNumbers)
          {
            flagHasContactsWithSelectedNumbers = true;
            storeContactsWithSelectedNumbers.clear();
          }
        assert(flagHasContactsWithSelectedNumbers);
        to_append->add_reference();
        storeContactsWithSelectedNumbers.push_back(to_append);
      }
    void unsetContactsWithSelectedNumbers(void)
      {
        if (flagHasContactsWithSelectedNumbers)
          {
            for (size_t num15 = 0; num15 < storeContactsWithSelectedNumbers.size(); ++num15)
              {
                storeContactsWithSelectedNumbers[num15]->remove_reference();
              }
          }
        flagHasContactsWithSelectedNumbers = false;
        storeContactsWithSelectedNumbers.clear();
      }

    virtual void extraSMSRecipientsAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraSMSRecipientsSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraSMSRecipientsLookup(key);
        if (old_field == NULL)
          {
            extraSMSRecipientsAppendPair(key, new_component);
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
        if (flagHasUnambiguousRecipients)
          {
            handler->start_pair("UnambiguousRecipients");
            handler->start_array();
            for (size_t num1 = 0; num1 < storeUnambiguousRecipients.size(); ++num1)
              {
                storeUnambiguousRecipients[num1]->write_as_json(handler);
              }
            handler->finish_array();
          }
        if (flagHasAmbiguousMatches)
          {
            handler->start_pair("AmbiguousMatches");
            handler->start_array();
            for (size_t num2 = 0; num2 < storeAmbiguousMatches.size(); ++num2)
              {
                storeAmbiguousMatches[num2]->write_as_json(handler);
              }
            handler->finish_array();
          }
        if (flagHasPersonsWithAmbiguousPhoneNumbers)
          {
            handler->start_pair("PersonsWithAmbiguousPhoneNumbers");
            handler->start_array();
            for (size_t num3 = 0; num3 < storePersonsWithAmbiguousPhoneNumbers.size(); ++num3)
              {
                storePersonsWithAmbiguousPhoneNumbers[num3]->write_as_json(handler);
              }
            handler->finish_array();
          }
        if (flagHasNoNumberMatches)
          {
            handler->start_pair("NoNumberMatches");
            handler->start_array();
            for (size_t num4 = 0; num4 < storeNoNumberMatches.size(); ++num4)
              {
                storeNoNumberMatches[num4]->write_as_json(handler);
              }
            handler->finish_array();
          }
        if (flagHasContactsWithSelectedNumbers)
          {
            handler->start_pair("ContactsWithSelectedNumbers");
            handler->start_array();
            for (size_t num5 = 0; num5 < storeContactsWithSelectedNumbers.size(); ++num5)
              {
                storeContactsWithSelectedNumbers[num5]->write_as_json(handler);
              }
            handler->finish_array();
          }
      }
    virtual const char *missing_field_error(void) const
      {
        return NULL;
      }

    static SMSRecipientsJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static SMSRecipientsJSON *from_text(const char *text, bool ignore_extras = false)
      {
        SMSRecipientsJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<SMSRecipientsJSON>, SMSRecipientsJSON *, bool> generator("Type SMSRecipients", ignore_extras);
            parse_json_value(text, "Text for SMSRecipientsJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static SMSRecipientsJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        SMSRecipientsJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<SMSRecipientsJSON>, SMSRecipientsJSON *, bool> generator("Type SMSRecipients", ignore_extras);
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
        JSONHoldingArrayGenerator<UnambiguousSMSRecipientJSON::Generator, RCHandle<UnambiguousSMSRecipientJSON>, UnambiguousSMSRecipientJSON *, bool > fieldGeneratorUnambiguousRecipients;
        JSONHoldingArrayGenerator<WhichContactChoicesJSON::Generator, RCHandle<WhichContactChoicesJSON>, WhichContactChoicesJSON *, bool > fieldGeneratorAmbiguousMatches;
        JSONHoldingArrayGenerator<ContactNumberChoicesJSON::Generator, RCHandle<ContactNumberChoicesJSON>, ContactNumberChoicesJSON *, bool > fieldGeneratorPersonsWithAmbiguousPhoneNumbers;
        JSONHoldingArrayGenerator<PersonGroupJSON::Generator, RCHandle<PersonGroupJSON>, PersonGroupJSON *, bool > fieldGeneratorNoNumberMatches;
        JSONHoldingArrayGenerator<ContactAndNumberJSON::Generator, RCHandle<ContactAndNumberJSON>, ContactAndNumberJSON *, bool > fieldGeneratorContactsWithSelectedNumbers;
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
            SMSRecipientsJSON *result = new SMSRecipientsJSON();
            assert(result != NULL);
            RCHandle<SMSRecipientsJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraSMSRecipientsAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void finish(SMSRecipientsJSON *result)
          {
            if (fieldGeneratorUnambiguousRecipients.have_value)
              {
                result->initUnambiguousRecipients();
                size_t count = fieldGeneratorUnambiguousRecipients.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendUnambiguousRecipients(fieldGeneratorUnambiguousRecipients.value[num].referenced());
                  }
                fieldGeneratorUnambiguousRecipients.value.clear();
                fieldGeneratorUnambiguousRecipients.have_value = false;
              }
            if (fieldGeneratorAmbiguousMatches.have_value)
              {
                result->initAmbiguousMatches();
                size_t count = fieldGeneratorAmbiguousMatches.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendAmbiguousMatches(fieldGeneratorAmbiguousMatches.value[num].referenced());
                  }
                fieldGeneratorAmbiguousMatches.value.clear();
                fieldGeneratorAmbiguousMatches.have_value = false;
              }
            if (fieldGeneratorPersonsWithAmbiguousPhoneNumbers.have_value)
              {
                result->initPersonsWithAmbiguousPhoneNumbers();
                size_t count = fieldGeneratorPersonsWithAmbiguousPhoneNumbers.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendPersonsWithAmbiguousPhoneNumbers(fieldGeneratorPersonsWithAmbiguousPhoneNumbers.value[num].referenced());
                  }
                fieldGeneratorPersonsWithAmbiguousPhoneNumbers.value.clear();
                fieldGeneratorPersonsWithAmbiguousPhoneNumbers.have_value = false;
              }
            if (fieldGeneratorNoNumberMatches.have_value)
              {
                result->initNoNumberMatches();
                size_t count = fieldGeneratorNoNumberMatches.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendNoNumberMatches(fieldGeneratorNoNumberMatches.value[num].referenced());
                  }
                fieldGeneratorNoNumberMatches.value.clear();
                fieldGeneratorNoNumberMatches.have_value = false;
              }
            if (fieldGeneratorContactsWithSelectedNumbers.have_value)
              {
                result->initContactsWithSelectedNumbers();
                size_t count = fieldGeneratorContactsWithSelectedNumbers.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendContactsWithSelectedNumbers(fieldGeneratorContactsWithSelectedNumbers.value[num].referenced());
                  }
                fieldGeneratorContactsWithSelectedNumbers.value.clear();
                fieldGeneratorContactsWithSelectedNumbers.have_value = false;
              }
          }
        virtual void handle_result(SMSRecipientsJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'A':
                    if (strcmp(&(field_name[1]), "mbiguousMatches") == 0)
                        return &fieldGeneratorAmbiguousMatches;
                    break;
                case 'C':
                    if (strcmp(&(field_name[1]), "ontactsWithSelectedNumbers") == 0)
                        return &fieldGeneratorContactsWithSelectedNumbers;
                    break;
                case 'N':
                    if (strcmp(&(field_name[1]), "oNumberMatches") == 0)
                        return &fieldGeneratorNoNumberMatches;
                    break;
                case 'P':
                    if (strcmp(&(field_name[1]), "ersonsWithAmbiguousPhoneNumbers") == 0)
                        return &fieldGeneratorPersonsWithAmbiguousPhoneNumbers;
                    break;
                case 'U':
                    if (strcmp(&(field_name[1]), "nambiguousRecipients") == 0)
                        return &fieldGeneratorUnambiguousRecipients;
                    break;
                default:
                    break;
              }
            return NULL;
          }

      public:
        Generator(bool ignore_extras = false) : fieldGeneratorUnambiguousRecipients("field \"UnambiguousRecipients\" of the SMSRecipients class", ignore_extras), fieldGeneratorAmbiguousMatches("field \"AmbiguousMatches\" of the SMSRecipients class", ignore_extras), fieldGeneratorPersonsWithAmbiguousPhoneNumbers("field \"PersonsWithAmbiguousPhoneNumbers\" of the SMSRecipients class", ignore_extras), fieldGeneratorNoNumberMatches("field \"NoNumberMatches\" of the SMSRecipients class", ignore_extras), fieldGeneratorContactsWithSelectedNumbers("field \"ContactsWithSelectedNumbers\" of the SMSRecipients class", ignore_extras), unknownFieldGenerator(ignore_extras)
          {
            set_what("the SMSRecipients class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorUnambiguousRecipients.reset();
            fieldGeneratorAmbiguousMatches.reset();
            fieldGeneratorPersonsWithAmbiguousPhoneNumbers.reset();
            fieldGeneratorNoNumberMatches.reset();
            fieldGeneratorContactsWithSelectedNumbers.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* SMSRECIPIENTSJSON_H */
