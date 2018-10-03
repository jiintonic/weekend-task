/* file "MonetaryAmountJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef MONETARYAMOUNTJSON_H
#define MONETARYAMOUNTJSON_H

#pragma interface

#include "AmountJSON.h"
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


class MonetaryAmountJSON : public AmountJSON
  {
  private:
    bool flagHasCurrencyCode;
    std::string storeCurrencyCode;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    MonetaryAmountJSON(const MonetaryAmountJSON &);
    MonetaryAmountJSON & operator=(const MonetaryAmountJSON &other);

    JSONValue * extraCurrencyCodeToJSON(void) const;

    void  fromJSONCurrencyCode(JSONValue *json_value, bool ignore_extras = false);


  public:
    MonetaryAmountJSON(void);
    virtual ~MonetaryAmountJSON(void);
    bool  hasCurrencyCode(void) const;
    std::string  getCurrencyCode(void);
    const std::string  getCurrencyCode(void) const;

    virtual size_t extraMonetaryAmountComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraMonetaryAmountComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraMonetaryAmountComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraMonetaryAmountComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraMonetaryAmountLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraMonetaryAmountLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    size_t extraAmountComponentCount(void) const
      {
        size_t result = 0;
        if (flagHasCurrencyCode)
            ++result;
        result += extraMonetaryAmountComponentCount();
        return result;
      }
    const char *extraAmountComponentKey(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasCurrencyCode)
          {
            if (remainder == 0)
                return "CurrencyCode";
            --remainder;
          }
        return extraMonetaryAmountComponentKey(remainder);
      }
    JSONValue *extraAmountComponentValue(size_t component_num)
      {
        size_t remainder = component_num;
        if (flagHasCurrencyCode)
          {
            if (remainder == 0)
                return extraCurrencyCodeToJSON();
            --remainder;
          }
        return extraMonetaryAmountComponentValue(remainder);
      }
    const JSONValue *extraAmountComponentValue(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasCurrencyCode)
          {
            if (remainder == 0)
                return extraCurrencyCodeToJSON();
            --remainder;
          }
        return extraMonetaryAmountComponentValue(remainder);
      }
    JSONValue *extraAmountLookup(const char *field_name)
      {
        if (strcmp(field_name, "CurrencyCode") == 0)
            return (flagHasCurrencyCode ? extraCurrencyCodeToJSON() : NULL);
        return extraMonetaryAmountLookup(field_name);
      }
    const JSONValue *extraAmountLookup(const char *field_name) const
      {
        if (strcmp(field_name, "CurrencyCode") == 0)
            return (flagHasCurrencyCode ? extraCurrencyCodeToJSON() : NULL);
        return extraMonetaryAmountLookup(field_name);
      }

    void setCurrencyCode(std::string new_value)
      {
        flagHasCurrencyCode = true;
        storeCurrencyCode = new_value;
      }
    void unsetCurrencyCode(void)
      {
        flagHasCurrencyCode = false;
      }

    virtual void extraMonetaryAmountAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraMonetaryAmountSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraMonetaryAmountLookup(key);
        if (old_field == NULL)
          {
            extraMonetaryAmountAppendPair(key, new_component);
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
    void extraAmountAppendPair(const char *key, JSONValue *new_component)
      {
        if (strcmp(key, "CurrencyCode") == 0)
            {
            fromJSONCurrencyCode(new_component, false);
            return;
            }
        extraMonetaryAmountAppendPair(key, new_component);
      }
    void extraAmountSetField(const char *key, JSONValue *new_component)
      {
        if (strcmp(key, "CurrencyCode") == 0)
            {
            fromJSONCurrencyCode(new_component, false);
            return;
            }
        extraMonetaryAmountSetField(key, new_component);
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
        AmountJSON::write_fields_as_json(handler);
        assert(flagHasCurrencyCode);
        handler->start_pair("CurrencyCode");
        handler->string_value(storeCurrencyCode);
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasCurrencyCode()))
          {
            return "When parsing the object for %what%, the \"CurrencyCode\" field was missing.";
          }
        return NULL;
      }

    static MonetaryAmountJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static MonetaryAmountJSON *from_text(const char *text, bool ignore_extras = false)
      {
        MonetaryAmountJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<MonetaryAmountJSON>, MonetaryAmountJSON *, bool> generator("Type MonetaryAmount", ignore_extras);
            parse_json_value(text, "Text for MonetaryAmountJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static MonetaryAmountJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        MonetaryAmountJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<MonetaryAmountJSON>, MonetaryAmountJSON *, bool> generator("Type MonetaryAmount", ignore_extras);
            parse_json_value(fp, file_name, &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    class Generator : public AmountJSON::Generator
      {
      private:
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorCurrencyCode;
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
            MonetaryAmountJSON *result = new MonetaryAmountJSON();
            assert(result != NULL);
            RCHandle<MonetaryAmountJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraMonetaryAmountAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void handle_result(AmountJSON *new_result)
          {
            handle_result((MonetaryAmountJSON *)new_result);
          }
        void finish(MonetaryAmountJSON *result)
          {
            if (fieldGeneratorCurrencyCode.have_value)
              {
                result->setCurrencyCode(fieldGeneratorCurrencyCode.value);
                fieldGeneratorCurrencyCode.have_value = false;
              }
            else if (!(result->hasCurrencyCode()))
              {
                error("When parsing the object for %what%, the \"CurrencyCode\" field was missing.");
              }
            AmountJSON::Generator::finish(result);
          }
        virtual void handle_result(MonetaryAmountJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            if (strcmp(field_name, "CurrencyCode") == 0)
                return &fieldGeneratorCurrencyCode;
            return AmountJSON::Generator::start_known_field(field_name);
          }

      public:
        Generator(bool ignore_extras = false) : AmountJSON::Generator(ignore_extras), fieldGeneratorCurrencyCode("field \"CurrencyCode\" of the MonetaryAmount class"), unknownFieldGenerator(ignore_extras)
          {
            set_what("the MonetaryAmount class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorCurrencyCode.reset();
            AmountJSON::Generator::reset();
            unknownFieldGenerator.reset();
          }
      };
    static MonetaryAmountJSON *from_AmountJSON_json(const AmountJSON * ancestor, bool ignore_extras = false)
      {
        assert(ancestor != NULL);
        MonetaryAmountJSON * result;
          {
            JSONHoldingGenerator<Generator, RCHandle<MonetaryAmountJSON>, MonetaryAmountJSON *, bool> handler("Type MonetaryAmount", ignore_extras);
            ancestor->write_as_json(&handler);
            result = handler.value.referenced();
            result->add_reference();
          }
        result->remove_reference_no_delete();
        return result;
      }
  };

#endif /* MONETARYAMOUNTJSON_H */
