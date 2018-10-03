/* file "BlackjackInformationNuggetJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef BLACKJACKINFORMATIONNUGGETJSON_H
#define BLACKJACKINFORMATIONNUGGETJSON_H

#pragma interface

#include "InformationNuggetJSON.h"
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


class BlackjackInformationNuggetJSON : public InformationNuggetJSON
  {
  private:
    bool flagHasGameName;
    std::string storeGameName;

    BlackjackInformationNuggetJSON(const BlackjackInformationNuggetJSON &);
    BlackjackInformationNuggetJSON & operator=(const BlackjackInformationNuggetJSON &other);

    JSONValue * extraGameNameToJSON(void) const;

    void  fromJSONGameName(JSONValue *json_value, bool ignore_extras = false);


  public:
    BlackjackInformationNuggetJSON(void);
    virtual ~BlackjackInformationNuggetJSON(void);
    const char * getNuggetKind(void) const;
    virtual const char *getBlackjackNuggetKind(void) const = 0;
    bool  hasGameName(void) const;
    std::string  getGameName(void);
    const std::string  getGameName(void) const;

    virtual size_t extraBlackjackInformationNuggetComponentCount(void) const = 0;
    virtual const char *extraBlackjackInformationNuggetComponentKey(size_t component_num) const = 0;
    virtual JSONValue *extraBlackjackInformationNuggetComponentValue(size_t component_num) = 0;
    virtual const JSONValue *extraBlackjackInformationNuggetComponentValue(size_t component_num) const = 0;
    virtual JSONValue *extraBlackjackInformationNuggetLookup(const char *field_name) = 0;
    virtual const JSONValue *extraBlackjackInformationNuggetLookup(const char *field_name) const = 0;
    size_t extraInformationNuggetComponentCount(void) const
      {
        size_t result = 1;
        if (flagHasGameName)
            ++result;
        result += extraBlackjackInformationNuggetComponentCount();
        return result;
      }
    const char *extraInformationNuggetComponentKey(size_t component_num) const
      {
        if (component_num == 0)
            return "BlackjackNuggetKind";
        size_t remainder = (component_num - 1);
        if (flagHasGameName)
          {
            if (remainder == 0)
                return "GameName";
            --remainder;
          }
        return extraBlackjackInformationNuggetComponentKey(remainder);
      }
    JSONValue *extraInformationNuggetComponentValue(size_t component_num)
      {
        if (component_num == 0)
            return new JSONStringValue(getBlackjackNuggetKind());
        size_t remainder = (component_num - 1);
        if (flagHasGameName)
          {
            if (remainder == 0)
                return extraGameNameToJSON();
            --remainder;
          }
        return extraBlackjackInformationNuggetComponentValue(remainder);
      }
    const JSONValue *extraInformationNuggetComponentValue(size_t component_num) const
      {
        if (component_num == 0)
            return new JSONStringValue(getBlackjackNuggetKind());
        size_t remainder = (component_num - 1);
        if (flagHasGameName)
          {
            if (remainder == 0)
                return extraGameNameToJSON();
            --remainder;
          }
        return extraBlackjackInformationNuggetComponentValue(remainder);
      }
    JSONValue *extraInformationNuggetLookup(const char *field_name)
      {
        switch ((unsigned char)(field_name[0]))
          {
            case 'B':
                if (strcmp(&(field_name[1]), "lackjackNuggetKind") == 0)
                    return new JSONStringValue(getBlackjackNuggetKind());
                break;
            case 'G':
                if (strcmp(&(field_name[1]), "ameName") == 0)
                    return (flagHasGameName ? extraGameNameToJSON() : NULL);
                break;
            default:
                break;
          }
        return extraBlackjackInformationNuggetLookup(field_name);
      }
    const JSONValue *extraInformationNuggetLookup(const char *field_name) const
      {
        switch ((unsigned char)(field_name[0]))
          {
            case 'B':
                if (strcmp(&(field_name[1]), "lackjackNuggetKind") == 0)
                    return new JSONStringValue(getBlackjackNuggetKind());
                break;
            case 'G':
                if (strcmp(&(field_name[1]), "ameName") == 0)
                    return (flagHasGameName ? extraGameNameToJSON() : NULL);
                break;
            default:
                break;
          }
        return extraBlackjackInformationNuggetLookup(field_name);
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

    virtual void extraBlackjackInformationNuggetAppendPair(const char *key, JSONValue *new_component) = 0;
    virtual void extraBlackjackInformationNuggetSetField(const char *key, JSONValue *new_component) = 0;
    void extraInformationNuggetAppendPair(const char *key, JSONValue *new_component)
      {
        switch ((unsigned char)(key[0]))
          {
            case 'B':
                if (strcmp(&(key[1]), "lackjackNuggetKind") == 0)
                    return;
                break;
            case 'G':
                if (strcmp(&(key[1]), "ameName") == 0)
                    {
                    fromJSONGameName(new_component, false);
                    return;
                    }
                break;
            default:
                break;
          }
        extraBlackjackInformationNuggetAppendPair(key, new_component);
      }
    void extraInformationNuggetSetField(const char *key, JSONValue *new_component)
      {
        switch ((unsigned char)(key[0]))
          {
            case 'B':
                if (strcmp(&(key[1]), "lackjackNuggetKind") == 0)
                    return;
                break;
            case 'G':
                if (strcmp(&(key[1]), "ameName") == 0)
                    {
                    fromJSONGameName(new_component, false);
                    return;
                    }
                break;
            default:
                break;
          }
        extraBlackjackInformationNuggetSetField(key, new_component);
      }

    virtual void write_as_json(JSONHandler *handler) const
      {
        handler->start_object();
        write_fields_as_json(handler);
        handler->finish_object();
      }

    virtual void write_fields_as_json(JSONHandler *handler) const
      {
        InformationNuggetJSON::write_fields_as_json(handler);
        handler->pair("BlackjackNuggetKind", getBlackjackNuggetKind());
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

    static BlackjackInformationNuggetJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static BlackjackInformationNuggetJSON *from_text(const char *text, bool ignore_extras = false)
      {
        BlackjackInformationNuggetJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<BlackjackInformationNuggetJSON>, BlackjackInformationNuggetJSON *, bool> generator("Type BlackjackInformationNugget", ignore_extras);
            parse_json_value(text, "Text for BlackjackInformationNuggetJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static BlackjackInformationNuggetJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        BlackjackInformationNuggetJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<BlackjackInformationNuggetJSON>, BlackjackInformationNuggetJSON *, bool> generator("Type BlackjackInformationNugget", ignore_extras);
            parse_json_value(fp, file_name, &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    class Generator : public InformationNuggetJSON::Generator
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
                throw("The `BlackjackNuggetKind' field is missing.");
            if (!(strcmp(getInformationNuggetJSONKey().c_str(), "Blackjack") == 0))
                throw("The key field has a value other than `Blackjack'.");
            BlackjackInformationNuggetJSON *result = createForKey(keyGenerator.value.c_str(), unknownFieldGenerator.index);
            assert(result != NULL);
            RCHandle<BlackjackInformationNuggetJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraBlackjackInformationNuggetAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
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
        std::string getBlackjackInformationNuggetJSONKey(void)
          {
            if (!(keyGenerator.have_value))
                throw("The `BlackjackNuggetKind' field is missing.");
            return keyGenerator.value;
          }
        void handle_result(InformationNuggetJSON *new_result)
          {
            handle_result((BlackjackInformationNuggetJSON *)new_result);
          }
        void finish(BlackjackInformationNuggetJSON *result)
          {
            if (fieldGeneratorGameName.have_value)
              {
                result->setGameName(fieldGeneratorGameName.value);
                fieldGeneratorGameName.have_value = false;
              }
            InformationNuggetJSON::Generator::finish(result);
          }
        virtual void handle_result(BlackjackInformationNuggetJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'B':
                    if (strcmp(&(field_name[1]), "lackjackNuggetKind") == 0)
                        {
                        keyGenerator.reset();
                        return &keyGenerator;
                        }
                    break;
                case 'G':
                    if (strcmp(&(field_name[1]), "ameName") == 0)
                        return &fieldGeneratorGameName;
                    break;
                default:
                    break;
              }
            return InformationNuggetJSON::Generator::start_known_field(field_name);
          }

      public:
        Generator(bool ignore_extras = false) : InformationNuggetJSON::Generator(ignore_extras), fieldGeneratorGameName("field \"GameName\" of the BlackjackInformationNugget class"), unknownFieldGenerator(ignore_extras), keyGenerator("key field \"BlackjackNuggetKind\" of the BlackjackInformationNugget class")
          {
            set_what("the BlackjackInformationNugget class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorGameName.reset();
            InformationNuggetJSON::Generator::reset();
            unknownFieldGenerator.reset();
          }
      };
    static BlackjackInformationNuggetJSON *createForKey(const char *key, string_index *other_field_index);
  };

#endif /* BLACKJACKINFORMATIONNUGGETJSON_H */
