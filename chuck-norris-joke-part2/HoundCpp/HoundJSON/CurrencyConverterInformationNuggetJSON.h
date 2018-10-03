/* file "CurrencyConverterInformationNuggetJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef CURRENCYCONVERTERINFORMATIONNUGGETJSON_H
#define CURRENCYCONVERTERINFORMATIONNUGGETJSON_H

#pragma interface

#include "InformationNuggetJSON.h"
#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONHoldingArrayGenerator.h"
#include <vector>
#include "CurrencyConversionJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class CurrencyConverterInformationNuggetJSON : public InformationNuggetJSON
  {
  private:
    bool flagHasConversions;
    std::vector< CurrencyConversionJSON * > storeConversions;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    CurrencyConverterInformationNuggetJSON(const CurrencyConverterInformationNuggetJSON &);
    CurrencyConverterInformationNuggetJSON & operator=(const CurrencyConverterInformationNuggetJSON &other);

    JSONValue * extraConversionsToJSON(void) const;

    void  fromJSONConversions(JSONValue *json_value, bool ignore_extras = false);


  public:
    CurrencyConverterInformationNuggetJSON(void);
    virtual ~CurrencyConverterInformationNuggetJSON(void);
    const char * getNuggetKind(void) const;
    bool  hasConversions(void) const;
    size_t  countOfConversions(void) const;
    CurrencyConversionJSON *  elementOfConversions(size_t element_num);
    const CurrencyConversionJSON *  elementOfConversions(size_t element_num) const;
    std::vector< CurrencyConversionJSON * >  getConversions(void);
    const std::vector< CurrencyConversionJSON * >  getConversions(void) const;

    virtual size_t extraCurrencyConverterInformationNuggetComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraCurrencyConverterInformationNuggetComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraCurrencyConverterInformationNuggetComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraCurrencyConverterInformationNuggetComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraCurrencyConverterInformationNuggetLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraCurrencyConverterInformationNuggetLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    size_t extraInformationNuggetComponentCount(void) const
      {
        size_t result = 0;
        if (flagHasConversions)
            ++result;
        result += extraCurrencyConverterInformationNuggetComponentCount();
        return result;
      }
    const char *extraInformationNuggetComponentKey(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasConversions)
          {
            if (remainder == 0)
                return "Conversions";
            --remainder;
          }
        return extraCurrencyConverterInformationNuggetComponentKey(remainder);
      }
    JSONValue *extraInformationNuggetComponentValue(size_t component_num)
      {
        size_t remainder = component_num;
        if (flagHasConversions)
          {
            if (remainder == 0)
                return extraConversionsToJSON();
            --remainder;
          }
        return extraCurrencyConverterInformationNuggetComponentValue(remainder);
      }
    const JSONValue *extraInformationNuggetComponentValue(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasConversions)
          {
            if (remainder == 0)
                return extraConversionsToJSON();
            --remainder;
          }
        return extraCurrencyConverterInformationNuggetComponentValue(remainder);
      }
    JSONValue *extraInformationNuggetLookup(const char *field_name)
      {
        if (strcmp(field_name, "Conversions") == 0)
            return (flagHasConversions ? extraConversionsToJSON() : NULL);
        return extraCurrencyConverterInformationNuggetLookup(field_name);
      }
    const JSONValue *extraInformationNuggetLookup(const char *field_name) const
      {
        if (strcmp(field_name, "Conversions") == 0)
            return (flagHasConversions ? extraConversionsToJSON() : NULL);
        return extraCurrencyConverterInformationNuggetLookup(field_name);
      }

    void initConversions(void)
      {
        if (flagHasConversions)
          {
            for (size_t num2 = 0; num2 < storeConversions.size(); ++num2)
              {
                storeConversions[num2]->remove_reference();
              }
          }
        flagHasConversions = true;
        storeConversions.clear();
      }
    void appendConversions(CurrencyConversionJSON * to_append)
      {
        if (!flagHasConversions)
          {
            flagHasConversions = true;
            storeConversions.clear();
          }
        assert(flagHasConversions);
        to_append->add_reference();
        storeConversions.push_back(to_append);
      }
    void unsetConversions(void)
      {
        if (flagHasConversions)
          {
            for (size_t num3 = 0; num3 < storeConversions.size(); ++num3)
              {
                storeConversions[num3]->remove_reference();
              }
          }
        flagHasConversions = false;
        storeConversions.clear();
      }

    virtual void extraCurrencyConverterInformationNuggetAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraCurrencyConverterInformationNuggetSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraCurrencyConverterInformationNuggetLookup(key);
        if (old_field == NULL)
          {
            extraCurrencyConverterInformationNuggetAppendPair(key, new_component);
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
    void extraInformationNuggetAppendPair(const char *key, JSONValue *new_component)
      {
        if (strcmp(key, "Conversions") == 0)
            {
            fromJSONConversions(new_component, false);
            return;
            }
        extraCurrencyConverterInformationNuggetAppendPair(key, new_component);
      }
    void extraInformationNuggetSetField(const char *key, JSONValue *new_component)
      {
        if (strcmp(key, "Conversions") == 0)
            {
            fromJSONConversions(new_component, false);
            return;
            }
        extraCurrencyConverterInformationNuggetSetField(key, new_component);
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
        InformationNuggetJSON::write_fields_as_json(handler);
        assert(flagHasConversions);
        handler->start_pair("Conversions");
        handler->start_array();
        for (size_t num1 = 0; num1 < storeConversions.size(); ++num1)
          {
            storeConversions[num1]->write_as_json(handler);
          }
        handler->finish_array();
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasConversions()))
          {
            return "When parsing the object for %what%, the \"Conversions\" field was missing.";
          }
        return NULL;
      }

    static CurrencyConverterInformationNuggetJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static CurrencyConverterInformationNuggetJSON *from_text(const char *text, bool ignore_extras = false)
      {
        CurrencyConverterInformationNuggetJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<CurrencyConverterInformationNuggetJSON>, CurrencyConverterInformationNuggetJSON *, bool> generator("Type CurrencyConverterInformationNugget", ignore_extras);
            parse_json_value(text, "Text for CurrencyConverterInformationNuggetJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static CurrencyConverterInformationNuggetJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        CurrencyConverterInformationNuggetJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<CurrencyConverterInformationNuggetJSON>, CurrencyConverterInformationNuggetJSON *, bool> generator("Type CurrencyConverterInformationNugget", ignore_extras);
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
        JSONHoldingArrayGenerator<CurrencyConversionJSON::Generator, RCHandle<CurrencyConversionJSON>, CurrencyConversionJSON *, bool > fieldGeneratorConversions;
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
            if (!(strcmp(getInformationNuggetJSONKey().c_str(), "CurrencyConverter") == 0))
                throw("The key field has a value other than `CurrencyConverter'.");
            CurrencyConverterInformationNuggetJSON *result = new CurrencyConverterInformationNuggetJSON();
            assert(result != NULL);
            RCHandle<CurrencyConverterInformationNuggetJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraCurrencyConverterInformationNuggetAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void handle_result(InformationNuggetJSON *new_result)
          {
            handle_result((CurrencyConverterInformationNuggetJSON *)new_result);
          }
        void finish(CurrencyConverterInformationNuggetJSON *result)
          {
            if (fieldGeneratorConversions.have_value)
              {
                result->initConversions();
                size_t count = fieldGeneratorConversions.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendConversions(fieldGeneratorConversions.value[num].referenced());
                  }
                fieldGeneratorConversions.value.clear();
                fieldGeneratorConversions.have_value = false;
              }
            else if (!(result->hasConversions()))
              {
                error("When parsing the object for %what%, the \"Conversions\" field was missing.");
              }
            InformationNuggetJSON::Generator::finish(result);
          }
        virtual void handle_result(CurrencyConverterInformationNuggetJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            if (strcmp(field_name, "Conversions") == 0)
                return &fieldGeneratorConversions;
            return InformationNuggetJSON::Generator::start_known_field(field_name);
          }

      public:
        Generator(bool ignore_extras = false) : InformationNuggetJSON::Generator(ignore_extras), fieldGeneratorConversions("field \"Conversions\" of the CurrencyConverterInformationNugget class", ignore_extras), unknownFieldGenerator(ignore_extras)
          {
            set_what("the CurrencyConverterInformationNugget class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorConversions.reset();
            InformationNuggetJSON::Generator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* CURRENCYCONVERTERINFORMATIONNUGGETJSON_H */
