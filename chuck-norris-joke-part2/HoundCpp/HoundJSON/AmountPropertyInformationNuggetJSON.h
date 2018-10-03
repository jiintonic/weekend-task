/* file "AmountPropertyInformationNuggetJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef AMOUNTPROPERTYINFORMATIONNUGGETJSON_H
#define AMOUNTPROPERTYINFORMATIONNUGGETJSON_H

#pragma interface

#include "PropertyValueInformationNuggetJSON.h"
#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "AmountJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class AmountPropertyInformationNuggetJSON : public PropertyValueInformationNuggetJSON
  {
  private:
    bool flagHasValue;
    AmountJSON * storeValue;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    AmountPropertyInformationNuggetJSON(const AmountPropertyInformationNuggetJSON &);
    AmountPropertyInformationNuggetJSON & operator=(const AmountPropertyInformationNuggetJSON &other);

    JSONValue * extraValueToJSON(void) const;

    void  fromJSONValue(JSONValue *json_value, bool ignore_extras = false);


  public:
    AmountPropertyInformationNuggetJSON(void);
    virtual ~AmountPropertyInformationNuggetJSON(void);
    const char * getPropertyValueKind(void) const;
    bool  hasValue(void) const;
    AmountJSON *  getValue(void);
    const AmountJSON *  getValue(void) const;

    virtual size_t extraAmountPropertyInformationNuggetComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraAmountPropertyInformationNuggetComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraAmountPropertyInformationNuggetComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraAmountPropertyInformationNuggetComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraAmountPropertyInformationNuggetLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraAmountPropertyInformationNuggetLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    size_t extraPropertyValueInformationNuggetComponentCount(void) const
      {
        size_t result = 0;
        if (flagHasValue)
            ++result;
        result += extraAmountPropertyInformationNuggetComponentCount();
        return result;
      }
    const char *extraPropertyValueInformationNuggetComponentKey(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasValue)
          {
            if (remainder == 0)
                return "Value";
            --remainder;
          }
        return extraAmountPropertyInformationNuggetComponentKey(remainder);
      }
    JSONValue *extraPropertyValueInformationNuggetComponentValue(size_t component_num)
      {
        size_t remainder = component_num;
        if (flagHasValue)
          {
            if (remainder == 0)
                return extraValueToJSON();
            --remainder;
          }
        return extraAmountPropertyInformationNuggetComponentValue(remainder);
      }
    const JSONValue *extraPropertyValueInformationNuggetComponentValue(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasValue)
          {
            if (remainder == 0)
                return extraValueToJSON();
            --remainder;
          }
        return extraAmountPropertyInformationNuggetComponentValue(remainder);
      }
    JSONValue *extraPropertyValueInformationNuggetLookup(const char *field_name)
      {
        if (strcmp(field_name, "Value") == 0)
            return (flagHasValue ? extraValueToJSON() : NULL);
        return extraAmountPropertyInformationNuggetLookup(field_name);
      }
    const JSONValue *extraPropertyValueInformationNuggetLookup(const char *field_name) const
      {
        if (strcmp(field_name, "Value") == 0)
            return (flagHasValue ? extraValueToJSON() : NULL);
        return extraAmountPropertyInformationNuggetLookup(field_name);
      }

    void setValue(AmountJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasValue)
          {
            storeValue->remove_reference();
          }
        flagHasValue = true;
        storeValue = new_value;
      }
    void unsetValue(void)
      {
        if (flagHasValue)
          {
            storeValue->remove_reference();
          }
        flagHasValue = false;
      }

    virtual void extraAmountPropertyInformationNuggetAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraAmountPropertyInformationNuggetSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraAmountPropertyInformationNuggetLookup(key);
        if (old_field == NULL)
          {
            extraAmountPropertyInformationNuggetAppendPair(key, new_component);
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
    void extraPropertyValueInformationNuggetAppendPair(const char *key, JSONValue *new_component)
      {
        if (strcmp(key, "Value") == 0)
            {
            fromJSONValue(new_component, false);
            return;
            }
        extraAmountPropertyInformationNuggetAppendPair(key, new_component);
      }
    void extraPropertyValueInformationNuggetSetField(const char *key, JSONValue *new_component)
      {
        if (strcmp(key, "Value") == 0)
            {
            fromJSONValue(new_component, false);
            return;
            }
        extraAmountPropertyInformationNuggetSetField(key, new_component);
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
        PropertyValueInformationNuggetJSON::write_fields_as_json(handler);
        assert(flagHasValue);
        handler->start_pair("Value");
        storeValue->write_as_json(handler);
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasValue()))
          {
            return "When parsing the object for %what%, the \"Value\" field was missing.";
          }
        return NULL;
      }

    static AmountPropertyInformationNuggetJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static AmountPropertyInformationNuggetJSON *from_text(const char *text, bool ignore_extras = false)
      {
        AmountPropertyInformationNuggetJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<AmountPropertyInformationNuggetJSON>, AmountPropertyInformationNuggetJSON *, bool> generator("Type AmountPropertyInformationNugget", ignore_extras);
            parse_json_value(text, "Text for AmountPropertyInformationNuggetJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static AmountPropertyInformationNuggetJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        AmountPropertyInformationNuggetJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<AmountPropertyInformationNuggetJSON>, AmountPropertyInformationNuggetJSON *, bool> generator("Type AmountPropertyInformationNugget", ignore_extras);
            parse_json_value(fp, file_name, &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    class Generator : public PropertyValueInformationNuggetJSON::Generator
      {
      private:
        JSONHoldingGenerator<AmountJSON::Generator, RCHandle<AmountJSON>, AmountJSON *, bool > fieldGeneratorValue;
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
            if (!(strcmp(getPropertyValueInformationNuggetJSONKey().c_str(), "AmountProperty") == 0))
                throw("The key field has a value other than `AmountProperty'.");
            AmountPropertyInformationNuggetJSON *result = new AmountPropertyInformationNuggetJSON();
            assert(result != NULL);
            RCHandle<AmountPropertyInformationNuggetJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraAmountPropertyInformationNuggetAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void handle_result(PropertyValueInformationNuggetJSON *new_result)
          {
            handle_result((AmountPropertyInformationNuggetJSON *)new_result);
          }
        void finish(AmountPropertyInformationNuggetJSON *result)
          {
            if (fieldGeneratorValue.have_value)
              {
                result->setValue(fieldGeneratorValue.value.referenced());
                fieldGeneratorValue.have_value = false;
              }
            else if (!(result->hasValue()))
              {
                error("When parsing the object for %what%, the \"Value\" field was missing.");
              }
            PropertyValueInformationNuggetJSON::Generator::finish(result);
          }
        virtual void handle_result(AmountPropertyInformationNuggetJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            if (strcmp(field_name, "Value") == 0)
                return &fieldGeneratorValue;
            return PropertyValueInformationNuggetJSON::Generator::start_known_field(field_name);
          }

      public:
        Generator(bool ignore_extras = false) : PropertyValueInformationNuggetJSON::Generator(ignore_extras), fieldGeneratorValue("field \"Value\" of the AmountPropertyInformationNugget class", ignore_extras), unknownFieldGenerator(ignore_extras)
          {
            set_what("the AmountPropertyInformationNugget class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorValue.reset();
            PropertyValueInformationNuggetJSON::Generator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* AMOUNTPROPERTYINFORMATIONNUGGETJSON_H */
