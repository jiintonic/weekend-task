/* file "ApproximateQuantityJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef APPROXIMATEQUANTITYJSON_H
#define APPROXIMATEQUANTITYJSON_H

#pragma interface

#include "QuantityJSON.h"
#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "QuantityJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class ApproximateQuantityJSON : public QuantityJSON
  {
  private:
    bool flagHasBase;
    QuantityJSON * storeBase;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    ApproximateQuantityJSON(const ApproximateQuantityJSON &);
    ApproximateQuantityJSON & operator=(const ApproximateQuantityJSON &other);

    JSONValue * extraBaseToJSON(void) const;

    void  fromJSONBase(JSONValue *json_value, bool ignore_extras = false);


  public:
    ApproximateQuantityJSON(void);
    virtual ~ApproximateQuantityJSON(void);
    const char * getQuantityKind(void) const;
    bool  hasBase(void) const;
    QuantityJSON *  getBase(void);
    const QuantityJSON *  getBase(void) const;

    virtual size_t extraApproximateQuantityComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraApproximateQuantityComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraApproximateQuantityComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraApproximateQuantityComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraApproximateQuantityLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraApproximateQuantityLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    size_t extraQuantityComponentCount(void) const
      {
        size_t result = 0;
        if (flagHasBase)
            ++result;
        result += extraApproximateQuantityComponentCount();
        return result;
      }
    const char *extraQuantityComponentKey(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasBase)
          {
            if (remainder == 0)
                return "Base";
            --remainder;
          }
        return extraApproximateQuantityComponentKey(remainder);
      }
    JSONValue *extraQuantityComponentValue(size_t component_num)
      {
        size_t remainder = component_num;
        if (flagHasBase)
          {
            if (remainder == 0)
                return extraBaseToJSON();
            --remainder;
          }
        return extraApproximateQuantityComponentValue(remainder);
      }
    const JSONValue *extraQuantityComponentValue(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasBase)
          {
            if (remainder == 0)
                return extraBaseToJSON();
            --remainder;
          }
        return extraApproximateQuantityComponentValue(remainder);
      }
    JSONValue *extraQuantityLookup(const char *field_name)
      {
        if (strcmp(field_name, "Base") == 0)
            return (flagHasBase ? extraBaseToJSON() : NULL);
        return extraApproximateQuantityLookup(field_name);
      }
    const JSONValue *extraQuantityLookup(const char *field_name) const
      {
        if (strcmp(field_name, "Base") == 0)
            return (flagHasBase ? extraBaseToJSON() : NULL);
        return extraApproximateQuantityLookup(field_name);
      }

    void setBase(QuantityJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasBase)
          {
            storeBase->remove_reference();
          }
        flagHasBase = true;
        storeBase = new_value;
      }
    void unsetBase(void)
      {
        if (flagHasBase)
          {
            storeBase->remove_reference();
          }
        flagHasBase = false;
      }

    virtual void extraApproximateQuantityAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraApproximateQuantitySetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraApproximateQuantityLookup(key);
        if (old_field == NULL)
          {
            extraApproximateQuantityAppendPair(key, new_component);
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
        if (strcmp(key, "Base") == 0)
            {
            fromJSONBase(new_component, false);
            return;
            }
        extraApproximateQuantityAppendPair(key, new_component);
      }
    void extraQuantitySetField(const char *key, JSONValue *new_component)
      {
        if (strcmp(key, "Base") == 0)
            {
            fromJSONBase(new_component, false);
            return;
            }
        extraApproximateQuantitySetField(key, new_component);
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
        assert(flagHasBase);
        handler->start_pair("Base");
        storeBase->write_as_json(handler);
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasBase()))
          {
            return "When parsing the object for %what%, the \"Base\" field was missing.";
          }
        return NULL;
      }

    static ApproximateQuantityJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static ApproximateQuantityJSON *from_text(const char *text, bool ignore_extras = false)
      {
        ApproximateQuantityJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<ApproximateQuantityJSON>, ApproximateQuantityJSON *, bool> generator("Type ApproximateQuantity", ignore_extras);
            parse_json_value(text, "Text for ApproximateQuantityJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static ApproximateQuantityJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        ApproximateQuantityJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<ApproximateQuantityJSON>, ApproximateQuantityJSON *, bool> generator("Type ApproximateQuantity", ignore_extras);
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
        JSONHoldingGenerator<QuantityJSON::Generator, RCHandle<QuantityJSON>, QuantityJSON *, bool > fieldGeneratorBase;
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
            if (!(strcmp(getQuantityJSONKey().c_str(), "Approximate") == 0))
                throw("The key field has a value other than `Approximate'.");
            ApproximateQuantityJSON *result = new ApproximateQuantityJSON();
            assert(result != NULL);
            RCHandle<ApproximateQuantityJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraApproximateQuantityAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void handle_result(QuantityJSON *new_result)
          {
            handle_result((ApproximateQuantityJSON *)new_result);
          }
        void finish(ApproximateQuantityJSON *result)
          {
            if (fieldGeneratorBase.have_value)
              {
                result->setBase(fieldGeneratorBase.value.referenced());
                fieldGeneratorBase.have_value = false;
              }
            else if (!(result->hasBase()))
              {
                error("When parsing the object for %what%, the \"Base\" field was missing.");
              }
            QuantityJSON::Generator::finish(result);
          }
        virtual void handle_result(ApproximateQuantityJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            if (strcmp(field_name, "Base") == 0)
                return &fieldGeneratorBase;
            return QuantityJSON::Generator::start_known_field(field_name);
          }

      public:
        Generator(bool ignore_extras = false) : QuantityJSON::Generator(ignore_extras), fieldGeneratorBase("field \"Base\" of the ApproximateQuantity class", ignore_extras), unknownFieldGenerator(ignore_extras)
          {
            set_what("the ApproximateQuantity class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorBase.reset();
            QuantityJSON::Generator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* APPROXIMATEQUANTITYJSON_H */
