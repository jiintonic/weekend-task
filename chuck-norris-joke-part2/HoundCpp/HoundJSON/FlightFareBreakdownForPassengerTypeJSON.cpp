/* file "FlightFareBreakdownForPassengerTypeJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "FlightFareBreakdownForPassengerTypeJSON.h"

#include "FlightFareBreakdownForPassengerTypeJSON.h"


FlightFareBreakdownForPassengerTypeJSON::FlightFareBreakdownForPassengerTypeJSON(const FlightFareBreakdownForPassengerTypeJSON &)
  {
    assert(false);
  }

FlightFareBreakdownForPassengerTypeJSON &FlightFareBreakdownForPassengerTypeJSON::operator=(const FlightFareBreakdownForPassengerTypeJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void FlightFareBreakdownForPassengerTypeJSON::fromJSONPassengerTypeWithCount(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    FlightPassengerTypeCountJSON *convert_classy = FlightPassengerTypeCountJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setPassengerTypeWithCount(convert_classy);
    convert_classy->remove_reference();
  }

void FlightFareBreakdownForPassengerTypeJSON::fromJSONTotalFare(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field TotalFare of FlightFareBreakdownForPassengerTypeJSON is not a number.");
          }
      }
    setTotalFareText(the_rational_text);
  }

void FlightFareBreakdownForPassengerTypeJSON::fromJSONBaseFare(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field BaseFare of FlightFareBreakdownForPassengerTypeJSON is not a number.");
          }
      }
    setBaseFareText(the_rational_text);
  }

void FlightFareBreakdownForPassengerTypeJSON::fromJSONTaxesandFees(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field TaxesandFees of FlightFareBreakdownForPassengerTypeJSON is not a number.");
          }
      }
    setTaxesandFeesText(the_rational_text);
  }

void FlightFareBreakdownForPassengerTypeJSON::fromJSONFees(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field Fees of FlightFareBreakdownForPassengerTypeJSON is not a number.");
          }
      }
    setFeesText(the_rational_text);
  }

void FlightFareBreakdownForPassengerTypeJSON::fromJSONDiscount(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field Discount of FlightFareBreakdownForPassengerTypeJSON is not a number.");
          }
      }
    setDiscountText(the_rational_text);
  }

FlightFareBreakdownForPassengerTypeJSON::FlightFareBreakdownForPassengerTypeJSON(void) :
        flagHasPassengerTypeWithCount(false),
        flagHasTotalFare(false),
        flagHasBaseFare(false),
        flagHasTaxesandFees(false),
        flagHasFees(false),
        flagHasDiscount(false)
  {
    extraIndex = create_string_index();
  }

FlightFareBreakdownForPassengerTypeJSON::~FlightFareBreakdownForPassengerTypeJSON(void)
  {
    if (flagHasPassengerTypeWithCount)
      {
        storePassengerTypeWithCount->remove_reference();
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool FlightFareBreakdownForPassengerTypeJSON::hasPassengerTypeWithCount(void) const
  {
    return flagHasPassengerTypeWithCount;
  }

FlightPassengerTypeCountJSON * FlightFareBreakdownForPassengerTypeJSON::getPassengerTypeWithCount(void)
  {
    assert(flagHasPassengerTypeWithCount);
    return storePassengerTypeWithCount;
  }

const FlightPassengerTypeCountJSON * FlightFareBreakdownForPassengerTypeJSON::getPassengerTypeWithCount(void) const
  {
    assert(flagHasPassengerTypeWithCount);
    return storePassengerTypeWithCount;
  }

bool FlightFareBreakdownForPassengerTypeJSON::hasTotalFare(void) const
  {
    return flagHasTotalFare;
  }

double FlightFareBreakdownForPassengerTypeJSON::getTotalFare(void)
  {
    assert(flagHasTotalFare);
    if (textStoreTotalFare != "")
      {
        return atof(textStoreTotalFare.c_str());
      }
    return storeTotalFare;
  }

const double FlightFareBreakdownForPassengerTypeJSON::getTotalFare(void) const
  {
    assert(flagHasTotalFare);
    if (textStoreTotalFare != "")
      {
        return atof(textStoreTotalFare.c_str());
      }
    return storeTotalFare;
  }

std::string FlightFareBreakdownForPassengerTypeJSON::getTotalFareAsText(void) const
  {
    assert(flagHasTotalFare);
    if (textStoreTotalFare == "")
      {
        char buffer[100];
        sprintf(&(buffer[0]), "%g", storeTotalFare);
        return &(buffer[0]);
      }
    else
      {
        return (textStoreTotalFare);
      }
  }

bool FlightFareBreakdownForPassengerTypeJSON::hasBaseFare(void) const
  {
    return flagHasBaseFare;
  }

double FlightFareBreakdownForPassengerTypeJSON::getBaseFare(void)
  {
    assert(flagHasBaseFare);
    if (textStoreBaseFare != "")
      {
        return atof(textStoreBaseFare.c_str());
      }
    return storeBaseFare;
  }

const double FlightFareBreakdownForPassengerTypeJSON::getBaseFare(void) const
  {
    assert(flagHasBaseFare);
    if (textStoreBaseFare != "")
      {
        return atof(textStoreBaseFare.c_str());
      }
    return storeBaseFare;
  }

std::string FlightFareBreakdownForPassengerTypeJSON::getBaseFareAsText(void) const
  {
    assert(flagHasBaseFare);
    if (textStoreBaseFare == "")
      {
        char buffer[100];
        sprintf(&(buffer[0]), "%g", storeBaseFare);
        return &(buffer[0]);
      }
    else
      {
        return (textStoreBaseFare);
      }
  }

bool FlightFareBreakdownForPassengerTypeJSON::hasTaxesandFees(void) const
  {
    return flagHasTaxesandFees;
  }

double FlightFareBreakdownForPassengerTypeJSON::getTaxesandFees(void)
  {
    assert(flagHasTaxesandFees);
    if (textStoreTaxesandFees != "")
      {
        return atof(textStoreTaxesandFees.c_str());
      }
    return storeTaxesandFees;
  }

const double FlightFareBreakdownForPassengerTypeJSON::getTaxesandFees(void) const
  {
    assert(flagHasTaxesandFees);
    if (textStoreTaxesandFees != "")
      {
        return atof(textStoreTaxesandFees.c_str());
      }
    return storeTaxesandFees;
  }

std::string FlightFareBreakdownForPassengerTypeJSON::getTaxesandFeesAsText(void) const
  {
    assert(flagHasTaxesandFees);
    if (textStoreTaxesandFees == "")
      {
        char buffer[100];
        sprintf(&(buffer[0]), "%g", storeTaxesandFees);
        return &(buffer[0]);
      }
    else
      {
        return (textStoreTaxesandFees);
      }
  }

bool FlightFareBreakdownForPassengerTypeJSON::hasFees(void) const
  {
    return flagHasFees;
  }

double FlightFareBreakdownForPassengerTypeJSON::getFees(void)
  {
    assert(flagHasFees);
    if (textStoreFees != "")
      {
        return atof(textStoreFees.c_str());
      }
    return storeFees;
  }

const double FlightFareBreakdownForPassengerTypeJSON::getFees(void) const
  {
    assert(flagHasFees);
    if (textStoreFees != "")
      {
        return atof(textStoreFees.c_str());
      }
    return storeFees;
  }

std::string FlightFareBreakdownForPassengerTypeJSON::getFeesAsText(void) const
  {
    assert(flagHasFees);
    if (textStoreFees == "")
      {
        char buffer[100];
        sprintf(&(buffer[0]), "%g", storeFees);
        return &(buffer[0]);
      }
    else
      {
        return (textStoreFees);
      }
  }

bool FlightFareBreakdownForPassengerTypeJSON::hasDiscount(void) const
  {
    return flagHasDiscount;
  }

double FlightFareBreakdownForPassengerTypeJSON::getDiscount(void)
  {
    assert(flagHasDiscount);
    if (textStoreDiscount != "")
      {
        return atof(textStoreDiscount.c_str());
      }
    return storeDiscount;
  }

const double FlightFareBreakdownForPassengerTypeJSON::getDiscount(void) const
  {
    assert(flagHasDiscount);
    if (textStoreDiscount != "")
      {
        return atof(textStoreDiscount.c_str());
      }
    return storeDiscount;
  }

std::string FlightFareBreakdownForPassengerTypeJSON::getDiscountAsText(void) const
  {
    assert(flagHasDiscount);
    if (textStoreDiscount == "")
      {
        char buffer[100];
        sprintf(&(buffer[0]), "%g", storeDiscount);
        return &(buffer[0]);
      }
    else
      {
        return (textStoreDiscount);
      }
  }

FlightFareBreakdownForPassengerTypeJSON *FlightFareBreakdownForPassengerTypeJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    FlightFareBreakdownForPassengerTypeJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<FlightFareBreakdownForPassengerTypeJSON>, FlightFareBreakdownForPassengerTypeJSON *, bool> generator("Type FlightFareBreakdownForPassengerType", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
