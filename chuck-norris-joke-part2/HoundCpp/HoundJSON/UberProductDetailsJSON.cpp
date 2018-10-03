/* file "UberProductDetailsJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "UberProductDetailsJSON.h"

#include "UberProductDetailsJSON.h"


UberProductDetailsJSON::UberProductDetailsJSON(const UberProductDetailsJSON &)
  {
    assert(false);
  }

UberProductDetailsJSON &UberProductDetailsJSON::operator=(const UberProductDetailsJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void UberProductDetailsJSON::fromJSONproduct_id(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field product_id of UberProductDetailsJSON is not a string.");
    setproduct_id(std::string(json_string->getData()));
  }

void UberProductDetailsJSON::fromJSONdescription(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field description of UberProductDetailsJSON is not a string.");
    setdescription(std::string(json_string->getData()));
  }

void UberProductDetailsJSON::fromJSONdisplay_name(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field display_name of UberProductDetailsJSON is not a string.");
    setdisplay_name(std::string(json_string->getData()));
  }

void UberProductDetailsJSON::fromJSONcapacity(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field capacity of UberProductDetailsJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field capacity of UberProductDetailsJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setcapacity(extracted_integer);
  }

void UberProductDetailsJSON::fromJSONprice_details(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    Typeprice_details or_result;
    bool or_done = false;
    if (!or_done)
      {
        try
          {
            UberPriceDetailsJSON *convert_classy = UberPriceDetailsJSON::from_json(json_value, ignore_extras);
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
        throw("The value for field price_details of UberProductDetailsJSON is not one of the allowed values.");
    setprice_details(or_result);
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

void UberProductDetailsJSON::fromJSONimage(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field image of UberProductDetailsJSON is not a string.");
    setimage(std::string(json_string->getData()));
  }

void UberProductDetailsJSON::fromJSONshared(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field shared of UberProductDetailsJSON is not true for false.");
          }
      }
    setshared(the_bool);
  }

UberProductDetailsJSON::UberProductDetailsJSON(void) :
        flagHasproduct_id(false),
        flagHasdescription(false),
        flagHasdisplay_name(false),
        flagHascapacity(false),
        flagHasprice_details(false),
        flagHasimage(false),
        flagHasshared(false)
  {
    extraIndex = create_string_index();
  }

UberProductDetailsJSON::~UberProductDetailsJSON(void)
  {
    if (flagHasprice_details)
      {
        switch (storeprice_details.key)
          {
            case 0:
                storeprice_details.u.choice0->remove_reference();
                break;
            case 1:
                break;
            default:
                assert(false);
          }
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool UberProductDetailsJSON::hasproduct_id(void) const
  {
    return flagHasproduct_id;
  }

std::string UberProductDetailsJSON::getproduct_id(void)
  {
    assert(flagHasproduct_id);
    return storeproduct_id;
  }

const std::string UberProductDetailsJSON::getproduct_id(void) const
  {
    assert(flagHasproduct_id);
    return storeproduct_id;
  }

bool UberProductDetailsJSON::hasdescription(void) const
  {
    return flagHasdescription;
  }

std::string UberProductDetailsJSON::getdescription(void)
  {
    assert(flagHasdescription);
    return storedescription;
  }

const std::string UberProductDetailsJSON::getdescription(void) const
  {
    assert(flagHasdescription);
    return storedescription;
  }

bool UberProductDetailsJSON::hasdisplay_name(void) const
  {
    return flagHasdisplay_name;
  }

std::string UberProductDetailsJSON::getdisplay_name(void)
  {
    assert(flagHasdisplay_name);
    return storedisplay_name;
  }

const std::string UberProductDetailsJSON::getdisplay_name(void) const
  {
    assert(flagHasdisplay_name);
    return storedisplay_name;
  }

bool UberProductDetailsJSON::hascapacity(void) const
  {
    return flagHascapacity;
  }

OInteger UberProductDetailsJSON::getcapacity(void)
  {
    assert(flagHascapacity);
    return storecapacity;
  }

const OInteger UberProductDetailsJSON::getcapacity(void) const
  {
    assert(flagHascapacity);
    return storecapacity;
  }

bool UberProductDetailsJSON::hasprice_details(void) const
  {
    return flagHasprice_details;
  }

UberProductDetailsJSON::Typeprice_details UberProductDetailsJSON::getprice_details(void)
  {
    assert(flagHasprice_details);
    return storeprice_details;
  }

const UberProductDetailsJSON::Typeprice_details UberProductDetailsJSON::getprice_details(void) const
  {
    assert(flagHasprice_details);
    return storeprice_details;
  }

bool UberProductDetailsJSON::hasimage(void) const
  {
    return flagHasimage;
  }

std::string UberProductDetailsJSON::getimage(void)
  {
    assert(flagHasimage);
    return storeimage;
  }

const std::string UberProductDetailsJSON::getimage(void) const
  {
    assert(flagHasimage);
    return storeimage;
  }

bool UberProductDetailsJSON::hasshared(void) const
  {
    return flagHasshared;
  }

bool UberProductDetailsJSON::getshared(void)
  {
    assert(flagHasshared);
    return storeshared;
  }

const bool UberProductDetailsJSON::getshared(void) const
  {
    assert(flagHasshared);
    return storeshared;
  }

char UberProductDetailsJSON::Generator::lowerBoundcapacity[] = "0";
UberProductDetailsJSON *UberProductDetailsJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    UberProductDetailsJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<UberProductDetailsJSON>, UberProductDetailsJSON *, bool> generator("Type UberProductDetails", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
