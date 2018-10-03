/* file "UberEstimatesSpecJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef UBERESTIMATESSPECJSON_H
#define UBERESTIMATESSPECJSON_H

#pragma interface

#include "UberSpecJSON.h"
#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONHoldingArrayGenerator.h"
#include "JSONStringGenerator.h"
#include "JSONIntegerLowerBoundOnlyGenerator.h"
#include <vector>
#include <string>
#include "OInteger.h"
#include "MapLocationJSON.h"
#include "MapLocationJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class UberEstimatesSpecJSON : public UberSpecJSON
  {
  public:
    enum TypeEstimateTypes
      {
        EstimateTypes_cost,
        EstimateTypes_duration,
        EstimateTypes_distance,
        EstimateTypes_time
      };

    static TypeEstimateTypes  stringToEstimateTypes(const char *chars);
    static const char * stringFromEstimateTypes(TypeEstimateTypes the_enum);

  private:
    bool flagHasPreferredProduct;
    std::string storePreferredProduct;
    bool flagHasPickupLocation;
    MapLocationJSON * storePickupLocation;
    bool flagHasDropoffLocation;
    MapLocationJSON * storeDropoffLocation;
    bool flagHasPassengerCount;
    OInteger storePassengerCount;
    bool flagHasEstimateTypes;
    std::vector< TypeEstimateTypes > storeEstimateTypes;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    UberEstimatesSpecJSON(const UberEstimatesSpecJSON &);
    UberEstimatesSpecJSON & operator=(const UberEstimatesSpecJSON &other);

    JSONValue * extraPreferredProductToJSON(void) const;
    JSONValue * extraPickupLocationToJSON(void) const;
    JSONValue * extraDropoffLocationToJSON(void) const;
    JSONValue * extraPassengerCountToJSON(void) const;
    JSONValue * extraEstimateTypesToJSON(void) const;

    void  fromJSONPreferredProduct(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONPickupLocation(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONDropoffLocation(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONPassengerCount(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONEstimateTypes(JSONValue *json_value, bool ignore_extras = false);


  public:
    UberEstimatesSpecJSON(void);
    virtual ~UberEstimatesSpecJSON(void);
    const char * getUberSpecKind(void) const;
    bool  hasPreferredProduct(void) const;
    std::string  getPreferredProduct(void);
    const std::string  getPreferredProduct(void) const;
    bool  hasPickupLocation(void) const;
    MapLocationJSON *  getPickupLocation(void);
    const MapLocationJSON *  getPickupLocation(void) const;
    bool  hasDropoffLocation(void) const;
    MapLocationJSON *  getDropoffLocation(void);
    const MapLocationJSON *  getDropoffLocation(void) const;
    bool  hasPassengerCount(void) const;
    OInteger  getPassengerCount(void);
    const OInteger  getPassengerCount(void) const;
    bool  hasEstimateTypes(void) const;
    size_t  countOfEstimateTypes(void) const;
    TypeEstimateTypes  elementOfEstimateTypes(size_t element_num);
    const TypeEstimateTypes  elementOfEstimateTypes(size_t element_num) const;
    std::vector< TypeEstimateTypes >  getEstimateTypes(void);
    const std::vector< TypeEstimateTypes >  getEstimateTypes(void) const;

    virtual size_t extraUberEstimatesSpecComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraUberEstimatesSpecComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraUberEstimatesSpecComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraUberEstimatesSpecComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraUberEstimatesSpecLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraUberEstimatesSpecLookup(const char *field_name) const
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
        if (flagHasDropoffLocation)
            ++result;
        if (flagHasPassengerCount)
            ++result;
        if (flagHasEstimateTypes)
            ++result;
        result += extraUberEstimatesSpecComponentCount();
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
        if (flagHasDropoffLocation)
          {
            if (remainder == 0)
                return "DropoffLocation";
            --remainder;
          }
        if (flagHasPassengerCount)
          {
            if (remainder == 0)
                return "PassengerCount";
            --remainder;
          }
        if (flagHasEstimateTypes)
          {
            if (remainder == 0)
                return "EstimateTypes";
            --remainder;
          }
        return extraUberEstimatesSpecComponentKey(remainder);
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
        if (flagHasDropoffLocation)
          {
            if (remainder == 0)
                return extraDropoffLocationToJSON();
            --remainder;
          }
        if (flagHasPassengerCount)
          {
            if (remainder == 0)
                return extraPassengerCountToJSON();
            --remainder;
          }
        if (flagHasEstimateTypes)
          {
            if (remainder == 0)
                return extraEstimateTypesToJSON();
            --remainder;
          }
        return extraUberEstimatesSpecComponentValue(remainder);
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
        if (flagHasDropoffLocation)
          {
            if (remainder == 0)
                return extraDropoffLocationToJSON();
            --remainder;
          }
        if (flagHasPassengerCount)
          {
            if (remainder == 0)
                return extraPassengerCountToJSON();
            --remainder;
          }
        if (flagHasEstimateTypes)
          {
            if (remainder == 0)
                return extraEstimateTypesToJSON();
            --remainder;
          }
        return extraUberEstimatesSpecComponentValue(remainder);
      }
    JSONValue *extraUberSpecLookup(const char *field_name)
      {
        switch ((unsigned char)(field_name[0]))
          {
            case 'D':
                if (strcmp(&(field_name[1]), "ropoffLocation") == 0)
                    return (flagHasDropoffLocation ? extraDropoffLocationToJSON() : NULL);
                break;
            case 'E':
                if (strcmp(&(field_name[1]), "stimateTypes") == 0)
                    return (flagHasEstimateTypes ? extraEstimateTypesToJSON() : NULL);
                break;
            case 'P':
                switch ((unsigned char)(field_name[1]))
                  {
                    case 'a':
                        if (strcmp(&(field_name[2]), "ssengerCount") == 0)
                            return (flagHasPassengerCount ? extraPassengerCountToJSON() : NULL);
                        break;
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
            default:
                break;
          }
        return extraUberEstimatesSpecLookup(field_name);
      }
    const JSONValue *extraUberSpecLookup(const char *field_name) const
      {
        switch ((unsigned char)(field_name[0]))
          {
            case 'D':
                if (strcmp(&(field_name[1]), "ropoffLocation") == 0)
                    return (flagHasDropoffLocation ? extraDropoffLocationToJSON() : NULL);
                break;
            case 'E':
                if (strcmp(&(field_name[1]), "stimateTypes") == 0)
                    return (flagHasEstimateTypes ? extraEstimateTypesToJSON() : NULL);
                break;
            case 'P':
                switch ((unsigned char)(field_name[1]))
                  {
                    case 'a':
                        if (strcmp(&(field_name[2]), "ssengerCount") == 0)
                            return (flagHasPassengerCount ? extraPassengerCountToJSON() : NULL);
                        break;
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
            default:
                break;
          }
        return extraUberEstimatesSpecLookup(field_name);
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
    void setDropoffLocation(MapLocationJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasDropoffLocation)
          {
            storeDropoffLocation->remove_reference();
          }
        flagHasDropoffLocation = true;
        storeDropoffLocation = new_value;
      }
    void unsetDropoffLocation(void)
      {
        if (flagHasDropoffLocation)
          {
            storeDropoffLocation->remove_reference();
          }
        flagHasDropoffLocation = false;
      }
    void setPassengerCount(OInteger new_value)
      {
        flagHasPassengerCount = true;
        if (new_value < 0)
            throw("The value for field PassengerCount of UberEstimatesSpecJSON is less than the lower bound (0) for that field.");
        storePassengerCount = new_value;
      }
    void unsetPassengerCount(void)
      {
        flagHasPassengerCount = false;
      }
    void initEstimateTypes(void)
      {
        flagHasEstimateTypes = true;
        storeEstimateTypes.clear();
      }
    void appendEstimateTypes(TypeEstimateTypes to_append)
      {
        if (!flagHasEstimateTypes)
          {
            flagHasEstimateTypes = true;
            storeEstimateTypes.clear();
          }
        assert(flagHasEstimateTypes);
        storeEstimateTypes.push_back(to_append);
      }
    void appendEstimateTypes(const char *chars)
      {
        appendEstimateTypes(stringToEstimateTypes(chars));
      }
    void appendEstimateTypes(std::string the_string)
      {
        appendEstimateTypes(stringToEstimateTypes(the_string.c_str()));
      }
    void unsetEstimateTypes(void)
      {
        flagHasEstimateTypes = false;
        storeEstimateTypes.clear();
      }

    virtual void extraUberEstimatesSpecAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraUberEstimatesSpecSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraUberEstimatesSpecLookup(key);
        if (old_field == NULL)
          {
            extraUberEstimatesSpecAppendPair(key, new_component);
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
            case 'D':
                if (strcmp(&(key[1]), "ropoffLocation") == 0)
                    {
                    fromJSONDropoffLocation(new_component, false);
                    return;
                    }
                break;
            case 'E':
                if (strcmp(&(key[1]), "stimateTypes") == 0)
                    {
                    fromJSONEstimateTypes(new_component, false);
                    return;
                    }
                break;
            case 'P':
                switch ((unsigned char)(key[1]))
                  {
                    case 'a':
                        if (strcmp(&(key[2]), "ssengerCount") == 0)
                            {
                            fromJSONPassengerCount(new_component, false);
                            return;
                            }
                        break;
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
            default:
                break;
          }
        extraUberEstimatesSpecAppendPair(key, new_component);
      }
    void extraUberSpecSetField(const char *key, JSONValue *new_component)
      {
        switch ((unsigned char)(key[0]))
          {
            case 'D':
                if (strcmp(&(key[1]), "ropoffLocation") == 0)
                    {
                    fromJSONDropoffLocation(new_component, false);
                    return;
                    }
                break;
            case 'E':
                if (strcmp(&(key[1]), "stimateTypes") == 0)
                    {
                    fromJSONEstimateTypes(new_component, false);
                    return;
                    }
                break;
            case 'P':
                switch ((unsigned char)(key[1]))
                  {
                    case 'a':
                        if (strcmp(&(key[2]), "ssengerCount") == 0)
                            {
                            fromJSONPassengerCount(new_component, false);
                            return;
                            }
                        break;
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
            default:
                break;
          }
        extraUberEstimatesSpecSetField(key, new_component);
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
        if (flagHasDropoffLocation)
          {
            handler->start_pair("DropoffLocation");
            storeDropoffLocation->write_as_json(handler);
          }
        assert(flagHasPassengerCount);
        handler->start_pair("PassengerCount");
        handler->number_value(storePassengerCount.get_o_integer());
        assert(flagHasEstimateTypes);
        handler->start_pair("EstimateTypes");
        assert(storeEstimateTypes.size() >= 1);
        handler->start_array();
        for (size_t num1 = 0; num1 < storeEstimateTypes.size(); ++num1)
          {
            switch (storeEstimateTypes[num1])
              {
                case EstimateTypes_cost:
                    handler->string_value("cost");
                    break;
                case EstimateTypes_duration:
                    handler->string_value("duration");
                    break;
                case EstimateTypes_distance:
                    handler->string_value("distance");
                    break;
                case EstimateTypes_time:
                    handler->string_value("time");
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
        if (!(hasPassengerCount()))
          {
            return "When parsing the object for %what%, the \"PassengerCount\" field was missing.";
          }
        if (!(hasEstimateTypes()))
          {
            return "When parsing the object for %what%, the \"EstimateTypes\" field was missing.";
          }
        return NULL;
      }

    static UberEstimatesSpecJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static UberEstimatesSpecJSON *from_text(const char *text, bool ignore_extras = false)
      {
        UberEstimatesSpecJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<UberEstimatesSpecJSON>, UberEstimatesSpecJSON *, bool> generator("Type UberEstimatesSpec", ignore_extras);
            parse_json_value(text, "Text for UberEstimatesSpecJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static UberEstimatesSpecJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        UberEstimatesSpecJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<UberEstimatesSpecJSON>, UberEstimatesSpecJSON *, bool> generator("Type UberEstimatesSpec", ignore_extras);
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
        JSONHoldingGenerator<MapLocationJSON::Generator, RCHandle<MapLocationJSON>, MapLocationJSON *, bool > fieldGeneratorDropoffLocation;
        static char lowerBoundPassengerCount[];
        JSONHoldingGenerator<JSONIntegerLowerBoundOnlyGenerator<lowerBoundPassengerCount>, OInteger, o_integer > fieldGeneratorPassengerCount;
    class FieldGeneratorEstimateTypes : public JSONStringGenerator
          {
          protected:
            FieldGeneratorEstimateTypes(const char *what)
              {
                set_what(what);
              }
            FieldGeneratorEstimateTypes(void)
              {
              }
            void handle_result(const char *result)
              {
                handle_result(stringToEstimateTypes(result));
              }
            virtual void handle_result(TypeEstimateTypes result) = 0;
          };
        JSONHoldingArrayGenerator<FieldGeneratorEstimateTypes, TypeEstimateTypes, TypeEstimateTypes > fieldGeneratorEstimateTypes;
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
            if (!(strcmp(getUberSpecJSONKey().c_str(), "UberEstimatesSpec") == 0))
                throw("The key field has a value other than `UberEstimatesSpec'.");
            UberEstimatesSpecJSON *result = new UberEstimatesSpecJSON();
            assert(result != NULL);
            RCHandle<UberEstimatesSpecJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraUberEstimatesSpecAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void handle_result(UberSpecJSON *new_result)
          {
            handle_result((UberEstimatesSpecJSON *)new_result);
          }
        void finish(UberEstimatesSpecJSON *result)
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
            if (fieldGeneratorDropoffLocation.have_value)
              {
                result->setDropoffLocation(fieldGeneratorDropoffLocation.value.referenced());
                fieldGeneratorDropoffLocation.have_value = false;
              }
            if (fieldGeneratorPassengerCount.have_value)
              {
                result->setPassengerCount(fieldGeneratorPassengerCount.value);
                fieldGeneratorPassengerCount.have_value = false;
              }
            else if (!(result->hasPassengerCount()))
              {
                error("When parsing the object for %what%, the \"PassengerCount\" field was missing.");
              }
            if (fieldGeneratorEstimateTypes.have_value)
              {
                result->initEstimateTypes();
                size_t count = fieldGeneratorEstimateTypes.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendEstimateTypes(fieldGeneratorEstimateTypes.value[num]);
                  }
                fieldGeneratorEstimateTypes.value.clear();
                fieldGeneratorEstimateTypes.have_value = false;
              }
            else if (!(result->hasEstimateTypes()))
              {
                error("When parsing the object for %what%, the \"EstimateTypes\" field was missing.");
              }
            UberSpecJSON::Generator::finish(result);
          }
        virtual void handle_result(UberEstimatesSpecJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'D':
                    if (strcmp(&(field_name[1]), "ropoffLocation") == 0)
                        return &fieldGeneratorDropoffLocation;
                    break;
                case 'E':
                    if (strcmp(&(field_name[1]), "stimateTypes") == 0)
                        return &fieldGeneratorEstimateTypes;
                    break;
                case 'P':
                    switch ((unsigned char)(field_name[1]))
                      {
                        case 'a':
                            if (strcmp(&(field_name[2]), "ssengerCount") == 0)
                                return &fieldGeneratorPassengerCount;
                            break;
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
                default:
                    break;
              }
            return UberSpecJSON::Generator::start_known_field(field_name);
          }

      public:
        Generator(bool ignore_extras = false) : UberSpecJSON::Generator(ignore_extras), fieldGeneratorPreferredProduct("field \"PreferredProduct\" of the UberEstimatesSpec class"), fieldGeneratorPickupLocation("field \"PickupLocation\" of the UberEstimatesSpec class", ignore_extras), fieldGeneratorDropoffLocation("field \"DropoffLocation\" of the UberEstimatesSpec class", ignore_extras), fieldGeneratorPassengerCount("field \"PassengerCount\" of the UberEstimatesSpec class"), fieldGeneratorEstimateTypes("field \"EstimateTypes\" of the UberEstimatesSpec class"), unknownFieldGenerator(ignore_extras)
          {
            set_what("the UberEstimatesSpec class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorPreferredProduct.reset();
            fieldGeneratorPickupLocation.reset();
            fieldGeneratorDropoffLocation.reset();
            fieldGeneratorPassengerCount.reset();
            fieldGeneratorEstimateTypes.reset();
            UberSpecJSON::Generator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* UBERESTIMATESSPECJSON_H */
