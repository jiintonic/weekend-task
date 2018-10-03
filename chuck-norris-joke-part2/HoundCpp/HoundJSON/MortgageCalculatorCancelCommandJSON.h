/* file "MortgageCalculatorCancelCommandJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef MORTGAGECALCULATORCANCELCOMMANDJSON_H
#define MORTGAGECALCULATORCANCELCOMMANDJSON_H

#pragma interface

#include "MortgageCalculatorCommandJSON.h"
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


class MortgageCalculatorCancelCommandJSON : public MortgageCalculatorCommandJSON
  {
  private:

    MortgageCalculatorCancelCommandJSON(const MortgageCalculatorCancelCommandJSON &);
    MortgageCalculatorCancelCommandJSON & operator=(const MortgageCalculatorCancelCommandJSON &other);

  public:
    MortgageCalculatorCancelCommandJSON(void);
    virtual ~MortgageCalculatorCancelCommandJSON(void);
    const char * getMortgageCalculatorCommandKind(void) const;

    size_t extraMortgageCalculatorCommandComponentCount(void) const
      {
        size_t result = 0;
        return result;
      }
    const char *extraMortgageCalculatorCommandComponentKey(size_t component_num) const
      {
        assert(false);
        return NULL;
      }
    JSONValue *extraMortgageCalculatorCommandComponentValue(size_t component_num)
      {
        assert(false);
        return NULL;
      }
    const JSONValue *extraMortgageCalculatorCommandComponentValue(size_t component_num) const
      {
        assert(false);
        return NULL;
      }
    JSONValue *extraMortgageCalculatorCommandLookup(const char *field_name)
      {
        return NULL;
      }
    const JSONValue *extraMortgageCalculatorCommandLookup(const char *field_name) const
      {
        return NULL;
      }


    void extraMortgageCalculatorCommandAppendPair(const char *key, JSONValue *new_component)
      {
      }
    void extraMortgageCalculatorCommandSetField(const char *key, JSONValue *new_component)
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
        MortgageCalculatorCommandJSON::write_fields_as_json(handler);
      }
    virtual const char *missing_field_error(void) const
      {
        return NULL;
      }

    static MortgageCalculatorCancelCommandJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static MortgageCalculatorCancelCommandJSON *from_text(const char *text, bool ignore_extras = false)
      {
        MortgageCalculatorCancelCommandJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<MortgageCalculatorCancelCommandJSON>, MortgageCalculatorCancelCommandJSON *, bool> generator("Type MortgageCalculatorCancelCommand", ignore_extras);
            parse_json_value(text, "Text for MortgageCalculatorCancelCommandJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static MortgageCalculatorCancelCommandJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        MortgageCalculatorCancelCommandJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<MortgageCalculatorCancelCommandJSON>, MortgageCalculatorCancelCommandJSON *, bool> generator("Type MortgageCalculatorCancelCommand", ignore_extras);
            parse_json_value(fp, file_name, &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    class Generator : public MortgageCalculatorCommandJSON::Generator
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
            if (!(strcmp(getMortgageCalculatorCommandJSONKey().c_str(), "MortgageCalculatorCancelCommand") == 0))
                throw("The key field has a value other than `MortgageCalculatorCancelCommand'.");
            MortgageCalculatorCancelCommandJSON *result = new MortgageCalculatorCancelCommandJSON();
            assert(result != NULL);
            RCHandle<MortgageCalculatorCancelCommandJSON> result_holder = result;
            finish(result);
            handle_result(result);
          }
        void handle_result(MortgageCalculatorCommandJSON *new_result)
          {
            handle_result((MortgageCalculatorCancelCommandJSON *)new_result);
          }
        void finish(MortgageCalculatorCancelCommandJSON *result)
          {
            MortgageCalculatorCommandJSON::Generator::finish(result);
          }
        virtual void handle_result(MortgageCalculatorCancelCommandJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            return MortgageCalculatorCommandJSON::Generator::start_known_field(field_name);
          }

      public:
        Generator(bool ignore_extras = false) : MortgageCalculatorCommandJSON::Generator(ignore_extras)
          {
            set_what("the MortgageCalculatorCancelCommand class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            MortgageCalculatorCommandJSON::Generator::reset();
          }
      };
  };

#endif /* MORTGAGECALCULATORCANCELCOMMANDJSON_H */
