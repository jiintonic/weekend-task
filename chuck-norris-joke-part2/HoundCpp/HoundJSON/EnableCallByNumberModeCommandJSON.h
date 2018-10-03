/* file "EnableCallByNumberModeCommandJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef ENABLECALLBYNUMBERMODECOMMANDJSON_H
#define ENABLECALLBYNUMBERMODECOMMANDJSON_H

#pragma interface

#include "PhoneCommandJSON.h"
#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class EnableCallByNumberModeCommandJSON : public PhoneCommandJSON
  {
  private:
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    EnableCallByNumberModeCommandJSON(const EnableCallByNumberModeCommandJSON &);
    EnableCallByNumberModeCommandJSON & operator=(const EnableCallByNumberModeCommandJSON &other);

  public:
    EnableCallByNumberModeCommandJSON(void);
    virtual ~EnableCallByNumberModeCommandJSON(void);
    const char * getPhoneCommandKind(void) const;

    virtual size_t extraEnableCallByNumberModeCommandComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraEnableCallByNumberModeCommandComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraEnableCallByNumberModeCommandComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraEnableCallByNumberModeCommandComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraEnableCallByNumberModeCommandLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraEnableCallByNumberModeCommandLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    size_t extraPhoneCommandComponentCount(void) const
      {
        size_t result = 0;
        result += extraEnableCallByNumberModeCommandComponentCount();
        return result;
      }
    const char *extraPhoneCommandComponentKey(size_t component_num) const
      {
        return extraEnableCallByNumberModeCommandComponentKey(component_num);
      }
    JSONValue *extraPhoneCommandComponentValue(size_t component_num)
      {
        return extraEnableCallByNumberModeCommandComponentValue(component_num);
      }
    const JSONValue *extraPhoneCommandComponentValue(size_t component_num) const
      {
        return extraEnableCallByNumberModeCommandComponentValue(component_num);
      }
    JSONValue *extraPhoneCommandLookup(const char *field_name)
      {
        return extraEnableCallByNumberModeCommandLookup(field_name);
      }
    const JSONValue *extraPhoneCommandLookup(const char *field_name) const
      {
        return extraEnableCallByNumberModeCommandLookup(field_name);
      }


    virtual void extraEnableCallByNumberModeCommandAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraEnableCallByNumberModeCommandSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraEnableCallByNumberModeCommandLookup(key);
        if (old_field == NULL)
          {
            extraEnableCallByNumberModeCommandAppendPair(key, new_component);
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
        extraEnableCallByNumberModeCommandAppendPair(key, new_component);
      }
    void extraPhoneCommandSetField(const char *key, JSONValue *new_component)
      {
        extraEnableCallByNumberModeCommandSetField(key, new_component);
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
      }
    virtual const char *missing_field_error(void) const
      {
        return NULL;
      }

    static EnableCallByNumberModeCommandJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static EnableCallByNumberModeCommandJSON *from_text(const char *text, bool ignore_extras = false)
      {
        EnableCallByNumberModeCommandJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<EnableCallByNumberModeCommandJSON>, EnableCallByNumberModeCommandJSON *, bool> generator("Type EnableCallByNumberModeCommand", ignore_extras);
            parse_json_value(text, "Text for EnableCallByNumberModeCommandJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static EnableCallByNumberModeCommandJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        EnableCallByNumberModeCommandJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<EnableCallByNumberModeCommandJSON>, EnableCallByNumberModeCommandJSON *, bool> generator("Type EnableCallByNumberModeCommand", ignore_extras);
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
            if (!(strcmp(getPhoneCommandJSONKey().c_str(), "EnableCallByNumberMode") == 0))
                throw("The key field has a value other than `EnableCallByNumberMode'.");
            EnableCallByNumberModeCommandJSON *result = new EnableCallByNumberModeCommandJSON();
            assert(result != NULL);
            RCHandle<EnableCallByNumberModeCommandJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraEnableCallByNumberModeCommandAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void handle_result(PhoneCommandJSON *new_result)
          {
            handle_result((EnableCallByNumberModeCommandJSON *)new_result);
          }
        void finish(EnableCallByNumberModeCommandJSON *result)
          {
            PhoneCommandJSON::Generator::finish(result);
          }
        virtual void handle_result(EnableCallByNumberModeCommandJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            return PhoneCommandJSON::Generator::start_known_field(field_name);
          }

      public:
        Generator(bool ignore_extras = false) : PhoneCommandJSON::Generator(ignore_extras), unknownFieldGenerator(ignore_extras)
          {
            set_what("the EnableCallByNumberModeCommand class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            PhoneCommandJSON::Generator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* ENABLECALLBYNUMBERMODECOMMANDJSON_H */
