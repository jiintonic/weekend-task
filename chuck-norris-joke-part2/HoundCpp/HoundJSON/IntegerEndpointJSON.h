/* file "IntegerEndpointJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef INTEGERENDPOINTJSON_H
#define INTEGERENDPOINTJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONIntegerUnboundRangeGenerator.h"
#include "JSONBooleanGenerator.h"
#include "OInteger.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class IntegerEndpointJSON : public ReferenceCounted
  {
  private:
    bool flagHasValue;
    OInteger storeValue;
    bool flagHasInclusive;
    bool storeInclusive;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    IntegerEndpointJSON(const IntegerEndpointJSON &);
    IntegerEndpointJSON & operator=(const IntegerEndpointJSON &other);

    void  fromJSONValue(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONInclusive(JSONValue *json_value, bool ignore_extras = false);


  public:
    IntegerEndpointJSON(void);
    virtual ~IntegerEndpointJSON(void);
    bool  hasValue(void) const;
    OInteger  getValue(void);
    const OInteger  getValue(void) const;
    bool  hasInclusive(void) const;
    bool  getInclusive(void);
    const bool  getInclusive(void) const;

    virtual size_t extraIntegerEndpointComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraIntegerEndpointComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraIntegerEndpointComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraIntegerEndpointComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraIntegerEndpointLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraIntegerEndpointLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }

    void setValue(OInteger new_value)
      {
        flagHasValue = true;
        storeValue = new_value;
      }
    void unsetValue(void)
      {
        flagHasValue = false;
      }
    void setInclusive(bool new_value)
      {
        flagHasInclusive = true;
        storeInclusive = new_value;
      }
    void unsetInclusive(void)
      {
        flagHasInclusive = false;
      }

    virtual void extraIntegerEndpointAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraIntegerEndpointSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraIntegerEndpointLookup(key);
        if (old_field == NULL)
          {
            extraIntegerEndpointAppendPair(key, new_component);
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
        assert(flagHasValue);
        handler->start_pair("Value");
        handler->number_value(storeValue.get_o_integer());
        assert(flagHasInclusive);
        handler->start_pair("Inclusive");
        handler->boolean_value(storeInclusive);
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasValue()))
          {
            return "When parsing the object for %what%, the \"Value\" field was missing.";
          }
        if (!(hasInclusive()))
          {
            return "When parsing the object for %what%, the \"Inclusive\" field was missing.";
          }
        return NULL;
      }

    static IntegerEndpointJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static IntegerEndpointJSON *from_text(const char *text, bool ignore_extras = false)
      {
        IntegerEndpointJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<IntegerEndpointJSON>, IntegerEndpointJSON *, bool> generator("Type IntegerEndpoint", ignore_extras);
            parse_json_value(text, "Text for IntegerEndpointJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static IntegerEndpointJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        IntegerEndpointJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<IntegerEndpointJSON>, IntegerEndpointJSON *, bool> generator("Type IntegerEndpoint", ignore_extras);
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
        JSONHoldingGenerator<JSONIntegerUnboundRangeGenerator, OInteger, o_integer > fieldGeneratorValue;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorInclusive;
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
            IntegerEndpointJSON *result = new IntegerEndpointJSON();
            assert(result != NULL);
            RCHandle<IntegerEndpointJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraIntegerEndpointAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void finish(IntegerEndpointJSON *result)
          {
            if (fieldGeneratorValue.have_value)
              {
                result->setValue(fieldGeneratorValue.value);
                fieldGeneratorValue.have_value = false;
              }
            else if (!(result->hasValue()))
              {
                error("When parsing the object for %what%, the \"Value\" field was missing.");
              }
            if (fieldGeneratorInclusive.have_value)
              {
                result->setInclusive(fieldGeneratorInclusive.value);
                fieldGeneratorInclusive.have_value = false;
              }
            else if (!(result->hasInclusive()))
              {
                error("When parsing the object for %what%, the \"Inclusive\" field was missing.");
              }
          }
        virtual void handle_result(IntegerEndpointJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'I':
                    if (strcmp(&(field_name[1]), "nclusive") == 0)
                        return &fieldGeneratorInclusive;
                    break;
                case 'V':
                    if (strcmp(&(field_name[1]), "alue") == 0)
                        return &fieldGeneratorValue;
                    break;
                default:
                    break;
              }
            return NULL;
          }

      public:
        Generator(bool ignore_extras = false) : fieldGeneratorValue("field \"Value\" of the IntegerEndpoint class"), fieldGeneratorInclusive("field \"Inclusive\" of the IntegerEndpoint class"), unknownFieldGenerator(ignore_extras)
          {
            set_what("the IntegerEndpoint class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorValue.reset();
            fieldGeneratorInclusive.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* INTEGERENDPOINTJSON_H */
