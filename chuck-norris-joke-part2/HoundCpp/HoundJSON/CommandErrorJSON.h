/* file "CommandErrorJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef COMMANDERRORJSON_H
#define COMMANDERRORJSON_H

#pragma interface

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


class CommandErrorJSON : public ReferenceCounted
  {
  private:
    bool flagHasErrorMessage;
    std::string storeErrorMessage;
    bool flagHasExpectedCommandKind;
    std::string storeExpectedCommandKind;

    CommandErrorJSON(const CommandErrorJSON &);
    CommandErrorJSON & operator=(const CommandErrorJSON &other);

    void  fromJSONErrorMessage(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONExpectedCommandKind(JSONValue *json_value, bool ignore_extras = false);


  public:
    CommandErrorJSON(void);
    virtual ~CommandErrorJSON(void);
    virtual const char *getErrorType(void) const = 0;
    bool  hasErrorMessage(void) const;
    std::string  getErrorMessage(void);
    const std::string  getErrorMessage(void) const;
    bool  hasExpectedCommandKind(void) const;
    std::string  getExpectedCommandKind(void);
    const std::string  getExpectedCommandKind(void) const;

    virtual size_t extraCommandErrorComponentCount(void) const = 0;
    virtual const char *extraCommandErrorComponentKey(size_t component_num) const = 0;
    virtual JSONValue *extraCommandErrorComponentValue(size_t component_num) = 0;
    virtual const JSONValue *extraCommandErrorComponentValue(size_t component_num) const = 0;
    virtual JSONValue *extraCommandErrorLookup(const char *field_name) = 0;
    virtual const JSONValue *extraCommandErrorLookup(const char *field_name) const = 0;

    void setErrorMessage(std::string new_value)
      {
        flagHasErrorMessage = true;
        storeErrorMessage = new_value;
      }
    void unsetErrorMessage(void)
      {
        flagHasErrorMessage = false;
      }
    void setExpectedCommandKind(std::string new_value)
      {
        flagHasExpectedCommandKind = true;
        storeExpectedCommandKind = new_value;
      }
    void unsetExpectedCommandKind(void)
      {
        flagHasExpectedCommandKind = false;
      }

    virtual void extraCommandErrorAppendPair(const char *key, JSONValue *new_component) = 0;
    virtual void extraCommandErrorSetField(const char *key, JSONValue *new_component) = 0;

    virtual void write_as_json(JSONHandler *handler) const
      {
        handler->start_object();
        write_fields_as_json(handler);
        handler->finish_object();
      }

    virtual void write_fields_as_json(JSONHandler *handler) const
      {
        handler->pair("ErrorType", getErrorType());
        assert(flagHasErrorMessage);
        handler->start_pair("ErrorMessage");
        handler->string_value(storeErrorMessage);
        if (flagHasExpectedCommandKind)
          {
            handler->start_pair("ExpectedCommandKind");
            handler->string_value(storeExpectedCommandKind);
          }
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasErrorMessage()))
          {
            return "When parsing the object for %what%, the \"ErrorMessage\" field was missing.";
          }
        return NULL;
      }

    static CommandErrorJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static CommandErrorJSON *from_text(const char *text, bool ignore_extras = false)
      {
        CommandErrorJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<CommandErrorJSON>, CommandErrorJSON *, bool> generator("Type CommandError", ignore_extras);
            parse_json_value(text, "Text for CommandErrorJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static CommandErrorJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        CommandErrorJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<CommandErrorJSON>, CommandErrorJSON *, bool> generator("Type CommandError", ignore_extras);
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
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorErrorMessage;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorExpectedCommandKind;
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
                throw("The `ErrorType' field is missing.");
            CommandErrorJSON *result = createForKey(keyGenerator.value.c_str(), unknownFieldGenerator.index);
            assert(result != NULL);
            RCHandle<CommandErrorJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraCommandErrorAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
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
        std::string getCommandErrorJSONKey(void)
          {
            if (!(keyGenerator.have_value))
                throw("The `ErrorType' field is missing.");
            return keyGenerator.value;
          }
        void finish(CommandErrorJSON *result)
          {
            if (fieldGeneratorErrorMessage.have_value)
              {
                result->setErrorMessage(fieldGeneratorErrorMessage.value);
                fieldGeneratorErrorMessage.have_value = false;
              }
            else if (!(result->hasErrorMessage()))
              {
                error("When parsing the object for %what%, the \"ErrorMessage\" field was missing.");
              }
            if (fieldGeneratorExpectedCommandKind.have_value)
              {
                result->setExpectedCommandKind(fieldGeneratorExpectedCommandKind.value);
                fieldGeneratorExpectedCommandKind.have_value = false;
              }
          }
        virtual void handle_result(CommandErrorJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            if (strncmp(field_name, "E", 1) == 0)
              {
                switch ((unsigned char)(field_name[1]))
                  {
                    case 'r':
                        if (strncmp(&(field_name[2]), "ror", 3) == 0)
                          {
                            switch ((unsigned char)(field_name[5]))
                              {
                                case 'M':
                                    if (strcmp(&(field_name[6]), "essage") == 0)
                                        return &fieldGeneratorErrorMessage;
                                    break;
                                case 'T':
                                    if (strcmp(&(field_name[6]), "ype") == 0)
                                        {
                                        keyGenerator.reset();
                                        return &keyGenerator;
                                        }
                                    break;
                                default:
                                    break;
                              }
                          }
                        break;
                    case 'x':
                        if (strcmp(&(field_name[2]), "pectedCommandKind") == 0)
                            return &fieldGeneratorExpectedCommandKind;
                        break;
                    default:
                        break;
                  }
              }
            return NULL;
          }

      public:
        Generator(bool ignore_extras = false) : fieldGeneratorErrorMessage("field \"ErrorMessage\" of the CommandError class"), fieldGeneratorExpectedCommandKind("field \"ExpectedCommandKind\" of the CommandError class"), unknownFieldGenerator(ignore_extras), keyGenerator("key field \"ErrorType\" of the CommandError class")
          {
            set_what("the CommandError class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorErrorMessage.reset();
            fieldGeneratorExpectedCommandKind.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
    static CommandErrorJSON *createForKey(const char *key, string_index *other_field_index);
  };

#endif /* COMMANDERRORJSON_H */
