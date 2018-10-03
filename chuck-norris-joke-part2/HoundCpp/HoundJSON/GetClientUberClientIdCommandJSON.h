/* file "GetClientUberClientIdCommandJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef GETCLIENTUBERCLIENTIDCOMMANDJSON_H
#define GETCLIENTUBERCLIENTIDCOMMANDJSON_H

#pragma interface

#include "UberCommandJSON.h"
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


class GetClientUberClientIdCommandJSON : public UberCommandJSON
  {
  private:
    bool flagHasUberClientId;
    std::string storeUberClientId;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    GetClientUberClientIdCommandJSON(const GetClientUberClientIdCommandJSON &);
    GetClientUberClientIdCommandJSON & operator=(const GetClientUberClientIdCommandJSON &other);

    JSONValue * extraUberClientIdToJSON(void) const;

    void  fromJSONUberClientId(JSONValue *json_value, bool ignore_extras = false);


  public:
    GetClientUberClientIdCommandJSON(void);
    virtual ~GetClientUberClientIdCommandJSON(void);
    const char * getUberCommandKind(void) const;
    bool  hasUberClientId(void) const;
    std::string  getUberClientId(void);
    const std::string  getUberClientId(void) const;

    virtual size_t extraGetClientUberClientIdCommandComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraGetClientUberClientIdCommandComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraGetClientUberClientIdCommandComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraGetClientUberClientIdCommandComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraGetClientUberClientIdCommandLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraGetClientUberClientIdCommandLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    size_t extraUberCommandComponentCount(void) const
      {
        size_t result = 0;
        if (flagHasUberClientId)
            ++result;
        result += extraGetClientUberClientIdCommandComponentCount();
        return result;
      }
    const char *extraUberCommandComponentKey(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasUberClientId)
          {
            if (remainder == 0)
                return "UberClientId";
            --remainder;
          }
        return extraGetClientUberClientIdCommandComponentKey(remainder);
      }
    JSONValue *extraUberCommandComponentValue(size_t component_num)
      {
        size_t remainder = component_num;
        if (flagHasUberClientId)
          {
            if (remainder == 0)
                return extraUberClientIdToJSON();
            --remainder;
          }
        return extraGetClientUberClientIdCommandComponentValue(remainder);
      }
    const JSONValue *extraUberCommandComponentValue(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasUberClientId)
          {
            if (remainder == 0)
                return extraUberClientIdToJSON();
            --remainder;
          }
        return extraGetClientUberClientIdCommandComponentValue(remainder);
      }
    JSONValue *extraUberCommandLookup(const char *field_name)
      {
        if (strcmp(field_name, "UberClientId") == 0)
            return (flagHasUberClientId ? extraUberClientIdToJSON() : NULL);
        return extraGetClientUberClientIdCommandLookup(field_name);
      }
    const JSONValue *extraUberCommandLookup(const char *field_name) const
      {
        if (strcmp(field_name, "UberClientId") == 0)
            return (flagHasUberClientId ? extraUberClientIdToJSON() : NULL);
        return extraGetClientUberClientIdCommandLookup(field_name);
      }

    void setUberClientId(std::string new_value)
      {
        flagHasUberClientId = true;
        storeUberClientId = new_value;
      }
    void unsetUberClientId(void)
      {
        flagHasUberClientId = false;
      }

    virtual void extraGetClientUberClientIdCommandAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraGetClientUberClientIdCommandSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraGetClientUberClientIdCommandLookup(key);
        if (old_field == NULL)
          {
            extraGetClientUberClientIdCommandAppendPair(key, new_component);
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
    void extraUberCommandAppendPair(const char *key, JSONValue *new_component)
      {
        if (strcmp(key, "UberClientId") == 0)
            {
            fromJSONUberClientId(new_component, false);
            return;
            }
        extraGetClientUberClientIdCommandAppendPair(key, new_component);
      }
    void extraUberCommandSetField(const char *key, JSONValue *new_component)
      {
        if (strcmp(key, "UberClientId") == 0)
            {
            fromJSONUberClientId(new_component, false);
            return;
            }
        extraGetClientUberClientIdCommandSetField(key, new_component);
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
        UberCommandJSON::write_fields_as_json(handler);
        assert(flagHasUberClientId);
        handler->start_pair("UberClientId");
        handler->string_value(storeUberClientId);
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasUberClientId()))
          {
            return "When parsing the object for %what%, the \"UberClientId\" field was missing.";
          }
        return NULL;
      }

    static GetClientUberClientIdCommandJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static GetClientUberClientIdCommandJSON *from_text(const char *text, bool ignore_extras = false)
      {
        GetClientUberClientIdCommandJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<GetClientUberClientIdCommandJSON>, GetClientUberClientIdCommandJSON *, bool> generator("Type GetClientUberClientIdCommand", ignore_extras);
            parse_json_value(text, "Text for GetClientUberClientIdCommandJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static GetClientUberClientIdCommandJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        GetClientUberClientIdCommandJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<GetClientUberClientIdCommandJSON>, GetClientUberClientIdCommandJSON *, bool> generator("Type GetClientUberClientIdCommand", ignore_extras);
            parse_json_value(fp, file_name, &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    class Generator : public UberCommandJSON::Generator
      {
      private:
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorUberClientId;
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
            if (!(strcmp(getUberCommandJSONKey().c_str(), "GetClientUberClientId") == 0))
                throw("The key field has a value other than `GetClientUberClientId'.");
            GetClientUberClientIdCommandJSON *result = new GetClientUberClientIdCommandJSON();
            assert(result != NULL);
            RCHandle<GetClientUberClientIdCommandJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraGetClientUberClientIdCommandAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void handle_result(UberCommandJSON *new_result)
          {
            handle_result((GetClientUberClientIdCommandJSON *)new_result);
          }
        void finish(GetClientUberClientIdCommandJSON *result)
          {
            if (fieldGeneratorUberClientId.have_value)
              {
                result->setUberClientId(fieldGeneratorUberClientId.value);
                fieldGeneratorUberClientId.have_value = false;
              }
            else if (!(result->hasUberClientId()))
              {
                error("When parsing the object for %what%, the \"UberClientId\" field was missing.");
              }
            UberCommandJSON::Generator::finish(result);
          }
        virtual void handle_result(GetClientUberClientIdCommandJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            if (strcmp(field_name, "UberClientId") == 0)
                return &fieldGeneratorUberClientId;
            return UberCommandJSON::Generator::start_known_field(field_name);
          }

      public:
        Generator(bool ignore_extras = false) : UberCommandJSON::Generator(ignore_extras), fieldGeneratorUberClientId("field \"UberClientId\" of the GetClientUberClientIdCommand class"), unknownFieldGenerator(ignore_extras)
          {
            set_what("the GetClientUberClientIdCommand class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorUberClientId.reset();
            UberCommandJSON::Generator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* GETCLIENTUBERCLIENTIDCOMMANDJSON_H */
