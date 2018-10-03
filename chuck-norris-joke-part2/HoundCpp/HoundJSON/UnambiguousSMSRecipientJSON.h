/* file "UnambiguousSMSRecipientJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef UNAMBIGUOUSSMSRECIPIENTJSON_H
#define UNAMBIGUOUSSMSRECIPIENTJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONHoldingArrayGenerator.h"
#include "JSONStringGenerator.h"
#include <vector>
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


class UnambiguousSMSRecipientJSON : public ReferenceCounted
  {
  private:
    bool flagHasPhoneNumber;
    std::string storePhoneNumber;
    bool flagHasContacts;
    std::vector< OneContactJSON * > storeContacts;
    bool flagHasToUserWrittenName;
    std::string storeToUserWrittenName;
    bool flagHasToUserSpokenName;
    std::string storeToUserSpokenName;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    UnambiguousSMSRecipientJSON(const UnambiguousSMSRecipientJSON &);
    UnambiguousSMSRecipientJSON & operator=(const UnambiguousSMSRecipientJSON &other);

    void  fromJSONPhoneNumber(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONContacts(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONToUserWrittenName(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONToUserSpokenName(JSONValue *json_value, bool ignore_extras = false);


  public:
    UnambiguousSMSRecipientJSON(void);
    virtual ~UnambiguousSMSRecipientJSON(void);
    bool  hasPhoneNumber(void) const;
    std::string  getPhoneNumber(void);
    const std::string  getPhoneNumber(void) const;
    bool  hasContacts(void) const;
    size_t  countOfContacts(void) const;
    OneContactJSON *  elementOfContacts(size_t element_num);
    const OneContactJSON *  elementOfContacts(size_t element_num) const;
    std::vector< OneContactJSON * >  getContacts(void);
    const std::vector< OneContactJSON * >  getContacts(void) const;
    bool  hasToUserWrittenName(void) const;
    std::string  getToUserWrittenName(void);
    const std::string  getToUserWrittenName(void) const;
    bool  hasToUserSpokenName(void) const;
    std::string  getToUserSpokenName(void);
    const std::string  getToUserSpokenName(void) const;

    virtual size_t extraUnambiguousSMSRecipientComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraUnambiguousSMSRecipientComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraUnambiguousSMSRecipientComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraUnambiguousSMSRecipientComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraUnambiguousSMSRecipientLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraUnambiguousSMSRecipientLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }

    void setPhoneNumber(std::string new_value)
      {
        flagHasPhoneNumber = true;
        storePhoneNumber = new_value;
      }
    void unsetPhoneNumber(void)
      {
        flagHasPhoneNumber = false;
      }
    void initContacts(void)
      {
        if (flagHasContacts)
          {
            for (size_t num2 = 0; num2 < storeContacts.size(); ++num2)
              {
                storeContacts[num2]->remove_reference();
              }
          }
        flagHasContacts = true;
        storeContacts.clear();
      }
    void appendContacts(OneContactJSON * to_append)
      {
        if (!flagHasContacts)
          {
            flagHasContacts = true;
            storeContacts.clear();
          }
        assert(flagHasContacts);
        to_append->add_reference();
        storeContacts.push_back(to_append);
      }
    void unsetContacts(void)
      {
        if (flagHasContacts)
          {
            for (size_t num3 = 0; num3 < storeContacts.size(); ++num3)
              {
                storeContacts[num3]->remove_reference();
              }
          }
        flagHasContacts = false;
        storeContacts.clear();
      }
    void setToUserWrittenName(std::string new_value)
      {
        flagHasToUserWrittenName = true;
        storeToUserWrittenName = new_value;
      }
    void unsetToUserWrittenName(void)
      {
        flagHasToUserWrittenName = false;
      }
    void setToUserSpokenName(std::string new_value)
      {
        flagHasToUserSpokenName = true;
        storeToUserSpokenName = new_value;
      }
    void unsetToUserSpokenName(void)
      {
        flagHasToUserSpokenName = false;
      }

    virtual void extraUnambiguousSMSRecipientAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraUnambiguousSMSRecipientSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraUnambiguousSMSRecipientLookup(key);
        if (old_field == NULL)
          {
            extraUnambiguousSMSRecipientAppendPair(key, new_component);
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
        assert(flagHasPhoneNumber);
        handler->start_pair("PhoneNumber");
        handler->string_value(storePhoneNumber);
        if (flagHasContacts)
          {
            handler->start_pair("Contacts");
            handler->start_array();
            for (size_t num1 = 0; num1 < storeContacts.size(); ++num1)
              {
                storeContacts[num1]->write_as_json(handler);
              }
            handler->finish_array();
          }
        assert(flagHasToUserWrittenName);
        handler->start_pair("ToUserWrittenName");
        handler->string_value(storeToUserWrittenName);
        assert(flagHasToUserSpokenName);
        handler->start_pair("ToUserSpokenName");
        handler->string_value(storeToUserSpokenName);
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasPhoneNumber()))
          {
            return "When parsing the object for %what%, the \"PhoneNumber\" field was missing.";
          }
        if (!(hasToUserWrittenName()))
          {
            return "When parsing the object for %what%, the \"ToUserWrittenName\" field was missing.";
          }
        if (!(hasToUserSpokenName()))
          {
            return "When parsing the object for %what%, the \"ToUserSpokenName\" field was missing.";
          }
        return NULL;
      }

    static UnambiguousSMSRecipientJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static UnambiguousSMSRecipientJSON *from_text(const char *text, bool ignore_extras = false)
      {
        UnambiguousSMSRecipientJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<UnambiguousSMSRecipientJSON>, UnambiguousSMSRecipientJSON *, bool> generator("Type UnambiguousSMSRecipient", ignore_extras);
            parse_json_value(text, "Text for UnambiguousSMSRecipientJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static UnambiguousSMSRecipientJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        UnambiguousSMSRecipientJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<UnambiguousSMSRecipientJSON>, UnambiguousSMSRecipientJSON *, bool> generator("Type UnambiguousSMSRecipient", ignore_extras);
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
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorPhoneNumber;
        JSONHoldingArrayGenerator<OneContactJSON::Generator, RCHandle<OneContactJSON>, OneContactJSON *, bool > fieldGeneratorContacts;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorToUserWrittenName;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorToUserSpokenName;
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
            UnambiguousSMSRecipientJSON *result = new UnambiguousSMSRecipientJSON();
            assert(result != NULL);
            RCHandle<UnambiguousSMSRecipientJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraUnambiguousSMSRecipientAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void finish(UnambiguousSMSRecipientJSON *result)
          {
            if (fieldGeneratorPhoneNumber.have_value)
              {
                result->setPhoneNumber(fieldGeneratorPhoneNumber.value);
                fieldGeneratorPhoneNumber.have_value = false;
              }
            else if (!(result->hasPhoneNumber()))
              {
                error("When parsing the object for %what%, the \"PhoneNumber\" field was missing.");
              }
            if (fieldGeneratorContacts.have_value)
              {
                result->initContacts();
                size_t count = fieldGeneratorContacts.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendContacts(fieldGeneratorContacts.value[num].referenced());
                  }
                fieldGeneratorContacts.value.clear();
                fieldGeneratorContacts.have_value = false;
              }
            if (fieldGeneratorToUserWrittenName.have_value)
              {
                result->setToUserWrittenName(fieldGeneratorToUserWrittenName.value);
                fieldGeneratorToUserWrittenName.have_value = false;
              }
            else if (!(result->hasToUserWrittenName()))
              {
                error("When parsing the object for %what%, the \"ToUserWrittenName\" field was missing.");
              }
            if (fieldGeneratorToUserSpokenName.have_value)
              {
                result->setToUserSpokenName(fieldGeneratorToUserSpokenName.value);
                fieldGeneratorToUserSpokenName.have_value = false;
              }
            else if (!(result->hasToUserSpokenName()))
              {
                error("When parsing the object for %what%, the \"ToUserSpokenName\" field was missing.");
              }
          }
        virtual void handle_result(UnambiguousSMSRecipientJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'C':
                    if (strcmp(&(field_name[1]), "ontacts") == 0)
                        return &fieldGeneratorContacts;
                    break;
                case 'P':
                    if (strcmp(&(field_name[1]), "honeNumber") == 0)
                        return &fieldGeneratorPhoneNumber;
                    break;
                case 'T':
                    if (strncmp(&(field_name[1]), "oUser", 5) == 0)
                      {
                        switch ((unsigned char)(field_name[6]))
                          {
                            case 'S':
                                if (strcmp(&(field_name[7]), "pokenName") == 0)
                                    return &fieldGeneratorToUserSpokenName;
                                break;
                            case 'W':
                                if (strcmp(&(field_name[7]), "rittenName") == 0)
                                    return &fieldGeneratorToUserWrittenName;
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                default:
                    break;
              }
            return NULL;
          }

      public:
        Generator(bool ignore_extras = false) : fieldGeneratorPhoneNumber("field \"PhoneNumber\" of the UnambiguousSMSRecipient class"), fieldGeneratorContacts("field \"Contacts\" of the UnambiguousSMSRecipient class", ignore_extras), fieldGeneratorToUserWrittenName("field \"ToUserWrittenName\" of the UnambiguousSMSRecipient class"), fieldGeneratorToUserSpokenName("field \"ToUserSpokenName\" of the UnambiguousSMSRecipient class"), unknownFieldGenerator(ignore_extras)
          {
            set_what("the UnambiguousSMSRecipient class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorPhoneNumber.reset();
            fieldGeneratorContacts.reset();
            fieldGeneratorToUserWrittenName.reset();
            fieldGeneratorToUserSpokenName.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* UNAMBIGUOUSSMSRECIPIENTJSON_H */
