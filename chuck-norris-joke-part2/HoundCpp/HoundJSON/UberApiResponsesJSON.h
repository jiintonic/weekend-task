/* file "UberApiResponsesJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef UBERAPIRESPONSESJSON_H
#define UBERAPIRESPONSESJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "UberProductsResponseJSON.h"
#include "UberTimeEstimatesResponseJSON.h"
#include "UberPriceEstimatesResponseJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class UberApiResponsesJSON : public ReferenceCounted
  {
  private:
    bool flagHasProducts;
    UberProductsResponseJSON * storeProducts;
    bool flagHasPickups;
    UberTimeEstimatesResponseJSON * storePickups;
    bool flagHasPrices;
    UberPriceEstimatesResponseJSON * storePrices;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    UberApiResponsesJSON(const UberApiResponsesJSON &);
    UberApiResponsesJSON & operator=(const UberApiResponsesJSON &other);

    void  fromJSONProducts(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONPickups(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONPrices(JSONValue *json_value, bool ignore_extras = false);


  public:
    UberApiResponsesJSON(void);
    virtual ~UberApiResponsesJSON(void);
    bool  hasProducts(void) const;
    UberProductsResponseJSON *  getProducts(void);
    const UberProductsResponseJSON *  getProducts(void) const;
    bool  hasPickups(void) const;
    UberTimeEstimatesResponseJSON *  getPickups(void);
    const UberTimeEstimatesResponseJSON *  getPickups(void) const;
    bool  hasPrices(void) const;
    UberPriceEstimatesResponseJSON *  getPrices(void);
    const UberPriceEstimatesResponseJSON *  getPrices(void) const;

    virtual size_t extraUberApiResponsesComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraUberApiResponsesComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraUberApiResponsesComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraUberApiResponsesComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraUberApiResponsesLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraUberApiResponsesLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }

    void setProducts(UberProductsResponseJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasProducts)
          {
            storeProducts->remove_reference();
          }
        flagHasProducts = true;
        storeProducts = new_value;
      }
    void unsetProducts(void)
      {
        if (flagHasProducts)
          {
            storeProducts->remove_reference();
          }
        flagHasProducts = false;
      }
    void setPickups(UberTimeEstimatesResponseJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasPickups)
          {
            storePickups->remove_reference();
          }
        flagHasPickups = true;
        storePickups = new_value;
      }
    void unsetPickups(void)
      {
        if (flagHasPickups)
          {
            storePickups->remove_reference();
          }
        flagHasPickups = false;
      }
    void setPrices(UberPriceEstimatesResponseJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasPrices)
          {
            storePrices->remove_reference();
          }
        flagHasPrices = true;
        storePrices = new_value;
      }
    void unsetPrices(void)
      {
        if (flagHasPrices)
          {
            storePrices->remove_reference();
          }
        flagHasPrices = false;
      }

    virtual void extraUberApiResponsesAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraUberApiResponsesSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraUberApiResponsesLookup(key);
        if (old_field == NULL)
          {
            extraUberApiResponsesAppendPair(key, new_component);
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
        if (flagHasProducts)
          {
            handler->start_pair("Products");
            storeProducts->write_as_json(handler);
          }
        if (flagHasPickups)
          {
            handler->start_pair("Pickups");
            storePickups->write_as_json(handler);
          }
        if (flagHasPrices)
          {
            handler->start_pair("Prices");
            storePrices->write_as_json(handler);
          }
      }
    virtual const char *missing_field_error(void) const
      {
        return NULL;
      }

    static UberApiResponsesJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static UberApiResponsesJSON *from_text(const char *text, bool ignore_extras = false)
      {
        UberApiResponsesJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<UberApiResponsesJSON>, UberApiResponsesJSON *, bool> generator("Type UberApiResponses", ignore_extras);
            parse_json_value(text, "Text for UberApiResponsesJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static UberApiResponsesJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        UberApiResponsesJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<UberApiResponsesJSON>, UberApiResponsesJSON *, bool> generator("Type UberApiResponses", ignore_extras);
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
        JSONHoldingGenerator<UberProductsResponseJSON::Generator, RCHandle<UberProductsResponseJSON>, UberProductsResponseJSON *, bool > fieldGeneratorProducts;
        JSONHoldingGenerator<UberTimeEstimatesResponseJSON::Generator, RCHandle<UberTimeEstimatesResponseJSON>, UberTimeEstimatesResponseJSON *, bool > fieldGeneratorPickups;
        JSONHoldingGenerator<UberPriceEstimatesResponseJSON::Generator, RCHandle<UberPriceEstimatesResponseJSON>, UberPriceEstimatesResponseJSON *, bool > fieldGeneratorPrices;
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
            UberApiResponsesJSON *result = new UberApiResponsesJSON();
            assert(result != NULL);
            RCHandle<UberApiResponsesJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraUberApiResponsesAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void finish(UberApiResponsesJSON *result)
          {
            if (fieldGeneratorProducts.have_value)
              {
                result->setProducts(fieldGeneratorProducts.value.referenced());
                fieldGeneratorProducts.have_value = false;
              }
            if (fieldGeneratorPickups.have_value)
              {
                result->setPickups(fieldGeneratorPickups.value.referenced());
                fieldGeneratorPickups.have_value = false;
              }
            if (fieldGeneratorPrices.have_value)
              {
                result->setPrices(fieldGeneratorPrices.value.referenced());
                fieldGeneratorPrices.have_value = false;
              }
          }
        virtual void handle_result(UberApiResponsesJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            if (strncmp(field_name, "P", 1) == 0)
              {
                switch ((unsigned char)(field_name[1]))
                  {
                    case 'i':
                        if (strcmp(&(field_name[2]), "ckups") == 0)
                            return &fieldGeneratorPickups;
                        break;
                    case 'r':
                        switch ((unsigned char)(field_name[2]))
                          {
                            case 'i':
                                if (strcmp(&(field_name[3]), "ces") == 0)
                                    return &fieldGeneratorPrices;
                                break;
                            case 'o':
                                if (strcmp(&(field_name[3]), "ducts") == 0)
                                    return &fieldGeneratorProducts;
                                break;
                            default:
                                break;
                          }
                        break;
                    default:
                        break;
                  }
              }
            return NULL;
          }

      public:
        Generator(bool ignore_extras = false) : fieldGeneratorProducts("field \"Products\" of the UberApiResponses class", ignore_extras), fieldGeneratorPickups("field \"Pickups\" of the UberApiResponses class", ignore_extras), fieldGeneratorPrices("field \"Prices\" of the UberApiResponses class", ignore_extras), unknownFieldGenerator(ignore_extras)
          {
            set_what("the UberApiResponses class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorProducts.reset();
            fieldGeneratorPickups.reset();
            fieldGeneratorPrices.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* UBERAPIRESPONSESJSON_H */
