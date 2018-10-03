/* file "HomeAutomationCommandErrorJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef HOMEAUTOMATIONCOMMANDERRORJSON_H
#define HOMEAUTOMATIONCOMMANDERRORJSON_H

#pragma interface

#include "CommandErrorJSON.h"
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


class HomeAutomationCommandErrorJSON : public CommandErrorJSON
  {
  private:

    HomeAutomationCommandErrorJSON(const HomeAutomationCommandErrorJSON &);
    HomeAutomationCommandErrorJSON & operator=(const HomeAutomationCommandErrorJSON &other);

  public:
    HomeAutomationCommandErrorJSON(void);
    virtual ~HomeAutomationCommandErrorJSON(void);
    const char * getErrorType(void) const;

    size_t extraCommandErrorComponentCount(void) const
      {
        size_t result = 0;
        return result;
      }
    const char *extraCommandErrorComponentKey(size_t component_num) const
      {
        assert(false);
        return NULL;
      }
    JSONValue *extraCommandErrorComponentValue(size_t component_num)
      {
        assert(false);
        return NULL;
      }
    const JSONValue *extraCommandErrorComponentValue(size_t component_num) const
      {
        assert(false);
        return NULL;
      }
    JSONValue *extraCommandErrorLookup(const char *field_name)
      {
        return NULL;
      }
    const JSONValue *extraCommandErrorLookup(const char *field_name) const
      {
        return NULL;
      }


    void extraCommandErrorAppendPair(const char *key, JSONValue *new_component)
      {
      }
    void extraCommandErrorSetField(const char *key, JSONValue *new_component)
      {
      }

    virtual void write_as_json(JSONHandler *handler) const
      {
        handler->start_object();
        write_fields_as_json(handler);
        handler->finish_object();
      }

    virtual void write_fields_as_json(JSONHandler *handler) const
      {
        CommandErrorJSON::write_fields_as_json(handler);
      }
    virtual const char *missing_field_error(void) const
      {
        return NULL;
      }

    static HomeAutomationCommandErrorJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static HomeAutomationCommandErrorJSON *from_text(const char *text, bool ignore_extras = false)
      {
        HomeAutomationCommandErrorJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<HomeAutomationCommandErrorJSON>, HomeAutomationCommandErrorJSON *, bool> generator("Type HomeAutomationCommandError", ignore_extras);
            parse_json_value(text, "Text for HomeAutomationCommandErrorJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static HomeAutomationCommandErrorJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        HomeAutomationCommandErrorJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<HomeAutomationCommandErrorJSON>, HomeAutomationCommandErrorJSON *, bool> generator("Type HomeAutomationCommandError", ignore_extras);
            parse_json_value(fp, file_name, &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    class Generator : public CommandErrorJSON::Generator
      {
      private:


      protected:
        void start(void)
          {
          }
        JSONHandler *start_field(const char *field_name)
          {
            JSONHandler *result = start_known_field(field_name);
            if (result != NULL)
                return result;
            std::string message("");
            message = message + "Field \"" + field_name + "\" found for a type that doesn't allow extra fields.";
            char *message_chars = (char *)(malloc(strlen(message.c_str()) + 1));
            strcpy(message_chars, message.c_str());
            throw(message_chars);
          }
        void finish_field(const char *field_name, JSONHandler *field_handler)
          {
          }
        void finish(void)
          {
            if (!(strcmp(getCommandErrorJSONKey().c_str(), "HomeAutomationCommandError") == 0))
                throw("The key field has a value other than `HomeAutomationCommandError'.");
            HomeAutomationCommandErrorJSON *result = new HomeAutomationCommandErrorJSON();
            assert(result != NULL);
            RCHandle<HomeAutomationCommandErrorJSON> result_holder = result;
            finish(result);
            handle_result(result);
          }
        void handle_result(CommandErrorJSON *new_result)
          {
            handle_result((HomeAutomationCommandErrorJSON *)new_result);
          }
        void finish(HomeAutomationCommandErrorJSON *result)
          {
            CommandErrorJSON::Generator::finish(result);
          }
        virtual void handle_result(HomeAutomationCommandErrorJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            return CommandErrorJSON::Generator::start_known_field(field_name);
          }

      public:
        Generator(bool ignore_extras = false) : CommandErrorJSON::Generator(ignore_extras)
          {
            set_what("the HomeAutomationCommandError class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            CommandErrorJSON::Generator::reset();
          }
      };
  };

#endif /* HOMEAUTOMATIONCOMMANDERRORJSON_H */
