/* file "StockHistoricalQuoteJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "StockHistoricalQuoteJSON.h"

#include "StockHistoricalQuoteJSON.h"


StockHistoricalQuoteJSON::StockHistoricalQuoteJSON(const StockHistoricalQuoteJSON &)
  {
    assert(false);
  }

StockHistoricalQuoteJSON &StockHistoricalQuoteJSON::operator=(const StockHistoricalQuoteJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void StockHistoricalQuoteJSON::fromJSONStartDateTime(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field StartDateTime of StockHistoricalQuoteJSON is not a string.");
    setStartDateTime(std::string(json_string->getData()));
  }

void StockHistoricalQuoteJSON::fromJSONEndDateTime(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field EndDateTime of StockHistoricalQuoteJSON is not a string.");
    setEndDateTime(std::string(json_string->getData()));
  }

void StockHistoricalQuoteJSON::fromJSONOpen(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field Open of StockHistoricalQuoteJSON is not a number.");
          }
      }
    setOpenText(the_rational_text);
  }

void StockHistoricalQuoteJSON::fromJSONClose(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field Close of StockHistoricalQuoteJSON is not a number.");
          }
      }
    setCloseText(the_rational_text);
  }

void StockHistoricalQuoteJSON::fromJSONHigh(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field High of StockHistoricalQuoteJSON is not a number.");
          }
      }
    setHighText(the_rational_text);
  }

void StockHistoricalQuoteJSON::fromJSONLow(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field Low of StockHistoricalQuoteJSON is not a number.");
          }
      }
    setLowText(the_rational_text);
  }

void StockHistoricalQuoteJSON::fromJSONVolume(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field Volume of StockHistoricalQuoteJSON is not a number.");
          }
      }
    setVolumeText(the_rational_text);
  }

void StockHistoricalQuoteJSON::fromJSONSplitRatio(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field SplitRatio of StockHistoricalQuoteJSON is not a number.");
          }
      }
    setSplitRatioText(the_rational_text);
  }

void StockHistoricalQuoteJSON::fromJSONCurrency(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Currency of StockHistoricalQuoteJSON is not a string.");
    setCurrency(std::string(json_string->getData()));
  }

StockHistoricalQuoteJSON::StockHistoricalQuoteJSON(void) :
        flagHasStartDateTime(false),
        flagHasEndDateTime(false),
        flagHasOpen(false),
        flagHasClose(false),
        flagHasHigh(false),
        flagHasLow(false),
        flagHasVolume(false),
        flagHasSplitRatio(false),
        flagHasCurrency(false)
  {
    extraIndex = create_string_index();
  }

StockHistoricalQuoteJSON::~StockHistoricalQuoteJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool StockHistoricalQuoteJSON::hasStartDateTime(void) const
  {
    return flagHasStartDateTime;
  }

std::string StockHistoricalQuoteJSON::getStartDateTime(void)
  {
    assert(flagHasStartDateTime);
    return storeStartDateTime;
  }

const std::string StockHistoricalQuoteJSON::getStartDateTime(void) const
  {
    assert(flagHasStartDateTime);
    return storeStartDateTime;
  }

bool StockHistoricalQuoteJSON::hasEndDateTime(void) const
  {
    return flagHasEndDateTime;
  }

std::string StockHistoricalQuoteJSON::getEndDateTime(void)
  {
    assert(flagHasEndDateTime);
    return storeEndDateTime;
  }

const std::string StockHistoricalQuoteJSON::getEndDateTime(void) const
  {
    assert(flagHasEndDateTime);
    return storeEndDateTime;
  }

bool StockHistoricalQuoteJSON::hasOpen(void) const
  {
    return flagHasOpen;
  }

double StockHistoricalQuoteJSON::getOpen(void)
  {
    assert(flagHasOpen);
    if (textStoreOpen != "")
      {
        return atof(textStoreOpen.c_str());
      }
    return storeOpen;
  }

const double StockHistoricalQuoteJSON::getOpen(void) const
  {
    assert(flagHasOpen);
    if (textStoreOpen != "")
      {
        return atof(textStoreOpen.c_str());
      }
    return storeOpen;
  }

std::string StockHistoricalQuoteJSON::getOpenAsText(void) const
  {
    assert(flagHasOpen);
    if (textStoreOpen == "")
      {
        char buffer[100];
        sprintf(&(buffer[0]), "%g", storeOpen);
        return &(buffer[0]);
      }
    else
      {
        return (textStoreOpen);
      }
  }

bool StockHistoricalQuoteJSON::hasClose(void) const
  {
    return flagHasClose;
  }

double StockHistoricalQuoteJSON::getClose(void)
  {
    assert(flagHasClose);
    if (textStoreClose != "")
      {
        return atof(textStoreClose.c_str());
      }
    return storeClose;
  }

const double StockHistoricalQuoteJSON::getClose(void) const
  {
    assert(flagHasClose);
    if (textStoreClose != "")
      {
        return atof(textStoreClose.c_str());
      }
    return storeClose;
  }

std::string StockHistoricalQuoteJSON::getCloseAsText(void) const
  {
    assert(flagHasClose);
    if (textStoreClose == "")
      {
        char buffer[100];
        sprintf(&(buffer[0]), "%g", storeClose);
        return &(buffer[0]);
      }
    else
      {
        return (textStoreClose);
      }
  }

bool StockHistoricalQuoteJSON::hasHigh(void) const
  {
    return flagHasHigh;
  }

double StockHistoricalQuoteJSON::getHigh(void)
  {
    assert(flagHasHigh);
    if (textStoreHigh != "")
      {
        return atof(textStoreHigh.c_str());
      }
    return storeHigh;
  }

const double StockHistoricalQuoteJSON::getHigh(void) const
  {
    assert(flagHasHigh);
    if (textStoreHigh != "")
      {
        return atof(textStoreHigh.c_str());
      }
    return storeHigh;
  }

std::string StockHistoricalQuoteJSON::getHighAsText(void) const
  {
    assert(flagHasHigh);
    if (textStoreHigh == "")
      {
        char buffer[100];
        sprintf(&(buffer[0]), "%g", storeHigh);
        return &(buffer[0]);
      }
    else
      {
        return (textStoreHigh);
      }
  }

bool StockHistoricalQuoteJSON::hasLow(void) const
  {
    return flagHasLow;
  }

double StockHistoricalQuoteJSON::getLow(void)
  {
    assert(flagHasLow);
    if (textStoreLow != "")
      {
        return atof(textStoreLow.c_str());
      }
    return storeLow;
  }

const double StockHistoricalQuoteJSON::getLow(void) const
  {
    assert(flagHasLow);
    if (textStoreLow != "")
      {
        return atof(textStoreLow.c_str());
      }
    return storeLow;
  }

std::string StockHistoricalQuoteJSON::getLowAsText(void) const
  {
    assert(flagHasLow);
    if (textStoreLow == "")
      {
        char buffer[100];
        sprintf(&(buffer[0]), "%g", storeLow);
        return &(buffer[0]);
      }
    else
      {
        return (textStoreLow);
      }
  }

bool StockHistoricalQuoteJSON::hasVolume(void) const
  {
    return flagHasVolume;
  }

double StockHistoricalQuoteJSON::getVolume(void)
  {
    assert(flagHasVolume);
    if (textStoreVolume != "")
      {
        return atof(textStoreVolume.c_str());
      }
    return storeVolume;
  }

const double StockHistoricalQuoteJSON::getVolume(void) const
  {
    assert(flagHasVolume);
    if (textStoreVolume != "")
      {
        return atof(textStoreVolume.c_str());
      }
    return storeVolume;
  }

std::string StockHistoricalQuoteJSON::getVolumeAsText(void) const
  {
    assert(flagHasVolume);
    if (textStoreVolume == "")
      {
        char buffer[100];
        sprintf(&(buffer[0]), "%g", storeVolume);
        return &(buffer[0]);
      }
    else
      {
        return (textStoreVolume);
      }
  }

bool StockHistoricalQuoteJSON::hasSplitRatio(void) const
  {
    return flagHasSplitRatio;
  }

double StockHistoricalQuoteJSON::getSplitRatio(void)
  {
    assert(flagHasSplitRatio);
    if (textStoreSplitRatio != "")
      {
        return atof(textStoreSplitRatio.c_str());
      }
    return storeSplitRatio;
  }

const double StockHistoricalQuoteJSON::getSplitRatio(void) const
  {
    assert(flagHasSplitRatio);
    if (textStoreSplitRatio != "")
      {
        return atof(textStoreSplitRatio.c_str());
      }
    return storeSplitRatio;
  }

std::string StockHistoricalQuoteJSON::getSplitRatioAsText(void) const
  {
    assert(flagHasSplitRatio);
    if (textStoreSplitRatio == "")
      {
        char buffer[100];
        sprintf(&(buffer[0]), "%g", storeSplitRatio);
        return &(buffer[0]);
      }
    else
      {
        return (textStoreSplitRatio);
      }
  }

bool StockHistoricalQuoteJSON::hasCurrency(void) const
  {
    return flagHasCurrency;
  }

std::string StockHistoricalQuoteJSON::getCurrency(void)
  {
    assert(flagHasCurrency);
    return storeCurrency;
  }

const std::string StockHistoricalQuoteJSON::getCurrency(void) const
  {
    assert(flagHasCurrency);
    return storeCurrency;
  }

RegEx StockHistoricalQuoteJSON::expressionStartDateTime("^[0-9][0-9][0-9][0-9]/[0-1][0-9]/[0-3][0-9]( [0-2][0-9]:[0-9][0-9]:[0-9][0-9])?");
RegEx StockHistoricalQuoteJSON::expressionEndDateTime("^[0-9][0-9][0-9][0-9]/[0-1][0-9]/[0-3][0-9]( [0-2][0-9]:[0-9][0-9]:[0-9][0-9])?");
StockHistoricalQuoteJSON *StockHistoricalQuoteJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    StockHistoricalQuoteJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<StockHistoricalQuoteJSON>, StockHistoricalQuoteJSON *, bool> generator("Type StockHistoricalQuote", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
