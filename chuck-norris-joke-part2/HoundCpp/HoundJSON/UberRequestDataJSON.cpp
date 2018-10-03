/* file "UberRequestDataJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "UberRequestDataJSON.h"

#include "UberRequestDataJSON.h"


UberRequestDataJSON::UberRequestDataJSON(const UberRequestDataJSON &)
  {
    assert(false);
  }

UberRequestDataJSON &UberRequestDataJSON::operator=(const UberRequestDataJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void UberRequestDataJSON::fromJSONUberProductId(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field UberProductId of UberRequestDataJSON is not a string.");
    setUberProductId(std::string(json_string->getData()));
  }

void UberRequestDataJSON::fromJSONPickupLocation(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    MapLocationJSON *convert_classy = MapLocationJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setPickupLocation(convert_classy);
    convert_classy->remove_reference();
  }

void UberRequestDataJSON::fromJSONDropoffLocation(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    MapLocationJSON *convert_classy = MapLocationJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setDropoffLocation(convert_classy);
    convert_classy->remove_reference();
  }

void UberRequestDataJSON::fromJSONSurgeConfirmationId(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field SurgeConfirmationId of UberRequestDataJSON is not a string.");
    setSurgeConfirmationId(std::string(json_string->getData()));
  }

UberRequestDataJSON::UberRequestDataJSON(void) :
        flagHasUberProductId(false),
        flagHasPickupLocation(false),
        flagHasDropoffLocation(false),
        flagHasSurgeConfirmationId(false)
  {
    extraIndex = create_string_index();
  }

UberRequestDataJSON::~UberRequestDataJSON(void)
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

bool UberRequestDataJSON::hasUberProductId(void) const
  {
    return flagHasUberProductId;
  }

std::string UberRequestDataJSON::getUberProductId(void)
  {
    assert(flagHasUberProductId);
    return storeUberProductId;
  }

const std::string UberRequestDataJSON::getUberProductId(void) const
  {
    assert(flagHasUberProductId);
    return storeUberProductId;
  }

bool UberRequestDataJSON::hasPickupLocation(void) const
  {
    return flagHasPickupLocation;
  }

MapLocationJSON * UberRequestDataJSON::getPickupLocation(void)
  {
    assert(flagHasPickupLocation);
    return storePickupLocation;
  }

const MapLocationJSON * UberRequestDataJSON::getPickupLocation(void) const
  {
    assert(flagHasPickupLocation);
    return storePickupLocation;
  }

bool UberRequestDataJSON::hasDropoffLocation(void) const
  {
    return flagHasDropoffLocation;
  }

MapLocationJSON * UberRequestDataJSON::getDropoffLocation(void)
  {
    assert(flagHasDropoffLocation);
    return storeDropoffLocation;
  }

const MapLocationJSON * UberRequestDataJSON::getDropoffLocation(void) const
  {
    assert(flagHasDropoffLocation);
    return storeDropoffLocation;
  }

bool UberRequestDataJSON::hasSurgeConfirmationId(void) const
  {
    return flagHasSurgeConfirmationId;
  }

std::string UberRequestDataJSON::getSurgeConfirmationId(void)
  {
    assert(flagHasSurgeConfirmationId);
    return storeSurgeConfirmationId;
  }

const std::string UberRequestDataJSON::getSurgeConfirmationId(void) const
  {
    assert(flagHasSurgeConfirmationId);
    return storeSurgeConfirmationId;
  }

UberRequestDataJSON *UberRequestDataJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    UberRequestDataJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<UberRequestDataJSON>, UberRequestDataJSON *, bool> generator("Type UberRequestData", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
