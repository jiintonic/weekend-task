/* file "ShowUserNameNuggetJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef SHOWUSERNAMENUGGETJSON_H
#define SHOWUSERNAMENUGGETJSON_H

#pragma interface

#include "UserMemoryNuggetJSON.h"
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


class ShowUserNameNuggetJSON : public UserMemoryNuggetJSON
  {
  private:
    bool flagHasName;
    std::string storeName;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    ShowUserNameNuggetJSON(const ShowUserNameNuggetJSON &);
    ShowUserNameNuggetJSON & operator=(const ShowUserNameNuggetJSON &other);

    JSONValue * extraNameToJSON(void) const;

    void  fromJSONName(JSONValue *json_value, bool ignore_extras = false);


  public:
    ShowUserNameNuggetJSON(void);
    virtual ~ShowUserNameNuggetJSON(void);
    const char * getUserMemoryNuggetKind(void) const;
    bool  hasName(void) const;
    std::string  getName(void);
    const std::string  getName(void) const;

    virtual size_t extraShowUserNameNuggetComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraShowUserNameNuggetComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraShowUserNameNuggetComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraShowUserNameNuggetComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraShowUserNameNuggetLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraShowUserNameNuggetLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    size_t extraUserMemoryNuggetComponentCount(void) const
      {
        size_t result = 0;
        if (flagHasName)
            ++result;
        result += extraShowUserNameNuggetComponentCount();
        return result;
      }
    const char *extraUserMemoryNuggetComponentKey(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasName)
          {
            if (remainder == 0)
                return "Name";
            --remainder;
          }
        return extraShowUserNameNuggetComponentKey(remainder);
      }
    JSONValue *extraUserMemoryNuggetComponentValue(size_t component_num)
      {
        size_t remainder = component_num;
        if (flagHasName)
          {
            if (remainder == 0)
                return extraNameToJSON();
            --remainder;
          }
        return extraShowUserNameNuggetComponentValue(remainder);
      }
    const JSONValue *extraUserMemoryNuggetComponentValue(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasName)
          {
            if (remainder == 0)
                return extraNameToJSON();
            --remainder;
          }
        return extraShowUserNameNuggetComponentValue(remainder);
      }
    JSONValue *extraUserMemoryNuggetLookup(const char *field_name)
      {
        if (strcmp(field_name, "Name") == 0)
            return (flagHasName ? extraNameToJSON() : NULL);
        return extraShowUserNameNuggetLookup(field_name);
      }
    const JSONValue *extraUserMemoryNuggetLookup(const char *field_name) const
      {
        if (strcmp(field_name, "Name") == 0)
            return (flagHasName ? extraNameToJSON() : NULL);
        return extraShowUserNameNuggetLookup(field_name);
      }

    void setName(std::string new_value)
      {
        flagHasName = true;
        storeName = new_value;
      }
    void unsetName(void)
      {
        flagHasName = false;
      }

    virtual void extraShowUserNameNuggetAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraShowUserNameNuggetSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraShowUserNameNuggetLookup(key);
        if (old_field == NULL)
          {
            extraShowUserNameNuggetAppendPair(key, new_component);
          }
        else
          {
            size_t count = extraKeys.size();
            assert(count == extraValues.size());
            for (size_t num = 0; num < count; ++num)
              {
                if (strcmp(extraKeys[num].c_str(),  key) == 0)
                  {
                    extraValues[num] = new_component;
                    break;
                  }
              }
            enter_into_string_index(extraIndex, key, new_component);
            new_component->add_reference();
            old_field->remove_reference();
            old_field->remove_reference();
          }
      }
    void extraUserMemoryNuggetAppendPair(const char *key, JSONValue *new_component)
      {
        if (strcmp(key, "Name") == 0)
            {
            fromJSONName(new_component, false);
            return;
            }
        extraShowUserNameNuggetAppendPair(key, new_component);
      }
    void extraUserMemoryNuggetSetField(const char *key, JSONValue *new_component)
      {
        if (strcmp(key, "Name") == 0)
            {
            fromJSONName(new_component, false);
            return;
            }
        extraShowUserNameNuggetSetField(key, new_component);
      }

    virtual void write_as_json(JSONHandler *handler) const
      {
        handler->start_object();
        write_fields_as_json(handler);
        size_t extra_count = extraKeys.size();
        assert(extra_count == extraValues.size());
        for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
          {
            handler->start_pair(extraKeys[extra_num].c_str());
            extraValues[extra_num]->write(handler);
          }
        handler->finish_object();
      }

    virtual void write_fields_as_json(JSONHandler *handler) const
      {
        UserMemoryNuggetJSON::write_fields_as_json(handler);
        assert(flagHasName);
        handler->start_pair("Name");
        handler->string_value(storeName);
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasName()))
          {
            return "When parsing the object for %what%, the \"Name\" field was missing.";
          }
        return NULL;
      }

    static ShowUserNameNuggetJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static ShowUserNameNuggetJSON *from_text(const char *text, bool ignore_extras = false)
      {
        ShowUserNameNuggetJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<ShowUserNameNuggetJSON>, ShowUserNameNuggetJSON *, bool> generator("Type ShowUserNameNugget", ignore_extras);
            parse_json_value(text, "Text for ShowUserNameNuggetJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static ShowUserNameNuggetJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        ShowUserNameNuggetJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<ShowUserNameNuggetJSON>, ShowUserNameNuggetJSON *, bool> generator("Type ShowUserNameNugget", ignore_extras);
            parse_json_value(fp, file_name, &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    class Generator : public UserMemoryNuggetJSON::Generator
      {
      private:
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorName;
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
            if (!(strcmp(getUserMemoryNuggetJSONKey().c_str(), "ShowUserName") == 0))
                throw("The key field has a value other than `ShowUserName'.");
            ShowUserNameNuggetJSON *result = new ShowUserNameNuggetJSON();
            assert(result != NULL);
            RCHandle<ShowUserNameNuggetJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraShowUserNameNuggetAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void handle_result(UserMemoryNuggetJSON *new_result)
          {
            handle_result((ShowUserNameNuggetJSON *)new_result);
          }
        void finish(ShowUserNameNuggetJSON *result)
          {
            if (fieldGeneratorName.have_value)
              {
                result->setName(fieldGeneratorName.value);
                fieldGeneratorName.have_value = false;
              }
            else if (!(result->hasName()))
              {
                error("When parsing the object for %what%, the \"Name\" field was missing.");
              }
            UserMemoryNuggetJSON::Generator::finish(result);
          }
        virtual void handle_result(ShowUserNameNuggetJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            if (strcmp(field_name, "Name") == 0)
                return &fieldGeneratorName;
            return UserMemoryNuggetJSON::Generator::start_known_field(field_name);
          }

      public:
        Generator(bool ignore_extras = false) : UserMemoryNuggetJSON::Generator(ignore_extras), fieldGeneratorName("field \"Name\" of the ShowUserNameNugget class"), unknownFieldGenerator(ignore_extras)
          {
            set_what("the ShowUserNameNugget class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorName.reset();
            UserMemoryNuggetJSON::Generator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* SHOWUSERNAMENUGGETJSON_H */
