/* file "UberRequestDetailsResponseJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "UberRequestDetailsResponseJSON.h"

#include "UberRequestDetailsResponseJSON.h"


UberRequestDetailsResponseJSON::UberRequestDetailsResponseJSON(const UberRequestDetailsResponseJSON &)
  {
    assert(false);
  }

UberRequestDetailsResponseJSON &UberRequestDetailsResponseJSON::operator=(const UberRequestDetailsResponseJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void UberRequestDetailsResponseJSON::fromJSONrequest_id(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field request_id of UberRequestDetailsResponseJSON is not a string.");
    setrequest_id(std::string(json_string->getData()));
  }

void UberRequestDetailsResponseJSON::fromJSONstatus(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field status of UberRequestDetailsResponseJSON is not a string.");
    setstatus(std::string(json_string->getData()));
  }

void UberRequestDetailsResponseJSON::fromJSONvehicle(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    Typevehicle or_result;
    bool or_done = false;
    if (!or_done)
      {
        try
          {
            UberRequestVehicleJSON *convert_classy = UberRequestVehicleJSON::from_json(json_value, ignore_extras);
            convert_classy->add_reference();
            or_result.u.choice0 = convert_classy;
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
        throw("The value for field vehicle of UberRequestDetailsResponseJSON is not one of the allowed values.");
    setvehicle(or_result);
    switch (or_result.key)
      {
        case 0:
            or_result.u.choice0->remove_reference();
            break;
        case 1:
            break;
        default:
            assert(false);
      }
  }

void UberRequestDetailsResponseJSON::fromJSONdriver(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    Typedriver or_result;
    bool or_done = false;
    if (!or_done)
      {
        try
          {
            UberRequestDriverJSON *convert_classy = UberRequestDriverJSON::from_json(json_value, ignore_extras);
            convert_classy->add_reference();
            or_result.u.choice0 = convert_classy;
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
        throw("The value for field driver of UberRequestDetailsResponseJSON is not one of the allowed values.");
    setdriver(or_result);
    switch (or_result.key)
      {
        case 0:
            or_result.u.choice0->remove_reference();
            break;
        case 1:
            break;
        default:
            assert(false);
      }
  }

void UberRequestDetailsResponseJSON::fromJSONlocation(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    Typelocation or_result;
    bool or_done = false;
    if (!or_done)
      {
        try
          {
            UberRequestLocationJSON *convert_classy = UberRequestLocationJSON::from_json(json_value, ignore_extras);
            convert_classy->add_reference();
            or_result.u.choice0 = convert_classy;
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
        throw("The value for field location of UberRequestDetailsResponseJSON is not one of the allowed values.");
    setlocation(or_result);
    switch (or_result.key)
      {
        case 0:
            or_result.u.choice0->remove_reference();
            break;
        case 1:
            break;
        default:
            assert(false);
      }
  }

void UberRequestDetailsResponseJSON::fromJSONsurge_multiplier(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    Typesurge_multiplier or_result;
    bool or_done = false;
    if (!or_done)
      {
        try
          {
            const JSONRationalValue *json_rational = json_value->rational_value();
            double the_double;
            if (json_rational != NULL)
              {
                the_double = json_rational->getDouble();
              }
            else
              {
                const JSONIntegerValue *json_integer = json_value->integer_value();
                if (json_integer != NULL)
                  {
                    the_double = json_integer->getLongInt();
                  }
                else
                  {
                    throw("The value for ??? is not a number.");
                  }
              }
            or_result.u.choice0 = the_double;
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
        throw("The value for field surge_multiplier of UberRequestDetailsResponseJSON is not one of the allowed values.");
    setsurge_multiplier(or_result);
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

void UberRequestDetailsResponseJSON::fromJSONpickup(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    UberRequestEndpointJSON *convert_classy = UberRequestEndpointJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setpickup(convert_classy);
    convert_classy->remove_reference();
  }

void UberRequestDetailsResponseJSON::fromJSONdestination(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    UberRequestEndpointJSON *convert_classy = UberRequestEndpointJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setdestination(convert_classy);
    convert_classy->remove_reference();
  }

UberRequestDetailsResponseJSON::UberRequestDetailsResponseJSON(void) :
        flagHasrequest_id(false),
        flagHasstatus(false),
        flagHasvehicle(false),
        flagHasdriver(false),
        flagHaslocation(false),
        flagHassurge_multiplier(false),
        flagHaspickup(false),
        flagHasdestination(false)
  {
    extraIndex = create_string_index();
  }

UberRequestDetailsResponseJSON::~UberRequestDetailsResponseJSON(void)
  {
    if (flagHasvehicle)
      {
        switch (storevehicle.key)
          {
            case 0:
                storevehicle.u.choice0->remove_reference();
                break;
            case 1:
                break;
            default:
                assert(false);
          }
      }
    if (flagHasdriver)
      {
        switch (storedriver.key)
          {
            case 0:
                storedriver.u.choice0->remove_reference();
                break;
            case 1:
                break;
            default:
                assert(false);
          }
      }
    if (flagHaslocation)
      {
        switch (storelocation.key)
          {
            case 0:
                storelocation.u.choice0->remove_reference();
                break;
            case 1:
                break;
            default:
                assert(false);
          }
      }
    if (flagHaspickup)
      {
        storepickup->remove_reference();
      }
    if (flagHasdestination)
      {
        storedestination->remove_reference();
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool UberRequestDetailsResponseJSON::hasrequest_id(void) const
  {
    return flagHasrequest_id;
  }

std::string UberRequestDetailsResponseJSON::getrequest_id(void)
  {
    assert(flagHasrequest_id);
    return storerequest_id;
  }

const std::string UberRequestDetailsResponseJSON::getrequest_id(void) const
  {
    assert(flagHasrequest_id);
    return storerequest_id;
  }

bool UberRequestDetailsResponseJSON::hasstatus(void) const
  {
    return flagHasstatus;
  }

std::string UberRequestDetailsResponseJSON::getstatus(void)
  {
    assert(flagHasstatus);
    return storestatus;
  }

const std::string UberRequestDetailsResponseJSON::getstatus(void) const
  {
    assert(flagHasstatus);
    return storestatus;
  }

bool UberRequestDetailsResponseJSON::hasvehicle(void) const
  {
    return flagHasvehicle;
  }

UberRequestDetailsResponseJSON::Typevehicle UberRequestDetailsResponseJSON::getvehicle(void)
  {
    assert(flagHasvehicle);
    return storevehicle;
  }

const UberRequestDetailsResponseJSON::Typevehicle UberRequestDetailsResponseJSON::getvehicle(void) const
  {
    assert(flagHasvehicle);
    return storevehicle;
  }

bool UberRequestDetailsResponseJSON::hasdriver(void) const
  {
    return flagHasdriver;
  }

UberRequestDetailsResponseJSON::Typedriver UberRequestDetailsResponseJSON::getdriver(void)
  {
    assert(flagHasdriver);
    return storedriver;
  }

const UberRequestDetailsResponseJSON::Typedriver UberRequestDetailsResponseJSON::getdriver(void) const
  {
    assert(flagHasdriver);
    return storedriver;
  }

bool UberRequestDetailsResponseJSON::haslocation(void) const
  {
    return flagHaslocation;
  }

UberRequestDetailsResponseJSON::Typelocation UberRequestDetailsResponseJSON::getlocation(void)
  {
    assert(flagHaslocation);
    return storelocation;
  }

const UberRequestDetailsResponseJSON::Typelocation UberRequestDetailsResponseJSON::getlocation(void) const
  {
    assert(flagHaslocation);
    return storelocation;
  }

bool UberRequestDetailsResponseJSON::hassurge_multiplier(void) const
  {
    return flagHassurge_multiplier;
  }

UberRequestDetailsResponseJSON::Typesurge_multiplier UberRequestDetailsResponseJSON::getsurge_multiplier(void)
  {
    assert(flagHassurge_multiplier);
    return storesurge_multiplier;
  }

const UberRequestDetailsResponseJSON::Typesurge_multiplier UberRequestDetailsResponseJSON::getsurge_multiplier(void) const
  {
    assert(flagHassurge_multiplier);
    return storesurge_multiplier;
  }

bool UberRequestDetailsResponseJSON::haspickup(void) const
  {
    return flagHaspickup;
  }

UberRequestEndpointJSON * UberRequestDetailsResponseJSON::getpickup(void)
  {
    assert(flagHaspickup);
    return storepickup;
  }

const UberRequestEndpointJSON * UberRequestDetailsResponseJSON::getpickup(void) const
  {
    assert(flagHaspickup);
    return storepickup;
  }

bool UberRequestDetailsResponseJSON::hasdestination(void) const
  {
    return flagHasdestination;
  }

UberRequestEndpointJSON * UberRequestDetailsResponseJSON::getdestination(void)
  {
    assert(flagHasdestination);
    return storedestination;
  }

const UberRequestEndpointJSON * UberRequestDetailsResponseJSON::getdestination(void) const
  {
    assert(flagHasdestination);
    return storedestination;
  }

UberRequestDetailsResponseJSON *UberRequestDetailsResponseJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    UberRequestDetailsResponseJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<UberRequestDetailsResponseJSON>, UberRequestDetailsResponseJSON *, bool> generator("Type UberRequestDetailsResponse", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
