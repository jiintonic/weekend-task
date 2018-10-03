/* file "SMSEditRecipientsContextFieldsJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef SMSEDITRECIPIENTSCONTEXTFIELDSJSON_H
#define SMSEDITRECIPIENTSCONTEXTFIELDSJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "SMSRecipientsJSON.h"
#include "SMSRecipientsJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class SMSEditRecipientsContextFieldsJSON : public ReferenceCounted
  {
  private:
    bool flagHasAddRecipients;
    SMSRecipientsJSON * storeAddRecipients;
    bool flagHasRemoveRecipients;
    SMSRecipientsJSON * storeRemoveRecipients;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    SMSEditRecipientsContextFieldsJSON(const SMSEditRecipientsContextFieldsJSON &);
    SMSEditRecipientsContextFieldsJSON & operator=(const SMSEditRecipientsContextFieldsJSON &other);

    void  fromJSONAddRecipients(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONRemoveRecipients(JSONValue *json_value, bool ignore_extras = false);


  public:
    SMSEditRecipientsContextFieldsJSON(void);
    virtual ~SMSEditRecipientsContextFieldsJSON(void);
    bool  hasAddRecipients(void) const;
    SMSRecipientsJSON *  getAddRecipients(void);
    const SMSRecipientsJSON *  getAddRecipients(void) const;
    bool  hasRemoveRecipients(void) const;
    SMSRecipientsJSON *  getRemoveRecipients(void);
    const SMSRecipientsJSON *  getRemoveRecipients(void) const;

    virtual size_t extraSMSEditRecipientsContextFieldsComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraSMSEditRecipientsContextFieldsComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraSMSEditRecipientsContextFieldsComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraSMSEditRecipientsContextFieldsComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraSMSEditRecipientsContextFieldsLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraSMSEditRecipientsContextFieldsLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }

    void setAddRecipients(SMSRecipientsJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasAddRecipients)
          {
            storeAddRecipients->remove_reference();
          }
        flagHasAddRecipients = true;
        storeAddRecipients = new_value;
      }
    void unsetAddRecipients(void)
      {
        if (flagHasAddRecipients)
          {
            storeAddRecipients->remove_reference();
          }
        flagHasAddRecipients = false;
      }
    void setRemoveRecipients(SMSRecipientsJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasRemoveRecipients)
          {
            storeRemoveRecipients->remove_reference();
          }
        flagHasRemoveRecipients = true;
        storeRemoveRecipients = new_value;
      }
    void unsetRemoveRecipients(void)
      {
        if (flagHasRemoveRecipients)
          {
            storeRemoveRecipients->remove_reference();
          }
        flagHasRemoveRecipients = false;
      }

    virtual void extraSMSEditRecipientsContextFieldsAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraSMSEditRecipientsContextFieldsSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraSMSEditRecipientsContextFieldsLookup(key);
        if (old_field == NULL)
          {
            extraSMSEditRecipientsContextFieldsAppendPair(key, new_component);
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
        assert(flagHasAddRecipients);
        handler->start_pair("AddRecipients");
        storeAddRecipients->write_as_json(handler);
        assert(flagHasRemoveRecipients);
        handler->start_pair("RemoveRecipients");
        storeRemoveRecipients->write_as_json(handler);
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasAddRecipients()))
          {
            return "When parsing the object for %what%, the \"AddRecipients\" field was missing.";
          }
        if (!(hasRemoveRecipients()))
          {
            return "When parsing the object for %what%, the \"RemoveRecipients\" field was missing.";
          }
        return NULL;
      }

    static SMSEditRecipientsContextFieldsJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static SMSEditRecipientsContextFieldsJSON *from_text(const char *text, bool ignore_extras = false)
      {
        SMSEditRecipientsContextFieldsJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<SMSEditRecipientsContextFieldsJSON>, SMSEditRecipientsContextFieldsJSON *, bool> generator("Type SMSEditRecipientsContextFields", ignore_extras);
            parse_json_value(text, "Text for SMSEditRecipientsContextFieldsJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static SMSEditRecipientsContextFieldsJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        SMSEditRecipientsContextFieldsJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<SMSEditRecipientsContextFieldsJSON>, SMSEditRecipientsContextFieldsJSON *, bool> generator("Type SMSEditRecipientsContextFields", ignore_extras);
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
        JSONHoldingGenerator<SMSRecipientsJSON::Generator, RCHandle<SMSRecipientsJSON>, SMSRecipientsJSON *, bool > fieldGeneratorAddRecipients;
        JSONHoldingGenerator<SMSRecipientsJSON::Generator, RCHandle<SMSRecipientsJSON>, SMSRecipientsJSON *, bool > fieldGeneratorRemoveRecipients;
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
            SMSEditRecipientsContextFieldsJSON *result = new SMSEditRecipientsContextFieldsJSON();
            assert(result != NULL);
            RCHandle<SMSEditRecipientsContextFieldsJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraSMSEditRecipientsContextFieldsAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void finish(SMSEditRecipientsContextFieldsJSON *result)
          {
            if (fieldGeneratorAddRecipients.have_value)
              {
                result->setAddRecipients(fieldGeneratorAddRecipients.value.referenced());
                fieldGeneratorAddRecipients.have_value = false;
              }
            else if (!(result->hasAddRecipients()))
              {
                error("When parsing the object for %what%, the \"AddRecipients\" field was missing.");
              }
            if (fieldGeneratorRemoveRecipients.have_value)
              {
                result->setRemoveRecipients(fieldGeneratorRemoveRecipients.value.referenced());
                fieldGeneratorRemoveRecipients.have_value = false;
              }
            else if (!(result->hasRemoveRecipients()))
              {
                error("When parsing the object for %what%, the \"RemoveRecipients\" field was missing.");
              }
          }
        virtual void handle_result(SMSEditRecipientsContextFieldsJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'A':
                    if (strcmp(&(field_name[1]), "ddRecipients") == 0)
                        return &fieldGeneratorAddRecipients;
                    break;
                case 'R':
                    if (strcmp(&(field_name[1]), "emoveRecipients") == 0)
                        return &fieldGeneratorRemoveRecipients;
                    break;
                default:
                    break;
              }
            return NULL;
          }

      public:
        Generator(bool ignore_extras = false) : fieldGeneratorAddRecipients("field \"AddRecipients\" of the SMSEditRecipientsContextFields class", ignore_extras), fieldGeneratorRemoveRecipients("field \"RemoveRecipients\" of the SMSEditRecipientsContextFields class", ignore_extras), unknownFieldGenerator(ignore_extras)
          {
            set_what("the SMSEditRecipientsContextFields class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorAddRecipients.reset();
            fieldGeneratorRemoveRecipients.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* SMSEDITRECIPIENTSCONTEXTFIELDSJSON_H */
