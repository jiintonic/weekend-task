/* file "DiscardSMSCommandJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef DISCARDSMSCOMMANDJSON_H
#define DISCARDSMSCOMMANDJSON_H

#pragma interface

#include "SMSCommandJSON.h"
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


class DiscardSMSCommandJSON : public SMSCommandJSON
  {
  private:
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    DiscardSMSCommandJSON(const DiscardSMSCommandJSON &);
    DiscardSMSCommandJSON & operator=(const DiscardSMSCommandJSON &other);

  public:
    DiscardSMSCommandJSON(void);
    virtual ~DiscardSMSCommandJSON(void);
    const char * getSMSCommandKind(void) const;

    virtual size_t extraDiscardSMSCommandComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraDiscardSMSCommandComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraDiscardSMSCommandComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraDiscardSMSCommandComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraDiscardSMSCommandLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraDiscardSMSCommandLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    size_t extraSMSCommandComponentCount(void) const
      {
        size_t result = 0;
        result += extraDiscardSMSCommandComponentCount();
        return result;
      }
    const char *extraSMSCommandComponentKey(size_t component_num) const
      {
        return extraDiscardSMSCommandComponentKey(component_num);
      }
    JSONValue *extraSMSCommandComponentValue(size_t component_num)
      {
        return extraDiscardSMSCommandComponentValue(component_num);
      }
    const JSONValue *extraSMSCommandComponentValue(size_t component_num) const
      {
        return extraDiscardSMSCommandComponentValue(component_num);
      }
    JSONValue *extraSMSCommandLookup(const char *field_name)
      {
        return extraDiscardSMSCommandLookup(field_name);
      }
    const JSONValue *extraSMSCommandLookup(const char *field_name) const
      {
        return extraDiscardSMSCommandLookup(field_name);
      }


    virtual void extraDiscardSMSCommandAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraDiscardSMSCommandSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraDiscardSMSCommandLookup(key);
        if (old_field == NULL)
          {
            extraDiscardSMSCommandAppendPair(key, new_component);
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
    void extraSMSCommandAppendPair(const char *key, JSONValue *new_component)
      {
        extraDiscardSMSCommandAppendPair(key, new_component);
      }
    void extraSMSCommandSetField(const char *key, JSONValue *new_component)
      {
        extraDiscardSMSCommandSetField(key, new_component);
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
        SMSCommandJSON::write_fields_as_json(handler);
      }
    virtual const char *missing_field_error(void) const
      {
        return NULL;
      }

    static DiscardSMSCommandJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static DiscardSMSCommandJSON *from_text(const char *text, bool ignore_extras = false)
      {
        DiscardSMSCommandJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<DiscardSMSCommandJSON>, DiscardSMSCommandJSON *, bool> generator("Type DiscardSMSCommand", ignore_extras);
            parse_json_value(text, "Text for DiscardSMSCommandJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static DiscardSMSCommandJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        DiscardSMSCommandJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<DiscardSMSCommandJSON>, DiscardSMSCommandJSON *, bool> generator("Type DiscardSMSCommand", ignore_extras);
            parse_json_value(fp, file_name, &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    class Generator : public SMSCommandJSON::Generator
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
            if (!(strcmp(getSMSCommandJSONKey().c_str(), "DiscardSMSCommand") == 0))
                throw("The key field has a value other than `DiscardSMSCommand'.");
            DiscardSMSCommandJSON *result = new DiscardSMSCommandJSON();
            assert(result != NULL);
            RCHandle<DiscardSMSCommandJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraDiscardSMSCommandAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void handle_result(SMSCommandJSON *new_result)
          {
            handle_result((DiscardSMSCommandJSON *)new_result);
          }
        void finish(DiscardSMSCommandJSON *result)
          {
            SMSCommandJSON::Generator::finish(result);
          }
        virtual void handle_result(DiscardSMSCommandJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            return SMSCommandJSON::Generator::start_known_field(field_name);
          }

      public:
        Generator(bool ignore_extras = false) : SMSCommandJSON::Generator(ignore_extras), unknownFieldGenerator(ignore_extras)
          {
            set_what("the DiscardSMSCommand class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            SMSCommandJSON::Generator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* DISCARDSMSCOMMANDJSON_H */
