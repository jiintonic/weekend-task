/* file "SMSContactJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef SMSCONTACTJSON_H
#define SMSCONTACTJSON_H

#pragma interface

#include "ContactJSON.h"
#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONHoldingArrayGenerator.h"
#include <vector>
#include "LabeledPhoneNumberJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class SMSContactJSON : public ContactJSON
  {
  private:
    bool flagHasLabeledPhoneNumbers;
    std::vector< LabeledPhoneNumberJSON * > storeLabeledPhoneNumbers;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    SMSContactJSON(const SMSContactJSON &);
    SMSContactJSON & operator=(const SMSContactJSON &other);

    JSONValue * extraLabeledPhoneNumbersToJSON(void) const;

    void  fromJSONLabeledPhoneNumbers(JSONValue *json_value, bool ignore_extras = false);


  public:
    SMSContactJSON(void);
    virtual ~SMSContactJSON(void);
    bool  hasLabeledPhoneNumbers(void) const;
    size_t  countOfLabeledPhoneNumbers(void) const;
    LabeledPhoneNumberJSON *  elementOfLabeledPhoneNumbers(size_t element_num);
    const LabeledPhoneNumberJSON *  elementOfLabeledPhoneNumbers(size_t element_num) const;
    std::vector< LabeledPhoneNumberJSON * >  getLabeledPhoneNumbers(void);
    const std::vector< LabeledPhoneNumberJSON * >  getLabeledPhoneNumbers(void) const;

    virtual size_t extraSMSContactComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraSMSContactComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraSMSContactComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraSMSContactComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraSMSContactLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraSMSContactLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    size_t extraContactComponentCount(void) const
      {
        size_t result = 0;
        if (flagHasLabeledPhoneNumbers)
            ++result;
        result += extraSMSContactComponentCount();
        return result;
      }
    const char *extraContactComponentKey(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasLabeledPhoneNumbers)
          {
            if (remainder == 0)
                return "LabeledPhoneNumbers";
            --remainder;
          }
        return extraSMSContactComponentKey(remainder);
      }
    JSONValue *extraContactComponentValue(size_t component_num)
      {
        size_t remainder = component_num;
        if (flagHasLabeledPhoneNumbers)
          {
            if (remainder == 0)
                return extraLabeledPhoneNumbersToJSON();
            --remainder;
          }
        return extraSMSContactComponentValue(remainder);
      }
    const JSONValue *extraContactComponentValue(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasLabeledPhoneNumbers)
          {
            if (remainder == 0)
                return extraLabeledPhoneNumbersToJSON();
            --remainder;
          }
        return extraSMSContactComponentValue(remainder);
      }
    JSONValue *extraContactLookup(const char *field_name)
      {
        if (strcmp(field_name, "LabeledPhoneNumbers") == 0)
            return (flagHasLabeledPhoneNumbers ? extraLabeledPhoneNumbersToJSON() : NULL);
        return extraSMSContactLookup(field_name);
      }
    const JSONValue *extraContactLookup(const char *field_name) const
      {
        if (strcmp(field_name, "LabeledPhoneNumbers") == 0)
            return (flagHasLabeledPhoneNumbers ? extraLabeledPhoneNumbersToJSON() : NULL);
        return extraSMSContactLookup(field_name);
      }

    void initLabeledPhoneNumbers(void)
      {
        if (flagHasLabeledPhoneNumbers)
          {
            for (size_t num2 = 0; num2 < storeLabeledPhoneNumbers.size(); ++num2)
              {
                storeLabeledPhoneNumbers[num2]->remove_reference();
              }
          }
        flagHasLabeledPhoneNumbers = true;
        storeLabeledPhoneNumbers.clear();
      }
    void appendLabeledPhoneNumbers(LabeledPhoneNumberJSON * to_append)
      {
        if (!flagHasLabeledPhoneNumbers)
          {
            flagHasLabeledPhoneNumbers = true;
            storeLabeledPhoneNumbers.clear();
          }
        assert(flagHasLabeledPhoneNumbers);
        to_append->add_reference();
        storeLabeledPhoneNumbers.push_back(to_append);
      }
    void unsetLabeledPhoneNumbers(void)
      {
        if (flagHasLabeledPhoneNumbers)
          {
            for (size_t num3 = 0; num3 < storeLabeledPhoneNumbers.size(); ++num3)
              {
                storeLabeledPhoneNumbers[num3]->remove_reference();
              }
          }
        flagHasLabeledPhoneNumbers = false;
        storeLabeledPhoneNumbers.clear();
      }

    virtual void extraSMSContactAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraSMSContactSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraSMSContactLookup(key);
        if (old_field == NULL)
          {
            extraSMSContactAppendPair(key, new_component);
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
    void extraContactAppendPair(const char *key, JSONValue *new_component)
      {
        if (strcmp(key, "LabeledPhoneNumbers") == 0)
            {
            fromJSONLabeledPhoneNumbers(new_component, false);
            return;
            }
        extraSMSContactAppendPair(key, new_component);
      }
    void extraContactSetField(const char *key, JSONValue *new_component)
      {
        if (strcmp(key, "LabeledPhoneNumbers") == 0)
            {
            fromJSONLabeledPhoneNumbers(new_component, false);
            return;
            }
        extraSMSContactSetField(key, new_component);
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
        ContactJSON::write_fields_as_json(handler);
        if (flagHasLabeledPhoneNumbers)
          {
            handler->start_pair("LabeledPhoneNumbers");
            handler->start_array();
            for (size_t num1 = 0; num1 < storeLabeledPhoneNumbers.size(); ++num1)
              {
                storeLabeledPhoneNumbers[num1]->write_as_json(handler);
              }
            handler->finish_array();
          }
      }
    virtual const char *missing_field_error(void) const
      {
        return NULL;
      }

    static SMSContactJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static SMSContactJSON *from_text(const char *text, bool ignore_extras = false)
      {
        SMSContactJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<SMSContactJSON>, SMSContactJSON *, bool> generator("Type SMSContact", ignore_extras);
            parse_json_value(text, "Text for SMSContactJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static SMSContactJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        SMSContactJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<SMSContactJSON>, SMSContactJSON *, bool> generator("Type SMSContact", ignore_extras);
            parse_json_value(fp, file_name, &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    class Generator : public ContactJSON::Generator
      {
      private:
        JSONHoldingArrayGenerator<LabeledPhoneNumberJSON::Generator, RCHandle<LabeledPhoneNumberJSON>, LabeledPhoneNumberJSON *, bool > fieldGeneratorLabeledPhoneNumbers;
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
            SMSContactJSON *result = new SMSContactJSON();
            assert(result != NULL);
            RCHandle<SMSContactJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraSMSContactAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void handle_result(ContactJSON *new_result)
          {
            handle_result((SMSContactJSON *)new_result);
          }
        void finish(SMSContactJSON *result)
          {
            if (fieldGeneratorLabeledPhoneNumbers.have_value)
              {
                result->initLabeledPhoneNumbers();
                size_t count = fieldGeneratorLabeledPhoneNumbers.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendLabeledPhoneNumbers(fieldGeneratorLabeledPhoneNumbers.value[num].referenced());
                  }
                fieldGeneratorLabeledPhoneNumbers.value.clear();
                fieldGeneratorLabeledPhoneNumbers.have_value = false;
              }
            ContactJSON::Generator::finish(result);
          }
        virtual void handle_result(SMSContactJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            if (strcmp(field_name, "LabeledPhoneNumbers") == 0)
                return &fieldGeneratorLabeledPhoneNumbers;
            return ContactJSON::Generator::start_known_field(field_name);
          }

      public:
        Generator(bool ignore_extras = false) : ContactJSON::Generator(ignore_extras), fieldGeneratorLabeledPhoneNumbers("field \"LabeledPhoneNumbers\" of the SMSContact class", ignore_extras), unknownFieldGenerator(ignore_extras)
          {
            set_what("the SMSContact class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorLabeledPhoneNumbers.reset();
            ContactJSON::Generator::reset();
            unknownFieldGenerator.reset();
          }
      };
    static SMSContactJSON *from_ContactJSON_json(const ContactJSON * ancestor, bool ignore_extras = false)
      {
        assert(ancestor != NULL);
        SMSContactJSON * result;
          {
            JSONHoldingGenerator<Generator, RCHandle<SMSContactJSON>, SMSContactJSON *, bool> handler("Type SMSContact", ignore_extras);
            ancestor->write_as_json(&handler);
            result = handler.value.referenced();
            result->add_reference();
          }
        result->remove_reference_no_delete();
        return result;
      }
  };

#endif /* SMSCONTACTJSON_H */
