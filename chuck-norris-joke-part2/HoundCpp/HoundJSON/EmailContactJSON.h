/* file "EmailContactJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef EMAILCONTACTJSON_H
#define EMAILCONTACTJSON_H

#pragma interface

#include "ContactJSON.h"
#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONHoldingArrayGenerator.h"
#include <vector>
#include "LabeledEmailAddressJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class EmailContactJSON : public ContactJSON
  {
  private:
    bool flagHasLabeledEmailAddresses;
    std::vector< LabeledEmailAddressJSON * > storeLabeledEmailAddresses;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    EmailContactJSON(const EmailContactJSON &);
    EmailContactJSON & operator=(const EmailContactJSON &other);

    JSONValue * extraLabeledEmailAddressesToJSON(void) const;

    void  fromJSONLabeledEmailAddresses(JSONValue *json_value, bool ignore_extras = false);


  public:
    EmailContactJSON(void);
    virtual ~EmailContactJSON(void);
    bool  hasLabeledEmailAddresses(void) const;
    size_t  countOfLabeledEmailAddresses(void) const;
    LabeledEmailAddressJSON *  elementOfLabeledEmailAddresses(size_t element_num);
    const LabeledEmailAddressJSON *  elementOfLabeledEmailAddresses(size_t element_num) const;
    std::vector< LabeledEmailAddressJSON * >  getLabeledEmailAddresses(void);
    const std::vector< LabeledEmailAddressJSON * >  getLabeledEmailAddresses(void) const;

    virtual size_t extraEmailContactComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraEmailContactComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraEmailContactComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraEmailContactComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraEmailContactLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraEmailContactLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    size_t extraContactComponentCount(void) const
      {
        size_t result = 0;
        if (flagHasLabeledEmailAddresses)
            ++result;
        result += extraEmailContactComponentCount();
        return result;
      }
    const char *extraContactComponentKey(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasLabeledEmailAddresses)
          {
            if (remainder == 0)
                return "LabeledEmailAddresses";
            --remainder;
          }
        return extraEmailContactComponentKey(remainder);
      }
    JSONValue *extraContactComponentValue(size_t component_num)
      {
        size_t remainder = component_num;
        if (flagHasLabeledEmailAddresses)
          {
            if (remainder == 0)
                return extraLabeledEmailAddressesToJSON();
            --remainder;
          }
        return extraEmailContactComponentValue(remainder);
      }
    const JSONValue *extraContactComponentValue(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasLabeledEmailAddresses)
          {
            if (remainder == 0)
                return extraLabeledEmailAddressesToJSON();
            --remainder;
          }
        return extraEmailContactComponentValue(remainder);
      }
    JSONValue *extraContactLookup(const char *field_name)
      {
        if (strcmp(field_name, "LabeledEmailAddresses") == 0)
            return (flagHasLabeledEmailAddresses ? extraLabeledEmailAddressesToJSON() : NULL);
        return extraEmailContactLookup(field_name);
      }
    const JSONValue *extraContactLookup(const char *field_name) const
      {
        if (strcmp(field_name, "LabeledEmailAddresses") == 0)
            return (flagHasLabeledEmailAddresses ? extraLabeledEmailAddressesToJSON() : NULL);
        return extraEmailContactLookup(field_name);
      }

    void initLabeledEmailAddresses(void)
      {
        if (flagHasLabeledEmailAddresses)
          {
            for (size_t num2 = 0; num2 < storeLabeledEmailAddresses.size(); ++num2)
              {
                storeLabeledEmailAddresses[num2]->remove_reference();
              }
          }
        flagHasLabeledEmailAddresses = true;
        storeLabeledEmailAddresses.clear();
      }
    void appendLabeledEmailAddresses(LabeledEmailAddressJSON * to_append)
      {
        if (!flagHasLabeledEmailAddresses)
          {
            flagHasLabeledEmailAddresses = true;
            storeLabeledEmailAddresses.clear();
          }
        assert(flagHasLabeledEmailAddresses);
        to_append->add_reference();
        storeLabeledEmailAddresses.push_back(to_append);
      }
    void unsetLabeledEmailAddresses(void)
      {
        if (flagHasLabeledEmailAddresses)
          {
            for (size_t num3 = 0; num3 < storeLabeledEmailAddresses.size(); ++num3)
              {
                storeLabeledEmailAddresses[num3]->remove_reference();
              }
          }
        flagHasLabeledEmailAddresses = false;
        storeLabeledEmailAddresses.clear();
      }

    virtual void extraEmailContactAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraEmailContactSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraEmailContactLookup(key);
        if (old_field == NULL)
          {
            extraEmailContactAppendPair(key, new_component);
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
        if (strcmp(key, "LabeledEmailAddresses") == 0)
            {
            fromJSONLabeledEmailAddresses(new_component, false);
            return;
            }
        extraEmailContactAppendPair(key, new_component);
      }
    void extraContactSetField(const char *key, JSONValue *new_component)
      {
        if (strcmp(key, "LabeledEmailAddresses") == 0)
            {
            fromJSONLabeledEmailAddresses(new_component, false);
            return;
            }
        extraEmailContactSetField(key, new_component);
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
        if (flagHasLabeledEmailAddresses)
          {
            handler->start_pair("LabeledEmailAddresses");
            handler->start_array();
            for (size_t num1 = 0; num1 < storeLabeledEmailAddresses.size(); ++num1)
              {
                storeLabeledEmailAddresses[num1]->write_as_json(handler);
              }
            handler->finish_array();
          }
      }
    virtual const char *missing_field_error(void) const
      {
        return NULL;
      }

    static EmailContactJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static EmailContactJSON *from_text(const char *text, bool ignore_extras = false)
      {
        EmailContactJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<EmailContactJSON>, EmailContactJSON *, bool> generator("Type EmailContact", ignore_extras);
            parse_json_value(text, "Text for EmailContactJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static EmailContactJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        EmailContactJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<EmailContactJSON>, EmailContactJSON *, bool> generator("Type EmailContact", ignore_extras);
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
        JSONHoldingArrayGenerator<LabeledEmailAddressJSON::Generator, RCHandle<LabeledEmailAddressJSON>, LabeledEmailAddressJSON *, bool > fieldGeneratorLabeledEmailAddresses;
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
            EmailContactJSON *result = new EmailContactJSON();
            assert(result != NULL);
            RCHandle<EmailContactJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraEmailContactAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void handle_result(ContactJSON *new_result)
          {
            handle_result((EmailContactJSON *)new_result);
          }
        void finish(EmailContactJSON *result)
          {
            if (fieldGeneratorLabeledEmailAddresses.have_value)
              {
                result->initLabeledEmailAddresses();
                size_t count = fieldGeneratorLabeledEmailAddresses.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendLabeledEmailAddresses(fieldGeneratorLabeledEmailAddresses.value[num].referenced());
                  }
                fieldGeneratorLabeledEmailAddresses.value.clear();
                fieldGeneratorLabeledEmailAddresses.have_value = false;
              }
            ContactJSON::Generator::finish(result);
          }
        virtual void handle_result(EmailContactJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            if (strcmp(field_name, "LabeledEmailAddresses") == 0)
                return &fieldGeneratorLabeledEmailAddresses;
            return ContactJSON::Generator::start_known_field(field_name);
          }

      public:
        Generator(bool ignore_extras = false) : ContactJSON::Generator(ignore_extras), fieldGeneratorLabeledEmailAddresses("field \"LabeledEmailAddresses\" of the EmailContact class", ignore_extras), unknownFieldGenerator(ignore_extras)
          {
            set_what("the EmailContact class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorLabeledEmailAddresses.reset();
            ContactJSON::Generator::reset();
            unknownFieldGenerator.reset();
          }
      };
    static EmailContactJSON *from_ContactJSON_json(const ContactJSON * ancestor, bool ignore_extras = false)
      {
        assert(ancestor != NULL);
        EmailContactJSON * result;
          {
            JSONHoldingGenerator<Generator, RCHandle<EmailContactJSON>, EmailContactJSON *, bool> handler("Type EmailContact", ignore_extras);
            ancestor->write_as_json(&handler);
            result = handler.value.referenced();
            result->add_reference();
          }
        result->remove_reference_no_delete();
        return result;
      }
  };

#endif /* EMAILCONTACTJSON_H */
