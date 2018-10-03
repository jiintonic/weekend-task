/* file "SportsGameGenericJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef SPORTSGAMEGENERICJSON_H
#define SPORTSGAMEGENERICJSON_H

#pragma interface

#include "SportsGameJSON.h"
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


class SportsGameGenericJSON : public SportsGameJSON
  {
  private:
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    SportsGameGenericJSON(const SportsGameGenericJSON &);
    SportsGameGenericJSON & operator=(const SportsGameGenericJSON &other);

  public:
    SportsGameGenericJSON(void);
    virtual ~SportsGameGenericJSON(void);
    const char * getSportsGameKind(void) const;

    virtual size_t extraSportsGameGenericComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraSportsGameGenericComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraSportsGameGenericComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraSportsGameGenericComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraSportsGameGenericLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraSportsGameGenericLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    size_t extraSportsGameComponentCount(void) const
      {
        size_t result = 0;
        result += extraSportsGameGenericComponentCount();
        return result;
      }
    const char *extraSportsGameComponentKey(size_t component_num) const
      {
        return extraSportsGameGenericComponentKey(component_num);
      }
    JSONValue *extraSportsGameComponentValue(size_t component_num)
      {
        return extraSportsGameGenericComponentValue(component_num);
      }
    const JSONValue *extraSportsGameComponentValue(size_t component_num) const
      {
        return extraSportsGameGenericComponentValue(component_num);
      }
    JSONValue *extraSportsGameLookup(const char *field_name)
      {
        return extraSportsGameGenericLookup(field_name);
      }
    const JSONValue *extraSportsGameLookup(const char *field_name) const
      {
        return extraSportsGameGenericLookup(field_name);
      }


    virtual void extraSportsGameGenericAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraSportsGameGenericSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraSportsGameGenericLookup(key);
        if (old_field == NULL)
          {
            extraSportsGameGenericAppendPair(key, new_component);
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
    void extraSportsGameAppendPair(const char *key, JSONValue *new_component)
      {
        extraSportsGameGenericAppendPair(key, new_component);
      }
    void extraSportsGameSetField(const char *key, JSONValue *new_component)
      {
        extraSportsGameGenericSetField(key, new_component);
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
        SportsGameJSON::write_fields_as_json(handler);
      }
    virtual const char *missing_field_error(void) const
      {
        return NULL;
      }

    static SportsGameGenericJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static SportsGameGenericJSON *from_text(const char *text, bool ignore_extras = false)
      {
        SportsGameGenericJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<SportsGameGenericJSON>, SportsGameGenericJSON *, bool> generator("Type SportsGameGeneric", ignore_extras);
            parse_json_value(text, "Text for SportsGameGenericJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static SportsGameGenericJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        SportsGameGenericJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<SportsGameGenericJSON>, SportsGameGenericJSON *, bool> generator("Type SportsGameGeneric", ignore_extras);
            parse_json_value(fp, file_name, &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    class Generator : public SportsGameJSON::Generator
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
            if (!(strcmp(getSportsGameJSONKey().c_str(), "Generic") == 0))
                throw("The key field has a value other than `Generic'.");
            SportsGameGenericJSON *result = new SportsGameGenericJSON();
            assert(result != NULL);
            RCHandle<SportsGameGenericJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraSportsGameGenericAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void handle_result(SportsGameJSON *new_result)
          {
            handle_result((SportsGameGenericJSON *)new_result);
          }
        void finish(SportsGameGenericJSON *result)
          {
            SportsGameJSON::Generator::finish(result);
          }
        virtual void handle_result(SportsGameGenericJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            return SportsGameJSON::Generator::start_known_field(field_name);
          }

      public:
        Generator(bool ignore_extras = false) : SportsGameJSON::Generator(ignore_extras), unknownFieldGenerator(ignore_extras)
          {
            set_what("the SportsGameGeneric class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            SportsGameJSON::Generator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* SPORTSGAMEGENERICJSON_H */
