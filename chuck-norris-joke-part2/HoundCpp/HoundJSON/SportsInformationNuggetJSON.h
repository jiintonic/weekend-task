/* file "SportsInformationNuggetJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef SPORTSINFORMATIONNUGGETJSON_H
#define SPORTSINFORMATIONNUGGETJSON_H

#pragma interface

#include "InformationNuggetJSON.h"
#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONStringGenerator.h"
#include "SportsUserDataJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class SportsInformationNuggetJSON : public InformationNuggetJSON
  {
  private:
    bool flagHasUserData;
    SportsUserDataJSON * storeUserData;

    SportsInformationNuggetJSON(const SportsInformationNuggetJSON &);
    SportsInformationNuggetJSON & operator=(const SportsInformationNuggetJSON &other);

    JSONValue * extraUserDataToJSON(void) const;

    void  fromJSONUserData(JSONValue *json_value, bool ignore_extras = false);


  public:
    SportsInformationNuggetJSON(void);
    virtual ~SportsInformationNuggetJSON(void);
    const char * getNuggetKind(void) const;
    virtual const char *getSportsNuggetKind(void) const = 0;
    bool  hasUserData(void) const;
    SportsUserDataJSON *  getUserData(void);
    const SportsUserDataJSON *  getUserData(void) const;

    virtual size_t extraSportsInformationNuggetComponentCount(void) const = 0;
    virtual const char *extraSportsInformationNuggetComponentKey(size_t component_num) const = 0;
    virtual JSONValue *extraSportsInformationNuggetComponentValue(size_t component_num) = 0;
    virtual const JSONValue *extraSportsInformationNuggetComponentValue(size_t component_num) const = 0;
    virtual JSONValue *extraSportsInformationNuggetLookup(const char *field_name) = 0;
    virtual const JSONValue *extraSportsInformationNuggetLookup(const char *field_name) const = 0;
    size_t extraInformationNuggetComponentCount(void) const
      {
        size_t result = 1;
        if (flagHasUserData)
            ++result;
        result += extraSportsInformationNuggetComponentCount();
        return result;
      }
    const char *extraInformationNuggetComponentKey(size_t component_num) const
      {
        if (component_num == 0)
            return "SportsNuggetKind";
        size_t remainder = (component_num - 1);
        if (flagHasUserData)
          {
            if (remainder == 0)
                return "UserData";
            --remainder;
          }
        return extraSportsInformationNuggetComponentKey(remainder);
      }
    JSONValue *extraInformationNuggetComponentValue(size_t component_num)
      {
        if (component_num == 0)
            return new JSONStringValue(getSportsNuggetKind());
        size_t remainder = (component_num - 1);
        if (flagHasUserData)
          {
            if (remainder == 0)
                return extraUserDataToJSON();
            --remainder;
          }
        return extraSportsInformationNuggetComponentValue(remainder);
      }
    const JSONValue *extraInformationNuggetComponentValue(size_t component_num) const
      {
        if (component_num == 0)
            return new JSONStringValue(getSportsNuggetKind());
        size_t remainder = (component_num - 1);
        if (flagHasUserData)
          {
            if (remainder == 0)
                return extraUserDataToJSON();
            --remainder;
          }
        return extraSportsInformationNuggetComponentValue(remainder);
      }
    JSONValue *extraInformationNuggetLookup(const char *field_name)
      {
        switch ((unsigned char)(field_name[0]))
          {
            case 'S':
                if (strcmp(&(field_name[1]), "portsNuggetKind") == 0)
                    return new JSONStringValue(getSportsNuggetKind());
                break;
            case 'U':
                if (strcmp(&(field_name[1]), "serData") == 0)
                    return (flagHasUserData ? extraUserDataToJSON() : NULL);
                break;
            default:
                break;
          }
        return extraSportsInformationNuggetLookup(field_name);
      }
    const JSONValue *extraInformationNuggetLookup(const char *field_name) const
      {
        switch ((unsigned char)(field_name[0]))
          {
            case 'S':
                if (strcmp(&(field_name[1]), "portsNuggetKind") == 0)
                    return new JSONStringValue(getSportsNuggetKind());
                break;
            case 'U':
                if (strcmp(&(field_name[1]), "serData") == 0)
                    return (flagHasUserData ? extraUserDataToJSON() : NULL);
                break;
            default:
                break;
          }
        return extraSportsInformationNuggetLookup(field_name);
      }

    void setUserData(SportsUserDataJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasUserData)
          {
            storeUserData->remove_reference();
          }
        flagHasUserData = true;
        storeUserData = new_value;
      }
    void unsetUserData(void)
      {
        if (flagHasUserData)
          {
            storeUserData->remove_reference();
          }
        flagHasUserData = false;
      }

    virtual void extraSportsInformationNuggetAppendPair(const char *key, JSONValue *new_component) = 0;
    virtual void extraSportsInformationNuggetSetField(const char *key, JSONValue *new_component) = 0;
    void extraInformationNuggetAppendPair(const char *key, JSONValue *new_component)
      {
        switch ((unsigned char)(key[0]))
          {
            case 'S':
                if (strcmp(&(key[1]), "portsNuggetKind") == 0)
                    return;
                break;
            case 'U':
                if (strcmp(&(key[1]), "serData") == 0)
                    {
                    fromJSONUserData(new_component, false);
                    return;
                    }
                break;
            default:
                break;
          }
        extraSportsInformationNuggetAppendPair(key, new_component);
      }
    void extraInformationNuggetSetField(const char *key, JSONValue *new_component)
      {
        switch ((unsigned char)(key[0]))
          {
            case 'S':
                if (strcmp(&(key[1]), "portsNuggetKind") == 0)
                    return;
                break;
            case 'U':
                if (strcmp(&(key[1]), "serData") == 0)
                    {
                    fromJSONUserData(new_component, false);
                    return;
                    }
                break;
            default:
                break;
          }
        extraSportsInformationNuggetSetField(key, new_component);
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
        handler->pair("SportsNuggetKind", getSportsNuggetKind());
        if (flagHasUserData)
          {
            handler->start_pair("UserData");
            storeUserData->write_as_json(handler);
          }
      }
    virtual const char *missing_field_error(void) const
      {
        return NULL;
      }

    static SportsInformationNuggetJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static SportsInformationNuggetJSON *from_text(const char *text, bool ignore_extras = false)
      {
        SportsInformationNuggetJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<SportsInformationNuggetJSON>, SportsInformationNuggetJSON *, bool> generator("Type SportsInformationNugget", ignore_extras);
            parse_json_value(text, "Text for SportsInformationNuggetJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static SportsInformationNuggetJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        SportsInformationNuggetJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<SportsInformationNuggetJSON>, SportsInformationNuggetJSON *, bool> generator("Type SportsInformationNugget", ignore_extras);
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
        JSONHoldingGenerator<SportsUserDataJSON::Generator, RCHandle<SportsUserDataJSON>, SportsUserDataJSON *, bool > fieldGeneratorUserData;
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
                throw("The `SportsNuggetKind' field is missing.");
            if (!(strcmp(getInformationNuggetJSONKey().c_str(), "Sports") == 0))
                throw("The key field has a value other than `Sports'.");
            SportsInformationNuggetJSON *result = createForKey(keyGenerator.value.c_str(), unknownFieldGenerator.index);
            assert(result != NULL);
            RCHandle<SportsInformationNuggetJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraSportsInformationNuggetAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
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
        std::string getSportsInformationNuggetJSONKey(void)
          {
            if (!(keyGenerator.have_value))
                throw("The `SportsNuggetKind' field is missing.");
            return keyGenerator.value;
          }
        void handle_result(InformationNuggetJSON *new_result)
          {
            handle_result((SportsInformationNuggetJSON *)new_result);
          }
        void finish(SportsInformationNuggetJSON *result)
          {
            if (fieldGeneratorUserData.have_value)
              {
                result->setUserData(fieldGeneratorUserData.value.referenced());
                fieldGeneratorUserData.have_value = false;
              }
            InformationNuggetJSON::Generator::finish(result);
          }
        virtual void handle_result(SportsInformationNuggetJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'S':
                    if (strcmp(&(field_name[1]), "portsNuggetKind") == 0)
                        {
                        keyGenerator.reset();
                        return &keyGenerator;
                        }
                    break;
                case 'U':
                    if (strcmp(&(field_name[1]), "serData") == 0)
                        return &fieldGeneratorUserData;
                    break;
                default:
                    break;
              }
            return InformationNuggetJSON::Generator::start_known_field(field_name);
          }

      public:
        Generator(bool ignore_extras = false) : InformationNuggetJSON::Generator(ignore_extras), fieldGeneratorUserData("field \"UserData\" of the SportsInformationNugget class", ignore_extras), unknownFieldGenerator(ignore_extras), keyGenerator("key field \"SportsNuggetKind\" of the SportsInformationNugget class")
          {
            set_what("the SportsInformationNugget class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorUserData.reset();
            InformationNuggetJSON::Generator::reset();
            unknownFieldGenerator.reset();
          }
      };
    static SportsInformationNuggetJSON *createForKey(const char *key, string_index *other_field_index);
  };

#endif /* SPORTSINFORMATIONNUGGETJSON_H */
