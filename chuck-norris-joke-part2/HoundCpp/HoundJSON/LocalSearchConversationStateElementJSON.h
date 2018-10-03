/* file "LocalSearchConversationStateElementJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef LOCALSEARCHCONVERSATIONSTATEELEMENTJSON_H
#define LOCALSEARCHCONVERSATIONSTATEELEMENTJSON_H

#pragma interface

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


class LocalSearchConversationStateElementJSON : public ReferenceCounted
  {
  private:

    LocalSearchConversationStateElementJSON(const LocalSearchConversationStateElementJSON &);
    LocalSearchConversationStateElementJSON & operator=(const LocalSearchConversationStateElementJSON &other);

  public:
    LocalSearchConversationStateElementJSON(void);
    virtual ~LocalSearchConversationStateElementJSON(void);
    virtual const char *getLocalSearchKind(void) const = 0;

    virtual size_t extraLocalSearchConversationStateElementComponentCount(void) const = 0;
    virtual const char *extraLocalSearchConversationStateElementComponentKey(size_t component_num) const = 0;
    virtual JSONValue *extraLocalSearchConversationStateElementComponentValue(size_t component_num) = 0;
    virtual const JSONValue *extraLocalSearchConversationStateElementComponentValue(size_t component_num) const = 0;
    virtual JSONValue *extraLocalSearchConversationStateElementLookup(const char *field_name) = 0;
    virtual const JSONValue *extraLocalSearchConversationStateElementLookup(const char *field_name) const = 0;


    virtual void extraLocalSearchConversationStateElementAppendPair(const char *key, JSONValue *new_component) = 0;
    virtual void extraLocalSearchConversationStateElementSetField(const char *key, JSONValue *new_component) = 0;

    virtual void write_as_json(JSONHandler *handler) const
      {
        handler->start_object();
        write_fields_as_json(handler);
        handler->finish_object();
      }

    virtual void write_fields_as_json(JSONHandler *handler) const
      {
        handler->pair("LocalSearchKind", getLocalSearchKind());
      }
    virtual const char *missing_field_error(void) const
      {
        return NULL;
      }

    static LocalSearchConversationStateElementJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static LocalSearchConversationStateElementJSON *from_text(const char *text, bool ignore_extras = false)
      {
        LocalSearchConversationStateElementJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<LocalSearchConversationStateElementJSON>, LocalSearchConversationStateElementJSON *, bool> generator("Type LocalSearchConversationStateElement", ignore_extras);
            parse_json_value(text, "Text for LocalSearchConversationStateElementJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static LocalSearchConversationStateElementJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        LocalSearchConversationStateElementJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<LocalSearchConversationStateElementJSON>, LocalSearchConversationStateElementJSON *, bool> generator("Type LocalSearchConversationStateElement", ignore_extras);
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
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char *> keyGenerator;


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
            if (!(keyGenerator.have_value))
                throw("The `LocalSearchKind' field is missing.");
            LocalSearchConversationStateElementJSON *result = createForKey(keyGenerator.value.c_str(), unknownFieldGenerator.index);
            assert(result != NULL);
            RCHandle<LocalSearchConversationStateElementJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraLocalSearchConversationStateElementAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            const char *missing_field_error = result->missing_field_error();
            if (missing_field_error != NULL)
                error(missing_field_error);
            handle_result(result);
          }
        std::string getLocalSearchConversationStateElementJSONKey(void)
          {
            if (!(keyGenerator.have_value))
                throw("The `LocalSearchKind' field is missing.");
            return keyGenerator.value;
          }
        void finish(LocalSearchConversationStateElementJSON *result)
          {
          }
        virtual void handle_result(LocalSearchConversationStateElementJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            if (strcmp(field_name, "LocalSearchKind") == 0)
                {
                keyGenerator.reset();
                return &keyGenerator;
                }
            return NULL;
          }

      public:
        Generator(bool ignore_extras = false) : unknownFieldGenerator(ignore_extras), keyGenerator("key field \"LocalSearchKind\" of the LocalSearchConversationStateElement class")
          {
            set_what("the LocalSearchConversationStateElement class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
    static LocalSearchConversationStateElementJSON *createForKey(const char *key, string_index *other_field_index);
  };

#endif /* LOCALSEARCHCONVERSATIONSTATEELEMENTJSON_H */
