/* file "ValidEmailJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef VALIDEMAILJSON_H
#define VALIDEMAILJSON_H

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


class ValidEmailJSON : public ReferenceCounted
  {
  private:
    bool flagHasContactName;
    std::string storeContactName;
    bool flagHasLabel;
    std::string storeLabel;
    bool flagHasContactID;
    std::string storeContactID;
    bool flagHasEmail;
    std::string storeEmail;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    ValidEmailJSON(const ValidEmailJSON &);
    ValidEmailJSON & operator=(const ValidEmailJSON &other);

    void  fromJSONContactName(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONLabel(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONContactID(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONEmail(JSONValue *json_value, bool ignore_extras = false);


  public:
    ValidEmailJSON(void);
    virtual ~ValidEmailJSON(void);
    bool  hasContactName(void) const;
    std::string  getContactName(void);
    const std::string  getContactName(void) const;
    bool  hasLabel(void) const;
    std::string  getLabel(void);
    const std::string  getLabel(void) const;
    bool  hasContactID(void) const;
    std::string  getContactID(void);
    const std::string  getContactID(void) const;
    bool  hasEmail(void) const;
    std::string  getEmail(void);
    const std::string  getEmail(void) const;

    virtual size_t extraValidEmailComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraValidEmailComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraValidEmailComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraValidEmailComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraValidEmailLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraValidEmailLookup(const char *field_name) const
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
    void setEmail(std::string new_value)
      {
        flagHasEmail = true;
        storeEmail = new_value;
      }
    void unsetEmail(void)
      {
        flagHasEmail = false;
      }

    virtual void extraValidEmailAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraValidEmailSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraValidEmailLookup(key);
        if (old_field == NULL)
          {
            extraValidEmailAppendPair(key, new_component);
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
        assert(flagHasEmail);
        handler->start_pair("Email");
        handler->string_value(storeEmail);
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasEmail()))
          {
            return "When parsing the object for %what%, the \"Email\" field was missing.";
          }
        return NULL;
      }

    static ValidEmailJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static ValidEmailJSON *from_text(const char *text, bool ignore_extras = false)
      {
        ValidEmailJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<ValidEmailJSON>, ValidEmailJSON *, bool> generator("Type ValidEmail", ignore_extras);
            parse_json_value(text, "Text for ValidEmailJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static ValidEmailJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        ValidEmailJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<ValidEmailJSON>, ValidEmailJSON *, bool> generator("Type ValidEmail", ignore_extras);
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
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorEmail;
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
            ValidEmailJSON *result = new ValidEmailJSON();
            assert(result != NULL);
            RCHandle<ValidEmailJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraValidEmailAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void finish(ValidEmailJSON *result)
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
        virtual void handle_result(ValidEmailJSON *new_result) = 0;
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
        Generator(bool ignore_extras = false) : fieldGeneratorContactName("field \"ContactName\" of the ValidEmail class"), fieldGeneratorLabel("field \"Label\" of the ValidEmail class"), fieldGeneratorContactID("field \"ContactID\" of the ValidEmail class"), fieldGeneratorEmail("field \"Email\" of the ValidEmail class"), unknownFieldGenerator(ignore_extras)
          {
            set_what("the ValidEmail class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorContactName.reset();
            fieldGeneratorLabel.reset();
            fieldGeneratorContactID.reset();
            fieldGeneratorEmail.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* VALIDEMAILJSON_H */
