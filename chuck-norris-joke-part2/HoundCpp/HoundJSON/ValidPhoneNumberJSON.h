/* file "ValidPhoneNumberJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef VALIDPHONENUMBERJSON_H
#define VALIDPHONENUMBERJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONStringGenerator.h"
#include <string>
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class ValidPhoneNumberJSON : public ReferenceCounted
  {
  private:
    bool flagHasContactName;
    std::string storeContactName;
    bool flagHasLabel;
    std::string storeLabel;
    bool flagHasContactID;
    std::string storeContactID;
    bool flagHasPhoneNumber;
    std::string storePhoneNumber;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    ValidPhoneNumberJSON(const ValidPhoneNumberJSON &);
    ValidPhoneNumberJSON & operator=(const ValidPhoneNumberJSON &other);

    void  fromJSONContactName(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONLabel(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONContactID(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONPhoneNumber(JSONValue *json_value, bool ignore_extras = false);


  public:
    ValidPhoneNumberJSON(void);
    virtual ~ValidPhoneNumberJSON(void);
    bool  hasContactName(void) const;
    std::string  getContactName(void);
    const std::string  getContactName(void) const;
    bool  hasLabel(void) const;
    std::string  getLabel(void);
    const std::string  getLabel(void) const;
    bool  hasContactID(void) const;
    std::string  getContactID(void);
    const std::string  getContactID(void) const;
    bool  hasPhoneNumber(void) const;
    std::string  getPhoneNumber(void);
    const std::string  getPhoneNumber(void) const;

    virtual size_t extraValidPhoneNumberComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraValidPhoneNumberComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraValidPhoneNumberComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraValidPhoneNumberComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraValidPhoneNumberLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraValidPhoneNumberLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }

    void setContactName(std::string new_value)
      {
        flagHasContactName = true;
        storeContactName = new_value;
      }
    void unsetContactName(void)
      {
        flagHasContactName = false;
      }
    void setLabel(std::string new_value)
      {
        flagHasLabel = true;
        storeLabel = new_value;
      }
    void unsetLabel(void)
      {
        flagHasLabel = false;
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
    void setPhoneNumber(std::string new_value)
      {
        flagHasPhoneNumber = true;
        storePhoneNumber = new_value;
      }
    void unsetPhoneNumber(void)
      {
        flagHasPhoneNumber = false;
      }

    virtual void extraValidPhoneNumberAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraValidPhoneNumberSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraValidPhoneNumberLookup(key);
        if (old_field == NULL)
          {
            extraValidPhoneNumberAppendPair(key, new_component);
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
        if (flagHasContactName)
          {
            handler->start_pair("ContactName");
            handler->string_value(storeContactName);
          }
        if (flagHasLabel)
          {
            handler->start_pair("Label");
            handler->string_value(storeLabel);
          }
        if (flagHasContactID)
          {
            handler->start_pair("ContactID");
            handler->string_value(storeContactID);
          }
        assert(flagHasPhoneNumber);
        handler->start_pair("PhoneNumber");
        handler->string_value(storePhoneNumber);
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasPhoneNumber()))
          {
            return "When parsing the object for %what%, the \"PhoneNumber\" field was missing.";
          }
        return NULL;
      }

    static ValidPhoneNumberJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static ValidPhoneNumberJSON *from_text(const char *text, bool ignore_extras = false)
      {
        ValidPhoneNumberJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<ValidPhoneNumberJSON>, ValidPhoneNumberJSON *, bool> generator("Type ValidPhoneNumber", ignore_extras);
            parse_json_value(text, "Text for ValidPhoneNumberJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static ValidPhoneNumberJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        ValidPhoneNumberJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<ValidPhoneNumberJSON>, ValidPhoneNumberJSON *, bool> generator("Type ValidPhoneNumber", ignore_extras);
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
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorLabel;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorContactID;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorPhoneNumber;
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
            ValidPhoneNumberJSON *result = new ValidPhoneNumberJSON();
            assert(result != NULL);
            RCHandle<ValidPhoneNumberJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraValidPhoneNumberAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void finish(ValidPhoneNumberJSON *result)
          {
            if (fieldGeneratorContactName.have_value)
              {
                result->setContactName(fieldGeneratorContactName.value);
                fieldGeneratorContactName.have_value = false;
              }
            if (fieldGeneratorLabel.have_value)
              {
                result->setLabel(fieldGeneratorLabel.value);
                fieldGeneratorLabel.have_value = false;
              }
            if (fieldGeneratorContactID.have_value)
              {
                result->setContactID(fieldGeneratorContactID.value);
                fieldGeneratorContactID.have_value = false;
              }
            if (fieldGeneratorPhoneNumber.have_value)
              {
                result->setPhoneNumber(fieldGeneratorPhoneNumber.value);
                fieldGeneratorPhoneNumber.have_value = false;
              }
            else if (!(result->hasPhoneNumber()))
              {
                error("When parsing the object for %what%, the \"PhoneNumber\" field was missing.");
              }
          }
        virtual void handle_result(ValidPhoneNumberJSON *new_result) = 0;
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
                case 'L':
                    if (strcmp(&(field_name[1]), "abel") == 0)
                        return &fieldGeneratorLabel;
                    break;
                case 'P':
                    if (strcmp(&(field_name[1]), "honeNumber") == 0)
                        return &fieldGeneratorPhoneNumber;
                    break;
                default:
                    break;
              }
            return NULL;
          }

      public:
        Generator(bool ignore_extras = false) : fieldGeneratorContactName("field \"ContactName\" of the ValidPhoneNumber class"), fieldGeneratorLabel("field \"Label\" of the ValidPhoneNumber class"), fieldGeneratorContactID("field \"ContactID\" of the ValidPhoneNumber class"), fieldGeneratorPhoneNumber("field \"PhoneNumber\" of the ValidPhoneNumber class"), unknownFieldGenerator(ignore_extras)
          {
            set_what("the ValidPhoneNumber class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorContactName.reset();
            fieldGeneratorLabel.reset();
            fieldGeneratorContactID.reset();
            fieldGeneratorPhoneNumber.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* VALIDPHONENUMBERJSON_H */
