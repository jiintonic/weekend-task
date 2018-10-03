/* file "UberLoginCommandJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef UBERLOGINCOMMANDJSON_H
#define UBERLOGINCOMMANDJSON_H

#pragma interface

#include "UberCommandJSON.h"
#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "DynamicResponseJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class UberLoginCommandJSON : public UberCommandJSON
  {
  private:
    bool flagHasPleaseLoginResponse;
    DynamicResponseJSON * storePleaseLoginResponse;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    UberLoginCommandJSON(const UberLoginCommandJSON &);
    UberLoginCommandJSON & operator=(const UberLoginCommandJSON &other);

    JSONValue * extraPleaseLoginResponseToJSON(void) const;

    void  fromJSONPleaseLoginResponse(JSONValue *json_value, bool ignore_extras = false);


  public:
    UberLoginCommandJSON(void);
    virtual ~UberLoginCommandJSON(void);
    const char * getUberCommandKind(void) const;
    bool  hasPleaseLoginResponse(void) const;
    DynamicResponseJSON *  getPleaseLoginResponse(void);
    const DynamicResponseJSON *  getPleaseLoginResponse(void) const;

    virtual size_t extraUberLoginCommandComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraUberLoginCommandComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraUberLoginCommandComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraUberLoginCommandComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraUberLoginCommandLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraUberLoginCommandLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    size_t extraUberCommandComponentCount(void) const
      {
        size_t result = 0;
        if (flagHasPleaseLoginResponse)
            ++result;
        result += extraUberLoginCommandComponentCount();
        return result;
      }
    const char *extraUberCommandComponentKey(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasPleaseLoginResponse)
          {
            if (remainder == 0)
                return "PleaseLoginResponse";
            --remainder;
          }
        return extraUberLoginCommandComponentKey(remainder);
      }
    JSONValue *extraUberCommandComponentValue(size_t component_num)
      {
        size_t remainder = component_num;
        if (flagHasPleaseLoginResponse)
          {
            if (remainder == 0)
                return extraPleaseLoginResponseToJSON();
            --remainder;
          }
        return extraUberLoginCommandComponentValue(remainder);
      }
    const JSONValue *extraUberCommandComponentValue(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasPleaseLoginResponse)
          {
            if (remainder == 0)
                return extraPleaseLoginResponseToJSON();
            --remainder;
          }
        return extraUberLoginCommandComponentValue(remainder);
      }
    JSONValue *extraUberCommandLookup(const char *field_name)
      {
        if (strcmp(field_name, "PleaseLoginResponse") == 0)
            return (flagHasPleaseLoginResponse ? extraPleaseLoginResponseToJSON() : NULL);
        return extraUberLoginCommandLookup(field_name);
      }
    const JSONValue *extraUberCommandLookup(const char *field_name) const
      {
        if (strcmp(field_name, "PleaseLoginResponse") == 0)
            return (flagHasPleaseLoginResponse ? extraPleaseLoginResponseToJSON() : NULL);
        return extraUberLoginCommandLookup(field_name);
      }

    void setPleaseLoginResponse(DynamicResponseJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasPleaseLoginResponse)
          {
            storePleaseLoginResponse->remove_reference();
          }
        flagHasPleaseLoginResponse = true;
        storePleaseLoginResponse = new_value;
      }
    void unsetPleaseLoginResponse(void)
      {
        if (flagHasPleaseLoginResponse)
          {
            storePleaseLoginResponse->remove_reference();
          }
        flagHasPleaseLoginResponse = false;
      }

    virtual void extraUberLoginCommandAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraUberLoginCommandSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraUberLoginCommandLookup(key);
        if (old_field == NULL)
          {
            extraUberLoginCommandAppendPair(key, new_component);
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
        if (strcmp(key, "PleaseLoginResponse") == 0)
            {
            fromJSONPleaseLoginResponse(new_component, false);
            return;
            }
        extraUberLoginCommandAppendPair(key, new_component);
      }
    void extraUberCommandSetField(const char *key, JSONValue *new_component)
      {
        if (strcmp(key, "PleaseLoginResponse") == 0)
            {
            fromJSONPleaseLoginResponse(new_component, false);
            return;
            }
        extraUberLoginCommandSetField(key, new_component);
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
        if (flagHasPleaseLoginResponse)
          {
            handler->start_pair("PleaseLoginResponse");
            storePleaseLoginResponse->write_as_json(handler);
          }
      }
    virtual const char *missing_field_error(void) const
      {
        return NULL;
      }

    static UberLoginCommandJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static UberLoginCommandJSON *from_text(const char *text, bool ignore_extras = false)
      {
        UberLoginCommandJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<UberLoginCommandJSON>, UberLoginCommandJSON *, bool> generator("Type UberLoginCommand", ignore_extras);
            parse_json_value(text, "Text for UberLoginCommandJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static UberLoginCommandJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        UberLoginCommandJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<UberLoginCommandJSON>, UberLoginCommandJSON *, bool> generator("Type UberLoginCommand", ignore_extras);
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
        JSONHoldingGenerator<DynamicResponseJSON::Generator, RCHandle<DynamicResponseJSON>, DynamicResponseJSON *, bool > fieldGeneratorPleaseLoginResponse;
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
            if (!(strcmp(getUberCommandJSONKey().c_str(), "UberLogin") == 0))
                throw("The key field has a value other than `UberLogin'.");
            UberLoginCommandJSON *result = new UberLoginCommandJSON();
            assert(result != NULL);
            RCHandle<UberLoginCommandJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraUberLoginCommandAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void handle_result(UberCommandJSON *new_result)
          {
            handle_result((UberLoginCommandJSON *)new_result);
          }
        void finish(UberLoginCommandJSON *result)
          {
            if (fieldGeneratorPleaseLoginResponse.have_value)
              {
                result->setPleaseLoginResponse(fieldGeneratorPleaseLoginResponse.value.referenced());
                fieldGeneratorPleaseLoginResponse.have_value = false;
              }
            UberCommandJSON::Generator::finish(result);
          }
        virtual void handle_result(UberLoginCommandJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            if (strcmp(field_name, "PleaseLoginResponse") == 0)
                return &fieldGeneratorPleaseLoginResponse;
            return UberCommandJSON::Generator::start_known_field(field_name);
          }

      public:
        Generator(bool ignore_extras = false) : UberCommandJSON::Generator(ignore_extras), fieldGeneratorPleaseLoginResponse("field \"PleaseLoginResponse\" of the UberLoginCommand class", ignore_extras), unknownFieldGenerator(ignore_extras)
          {
            set_what("the UberLoginCommand class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorPleaseLoginResponse.reset();
            UberCommandJSON::Generator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* UBERLOGINCOMMANDJSON_H */
