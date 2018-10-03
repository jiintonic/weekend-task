/* file "SMSCreateContextFieldsJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef SMSCREATECONTEXTFIELDSJSON_H
#define SMSCREATECONTEXTFIELDSJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONStringGenerator.h"
#include "JSONBooleanGenerator.h"
#include <string>
#include "SMSRecipientsJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class SMSCreateContextFieldsJSON : public ReferenceCounted
  {
  private:
    bool flagHasNewRecipients;
    SMSRecipientsJSON * storeNewRecipients;
    bool flagHasNewBody;
    std::string storeNewBody;
    bool flagHasClearExistingSMS;
    bool storeClearExistingSMS;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    SMSCreateContextFieldsJSON(const SMSCreateContextFieldsJSON &);
    SMSCreateContextFieldsJSON & operator=(const SMSCreateContextFieldsJSON &other);

    void  fromJSONNewRecipients(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONNewBody(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONClearExistingSMS(JSONValue *json_value, bool ignore_extras = false);


  public:
    SMSCreateContextFieldsJSON(void);
    virtual ~SMSCreateContextFieldsJSON(void);
    bool  hasNewRecipients(void) const;
    SMSRecipientsJSON *  getNewRecipients(void);
    const SMSRecipientsJSON *  getNewRecipients(void) const;
    bool  hasNewBody(void) const;
    std::string  getNewBody(void);
    const std::string  getNewBody(void) const;
    bool  hasClearExistingSMS(void) const;
    bool  getClearExistingSMS(void);
    const bool  getClearExistingSMS(void) const;

    virtual size_t extraSMSCreateContextFieldsComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraSMSCreateContextFieldsComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraSMSCreateContextFieldsComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraSMSCreateContextFieldsComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraSMSCreateContextFieldsLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraSMSCreateContextFieldsLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }

    void setNewRecipients(SMSRecipientsJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasNewRecipients)
          {
            storeNewRecipients->remove_reference();
          }
        flagHasNewRecipients = true;
        storeNewRecipients = new_value;
      }
    void unsetNewRecipients(void)
      {
        if (flagHasNewRecipients)
          {
            storeNewRecipients->remove_reference();
          }
        flagHasNewRecipients = false;
      }
    void setNewBody(std::string new_value)
      {
        flagHasNewBody = true;
        storeNewBody = new_value;
      }
    void unsetNewBody(void)
      {
        flagHasNewBody = false;
      }
    void setClearExistingSMS(bool new_value)
      {
        flagHasClearExistingSMS = true;
        storeClearExistingSMS = new_value;
      }
    void unsetClearExistingSMS(void)
      {
        flagHasClearExistingSMS = false;
      }

    virtual void extraSMSCreateContextFieldsAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraSMSCreateContextFieldsSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraSMSCreateContextFieldsLookup(key);
        if (old_field == NULL)
          {
            extraSMSCreateContextFieldsAppendPair(key, new_component);
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
        assert(flagHasNewRecipients);
        handler->start_pair("NewRecipients");
        storeNewRecipients->write_as_json(handler);
        assert(flagHasNewBody);
        handler->start_pair("NewBody");
        handler->string_value(storeNewBody);
        assert(flagHasClearExistingSMS);
        handler->start_pair("ClearExistingSMS");
        handler->boolean_value(storeClearExistingSMS);
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasNewRecipients()))
          {
            return "When parsing the object for %what%, the \"NewRecipients\" field was missing.";
          }
        if (!(hasNewBody()))
          {
            return "When parsing the object for %what%, the \"NewBody\" field was missing.";
          }
        if (!(hasClearExistingSMS()))
          {
            return "When parsing the object for %what%, the \"ClearExistingSMS\" field was missing.";
          }
        return NULL;
      }

    static SMSCreateContextFieldsJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static SMSCreateContextFieldsJSON *from_text(const char *text, bool ignore_extras = false)
      {
        SMSCreateContextFieldsJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<SMSCreateContextFieldsJSON>, SMSCreateContextFieldsJSON *, bool> generator("Type SMSCreateContextFields", ignore_extras);
            parse_json_value(text, "Text for SMSCreateContextFieldsJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static SMSCreateContextFieldsJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        SMSCreateContextFieldsJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<SMSCreateContextFieldsJSON>, SMSCreateContextFieldsJSON *, bool> generator("Type SMSCreateContextFields", ignore_extras);
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
        JSONHoldingGenerator<SMSRecipientsJSON::Generator, RCHandle<SMSRecipientsJSON>, SMSRecipientsJSON *, bool > fieldGeneratorNewRecipients;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorNewBody;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorClearExistingSMS;
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
            SMSCreateContextFieldsJSON *result = new SMSCreateContextFieldsJSON();
            assert(result != NULL);
            RCHandle<SMSCreateContextFieldsJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraSMSCreateContextFieldsAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void finish(SMSCreateContextFieldsJSON *result)
          {
            if (fieldGeneratorNewRecipients.have_value)
              {
                result->setNewRecipients(fieldGeneratorNewRecipients.value.referenced());
                fieldGeneratorNewRecipients.have_value = false;
              }
            else if (!(result->hasNewRecipients()))
              {
                error("When parsing the object for %what%, the \"NewRecipients\" field was missing.");
              }
            if (fieldGeneratorNewBody.have_value)
              {
                result->setNewBody(fieldGeneratorNewBody.value);
                fieldGeneratorNewBody.have_value = false;
              }
            else if (!(result->hasNewBody()))
              {
                error("When parsing the object for %what%, the \"NewBody\" field was missing.");
              }
            if (fieldGeneratorClearExistingSMS.have_value)
              {
                result->setClearExistingSMS(fieldGeneratorClearExistingSMS.value);
                fieldGeneratorClearExistingSMS.have_value = false;
              }
            else if (!(result->hasClearExistingSMS()))
              {
                error("When parsing the object for %what%, the \"ClearExistingSMS\" field was missing.");
              }
          }
        virtual void handle_result(SMSCreateContextFieldsJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'C':
                    if (strcmp(&(field_name[1]), "learExistingSMS") == 0)
                        return &fieldGeneratorClearExistingSMS;
                    break;
                case 'N':
                    if (strncmp(&(field_name[1]), "ew", 2) == 0)
                      {
                        switch ((unsigned char)(field_name[3]))
                          {
                            case 'B':
                                if (strcmp(&(field_name[4]), "ody") == 0)
                                    return &fieldGeneratorNewBody;
                                break;
                            case 'R':
                                if (strcmp(&(field_name[4]), "ecipients") == 0)
                                    return &fieldGeneratorNewRecipients;
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
        Generator(bool ignore_extras = false) : fieldGeneratorNewRecipients("field \"NewRecipients\" of the SMSCreateContextFields class", ignore_extras), fieldGeneratorNewBody("field \"NewBody\" of the SMSCreateContextFields class"), fieldGeneratorClearExistingSMS("field \"ClearExistingSMS\" of the SMSCreateContextFields class"), unknownFieldGenerator(ignore_extras)
          {
            set_what("the SMSCreateContextFields class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorNewRecipients.reset();
            fieldGeneratorNewBody.reset();
            fieldGeneratorClearExistingSMS.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* SMSCREATECONTEXTFIELDSJSON_H */
