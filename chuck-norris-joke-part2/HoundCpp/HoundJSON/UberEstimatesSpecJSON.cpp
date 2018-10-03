/* file "UberEstimatesSpecJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "UberEstimatesSpecJSON.h"

#include "UberEstimatesSpecJSON.h"


UberEstimatesSpecJSON::TypeEstimateTypes UberEstimatesSpecJSON::stringToEstimateTypes(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'c':
            if (strcmp(&(chars[1]), "ost") == 0)
                return EstimateTypes_cost;
            break;
        case 'd':
            switch ((unsigned char)(chars[1]))
              {
                case 'i':
                    if (strcmp(&(chars[2]), "stance") == 0)
                        return EstimateTypes_distance;
                    break;
                case 'u':
                    if (strcmp(&(chars[2]), "ration") == 0)
                        return EstimateTypes_duration;
                    break;
                default:
                    break;
              }
            break;
        case 't':
            if (strcmp(&(chars[1]), "ime") == 0)
                return EstimateTypes_time;
            break;
        default:
            break;
      }
    throw("The value for field `EstimateTypes' is not one of the legal values.");
  }

const char *UberEstimatesSpecJSON::stringFromEstimateTypes(TypeEstimateTypes the_enum)
  {
    switch (the_enum)
      {
        case EstimateTypes_cost:
            return "cost";
        case EstimateTypes_duration:
            return "duration";
        case EstimateTypes_distance:
            return "distance";
        case EstimateTypes_time:
            return "time";
        default:
            assert(false);
            return NULL;
      }
  }

UberEstimatesSpecJSON::UberEstimatesSpecJSON(const UberEstimatesSpecJSON &)
  {
    assert(false);
  }

UberEstimatesSpecJSON &UberEstimatesSpecJSON::operator=(const UberEstimatesSpecJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *UberEstimatesSpecJSON::extraPreferredProductToJSON(void) const
  {
    JSONStringValue *generated_string_PreferredProduct = new JSONStringValue(storePreferredProduct.c_str());
    return generated_string_PreferredProduct;
  }

JSONValue *UberEstimatesSpecJSON::extraPickupLocationToJSON(void) const
  {
    JSONValueHandler handler_PickupLocation;
    storePickupLocation->write_as_json(&handler_PickupLocation);
    handler_PickupLocation.result->add_reference();
    return handler_PickupLocation.result;
  }

JSONValue *UberEstimatesSpecJSON::extraDropoffLocationToJSON(void) const
  {
    JSONValueHandler handler_DropoffLocation;
    storeDropoffLocation->write_as_json(&handler_DropoffLocation);
    handler_DropoffLocation.result->add_reference();
    return handler_DropoffLocation.result;
  }

JSONValue *UberEstimatesSpecJSON::extraPassengerCountToJSON(void) const
  {
    JSONIntegerValue *generated_integer_PassengerCount = new JSONIntegerValue(storePassengerCount.get_o_integer());
    return generated_integer_PassengerCount;
  }

JSONValue *UberEstimatesSpecJSON::extraEstimateTypesToJSON(void) const
  {
    JSONArrayValue *generated_array_1_EstimateTypes = new JSONArrayValue();
    for (size_t num1 = 0; num1 < storeEstimateTypes.size(); ++num1)
      {
        JSONStringValue *generated_string_EstimateTypes;
        switch (storeEstimateTypes[num1])
          {
            case EstimateTypes_cost:
                generated_string_EstimateTypes = new JSONStringValue("cost");
                break;
            case EstimateTypes_duration:
                generated_string_EstimateTypes = new JSONStringValue("duration");
                break;
            case EstimateTypes_distance:
                generated_string_EstimateTypes = new JSONStringValue("distance");
                break;
            case EstimateTypes_time:
                generated_string_EstimateTypes = new JSONStringValue("time");
                break;
            default:
                assert(false);
                generated_string_EstimateTypes = NULL;
          }
        generated_array_1_EstimateTypes->appendComponent(generated_string_EstimateTypes);
      }
    return generated_array_1_EstimateTypes;
  }

void UberEstimatesSpecJSON::fromJSONPreferredProduct(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field PreferredProduct of UberEstimatesSpecJSON is not a string.");
    setPreferredProduct(std::string(json_string->getData()));
  }

void UberEstimatesSpecJSON::fromJSONPickupLocation(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    MapLocationJSON *convert_classy = MapLocationJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setPickupLocation(convert_classy);
    convert_classy->remove_reference();
  }

void UberEstimatesSpecJSON::fromJSONDropoffLocation(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    MapLocationJSON *convert_classy = MapLocationJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setDropoffLocation(convert_classy);
    convert_classy->remove_reference();
  }

void UberEstimatesSpecJSON::fromJSONPassengerCount(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field PassengerCount of UberEstimatesSpecJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field PassengerCount of UberEstimatesSpecJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setPassengerCount(extracted_integer);
  }

void UberEstimatesSpecJSON::fromJSONEstimateTypes(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field EstimateTypes of UberEstimatesSpecJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    if (count1 < 1)
        throw("The value for field EstimateTypes of UberEstimatesSpecJSON has too few elements.");
    std::vector< TypeEstimateTypes > vector_EstimateTypes1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        const JSONStringValue *json_string = json_array1->component(num1)->string_value();
        if (json_string == NULL)
            throw("The value for an element of field EstimateTypes of UberEstimatesSpecJSON is not a string.");
        TypeEstimateTypes the_enum;
        switch ((unsigned char)(json_string->getData()[0]))
          {
            case 'c':
                if (strcmp(&(json_string->getData()[1]), "ost") == 0)
                      {
                        the_enum = EstimateTypes_cost;
                        goto enum_is_done;
                      }
                break;
            case 'd':
                switch ((unsigned char)(json_string->getData()[1]))
                  {
                    case 'i':
                        if (strcmp(&(json_string->getData()[2]), "stance") == 0)
                              {
                                the_enum = EstimateTypes_distance;
                                goto enum_is_done;
                              }
                        break;
                    case 'u':
                        if (strcmp(&(json_string->getData()[2]), "ration") == 0)
                              {
                                the_enum = EstimateTypes_duration;
                                goto enum_is_done;
                              }
                        break;
                    default:
                        break;
                  }
                break;
            case 't':
                if (strcmp(&(json_string->getData()[1]), "ime") == 0)
                      {
                        the_enum = EstimateTypes_time;
                        goto enum_is_done;
                      }
                break;
            default:
                break;
          }
        throw("The value for an element of field EstimateTypes of UberEstimatesSpecJSON is not one of the legal strings.");
      enum_is_done:;
        vector_EstimateTypes1[num1] = the_enum;
      }
    assert(vector_EstimateTypes1.size() >= 1);
    initEstimateTypes();
    for (size_t num2 = 0; num2 < vector_EstimateTypes1.size(); ++num2)
        appendEstimateTypes(vector_EstimateTypes1[num2]);
    for (size_t num1 = 0; num1 < vector_EstimateTypes1.size(); ++num1)
      {
      }
  }

UberEstimatesSpecJSON::UberEstimatesSpecJSON(void) :
        flagHasPreferredProduct(false),
        flagHasPickupLocation(false),
        flagHasDropoffLocation(false),
        flagHasPassengerCount(false),
        flagHasEstimateTypes(false)
  {
    extraIndex = create_string_index();
  }

UberEstimatesSpecJSON::~UberEstimatesSpecJSON(void)
  {
    if (flagHasPickupLocation)
      {
        storePickupLocation->remove_reference();
      }
    if (flagHasDropoffLocation)
      {
        storeDropoffLocation->remove_reference();
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *UberEstimatesSpecJSON::getUberSpecKind(void) const
  {
    return "UberEstimatesSpec";
  }

bool UberEstimatesSpecJSON::hasPreferredProduct(void) const
  {
    return flagHasPreferredProduct;
  }

std::string UberEstimatesSpecJSON::getPreferredProduct(void)
  {
    assert(flagHasPreferredProduct);
    return storePreferredProduct;
  }

const std::string UberEstimatesSpecJSON::getPreferredProduct(void) const
  {
    assert(flagHasPreferredProduct);
    return storePreferredProduct;
  }

bool UberEstimatesSpecJSON::hasPickupLocation(void) const
  {
    return flagHasPickupLocation;
  }

MapLocationJSON * UberEstimatesSpecJSON::getPickupLocation(void)
  {
    assert(flagHasPickupLocation);
    return storePickupLocation;
  }

const MapLocationJSON * UberEstimatesSpecJSON::getPickupLocation(void) const
  {
    assert(flagHasPickupLocation);
    return storePickupLocation;
  }

bool UberEstimatesSpecJSON::hasDropoffLocation(void) const
  {
    return flagHasDropoffLocation;
  }

MapLocationJSON * UberEstimatesSpecJSON::getDropoffLocation(void)
  {
    assert(flagHasDropoffLocation);
    return storeDropoffLocation;
  }

const MapLocationJSON * UberEstimatesSpecJSON::getDropoffLocation(void) const
  {
    assert(flagHasDropoffLocation);
    return storeDropoffLocation;
  }

bool UberEstimatesSpecJSON::hasPassengerCount(void) const
  {
    return flagHasPassengerCount;
  }

OInteger UberEstimatesSpecJSON::getPassengerCount(void)
  {
    assert(flagHasPassengerCount);
    return storePassengerCount;
  }

const OInteger UberEstimatesSpecJSON::getPassengerCount(void) const
  {
    assert(flagHasPassengerCount);
    return storePassengerCount;
  }

bool UberEstimatesSpecJSON::hasEstimateTypes(void) const
  {
    return flagHasEstimateTypes;
  }

size_t UberEstimatesSpecJSON::countOfEstimateTypes(void) const
  {
    assert(flagHasEstimateTypes);
    return storeEstimateTypes.size();
  }

UberEstimatesSpecJSON::TypeEstimateTypes UberEstimatesSpecJSON::elementOfEstimateTypes(size_t element_num)
  {
    assert(flagHasEstimateTypes);
    return storeEstimateTypes[element_num];
  }

const UberEstimatesSpecJSON::TypeEstimateTypes UberEstimatesSpecJSON::elementOfEstimateTypes(size_t element_num) const
  {
    assert(flagHasEstimateTypes);
    return storeEstimateTypes[element_num];
  }

std::vector< UberEstimatesSpecJSON::TypeEstimateTypes > UberEstimatesSpecJSON::getEstimateTypes(void)
  {
    assert(flagHasEstimateTypes);
    return storeEstimateTypes;
  }

const std::vector< UberEstimatesSpecJSON::TypeEstimateTypes > UberEstimatesSpecJSON::getEstimateTypes(void) const
  {
    assert(flagHasEstimateTypes);
    return storeEstimateTypes;
  }

char UberEstimatesSpecJSON::Generator::lowerBoundPassengerCount[] = "0";
UberEstimatesSpecJSON *UberEstimatesSpecJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    UberEstimatesSpecJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<UberEstimatesSpecJSON>, UberEstimatesSpecJSON *, bool> generator("Type UberEstimatesSpec", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
