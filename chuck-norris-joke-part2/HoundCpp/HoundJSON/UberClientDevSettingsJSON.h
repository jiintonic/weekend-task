/* file "UberClientDevSettingsJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef UBERCLIENTDEVSETTINGSJSON_H
#define UBERCLIENTDEVSETTINGSJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONBooleanGenerator.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class UberClientDevSettingsJSON : public ReferenceCounted
  {
  private:
    bool flagHasUseSandboxApi;
    bool storeUseSandboxApi;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    UberClientDevSettingsJSON(const UberClientDevSettingsJSON &);
    UberClientDevSettingsJSON & operator=(const UberClientDevSettingsJSON &other);

    void  fromJSONUseSandboxApi(JSONValue *json_value, bool ignore_extras = false);


  public:
    UberClientDevSettingsJSON(void);
    virtual ~UberClientDevSettingsJSON(void);
    bool  hasUseSandboxApi(void) const;
    bool  getUseSandboxApi(void);
    const bool  getUseSandboxApi(void) const;

    virtual size_t extraUberClientDevSettingsComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraUberClientDevSettingsComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraUberClientDevSettingsComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraUberClientDevSettingsComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraUberClientDevSettingsLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraUberClientDevSettingsLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }

    void setUseSandboxApi(bool new_value)
      {
        flagHasUseSandboxApi = true;
        storeUseSandboxApi = new_value;
      }
    void unsetUseSandboxApi(void)
      {
        flagHasUseSandboxApi = false;
      }

    virtual void extraUberClientDevSettingsAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraUberClientDevSettingsSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraUberClientDevSettingsLookup(key);
        if (old_field == NULL)
          {
            extraUberClientDevSettingsAppendPair(key, new_component);
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

    void write_as_json(JSONHandler *handler) const
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
        if (flagHasUseSandboxApi)
          {
            handler->start_pair("UseSandboxApi");
            handler->boolean_value(storeUseSandboxApi);
          }
      }
    virtual const char *missing_field_error(void) const
      {
        return NULL;
      }

    static UberClientDevSettingsJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static UberClientDevSettingsJSON *from_text(const char *text, bool ignore_extras = false)
      {
        UberClientDevSettingsJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<UberClientDevSettingsJSON>, UberClientDevSettingsJSON *, bool> generator("Type UberClientDevSettings", ignore_extras);
            parse_json_value(text, "Text for UberClientDevSettingsJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static UberClientDevSettingsJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        UberClientDevSettingsJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<UberClientDevSettingsJSON>, UberClientDevSettingsJSON *, bool> generator("Type UberClientDevSettings", ignore_extras);
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
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorUseSandboxApi;
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
            UberClientDevSettingsJSON *result = new UberClientDevSettingsJSON();
            assert(result != NULL);
            RCHandle<UberClientDevSettingsJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraUberClientDevSettingsAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void finish(UberClientDevSettingsJSON *result)
          {
            if (fieldGeneratorUseSandboxApi.have_value)
              {
                result->setUseSandboxApi(fieldGeneratorUseSandboxApi.value);
                fieldGeneratorUseSandboxApi.have_value = false;
              }
          }
        virtual void handle_result(UberClientDevSettingsJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            if (strcmp(field_name, "UseSandboxApi") == 0)
                return &fieldGeneratorUseSandboxApi;
            return NULL;
          }

      public:
        Generator(bool ignore_extras = false) : fieldGeneratorUseSandboxApi("field \"UseSandboxApi\" of the UberClientDevSettings class"), unknownFieldGenerator(ignore_extras)
          {
            set_what("the UberClientDevSettings class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorUseSandboxApi.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* UBERCLIENTDEVSETTINGSJSON_H */
