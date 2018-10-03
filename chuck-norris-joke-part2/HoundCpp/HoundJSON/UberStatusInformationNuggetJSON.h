/* file "UberStatusInformationNuggetJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef UBERSTATUSINFORMATIONNUGGETJSON_H
#define UBERSTATUSINFORMATIONNUGGETJSON_H

#pragma interface

#include "UberInformationNuggetJSON.h"
#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "UberCompositeRequestJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class UberStatusInformationNuggetJSON : public UberInformationNuggetJSON
  {
  private:
    bool flagHasUberRequest;
    UberCompositeRequestJSON * storeUberRequest;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    UberStatusInformationNuggetJSON(const UberStatusInformationNuggetJSON &);
    UberStatusInformationNuggetJSON & operator=(const UberStatusInformationNuggetJSON &other);

    JSONValue * extraUberRequestToJSON(void) const;

    void  fromJSONUberRequest(JSONValue *json_value, bool ignore_extras = false);


  public:
    UberStatusInformationNuggetJSON(void);
    virtual ~UberStatusInformationNuggetJSON(void);
    const char * getUberNuggetKind(void) const;
    bool  hasUberRequest(void) const;
    UberCompositeRequestJSON *  getUberRequest(void);
    const UberCompositeRequestJSON *  getUberRequest(void) const;

    virtual size_t extraUberStatusInformationNuggetComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraUberStatusInformationNuggetComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraUberStatusInformationNuggetComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraUberStatusInformationNuggetComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraUberStatusInformationNuggetLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraUberStatusInformationNuggetLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    size_t extraUberInformationNuggetComponentCount(void) const
      {
        size_t result = 0;
        if (flagHasUberRequest)
            ++result;
        result += extraUberStatusInformationNuggetComponentCount();
        return result;
      }
    const char *extraUberInformationNuggetComponentKey(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasUberRequest)
          {
            if (remainder == 0)
                return "UberRequest";
            --remainder;
          }
        return extraUberStatusInformationNuggetComponentKey(remainder);
      }
    JSONValue *extraUberInformationNuggetComponentValue(size_t component_num)
      {
        size_t remainder = component_num;
        if (flagHasUberRequest)
          {
            if (remainder == 0)
                return extraUberRequestToJSON();
            --remainder;
          }
        return extraUberStatusInformationNuggetComponentValue(remainder);
      }
    const JSONValue *extraUberInformationNuggetComponentValue(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasUberRequest)
          {
            if (remainder == 0)
                return extraUberRequestToJSON();
            --remainder;
          }
        return extraUberStatusInformationNuggetComponentValue(remainder);
      }
    JSONValue *extraUberInformationNuggetLookup(const char *field_name)
      {
        if (strcmp(field_name, "UberRequest") == 0)
            return (flagHasUberRequest ? extraUberRequestToJSON() : NULL);
        return extraUberStatusInformationNuggetLookup(field_name);
      }
    const JSONValue *extraUberInformationNuggetLookup(const char *field_name) const
      {
        if (strcmp(field_name, "UberRequest") == 0)
            return (flagHasUberRequest ? extraUberRequestToJSON() : NULL);
        return extraUberStatusInformationNuggetLookup(field_name);
      }

    void setUberRequest(UberCompositeRequestJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasUberRequest)
          {
            storeUberRequest->remove_reference();
          }
        flagHasUberRequest = true;
        storeUberRequest = new_value;
      }
    void unsetUberRequest(void)
      {
        if (flagHasUberRequest)
          {
            storeUberRequest->remove_reference();
          }
        flagHasUberRequest = false;
      }

    virtual void extraUberStatusInformationNuggetAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraUberStatusInformationNuggetSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraUberStatusInformationNuggetLookup(key);
        if (old_field == NULL)
          {
            extraUberStatusInformationNuggetAppendPair(key, new_component);
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
    void extraUberInformationNuggetAppendPair(const char *key, JSONValue *new_component)
      {
        if (strcmp(key, "UberRequest") == 0)
            {
            fromJSONUberRequest(new_component, false);
            return;
            }
        extraUberStatusInformationNuggetAppendPair(key, new_component);
      }
    void extraUberInformationNuggetSetField(const char *key, JSONValue *new_component)
      {
        if (strcmp(key, "UberRequest") == 0)
            {
            fromJSONUberRequest(new_component, false);
            return;
            }
        extraUberStatusInformationNuggetSetField(key, new_component);
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
        UberInformationNuggetJSON::write_fields_as_json(handler);
        if (flagHasUberRequest)
          {
            handler->start_pair("UberRequest");
            storeUberRequest->write_as_json(handler);
          }
      }
    virtual const char *missing_field_error(void) const
      {
        return NULL;
      }

    static UberStatusInformationNuggetJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static UberStatusInformationNuggetJSON *from_text(const char *text, bool ignore_extras = false)
      {
        UberStatusInformationNuggetJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<UberStatusInformationNuggetJSON>, UberStatusInformationNuggetJSON *, bool> generator("Type UberStatusInformationNugget", ignore_extras);
            parse_json_value(text, "Text for UberStatusInformationNuggetJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static UberStatusInformationNuggetJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        UberStatusInformationNuggetJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<UberStatusInformationNuggetJSON>, UberStatusInformationNuggetJSON *, bool> generator("Type UberStatusInformationNugget", ignore_extras);
            parse_json_value(fp, file_name, &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    class Generator : public UberInformationNuggetJSON::Generator
      {
      private:
        JSONHoldingGenerator<UberCompositeRequestJSON::Generator, RCHandle<UberCompositeRequestJSON>, UberCompositeRequestJSON *, bool > fieldGeneratorUberRequest;
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
            if (!(strcmp(getUberInformationNuggetJSONKey().c_str(), "UberStatus") == 0))
                throw("The key field has a value other than `UberStatus'.");
            UberStatusInformationNuggetJSON *result = new UberStatusInformationNuggetJSON();
            assert(result != NULL);
            RCHandle<UberStatusInformationNuggetJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraUberStatusInformationNuggetAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void handle_result(UberInformationNuggetJSON *new_result)
          {
            handle_result((UberStatusInformationNuggetJSON *)new_result);
          }
        void finish(UberStatusInformationNuggetJSON *result)
          {
            if (fieldGeneratorUberRequest.have_value)
              {
                result->setUberRequest(fieldGeneratorUberRequest.value.referenced());
                fieldGeneratorUberRequest.have_value = false;
              }
            UberInformationNuggetJSON::Generator::finish(result);
          }
        virtual void handle_result(UberStatusInformationNuggetJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            if (strcmp(field_name, "UberRequest") == 0)
                return &fieldGeneratorUberRequest;
            return UberInformationNuggetJSON::Generator::start_known_field(field_name);
          }

      public:
        Generator(bool ignore_extras = false) : UberInformationNuggetJSON::Generator(ignore_extras), fieldGeneratorUberRequest("field \"UberRequest\" of the UberStatusInformationNugget class", ignore_extras), unknownFieldGenerator(ignore_extras)
          {
            set_what("the UberStatusInformationNugget class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorUberRequest.reset();
            UberInformationNuggetJSON::Generator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* UBERSTATUSINFORMATIONNUGGETJSON_H */
