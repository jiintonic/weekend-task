/* file "UberEstimatesInformationNuggetJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef UBERESTIMATESINFORMATIONNUGGETJSON_H
#define UBERESTIMATESINFORMATIONNUGGETJSON_H

#pragma interface

#include "UberInformationNuggetJSON.h"
#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "UberEstimatesSpecJSON.h"
#include "UberCompositeProductsJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class UberEstimatesInformationNuggetJSON : public UberInformationNuggetJSON
  {
  private:
    bool flagHasUberEstimatesSpec;
    UberEstimatesSpecJSON * storeUberEstimatesSpec;
    bool flagHasUberProducts;
    UberCompositeProductsJSON * storeUberProducts;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    UberEstimatesInformationNuggetJSON(const UberEstimatesInformationNuggetJSON &);
    UberEstimatesInformationNuggetJSON & operator=(const UberEstimatesInformationNuggetJSON &other);

    JSONValue * extraUberEstimatesSpecToJSON(void) const;
    JSONValue * extraUberProductsToJSON(void) const;

    void  fromJSONUberEstimatesSpec(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONUberProducts(JSONValue *json_value, bool ignore_extras = false);


  public:
    UberEstimatesInformationNuggetJSON(void);
    virtual ~UberEstimatesInformationNuggetJSON(void);
    const char * getUberNuggetKind(void) const;
    bool  hasUberEstimatesSpec(void) const;
    UberEstimatesSpecJSON *  getUberEstimatesSpec(void);
    const UberEstimatesSpecJSON *  getUberEstimatesSpec(void) const;
    bool  hasUberProducts(void) const;
    UberCompositeProductsJSON *  getUberProducts(void);
    const UberCompositeProductsJSON *  getUberProducts(void) const;

    virtual size_t extraUberEstimatesInformationNuggetComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraUberEstimatesInformationNuggetComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraUberEstimatesInformationNuggetComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraUberEstimatesInformationNuggetComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraUberEstimatesInformationNuggetLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraUberEstimatesInformationNuggetLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    size_t extraUberInformationNuggetComponentCount(void) const
      {
        size_t result = 0;
        if (flagHasUberEstimatesSpec)
            ++result;
        if (flagHasUberProducts)
            ++result;
        result += extraUberEstimatesInformationNuggetComponentCount();
        return result;
      }
    const char *extraUberInformationNuggetComponentKey(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasUberEstimatesSpec)
          {
            if (remainder == 0)
                return "UberEstimatesSpec";
            --remainder;
          }
        if (flagHasUberProducts)
          {
            if (remainder == 0)
                return "UberProducts";
            --remainder;
          }
        return extraUberEstimatesInformationNuggetComponentKey(remainder);
      }
    JSONValue *extraUberInformationNuggetComponentValue(size_t component_num)
      {
        size_t remainder = component_num;
        if (flagHasUberEstimatesSpec)
          {
            if (remainder == 0)
                return extraUberEstimatesSpecToJSON();
            --remainder;
          }
        if (flagHasUberProducts)
          {
            if (remainder == 0)
                return extraUberProductsToJSON();
            --remainder;
          }
        return extraUberEstimatesInformationNuggetComponentValue(remainder);
      }
    const JSONValue *extraUberInformationNuggetComponentValue(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasUberEstimatesSpec)
          {
            if (remainder == 0)
                return extraUberEstimatesSpecToJSON();
            --remainder;
          }
        if (flagHasUberProducts)
          {
            if (remainder == 0)
                return extraUberProductsToJSON();
            --remainder;
          }
        return extraUberEstimatesInformationNuggetComponentValue(remainder);
      }
    JSONValue *extraUberInformationNuggetLookup(const char *field_name)
      {
        if (strncmp(field_name, "Uber", 4) == 0)
          {
            switch ((unsigned char)(field_name[4]))
              {
                case 'E':
                    if (strcmp(&(field_name[5]), "stimatesSpec") == 0)
                        return (flagHasUberEstimatesSpec ? extraUberEstimatesSpecToJSON() : NULL);
                    break;
                case 'P':
                    if (strcmp(&(field_name[5]), "roducts") == 0)
                        return (flagHasUberProducts ? extraUberProductsToJSON() : NULL);
                    break;
                default:
                    break;
              }
          }
        return extraUberEstimatesInformationNuggetLookup(field_name);
      }
    const JSONValue *extraUberInformationNuggetLookup(const char *field_name) const
      {
        if (strncmp(field_name, "Uber", 4) == 0)
          {
            switch ((unsigned char)(field_name[4]))
              {
                case 'E':
                    if (strcmp(&(field_name[5]), "stimatesSpec") == 0)
                        return (flagHasUberEstimatesSpec ? extraUberEstimatesSpecToJSON() : NULL);
                    break;
                case 'P':
                    if (strcmp(&(field_name[5]), "roducts") == 0)
                        return (flagHasUberProducts ? extraUberProductsToJSON() : NULL);
                    break;
                default:
                    break;
              }
          }
        return extraUberEstimatesInformationNuggetLookup(field_name);
      }

    void setUberEstimatesSpec(UberEstimatesSpecJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasUberEstimatesSpec)
          {
            storeUberEstimatesSpec->remove_reference();
          }
        flagHasUberEstimatesSpec = true;
        storeUberEstimatesSpec = new_value;
      }
    void unsetUberEstimatesSpec(void)
      {
        if (flagHasUberEstimatesSpec)
          {
            storeUberEstimatesSpec->remove_reference();
          }
        flagHasUberEstimatesSpec = false;
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

    virtual void extraUberEstimatesInformationNuggetAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraUberEstimatesInformationNuggetSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraUberEstimatesInformationNuggetLookup(key);
        if (old_field == NULL)
          {
            extraUberEstimatesInformationNuggetAppendPair(key, new_component);
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
        if (strncmp(key, "Uber", 4) == 0)
          {
            switch ((unsigned char)(key[4]))
              {
                case 'E':
                    if (strcmp(&(key[5]), "stimatesSpec") == 0)
                        {
                        fromJSONUberEstimatesSpec(new_component, false);
                        return;
                        }
                    break;
                case 'P':
                    if (strcmp(&(key[5]), "roducts") == 0)
                        {
                        fromJSONUberProducts(new_component, false);
                        return;
                        }
                    break;
                default:
                    break;
              }
          }
        extraUberEstimatesInformationNuggetAppendPair(key, new_component);
      }
    void extraUberInformationNuggetSetField(const char *key, JSONValue *new_component)
      {
        if (strncmp(key, "Uber", 4) == 0)
          {
            switch ((unsigned char)(key[4]))
              {
                case 'E':
                    if (strcmp(&(key[5]), "stimatesSpec") == 0)
                        {
                        fromJSONUberEstimatesSpec(new_component, false);
                        return;
                        }
                    break;
                case 'P':
                    if (strcmp(&(key[5]), "roducts") == 0)
                        {
                        fromJSONUberProducts(new_component, false);
                        return;
                        }
                    break;
                default:
                    break;
              }
          }
        extraUberEstimatesInformationNuggetSetField(key, new_component);
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
        assert(flagHasUberEstimatesSpec);
        handler->start_pair("UberEstimatesSpec");
        storeUberEstimatesSpec->write_as_json(handler);
        assert(flagHasUberProducts);
        handler->start_pair("UberProducts");
        storeUberProducts->write_as_json(handler);
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasUberEstimatesSpec()))
          {
            return "When parsing the object for %what%, the \"UberEstimatesSpec\" field was missing.";
          }
        if (!(hasUberProducts()))
          {
            return "When parsing the object for %what%, the \"UberProducts\" field was missing.";
          }
        return NULL;
      }

    static UberEstimatesInformationNuggetJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static UberEstimatesInformationNuggetJSON *from_text(const char *text, bool ignore_extras = false)
      {
        UberEstimatesInformationNuggetJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<UberEstimatesInformationNuggetJSON>, UberEstimatesInformationNuggetJSON *, bool> generator("Type UberEstimatesInformationNugget", ignore_extras);
            parse_json_value(text, "Text for UberEstimatesInformationNuggetJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static UberEstimatesInformationNuggetJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        UberEstimatesInformationNuggetJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<UberEstimatesInformationNuggetJSON>, UberEstimatesInformationNuggetJSON *, bool> generator("Type UberEstimatesInformationNugget", ignore_extras);
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
        JSONHoldingGenerator<UberEstimatesSpecJSON::Generator, RCHandle<UberEstimatesSpecJSON>, UberEstimatesSpecJSON *, bool > fieldGeneratorUberEstimatesSpec;
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
            if (!(strcmp(getUberInformationNuggetJSONKey().c_str(), "UberEstimates") == 0))
                throw("The key field has a value other than `UberEstimates'.");
            UberEstimatesInformationNuggetJSON *result = new UberEstimatesInformationNuggetJSON();
            assert(result != NULL);
            RCHandle<UberEstimatesInformationNuggetJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraUberEstimatesInformationNuggetAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void handle_result(UberInformationNuggetJSON *new_result)
          {
            handle_result((UberEstimatesInformationNuggetJSON *)new_result);
          }
        void finish(UberEstimatesInformationNuggetJSON *result)
          {
            if (fieldGeneratorUberEstimatesSpec.have_value)
              {
                result->setUberEstimatesSpec(fieldGeneratorUberEstimatesSpec.value.referenced());
                fieldGeneratorUberEstimatesSpec.have_value = false;
              }
            else if (!(result->hasUberEstimatesSpec()))
              {
                error("When parsing the object for %what%, the \"UberEstimatesSpec\" field was missing.");
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
        virtual void handle_result(UberEstimatesInformationNuggetJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            if (strncmp(field_name, "Uber", 4) == 0)
              {
                switch ((unsigned char)(field_name[4]))
                  {
                    case 'E':
                        if (strcmp(&(field_name[5]), "stimatesSpec") == 0)
                            return &fieldGeneratorUberEstimatesSpec;
                        break;
                    case 'P':
                        if (strcmp(&(field_name[5]), "roducts") == 0)
                            return &fieldGeneratorUberProducts;
                        break;
                    default:
                        break;
                  }
              }
            return UberInformationNuggetJSON::Generator::start_known_field(field_name);
          }

      public:
        Generator(bool ignore_extras = false) : UberInformationNuggetJSON::Generator(ignore_extras), fieldGeneratorUberEstimatesSpec("field \"UberEstimatesSpec\" of the UberEstimatesInformationNugget class", ignore_extras), fieldGeneratorUberProducts("field \"UberProducts\" of the UberEstimatesInformationNugget class", ignore_extras), unknownFieldGenerator(ignore_extras)
          {
            set_what("the UberEstimatesInformationNugget class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorUberEstimatesSpec.reset();
            fieldGeneratorUberProducts.reset();
            UberInformationNuggetJSON::Generator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* UBERESTIMATESINFORMATIONNUGGETJSON_H */
