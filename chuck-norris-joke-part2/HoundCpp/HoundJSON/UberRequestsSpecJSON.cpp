/* file "UberRequestsSpecJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "UberRequestsSpecJSON.h"

#include "UberRequestsSpecJSON.h"


UberRequestsSpecJSON::TypeNewStates UberRequestsSpecJSON::stringToNewStates(const char *chars)
  {
    if (strncmp(chars, "select_", 7) == 0)
      {
        switch ((unsigned char)(chars[7]))
          {
            case 'd':
                if (strcmp(&(chars[8]), "rop_off_location") == 0)
                    return NewStates_select_drop_off_location;
                break;
            case 'p':
                if (strcmp(&(chars[8]), "ick_up_location") == 0)
                    return NewStates_select_pick_up_location;
                break;
            case 'u':
                if (strncmp(&(chars[8]), "ber_product", 11) == 0)
                  {
                    switch ((unsigned char)(chars[19]))
                      {
                        case 0:
                            return NewStates_select_uber_product;
                        case '_':
                            if (strcmp(&(chars[20]), "id") == 0)
                                return NewStates_select_uber_product_id;
                            break;
                        default:
                            break;
                      }
                  }
                break;
            default:
                break;
          }
      }
    throw("The value for field `NewStates' is not one of the legal values.");
  }

const char *UberRequestsSpecJSON::stringFromNewStates(TypeNewStates the_enum)
  {
    switch (the_enum)
      {
        case NewStates_select_pick_up_location:
            return "select_pick_up_location";
        case NewStates_select_drop_off_location:
            return "select_drop_off_location";
        case NewStates_select_uber_product:
            return "select_uber_product";
        case NewStates_select_uber_product_id:
            return "select_uber_product_id";
        default:
            assert(false);
            return NULL;
      }
  }

UberRequestsSpecJSON::UberRequestsSpecJSON(const UberRequestsSpecJSON &)
  {
    assert(false);
  }

UberRequestsSpecJSON &UberRequestsSpecJSON::operator=(const UberRequestsSpecJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *UberRequestsSpecJSON::extraIsCancelledToJSON(void) const
  {
    JSONValue *generated_boolean_IsCancelled = (storeIsCancelled ? (JSONValue *)new JSONTrueValue() : (JSONValue *)new JSONFalseValue());
    return generated_boolean_IsCancelled;
  }

JSONValue *UberRequestsSpecJSON::extraIsConfirmedToJSON(void) const
  {
    JSONValue *generated_boolean_IsConfirmed = (storeIsConfirmed ? (JSONValue *)new JSONTrueValue() : (JSONValue *)new JSONFalseValue());
    return generated_boolean_IsConfirmed;
  }

JSONValue *UberRequestsSpecJSON::extraIsNotUnderstoodToJSON(void) const
  {
    JSONValue *generated_boolean_IsNotUnderstood = (storeIsNotUnderstood ? (JSONValue *)new JSONTrueValue() : (JSONValue *)new JSONFalseValue());
    return generated_boolean_IsNotUnderstood;
  }

JSONValue *UberRequestsSpecJSON::extraIsRedirectOnConfirmationToJSON(void) const
  {
    JSONValue *generated_boolean_IsRedirectOnConfirmation = (storeIsRedirectOnConfirmation ? (JSONValue *)new JSONTrueValue() : (JSONValue *)new JSONFalseValue());
    return generated_boolean_IsRedirectOnConfirmation;
  }

JSONValue *UberRequestsSpecJSON::extraIsSurgeConfirmedToJSON(void) const
  {
    JSONValue *generated_boolean_IsSurgeConfirmed = (storeIsSurgeConfirmed ? (JSONValue *)new JSONTrueValue() : (JSONValue *)new JSONFalseValue());
    return generated_boolean_IsSurgeConfirmed;
  }

JSONValue *UberRequestsSpecJSON::extraSurgeConfirmationIdToJSON(void) const
  {
    JSONStringValue *generated_string_SurgeConfirmationId = new JSONStringValue(storeSurgeConfirmationId.c_str());
    return generated_string_SurgeConfirmationId;
  }

JSONValue *UberRequestsSpecJSON::extraPreferredProductToJSON(void) const
  {
    JSONStringValue *generated_string_PreferredProduct = new JSONStringValue(storePreferredProduct.c_str());
    return generated_string_PreferredProduct;
  }

JSONValue *UberRequestsSpecJSON::extraUberProductIdToJSON(void) const
  {
    JSONStringValue *generated_string_UberProductId = new JSONStringValue(storeUberProductId.c_str());
    return generated_string_UberProductId;
  }

JSONValue *UberRequestsSpecJSON::extraPickupLocationToJSON(void) const
  {
    JSONValueHandler handler_PickupLocation;
    storePickupLocation->write_as_json(&handler_PickupLocation);
    handler_PickupLocation.result->add_reference();
    return handler_PickupLocation.result;
  }

JSONValue *UberRequestsSpecJSON::extraDropoffLocationToJSON(void) const
  {
    JSONValueHandler handler_DropoffLocation;
    storeDropoffLocation->write_as_json(&handler_DropoffLocation);
    handler_DropoffLocation.result->add_reference();
    return handler_DropoffLocation.result;
  }

JSONValue *UberRequestsSpecJSON::extraPassengerCountToJSON(void) const
  {
    JSONIntegerValue *generated_integer_PassengerCount = new JSONIntegerValue(storePassengerCount.get_o_integer());
    return generated_integer_PassengerCount;
  }

JSONValue *UberRequestsSpecJSON::extraNewStatesToJSON(void) const
  {
    JSONArrayValue *generated_array_1_NewStates = new JSONArrayValue();
    for (size_t num1 = 0; num1 < storeNewStates.size(); ++num1)
      {
        JSONStringValue *generated_string_NewStates;
        switch (storeNewStates[num1])
          {
            case NewStates_select_pick_up_location:
                generated_string_NewStates = new JSONStringValue("select_pick_up_location");
                break;
            case NewStates_select_drop_off_location:
                generated_string_NewStates = new JSONStringValue("select_drop_off_location");
                break;
            case NewStates_select_uber_product:
                generated_string_NewStates = new JSONStringValue("select_uber_product");
                break;
            case NewStates_select_uber_product_id:
                generated_string_NewStates = new JSONStringValue("select_uber_product_id");
                break;
            default:
                assert(false);
                generated_string_NewStates = NULL;
          }
        generated_array_1_NewStates->appendComponent(generated_string_NewStates);
      }
    return generated_array_1_NewStates;
  }

void UberRequestsSpecJSON::fromJSONIsCancelled(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONTrueValue *json_true = json_value->true_value();
    bool the_bool;
    if (json_true != NULL)
      {
        the_bool = true;
      }
    else
      {
        const JSONFalseValue *json_false = json_value->false_value();
        if (json_false != NULL)
          {
            the_bool = false;
          }
        else
          {
            throw("The value for field IsCancelled of UberRequestsSpecJSON is not true for false.");
          }
      }
    setIsCancelled(the_bool);
  }

void UberRequestsSpecJSON::fromJSONIsConfirmed(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONTrueValue *json_true = json_value->true_value();
    bool the_bool;
    if (json_true != NULL)
      {
        the_bool = true;
      }
    else
      {
        const JSONFalseValue *json_false = json_value->false_value();
        if (json_false != NULL)
          {
            the_bool = false;
          }
        else
          {
            throw("The value for field IsConfirmed of UberRequestsSpecJSON is not true for false.");
          }
      }
    setIsConfirmed(the_bool);
  }

void UberRequestsSpecJSON::fromJSONIsNotUnderstood(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONTrueValue *json_true = json_value->true_value();
    bool the_bool;
    if (json_true != NULL)
      {
        the_bool = true;
      }
    else
      {
        const JSONFalseValue *json_false = json_value->false_value();
        if (json_false != NULL)
          {
            the_bool = false;
          }
        else
          {
            throw("The value for field IsNotUnderstood of UberRequestsSpecJSON is not true for false.");
          }
      }
    setIsNotUnderstood(the_bool);
  }

void UberRequestsSpecJSON::fromJSONIsRedirectOnConfirmation(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONTrueValue *json_true = json_value->true_value();
    bool the_bool;
    if (json_true != NULL)
      {
        the_bool = true;
      }
    else
      {
        const JSONFalseValue *json_false = json_value->false_value();
        if (json_false != NULL)
          {
            the_bool = false;
          }
        else
          {
            throw("The value for field IsRedirectOnConfirmation of UberRequestsSpecJSON is not true for false.");
          }
      }
    setIsRedirectOnConfirmation(the_bool);
  }

void UberRequestsSpecJSON::fromJSONIsSurgeConfirmed(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONTrueValue *json_true = json_value->true_value();
    bool the_bool;
    if (json_true != NULL)
      {
        the_bool = true;
      }
    else
      {
        const JSONFalseValue *json_false = json_value->false_value();
        if (json_false != NULL)
          {
            the_bool = false;
          }
        else
          {
            throw("The value for field IsSurgeConfirmed of UberRequestsSpecJSON is not true for false.");
          }
      }
    setIsSurgeConfirmed(the_bool);
  }

void UberRequestsSpecJSON::fromJSONSurgeConfirmationId(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field SurgeConfirmationId of UberRequestsSpecJSON is not a string.");
    setSurgeConfirmationId(std::string(json_string->getData()));
  }

void UberRequestsSpecJSON::fromJSONPreferredProduct(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field PreferredProduct of UberRequestsSpecJSON is not a string.");
    setPreferredProduct(std::string(json_string->getData()));
  }

void UberRequestsSpecJSON::fromJSONUberProductId(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field UberProductId of UberRequestsSpecJSON is not a string.");
    setUberProductId(std::string(json_string->getData()));
  }

void UberRequestsSpecJSON::fromJSONPickupLocation(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    MapLocationJSON *convert_classy = MapLocationJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setPickupLocation(convert_classy);
    convert_classy->remove_reference();
  }

void UberRequestsSpecJSON::fromJSONDropoffLocation(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    MapLocationJSON *convert_classy = MapLocationJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setDropoffLocation(convert_classy);
    convert_classy->remove_reference();
  }

void UberRequestsSpecJSON::fromJSONPassengerCount(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field PassengerCount of UberRequestsSpecJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field PassengerCount of UberRequestsSpecJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setPassengerCount(extracted_integer);
  }

void UberRequestsSpecJSON::fromJSONNewStates(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field NewStates of UberRequestsSpecJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< TypeNewStates > vector_NewStates1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        const JSONStringValue *json_string = json_array1->component(num1)->string_value();
        if (json_string == NULL)
            throw("The value for an element of field NewStates of UberRequestsSpecJSON is not a string.");
        TypeNewStates the_enum;
        if (strncmp(json_string->getData(), "select_", 7) == 0)
          {
            switch ((unsigned char)(json_string->getData()[7]))
              {
                case 'd':
                    if (strcmp(&(json_string->getData()[8]), "rop_off_location") == 0)
                          {
                            the_enum = NewStates_select_drop_off_location;
                            goto enum_is_done;
                          }
                    break;
                case 'p':
                    if (strcmp(&(json_string->getData()[8]), "ick_up_location") == 0)
                          {
                            the_enum = NewStates_select_pick_up_location;
                            goto enum_is_done;
                          }
                    break;
                case 'u':
                    if (strncmp(&(json_string->getData()[8]), "ber_product", 11) == 0)
                      {
                        switch ((unsigned char)(json_string->getData()[19]))
                          {
                            case 0:
                                  {
                                    the_enum = NewStates_select_uber_product;
                                    goto enum_is_done;
                                  }
                            case '_':
                                if (strcmp(&(json_string->getData()[20]), "id") == 0)
                                      {
                                        the_enum = NewStates_select_uber_product_id;
                                        goto enum_is_done;
                                      }
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                default:
                    break;
              }
          }
        throw("The value for an element of field NewStates of UberRequestsSpecJSON is not one of the legal strings.");
      enum_is_done:;
        vector_NewStates1[num1] = the_enum;
      }
    initNewStates();
    for (size_t num2 = 0; num2 < vector_NewStates1.size(); ++num2)
        appendNewStates(vector_NewStates1[num2]);
    for (size_t num1 = 0; num1 < vector_NewStates1.size(); ++num1)
      {
      }
  }

UberRequestsSpecJSON::UberRequestsSpecJSON(void) :
        flagHasIsCancelled(false),
        flagHasIsConfirmed(false),
        flagHasIsNotUnderstood(false),
        flagHasIsRedirectOnConfirmation(false),
        flagHasIsSurgeConfirmed(false),
        flagHasSurgeConfirmationId(false),
        flagHasPreferredProduct(false),
        flagHasUberProductId(false),
        flagHasPickupLocation(false),
        flagHasDropoffLocation(false),
        flagHasPassengerCount(false),
        flagHasNewStates(false)
  {
    extraIndex = create_string_index();
  }

UberRequestsSpecJSON::~UberRequestsSpecJSON(void)
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

const char *UberRequestsSpecJSON::getUberSpecKind(void) const
  {
    return "UberRequestsSpec";
  }

bool UberRequestsSpecJSON::hasIsCancelled(void) const
  {
    return flagHasIsCancelled;
  }

bool UberRequestsSpecJSON::getIsCancelled(void)
  {
    assert(flagHasIsCancelled);
    return storeIsCancelled;
  }

const bool UberRequestsSpecJSON::getIsCancelled(void) const
  {
    assert(flagHasIsCancelled);
    return storeIsCancelled;
  }

bool UberRequestsSpecJSON::hasIsConfirmed(void) const
  {
    return flagHasIsConfirmed;
  }

bool UberRequestsSpecJSON::getIsConfirmed(void)
  {
    assert(flagHasIsConfirmed);
    return storeIsConfirmed;
  }

const bool UberRequestsSpecJSON::getIsConfirmed(void) const
  {
    assert(flagHasIsConfirmed);
    return storeIsConfirmed;
  }

bool UberRequestsSpecJSON::hasIsNotUnderstood(void) const
  {
    return flagHasIsNotUnderstood;
  }

bool UberRequestsSpecJSON::getIsNotUnderstood(void)
  {
    assert(flagHasIsNotUnderstood);
    return storeIsNotUnderstood;
  }

const bool UberRequestsSpecJSON::getIsNotUnderstood(void) const
  {
    assert(flagHasIsNotUnderstood);
    return storeIsNotUnderstood;
  }

bool UberRequestsSpecJSON::hasIsRedirectOnConfirmation(void) const
  {
    return flagHasIsRedirectOnConfirmation;
  }

bool UberRequestsSpecJSON::getIsRedirectOnConfirmation(void)
  {
    assert(flagHasIsRedirectOnConfirmation);
    return storeIsRedirectOnConfirmation;
  }

const bool UberRequestsSpecJSON::getIsRedirectOnConfirmation(void) const
  {
    assert(flagHasIsRedirectOnConfirmation);
    return storeIsRedirectOnConfirmation;
  }

bool UberRequestsSpecJSON::hasIsSurgeConfirmed(void) const
  {
    return flagHasIsSurgeConfirmed;
  }

bool UberRequestsSpecJSON::getIsSurgeConfirmed(void)
  {
    assert(flagHasIsSurgeConfirmed);
    return storeIsSurgeConfirmed;
  }

const bool UberRequestsSpecJSON::getIsSurgeConfirmed(void) const
  {
    assert(flagHasIsSurgeConfirmed);
    return storeIsSurgeConfirmed;
  }

bool UberRequestsSpecJSON::hasSurgeConfirmationId(void) const
  {
    return flagHasSurgeConfirmationId;
  }

std::string UberRequestsSpecJSON::getSurgeConfirmationId(void)
  {
    assert(flagHasSurgeConfirmationId);
    return storeSurgeConfirmationId;
  }

const std::string UberRequestsSpecJSON::getSurgeConfirmationId(void) const
  {
    assert(flagHasSurgeConfirmationId);
    return storeSurgeConfirmationId;
  }

bool UberRequestsSpecJSON::hasPreferredProduct(void) const
  {
    return flagHasPreferredProduct;
  }

std::string UberRequestsSpecJSON::getPreferredProduct(void)
  {
    assert(flagHasPreferredProduct);
    return storePreferredProduct;
  }

const std::string UberRequestsSpecJSON::getPreferredProduct(void) const
  {
    assert(flagHasPreferredProduct);
    return storePreferredProduct;
  }

bool UberRequestsSpecJSON::hasUberProductId(void) const
  {
    return flagHasUberProductId;
  }

std::string UberRequestsSpecJSON::getUberProductId(void)
  {
    assert(flagHasUberProductId);
    return storeUberProductId;
  }

const std::string UberRequestsSpecJSON::getUberProductId(void) const
  {
    assert(flagHasUberProductId);
    return storeUberProductId;
  }

bool UberRequestsSpecJSON::hasPickupLocation(void) const
  {
    return flagHasPickupLocation;
  }

MapLocationJSON * UberRequestsSpecJSON::getPickupLocation(void)
  {
    assert(flagHasPickupLocation);
    return storePickupLocation;
  }

const MapLocationJSON * UberRequestsSpecJSON::getPickupLocation(void) const
  {
    assert(flagHasPickupLocation);
    return storePickupLocation;
  }

bool UberRequestsSpecJSON::hasDropoffLocation(void) const
  {
    return flagHasDropoffLocation;
  }

MapLocationJSON * UberRequestsSpecJSON::getDropoffLocation(void)
  {
    assert(flagHasDropoffLocation);
    return storeDropoffLocation;
  }

const MapLocationJSON * UberRequestsSpecJSON::getDropoffLocation(void) const
  {
    assert(flagHasDropoffLocation);
    return storeDropoffLocation;
  }

bool UberRequestsSpecJSON::hasPassengerCount(void) const
  {
    return flagHasPassengerCount;
  }

OInteger UberRequestsSpecJSON::getPassengerCount(void)
  {
    assert(flagHasPassengerCount);
    return storePassengerCount;
  }

const OInteger UberRequestsSpecJSON::getPassengerCount(void) const
  {
    assert(flagHasPassengerCount);
    return storePassengerCount;
  }

bool UberRequestsSpecJSON::hasNewStates(void) const
  {
    return flagHasNewStates;
  }

size_t UberRequestsSpecJSON::countOfNewStates(void) const
  {
    assert(flagHasNewStates);
    return storeNewStates.size();
  }

UberRequestsSpecJSON::TypeNewStates UberRequestsSpecJSON::elementOfNewStates(size_t element_num)
  {
    assert(flagHasNewStates);
    return storeNewStates[element_num];
  }

const UberRequestsSpecJSON::TypeNewStates UberRequestsSpecJSON::elementOfNewStates(size_t element_num) const
  {
    assert(flagHasNewStates);
    return storeNewStates[element_num];
  }

std::vector< UberRequestsSpecJSON::TypeNewStates > UberRequestsSpecJSON::getNewStates(void)
  {
    assert(flagHasNewStates);
    return storeNewStates;
  }

const std::vector< UberRequestsSpecJSON::TypeNewStates > UberRequestsSpecJSON::getNewStates(void) const
  {
    assert(flagHasNewStates);
    return storeNewStates;
  }

char UberRequestsSpecJSON::Generator::lowerBoundPassengerCount[] = "0";
UberRequestsSpecJSON *UberRequestsSpecJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    UberRequestsSpecJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<UberRequestsSpecJSON>, UberRequestsSpecJSON *, bool> generator("Type UberRequestsSpec", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
