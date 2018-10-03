/* file "UberApiErrorPromoFailedJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef UBERAPIERRORPROMOFAILEDJSON_H
#define UBERAPIERRORPROMOFAILEDJSON_H

#pragma interface

#include "UberApiErrorJSON.h"
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


class UberApiErrorPromoFailedJSON : public UberApiErrorJSON
  {
  private:
    bool flagHasCode;
    std::string storeCode;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    UberApiErrorPromoFailedJSON(const UberApiErrorPromoFailedJSON &);
    UberApiErrorPromoFailedJSON & operator=(const UberApiErrorPromoFailedJSON &other);

    JSONValue * extraCodeToJSON(void) const;

    void  fromJSONCode(JSONValue *json_value, bool ignore_extras = false);


  public:
    UberApiErrorPromoFailedJSON(void);
    virtual ~UberApiErrorPromoFailedJSON(void);
    bool  hasCode(void) const;
    std::string  getCode(void);
    const std::string  getCode(void) const;

    virtual size_t extraUberApiErrorPromoFailedComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraUberApiErrorPromoFailedComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraUberApiErrorPromoFailedComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraUberApiErrorPromoFailedComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraUberApiErrorPromoFailedLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraUberApiErrorPromoFailedLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    size_t extraUberApiErrorComponentCount(void) const
      {
        size_t result = 0;
        if (flagHasCode)
            ++result;
        result += extraUberApiErrorPromoFailedComponentCount();
        return result;
      }
    const char *extraUberApiErrorComponentKey(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasCode)
          {
            if (remainder == 0)
                return "Code";
            --remainder;
          }
        return extraUberApiErrorPromoFailedComponentKey(remainder);
      }
    JSONValue *extraUberApiErrorComponentValue(size_t component_num)
      {
        size_t remainder = component_num;
        if (flagHasCode)
          {
            if (remainder == 0)
                return extraCodeToJSON();
            --remainder;
          }
        return extraUberApiErrorPromoFailedComponentValue(remainder);
      }
    const JSONValue *extraUberApiErrorComponentValue(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasCode)
          {
            if (remainder == 0)
                return extraCodeToJSON();
            --remainder;
          }
        return extraUberApiErrorPromoFailedComponentValue(remainder);
      }
    JSONValue *extraUberApiErrorLookup(const char *field_name)
      {
        if (strcmp(field_name, "Code") == 0)
            return (flagHasCode ? extraCodeToJSON() : NULL);
        return extraUberApiErrorPromoFailedLookup(field_name);
      }
    const JSONValue *extraUberApiErrorLookup(const char *field_name) const
      {
        if (strcmp(field_name, "Code") == 0)
            return (flagHasCode ? extraCodeToJSON() : NULL);
        return extraUberApiErrorPromoFailedLookup(field_name);
      }

    void setCode(std::string new_value)
      {
        flagHasCode = true;
        storeCode = new_value;
      }
    void unsetCode(void)
      {
        flagHasCode = false;
      }

    virtual void extraUberApiErrorPromoFailedAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraUberApiErrorPromoFailedSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraUberApiErrorPromoFailedLookup(key);
        if (old_field == NULL)
          {
            extraUberApiErrorPromoFailedAppendPair(key, new_component);
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
    void extraUberApiErrorAppendPair(const char *key, JSONValue *new_component)
      {
        if (strcmp(key, "Code") == 0)
            {
            fromJSONCode(new_component, false);
            return;
            }
        extraUberApiErrorPromoFailedAppendPair(key, new_component);
      }
    void extraUberApiErrorSetField(const char *key, JSONValue *new_component)
      {
        if (strcmp(key, "Code") == 0)
            {
            fromJSONCode(new_component, false);
            return;
            }
        extraUberApiErrorPromoFailedSetField(key, new_component);
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
        UberApiErrorJSON::write_fields_as_json(handler);
        assert(flagHasCode);
        handler->start_pair("Code");
        handler->string_value(storeCode);
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasCode()))
          {
            return "When parsing the object for %what%, the \"Code\" field was missing.";
          }
        return NULL;
      }

    static UberApiErrorPromoFailedJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static UberApiErrorPromoFailedJSON *from_text(const char *text, bool ignore_extras = false)
      {
        UberApiErrorPromoFailedJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<UberApiErrorPromoFailedJSON>, UberApiErrorPromoFailedJSON *, bool> generator("Type UberApiErrorPromoFailed", ignore_extras);
            parse_json_value(text, "Text for UberApiErrorPromoFailedJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static UberApiErrorPromoFailedJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        UberApiErrorPromoFailedJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<UberApiErrorPromoFailedJSON>, UberApiErrorPromoFailedJSON *, bool> generator("Type UberApiErrorPromoFailed", ignore_extras);
            parse_json_value(fp, file_name, &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    class Generator : public UberApiErrorJSON::Generator
      {
      private:
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorCode;
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
            UberApiErrorPromoFailedJSON *result = new UberApiErrorPromoFailedJSON();
            assert(result != NULL);
            RCHandle<UberApiErrorPromoFailedJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraUberApiErrorPromoFailedAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void handle_result(UberApiErrorJSON *new_result)
          {
            handle_result((UberApiErrorPromoFailedJSON *)new_result);
          }
        void finish(UberApiErrorPromoFailedJSON *result)
          {
            if (fieldGeneratorCode.have_value)
              {
                result->setCode(fieldGeneratorCode.value);
                fieldGeneratorCode.have_value = false;
              }
            else if (!(result->hasCode()))
              {
                error("When parsing the object for %what%, the \"Code\" field was missing.");
              }
            UberApiErrorJSON::Generator::finish(result);
          }
        virtual void handle_result(UberApiErrorPromoFailedJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            if (strcmp(field_name, "Code") == 0)
                return &fieldGeneratorCode;
            return UberApiErrorJSON::Generator::start_known_field(field_name);
          }

      public:
        Generator(bool ignore_extras = false) : UberApiErrorJSON::Generator(ignore_extras), fieldGeneratorCode("field \"Code\" of the UberApiErrorPromoFailed class"), unknownFieldGenerator(ignore_extras)
          {
            set_what("the UberApiErrorPromoFailed class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorCode.reset();
            UberApiErrorJSON::Generator::reset();
            unknownFieldGenerator.reset();
          }
      };
    static UberApiErrorPromoFailedJSON *from_UberApiErrorJSON_json(const UberApiErrorJSON * ancestor, bool ignore_extras = false)
      {
        assert(ancestor != NULL);
        UberApiErrorPromoFailedJSON * result;
          {
            JSONHoldingGenerator<Generator, RCHandle<UberApiErrorPromoFailedJSON>, UberApiErrorPromoFailedJSON *, bool> handler("Type UberApiErrorPromoFailed", ignore_extras);
            ancestor->write_as_json(&handler);
            result = handler.value.referenced();
            result->add_reference();
          }
        result->remove_reference_no_delete();
        return result;
      }
  };

#endif /* UBERAPIERRORPROMOFAILEDJSON_H */
