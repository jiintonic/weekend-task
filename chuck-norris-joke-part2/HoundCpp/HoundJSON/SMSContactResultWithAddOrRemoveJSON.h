/* file "SMSContactResultWithAddOrRemoveJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef SMSCONTACTRESULTWITHADDORREMOVEJSON_H
#define SMSCONTACTRESULTWITHADDORREMOVEJSON_H

#pragma interface

#include "SMSContactResultJSON.h"
#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "SMSContactResultActionJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class SMSContactResultWithAddOrRemoveJSON : public SMSContactResultJSON
  {
  private:
    bool flagHasAction;
    SMSContactResultActionJSON * storeAction;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    SMSContactResultWithAddOrRemoveJSON(const SMSContactResultWithAddOrRemoveJSON &);
    SMSContactResultWithAddOrRemoveJSON & operator=(const SMSContactResultWithAddOrRemoveJSON &other);

    JSONValue * extraActionToJSON(void) const;

    void  fromJSONAction(JSONValue *json_value, bool ignore_extras = false);


  public:
    SMSContactResultWithAddOrRemoveJSON(void);
    virtual ~SMSContactResultWithAddOrRemoveJSON(void);
    bool  hasAction(void) const;
    SMSContactResultActionJSON *  getAction(void);
    const SMSContactResultActionJSON *  getAction(void) const;
    SMSContactResultActionJSON::TypeValue  getActionValue(void);
    const SMSContactResultActionJSON::TypeValue  getActionValue(void) const;
    const char * getActionAsChars(void) const;
    std::string  getActionAsString(void) const;

    virtual size_t extraSMSContactResultWithAddOrRemoveComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraSMSContactResultWithAddOrRemoveComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraSMSContactResultWithAddOrRemoveComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraSMSContactResultWithAddOrRemoveComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraSMSContactResultWithAddOrRemoveLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraSMSContactResultWithAddOrRemoveLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    size_t extraSMSContactResultComponentCount(void) const
      {
        size_t result = 0;
        if (flagHasAction)
            ++result;
        result += extraSMSContactResultWithAddOrRemoveComponentCount();
        return result;
      }
    const char *extraSMSContactResultComponentKey(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasAction)
          {
            if (remainder == 0)
                return "Action";
            --remainder;
          }
        return extraSMSContactResultWithAddOrRemoveComponentKey(remainder);
      }
    JSONValue *extraSMSContactResultComponentValue(size_t component_num)
      {
        size_t remainder = component_num;
        if (flagHasAction)
          {
            if (remainder == 0)
                return extraActionToJSON();
            --remainder;
          }
        return extraSMSContactResultWithAddOrRemoveComponentValue(remainder);
      }
    const JSONValue *extraSMSContactResultComponentValue(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasAction)
          {
            if (remainder == 0)
                return extraActionToJSON();
            --remainder;
          }
        return extraSMSContactResultWithAddOrRemoveComponentValue(remainder);
      }
    JSONValue *extraSMSContactResultLookup(const char *field_name)
      {
        if (strcmp(field_name, "Action") == 0)
            return (flagHasAction ? extraActionToJSON() : NULL);
        return extraSMSContactResultWithAddOrRemoveLookup(field_name);
      }
    const JSONValue *extraSMSContactResultLookup(const char *field_name) const
      {
        if (strcmp(field_name, "Action") == 0)
            return (flagHasAction ? extraActionToJSON() : NULL);
        return extraSMSContactResultWithAddOrRemoveLookup(field_name);
      }

    void setAction(SMSContactResultActionJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasAction)
          {
            storeAction->remove_reference();
          }
        flagHasAction = true;
        storeAction = new_value;
      }
    void setAction(SMSContactResultActionJSON::TypeValue new_value)
      {
        setAction(new SMSContactResultActionJSON(new_value));
      }
    void setAction(const char *chars)
      {
        setAction(new SMSContactResultActionJSON(chars));
      }
    void setAction(std::string the_string)
      {
        setAction(new SMSContactResultActionJSON(the_string));
      }
    void unsetAction(void)
      {
        if (flagHasAction)
          {
            storeAction->remove_reference();
          }
        flagHasAction = false;
      }

    virtual void extraSMSContactResultWithAddOrRemoveAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraSMSContactResultWithAddOrRemoveSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraSMSContactResultWithAddOrRemoveLookup(key);
        if (old_field == NULL)
          {
            extraSMSContactResultWithAddOrRemoveAppendPair(key, new_component);
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
    void extraSMSContactResultAppendPair(const char *key, JSONValue *new_component)
      {
        if (strcmp(key, "Action") == 0)
            {
            fromJSONAction(new_component, false);
            return;
            }
        extraSMSContactResultWithAddOrRemoveAppendPair(key, new_component);
      }
    void extraSMSContactResultSetField(const char *key, JSONValue *new_component)
      {
        if (strcmp(key, "Action") == 0)
            {
            fromJSONAction(new_component, false);
            return;
            }
        extraSMSContactResultWithAddOrRemoveSetField(key, new_component);
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
        SMSContactResultJSON::write_fields_as_json(handler);
        if (flagHasAction)
          {
            handler->start_pair("Action");
            storeAction->write_as_json(handler);
          }
      }
    virtual const char *missing_field_error(void) const
      {
        return NULL;
      }

    static SMSContactResultWithAddOrRemoveJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static SMSContactResultWithAddOrRemoveJSON *from_text(const char *text, bool ignore_extras = false)
      {
        SMSContactResultWithAddOrRemoveJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<SMSContactResultWithAddOrRemoveJSON>, SMSContactResultWithAddOrRemoveJSON *, bool> generator("Type SMSContactResultWithAddOrRemove", ignore_extras);
            parse_json_value(text, "Text for SMSContactResultWithAddOrRemoveJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static SMSContactResultWithAddOrRemoveJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        SMSContactResultWithAddOrRemoveJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<SMSContactResultWithAddOrRemoveJSON>, SMSContactResultWithAddOrRemoveJSON *, bool> generator("Type SMSContactResultWithAddOrRemove", ignore_extras);
            parse_json_value(fp, file_name, &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    class Generator : public SMSContactResultJSON::Generator
      {
      private:
        JSONHoldingGenerator<SMSContactResultActionJSON::Generator, RCHandle<SMSContactResultActionJSON>, SMSContactResultActionJSON *, bool > fieldGeneratorAction;
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
            SMSContactResultWithAddOrRemoveJSON *result = new SMSContactResultWithAddOrRemoveJSON();
            assert(result != NULL);
            RCHandle<SMSContactResultWithAddOrRemoveJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraSMSContactResultWithAddOrRemoveAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void handle_result(SMSContactResultJSON *new_result)
          {
            handle_result((SMSContactResultWithAddOrRemoveJSON *)new_result);
          }
        void finish(SMSContactResultWithAddOrRemoveJSON *result)
          {
            if (fieldGeneratorAction.have_value)
              {
                result->setAction(fieldGeneratorAction.value.referenced());
                fieldGeneratorAction.have_value = false;
              }
            SMSContactResultJSON::Generator::finish(result);
          }
        virtual void handle_result(SMSContactResultWithAddOrRemoveJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            if (strcmp(field_name, "Action") == 0)
                return &fieldGeneratorAction;
            return SMSContactResultJSON::Generator::start_known_field(field_name);
          }

      public:
        Generator(bool ignore_extras = false) : SMSContactResultJSON::Generator(ignore_extras), fieldGeneratorAction("field \"Action\" of the SMSContactResultWithAddOrRemove class", ignore_extras), unknownFieldGenerator(ignore_extras)
          {
            set_what("the SMSContactResultWithAddOrRemove class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorAction.reset();
            SMSContactResultJSON::Generator::reset();
            unknownFieldGenerator.reset();
          }
      };
    static SMSContactResultWithAddOrRemoveJSON *from_ContactResultJSON_json(const ContactResultJSON * ancestor, bool ignore_extras = false)
      {
        assert(ancestor != NULL);
        SMSContactResultWithAddOrRemoveJSON * result;
          {
            JSONHoldingGenerator<Generator, RCHandle<SMSContactResultWithAddOrRemoveJSON>, SMSContactResultWithAddOrRemoveJSON *, bool> handler("Type SMSContactResultWithAddOrRemove", ignore_extras);
            ancestor->write_as_json(&handler);
            result = handler.value.referenced();
            result->add_reference();
          }
        result->remove_reference_no_delete();
        return result;
      }
    static SMSContactResultWithAddOrRemoveJSON *from_SMSContactResultJSON_json(const SMSContactResultJSON * ancestor, bool ignore_extras = false)
      {
        assert(ancestor != NULL);
        SMSContactResultWithAddOrRemoveJSON * result;
          {
            JSONHoldingGenerator<Generator, RCHandle<SMSContactResultWithAddOrRemoveJSON>, SMSContactResultWithAddOrRemoveJSON *, bool> handler("Type SMSContactResultWithAddOrRemove", ignore_extras);
            ancestor->write_as_json(&handler);
            result = handler.value.referenced();
            result->add_reference();
          }
        result->remove_reference_no_delete();
        return result;
      }
  };

#endif /* SMSCONTACTRESULTWITHADDORREMOVEJSON_H */
