/* file "ScientificNotationQuantityJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef SCIENTIFICNOTATIONQUANTITYJSON_H
#define SCIENTIFICNOTATIONQUANTITYJSON_H

#pragma interface

#include "QuantityJSON.h"
#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONNumberTextGenerator.h"
#include "JSONDoubleGenerator.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class ScientificNotationQuantityJSON : public QuantityJSON
  {
  private:
    bool flagHasValue;
    double storeValue;
    std::string textStoreValue;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    ScientificNotationQuantityJSON(const ScientificNotationQuantityJSON &);
    ScientificNotationQuantityJSON & operator=(const ScientificNotationQuantityJSON &other);

    JSONValue * extraValueToJSON(void) const;

    void  fromJSONValue(JSONValue *json_value, bool ignore_extras = false);


  public:
    ScientificNotationQuantityJSON(void);
    virtual ~ScientificNotationQuantityJSON(void);
    const char * getQuantityKind(void) const;
    bool  hasValue(void) const;
    double  getValue(void);
    const double  getValue(void) const;
    std::string  getValueAsText(void) const;

    virtual size_t extraScientificNotationQuantityComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraScientificNotationQuantityComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraScientificNotationQuantityComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraScientificNotationQuantityComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraScientificNotationQuantityLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraScientificNotationQuantityLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    size_t extraQuantityComponentCount(void) const
      {
        size_t result = 0;
        if (flagHasValue)
            ++result;
        result += extraScientificNotationQuantityComponentCount();
        return result;
      }
    const char *extraQuantityComponentKey(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasValue)
          {
            if (remainder == 0)
                return "Value";
            --remainder;
          }
        return extraScientificNotationQuantityComponentKey(remainder);
      }
    JSONValue *extraQuantityComponentValue(size_t component_num)
      {
        size_t remainder = component_num;
        if (flagHasValue)
          {
            if (remainder == 0)
                return extraValueToJSON();
            --remainder;
          }
        return extraScientificNotationQuantityComponentValue(remainder);
      }
    const JSONValue *extraQuantityComponentValue(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasValue)
          {
            if (remainder == 0)
                return extraValueToJSON();
            --remainder;
          }
        return extraScientificNotationQuantityComponentValue(remainder);
      }
    JSONValue *extraQuantityLookup(const char *field_name)
      {
        if (strcmp(field_name, "Value") == 0)
            return (flagHasValue ? extraValueToJSON() : NULL);
        return extraScientificNotationQuantityLookup(field_name);
      }
    const JSONValue *extraQuantityLookup(const char *field_name) const
      {
        if (strcmp(field_name, "Value") == 0)
            return (flagHasValue ? extraValueToJSON() : NULL);
        return extraScientificNotationQuantityLookup(field_name);
      }

    void setValue(double new_value)
      {
        flagHasValue = true;
        storeValue = new_value;
        textStoreValue = "";
      }
    void setValueText(std::string new_value)
      {
        flagHasValue = true;
        if (!(JSONWriter::is_valid_number_format(new_value.c_str())))
            throw("The text value for field Value of ScientificNotationQuantityJSON is not a valid number.");
        textStoreValue = new_value;
      }
    void unsetValue(void)
      {
        flagHasValue = false;
      }

    virtual void extraScientificNotationQuantityAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraScientificNotationQuantitySetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraScientificNotationQuantityLookup(key);
        if (old_field == NULL)
          {
            extraScientificNotationQuantityAppendPair(key, new_component);
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
    void extraQuantityAppendPair(const char *key, JSONValue *new_component)
      {
        if (strcmp(key, "Value") == 0)
            {
            fromJSONValue(new_component, false);
            return;
            }
        extraScientificNotationQuantityAppendPair(key, new_component);
      }
    void extraQuantitySetField(const char *key, JSONValue *new_component)
      {
        if (strcmp(key, "Value") == 0)
            {
            fromJSONValue(new_component, false);
            return;
            }
        extraScientificNotationQuantitySetField(key, new_component);
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
        QuantityJSON::write_fields_as_json(handler);
        assert(flagHasValue);
        handler->start_pair("Value");
        if (textStoreValue != "")
            handler->number_value(textStoreValue.c_str());
        else if (((double)(long int)storeValue) == storeValue)
            handler->number_value((long int)storeValue);
        else
            handler->number_value(storeValue);
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasValue()))
          {
            return "When parsing the object for %what%, the \"Value\" field was missing.";
          }
        return NULL;
      }

    static ScientificNotationQuantityJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static ScientificNotationQuantityJSON *from_text(const char *text, bool ignore_extras = false)
      {
        ScientificNotationQuantityJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<ScientificNotationQuantityJSON>, ScientificNotationQuantityJSON *, bool> generator("Type ScientificNotationQuantity", ignore_extras);
            parse_json_value(text, "Text for ScientificNotationQuantityJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static ScientificNotationQuantityJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        ScientificNotationQuantityJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<ScientificNotationQuantityJSON>, ScientificNotationQuantityJSON *, bool> generator("Type ScientificNotationQuantity", ignore_extras);
            parse_json_value(fp, file_name, &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    class Generator : public QuantityJSON::Generator
      {
      private:
        JSONHoldingGenerator<JSONNumberTextGenerator, std::string, const char * > fieldGeneratorValue;
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
            if (!(strcmp(getQuantityJSONKey().c_str(), "ScientificNotation") == 0))
                throw("The key field has a value other than `ScientificNotation'.");
            ScientificNotationQuantityJSON *result = new ScientificNotationQuantityJSON();
            assert(result != NULL);
            RCHandle<ScientificNotationQuantityJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraScientificNotationQuantityAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void handle_result(QuantityJSON *new_result)
          {
            handle_result((ScientificNotationQuantityJSON *)new_result);
          }
        void finish(ScientificNotationQuantityJSON *result)
          {
            if (fieldGeneratorValue.have_value)
              {
                result->setValueText(fieldGeneratorValue.value);
                fieldGeneratorValue.have_value = false;
              }
            else if (!(result->hasValue()))
              {
                error("When parsing the object for %what%, the \"Value\" field was missing.");
              }
            QuantityJSON::Generator::finish(result);
          }
        virtual void handle_result(ScientificNotationQuantityJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            if (strcmp(field_name, "Value") == 0)
                return &fieldGeneratorValue;
            return QuantityJSON::Generator::start_known_field(field_name);
          }

      public:
        Generator(bool ignore_extras = false) : QuantityJSON::Generator(ignore_extras), fieldGeneratorValue("field \"Value\" of the ScientificNotationQuantity class"), unknownFieldGenerator(ignore_extras)
          {
            set_what("the ScientificNotationQuantity class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorValue.reset();
            QuantityJSON::Generator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* SCIENTIFICNOTATIONQUANTITYJSON_H */
