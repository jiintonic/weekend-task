/* file "UberTripEstimatesJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "UberTripEstimatesJSON.h"

#include "UberTripEstimatesJSON.h"


UberTripEstimatesJSON::UberTripEstimatesJSON(const UberTripEstimatesJSON &)
  {
    assert(false);
  }

UberTripEstimatesJSON &UberTripEstimatesJSON::operator=(const UberTripEstimatesJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void UberTripEstimatesJSON::fromJSONPriceEstimateRange(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field PriceEstimateRange of UberTripEstimatesJSON is not a string.");
    setPriceEstimateRange(std::string(json_string->getData()));
  }

void UberTripEstimatesJSON::fromJSONLowPriceEstimate(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field LowPriceEstimate of UberTripEstimatesJSON is not a number.");
          }
      }
    setLowPriceEstimateText(the_rational_text);
  }

void UberTripEstimatesJSON::fromJSONHighPriceEstimate(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field HighPriceEstimate of UberTripEstimatesJSON is not a number.");
          }
      }
    setHighPriceEstimateText(the_rational_text);
  }

void UberTripEstimatesJSON::fromJSONCurrency(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Currency of UberTripEstimatesJSON is not a string.");
    setCurrency(std::string(json_string->getData()));
  }

void UberTripEstimatesJSON::fromJSONSurgeMultiplier(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field SurgeMultiplier of UberTripEstimatesJSON is not a number.");
          }
      }
    setSurgeMultiplierText(the_rational_text);
  }

void UberTripEstimatesJSON::fromJSONDurationEstimateInSeconds(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field DurationEstimateInSeconds of UberTripEstimatesJSON is not a number.");
          }
      }
    setDurationEstimateInSecondsText(the_rational_text);
  }

void UberTripEstimatesJSON::fromJSONDistanceEstimateInMiles(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field DistanceEstimateInMiles of UberTripEstimatesJSON is not a number.");
          }
      }
    setDistanceEstimateInMilesText(the_rational_text);
  }

UberTripEstimatesJSON::UberTripEstimatesJSON(void) :
        flagHasPriceEstimateRange(false),
        flagHasLowPriceEstimate(false),
        flagHasHighPriceEstimate(false),
        flagHasCurrency(false),
        flagHasSurgeMultiplier(false),
        flagHasDurationEstimateInSeconds(false),
        flagHasDistanceEstimateInMiles(false)
  {
    extraIndex = create_string_index();
  }

UberTripEstimatesJSON::~UberTripEstimatesJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool UberTripEstimatesJSON::hasPriceEstimateRange(void) const
  {
    return flagHasPriceEstimateRange;
  }

std::string UberTripEstimatesJSON::getPriceEstimateRange(void)
  {
    assert(flagHasPriceEstimateRange);
    return storePriceEstimateRange;
  }

const std::string UberTripEstimatesJSON::getPriceEstimateRange(void) const
  {
    assert(flagHasPriceEstimateRange);
    return storePriceEstimateRange;
  }

bool UberTripEstimatesJSON::hasLowPriceEstimate(void) const
  {
    return flagHasLowPriceEstimate;
  }

double UberTripEstimatesJSON::getLowPriceEstimate(void)
  {
    assert(flagHasLowPriceEstimate);
    if (textStoreLowPriceEstimate != "")
      {
        return atof(textStoreLowPriceEstimate.c_str());
      }
    return storeLowPriceEstimate;
  }

const double UberTripEstimatesJSON::getLowPriceEstimate(void) const
  {
    assert(flagHasLowPriceEstimate);
    if (textStoreLowPriceEstimate != "")
      {
        return atof(textStoreLowPriceEstimate.c_str());
      }
    return storeLowPriceEstimate;
  }

std::string UberTripEstimatesJSON::getLowPriceEstimateAsText(void) const
  {
    assert(flagHasLowPriceEstimate);
    if (textStoreLowPriceEstimate == "")
      {
        char buffer[100];
        sprintf(&(buffer[0]), "%g", storeLowPriceEstimate);
        return &(buffer[0]);
      }
    else
      {
        return (textStoreLowPriceEstimate);
      }
  }

bool UberTripEstimatesJSON::hasHighPriceEstimate(void) const
  {
    return flagHasHighPriceEstimate;
  }

double UberTripEstimatesJSON::getHighPriceEstimate(void)
  {
    assert(flagHasHighPriceEstimate);
    if (textStoreHighPriceEstimate != "")
      {
        return atof(textStoreHighPriceEstimate.c_str());
      }
    return storeHighPriceEstimate;
  }

const double UberTripEstimatesJSON::getHighPriceEstimate(void) const
  {
    assert(flagHasHighPriceEstimate);
    if (textStoreHighPriceEstimate != "")
      {
        return atof(textStoreHighPriceEstimate.c_str());
      }
    return storeHighPriceEstimate;
  }

std::string UberTripEstimatesJSON::getHighPriceEstimateAsText(void) const
  {
    assert(flagHasHighPriceEstimate);
    if (textStoreHighPriceEstimate == "")
      {
        char buffer[100];
        sprintf(&(buffer[0]), "%g", storeHighPriceEstimate);
        return &(buffer[0]);
      }
    else
      {
        return (textStoreHighPriceEstimate);
      }
  }

bool UberTripEstimatesJSON::hasCurrency(void) const
  {
    return flagHasCurrency;
  }

std::string UberTripEstimatesJSON::getCurrency(void)
  {
    assert(flagHasCurrency);
    return storeCurrency;
  }

const std::string UberTripEstimatesJSON::getCurrency(void) const
  {
    assert(flagHasCurrency);
    return storeCurrency;
  }

bool UberTripEstimatesJSON::hasSurgeMultiplier(void) const
  {
    return flagHasSurgeMultiplier;
  }

double UberTripEstimatesJSON::getSurgeMultiplier(void)
  {
    assert(flagHasSurgeMultiplier);
    if (textStoreSurgeMultiplier != "")
      {
        return atof(textStoreSurgeMultiplier.c_str());
      }
    return storeSurgeMultiplier;
  }

const double UberTripEstimatesJSON::getSurgeMultiplier(void) const
  {
    assert(flagHasSurgeMultiplier);
    if (textStoreSurgeMultiplier != "")
      {
        return atof(textStoreSurgeMultiplier.c_str());
      }
    return storeSurgeMultiplier;
  }

std::string UberTripEstimatesJSON::getSurgeMultiplierAsText(void) const
  {
    assert(flagHasSurgeMultiplier);
    if (textStoreSurgeMultiplier == "")
      {
        char buffer[100];
        sprintf(&(buffer[0]), "%g", storeSurgeMultiplier);
        return &(buffer[0]);
      }
    else
      {
        return (textStoreSurgeMultiplier);
      }
  }

bool UberTripEstimatesJSON::hasDurationEstimateInSeconds(void) const
  {
    return flagHasDurationEstimateInSeconds;
  }

double UberTripEstimatesJSON::getDurationEstimateInSeconds(void)
  {
    assert(flagHasDurationEstimateInSeconds);
    if (textStoreDurationEstimateInSeconds != "")
      {
        return atof(textStoreDurationEstimateInSeconds.c_str());
      }
    return storeDurationEstimateInSeconds;
  }

const double UberTripEstimatesJSON::getDurationEstimateInSeconds(void) const
  {
    assert(flagHasDurationEstimateInSeconds);
    if (textStoreDurationEstimateInSeconds != "")
      {
        return atof(textStoreDurationEstimateInSeconds.c_str());
      }
    return storeDurationEstimateInSeconds;
  }

std::string UberTripEstimatesJSON::getDurationEstimateInSecondsAsText(void) const
  {
    assert(flagHasDurationEstimateInSeconds);
    if (textStoreDurationEstimateInSeconds == "")
      {
        char buffer[100];
        sprintf(&(buffer[0]), "%g", storeDurationEstimateInSeconds);
        return &(buffer[0]);
      }
    else
      {
        return (textStoreDurationEstimateInSeconds);
      }
  }

bool UberTripEstimatesJSON::hasDistanceEstimateInMiles(void) const
  {
    return flagHasDistanceEstimateInMiles;
  }

double UberTripEstimatesJSON::getDistanceEstimateInMiles(void)
  {
    assert(flagHasDistanceEstimateInMiles);
    if (textStoreDistanceEstimateInMiles != "")
      {
        return atof(textStoreDistanceEstimateInMiles.c_str());
      }
    return storeDistanceEstimateInMiles;
  }

const double UberTripEstimatesJSON::getDistanceEstimateInMiles(void) const
  {
    assert(flagHasDistanceEstimateInMiles);
    if (textStoreDistanceEstimateInMiles != "")
      {
        return atof(textStoreDistanceEstimateInMiles.c_str());
      }
    return storeDistanceEstimateInMiles;
  }

std::string UberTripEstimatesJSON::getDistanceEstimateInMilesAsText(void) const
  {
    assert(flagHasDistanceEstimateInMiles);
    if (textStoreDistanceEstimateInMiles == "")
      {
        char buffer[100];
        sprintf(&(buffer[0]), "%g", storeDistanceEstimateInMiles);
        return &(buffer[0]);
      }
    else
      {
        return (textStoreDistanceEstimateInMiles);
      }
  }

UberTripEstimatesJSON *UberTripEstimatesJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    UberTripEstimatesJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<UberTripEstimatesJSON>, UberTripEstimatesJSON *, bool> generator("Type UberTripEstimates", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
