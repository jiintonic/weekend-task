/* file "HangmanCommandJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef HANGMANCOMMANDJSON_H
#define HANGMANCOMMANDJSON_H

#pragma interface

#include "CommandResultJSON.h"
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


class HangmanCommandJSON : public CommandResultJSON
  {
  private:
    bool flagHasGameName;
    std::string storeGameName;

    HangmanCommandJSON(const HangmanCommandJSON &);
    HangmanCommandJSON & operator=(const HangmanCommandJSON &other);

    JSONValue * extraGameNameToJSON(void) const;

    void  fromJSONGameName(JSONValue *json_value, bool ignore_extras = false);


  public:
    HangmanCommandJSON(void);
    virtual ~HangmanCommandJSON(void);
    const char * getCommandKind(void) const;
    virtual const char *getHangmanCommandKind(void) const = 0;
    bool  hasGameName(void) const;
    std::string  getGameName(void);
    const std::string  getGameName(void) const;

    virtual size_t extraHangmanCommandComponentCount(void) const = 0;
    virtual const char *extraHangmanCommandComponentKey(size_t component_num) const = 0;
    virtual JSONValue *extraHangmanCommandComponentValue(size_t component_num) = 0;
    virtual const JSONValue *extraHangmanCommandComponentValue(size_t component_num) const = 0;
    virtual JSONValue *extraHangmanCommandLookup(const char *field_name) = 0;
    virtual const JSONValue *extraHangmanCommandLookup(const char *field_name) const = 0;
    size_t extraCommandResultComponentCount(void) const
      {
        size_t result = 1;
        if (flagHasGameName)
            ++result;
        result += extraHangmanCommandComponentCount();
        return result;
      }
    const char *extraCommandResultComponentKey(size_t component_num) const
      {
        if (component_num == 0)
            return "HangmanCommandKind";
        size_t remainder = (component_num - 1);
        if (flagHasGameName)
          {
            if (remainder == 0)
                return "GameName";
            --remainder;
          }
        return extraHangmanCommandComponentKey(remainder);
      }
    JSONValue *extraCommandResultComponentValue(size_t component_num)
      {
        if (component_num == 0)
            return new JSONStringValue(getHangmanCommandKind());
        size_t remainder = (component_num - 1);
        if (flagHasGameName)
          {
            if (remainder == 0)
                return extraGameNameToJSON();
            --remainder;
          }
        return extraHangmanCommandComponentValue(remainder);
      }
    const JSONValue *extraCommandResultComponentValue(size_t component_num) const
      {
        if (component_num == 0)
            return new JSONStringValue(getHangmanCommandKind());
        size_t remainder = (component_num - 1);
        if (flagHasGameName)
          {
            if (remainder == 0)
                return extraGameNameToJSON();
            --remainder;
          }
        return extraHangmanCommandComponentValue(remainder);
      }
    JSONValue *extraCommandResultLookup(const char *field_name)
      {
        switch ((unsigned char)(field_name[0]))
          {
            case 'G':
                if (strcmp(&(field_name[1]), "ameName") == 0)
                    return (flagHasGameName ? extraGameNameToJSON() : NULL);
                break;
            case 'H':
                if (strcmp(&(field_name[1]), "angmanCommandKind") == 0)
                    return new JSONStringValue(getHangmanCommandKind());
                break;
            default:
                break;
          }
        return extraHangmanCommandLookup(field_name);
      }
    const JSONValue *extraCommandResultLookup(const char *field_name) const
      {
        switch ((unsigned char)(field_name[0]))
          {
            case 'G':
                if (strcmp(&(field_name[1]), "ameName") == 0)
                    return (flagHasGameName ? extraGameNameToJSON() : NULL);
                break;
            case 'H':
                if (strcmp(&(field_name[1]), "angmanCommandKind") == 0)
                    return new JSONStringValue(getHangmanCommandKind());
                break;
            default:
                break;
          }
        return extraHangmanCommandLookup(field_name);
      }

    void setGameName(std::string new_value)
      {
        flagHasGameName = true;
        storeGameName = new_value;
      }
    void unsetGameName(void)
      {
        flagHasGameName = false;
      }

    virtual void extraHangmanCommandAppendPair(const char *key, JSONValue *new_component) = 0;
    virtual void extraHangmanCommandSetField(const char *key, JSONValue *new_component) = 0;
    void extraCommandResultAppendPair(const char *key, JSONValue *new_component)
      {
        switch ((unsigned char)(key[0]))
          {
            case 'G':
                if (strcmp(&(key[1]), "ameName") == 0)
                    {
                    fromJSONGameName(new_component, false);
                    return;
                    }
                break;
            case 'H':
                if (strcmp(&(key[1]), "angmanCommandKind") == 0)
                    return;
                break;
            default:
                break;
          }
        extraHangmanCommandAppendPair(key, new_component);
      }
    void extraCommandResultSetField(const char *key, JSONValue *new_component)
      {
        switch ((unsigned char)(key[0]))
          {
            case 'G':
                if (strcmp(&(key[1]), "ameName") == 0)
                    {
                    fromJSONGameName(new_component, false);
                    return;
                    }
                break;
            case 'H':
                if (strcmp(&(key[1]), "angmanCommandKind") == 0)
                    return;
                break;
            default:
                break;
          }
        extraHangmanCommandSetField(key, new_component);
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
        handler->pair("HangmanCommandKind", getHangmanCommandKind());
        if (flagHasGameName)
          {
            handler->start_pair("GameName");
            handler->string_value(storeGameName);
          }
      }
    virtual const char *missing_field_error(void) const
      {
        return NULL;
      }

    static HangmanCommandJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static HangmanCommandJSON *from_text(const char *text, bool ignore_extras = false)
      {
        HangmanCommandJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<HangmanCommandJSON>, HangmanCommandJSON *, bool> generator("Type HangmanCommand", ignore_extras);
            parse_json_value(text, "Text for HangmanCommandJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static HangmanCommandJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        HangmanCommandJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<HangmanCommandJSON>, HangmanCommandJSON *, bool> generator("Type HangmanCommand", ignore_extras);
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
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorGameName;
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
                throw("The `HangmanCommandKind' field is missing.");
            if (!(strcmp(getCommandResultJSONKey().c_str(), "HangmanCommand") == 0))
                throw("The key field has a value other than `HangmanCommand'.");
            HangmanCommandJSON *result = createForKey(keyGenerator.value.c_str(), unknownFieldGenerator.index);
            assert(result != NULL);
            RCHandle<HangmanCommandJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraHangmanCommandAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
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
        std::string getHangmanCommandJSONKey(void)
          {
            if (!(keyGenerator.have_value))
                throw("The `HangmanCommandKind' field is missing.");
            return keyGenerator.value;
          }
        void handle_result(CommandResultJSON *new_result)
          {
            handle_result((HangmanCommandJSON *)new_result);
          }
        void finish(HangmanCommandJSON *result)
          {
            if (fieldGeneratorGameName.have_value)
              {
                result->setGameName(fieldGeneratorGameName.value);
                fieldGeneratorGameName.have_value = false;
              }
            CommandResultJSON::Generator::finish(result);
          }
        virtual void handle_result(HangmanCommandJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'G':
                    if (strcmp(&(field_name[1]), "ameName") == 0)
                        return &fieldGeneratorGameName;
                    break;
                case 'H':
                    if (strcmp(&(field_name[1]), "angmanCommandKind") == 0)
                        {
                        keyGenerator.reset();
                        return &keyGenerator;
                        }
                    break;
                default:
                    break;
              }
            return CommandResultJSON::Generator::start_known_field(field_name);
          }

      public:
        Generator(bool ignore_extras = false) : CommandResultJSON::Generator(ignore_extras), fieldGeneratorGameName("field \"GameName\" of the HangmanCommand class"), unknownFieldGenerator(ignore_extras), keyGenerator("key field \"HangmanCommandKind\" of the HangmanCommand class")
          {
            set_what("the HangmanCommand class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorGameName.reset();
            CommandResultJSON::Generator::reset();
            unknownFieldGenerator.reset();
          }
      };
    static HangmanCommandJSON *createForKey(const char *key, string_index *other_field_index);
  };

#endif /* HANGMANCOMMANDJSON_H */
