/* file "UberProductsContextJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef UBERPRODUCTSCONTEXTJSON_H
#define UBERPRODUCTSCONTEXTJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "UberProductsSpecJSON.h"
#include "UberCompositeProductsJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class UberProductsContextJSON : public ReferenceCounted
  {
  private:
    bool flagHasUberProductsSpec;
    UberProductsSpecJSON * storeUberProductsSpec;
    bool flagHasUberProducts;
    UberCompositeProductsJSON * storeUberProducts;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    UberProductsContextJSON(const UberProductsContextJSON &);
    UberProductsContextJSON & operator=(const UberProductsContextJSON &other);

    void  fromJSONUberProductsSpec(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONUberProducts(JSONValue *json_value, bool ignore_extras = false);


  public:
    UberProductsContextJSON(void);
    virtual ~UberProductsContextJSON(void);
    bool  hasUberProductsSpec(void) const;
    UberProductsSpecJSON *  getUberProductsSpec(void);
    const UberProductsSpecJSON *  getUberProductsSpec(void) const;
    bool  hasUberProducts(void) const;
    UberCompositeProductsJSON *  getUberProducts(void);
    const UberCompositeProductsJSON *  getUberProducts(void) const;

    virtual size_t extraUberProductsContextComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraUberProductsContextComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraUberProductsContextComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraUberProductsContextComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraUberProductsContextLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraUberProductsContextLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }

    void setUberProductsSpec(UberProductsSpecJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasUberProductsSpec)
          {
            storeUberProductsSpec->remove_reference();
          }
        flagHasUberProductsSpec = true;
        storeUberProductsSpec = new_value;
      }
    void unsetUberProductsSpec(void)
      {
        if (flagHasUberProductsSpec)
          {
            storeUberProductsSpec->remove_reference();
          }
        flagHasUberProductsSpec = false;
      }
    void setUberProducts(UberCompositeProductsJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasUberProducts)
          {
            storeUberProducts->remove_reference();
          }
        flagHasUberProducts = true;
        storeUberProducts = new_value;
      }
    void unsetUberProducts(void)
      {
        if (flagHasUberProducts)
          {
            storeUberProducts->remove_reference();
          }
        flagHasUberProducts = false;
      }

    virtual void extraUberProductsContextAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraUberProductsContextSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraUberProductsContextLookup(key);
        if (old_field == NULL)
          {
            extraUberProductsContextAppendPair(key, new_component);
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
        assert(flagHasUberProductsSpec);
        handler->start_pair("UberProductsSpec");
        storeUberProductsSpec->write_as_json(handler);
        assert(flagHasUberProducts);
        handler->start_pair("UberProducts");
        storeUberProducts->write_as_json(handler);
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasUberProductsSpec()))
          {
            return "When parsing the object for %what%, the \"UberProductsSpec\" field was missing.";
          }
        if (!(hasUberProducts()))
          {
            return "When parsing the object for %what%, the \"UberProducts\" field was missing.";
          }
        return NULL;
      }

    static UberProductsContextJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static UberProductsContextJSON *from_text(const char *text, bool ignore_extras = false)
      {
        UberProductsContextJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<UberProductsContextJSON>, UberProductsContextJSON *, bool> generator("Type UberProductsContext", ignore_extras);
            parse_json_value(text, "Text for UberProductsContextJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static UberProductsContextJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        UberProductsContextJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<UberProductsContextJSON>, UberProductsContextJSON *, bool> generator("Type UberProductsContext", ignore_extras);
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
        JSONHoldingGenerator<UberProductsSpecJSON::Generator, RCHandle<UberProductsSpecJSON>, UberProductsSpecJSON *, bool > fieldGeneratorUberProductsSpec;
        JSONHoldingGenerator<UberCompositeProductsJSON::Generator, RCHandle<UberCompositeProductsJSON>, UberCompositeProductsJSON *, bool > fieldGeneratorUberProducts;
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
            UberProductsContextJSON *result = new UberProductsContextJSON();
            assert(result != NULL);
            RCHandle<UberProductsContextJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraUberProductsContextAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void finish(UberProductsContextJSON *result)
          {
            if (fieldGeneratorUberProductsSpec.have_value)
              {
                result->setUberProductsSpec(fieldGeneratorUberProductsSpec.value.referenced());
                fieldGeneratorUberProductsSpec.have_value = false;
              }
            else if (!(result->hasUberProductsSpec()))
              {
                error("When parsing the object for %what%, the \"UberProductsSpec\" field was missing.");
              }
            if (fieldGeneratorUberProducts.have_value)
              {
                result->setUberProducts(fieldGeneratorUberProducts.value.referenced());
                fieldGeneratorUberProducts.have_value = false;
              }
            else if (!(result->hasUberProducts()))
              {
                error("When parsing the object for %what%, the \"UberProducts\" field was missing.");
              }
          }
        virtual void handle_result(UberProductsContextJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            if (strncmp(field_name, "UberProducts", 12) == 0)
              {
                switch ((unsigned char)(field_name[12]))
                  {
                    case 0:
                        return &fieldGeneratorUberProducts;
                    case 'S':
                        if (strcmp(&(field_name[13]), "pec") == 0)
                            return &fieldGeneratorUberProductsSpec;
                        break;
                    default:
                        break;
                  }
              }
            return NULL;
          }

      public:
        Generator(bool ignore_extras = false) : fieldGeneratorUberProductsSpec("field \"UberProductsSpec\" of the UberProductsContext class", ignore_extras), fieldGeneratorUberProducts("field \"UberProducts\" of the UberProductsContext class", ignore_extras), unknownFieldGenerator(ignore_extras)
          {
            set_what("the UberProductsContext class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorUberProductsSpec.reset();
            fieldGeneratorUberProducts.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* UBERPRODUCTSCONTEXTJSON_H */
