/* file "HotelJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "HotelJSON.h"

#include "HotelJSON.h"


HotelJSON::TypeDistanceFromReferenceUnit HotelJSON::stringToDistanceFromReferenceUnit(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'k':
            if (strcmp(&(chars[1]), "m") == 0)
                return DistanceFromReferenceUnit_km;
            break;
        case 'm':
            if (strcmp(&(chars[1]), "i") == 0)
                return DistanceFromReferenceUnit_mi;
            break;
        default:
            break;
      }
    throw("The value for field `DistanceFromReferenceUnit' is not one of the legal values.");
  }

const char *HotelJSON::stringFromDistanceFromReferenceUnit(TypeDistanceFromReferenceUnit the_enum)
  {
    switch (the_enum)
      {
        case DistanceFromReferenceUnit_km:
            return "km";
        case DistanceFromReferenceUnit_mi:
            return "mi";
        default:
            assert(false);
            return NULL;
      }
  }

HotelJSON::TypeHotelLocationJSON::TypeHotelLocationJSON(const TypeHotelLocationJSON &)
  {
    assert(false);
  }

HotelJSON::TypeHotelLocationJSON &HotelJSON::TypeHotelLocationJSON::operator=(const TypeHotelLocationJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void HotelJSON::TypeHotelLocationJSON::fromJSONStreetAddress(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field StreetAddress of TypeHotelLocationJSON is not a string.");
    setStreetAddress(std::string(json_string->getData()));
  }

void HotelJSON::TypeHotelLocationJSON::fromJSONCity(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field City of TypeHotelLocationJSON is not a string.");
    setCity(std::string(json_string->getData()));
  }

void HotelJSON::TypeHotelLocationJSON::fromJSONProvince(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Province of TypeHotelLocationJSON is not a string.");
    setProvince(std::string(json_string->getData()));
  }

void HotelJSON::TypeHotelLocationJSON::fromJSONCountry(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Country of TypeHotelLocationJSON is not a string.");
    setCountry(std::string(json_string->getData()));
  }

void HotelJSON::TypeHotelLocationJSON::fromJSONLatitude(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field Latitude of TypeHotelLocationJSON is not a number.");
          }
      }
    setLatitudeText(the_rational_text);
  }

void HotelJSON::TypeHotelLocationJSON::fromJSONLongitude(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field Longitude of TypeHotelLocationJSON is not a number.");
          }
      }
    setLongitudeText(the_rational_text);
  }

HotelJSON::TypeHotelLocationJSON::TypeHotelLocationJSON(void) :
        flagHasStreetAddress(false),
        flagHasCity(false),
        flagHasProvince(false),
        flagHasCountry(false),
        flagHasLatitude(false),
        flagHasLongitude(false)
  {
  }

HotelJSON::TypeHotelLocationJSON::~TypeHotelLocationJSON(void)
  {
  }

bool HotelJSON::TypeHotelLocationJSON::hasStreetAddress(void) const
  {
    return flagHasStreetAddress;
  }

std::string HotelJSON::TypeHotelLocationJSON::getStreetAddress(void)
  {
    assert(flagHasStreetAddress);
    return storeStreetAddress;
  }

const std::string HotelJSON::TypeHotelLocationJSON::getStreetAddress(void) const
  {
    assert(flagHasStreetAddress);
    return storeStreetAddress;
  }

bool HotelJSON::TypeHotelLocationJSON::hasCity(void) const
  {
    return flagHasCity;
  }

std::string HotelJSON::TypeHotelLocationJSON::getCity(void)
  {
    assert(flagHasCity);
    return storeCity;
  }

const std::string HotelJSON::TypeHotelLocationJSON::getCity(void) const
  {
    assert(flagHasCity);
    return storeCity;
  }

bool HotelJSON::TypeHotelLocationJSON::hasProvince(void) const
  {
    return flagHasProvince;
  }

std::string HotelJSON::TypeHotelLocationJSON::getProvince(void)
  {
    assert(flagHasProvince);
    return storeProvince;
  }

const std::string HotelJSON::TypeHotelLocationJSON::getProvince(void) const
  {
    assert(flagHasProvince);
    return storeProvince;
  }

bool HotelJSON::TypeHotelLocationJSON::hasCountry(void) const
  {
    return flagHasCountry;
  }

std::string HotelJSON::TypeHotelLocationJSON::getCountry(void)
  {
    assert(flagHasCountry);
    return storeCountry;
  }

const std::string HotelJSON::TypeHotelLocationJSON::getCountry(void) const
  {
    assert(flagHasCountry);
    return storeCountry;
  }

bool HotelJSON::TypeHotelLocationJSON::hasLatitude(void) const
  {
    return flagHasLatitude;
  }

double HotelJSON::TypeHotelLocationJSON::getLatitude(void)
  {
    assert(flagHasLatitude);
    if (textStoreLatitude != "")
      {
        return atof(textStoreLatitude.c_str());
      }
    return storeLatitude;
  }

const double HotelJSON::TypeHotelLocationJSON::getLatitude(void) const
  {
    assert(flagHasLatitude);
    if (textStoreLatitude != "")
      {
        return atof(textStoreLatitude.c_str());
      }
    return storeLatitude;
  }

std::string HotelJSON::TypeHotelLocationJSON::getLatitudeAsText(void) const
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

bool HotelJSON::TypeHotelLocationJSON::hasLongitude(void) const
  {
    return flagHasLongitude;
  }

double HotelJSON::TypeHotelLocationJSON::getLongitude(void)
  {
    assert(flagHasLongitude);
    if (textStoreLongitude != "")
      {
        return atof(textStoreLongitude.c_str());
      }
    return storeLongitude;
  }

const double HotelJSON::TypeHotelLocationJSON::getLongitude(void) const
  {
    assert(flagHasLongitude);
    if (textStoreLongitude != "")
      {
        return atof(textStoreLongitude.c_str());
      }
    return storeLongitude;
  }

std::string HotelJSON::TypeHotelLocationJSON::getLongitudeAsText(void) const
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

HotelJSON::TypeHotelFeaturedOfferJSON::TypeHotelFeaturedOfferJSON(const TypeHotelFeaturedOfferJSON &)
  {
    assert(false);
  }

HotelJSON::TypeHotelFeaturedOfferJSON &HotelJSON::TypeHotelFeaturedOfferJSON::operator=(const TypeHotelFeaturedOfferJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void HotelJSON::TypeHotelFeaturedOfferJSON::fromJSONPricing(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    HotelPricingJSON *convert_classy = HotelPricingJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setPricing(convert_classy);
    convert_classy->remove_reference();
  }

void HotelJSON::TypeHotelFeaturedOfferJSON::fromJSONCheckInDate(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DateAndOrTimeJSON *convert_classy = DateAndOrTimeJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setCheckInDate(convert_classy);
    convert_classy->remove_reference();
  }

void HotelJSON::TypeHotelFeaturedOfferJSON::fromJSONLengthOfStay(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field LengthOfStay of TypeHotelFeaturedOfferJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field LengthOfStay of TypeHotelFeaturedOfferJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setLengthOfStay(extracted_integer);
  }

void HotelJSON::TypeHotelFeaturedOfferJSON::fromJSONDetailsUrl(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field DetailsUrl of TypeHotelFeaturedOfferJSON is not a string.");
    setDetailsUrl(std::string(json_string->getData()));
  }

HotelJSON::TypeHotelFeaturedOfferJSON::TypeHotelFeaturedOfferJSON(void) :
        flagHasPricing(false),
        flagHasCheckInDate(false),
        flagHasLengthOfStay(false),
        flagHasDetailsUrl(false)
  {
  }

HotelJSON::TypeHotelFeaturedOfferJSON::~TypeHotelFeaturedOfferJSON(void)
  {
    if (flagHasPricing)
      {
        storePricing->remove_reference();
      }
    if (flagHasCheckInDate)
      {
        storeCheckInDate->remove_reference();
      }
  }

bool HotelJSON::TypeHotelFeaturedOfferJSON::hasPricing(void) const
  {
    return flagHasPricing;
  }

HotelPricingJSON * HotelJSON::TypeHotelFeaturedOfferJSON::getPricing(void)
  {
    assert(flagHasPricing);
    return storePricing;
  }

const HotelPricingJSON * HotelJSON::TypeHotelFeaturedOfferJSON::getPricing(void) const
  {
    assert(flagHasPricing);
    return storePricing;
  }

bool HotelJSON::TypeHotelFeaturedOfferJSON::hasCheckInDate(void) const
  {
    return flagHasCheckInDate;
  }

DateAndOrTimeJSON * HotelJSON::TypeHotelFeaturedOfferJSON::getCheckInDate(void)
  {
    assert(flagHasCheckInDate);
    return storeCheckInDate;
  }

const DateAndOrTimeJSON * HotelJSON::TypeHotelFeaturedOfferJSON::getCheckInDate(void) const
  {
    assert(flagHasCheckInDate);
    return storeCheckInDate;
  }

bool HotelJSON::TypeHotelFeaturedOfferJSON::hasLengthOfStay(void) const
  {
    return flagHasLengthOfStay;
  }

OInteger HotelJSON::TypeHotelFeaturedOfferJSON::getLengthOfStay(void)
  {
    assert(flagHasLengthOfStay);
    return storeLengthOfStay;
  }

const OInteger HotelJSON::TypeHotelFeaturedOfferJSON::getLengthOfStay(void) const
  {
    assert(flagHasLengthOfStay);
    return storeLengthOfStay;
  }

bool HotelJSON::TypeHotelFeaturedOfferJSON::hasDetailsUrl(void) const
  {
    return flagHasDetailsUrl;
  }

std::string HotelJSON::TypeHotelFeaturedOfferJSON::getDetailsUrl(void)
  {
    assert(flagHasDetailsUrl);
    return storeDetailsUrl;
  }

const std::string HotelJSON::TypeHotelFeaturedOfferJSON::getDetailsUrl(void) const
  {
    assert(flagHasDetailsUrl);
    return storeDetailsUrl;
  }

HotelJSON::TypeHotelStatusCode HotelJSON::stringToHotelStatusCode(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'A':
            if (strcmp(&(chars[1]), "vailable") == 0)
                return HotelStatusCode_Available;
            break;
        case 'E':
            if (strcmp(&(chars[1]), "rror") == 0)
                return HotelStatusCode_Error;
            break;
        case 'N':
            if (strncmp(&(chars[1]), "o", 1) == 0)
              {
                switch ((unsigned char)(chars[2]))
                  {
                    case ' ':
                        if (strcmp(&(chars[3]), "available rate plan") == 0)
                            return HotelStatusCode_No_x20_available_x20_rate_x20_plan;
                        break;
                    case 't':
                        if (strcmp(&(chars[3]), " available") == 0)
                            return HotelStatusCode_Not_x20_available;
                        break;
                    default:
                        break;
                  }
              }
            break;
        default:
            break;
      }
    throw("The value for field `HotelStatusCode' is not one of the legal values.");
  }

const char *HotelJSON::stringFromHotelStatusCode(TypeHotelStatusCode the_enum)
  {
    switch (the_enum)
      {
        case HotelStatusCode_Available:
            return "Available";
        case HotelStatusCode_Not_x20_available:
            return "Not available";
        case HotelStatusCode_Error:
            return "Error";
        case HotelStatusCode_No_x20_available_x20_rate_x20_plan:
            return "No available rate plan";
        default:
            assert(false);
            return NULL;
      }
  }

HotelJSON::TypeHotelPromotionJSON::TypeHotelPromotionJSON(const TypeHotelPromotionJSON &)
  {
    assert(false);
  }

HotelJSON::TypeHotelPromotionJSON &HotelJSON::TypeHotelPromotionJSON::operator=(const TypeHotelPromotionJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void HotelJSON::TypeHotelPromotionJSON::fromJSONPromotionDiscountCurrency(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field PromotionDiscountCurrency of TypeHotelPromotionJSON is not a string.");
    setPromotionDiscountCurrency(std::string(json_string->getData()));
  }

void HotelJSON::TypeHotelPromotionJSON::fromJSONPromotionDiscountCurrencySymbol(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field PromotionDiscountCurrencySymbol of TypeHotelPromotionJSON is not a string.");
    setPromotionDiscountCurrencySymbol(std::string(json_string->getData()));
  }

void HotelJSON::TypeHotelPromotionJSON::fromJSONPromotionDiscount(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field PromotionDiscount of TypeHotelPromotionJSON is not a number.");
          }
      }
    setPromotionDiscountText(the_rational_text);
  }

void HotelJSON::TypeHotelPromotionJSON::fromJSONPromotionDescription(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field PromotionDescription of TypeHotelPromotionJSON is not a string.");
    setPromotionDescription(std::string(json_string->getData()));
  }

HotelJSON::TypeHotelPromotionJSON::TypeHotelPromotionJSON(void) :
        flagHasPromotionDiscountCurrency(false),
        flagHasPromotionDiscountCurrencySymbol(false),
        flagHasPromotionDiscount(false),
        flagHasPromotionDescription(false)
  {
  }

HotelJSON::TypeHotelPromotionJSON::~TypeHotelPromotionJSON(void)
  {
  }

bool HotelJSON::TypeHotelPromotionJSON::hasPromotionDiscountCurrency(void) const
  {
    return flagHasPromotionDiscountCurrency;
  }

std::string HotelJSON::TypeHotelPromotionJSON::getPromotionDiscountCurrency(void)
  {
    assert(flagHasPromotionDiscountCurrency);
    return storePromotionDiscountCurrency;
  }

const std::string HotelJSON::TypeHotelPromotionJSON::getPromotionDiscountCurrency(void) const
  {
    assert(flagHasPromotionDiscountCurrency);
    return storePromotionDiscountCurrency;
  }

bool HotelJSON::TypeHotelPromotionJSON::hasPromotionDiscountCurrencySymbol(void) const
  {
    return flagHasPromotionDiscountCurrencySymbol;
  }

std::string HotelJSON::TypeHotelPromotionJSON::getPromotionDiscountCurrencySymbol(void)
  {
    assert(flagHasPromotionDiscountCurrencySymbol);
    return storePromotionDiscountCurrencySymbol;
  }

const std::string HotelJSON::TypeHotelPromotionJSON::getPromotionDiscountCurrencySymbol(void) const
  {
    assert(flagHasPromotionDiscountCurrencySymbol);
    return storePromotionDiscountCurrencySymbol;
  }

bool HotelJSON::TypeHotelPromotionJSON::hasPromotionDiscount(void) const
  {
    return flagHasPromotionDiscount;
  }

double HotelJSON::TypeHotelPromotionJSON::getPromotionDiscount(void)
  {
    assert(flagHasPromotionDiscount);
    if (textStorePromotionDiscount != "")
      {
        return atof(textStorePromotionDiscount.c_str());
      }
    return storePromotionDiscount;
  }

const double HotelJSON::TypeHotelPromotionJSON::getPromotionDiscount(void) const
  {
    assert(flagHasPromotionDiscount);
    if (textStorePromotionDiscount != "")
      {
        return atof(textStorePromotionDiscount.c_str());
      }
    return storePromotionDiscount;
  }

std::string HotelJSON::TypeHotelPromotionJSON::getPromotionDiscountAsText(void) const
  {
    assert(flagHasPromotionDiscount);
    if (textStorePromotionDiscount == "")
      {
        char buffer[100];
        sprintf(&(buffer[0]), "%g", storePromotionDiscount);
        return &(buffer[0]);
      }
    else
      {
        return (textStorePromotionDiscount);
      }
  }

bool HotelJSON::TypeHotelPromotionJSON::hasPromotionDescription(void) const
  {
    return flagHasPromotionDescription;
  }

std::string HotelJSON::TypeHotelPromotionJSON::getPromotionDescription(void)
  {
    assert(flagHasPromotionDescription);
    return storePromotionDescription;
  }

const std::string HotelJSON::TypeHotelPromotionJSON::getPromotionDescription(void) const
  {
    assert(flagHasPromotionDescription);
    return storePromotionDescription;
  }

HotelJSON::TypeHotelRoomTypesJSON::TypePromotionJSON::TypePromotionJSON(const TypePromotionJSON &)
  {
    assert(false);
  }

HotelJSON::TypeHotelRoomTypesJSON::TypePromotionJSON &HotelJSON::TypeHotelRoomTypesJSON::TypePromotionJSON::operator=(const TypePromotionJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void HotelJSON::TypeHotelRoomTypesJSON::TypePromotionJSON::fromJSONPromotionDiscountCurrency(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field PromotionDiscountCurrency of TypePromotionJSON is not a string.");
    setPromotionDiscountCurrency(std::string(json_string->getData()));
  }

void HotelJSON::TypeHotelRoomTypesJSON::TypePromotionJSON::fromJSONPromotionDiscountCurrencySymbol(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field PromotionDiscountCurrencySymbol of TypePromotionJSON is not a string.");
    setPromotionDiscountCurrencySymbol(std::string(json_string->getData()));
  }

void HotelJSON::TypeHotelRoomTypesJSON::TypePromotionJSON::fromJSONPromotionDiscount(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field PromotionDiscount of TypePromotionJSON is not a number.");
          }
      }
    setPromotionDiscountText(the_rational_text);
  }

void HotelJSON::TypeHotelRoomTypesJSON::TypePromotionJSON::fromJSONPromotionDescription(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field PromotionDescription of TypePromotionJSON is not a string.");
    setPromotionDescription(std::string(json_string->getData()));
  }

HotelJSON::TypeHotelRoomTypesJSON::TypePromotionJSON::TypePromotionJSON(void) :
        flagHasPromotionDiscountCurrency(false),
        flagHasPromotionDiscountCurrencySymbol(false),
        flagHasPromotionDiscount(false),
        flagHasPromotionDescription(false)
  {
  }

HotelJSON::TypeHotelRoomTypesJSON::TypePromotionJSON::~TypePromotionJSON(void)
  {
  }

bool HotelJSON::TypeHotelRoomTypesJSON::TypePromotionJSON::hasPromotionDiscountCurrency(void) const
  {
    return flagHasPromotionDiscountCurrency;
  }

std::string HotelJSON::TypeHotelRoomTypesJSON::TypePromotionJSON::getPromotionDiscountCurrency(void)
  {
    assert(flagHasPromotionDiscountCurrency);
    return storePromotionDiscountCurrency;
  }

const std::string HotelJSON::TypeHotelRoomTypesJSON::TypePromotionJSON::getPromotionDiscountCurrency(void) const
  {
    assert(flagHasPromotionDiscountCurrency);
    return storePromotionDiscountCurrency;
  }

bool HotelJSON::TypeHotelRoomTypesJSON::TypePromotionJSON::hasPromotionDiscountCurrencySymbol(void) const
  {
    return flagHasPromotionDiscountCurrencySymbol;
  }

std::string HotelJSON::TypeHotelRoomTypesJSON::TypePromotionJSON::getPromotionDiscountCurrencySymbol(void)
  {
    assert(flagHasPromotionDiscountCurrencySymbol);
    return storePromotionDiscountCurrencySymbol;
  }

const std::string HotelJSON::TypeHotelRoomTypesJSON::TypePromotionJSON::getPromotionDiscountCurrencySymbol(void) const
  {
    assert(flagHasPromotionDiscountCurrencySymbol);
    return storePromotionDiscountCurrencySymbol;
  }

bool HotelJSON::TypeHotelRoomTypesJSON::TypePromotionJSON::hasPromotionDiscount(void) const
  {
    return flagHasPromotionDiscount;
  }

double HotelJSON::TypeHotelRoomTypesJSON::TypePromotionJSON::getPromotionDiscount(void)
  {
    assert(flagHasPromotionDiscount);
    if (textStorePromotionDiscount != "")
      {
        return atof(textStorePromotionDiscount.c_str());
      }
    return storePromotionDiscount;
  }

const double HotelJSON::TypeHotelRoomTypesJSON::TypePromotionJSON::getPromotionDiscount(void) const
  {
    assert(flagHasPromotionDiscount);
    if (textStorePromotionDiscount != "")
      {
        return atof(textStorePromotionDiscount.c_str());
      }
    return storePromotionDiscount;
  }

std::string HotelJSON::TypeHotelRoomTypesJSON::TypePromotionJSON::getPromotionDiscountAsText(void) const
  {
    assert(flagHasPromotionDiscount);
    if (textStorePromotionDiscount == "")
      {
        char buffer[100];
        sprintf(&(buffer[0]), "%g", storePromotionDiscount);
        return &(buffer[0]);
      }
    else
      {
        return (textStorePromotionDiscount);
      }
  }

bool HotelJSON::TypeHotelRoomTypesJSON::TypePromotionJSON::hasPromotionDescription(void) const
  {
    return flagHasPromotionDescription;
  }

std::string HotelJSON::TypeHotelRoomTypesJSON::TypePromotionJSON::getPromotionDescription(void)
  {
    assert(flagHasPromotionDescription);
    return storePromotionDescription;
  }

const std::string HotelJSON::TypeHotelRoomTypesJSON::TypePromotionJSON::getPromotionDescription(void) const
  {
    assert(flagHasPromotionDescription);
    return storePromotionDescription;
  }

HotelJSON::TypeHotelRoomTypesJSON::TypeAmenitiesJSON::TypeAmenitiesJSON(const TypeAmenitiesJSON &)
  {
    assert(false);
  }

HotelJSON::TypeHotelRoomTypesJSON::TypeAmenitiesJSON &HotelJSON::TypeHotelRoomTypesJSON::TypeAmenitiesJSON::operator=(const TypeAmenitiesJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void HotelJSON::TypeHotelRoomTypesJSON::TypeAmenitiesJSON::fromJSONID(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field ID of TypeAmenitiesJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field ID of TypeAmenitiesJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setID(extracted_integer);
  }

void HotelJSON::TypeHotelRoomTypesJSON::TypeAmenitiesJSON::fromJSONName(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Name of TypeAmenitiesJSON is not a string.");
    setName(std::string(json_string->getData()));
  }

HotelJSON::TypeHotelRoomTypesJSON::TypeAmenitiesJSON::TypeAmenitiesJSON(void) :
        flagHasID(false),
        flagHasName(false)
  {
  }

HotelJSON::TypeHotelRoomTypesJSON::TypeAmenitiesJSON::~TypeAmenitiesJSON(void)
  {
  }

bool HotelJSON::TypeHotelRoomTypesJSON::TypeAmenitiesJSON::hasID(void) const
  {
    return flagHasID;
  }

OInteger HotelJSON::TypeHotelRoomTypesJSON::TypeAmenitiesJSON::getID(void)
  {
    assert(flagHasID);
    return storeID;
  }

const OInteger HotelJSON::TypeHotelRoomTypesJSON::TypeAmenitiesJSON::getID(void) const
  {
    assert(flagHasID);
    return storeID;
  }

bool HotelJSON::TypeHotelRoomTypesJSON::TypeAmenitiesJSON::hasName(void) const
  {
    return flagHasName;
  }

std::string HotelJSON::TypeHotelRoomTypesJSON::TypeAmenitiesJSON::getName(void)
  {
    assert(flagHasName);
    return storeName;
  }

const std::string HotelJSON::TypeHotelRoomTypesJSON::TypeAmenitiesJSON::getName(void) const
  {
    assert(flagHasName);
    return storeName;
  }

HotelJSON::TypeHotelRoomTypesJSON::TypeHotelRoomTypesJSON(const TypeHotelRoomTypesJSON &)
  {
    assert(false);
  }

HotelJSON::TypeHotelRoomTypesJSON &HotelJSON::TypeHotelRoomTypesJSON::operator=(const TypeHotelRoomTypesJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void HotelJSON::TypeHotelRoomTypesJSON::fromJSONDescription(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Description of TypeHotelRoomTypesJSON is not a string.");
    setDescription(std::string(json_string->getData()));
  }

void HotelJSON::TypeHotelRoomTypesJSON::fromJSONRemainingCount(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field RemainingCount of TypeHotelRoomTypesJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field RemainingCount of TypeHotelRoomTypesJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setRemainingCount(extracted_integer);
  }

void HotelJSON::TypeHotelRoomTypesJSON::fromJSONPricing(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    HotelPricingJSON *convert_classy = HotelPricingJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setPricing(convert_classy);
    convert_classy->remove_reference();
  }

void HotelJSON::TypeHotelRoomTypesJSON::fromJSONPromotion(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TypePromotionJSON *convert_classy = TypePromotionJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setPromotion(convert_classy);
    convert_classy->remove_reference();
  }

void HotelJSON::TypeHotelRoomTypesJSON::fromJSONRateDetailsUrl(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field RateDetailsUrl of TypeHotelRoomTypesJSON is not a string.");
    setRateDetailsUrl(std::string(json_string->getData()));
  }

void HotelJSON::TypeHotelRoomTypesJSON::fromJSONAmenities(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field Amenities of TypeHotelRoomTypesJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< TypeAmenitiesJSON * > vector_Amenities1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        TypeAmenitiesJSON *convert_classy = TypeAmenitiesJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_Amenities1[num1] = convert_classy;
      }
    initAmenities();
    for (size_t num6 = 0; num6 < vector_Amenities1.size(); ++num6)
        appendAmenities(vector_Amenities1[num6]);
    for (size_t num1 = 0; num1 < vector_Amenities1.size(); ++num1)
      {
        vector_Amenities1[num1]->remove_reference();
      }
  }

void HotelJSON::TypeHotelRoomTypesJSON::fromJSONRefundable(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field Refundable of TypeHotelRoomTypesJSON is not true for false.");
          }
      }
    setRefundable(the_bool);
  }

void HotelJSON::TypeHotelRoomTypesJSON::fromJSONFreeCancellation(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field FreeCancellation of TypeHotelRoomTypesJSON is not true for false.");
          }
      }
    setFreeCancellation(the_bool);
  }

void HotelJSON::TypeHotelRoomTypesJSON::fromJSONPaymentMethod(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field PaymentMethod of TypeHotelRoomTypesJSON is not a string.");
    setPaymentMethod(std::string(json_string->getData()));
  }

HotelJSON::TypeHotelRoomTypesJSON::TypeHotelRoomTypesJSON(void) :
        flagHasDescription(false),
        flagHasRemainingCount(false),
        flagHasPricing(false),
        flagHasPromotion(false),
        flagHasRateDetailsUrl(false),
        flagHasAmenities(false),
        flagHasRefundable(false),
        flagHasFreeCancellation(false),
        flagHasPaymentMethod(false)
  {
  }

HotelJSON::TypeHotelRoomTypesJSON::~TypeHotelRoomTypesJSON(void)
  {
    if (flagHasPricing)
      {
        storePricing->remove_reference();
      }
    if (flagHasPromotion)
      {
        storePromotion->remove_reference();
      }
    if (flagHasAmenities)
      {
        for (size_t num7 = 0; num7 < storeAmenities.size(); ++num7)
          {
            storeAmenities[num7]->remove_reference();
          }
      }
  }

bool HotelJSON::TypeHotelRoomTypesJSON::hasDescription(void) const
  {
    return flagHasDescription;
  }

std::string HotelJSON::TypeHotelRoomTypesJSON::getDescription(void)
  {
    assert(flagHasDescription);
    return storeDescription;
  }

const std::string HotelJSON::TypeHotelRoomTypesJSON::getDescription(void) const
  {
    assert(flagHasDescription);
    return storeDescription;
  }

bool HotelJSON::TypeHotelRoomTypesJSON::hasRemainingCount(void) const
  {
    return flagHasRemainingCount;
  }

OInteger HotelJSON::TypeHotelRoomTypesJSON::getRemainingCount(void)
  {
    assert(flagHasRemainingCount);
    return storeRemainingCount;
  }

const OInteger HotelJSON::TypeHotelRoomTypesJSON::getRemainingCount(void) const
  {
    assert(flagHasRemainingCount);
    return storeRemainingCount;
  }

bool HotelJSON::TypeHotelRoomTypesJSON::hasPricing(void) const
  {
    return flagHasPricing;
  }

HotelPricingJSON * HotelJSON::TypeHotelRoomTypesJSON::getPricing(void)
  {
    assert(flagHasPricing);
    return storePricing;
  }

const HotelPricingJSON * HotelJSON::TypeHotelRoomTypesJSON::getPricing(void) const
  {
    assert(flagHasPricing);
    return storePricing;
  }

bool HotelJSON::TypeHotelRoomTypesJSON::hasPromotion(void) const
  {
    return flagHasPromotion;
  }

HotelJSON::TypeHotelRoomTypesJSON::TypePromotionJSON * HotelJSON::TypeHotelRoomTypesJSON::getPromotion(void)
  {
    assert(flagHasPromotion);
    return storePromotion;
  }

const HotelJSON::TypeHotelRoomTypesJSON::TypePromotionJSON * HotelJSON::TypeHotelRoomTypesJSON::getPromotion(void) const
  {
    assert(flagHasPromotion);
    return storePromotion;
  }

bool HotelJSON::TypeHotelRoomTypesJSON::hasRateDetailsUrl(void) const
  {
    return flagHasRateDetailsUrl;
  }

std::string HotelJSON::TypeHotelRoomTypesJSON::getRateDetailsUrl(void)
  {
    assert(flagHasRateDetailsUrl);
    return storeRateDetailsUrl;
  }

const std::string HotelJSON::TypeHotelRoomTypesJSON::getRateDetailsUrl(void) const
  {
    assert(flagHasRateDetailsUrl);
    return storeRateDetailsUrl;
  }

bool HotelJSON::TypeHotelRoomTypesJSON::hasAmenities(void) const
  {
    return flagHasAmenities;
  }

size_t HotelJSON::TypeHotelRoomTypesJSON::countOfAmenities(void) const
  {
    assert(flagHasAmenities);
    return storeAmenities.size();
  }

HotelJSON::TypeHotelRoomTypesJSON::TypeAmenitiesJSON * HotelJSON::TypeHotelRoomTypesJSON::elementOfAmenities(size_t element_num)
  {
    assert(flagHasAmenities);
    return storeAmenities[element_num];
  }

const HotelJSON::TypeHotelRoomTypesJSON::TypeAmenitiesJSON * HotelJSON::TypeHotelRoomTypesJSON::elementOfAmenities(size_t element_num) const
  {
    assert(flagHasAmenities);
    return storeAmenities[element_num];
  }

std::vector< HotelJSON::TypeHotelRoomTypesJSON::TypeAmenitiesJSON * > HotelJSON::TypeHotelRoomTypesJSON::getAmenities(void)
  {
    assert(flagHasAmenities);
    return storeAmenities;
  }

const std::vector< HotelJSON::TypeHotelRoomTypesJSON::TypeAmenitiesJSON * > HotelJSON::TypeHotelRoomTypesJSON::getAmenities(void) const
  {
    assert(flagHasAmenities);
    return storeAmenities;
  }

bool HotelJSON::TypeHotelRoomTypesJSON::hasRefundable(void) const
  {
    return flagHasRefundable;
  }

bool HotelJSON::TypeHotelRoomTypesJSON::getRefundable(void)
  {
    assert(flagHasRefundable);
    return storeRefundable;
  }

const bool HotelJSON::TypeHotelRoomTypesJSON::getRefundable(void) const
  {
    assert(flagHasRefundable);
    return storeRefundable;
  }

bool HotelJSON::TypeHotelRoomTypesJSON::hasFreeCancellation(void) const
  {
    return flagHasFreeCancellation;
  }

bool HotelJSON::TypeHotelRoomTypesJSON::getFreeCancellation(void)
  {
    assert(flagHasFreeCancellation);
    return storeFreeCancellation;
  }

const bool HotelJSON::TypeHotelRoomTypesJSON::getFreeCancellation(void) const
  {
    assert(flagHasFreeCancellation);
    return storeFreeCancellation;
  }

bool HotelJSON::TypeHotelRoomTypesJSON::hasPaymentMethod(void) const
  {
    return flagHasPaymentMethod;
  }

std::string HotelJSON::TypeHotelRoomTypesJSON::getPaymentMethod(void)
  {
    assert(flagHasPaymentMethod);
    return storePaymentMethod;
  }

const std::string HotelJSON::TypeHotelRoomTypesJSON::getPaymentMethod(void) const
  {
    assert(flagHasPaymentMethod);
    return storePaymentMethod;
  }

HotelJSON::HotelJSON(const HotelJSON &)
  {
    assert(false);
  }

HotelJSON &HotelJSON::operator=(const HotelJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void HotelJSON::fromJSONHotelID(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field HotelID of HotelJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field HotelID of HotelJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setHotelID(extracted_integer);
  }

void HotelJSON::fromJSONHotelName(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field HotelName of HotelJSON is not a string.");
    setHotelName(std::string(json_string->getData()));
  }

void HotelJSON::fromJSONDistanceFromReference(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field DistanceFromReference of HotelJSON is not a number.");
          }
      }
    setDistanceFromReferenceText(the_rational_text);
  }

void HotelJSON::fromJSONDistanceFromReferenceUnit(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field DistanceFromReferenceUnit of HotelJSON is not a string.");
    TypeDistanceFromReferenceUnit the_enum;
    switch ((unsigned char)(json_string->getData()[0]))
      {
        case 'k':
            if (strcmp(&(json_string->getData()[1]), "m") == 0)
                  {
                    the_enum = DistanceFromReferenceUnit_km;
                    goto enum_is_done;
                  }
            break;
        case 'm':
            if (strcmp(&(json_string->getData()[1]), "i") == 0)
                  {
                    the_enum = DistanceFromReferenceUnit_mi;
                    goto enum_is_done;
                  }
            break;
        default:
            break;
      }
    throw("The value for field DistanceFromReferenceUnit of HotelJSON is not one of the legal strings.");
  enum_is_done:;
    setDistanceFromReferenceUnit(the_enum);
  }

void HotelJSON::fromJSONHotelLocation(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TypeHotelLocationJSON *convert_classy = TypeHotelLocationJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setHotelLocation(convert_classy);
    convert_classy->remove_reference();
  }

void HotelJSON::fromJSONHotelDescription(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field HotelDescription of HotelJSON is not a string.");
    setHotelDescription(std::string(json_string->getData()));
  }

void HotelJSON::fromJSONHotelFeaturedOffer(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TypeHotelFeaturedOfferJSON *convert_classy = TypeHotelFeaturedOfferJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setHotelFeaturedOffer(convert_classy);
    convert_classy->remove_reference();
  }

void HotelJSON::fromJSONHotelStatusCode(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field HotelStatusCode of HotelJSON is not a string.");
    TypeHotelStatusCode the_enum;
    switch ((unsigned char)(json_string->getData()[0]))
      {
        case 'A':
            if (strcmp(&(json_string->getData()[1]), "vailable") == 0)
                  {
                    the_enum = HotelStatusCode_Available;
                    goto enum_is_done;
                  }
            break;
        case 'E':
            if (strcmp(&(json_string->getData()[1]), "rror") == 0)
                  {
                    the_enum = HotelStatusCode_Error;
                    goto enum_is_done;
                  }
            break;
        case 'N':
            if (strncmp(&(json_string->getData()[1]), "o", 1) == 0)
              {
                switch ((unsigned char)(json_string->getData()[2]))
                  {
                    case ' ':
                        if (strcmp(&(json_string->getData()[3]), "available rate plan") == 0)
                              {
                                the_enum = HotelStatusCode_No_x20_available_x20_rate_x20_plan;
                                goto enum_is_done;
                              }
                        break;
                    case 't':
                        if (strcmp(&(json_string->getData()[3]), " available") == 0)
                              {
                                the_enum = HotelStatusCode_Not_x20_available;
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
    throw("The value for field HotelStatusCode of HotelJSON is not one of the legal strings.");
  enum_is_done:;
    setHotelStatusCode(the_enum);
  }

void HotelJSON::fromJSONHotelStatusDescription(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field HotelStatusDescription of HotelJSON is not a string.");
    setHotelStatusDescription(std::string(json_string->getData()));
  }

void HotelJSON::fromJSONHotelPricing(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    HotelPricingJSON *convert_classy = HotelPricingJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setHotelPricing(convert_classy);
    convert_classy->remove_reference();
  }

void HotelJSON::fromJSONHotelPromotion(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TypeHotelPromotionJSON *convert_classy = TypeHotelPromotionJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setHotelPromotion(convert_classy);
    convert_classy->remove_reference();
  }

void HotelJSON::fromJSONHotelDetailsUrl(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field HotelDetailsUrl of HotelJSON is not a string.");
    setHotelDetailsUrl(std::string(json_string->getData()));
  }

void HotelJSON::fromJSONHotelRateDetailsUrl(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field HotelRateDetailsUrl of HotelJSON is not a string.");
    setHotelRateDetailsUrl(std::string(json_string->getData()));
  }

void HotelJSON::fromJSONHotelThumbnailUrl(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field HotelThumbnailUrl of HotelJSON is not a string.");
    setHotelThumbnailUrl(std::string(json_string->getData()));
  }

void HotelJSON::fromJSONHotelImageUrl(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field HotelImageUrl of HotelJSON is not a string.");
    setHotelImageUrl(std::string(json_string->getData()));
  }

void HotelJSON::fromJSONHotelStarRating(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field HotelStarRating of HotelJSON is not a number.");
          }
      }
    setHotelStarRatingText(the_rational_text);
  }

void HotelJSON::fromJSONHotelGuestRating(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field HotelGuestRating of HotelJSON is not a number.");
          }
      }
    setHotelGuestRatingText(the_rational_text);
  }

void HotelJSON::fromJSONHotelGuestReviewCount(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field HotelGuestReviewCount of HotelJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field HotelGuestReviewCount of HotelJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setHotelGuestReviewCount(extracted_integer);
  }

void HotelJSON::fromJSONHotelRoomTypes(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field HotelRoomTypes of HotelJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< TypeHotelRoomTypesJSON * > vector_HotelRoomTypes1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        TypeHotelRoomTypesJSON *convert_classy = TypeHotelRoomTypesJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_HotelRoomTypes1[num1] = convert_classy;
      }
    initHotelRoomTypes();
    for (size_t num7 = 0; num7 < vector_HotelRoomTypes1.size(); ++num7)
        appendHotelRoomTypes(vector_HotelRoomTypes1[num7]);
    for (size_t num1 = 0; num1 < vector_HotelRoomTypes1.size(); ++num1)
      {
        vector_HotelRoomTypes1[num1]->remove_reference();
      }
  }

void HotelJSON::fromJSONHotelAmenities(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field HotelAmenities of HotelJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< std::string > vector_HotelAmenities1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        const JSONStringValue *json_string = json_array1->component(num1)->string_value();
        if (json_string == NULL)
            throw("The value for an element of field HotelAmenities of HotelJSON is not a string.");
        vector_HotelAmenities1[num1] = std::string(json_string->getData());
      }
    initHotelAmenities();
    for (size_t num8 = 0; num8 < vector_HotelAmenities1.size(); ++num8)
        appendHotelAmenities(vector_HotelAmenities1[num8]);
    for (size_t num1 = 0; num1 < vector_HotelAmenities1.size(); ++num1)
      {
      }
  }

void HotelJSON::fromJSONMatchedCriteriaInclude(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field MatchedCriteriaInclude of HotelJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< std::string > vector_MatchedCriteriaInclude1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        const JSONStringValue *json_string = json_array1->component(num1)->string_value();
        if (json_string == NULL)
            throw("The value for an element of field MatchedCriteriaInclude of HotelJSON is not a string.");
        vector_MatchedCriteriaInclude1[num1] = std::string(json_string->getData());
      }
    initMatchedCriteriaInclude();
    for (size_t num9 = 0; num9 < vector_MatchedCriteriaInclude1.size(); ++num9)
        appendMatchedCriteriaInclude(vector_MatchedCriteriaInclude1[num9]);
    for (size_t num1 = 0; num1 < vector_MatchedCriteriaInclude1.size(); ++num1)
      {
      }
  }

void HotelJSON::fromJSONMatchedCriteriaExclude(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field MatchedCriteriaExclude of HotelJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< std::string > vector_MatchedCriteriaExclude1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        const JSONStringValue *json_string = json_array1->component(num1)->string_value();
        if (json_string == NULL)
            throw("The value for an element of field MatchedCriteriaExclude of HotelJSON is not a string.");
        vector_MatchedCriteriaExclude1[num1] = std::string(json_string->getData());
      }
    initMatchedCriteriaExclude();
    for (size_t num10 = 0; num10 < vector_MatchedCriteriaExclude1.size(); ++num10)
        appendMatchedCriteriaExclude(vector_MatchedCriteriaExclude1[num10]);
    for (size_t num1 = 0; num1 < vector_MatchedCriteriaExclude1.size(); ++num1)
      {
      }
  }

HotelJSON::HotelJSON(void) :
        flagHasHotelID(false),
        flagHasHotelName(false),
        flagHasDistanceFromReference(false),
        flagHasDistanceFromReferenceUnit(false),
        flagHasHotelLocation(false),
        flagHasHotelDescription(false),
        flagHasHotelFeaturedOffer(false),
        flagHasHotelStatusCode(false),
        flagHasHotelStatusDescription(false),
        flagHasHotelPricing(false),
        flagHasHotelPromotion(false),
        flagHasHotelDetailsUrl(false),
        flagHasHotelRateDetailsUrl(false),
        flagHasHotelThumbnailUrl(false),
        flagHasHotelImageUrl(false),
        flagHasHotelStarRating(false),
        flagHasHotelGuestRating(false),
        flagHasHotelGuestReviewCount(false),
        flagHasHotelRoomTypes(false),
        flagHasHotelAmenities(false),
        flagHasMatchedCriteriaInclude(false),
        flagHasMatchedCriteriaExclude(false)
  {
  }

HotelJSON::~HotelJSON(void)
  {
    if (flagHasHotelLocation)
      {
        storeHotelLocation->remove_reference();
      }
    if (flagHasHotelFeaturedOffer)
      {
        storeHotelFeaturedOffer->remove_reference();
      }
    if (flagHasHotelPricing)
      {
        storeHotelPricing->remove_reference();
      }
    if (flagHasHotelPromotion)
      {
        storeHotelPromotion->remove_reference();
      }
    if (flagHasHotelRoomTypes)
      {
        for (size_t num10 = 0; num10 < storeHotelRoomTypes.size(); ++num10)
          {
            storeHotelRoomTypes[num10]->remove_reference();
          }
      }
  }

bool HotelJSON::hasHotelID(void) const
  {
    return flagHasHotelID;
  }

OInteger HotelJSON::getHotelID(void)
  {
    assert(flagHasHotelID);
    return storeHotelID;
  }

const OInteger HotelJSON::getHotelID(void) const
  {
    assert(flagHasHotelID);
    return storeHotelID;
  }

bool HotelJSON::hasHotelName(void) const
  {
    return flagHasHotelName;
  }

std::string HotelJSON::getHotelName(void)
  {
    assert(flagHasHotelName);
    return storeHotelName;
  }

const std::string HotelJSON::getHotelName(void) const
  {
    assert(flagHasHotelName);
    return storeHotelName;
  }

bool HotelJSON::hasDistanceFromReference(void) const
  {
    return flagHasDistanceFromReference;
  }

double HotelJSON::getDistanceFromReference(void)
  {
    assert(flagHasDistanceFromReference);
    if (textStoreDistanceFromReference != "")
      {
        return atof(textStoreDistanceFromReference.c_str());
      }
    return storeDistanceFromReference;
  }

const double HotelJSON::getDistanceFromReference(void) const
  {
    assert(flagHasDistanceFromReference);
    if (textStoreDistanceFromReference != "")
      {
        return atof(textStoreDistanceFromReference.c_str());
      }
    return storeDistanceFromReference;
  }

std::string HotelJSON::getDistanceFromReferenceAsText(void) const
  {
    assert(flagHasDistanceFromReference);
    if (textStoreDistanceFromReference == "")
      {
        char buffer[100];
        sprintf(&(buffer[0]), "%g", storeDistanceFromReference);
        return &(buffer[0]);
      }
    else
      {
        return (textStoreDistanceFromReference);
      }
  }

bool HotelJSON::hasDistanceFromReferenceUnit(void) const
  {
    return flagHasDistanceFromReferenceUnit;
  }

HotelJSON::TypeDistanceFromReferenceUnit HotelJSON::getDistanceFromReferenceUnit(void)
  {
    assert(flagHasDistanceFromReferenceUnit);
    return storeDistanceFromReferenceUnit;
  }

const HotelJSON::TypeDistanceFromReferenceUnit HotelJSON::getDistanceFromReferenceUnit(void) const
  {
    assert(flagHasDistanceFromReferenceUnit);
    return storeDistanceFromReferenceUnit;
  }

const char *HotelJSON::getDistanceFromReferenceUnitAsChars(void) const
  {
    return stringFromDistanceFromReferenceUnit(getDistanceFromReferenceUnit());
  }

std::string HotelJSON::getDistanceFromReferenceUnitAsString(void) const
  {
    return stringFromDistanceFromReferenceUnit(getDistanceFromReferenceUnit());
  }

bool HotelJSON::hasHotelLocation(void) const
  {
    return flagHasHotelLocation;
  }

HotelJSON::TypeHotelLocationJSON * HotelJSON::getHotelLocation(void)
  {
    assert(flagHasHotelLocation);
    return storeHotelLocation;
  }

const HotelJSON::TypeHotelLocationJSON * HotelJSON::getHotelLocation(void) const
  {
    assert(flagHasHotelLocation);
    return storeHotelLocation;
  }

bool HotelJSON::hasHotelDescription(void) const
  {
    return flagHasHotelDescription;
  }

std::string HotelJSON::getHotelDescription(void)
  {
    assert(flagHasHotelDescription);
    return storeHotelDescription;
  }

const std::string HotelJSON::getHotelDescription(void) const
  {
    assert(flagHasHotelDescription);
    return storeHotelDescription;
  }

bool HotelJSON::hasHotelFeaturedOffer(void) const
  {
    return flagHasHotelFeaturedOffer;
  }

HotelJSON::TypeHotelFeaturedOfferJSON * HotelJSON::getHotelFeaturedOffer(void)
  {
    assert(flagHasHotelFeaturedOffer);
    return storeHotelFeaturedOffer;
  }

const HotelJSON::TypeHotelFeaturedOfferJSON * HotelJSON::getHotelFeaturedOffer(void) const
  {
    assert(flagHasHotelFeaturedOffer);
    return storeHotelFeaturedOffer;
  }

bool HotelJSON::hasHotelStatusCode(void) const
  {
    return flagHasHotelStatusCode;
  }

HotelJSON::TypeHotelStatusCode HotelJSON::getHotelStatusCode(void)
  {
    assert(flagHasHotelStatusCode);
    return storeHotelStatusCode;
  }

const HotelJSON::TypeHotelStatusCode HotelJSON::getHotelStatusCode(void) const
  {
    assert(flagHasHotelStatusCode);
    return storeHotelStatusCode;
  }

const char *HotelJSON::getHotelStatusCodeAsChars(void) const
  {
    return stringFromHotelStatusCode(getHotelStatusCode());
  }

std::string HotelJSON::getHotelStatusCodeAsString(void) const
  {
    return stringFromHotelStatusCode(getHotelStatusCode());
  }

bool HotelJSON::hasHotelStatusDescription(void) const
  {
    return flagHasHotelStatusDescription;
  }

std::string HotelJSON::getHotelStatusDescription(void)
  {
    assert(flagHasHotelStatusDescription);
    return storeHotelStatusDescription;
  }

const std::string HotelJSON::getHotelStatusDescription(void) const
  {
    assert(flagHasHotelStatusDescription);
    return storeHotelStatusDescription;
  }

bool HotelJSON::hasHotelPricing(void) const
  {
    return flagHasHotelPricing;
  }

HotelPricingJSON * HotelJSON::getHotelPricing(void)
  {
    assert(flagHasHotelPricing);
    return storeHotelPricing;
  }

const HotelPricingJSON * HotelJSON::getHotelPricing(void) const
  {
    assert(flagHasHotelPricing);
    return storeHotelPricing;
  }

bool HotelJSON::hasHotelPromotion(void) const
  {
    return flagHasHotelPromotion;
  }

HotelJSON::TypeHotelPromotionJSON * HotelJSON::getHotelPromotion(void)
  {
    assert(flagHasHotelPromotion);
    return storeHotelPromotion;
  }

const HotelJSON::TypeHotelPromotionJSON * HotelJSON::getHotelPromotion(void) const
  {
    assert(flagHasHotelPromotion);
    return storeHotelPromotion;
  }

bool HotelJSON::hasHotelDetailsUrl(void) const
  {
    return flagHasHotelDetailsUrl;
  }

std::string HotelJSON::getHotelDetailsUrl(void)
  {
    assert(flagHasHotelDetailsUrl);
    return storeHotelDetailsUrl;
  }

const std::string HotelJSON::getHotelDetailsUrl(void) const
  {
    assert(flagHasHotelDetailsUrl);
    return storeHotelDetailsUrl;
  }

bool HotelJSON::hasHotelRateDetailsUrl(void) const
  {
    return flagHasHotelRateDetailsUrl;
  }

std::string HotelJSON::getHotelRateDetailsUrl(void)
  {
    assert(flagHasHotelRateDetailsUrl);
    return storeHotelRateDetailsUrl;
  }

const std::string HotelJSON::getHotelRateDetailsUrl(void) const
  {
    assert(flagHasHotelRateDetailsUrl);
    return storeHotelRateDetailsUrl;
  }

bool HotelJSON::hasHotelThumbnailUrl(void) const
  {
    return flagHasHotelThumbnailUrl;
  }

std::string HotelJSON::getHotelThumbnailUrl(void)
  {
    assert(flagHasHotelThumbnailUrl);
    return storeHotelThumbnailUrl;
  }

const std::string HotelJSON::getHotelThumbnailUrl(void) const
  {
    assert(flagHasHotelThumbnailUrl);
    return storeHotelThumbnailUrl;
  }

bool HotelJSON::hasHotelImageUrl(void) const
  {
    return flagHasHotelImageUrl;
  }

std::string HotelJSON::getHotelImageUrl(void)
  {
    assert(flagHasHotelImageUrl);
    return storeHotelImageUrl;
  }

const std::string HotelJSON::getHotelImageUrl(void) const
  {
    assert(flagHasHotelImageUrl);
    return storeHotelImageUrl;
  }

bool HotelJSON::hasHotelStarRating(void) const
  {
    return flagHasHotelStarRating;
  }

double HotelJSON::getHotelStarRating(void)
  {
    assert(flagHasHotelStarRating);
    if (textStoreHotelStarRating != "")
      {
        return atof(textStoreHotelStarRating.c_str());
      }
    return storeHotelStarRating;
  }

const double HotelJSON::getHotelStarRating(void) const
  {
    assert(flagHasHotelStarRating);
    if (textStoreHotelStarRating != "")
      {
        return atof(textStoreHotelStarRating.c_str());
      }
    return storeHotelStarRating;
  }

std::string HotelJSON::getHotelStarRatingAsText(void) const
  {
    assert(flagHasHotelStarRating);
    if (textStoreHotelStarRating == "")
      {
        char buffer[100];
        sprintf(&(buffer[0]), "%g", storeHotelStarRating);
        return &(buffer[0]);
      }
    else
      {
        return (textStoreHotelStarRating);
      }
  }

bool HotelJSON::hasHotelGuestRating(void) const
  {
    return flagHasHotelGuestRating;
  }

double HotelJSON::getHotelGuestRating(void)
  {
    assert(flagHasHotelGuestRating);
    if (textStoreHotelGuestRating != "")
      {
        return atof(textStoreHotelGuestRating.c_str());
      }
    return storeHotelGuestRating;
  }

const double HotelJSON::getHotelGuestRating(void) const
  {
    assert(flagHasHotelGuestRating);
    if (textStoreHotelGuestRating != "")
      {
        return atof(textStoreHotelGuestRating.c_str());
      }
    return storeHotelGuestRating;
  }

std::string HotelJSON::getHotelGuestRatingAsText(void) const
  {
    assert(flagHasHotelGuestRating);
    if (textStoreHotelGuestRating == "")
      {
        char buffer[100];
        sprintf(&(buffer[0]), "%g", storeHotelGuestRating);
        return &(buffer[0]);
      }
    else
      {
        return (textStoreHotelGuestRating);
      }
  }

bool HotelJSON::hasHotelGuestReviewCount(void) const
  {
    return flagHasHotelGuestReviewCount;
  }

OInteger HotelJSON::getHotelGuestReviewCount(void)
  {
    assert(flagHasHotelGuestReviewCount);
    return storeHotelGuestReviewCount;
  }

const OInteger HotelJSON::getHotelGuestReviewCount(void) const
  {
    assert(flagHasHotelGuestReviewCount);
    return storeHotelGuestReviewCount;
  }

bool HotelJSON::hasHotelRoomTypes(void) const
  {
    return flagHasHotelRoomTypes;
  }

size_t HotelJSON::countOfHotelRoomTypes(void) const
  {
    assert(flagHasHotelRoomTypes);
    return storeHotelRoomTypes.size();
  }

HotelJSON::TypeHotelRoomTypesJSON * HotelJSON::elementOfHotelRoomTypes(size_t element_num)
  {
    assert(flagHasHotelRoomTypes);
    return storeHotelRoomTypes[element_num];
  }

const HotelJSON::TypeHotelRoomTypesJSON * HotelJSON::elementOfHotelRoomTypes(size_t element_num) const
  {
    assert(flagHasHotelRoomTypes);
    return storeHotelRoomTypes[element_num];
  }

std::vector< HotelJSON::TypeHotelRoomTypesJSON * > HotelJSON::getHotelRoomTypes(void)
  {
    assert(flagHasHotelRoomTypes);
    return storeHotelRoomTypes;
  }

const std::vector< HotelJSON::TypeHotelRoomTypesJSON * > HotelJSON::getHotelRoomTypes(void) const
  {
    assert(flagHasHotelRoomTypes);
    return storeHotelRoomTypes;
  }

bool HotelJSON::hasHotelAmenities(void) const
  {
    return flagHasHotelAmenities;
  }

size_t HotelJSON::countOfHotelAmenities(void) const
  {
    assert(flagHasHotelAmenities);
    return storeHotelAmenities.size();
  }

std::string HotelJSON::elementOfHotelAmenities(size_t element_num)
  {
    assert(flagHasHotelAmenities);
    return storeHotelAmenities[element_num];
  }

const std::string HotelJSON::elementOfHotelAmenities(size_t element_num) const
  {
    assert(flagHasHotelAmenities);
    return storeHotelAmenities[element_num];
  }

std::vector< std::string > HotelJSON::getHotelAmenities(void)
  {
    assert(flagHasHotelAmenities);
    return storeHotelAmenities;
  }

const std::vector< std::string > HotelJSON::getHotelAmenities(void) const
  {
    assert(flagHasHotelAmenities);
    return storeHotelAmenities;
  }

bool HotelJSON::hasMatchedCriteriaInclude(void) const
  {
    return flagHasMatchedCriteriaInclude;
  }

size_t HotelJSON::countOfMatchedCriteriaInclude(void) const
  {
    assert(flagHasMatchedCriteriaInclude);
    return storeMatchedCriteriaInclude.size();
  }

std::string HotelJSON::elementOfMatchedCriteriaInclude(size_t element_num)
  {
    assert(flagHasMatchedCriteriaInclude);
    return storeMatchedCriteriaInclude[element_num];
  }

const std::string HotelJSON::elementOfMatchedCriteriaInclude(size_t element_num) const
  {
    assert(flagHasMatchedCriteriaInclude);
    return storeMatchedCriteriaInclude[element_num];
  }

std::vector< std::string > HotelJSON::getMatchedCriteriaInclude(void)
  {
    assert(flagHasMatchedCriteriaInclude);
    return storeMatchedCriteriaInclude;
  }

const std::vector< std::string > HotelJSON::getMatchedCriteriaInclude(void) const
  {
    assert(flagHasMatchedCriteriaInclude);
    return storeMatchedCriteriaInclude;
  }

bool HotelJSON::hasMatchedCriteriaExclude(void) const
  {
    return flagHasMatchedCriteriaExclude;
  }

size_t HotelJSON::countOfMatchedCriteriaExclude(void) const
  {
    assert(flagHasMatchedCriteriaExclude);
    return storeMatchedCriteriaExclude.size();
  }

std::string HotelJSON::elementOfMatchedCriteriaExclude(size_t element_num)
  {
    assert(flagHasMatchedCriteriaExclude);
    return storeMatchedCriteriaExclude[element_num];
  }

const std::string HotelJSON::elementOfMatchedCriteriaExclude(size_t element_num) const
  {
    assert(flagHasMatchedCriteriaExclude);
    return storeMatchedCriteriaExclude[element_num];
  }

std::vector< std::string > HotelJSON::getMatchedCriteriaExclude(void)
  {
    assert(flagHasMatchedCriteriaExclude);
    return storeMatchedCriteriaExclude;
  }

const std::vector< std::string > HotelJSON::getMatchedCriteriaExclude(void) const
  {
    assert(flagHasMatchedCriteriaExclude);
    return storeMatchedCriteriaExclude;
  }

char HotelJSON::Generator::lowerBoundHotelID[] = "1";
HotelJSON::TypeHotelLocationJSON *HotelJSON::TypeHotelLocationJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    TypeHotelLocationJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<TypeHotelLocationJSON>, TypeHotelLocationJSON *, bool> generator("Type TypeHotelLocation", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
char HotelJSON::TypeHotelFeaturedOfferJSON::Generator::lowerBoundLengthOfStay[] = "0";
HotelJSON::TypeHotelFeaturedOfferJSON *HotelJSON::TypeHotelFeaturedOfferJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    TypeHotelFeaturedOfferJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<TypeHotelFeaturedOfferJSON>, TypeHotelFeaturedOfferJSON *, bool> generator("Type TypeHotelFeaturedOffer", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
HotelJSON::TypeHotelPromotionJSON *HotelJSON::TypeHotelPromotionJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    TypeHotelPromotionJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<TypeHotelPromotionJSON>, TypeHotelPromotionJSON *, bool> generator("Type TypeHotelPromotion", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
char HotelJSON::Generator::lowerBoundHotelGuestReviewCount[] = "0";
char HotelJSON::TypeHotelRoomTypesJSON::Generator::lowerBoundRemainingCount[] = "0";
HotelJSON::TypeHotelRoomTypesJSON::TypePromotionJSON *HotelJSON::TypeHotelRoomTypesJSON::TypePromotionJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    TypePromotionJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<TypePromotionJSON>, TypePromotionJSON *, bool> generator("Type TypePromotion", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
char HotelJSON::TypeHotelRoomTypesJSON::TypeAmenitiesJSON::Generator::lowerBoundID[] = "0";
HotelJSON::TypeHotelRoomTypesJSON::TypeAmenitiesJSON *HotelJSON::TypeHotelRoomTypesJSON::TypeAmenitiesJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    TypeAmenitiesJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<TypeAmenitiesJSON>, TypeAmenitiesJSON *, bool> generator("Type TypeAmenities", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
HotelJSON::TypeHotelRoomTypesJSON *HotelJSON::TypeHotelRoomTypesJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    TypeHotelRoomTypesJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<TypeHotelRoomTypesJSON>, TypeHotelRoomTypesJSON *, bool> generator("Type TypeHotelRoomTypes", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
HotelJSON *HotelJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    HotelJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<HotelJSON>, HotelJSON *, bool> generator("Type Hotel", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
