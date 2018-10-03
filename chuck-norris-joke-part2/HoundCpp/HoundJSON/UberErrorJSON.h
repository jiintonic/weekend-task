/* file "UberErrorJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef UBERERRORJSON_H
#define UBERERRORJSON_H

#pragma interface

#include "CommandErrorJSON.h"
#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONStringGenerator.h"
#include <string>
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class UberErrorJSON : public CommandErrorJSON
  {
  private:
    bool flagHasErrorDetails;
    std::string storeErrorDetails;

    UberErrorJSON(const UberErrorJSON &);
    UberErrorJSON & operator=(const UberErrorJSON &other);

    JSONValue * extraErrorDetailsToJSON(void) const;

    void  fromJSONErrorDetails(JSONValue *json_value, bool ignore_extras = false);


  public:
    UberErrorJSON(void);
    virtual ~UberErrorJSON(void);
    const char * getErrorType(void) const;
    virtual const char *getUberErrorKind(void) const = 0;
    bool  hasErrorDetails(void) const;
    std::string  getErrorDetails(void);
    const std::string  getErrorDetails(void) const;

    virtual size_t extraUberErrorComponentCount(void) const = 0;
    virtual const char *extraUberErrorComponentKey(size_t component_num) const = 0;
    virtual JSONValue *extraUberErrorComponentValue(size_t component_num) = 0;
    virtual const JSONValue *extraUberErrorComponentValue(size_t component_num) const = 0;
    virtual JSONValue *extraUberErrorLookup(const char *field_name) = 0;
    virtual const JSONValue *extraUberErrorLookup(const char *field_name) const = 0;
    size_t extraCommandErrorComponentCount(void) const
      {
        size_t result = 1;
        if (flagHasErrorDetails)
            ++result;
        result += extraUberErrorComponentCount();
        return result;
      }
    const char *extraCommandErrorComponentKey(size_t component_num) const
      {
        if (component_num == 0)
            return "UberErrorKind";
        size_t remainder = (component_num - 1);
        if (flagHasErrorDetails)
          {
            if (remainder == 0)
                return "ErrorDetails";
            --remainder;
          }
        return extraUberErrorComponentKey(remainder);
      }
    JSONValue *extraCommandErrorComponentValue(size_t component_num)
      {
        if (component_num == 0)
            return new JSONStringValue(getUberErrorKind());
        size_t remainder = (component_num - 1);
        if (flagHasErrorDetails)
          {
            if (remainder == 0)
                return extraErrorDetailsToJSON();
            --remainder;
          }
        return extraUberErrorComponentValue(remainder);
      }
    const JSONValue *extraCommandErrorComponentValue(size_t component_num) const
      {
        if (component_num == 0)
            return new JSONStringValue(getUberErrorKind());
        size_t remainder = (component_num - 1);
        if (flagHasErrorDetails)
          {
            if (remainder == 0)
                return extraErrorDetailsToJSON();
            --remainder;
          }
        return extraUberErrorComponentValue(remainder);
      }
    JSONValue *extraCommandErrorLookup(const char *field_name)
      {
        switch ((unsigned char)(field_name[0]))
          {
            case 'E':
                if (strcmp(&(field_name[1]), "rrorDetails") == 0)
                    return (flagHasErrorDetails ? extraErrorDetailsToJSON() : NULL);
                break;
            case 'U':
                if (strcmp(&(field_name[1]), "berErrorKind") == 0)
                    return new JSONStringValue(getUberErrorKind());
                break;
            default:
                break;
          }
        return extraUberErrorLookup(field_name);
      }
    const JSONValue *extraCommandErrorLookup(const char *field_name) const
      {
        switch ((unsigned char)(field_name[0]))
          {
            case 'E':
                if (strcmp(&(field_name[1]), "rrorDetails") == 0)
                    return (flagHasErrorDetails ? extraErrorDetailsToJSON() : NULL);
                break;
            case 'U':
                if (strcmp(&(field_name[1]), "berErrorKind") == 0)
                    return new JSONStringValue(getUberErrorKind());
                break;
            default:
                break;
          }
        return extraUberErrorLookup(field_name);
      }

    void setErrorDetails(std::string new_value)
      {
        flagHasErrorDetails = true;
        storeErrorDetails = new_value;
      }
    void unsetErrorDetails(void)
      {
        flagHasErrorDetails = false;
      }

    virtual void extraUberErrorAppendPair(const char *key, JSONValue *new_component) = 0;
    virtual void extraUberErrorSetField(const char *key, JSONValue *new_component) = 0;
    void extraCommandErrorAppendPair(const char *key, JSONValue *new_component)
      {
        switch ((unsigned char)(key[0]))
          {
            case 'E':
                if (strcmp(&(key[1]), "rrorDetails") == 0)
                    {
                    fromJSONErrorDetails(new_component, false);
                    return;
                    }
                break;
            case 'U':
                if (strcmp(&(key[1]), "berErrorKind") == 0)
                    return;
                break;
            default:
                break;
          }
        extraUberErrorAppendPair(key, new_component);
      }
    void extraCommandErrorSetField(const char *key, JSONValue *new_component)
      {
        switch ((unsigned char)(key[0]))
          {
            case 'E':
                if (strcmp(&(key[1]), "rrorDetails") == 0)
                    {
                    fromJSONErrorDetails(new_component, false);
                    return;
                    }
                break;
            case 'U':
                if (strcmp(&(key[1]), "berErrorKind") == 0)
                    return;
                break;
            default:
                break;
          }
        extraUberErrorSetField(key, new_component);
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
        handler->pair("UberErrorKind", getUberErrorKind());
        if (flagHasErrorDetails)
          {
            handler->start_pair("ErrorDetails");
            handler->string_value(storeErrorDetails);
          }
      }
    virtual const char *missing_field_error(void) const
      {
        return NULL;
      }

    static UberErrorJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static UberErrorJSON *from_text(const char *text, bool ignore_extras = false)
      {
        UberErrorJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<UberErrorJSON>, UberErrorJSON *, bool> generator("Type UberError", ignore_extras);
            parse_json_value(text, "Text for UberErrorJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static UberErrorJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        UberErrorJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<UberErrorJSON>, UberErrorJSON *, bool> generator("Type UberError", ignore_extras);
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
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorErrorDetails;
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
                throw("The `UberErrorKind' field is missing.");
            if (!(strcmp(getCommandErrorJSONKey().c_str(), "UberError") == 0))
                throw("The key field has a value other than `UberError'.");
            UberErrorJSON *result = createForKey(keyGenerator.value.c_str(), unknownFieldGenerator.index);
            assert(result != NULL);
            RCHandle<UberErrorJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraUberErrorAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
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
        std::string getUberErrorJSONKey(void)
          {
            if (!(keyGenerator.have_value))
                throw("The `UberErrorKind' field is missing.");
            return keyGenerator.value;
          }
        void handle_result(CommandErrorJSON *new_result)
          {
            handle_result((UberErrorJSON *)new_result);
          }
        void finish(UberErrorJSON *result)
          {
            if (fieldGeneratorErrorDetails.have_value)
              {
                result->setErrorDetails(fieldGeneratorErrorDetails.value);
                fieldGeneratorErrorDetails.have_value = false;
              }
            CommandErrorJSON::Generator::finish(result);
          }
        virtual void handle_result(UberErrorJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'E':
                    if (strcmp(&(field_name[1]), "rrorDetails") == 0)
                        return &fieldGeneratorErrorDetails;
                    break;
                case 'U':
                    if (strcmp(&(field_name[1]), "berErrorKind") == 0)
                        {
                        keyGenerator.reset();
                        return &keyGenerator;
                        }
                    break;
                default:
                    break;
              }
            return CommandErrorJSON::Generator::start_known_field(field_name);
          }

      public:
        Generator(bool ignore_extras = false) : CommandErrorJSON::Generator(ignore_extras), fieldGeneratorErrorDetails("field \"ErrorDetails\" of the UberError class"), unknownFieldGenerator(ignore_extras), keyGenerator("key field \"UberErrorKind\" of the UberError class")
          {
            set_what("the UberError class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorErrorDetails.reset();
            CommandErrorJSON::Generator::reset();
            unknownFieldGenerator.reset();
          }
      };
    static UberErrorJSON *createForKey(const char *key, string_index *other_field_index);
  };

#endif /* UBERERRORJSON_H */
