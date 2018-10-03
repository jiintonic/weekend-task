/* file "NavigationCancelCommandJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef NAVIGATIONCANCELCOMMANDJSON_H
#define NAVIGATIONCANCELCOMMANDJSON_H

#pragma interface

#include "NavigationCommandJSON.h"
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


class NavigationCancelCommandJSON : public NavigationCommandJSON
  {
  private:

    NavigationCancelCommandJSON(const NavigationCancelCommandJSON &);
    NavigationCancelCommandJSON & operator=(const NavigationCancelCommandJSON &other);

  public:
    NavigationCancelCommandJSON(void);
    virtual ~NavigationCancelCommandJSON(void);
    const char * getNavigationCommandKind(void) const;

    size_t extraNavigationCommandComponentCount(void) const
      {
        size_t result = 0;
        return result;
      }
    const char *extraNavigationCommandComponentKey(size_t component_num) const
      {
        assert(false);
        return NULL;
      }
    JSONValue *extraNavigationCommandComponentValue(size_t component_num)
      {
        assert(false);
        return NULL;
      }
    const JSONValue *extraNavigationCommandComponentValue(size_t component_num) const
      {
        assert(false);
        return NULL;
      }
    JSONValue *extraNavigationCommandLookup(const char *field_name)
      {
        return NULL;
      }
    const JSONValue *extraNavigationCommandLookup(const char *field_name) const
      {
        return NULL;
      }


    void extraNavigationCommandAppendPair(const char *key, JSONValue *new_component)
      {
      }
    void extraNavigationCommandSetField(const char *key, JSONValue *new_component)
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
        NavigationCommandJSON::write_fields_as_json(handler);
      }
    virtual const char *missing_field_error(void) const
      {
        return NULL;
      }

    static NavigationCancelCommandJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static NavigationCancelCommandJSON *from_text(const char *text, bool ignore_extras = false)
      {
        NavigationCancelCommandJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<NavigationCancelCommandJSON>, NavigationCancelCommandJSON *, bool> generator("Type NavigationCancelCommand", ignore_extras);
            parse_json_value(text, "Text for NavigationCancelCommandJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static NavigationCancelCommandJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        NavigationCancelCommandJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<NavigationCancelCommandJSON>, NavigationCancelCommandJSON *, bool> generator("Type NavigationCancelCommand", ignore_extras);
            parse_json_value(fp, file_name, &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    class Generator : public NavigationCommandJSON::Generator
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
            if (!(strcmp(getNavigationCommandJSONKey().c_str(), "NavigationCancelCommand") == 0))
                throw("The key field has a value other than `NavigationCancelCommand'.");
            NavigationCancelCommandJSON *result = new NavigationCancelCommandJSON();
            assert(result != NULL);
            RCHandle<NavigationCancelCommandJSON> result_holder = result;
            finish(result);
            handle_result(result);
          }
        void handle_result(NavigationCommandJSON *new_result)
          {
            handle_result((NavigationCancelCommandJSON *)new_result);
          }
        void finish(NavigationCancelCommandJSON *result)
          {
            NavigationCommandJSON::Generator::finish(result);
          }
        virtual void handle_result(NavigationCancelCommandJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            return NavigationCommandJSON::Generator::start_known_field(field_name);
          }

      public:
        Generator(bool ignore_extras = false) : NavigationCommandJSON::Generator(ignore_extras)
          {
            set_what("the NavigationCancelCommand class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            NavigationCommandJSON::Generator::reset();
          }
      };
  };

#endif /* NAVIGATIONCANCELCOMMANDJSON_H */
