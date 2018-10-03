/* file "UberProductsSpecJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef UBERPRODUCTSSPECJSON_H
#define UBERPRODUCTSSPECJSON_H

#pragma interface

#include "UberSpecJSON.h"
#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONHoldingArrayGenerator.h"
#include "JSONStringGenerator.h"
#include <vector>
#include <string>
#include "MapLocationJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class UberProductsSpecJSON : public UberSpecJSON
  {
  public:
    enum TypeQueryTypes
      {
        QueryTypes_availability,
        QueryTypes_fare,
        QueryTypes_surge
      };

    static TypeQueryTypes  stringToQueryTypes(const char *chars);
    static const char * stringFromQueryTypes(TypeQueryTypes the_enum);

  private:
    bool flagHasPreferredProduct;
    std::string storePreferredProduct;
    bool flagHasPickupLocation;
    MapLocationJSON * storePickupLocation;
    bool flagHasQueryTypes;
    std::vector< TypeQueryTypes > storeQueryTypes;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    UberProductsSpecJSON(const UberProductsSpecJSON &);
    UberProductsSpecJSON & operator=(const UberProductsSpecJSON &other);

    JSONValue * extraPreferredProductToJSON(void) const;
    JSONValue * extraPickupLocationToJSON(void) const;
    JSONValue * extraQueryTypesToJSON(void) const;

    void  fromJSONPreferredProduct(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONPickupLocation(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONQueryTypes(JSONValue *json_value, bool ignore_extras = false);


  public:
    UberProductsSpecJSON(void);
    virtual ~UberProductsSpecJSON(void);
    const char * getUberSpecKind(void) const;
    bool  hasPreferredProduct(void) const;
    std::string  getPreferredProduct(void);
    const std::string  getPreferredProduct(void) const;
    bool  hasPickupLocation(void) const;
    MapLocationJSON *  getPickupLocation(void);
    const MapLocationJSON *  getPickupLocation(void) const;
    bool  hasQueryTypes(void) const;
    size_t  countOfQueryTypes(void) const;
    TypeQueryTypes  elementOfQueryTypes(size_t element_num);
    const TypeQueryTypes  elementOfQueryTypes(size_t element_num) const;
    std::vector< TypeQueryTypes >  getQueryTypes(void);
    const std::vector< TypeQueryTypes >  getQueryTypes(void) const;

    virtual size_t extraUberProductsSpecComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraUberProductsSpecComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraUberProductsSpecComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraUberProductsSpecComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraUberProductsSpecLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraUberProductsSpecLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    size_t extraUberSpecComponentCount(void) const
      {
        size_t result = 0;
        if (flagHasPreferredProduct)
            ++result;
        if (flagHasPickupLocation)
            ++result;
        if (flagHasQueryTypes)
            ++result;
        result += extraUberProductsSpecComponentCount();
        return result;
      }
    const char *extraUberSpecComponentKey(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasPreferredProduct)
          {
            if (remainder == 0)
                return "PreferredProduct";
            --remainder;
          }
        if (flagHasPickupLocation)
          {
            if (remainder == 0)
                return "PickupLocation";
            --remainder;
          }
        if (flagHasQueryTypes)
          {
            if (remainder == 0)
                return "QueryTypes";
            --remainder;
          }
        return extraUberProductsSpecComponentKey(remainder);
      }
    JSONValue *extraUberSpecComponentValue(size_t component_num)
      {
        size_t remainder = component_num;
        if (flagHasPreferredProduct)
          {
            if (remainder == 0)
                return extraPreferredProductToJSON();
            --remainder;
          }
        if (flagHasPickupLocation)
          {
            if (remainder == 0)
                return extraPickupLocationToJSON();
            --remainder;
          }
        if (flagHasQueryTypes)
          {
            if (remainder == 0)
                return extraQueryTypesToJSON();
            --remainder;
          }
        return extraUberProductsSpecComponentValue(remainder);
      }
    const JSONValue *extraUberSpecComponentValue(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasPreferredProduct)
          {
            if (remainder == 0)
                return extraPreferredProductToJSON();
            --remainder;
          }
        if (flagHasPickupLocation)
          {
            if (remainder == 0)
                return extraPickupLocationToJSON();
            --remainder;
          }
        if (flagHasQueryTypes)
          {
            if (remainder == 0)
                return extraQueryTypesToJSON();
            --remainder;
          }
        return extraUberProductsSpecComponentValue(remainder);
      }
    JSONValue *extraUberSpecLookup(const char *field_name)
      {
        switch ((unsigned char)(field_name[0]))
          {
            case 'P':
                switch ((unsigned char)(field_name[1]))
                  {
                    case 'i':
                        if (strcmp(&(field_name[2]), "ckupLocation") == 0)
                            return (flagHasPickupLocation ? extraPickupLocationToJSON() : NULL);
                        break;
                    case 'r':
                        if (strcmp(&(field_name[2]), "eferredProduct") == 0)
                            return (flagHasPreferredProduct ? extraPreferredProductToJSON() : NULL);
                        break;
                    default:
                        break;
                  }
                break;
            case 'Q':
                if (strcmp(&(field_name[1]), "ueryTypes") == 0)
                    return (flagHasQueryTypes ? extraQueryTypesToJSON() : NULL);
                break;
            default:
                break;
          }
        return extraUberProductsSpecLookup(field_name);
      }
    const JSONValue *extraUberSpecLookup(const char *field_name) const
      {
        switch ((unsigned char)(field_name[0]))
          {
            case 'P':
                switch ((unsigned char)(field_name[1]))
                  {
                    case 'i':
                        if (strcmp(&(field_name[2]), "ckupLocation") == 0)
                            return (flagHasPickupLocation ? extraPickupLocationToJSON() : NULL);
                        break;
                    case 'r':
                        if (strcmp(&(field_name[2]), "eferredProduct") == 0)
                            return (flagHasPreferredProduct ? extraPreferredProductToJSON() : NULL);
                        break;
                    default:
                        break;
                  }
                break;
            case 'Q':
                if (strcmp(&(field_name[1]), "ueryTypes") == 0)
                    return (flagHasQueryTypes ? extraQueryTypesToJSON() : NULL);
                break;
            default:
                break;
          }
        return extraUberProductsSpecLookup(field_name);
      }

    void setPreferredProduct(std::string new_value)
      {
        flagHasPreferredProduct = true;
        storePreferredProduct = new_value;
      }
    void unsetPreferredProduct(void)
      {
        flagHasPreferredProduct = false;
      }
    void setPickupLocation(MapLocationJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasPickupLocation)
          {
            storePickupLocation->remove_reference();
          }
        flagHasPickupLocation = true;
        storePickupLocation = new_value;
      }
    void unsetPickupLocation(void)
      {
        if (flagHasPickupLocation)
          {
            storePickupLocation->remove_reference();
          }
        flagHasPickupLocation = false;
      }
    void initQueryTypes(void)
      {
        flagHasQueryTypes = true;
        storeQueryTypes.clear();
      }
    void appendQueryTypes(TypeQueryTypes to_append)
      {
        if (!flagHasQueryTypes)
          {
            flagHasQueryTypes = true;
            storeQueryTypes.clear();
          }
        assert(flagHasQueryTypes);
        storeQueryTypes.push_back(to_append);
      }
    void appendQueryTypes(const char *chars)
      {
        appendQueryTypes(stringToQueryTypes(chars));
      }
    void appendQueryTypes(std::string the_string)
      {
        appendQueryTypes(stringToQueryTypes(the_string.c_str()));
      }
    void unsetQueryTypes(void)
      {
        flagHasQueryTypes = false;
        storeQueryTypes.clear();
      }

    virtual void extraUberProductsSpecAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraUberProductsSpecSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraUberProductsSpecLookup(key);
        if (old_field == NULL)
          {
            extraUberProductsSpecAppendPair(key, new_component);
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
    void extraUberSpecAppendPair(const char *key, JSONValue *new_component)
      {
        switch ((unsigned char)(key[0]))
          {
            case 'P':
                switch ((unsigned char)(key[1]))
                  {
                    case 'i':
                        if (strcmp(&(key[2]), "ckupLocation") == 0)
                            {
                            fromJSONPickupLocation(new_component, false);
                            return;
                            }
                        break;
                    case 'r':
                        if (strcmp(&(key[2]), "eferredProduct") == 0)
                            {
                            fromJSONPreferredProduct(new_component, false);
                            return;
                            }
                        break;
                    default:
                        break;
                  }
                break;
            case 'Q':
                if (strcmp(&(key[1]), "ueryTypes") == 0)
                    {
                    fromJSONQueryTypes(new_component, false);
                    return;
                    }
                break;
            default:
                break;
          }
        extraUberProductsSpecAppendPair(key, new_component);
      }
    void extraUberSpecSetField(const char *key, JSONValue *new_component)
      {
        switch ((unsigned char)(key[0]))
          {
            case 'P':
                switch ((unsigned char)(key[1]))
                  {
                    case 'i':
                        if (strcmp(&(key[2]), "ckupLocation") == 0)
                            {
                            fromJSONPickupLocation(new_component, false);
                            return;
                            }
                        break;
                    case 'r':
                        if (strcmp(&(key[2]), "eferredProduct") == 0)
                            {
                            fromJSONPreferredProduct(new_component, false);
                            return;
                            }
                        break;
                    default:
                        break;
                  }
                break;
            case 'Q':
                if (strcmp(&(key[1]), "ueryTypes") == 0)
                    {
                    fromJSONQueryTypes(new_component, false);
                    return;
                    }
                break;
            default:
                break;
          }
        extraUberProductsSpecSetField(key, new_component);
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
        UberSpecJSON::write_fields_as_json(handler);
        assert(flagHasPreferredProduct);
        handler->start_pair("PreferredProduct");
        handler->string_value(storePreferredProduct);
        assert(flagHasPickupLocation);
        handler->start_pair("PickupLocation");
        storePickupLocation->write_as_json(handler);
        assert(flagHasQueryTypes);
        handler->start_pair("QueryTypes");
        assert(storeQueryTypes.size() >= 1);
        handler->start_array();
        for (size_t num1 = 0; num1 < storeQueryTypes.size(); ++num1)
          {
            switch (storeQueryTypes[num1])
              {
                case QueryTypes_availability:
                    handler->string_value("availability");
                    break;
                case QueryTypes_fare:
                    handler->string_value("fare");
                    break;
                case QueryTypes_surge:
                    handler->string_value("surge");
                    break;
                default:
                    assert(false);
              }
          }
        handler->finish_array();
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasPreferredProduct()))
          {
            return "When parsing the object for %what%, the \"PreferredProduct\" field was missing.";
          }
        if (!(hasPickupLocation()))
          {
            return "When parsing the object for %what%, the \"PickupLocation\" field was missing.";
          }
        if (!(hasQueryTypes()))
          {
            return "When parsing the object for %what%, the \"QueryTypes\" field was missing.";
          }
        return NULL;
      }

    static UberProductsSpecJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static UberProductsSpecJSON *from_text(const char *text, bool ignore_extras = false)
      {
        UberProductsSpecJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<UberProductsSpecJSON>, UberProductsSpecJSON *, bool> generator("Type UberProductsSpec", ignore_extras);
            parse_json_value(text, "Text for UberProductsSpecJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static UberProductsSpecJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        UberProductsSpecJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<UberProductsSpecJSON>, UberProductsSpecJSON *, bool> generator("Type UberProductsSpec", ignore_extras);
            parse_json_value(fp, file_name, &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    class Generator : public UberSpecJSON::Generator
      {
      private:
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorPreferredProduct;
        JSONHoldingGenerator<MapLocationJSON::Generator, RCHandle<MapLocationJSON>, MapLocationJSON *, bool > fieldGeneratorPickupLocation;
    class FieldGeneratorQueryTypes : public JSONStringGenerator
          {
          protected:
            FieldGeneratorQueryTypes(const char *what)
              {
                set_what(what);
              }
            FieldGeneratorQueryTypes(void)
              {
              }
            void handle_result(const char *result)
              {
                handle_result(stringToQueryTypes(result));
              }
            virtual void handle_result(TypeQueryTypes result) = 0;
          };
        JSONHoldingArrayGenerator<FieldGeneratorQueryTypes, TypeQueryTypes, TypeQueryTypes > fieldGeneratorQueryTypes;
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
            if (!(strcmp(getUberSpecJSONKey().c_str(), "UberProductsSpec") == 0))
                throw("The key field has a value other than `UberProductsSpec'.");
            UberProductsSpecJSON *result = new UberProductsSpecJSON();
            assert(result != NULL);
            RCHandle<UberProductsSpecJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraUberProductsSpecAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void handle_result(UberSpecJSON *new_result)
          {
            handle_result((UberProductsSpecJSON *)new_result);
          }
        void finish(UberProductsSpecJSON *result)
          {
            if (fieldGeneratorPreferredProduct.have_value)
              {
                result->setPreferredProduct(fieldGeneratorPreferredProduct.value);
                fieldGeneratorPreferredProduct.have_value = false;
              }
            else if (!(result->hasPreferredProduct()))
              {
                error("When parsing the object for %what%, the \"PreferredProduct\" field was missing.");
              }
            if (fieldGeneratorPickupLocation.have_value)
              {
                result->setPickupLocation(fieldGeneratorPickupLocation.value.referenced());
                fieldGeneratorPickupLocation.have_value = false;
              }
            else if (!(result->hasPickupLocation()))
              {
                error("When parsing the object for %what%, the \"PickupLocation\" field was missing.");
              }
            if (fieldGeneratorQueryTypes.have_value)
              {
                result->initQueryTypes();
                size_t count = fieldGeneratorQueryTypes.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendQueryTypes(fieldGeneratorQueryTypes.value[num]);
                  }
                fieldGeneratorQueryTypes.value.clear();
                fieldGeneratorQueryTypes.have_value = false;
              }
            else if (!(result->hasQueryTypes()))
              {
                error("When parsing the object for %what%, the \"QueryTypes\" field was missing.");
              }
            UberSpecJSON::Generator::finish(result);
          }
        virtual void handle_result(UberProductsSpecJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'P':
                    switch ((unsigned char)(field_name[1]))
                      {
                        case 'i':
                            if (strcmp(&(field_name[2]), "ckupLocation") == 0)
                                return &fieldGeneratorPickupLocation;
                            break;
                        case 'r':
                            if (strcmp(&(field_name[2]), "eferredProduct") == 0)
                                return &fieldGeneratorPreferredProduct;
                            break;
                        default:
                            break;
                      }
                    break;
                case 'Q':
                    if (strcmp(&(field_name[1]), "ueryTypes") == 0)
                        return &fieldGeneratorQueryTypes;
                    break;
                default:
                    break;
              }
            return UberSpecJSON::Generator::start_known_field(field_name);
          }

      public:
        Generator(bool ignore_extras = false) : UberSpecJSON::Generator(ignore_extras), fieldGeneratorPreferredProduct("field \"PreferredProduct\" of the UberProductsSpec class"), fieldGeneratorPickupLocation("field \"PickupLocation\" of the UberProductsSpec class", ignore_extras), fieldGeneratorQueryTypes("field \"QueryTypes\" of the UberProductsSpec class"), unknownFieldGenerator(ignore_extras)
          {
            set_what("the UberProductsSpec class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorPreferredProduct.reset();
            fieldGeneratorPickupLocation.reset();
            fieldGeneratorQueryTypes.reset();
            UberSpecJSON::Generator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* UBERPRODUCTSSPECJSON_H */
