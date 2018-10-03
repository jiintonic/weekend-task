/* file "HangmanQuitGameCommandJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef HANGMANQUITGAMECOMMANDJSON_H
#define HANGMANQUITGAMECOMMANDJSON_H

#pragma interface

#include "HangmanCommandJSON.h"
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


class HangmanQuitGameCommandJSON : public HangmanCommandJSON
  {
  private:
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    HangmanQuitGameCommandJSON(const HangmanQuitGameCommandJSON &);
    HangmanQuitGameCommandJSON & operator=(const HangmanQuitGameCommandJSON &other);

  public:
    HangmanQuitGameCommandJSON(void);
    virtual ~HangmanQuitGameCommandJSON(void);
    const char * getHangmanCommandKind(void) const;

    virtual size_t extraHangmanQuitGameCommandComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraHangmanQuitGameCommandComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraHangmanQuitGameCommandComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraHangmanQuitGameCommandComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraHangmanQuitGameCommandLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraHangmanQuitGameCommandLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    size_t extraHangmanCommandComponentCount(void) const
      {
        size_t result = 0;
        result += extraHangmanQuitGameCommandComponentCount();
        return result;
      }
    const char *extraHangmanCommandComponentKey(size_t component_num) const
      {
        return extraHangmanQuitGameCommandComponentKey(component_num);
      }
    JSONValue *extraHangmanCommandComponentValue(size_t component_num)
      {
        return extraHangmanQuitGameCommandComponentValue(component_num);
      }
    const JSONValue *extraHangmanCommandComponentValue(size_t component_num) const
      {
        return extraHangmanQuitGameCommandComponentValue(component_num);
      }
    JSONValue *extraHangmanCommandLookup(const char *field_name)
      {
        return extraHangmanQuitGameCommandLookup(field_name);
      }
    const JSONValue *extraHangmanCommandLookup(const char *field_name) const
      {
        return extraHangmanQuitGameCommandLookup(field_name);
      }


    virtual void extraHangmanQuitGameCommandAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraHangmanQuitGameCommandSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraHangmanQuitGameCommandLookup(key);
        if (old_field == NULL)
          {
            extraHangmanQuitGameCommandAppendPair(key, new_component);
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
    void extraHangmanCommandAppendPair(const char *key, JSONValue *new_component)
      {
        extraHangmanQuitGameCommandAppendPair(key, new_component);
      }
    void extraHangmanCommandSetField(const char *key, JSONValue *new_component)
      {
        extraHangmanQuitGameCommandSetField(key, new_component);
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
        HangmanCommandJSON::write_fields_as_json(handler);
      }
    virtual const char *missing_field_error(void) const
      {
        return NULL;
      }

    static HangmanQuitGameCommandJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static HangmanQuitGameCommandJSON *from_text(const char *text, bool ignore_extras = false)
      {
        HangmanQuitGameCommandJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<HangmanQuitGameCommandJSON>, HangmanQuitGameCommandJSON *, bool> generator("Type HangmanQuitGameCommand", ignore_extras);
            parse_json_value(text, "Text for HangmanQuitGameCommandJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static HangmanQuitGameCommandJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        HangmanQuitGameCommandJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<HangmanQuitGameCommandJSON>, HangmanQuitGameCommandJSON *, bool> generator("Type HangmanQuitGameCommand", ignore_extras);
            parse_json_value(fp, file_name, &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    class Generator : public HangmanCommandJSON::Generator
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
            if (!(strcmp(getHangmanCommandJSONKey().c_str(), "HangmanQuitGameCommand") == 0))
                throw("The key field has a value other than `HangmanQuitGameCommand'.");
            HangmanQuitGameCommandJSON *result = new HangmanQuitGameCommandJSON();
            assert(result != NULL);
            RCHandle<HangmanQuitGameCommandJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraHangmanQuitGameCommandAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void handle_result(HangmanCommandJSON *new_result)
          {
            handle_result((HangmanQuitGameCommandJSON *)new_result);
          }
        void finish(HangmanQuitGameCommandJSON *result)
          {
            HangmanCommandJSON::Generator::finish(result);
          }
        virtual void handle_result(HangmanQuitGameCommandJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            return HangmanCommandJSON::Generator::start_known_field(field_name);
          }

      public:
        Generator(bool ignore_extras = false) : HangmanCommandJSON::Generator(ignore_extras), unknownFieldGenerator(ignore_extras)
          {
            set_what("the HangmanQuitGameCommand class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            HangmanCommandJSON::Generator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* HANGMANQUITGAMECOMMANDJSON_H */
