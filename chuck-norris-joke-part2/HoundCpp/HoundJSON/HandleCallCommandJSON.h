/* file "HandleCallCommandJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef HANDLECALLCOMMANDJSON_H
#define HANDLECALLCOMMANDJSON_H

#pragma interface

#include "PhoneCommandJSON.h"
#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONStringGenerator.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class HandleCallCommandJSON : public PhoneCommandJSON
  {
  public:
    enum TypeAction
      {
        Action_Answer,
        Action_Reject,
        Action_Ignore
      };

    static TypeAction  stringToAction(const char *chars);
    static const char * stringFromAction(TypeAction the_enum);

  private:
    bool flagHasAction;
    TypeAction storeAction;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    HandleCallCommandJSON(const HandleCallCommandJSON &);
    HandleCallCommandJSON & operator=(const HandleCallCommandJSON &other);

    JSONValue * extraActionToJSON(void) const;

    void  fromJSONAction(JSONValue *json_value, bool ignore_extras = false);


  public:
    HandleCallCommandJSON(void);
    virtual ~HandleCallCommandJSON(void);
    const char * getPhoneCommandKind(void) const;
    bool  hasAction(void) const;
    TypeAction  getAction(void);
    const TypeAction  getAction(void) const;
    const char * getActionAsChars(void) const;
    std::string  getActionAsString(void) const;

    virtual size_t extraHandleCallCommandComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraHandleCallCommandComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraHandleCallCommandComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraHandleCallCommandComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraHandleCallCommandLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraHandleCallCommandLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    size_t extraPhoneCommandComponentCount(void) const
      {
        size_t result = 0;
        if (flagHasAction)
            ++result;
        result += extraHandleCallCommandComponentCount();
        return result;
      }
    const char *extraPhoneCommandComponentKey(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasAction)
          {
            if (remainder == 0)
                return "Action";
            --remainder;
          }
        return extraHandleCallCommandComponentKey(remainder);
      }
    JSONValue *extraPhoneCommandComponentValue(size_t component_num)
      {
        size_t remainder = component_num;
        if (flagHasAction)
          {
            if (remainder == 0)
                return extraActionToJSON();
            --remainder;
          }
        return extraHandleCallCommandComponentValue(remainder);
      }
    const JSONValue *extraPhoneCommandComponentValue(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasAction)
          {
            if (remainder == 0)
                return extraActionToJSON();
            --remainder;
          }
        return extraHandleCallCommandComponentValue(remainder);
      }
    JSONValue *extraPhoneCommandLookup(const char *field_name)
      {
        if (strcmp(field_name, "Action") == 0)
            return (flagHasAction ? extraActionToJSON() : NULL);
        return extraHandleCallCommandLookup(field_name);
      }
    const JSONValue *extraPhoneCommandLookup(const char *field_name) const
      {
        if (strcmp(field_name, "Action") == 0)
            return (flagHasAction ? extraActionToJSON() : NULL);
        return extraHandleCallCommandLookup(field_name);
      }

    void setAction(TypeAction new_value)
      {
        flagHasAction = true;
        storeAction = new_value;
      }
    void setAction(const char *chars)
      {
        setAction(stringToAction(chars));
      }
    void setAction(std::string the_string)
      {
        setAction(stringToAction(the_string.c_str()));
      }
    void unsetAction(void)
      {
        flagHasAction = false;
      }

    virtual void extraHandleCallCommandAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraHandleCallCommandSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraHandleCallCommandLookup(key);
        if (old_field == NULL)
          {
            extraHandleCallCommandAppendPair(key, new_component);
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
    void extraPhoneCommandAppendPair(const char *key, JSONValue *new_component)
      {
        if (strcmp(key, "Action") == 0)
            {
            fromJSONAction(new_component, false);
            return;
            }
        extraHandleCallCommandAppendPair(key, new_component);
      }
    void extraPhoneCommandSetField(const char *key, JSONValue *new_component)
      {
        if (strcmp(key, "Action") == 0)
            {
            fromJSONAction(new_component, false);
            return;
            }
        extraHandleCallCommandSetField(key, new_component);
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
        PhoneCommandJSON::write_fields_as_json(handler);
        assert(flagHasAction);
        handler->start_pair("Action");
        switch (storeAction)
          {
            case Action_Answer:
                handler->string_value("Answer");
                break;
            case Action_Reject:
                handler->string_value("Reject");
                break;
            case Action_Ignore:
                handler->string_value("Ignore");
                break;
            default:
                assert(false);
          }
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasAction()))
          {
            return "When parsing the object for %what%, the \"Action\" field was missing.";
          }
        return NULL;
      }

    static HandleCallCommandJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static HandleCallCommandJSON *from_text(const char *text, bool ignore_extras = false)
      {
        HandleCallCommandJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<HandleCallCommandJSON>, HandleCallCommandJSON *, bool> generator("Type HandleCallCommand", ignore_extras);
            parse_json_value(text, "Text for HandleCallCommandJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static HandleCallCommandJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        HandleCallCommandJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<HandleCallCommandJSON>, HandleCallCommandJSON *, bool> generator("Type HandleCallCommand", ignore_extras);
            parse_json_value(fp, file_name, &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    class Generator : public PhoneCommandJSON::Generator
      {
      private:
    class FieldGeneratorAction : public JSONStringGenerator
          {
          protected:
            FieldGeneratorAction(const char *what)
              {
                set_what(what);
              }
            FieldGeneratorAction(void)
              {
              }
            void handle_result(const char *result)
              {
                handle_result(stringToAction(result));
              }
            virtual void handle_result(TypeAction result) = 0;
          };
        JSONHoldingGenerator<FieldGeneratorAction, TypeAction, TypeAction > fieldGeneratorAction;
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
            if (!(strcmp(getPhoneCommandJSONKey().c_str(), "HandleCall") == 0))
                throw("The key field has a value other than `HandleCall'.");
            HandleCallCommandJSON *result = new HandleCallCommandJSON();
            assert(result != NULL);
            RCHandle<HandleCallCommandJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraHandleCallCommandAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void handle_result(PhoneCommandJSON *new_result)
          {
            handle_result((HandleCallCommandJSON *)new_result);
          }
        void finish(HandleCallCommandJSON *result)
          {
            if (fieldGeneratorAction.have_value)
              {
                result->setAction(fieldGeneratorAction.value);
                fieldGeneratorAction.have_value = false;
              }
            else if (!(result->hasAction()))
              {
                error("When parsing the object for %what%, the \"Action\" field was missing.");
              }
            PhoneCommandJSON::Generator::finish(result);
          }
        virtual void handle_result(HandleCallCommandJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            if (strcmp(field_name, "Action") == 0)
                return &fieldGeneratorAction;
            return PhoneCommandJSON::Generator::start_known_field(field_name);
          }

      public:
        Generator(bool ignore_extras = false) : PhoneCommandJSON::Generator(ignore_extras), fieldGeneratorAction("field \"Action\" of the HandleCallCommand class"), unknownFieldGenerator(ignore_extras)
          {
            set_what("the HandleCallCommand class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorAction.reset();
            PhoneCommandJSON::Generator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* HANDLECALLCOMMANDJSON_H */
