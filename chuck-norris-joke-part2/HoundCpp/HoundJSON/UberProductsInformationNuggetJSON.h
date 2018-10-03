/* file "UberProductsInformationNuggetJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef UBERPRODUCTSINFORMATIONNUGGETJSON_H
#define UBERPRODUCTSINFORMATIONNUGGETJSON_H

#pragma interface

#include "UberInformationNuggetJSON.h"
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


class UberProductsInformationNuggetJSON : public UberInformationNuggetJSON
  {
  private:
    bool flagHasUberProductsSpec;
    UberProductsSpecJSON * storeUberProductsSpec;
    bool flagHasUberProducts;
    UberCompositeProductsJSON * storeUberProducts;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    UberProductsInformationNuggetJSON(const UberProductsInformationNuggetJSON &);
    UberProductsInformationNuggetJSON & operator=(const UberProductsInformationNuggetJSON &other);

    JSONValue * extraUberProductsSpecToJSON(void) const;
    JSONValue * extraUberProductsToJSON(void) const;

    void  fromJSONUberProductsSpec(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONUberProducts(JSONValue *json_value, bool ignore_extras = false);


  public:
    UberProductsInformationNuggetJSON(void);
    virtual ~UberProductsInformationNuggetJSON(void);
    const char * getUberNuggetKind(void) const;
    bool  hasUberProductsSpec(void) const;
    UberProductsSpecJSON *  getUberProductsSpec(void);
    const UberProductsSpecJSON *  getUberProductsSpec(void) const;
    bool  hasUberProducts(void) const;
    UberCompositeProductsJSON *  getUberProducts(void);
    const UberCompositeProductsJSON *  getUberProducts(void) const;

    virtual size_t extraUberProductsInformationNuggetComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraUberProductsInformationNuggetComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraUberProductsInformationNuggetComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraUberProductsInformationNuggetComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraUberProductsInformationNuggetLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraUberProductsInformationNuggetLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    size_t extraUberInformationNuggetComponentCount(void) const
      {
        size_t result = 0;
        if (flagHasUberProductsSpec)
            ++result;
        if (flagHasUberProducts)
            ++result;
        result += extraUberProductsInformationNuggetComponentCount();
        return result;
      }
    const char *extraUberInformationNuggetComponentKey(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasUberProductsSpec)
          {
            if (remainder == 0)
                return "UberProductsSpec";
            --remainder;
          }
        if (flagHasUberProducts)
          {
            if (remainder == 0)
                return "UberProducts";
            --remainder;
          }
        return extraUberProductsInformationNuggetComponentKey(remainder);
      }
    JSONValue *extraUberInformationNuggetComponentValue(size_t component_num)
      {
        size_t remainder = component_num;
        if (flagHasUberProductsSpec)
          {
            if (remainder == 0)
                return extraUberProductsSpecToJSON();
            --remainder;
          }
        if (flagHasUberProducts)
          {
            if (remainder == 0)
                return extraUberProductsToJSON();
            --remainder;
          }
        return extraUberProductsInformationNuggetComponentValue(remainder);
      }
    const JSONValue *extraUberInformationNuggetComponentValue(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasUberProductsSpec)
          {
            if (remainder == 0)
                return extraUberProductsSpecToJSON();
            --remainder;
          }
        if (flagHasUberProducts)
          {
            if (remainder == 0)
                return extraUberProductsToJSON();
            --remainder;
          }
        return extraUberProductsInformationNuggetComponentValue(remainder);
      }
    JSONValue *extraUberInformationNuggetLookup(const char *field_name)
      {
        if (strncmp(field_name, "UberProducts", 12) == 0)
          {
            switch ((unsigned char)(field_name[12]))
              {
                case 0:
                    return (flagHasUberProducts ? extraUberProductsToJSON() : NULL);
                case 'S':
                    if (strcmp(&(field_name[13]), "pec") == 0)
                        return (flagHasUberProductsSpec ? extraUberProductsSpecToJSON() : NULL);
                    break;
                default:
                    break;
              }
          }
        return extraUberProductsInformationNuggetLookup(field_name);
      }
    const JSONValue *extraUberInformationNuggetLookup(const char *field_name) const
      {
        if (strncmp(field_name, "UberProducts", 12) == 0)
          {
            switch ((unsigned char)(field_name[12]))
              {
                case 0:
                    return (flagHasUberProducts ? extraUberProductsToJSON() : NULL);
                case 'S':
                    if (strcmp(&(field_name[13]), "pec") == 0)
                        return (flagHasUberProductsSpec ? extraUberProductsSpecToJSON() : NULL);
                    break;
                default:
                    break;
              }
          }
        return extraUberProductsInformationNuggetLookup(field_name);
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

    virtual void extraUberProductsInformationNuggetAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraUberProductsInformationNuggetSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraUberProductsInformationNuggetLookup(key);
        if (old_field == NULL)
          {
            extraUberProductsInformationNuggetAppendPair(key, new_component);
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
        if (strncmp(key, "UberProducts", 12) == 0)
          {
            switch ((unsigned char)(key[12]))
              {
                case 0:
                    {
                    fromJSONUberProducts(new_component, false);
                    return;
                    }
                case 'S':
                    if (strcmp(&(key[13]), "pec") == 0)
                        {
                        fromJSONUberProductsSpec(new_component, false);
                        return;
                        }
                    break;
                default:
                    break;
              }
          }
        extraUberProductsInformationNuggetAppendPair(key, new_component);
      }
    void extraUberInformationNuggetSetField(const char *key, JSONValue *new_component)
      {
        if (strncmp(key, "UberProducts", 12) == 0)
          {
            switch ((unsigned char)(key[12]))
              {
                case 0:
                    {
                    fromJSONUberProducts(new_component, false);
                    return;
                    }
                case 'S':
                    if (strcmp(&(key[13]), "pec") == 0)
                        {
                        fromJSONUberProductsSpec(new_component, false);
                        return;
                        }
                    break;
                default:
                    break;
              }
          }
        extraUberProductsInformationNuggetSetField(key, new_component);
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

    static UberProductsInformationNuggetJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static UberProductsInformationNuggetJSON *from_text(const char *text, bool ignore_extras = false)
      {
        UberProductsInformationNuggetJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<UberProductsInformationNuggetJSON>, UberProductsInformationNuggetJSON *, bool> generator("Type UberProductsInformationNugget", ignore_extras);
            parse_json_value(text, "Text for UberProductsInformationNuggetJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static UberProductsInformationNuggetJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        UberProductsInformationNuggetJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<UberProductsInformationNuggetJSON>, UberProductsInformationNuggetJSON *, bool> generator("Type UberProductsInformationNugget", ignore_extras);
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
            if (!(strcmp(getUberInformationNuggetJSONKey().c_str(), "UberProducts") == 0))
                throw("The key field has a value other than `UberProducts'.");
            UberProductsInformationNuggetJSON *result = new UberProductsInformationNuggetJSON();
            assert(result != NULL);
            RCHandle<UberProductsInformationNuggetJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraUberProductsInformationNuggetAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void handle_result(UberInformationNuggetJSON *new_result)
          {
            handle_result((UberProductsInformationNuggetJSON *)new_result);
          }
        void finish(UberProductsInformationNuggetJSON *result)
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
            UberInformationNuggetJSON::Generator::finish(result);
          }
        virtual void handle_result(UberProductsInformationNuggetJSON *new_result) = 0;
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
            return UberInformationNuggetJSON::Generator::start_known_field(field_name);
          }

      public:
        Generator(bool ignore_extras = false) : UberInformationNuggetJSON::Generator(ignore_extras), fieldGeneratorUberProductsSpec("field \"UberProductsSpec\" of the UberProductsInformationNugget class", ignore_extras), fieldGeneratorUberProducts("field \"UberProducts\" of the UberProductsInformationNugget class", ignore_extras), unknownFieldGenerator(ignore_extras)
          {
            set_what("the UberProductsInformationNugget class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorUberProductsSpec.reset();
            fieldGeneratorUberProducts.reset();
            UberInformationNuggetJSON::Generator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* UBERPRODUCTSINFORMATIONNUGGETJSON_H */