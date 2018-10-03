/* file "UberProductsResponseJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef UBERPRODUCTSRESPONSEJSON_H
#define UBERPRODUCTSRESPONSEJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONHoldingArrayGenerator.h"
#include <vector>
#include "UberProductDetailsJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class UberProductsResponseJSON : public ReferenceCounted
  {
  private:
    bool flagHasproducts;
    std::vector< UberProductDetailsJSON * > storeproducts;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    UberProductsResponseJSON(const UberProductsResponseJSON &);
    UberProductsResponseJSON & operator=(const UberProductsResponseJSON &other);

    void  fromJSONproducts(JSONValue *json_value, bool ignore_extras = false);


  public:
    UberProductsResponseJSON(void);
    virtual ~UberProductsResponseJSON(void);
    bool  hasproducts(void) const;
    size_t  countOfproducts(void) const;
    UberProductDetailsJSON *  elementOfproducts(size_t element_num);
    const UberProductDetailsJSON *  elementOfproducts(size_t element_num) const;
    std::vector< UberProductDetailsJSON * >  getproducts(void);
    const std::vector< UberProductDetailsJSON * >  getproducts(void) const;

    virtual size_t extraUberProductsResponseComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraUberProductsResponseComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraUberProductsResponseComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraUberProductsResponseComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraUberProductsResponseLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraUberProductsResponseLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }

    void initproducts(void)
      {
        if (flagHasproducts)
          {
            for (size_t num2 = 0; num2 < storeproducts.size(); ++num2)
              {
                storeproducts[num2]->remove_reference();
              }
          }
        flagHasproducts = true;
        storeproducts.clear();
      }
    void appendproducts(UberProductDetailsJSON * to_append)
      {
        if (!flagHasproducts)
          {
            flagHasproducts = true;
            storeproducts.clear();
          }
        assert(flagHasproducts);
        to_append->add_reference();
        storeproducts.push_back(to_append);
      }
    void unsetproducts(void)
      {
        if (flagHasproducts)
          {
            for (size_t num3 = 0; num3 < storeproducts.size(); ++num3)
              {
                storeproducts[num3]->remove_reference();
              }
          }
        flagHasproducts = false;
        storeproducts.clear();
      }

    virtual void extraUberProductsResponseAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraUberProductsResponseSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraUberProductsResponseLookup(key);
        if (old_field == NULL)
          {
            extraUberProductsResponseAppendPair(key, new_component);
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
        assert(flagHasproducts);
        handler->start_pair("products");
        handler->start_array();
        for (size_t num1 = 0; num1 < storeproducts.size(); ++num1)
          {
            storeproducts[num1]->write_as_json(handler);
          }
        handler->finish_array();
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasproducts()))
          {
            return "When parsing the object for %what%, the \"products\" field was missing.";
          }
        return NULL;
      }

    static UberProductsResponseJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static UberProductsResponseJSON *from_text(const char *text, bool ignore_extras = false)
      {
        UberProductsResponseJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<UberProductsResponseJSON>, UberProductsResponseJSON *, bool> generator("Type UberProductsResponse", ignore_extras);
            parse_json_value(text, "Text for UberProductsResponseJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static UberProductsResponseJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        UberProductsResponseJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<UberProductsResponseJSON>, UberProductsResponseJSON *, bool> generator("Type UberProductsResponse", ignore_extras);
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
        JSONHoldingArrayGenerator<UberProductDetailsJSON::Generator, RCHandle<UberProductDetailsJSON>, UberProductDetailsJSON *, bool > fieldGeneratorproducts;
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
            UberProductsResponseJSON *result = new UberProductsResponseJSON();
            assert(result != NULL);
            RCHandle<UberProductsResponseJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraUberProductsResponseAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void finish(UberProductsResponseJSON *result)
          {
            if (fieldGeneratorproducts.have_value)
              {
                result->initproducts();
                size_t count = fieldGeneratorproducts.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendproducts(fieldGeneratorproducts.value[num].referenced());
                  }
                fieldGeneratorproducts.value.clear();
                fieldGeneratorproducts.have_value = false;
              }
            else if (!(result->hasproducts()))
              {
                error("When parsing the object for %what%, the \"products\" field was missing.");
              }
          }
        virtual void handle_result(UberProductsResponseJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            if (strcmp(field_name, "products") == 0)
                return &fieldGeneratorproducts;
            return NULL;
          }

      public:
        Generator(bool ignore_extras = false) : fieldGeneratorproducts("field \"products\" of the UberProductsResponse class", ignore_extras), unknownFieldGenerator(ignore_extras)
          {
            set_what("the UberProductsResponse class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorproducts.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* UBERPRODUCTSRESPONSEJSON_H */
