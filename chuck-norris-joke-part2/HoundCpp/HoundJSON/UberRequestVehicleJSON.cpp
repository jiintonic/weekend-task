/* file "UberRequestVehicleJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "UberRequestVehicleJSON.h"

#include "UberRequestVehicleJSON.h"


UberRequestVehicleJSON::UberRequestVehicleJSON(const UberRequestVehicleJSON &)
  {
    assert(false);
  }

UberRequestVehicleJSON &UberRequestVehicleJSON::operator=(const UberRequestVehicleJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void UberRequestVehicleJSON::fromJSONmake(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field make of UberRequestVehicleJSON is not a string.");
    setmake(std::string(json_string->getData()));
  }

void UberRequestVehicleJSON::fromJSONmodel(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field model of UberRequestVehicleJSON is not a string.");
    setmodel(std::string(json_string->getData()));
  }

void UberRequestVehicleJSON::fromJSONlicense_plate(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field license_plate of UberRequestVehicleJSON is not a string.");
    setlicense_plate(std::string(json_string->getData()));
  }

void UberRequestVehicleJSON::fromJSONpicture_url(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    Typepicture_url or_result;
    bool or_done = false;
    if (!or_done)
      {
        try
          {
            const JSONStringValue *json_string = json_value->string_value();
            if (json_string == NULL)
                throw("The value for ??? is not a string.");
            or_result.choice0 = std::string(json_string->getData());
            or_result.key = 0;
            or_done = true;
          }
        catch (char *e1)
          {
            free(e1);
          }
        catch (const char *e1)
          {
          }
      }
    if (!or_done)
      {
        try
          {
            or_result.key = 1;
            or_done = true;
          }
        catch (char *e1)
          {
            free(e1);
          }
        catch (const char *e1)
          {
          }
      }
    if (!or_done)
        throw("The value for field picture_url of UberRequestVehicleJSON is not one of the allowed values.");
    setpicture_url(or_result);
    switch (or_result.key)
      {
        case 0:
            break;
        case 1:
            break;
        default:
            assert(false);
      }
  }

UberRequestVehicleJSON::UberRequestVehicleJSON(void) :
        flagHasmake(false),
        flagHasmodel(false),
        flagHaslicense_plate(false),
        flagHaspicture_url(false)
  {
    extraIndex = create_string_index();
  }

UberRequestVehicleJSON::~UberRequestVehicleJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool UberRequestVehicleJSON::hasmake(void) const
  {
    return flagHasmake;
  }

std::string UberRequestVehicleJSON::getmake(void)
  {
    assert(flagHasmake);
    return storemake;
  }

const std::string UberRequestVehicleJSON::getmake(void) const
  {
    assert(flagHasmake);
    return storemake;
  }

bool UberRequestVehicleJSON::hasmodel(void) const
  {
    return flagHasmodel;
  }

std::string UberRequestVehicleJSON::getmodel(void)
  {
    assert(flagHasmodel);
    return storemodel;
  }

const std::string UberRequestVehicleJSON::getmodel(void) const
  {
    assert(flagHasmodel);
    return storemodel;
  }

bool UberRequestVehicleJSON::haslicense_plate(void) const
  {
    return flagHaslicense_plate;
  }

std::string UberRequestVehicleJSON::getlicense_plate(void)
  {
    assert(flagHaslicense_plate);
    return storelicense_plate;
  }

const std::string UberRequestVehicleJSON::getlicense_plate(void) const
  {
    assert(flagHaslicense_plate);
    return storelicense_plate;
  }

bool UberRequestVehicleJSON::haspicture_url(void) const
  {
    return flagHaspicture_url;
  }

UberRequestVehicleJSON::Typepicture_url UberRequestVehicleJSON::getpicture_url(void)
  {
    assert(flagHaspicture_url);
    return storepicture_url;
  }

const UberRequestVehicleJSON::Typepicture_url UberRequestVehicleJSON::getpicture_url(void) const
  {
    assert(flagHaspicture_url);
    return storepicture_url;
  }

UberRequestVehicleJSON *UberRequestVehicleJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    UberRequestVehicleJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<UberRequestVehicleJSON>, UberRequestVehicleJSON *, bool> generator("Type UberRequestVehicle", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
