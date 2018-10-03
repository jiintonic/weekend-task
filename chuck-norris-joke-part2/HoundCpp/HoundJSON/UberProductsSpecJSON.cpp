/* file "UberProductsSpecJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "UberProductsSpecJSON.h"

#include "UberProductsSpecJSON.h"


UberProductsSpecJSON::TypeQueryTypes UberProductsSpecJSON::stringToQueryTypes(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'a':
            if (strcmp(&(chars[1]), "vailability") == 0)
                return QueryTypes_availability;
            break;
        case 'f':
            if (strcmp(&(chars[1]), "are") == 0)
                return QueryTypes_fare;
            break;
        case 's':
            if (strcmp(&(chars[1]), "urge") == 0)
                return QueryTypes_surge;
            break;
        default:
            break;
      }
    throw("The value for field `QueryTypes' is not one of the legal values.");
  }

const char *UberProductsSpecJSON::stringFromQueryTypes(TypeQueryTypes the_enum)
  {
    switch (the_enum)
      {
        case QueryTypes_availability:
            return "availability";
        case QueryTypes_fare:
            return "fare";
        case QueryTypes_surge:
            return "surge";
        default:
            assert(false);
            return NULL;
      }
  }

UberProductsSpecJSON::UberProductsSpecJSON(const UberProductsSpecJSON &)
  {
    assert(false);
  }

UberProductsSpecJSON &UberProductsSpecJSON::operator=(const UberProductsSpecJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *UberProductsSpecJSON::extraPreferredProductToJSON(void) const
  {
    JSONStringValue *generated_string_PreferredProduct = new JSONStringValue(storePreferredProduct.c_str());
    return generated_string_PreferredProduct;
  }

JSONValue *UberProductsSpecJSON::extraPickupLocationToJSON(void) const
  {
    JSONValueHandler handler_PickupLocation;
    storePickupLocation->write_as_json(&handler_PickupLocation);
    handler_PickupLocation.result->add_reference();
    return handler_PickupLocation.result;
  }

JSONValue *UberProductsSpecJSON::extraQueryTypesToJSON(void) const
  {
    JSONArrayValue *generated_array_1_QueryTypes = new JSONArrayValue();
    for (size_t num1 = 0; num1 < storeQueryTypes.size(); ++num1)
      {
        JSONStringValue *generated_string_QueryTypes;
        switch (storeQueryTypes[num1])
          {
            case QueryTypes_availability:
                generated_string_QueryTypes = new JSONStringValue("availability");
                break;
            case QueryTypes_fare:
                generated_string_QueryTypes = new JSONStringValue("fare");
                break;
            case QueryTypes_surge:
                generated_string_QueryTypes = new JSONStringValue("surge");
                break;
            default:
                assert(false);
                generated_string_QueryTypes = NULL;
          }
        generated_array_1_QueryTypes->appendComponent(generated_string_QueryTypes);
      }
    return generated_array_1_QueryTypes;
  }

void UberProductsSpecJSON::fromJSONPreferredProduct(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field PreferredProduct of UberProductsSpecJSON is not a string.");
    setPreferredProduct(std::string(json_string->getData()));
  }

void UberProductsSpecJSON::fromJSONPickupLocation(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    MapLocationJSON *convert_classy = MapLocationJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setPickupLocation(convert_classy);
    convert_classy->remove_reference();
  }

void UberProductsSpecJSON::fromJSONQueryTypes(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field QueryTypes of UberProductsSpecJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    if (count1 < 1)
        throw("The value for field QueryTypes of UberProductsSpecJSON has too few elements.");
    std::vector< TypeQueryTypes > vector_QueryTypes1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        const JSONStringValue *json_string = json_array1->component(num1)->string_value();
        if (json_string == NULL)
            throw("The value for an element of field QueryTypes of UberProductsSpecJSON is not a string.");
        TypeQueryTypes the_enum;
        switch ((unsigned char)(json_string->getData()[0]))
          {
            case 'a':
                if (strcmp(&(json_string->getData()[1]), "vailability") == 0)
                      {
                        the_enum = QueryTypes_availability;
                        goto enum_is_done;
                      }
                break;
            case 'f':
                if (strcmp(&(json_string->getData()[1]), "are") == 0)
                      {
                        the_enum = QueryTypes_fare;
                        goto enum_is_done;
                      }
                break;
            case 's':
                if (strcmp(&(json_string->getData()[1]), "urge") == 0)
                      {
                        the_enum = QueryTypes_surge;
                        goto enum_is_done;
                      }
                break;
            default:
                break;
          }
        throw("The value for an element of field QueryTypes of UberProductsSpecJSON is not one of the legal strings.");
      enum_is_done:;
        vector_QueryTypes1[num1] = the_enum;
      }
    assert(vector_QueryTypes1.size() >= 1);
    initQueryTypes();
    for (size_t num2 = 0; num2 < vector_QueryTypes1.size(); ++num2)
        appendQueryTypes(vector_QueryTypes1[num2]);
    for (size_t num1 = 0; num1 < vector_QueryTypes1.size(); ++num1)
      {
      }
  }

UberProductsSpecJSON::UberProductsSpecJSON(void) :
        flagHasPreferredProduct(false),
        flagHasPickupLocation(false),
        flagHasQueryTypes(false)
  {
    extraIndex = create_string_index();
  }

UberProductsSpecJSON::~UberProductsSpecJSON(void)
  {
    if (flagHasPickupLocation)
      {
        storePickupLocation->remove_reference();
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *UberProductsSpecJSON::getUberSpecKind(void) const
  {
    return "UberProductsSpec";
  }

bool UberProductsSpecJSON::hasPreferredProduct(void) const
  {
    return flagHasPreferredProduct;
  }

std::string UberProductsSpecJSON::getPreferredProduct(void)
  {
    assert(flagHasPreferredProduct);
    return storePreferredProduct;
  }

const std::string UberProductsSpecJSON::getPreferredProduct(void) const
  {
    assert(flagHasPreferredProduct);
    return storePreferredProduct;
  }

bool UberProductsSpecJSON::hasPickupLocation(void) const
  {
    return flagHasPickupLocation;
  }

MapLocationJSON * UberProductsSpecJSON::getPickupLocation(void)
  {
    assert(flagHasPickupLocation);
    return storePickupLocation;
  }

const MapLocationJSON * UberProductsSpecJSON::getPickupLocation(void) const
  {
    assert(flagHasPickupLocation);
    return storePickupLocation;
  }

bool UberProductsSpecJSON::hasQueryTypes(void) const
  {
    return flagHasQueryTypes;
  }

size_t UberProductsSpecJSON::countOfQueryTypes(void) const
  {
    assert(flagHasQueryTypes);
    return storeQueryTypes.size();
  }

UberProductsSpecJSON::TypeQueryTypes UberProductsSpecJSON::elementOfQueryTypes(size_t element_num)
  {
    assert(flagHasQueryTypes);
    return storeQueryTypes[element_num];
  }

const UberProductsSpecJSON::TypeQueryTypes UberProductsSpecJSON::elementOfQueryTypes(size_t element_num) const
  {
    assert(flagHasQueryTypes);
    return storeQueryTypes[element_num];
  }

std::vector< UberProductsSpecJSON::TypeQueryTypes > UberProductsSpecJSON::getQueryTypes(void)
  {
    assert(flagHasQueryTypes);
    return storeQueryTypes;
  }

const std::vector< UberProductsSpecJSON::TypeQueryTypes > UberProductsSpecJSON::getQueryTypes(void) const
  {
    assert(flagHasQueryTypes);
    return storeQueryTypes;
  }

UberProductsSpecJSON *UberProductsSpecJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    UberProductsSpecJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<UberProductsSpecJSON>, UberProductsSpecJSON *, bool> generator("Type UberProductsSpec", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
