/* file "GamesMenuCommandJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef GAMESMENUCOMMANDJSON_H
#define GAMESMENUCOMMANDJSON_H

#pragma interface

#include "CommandResultJSON.h"
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


class GamesMenuCommandJSON : public CommandResultJSON
  {
  private:

    GamesMenuCommandJSON(const GamesMenuCommandJSON &);
    GamesMenuCommandJSON & operator=(const GamesMenuCommandJSON &other);

  public:
    GamesMenuCommandJSON(void);
    virtual ~GamesMenuCommandJSON(void);
    const char * getCommandKind(void) const;
    virtual const char *getGamesMenuCommandKind(void) const = 0;

    virtual size_t extraGamesMenuCommandComponentCount(void) const = 0;
    virtual const char *extraGamesMenuCommandComponentKey(size_t component_num) const = 0;
    virtual JSONValue *extraGamesMenuCommandComponentValue(size_t component_num) = 0;
    virtual const JSONValue *extraGamesMenuCommandComponentValue(size_t component_num) const = 0;
    virtual JSONValue *extraGamesMenuCommandLookup(const char *field_name) = 0;
    virtual const JSONValue *extraGamesMenuCommandLookup(const char *field_name) const = 0;
    size_t extraCommandResultComponentCount(void) const
      {
        size_t result = 1;
        result += extraGamesMenuCommandComponentCount();
        return result;
      }
    const char *extraCommandResultComponentKey(size_t component_num) const
      {
        if (component_num == 0)
            return "GamesMenuCommandKind";
        return extraGamesMenuCommandComponentKey((component_num - 1));
      }
    JSONValue *extraCommandResultComponentValue(size_t component_num)
      {
        if (component_num == 0)
            return new JSONStringValue(getGamesMenuCommandKind());
        return extraGamesMenuCommandComponentValue((component_num - 1));
      }
    const JSONValue *extraCommandResultComponentValue(size_t component_num) const
      {
        if (component_num == 0)
            return new JSONStringValue(getGamesMenuCommandKind());
        return extraGamesMenuCommandComponentValue((component_num - 1));
      }
    JSONValue *extraCommandResultLookup(const char *field_name)
      {
        if (strcmp(field_name, "GamesMenuCommandKind") == 0)
            return new JSONStringValue(getGamesMenuCommandKind());
        return extraGamesMenuCommandLookup(field_name);
      }
    const JSONValue *extraCommandResultLookup(const char *field_name) const
      {
        if (strcmp(field_name, "GamesMenuCommandKind") == 0)
            return new JSONStringValue(getGamesMenuCommandKind());
        return extraGamesMenuCommandLookup(field_name);
      }


    virtual void extraGamesMenuCommandAppendPair(const char *key, JSONValue *new_component) = 0;
    virtual void extraGamesMenuCommandSetField(const char *key, JSONValue *new_component) = 0;
    void extraCommandResultAppendPair(const char *key, JSONValue *new_component)
      {
        if (strcmp(key, "GamesMenuCommandKind") == 0)
            return;
        extraGamesMenuCommandAppendPair(key, new_component);
      }
    void extraCommandResultSetField(const char *key, JSONValue *new_component)
      {
        if (strcmp(key, "GamesMenuCommandKind") == 0)
            return;
        extraGamesMenuCommandSetField(key, new_component);
      }

    virtual void write_as_json(JSONHandler *handler) const
      {
        handler->start_object();
        write_fields_as_json(handler);
        handler->finish_object();
      }

    virtual void write_fields_as_json(JSONHandler *handler) const
      {
        CommandResultJSON::write_fields_as_json(handler);
        handler->pair("GamesMenuCommandKind", getGamesMenuCommandKind());
      }
    virtual const char *missing_field_error(void) const
      {
        return NULL;
      }

    static GamesMenuCommandJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static GamesMenuCommandJSON *from_text(const char *text, bool ignore_extras = false)
      {
        GamesMenuCommandJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<GamesMenuCommandJSON>, GamesMenuCommandJSON *, bool> generator("Type GamesMenuCommand", ignore_extras);
            parse_json_value(text, "Text for GamesMenuCommandJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static GamesMenuCommandJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        GamesMenuCommandJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<GamesMenuCommandJSON>, GamesMenuCommandJSON *, bool> generator("Type GamesMenuCommand", ignore_extras);
            parse_json_value(fp, file_name, &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    class Generator : public CommandResultJSON::Generator
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
                throw("The `GamesMenuCommandKind' field is missing.");
            if (!(strcmp(getCommandResultJSONKey().c_str(), "GamesMenuCommand") == 0))
                throw("The key field has a value other than `GamesMenuCommand'.");
            GamesMenuCommandJSON *result = createForKey(keyGenerator.value.c_str(), unknownFieldGenerator.index);
            assert(result != NULL);
            RCHandle<GamesMenuCommandJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraGamesMenuCommandAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
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
        std::string getGamesMenuCommandJSONKey(void)
          {
            if (!(keyGenerator.have_value))
                throw("The `GamesMenuCommandKind' field is missing.");
            return keyGenerator.value;
          }
        void handle_result(CommandResultJSON *new_result)
          {
            handle_result((GamesMenuCommandJSON *)new_result);
          }
        void finish(GamesMenuCommandJSON *result)
          {
            CommandResultJSON::Generator::finish(result);
          }
        virtual void handle_result(GamesMenuCommandJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            if (strcmp(field_name, "GamesMenuCommandKind") == 0)
                {
                keyGenerator.reset();
                return &keyGenerator;
                }
            return CommandResultJSON::Generator::start_known_field(field_name);
          }

      public:
        Generator(bool ignore_extras = false) : CommandResultJSON::Generator(ignore_extras), unknownFieldGenerator(ignore_extras), keyGenerator("key field \"GamesMenuCommandKind\" of the GamesMenuCommand class")
          {
            set_what("the GamesMenuCommand class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            CommandResultJSON::Generator::reset();
            unknownFieldGenerator.reset();
          }
      };
    static GamesMenuCommandJSON *createForKey(const char *key, string_index *other_field_index);
  };

#endif /* GAMESMENUCOMMANDJSON_H */
