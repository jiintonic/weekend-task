/* file "HotelPricingJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "HotelPricingJSON.h"

#include "HotelPricingJSON.h"


HotelPricingJSON::HotelPricingJSON(const HotelPricingJSON &)
  {
    assert(false);
  }

HotelPricingJSON &HotelPricingJSON::operator=(const HotelPricingJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void HotelPricingJSON::fromJSONHotelRateCurrency(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field HotelRateCurrency of HotelPricingJSON is not a string.");
    setHotelRateCurrency(std::string(json_string->getData()));
  }

void HotelPricingJSON::fromJSONHotelRateCurrencySymbol(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field HotelRateCurrencySymbol of HotelPricingJSON is not a string.");
    setHotelRateCurrencySymbol(std::string(json_string->getData()));
  }

void HotelPricingJSON::fromJSONHotelBaseRate(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field HotelBaseRate of HotelPricingJSON is not a number.");
          }
      }
    setHotelBaseRateText(the_rational_text);
  }

void HotelPricingJSON::fromJSONHotelNightlyBaseRate(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field HotelNightlyBaseRate of HotelPricingJSON is not a number.");
          }
      }
    setHotelNightlyBaseRateText(the_rational_text);
  }

void HotelPricingJSON::fromJSONHotelNightlyMinBaseRate(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field HotelNightlyMinBaseRate of HotelPricingJSON is not a number.");
          }
      }
    setHotelNightlyMinBaseRateText(the_rational_text);
  }

void HotelPricingJSON::fromJSONHotelNightlyMaxBaseRate(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field HotelNightlyMaxBaseRate of HotelPricingJSON is not a number.");
          }
      }
    setHotelNightlyMaxBaseRateText(the_rational_text);
  }

void HotelPricingJSON::fromJSONHotelShowPriceRange(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field HotelShowPriceRange of HotelPricingJSON is not true for false.");
          }
      }
    setHotelShowPriceRange(the_bool);
  }

void HotelPricingJSON::fromJSONHotelTaxesAndFeesRate(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field HotelTaxesAndFeesRate of HotelPricingJSON is not a number.");
          }
      }
    setHotelTaxesAndFeesRateText(the_rational_text);
  }

void HotelPricingJSON::fromJSONHotelMandatoryTaxesAndFeesRate(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field HotelMandatoryTaxesAndFeesRate of HotelPricingJSON is not a number.");
          }
      }
    setHotelMandatoryTaxesAndFeesRateText(the_rational_text);
  }

void HotelPricingJSON::fromJSONHotelTotalRate(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field HotelTotalRate of HotelPricingJSON is not a number.");
          }
      }
    setHotelTotalRateText(the_rational_text);
  }

void HotelPricingJSON::fromJSONHotelNightlyTotalRate(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field HotelNightlyTotalRate of HotelPricingJSON is not a number.");
          }
      }
    setHotelNightlyTotalRateText(the_rational_text);
  }

HotelPricingJSON::HotelPricingJSON(void) :
        flagHasHotelRateCurrency(false),
        flagHasHotelRateCurrencySymbol(false),
        flagHasHotelBaseRate(false),
        flagHasHotelNightlyBaseRate(false),
        flagHasHotelNightlyMinBaseRate(false),
        flagHasHotelNightlyMaxBaseRate(false),
        flagHasHotelShowPriceRange(false),
        flagHasHotelTaxesAndFeesRate(false),
        flagHasHotelMandatoryTaxesAndFeesRate(false),
        flagHasHotelTotalRate(false),
        flagHasHotelNightlyTotalRate(false)
  {
  }

HotelPricingJSON::~HotelPricingJSON(void)
  {
  }

bool HotelPricingJSON::hasHotelRateCurrency(void) const
  {
    return flagHasHotelRateCurrency;
  }

std::string HotelPricingJSON::getHotelRateCurrency(void)
  {
    assert(flagHasHotelRateCurrency);
    return storeHotelRateCurrency;
  }

const std::string HotelPricingJSON::getHotelRateCurrency(void) const
  {
    assert(flagHasHotelRateCurrency);
    return storeHotelRateCurrency;
  }

bool HotelPricingJSON::hasHotelRateCurrencySymbol(void) const
  {
    return flagHasHotelRateCurrencySymbol;
  }

std::string HotelPricingJSON::getHotelRateCurrencySymbol(void)
  {
    assert(flagHasHotelRateCurrencySymbol);
    return storeHotelRateCurrencySymbol;
  }

const std::string HotelPricingJSON::getHotelRateCurrencySymbol(void) const
  {
    assert(flagHasHotelRateCurrencySymbol);
    return storeHotelRateCurrencySymbol;
  }

bool HotelPricingJSON::hasHotelBaseRate(void) const
  {
    return flagHasHotelBaseRate;
  }

double HotelPricingJSON::getHotelBaseRate(void)
  {
    assert(flagHasHotelBaseRate);
    if (textStoreHotelBaseRate != "")
      {
        return atof(textStoreHotelBaseRate.c_str());
      }
    return storeHotelBaseRate;
  }

const double HotelPricingJSON::getHotelBaseRate(void) const
  {
    assert(flagHasHotelBaseRate);
    if (textStoreHotelBaseRate != "")
      {
        return atof(textStoreHotelBaseRate.c_str());
      }
    return storeHotelBaseRate;
  }

std::string HotelPricingJSON::getHotelBaseRateAsText(void) const
  {
    assert(flagHasHotelBaseRate);
    if (textStoreHotelBaseRate == "")
      {
        char buffer[100];
        sprintf(&(buffer[0]), "%g", storeHotelBaseRate);
        return &(buffer[0]);
      }
    else
      {
        return (textStoreHotelBaseRate);
      }
  }

bool HotelPricingJSON::hasHotelNightlyBaseRate(void) const
  {
    return flagHasHotelNightlyBaseRate;
  }

double HotelPricingJSON::getHotelNightlyBaseRate(void)
  {
    assert(flagHasHotelNightlyBaseRate);
    if (textStoreHotelNightlyBaseRate != "")
      {
        return atof(textStoreHotelNightlyBaseRate.c_str());
      }
    return storeHotelNightlyBaseRate;
  }

const double HotelPricingJSON::getHotelNightlyBaseRate(void) const
  {
    assert(flagHasHotelNightlyBaseRate);
    if (textStoreHotelNightlyBaseRate != "")
      {
        return atof(textStoreHotelNightlyBaseRate.c_str());
      }
    return storeHotelNightlyBaseRate;
  }

std::string HotelPricingJSON::getHotelNightlyBaseRateAsText(void) const
  {
    assert(flagHasHotelNightlyBaseRate);
    if (textStoreHotelNightlyBaseRate == "")
      {
        char buffer[100];
        sprintf(&(buffer[0]), "%g", storeHotelNightlyBaseRate);
        return &(buffer[0]);
      }
    else
      {
        return (textStoreHotelNightlyBaseRate);
      }
  }

bool HotelPricingJSON::hasHotelNightlyMinBaseRate(void) const
  {
    return flagHasHotelNightlyMinBaseRate;
  }

double HotelPricingJSON::getHotelNightlyMinBaseRate(void)
  {
    assert(flagHasHotelNightlyMinBaseRate);
    if (textStoreHotelNightlyMinBaseRate != "")
      {
        return atof(textStoreHotelNightlyMinBaseRate.c_str());
      }
    return storeHotelNightlyMinBaseRate;
  }

const double HotelPricingJSON::getHotelNightlyMinBaseRate(void) const
  {
    assert(flagHasHotelNightlyMinBaseRate);
    if (textStoreHotelNightlyMinBaseRate != "")
      {
        return atof(textStoreHotelNightlyMinBaseRate.c_str());
      }
    return storeHotelNightlyMinBaseRate;
  }

std::string HotelPricingJSON::getHotelNightlyMinBaseRateAsText(void) const
  {
    assert(flagHasHotelNightlyMinBaseRate);
    if (textStoreHotelNightlyMinBaseRate == "")
      {
        char buffer[100];
        sprintf(&(buffer[0]), "%g", storeHotelNightlyMinBaseRate);
        return &(buffer[0]);
      }
    else
      {
        return (textStoreHotelNightlyMinBaseRate);
      }
  }

bool HotelPricingJSON::hasHotelNightlyMaxBaseRate(void) const
  {
    return flagHasHotelNightlyMaxBaseRate;
  }

double HotelPricingJSON::getHotelNightlyMaxBaseRate(void)
  {
    assert(flagHasHotelNightlyMaxBaseRate);
    if (textStoreHotelNightlyMaxBaseRate != "")
      {
        return atof(textStoreHotelNightlyMaxBaseRate.c_str());
      }
    return storeHotelNightlyMaxBaseRate;
  }

const double HotelPricingJSON::getHotelNightlyMaxBaseRate(void) const
  {
    assert(flagHasHotelNightlyMaxBaseRate);
    if (textStoreHotelNightlyMaxBaseRate != "")
      {
        return atof(textStoreHotelNightlyMaxBaseRate.c_str());
      }
    return storeHotelNightlyMaxBaseRate;
  }

std::string HotelPricingJSON::getHotelNightlyMaxBaseRateAsText(void) const
  {
    assert(flagHasHotelNightlyMaxBaseRate);
    if (textStoreHotelNightlyMaxBaseRate == "")
      {
        char buffer[100];
        sprintf(&(buffer[0]), "%g", storeHotelNightlyMaxBaseRate);
        return &(buffer[0]);
      }
    else
      {
        return (textStoreHotelNightlyMaxBaseRate);
      }
  }

bool HotelPricingJSON::hasHotelShowPriceRange(void) const
  {
    return flagHasHotelShowPriceRange;
  }

bool HotelPricingJSON::getHotelShowPriceRange(void)
  {
    assert(flagHasHotelShowPriceRange);
    return storeHotelShowPriceRange;
  }

const bool HotelPricingJSON::getHotelShowPriceRange(void) const
  {
    assert(flagHasHotelShowPriceRange);
    return storeHotelShowPriceRange;
  }

bool HotelPricingJSON::hasHotelTaxesAndFeesRate(void) const
  {
    return flagHasHotelTaxesAndFeesRate;
  }

double HotelPricingJSON::getHotelTaxesAndFeesRate(void)
  {
    assert(flagHasHotelTaxesAndFeesRate);
    if (textStoreHotelTaxesAndFeesRate != "")
      {
        return atof(textStoreHotelTaxesAndFeesRate.c_str());
      }
    return storeHotelTaxesAndFeesRate;
  }

const double HotelPricingJSON::getHotelTaxesAndFeesRate(void) const
  {
    assert(flagHasHotelTaxesAndFeesRate);
    if (textStoreHotelTaxesAndFeesRate != "")
      {
        return atof(textStoreHotelTaxesAndFeesRate.c_str());
      }
    return storeHotelTaxesAndFeesRate;
  }

std::string HotelPricingJSON::getHotelTaxesAndFeesRateAsText(void) const
  {
    assert(flagHasHotelTaxesAndFeesRate);
    if (textStoreHotelTaxesAndFeesRate == "")
      {
        char buffer[100];
        sprintf(&(buffer[0]), "%g", storeHotelTaxesAndFeesRate);
        return &(buffer[0]);
      }
    else
      {
        return (textStoreHotelTaxesAndFeesRate);
      }
  }

bool HotelPricingJSON::hasHotelMandatoryTaxesAndFeesRate(void) const
  {
    return flagHasHotelMandatoryTaxesAndFeesRate;
  }

double HotelPricingJSON::getHotelMandatoryTaxesAndFeesRate(void)
  {
    assert(flagHasHotelMandatoryTaxesAndFeesRate);
    if (textStoreHotelMandatoryTaxesAndFeesRate != "")
      {
        return atof(textStoreHotelMandatoryTaxesAndFeesRate.c_str());
      }
    return storeHotelMandatoryTaxesAndFeesRate;
  }

const double HotelPricingJSON::getHotelMandatoryTaxesAndFeesRate(void) const
  {
    assert(flagHasHotelMandatoryTaxesAndFeesRate);
    if (textStoreHotelMandatoryTaxesAndFeesRate != "")
      {
        return atof(textStoreHotelMandatoryTaxesAndFeesRate.c_str());
      }
    return storeHotelMandatoryTaxesAndFeesRate;
  }

std::string HotelPricingJSON::getHotelMandatoryTaxesAndFeesRateAsText(void) const
  {
    assert(flagHasHotelMandatoryTaxesAndFeesRate);
    if (textStoreHotelMandatoryTaxesAndFeesRate == "")
      {
        char buffer[100];
        sprintf(&(buffer[0]), "%g", storeHotelMandatoryTaxesAndFeesRate);
        return &(buffer[0]);
      }
    else
      {
        return (textStoreHotelMandatoryTaxesAndFeesRate);
      }
  }

bool HotelPricingJSON::hasHotelTotalRate(void) const
  {
    return flagHasHotelTotalRate;
  }

double HotelPricingJSON::getHotelTotalRate(void)
  {
    assert(flagHasHotelTotalRate);
    if (textStoreHotelTotalRate != "")
      {
        return atof(textStoreHotelTotalRate.c_str());
      }
    return storeHotelTotalRate;
  }

const double HotelPricingJSON::getHotelTotalRate(void) const
  {
    assert(flagHasHotelTotalRate);
    if (textStoreHotelTotalRate != "")
      {
        return atof(textStoreHotelTotalRate.c_str());
      }
    return storeHotelTotalRate;
  }

std::string HotelPricingJSON::getHotelTotalRateAsText(void) const
  {
    assert(flagHasHotelTotalRate);
    if (textStoreHotelTotalRate == "")
      {
        char buffer[100];
        sprintf(&(buffer[0]), "%g", storeHotelTotalRate);
        return &(buffer[0]);
      }
    else
      {
        return (textStoreHotelTotalRate);
      }
  }

bool HotelPricingJSON::hasHotelNightlyTotalRate(void) const
  {
    return flagHasHotelNightlyTotalRate;
  }

double HotelPricingJSON::getHotelNightlyTotalRate(void)
  {
    assert(flagHasHotelNightlyTotalRate);
    if (textStoreHotelNightlyTotalRate != "")
      {
        return atof(textStoreHotelNightlyTotalRate.c_str());
      }
    return storeHotelNightlyTotalRate;
  }

const double HotelPricingJSON::getHotelNightlyTotalRate(void) const
  {
    assert(flagHasHotelNightlyTotalRate);
    if (textStoreHotelNightlyTotalRate != "")
      {
        return atof(textStoreHotelNightlyTotalRate.c_str());
      }
    return storeHotelNightlyTotalRate;
  }

std::string HotelPricingJSON::getHotelNightlyTotalRateAsText(void) const
  {
    assert(flagHasHotelNightlyTotalRate);
    if (textStoreHotelNightlyTotalRate == "")
      {
        char buffer[100];
        sprintf(&(buffer[0]), "%g", storeHotelNightlyTotalRate);
        return &(buffer[0]);
      }
    else
      {
        return (textStoreHotelNightlyTotalRate);
      }
  }

HotelPricingJSON *HotelPricingJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    HotelPricingJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<HotelPricingJSON>, HotelPricingJSON *, bool> generator("Type HotelPricing", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
