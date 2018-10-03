/* file "AgeCalculatorCancelCommandJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef AGECALCULATORCANCELCOMMANDJSON_H
#define AGECALCULATORCANCELCOMMANDJSON_H

#pragma interface

#include "CommandResultJSON.h"
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


class AgeCalculatorCancelCommandJSON : public CommandResultJSON
  {
  private:

    AgeCalculatorCancelCommandJSON(const AgeCalculatorCancelCommandJSON &);
    AgeCalculatorCancelCommandJSON & operator=(const AgeCalculatorCancelCommandJSON &other);

  public:
    AgeCalculatorCancelCommandJSON(void);
    virtual ~AgeCalculatorCancelCommandJSON(void);
    const char * getCommandKind(void) const;

    size_t extraCommandResultComponentCount(void) const
      {
        size_t result = 0;
        return result;
      }
    const char *extraCommandResultComponentKey(size_t component_num) const
      {
        assert(false);
        return NULL;
      }
    JSONValue *extraCommandResultComponentValue(size_t component_num)
      {
        assert(false);
        return NULL;
      }
    const JSONValue *extraCommandResultComponentValue(size_t component_num) const
      {
        assert(false);
        return NULL;
      }
    JSONValue *extraCommandResultLookup(const char *field_name)
      {
        return NULL;
      }
    const JSONValue *extraCommandResultLookup(const char *field_name) const
      {
        return NULL;
      }


    void extraCommandResultAppendPair(const char *key, JSONValue *new_component)
      {
      }
    void extraCommandResultSetField(const char *key, JSONValue *new_component)
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
        CommandResultJSON::write_fields_as_json(handler);
      }
    virtual const char *missing_field_error(void) const
      {
        return NULL;
      }

    static AgeCalculatorCancelCommandJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static AgeCalculatorCancelCommandJSON *from_text(const char *text, bool ignore_extras = false)
      {
        AgeCalculatorCancelCommandJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<AgeCalculatorCancelCommandJSON>, AgeCalculatorCancelCommandJSON *, bool> generator("Type AgeCalculatorCancelCommand", ignore_extras);
            parse_json_value(text, "Text for AgeCalculatorCancelCommandJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static AgeCalculatorCancelCommandJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        AgeCalculatorCancelCommandJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<AgeCalculatorCancelCommandJSON>, AgeCalculatorCancelCommandJSON *, bool> generator("Type AgeCalculatorCancelCommand", ignore_extras);
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
            if (!(strcmp(getCommandResultJSONKey().c_str(), "AgeCalculatorCancelCommand") == 0))
                throw("The key field has a value other than `AgeCalculatorCancelCommand'.");
            AgeCalculatorCancelCommandJSON *result = new AgeCalculatorCancelCommandJSON();
            assert(result != NULL);
            RCHandle<AgeCalculatorCancelCommandJSON> result_holder = result;
            finish(result);
            handle_result(result);
          }
        void handle_result(CommandResultJSON *new_result)
          {
            handle_result((AgeCalculatorCancelCommandJSON *)new_result);
          }
        void finish(AgeCalculatorCancelCommandJSON *result)
          {
            CommandResultJSON::Generator::finish(result);
          }
        virtual void handle_result(AgeCalculatorCancelCommandJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            return CommandResultJSON::Generator::start_known_field(field_name);
          }

      public:
        Generator(bool ignore_extras = false) : CommandResultJSON::Generator(ignore_extras)
          {
            set_what("the AgeCalculatorCancelCommand class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            CommandResultJSON::Generator::reset();
          }
      };
  };

#endif /* AGECALCULATORCANCELCOMMANDJSON_H */
