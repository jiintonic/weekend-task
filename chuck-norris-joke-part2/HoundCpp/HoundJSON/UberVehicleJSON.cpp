/* file "UberVehicleJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "UberVehicleJSON.h"

#include "UberVehicleJSON.h"


UberVehicleJSON::UberVehicleJSON(const UberVehicleJSON &)
  {
    assert(false);
  }

UberVehicleJSON &UberVehicleJSON::operator=(const UberVehicleJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void UberVehicleJSON::fromJSONMake(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Make of UberVehicleJSON is not a string.");
    setMake(std::string(json_string->getData()));
  }

void UberVehicleJSON::fromJSONModel(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Model of UberVehicleJSON is not a string.");
    setModel(std::string(json_string->getData()));
  }

void UberVehicleJSON::fromJSONLicensePlate(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field LicensePlate of UberVehicleJSON is not a string.");
    setLicensePlate(std::string(json_string->getData()));
  }

void UberVehicleJSON::fromJSONPictureUrl(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field PictureUrl of UberVehicleJSON is not a string.");
    setPictureUrl(std::string(json_string->getData()));
  }

void UberVehicleJSON::fromJSONLatitude(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONRationalValue *json_rational = json_value->rational_value();
    std::string the_rational_text;
    if (json_rational != NULL)
      {
        the_rational_text = json_rational->getText();
      }
    else
      {
        const JSONIntegerValue *json_integer = json_value->integer_value();
        if (json_integer != NULL)
          {
            the_rational_text = json_integer->getText();
          }
        else
          {
            throw("The value for field Latitude of UberVehicleJSON is not a number.");
          }
      }
    setLatitudeText(the_rational_text);
  }

void UberVehicleJSON::fromJSONLongitude(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONRationalValue *json_rational = json_value->rational_value();
    std::string the_rational_text;
    if (json_rational != NULL)
      {
        the_rational_text = json_rational->getText();
      }
    else
      {
        const JSONIntegerValue *json_integer = json_value->integer_value();
        if (json_integer != NULL)
          {
            the_rational_text = json_integer->getText();
          }
        else
          {
            throw("The value for field Longitude of UberVehicleJSON is not a number.");
          }
      }
    setLongitudeText(the_rational_text);
  }

void UberVehicleJSON::fromJSONBearing(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field Bearing of UberVehicleJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field Bearing of UberVehicleJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setBearing(extracted_integer);
  }

void UberVehicleJSON::fromJSONDriver(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    UberDriverJSON *convert_classy = UberDriverJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setDriver(convert_classy);
    convert_classy->remove_reference();
  }

UberVehicleJSON::UberVehicleJSON(void) :
        flagHasMake(false),
        flagHasModel(false),
        flagHasLicensePlate(false),
        flagHasPictureUrl(false),
        flagHasLatitude(false),
        flagHasLongitude(false),
        flagHasBearing(false),
        flagHasDriver(false)
  {
    extraIndex = create_string_index();
  }

UberVehicleJSON::~UberVehicleJSON(void)
  {
    if (flagHasDriver)
      {
        storeDriver->remove_reference();
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool UberVehicleJSON::hasMake(void) const
  {
    return flagHasMake;
  }

std::string UberVehicleJSON::getMake(void)
  {
    assert(flagHasMake);
    return storeMake;
  }

const std::string UberVehicleJSON::getMake(void) const
  {
    assert(flagHasMake);
    return storeMake;
  }

bool UberVehicleJSON::hasModel(void) const
  {
    return flagHasModel;
  }

std::string UberVehicleJSON::getModel(void)
  {
    assert(flagHasModel);
    return storeModel;
  }

const std::string UberVehicleJSON::getModel(void) const
  {
    assert(flagHasModel);
    return storeModel;
  }

bool UberVehicleJSON::hasLicensePlate(void) const
  {
    return flagHasLicensePlate;
  }

std::string UberVehicleJSON::getLicensePlate(void)
  {
    assert(flagHasLicensePlate);
    return storeLicensePlate;
  }

const std::string UberVehicleJSON::getLicensePlate(void) const
  {
    assert(flagHasLicensePlate);
    return storeLicensePlate;
  }

bool UberVehicleJSON::hasPictureUrl(void) const
  {
    return flagHasPictureUrl;
  }

std::string UberVehicleJSON::getPictureUrl(void)
  {
    assert(flagHasPictureUrl);
    return storePictureUrl;
  }

const std::string UberVehicleJSON::getPictureUrl(void) const
  {
    assert(flagHasPictureUrl);
    return storePictureUrl;
  }

bool UberVehicleJSON::hasLatitude(void) const
  {
    return flagHasLatitude;
  }

double UberVehicleJSON::getLatitude(void)
  {
    assert(flagHasLatitude);
    if (textStoreLatitude != "")
      {
        return atof(textStoreLatitude.c_str());
      }
    return storeLatitude;
  }

const double UberVehicleJSON::getLatitude(void) const
  {
    assert(flagHasLatitude);
    if (textStoreLatitude != "")
      {
        return atof(textStoreLatitude.c_str());
      }
    return storeLatitude;
  }

std::string UberVehicleJSON::getLatitudeAsText(void) const
  {
    assert(flagHasLatitude);
    if (textStoreLatitude == "")
      {
        char buffer[100];
        sprintf(&(buffer[0]), "%g", storeLatitude);
        return &(buffer[0]);
      }
    else
      {
        return (textStoreLatitude);
      }
  }

bool UberVehicleJSON::hasLongitude(void) const
  {
    return flagHasLongitude;
  }

double UberVehicleJSON::getLongitude(void)
  {
    assert(flagHasLongitude);
    if (textStoreLongitude != "")
      {
        return atof(textStoreLongitude.c_str());
      }
    return storeLongitude;
  }

const double UberVehicleJSON::getLongitude(void) const
  {
    assert(flagHasLongitude);
    if (textStoreLongitude != "")
      {
        return atof(textStoreLongitude.c_str());
      }
    return storeLongitude;
  }

std::string UberVehicleJSON::getLongitudeAsText(void) const
  {
    assert(flagHasLongitude);
    if (textStoreLongitude == "")
      {
        char buffer[100];
        sprintf(&(buffer[0]), "%g", storeLongitude);
        return &(buffer[0]);
      }
    else
      {
        return (textStoreLongitude);
      }
  }

bool UberVehicleJSON::hasBearing(void) const
  {
    return flagHasBearing;
  }

OInteger UberVehicleJSON::getBearing(void)
  {
    assert(flagHasBearing);
    return storeBearing;
  }

const OInteger UberVehicleJSON::getBearing(void) const
  {
    assert(flagHasBearing);
    return storeBearing;
  }

bool UberVehicleJSON::hasDriver(void) const
  {
    return flagHasDriver;
  }

UberDriverJSON * UberVehicleJSON::getDriver(void)
  {
    assert(flagHasDriver);
    return storeDriver;
  }

const UberDriverJSON * UberVehicleJSON::getDriver(void) const
  {
    assert(flagHasDriver);
    return storeDriver;
  }

UberVehicleJSON *UberVehicleJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    UberVehicleJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<UberVehicleJSON>, UberVehicleJSON *, bool> generator("Type UberVehicle", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
