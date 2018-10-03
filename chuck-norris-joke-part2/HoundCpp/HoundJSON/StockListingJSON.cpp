/* file "StockListingJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "StockListingJSON.h"

#include "StockListingJSON.h"


StockListingJSON::StockListingJSON(const StockListingJSON &)
  {
    assert(false);
  }

StockListingJSON &StockListingJSON::operator=(const StockListingJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void StockListingJSON::fromJSONListingID(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field ListingID of StockListingJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field ListingID of StockListingJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setListingID(extracted_integer);
  }

void StockListingJSON::fromJSONSymbol(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    StockAttributeValueJSON *convert_classy = StockAttributeValueJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setSymbol(convert_classy);
    convert_classy->remove_reference();
  }

void StockListingJSON::fromJSONShortName(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    StockAttributeValueJSON *convert_classy = StockAttributeValueJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setShortName(convert_classy);
    convert_classy->remove_reference();
  }

void StockListingJSON::fromJSONShortPossessiveName(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    StockAttributeValueJSON *convert_classy = StockAttributeValueJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setShortPossessiveName(convert_classy);
    convert_classy->remove_reference();
  }

void StockListingJSON::fromJSONMediumName(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    StockAttributeValueJSON *convert_classy = StockAttributeValueJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setMediumName(convert_classy);
    convert_classy->remove_reference();
  }

void StockListingJSON::fromJSONLongName(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    StockAttributeValueJSON *convert_classy = StockAttributeValueJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setLongName(convert_classy);
    convert_classy->remove_reference();
  }

void StockListingJSON::fromJSONPrice(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    StockAttributeValueJSON *convert_classy = StockAttributeValueJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setPrice(convert_classy);
    convert_classy->remove_reference();
  }

void StockListingJSON::fromJSONPriceDate(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DateAndOrTimeJSON *convert_classy = DateAndOrTimeJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setPriceDate(convert_classy);
    convert_classy->remove_reference();
  }

void StockListingJSON::fromJSONIntraDayPriceSource(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field IntraDayPriceSource of StockListingJSON is not true for false.");
          }
      }
    setIntraDayPriceSource(the_bool);
  }

void StockListingJSON::fromJSONCurrency(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Currency of StockListingJSON is not a string.");
    setCurrency(std::string(json_string->getData()));
  }

void StockListingJSON::fromJSONIntradayPrices(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field IntradayPrices of StockListingJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< StockHistoricalQuoteJSON * > vector_IntradayPrices1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        StockHistoricalQuoteJSON *convert_classy = StockHistoricalQuoteJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_IntradayPrices1[num1] = convert_classy;
      }
    initIntradayPrices();
    for (size_t num3 = 0; num3 < vector_IntradayPrices1.size(); ++num3)
        appendIntradayPrices(vector_IntradayPrices1[num3]);
    for (size_t num1 = 0; num1 < vector_IntradayPrices1.size(); ++num1)
      {
        vector_IntradayPrices1[num1]->remove_reference();
      }
  }

void StockListingJSON::fromJSONDailyHistoricalPrices(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field DailyHistoricalPrices of StockListingJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< StockHistoricalQuoteJSON * > vector_DailyHistoricalPrices1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        StockHistoricalQuoteJSON *convert_classy = StockHistoricalQuoteJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_DailyHistoricalPrices1[num1] = convert_classy;
      }
    initDailyHistoricalPrices();
    for (size_t num4 = 0; num4 < vector_DailyHistoricalPrices1.size(); ++num4)
        appendDailyHistoricalPrices(vector_DailyHistoricalPrices1[num4]);
    for (size_t num1 = 0; num1 < vector_DailyHistoricalPrices1.size(); ++num1)
      {
        vector_DailyHistoricalPrices1[num1]->remove_reference();
      }
  }

void StockListingJSON::fromJSONPERatio(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    StockAttributeValueJSON *convert_classy = StockAttributeValueJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setPERatio(convert_classy);
    convert_classy->remove_reference();
  }

void StockListingJSON::fromJSONMarketCap(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    StockAttributeValueJSON *convert_classy = StockAttributeValueJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setMarketCap(convert_classy);
    convert_classy->remove_reference();
  }

void StockListingJSON::fromJSONVolume(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    StockAttributeValueJSON *convert_classy = StockAttributeValueJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setVolume(convert_classy);
    convert_classy->remove_reference();
  }

void StockListingJSON::fromJSONValueChange(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    StockAttributeValueJSON *convert_classy = StockAttributeValueJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setValueChange(convert_classy);
    convert_classy->remove_reference();
  }

void StockListingJSON::fromJSONPercentChange(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    StockAttributeValueJSON *convert_classy = StockAttributeValueJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setPercentChange(convert_classy);
    convert_classy->remove_reference();
  }

void StockListingJSON::fromJSONPreviousCloseDate(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DateAndOrTimeJSON *convert_classy = DateAndOrTimeJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setPreviousCloseDate(convert_classy);
    convert_classy->remove_reference();
  }

void StockListingJSON::fromJSONOpen(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field Open of StockListingJSON is not a number.");
          }
      }
    setOpenText(the_rational_text);
  }

void StockListingJSON::fromJSONClose(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field Close of StockListingJSON is not a number.");
          }
      }
    setCloseText(the_rational_text);
  }

void StockListingJSON::fromJSONChartImageURL1D(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field ChartImageURL1D of StockListingJSON is not a string.");
    setChartImageURL1D(std::string(json_string->getData()));
  }

void StockListingJSON::fromJSONChartImageURL5D(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field ChartImageURL5D of StockListingJSON is not a string.");
    setChartImageURL5D(std::string(json_string->getData()));
  }

void StockListingJSON::fromJSONChartImageURL3M(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field ChartImageURL3M of StockListingJSON is not a string.");
    setChartImageURL3M(std::string(json_string->getData()));
  }

void StockListingJSON::fromJSONChartImageURL6M(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field ChartImageURL6M of StockListingJSON is not a string.");
    setChartImageURL6M(std::string(json_string->getData()));
  }

void StockListingJSON::fromJSONChartImageURL1Y(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field ChartImageURL1Y of StockListingJSON is not a string.");
    setChartImageURL1Y(std::string(json_string->getData()));
  }

void StockListingJSON::fromJSONExternalURL(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field ExternalURL of StockListingJSON is not a string.");
    setExternalURL(std::string(json_string->getData()));
  }

void StockListingJSON::fromJSONStockExchangeShortName(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    StockAttributeValueJSON *convert_classy = StockAttributeValueJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setStockExchangeShortName(convert_classy);
    convert_classy->remove_reference();
  }

void StockListingJSON::fromJSONStockExchangeLongName(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    StockAttributeValueJSON *convert_classy = StockAttributeValueJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setStockExchangeLongName(convert_classy);
    convert_classy->remove_reference();
  }

void StockListingJSON::fromJSONStockExchangeSymbol(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    StockAttributeValueJSON *convert_classy = StockAttributeValueJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setStockExchangeSymbol(convert_classy);
    convert_classy->remove_reference();
  }

void StockListingJSON::fromJSONStockExchangeUTCOffset(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field StockExchangeUTCOffset of StockListingJSON is not a number.");
          }
      }
    setStockExchangeUTCOffsetText(the_rational_text);
  }

void StockListingJSON::fromJSONNumShares(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field NumShares of StockListingJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field NumShares of StockListingJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setNumShares(extracted_integer);
  }

void StockListingJSON::fromJSONDateRange(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DateTimeRangeSpecJSON *convert_classy = DateTimeRangeSpecJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setDateRange(convert_classy);
    convert_classy->remove_reference();
  }

void StockListingJSON::fromJSONImplicitDateRange(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field ImplicitDateRange of StockListingJSON is not true for false.");
          }
      }
    setImplicitDateRange(the_bool);
  }

void StockListingJSON::fromJSONHigh(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field High of StockListingJSON is not a number.");
          }
      }
    setHighText(the_rational_text);
  }

void StockListingJSON::fromJSONLow(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field Low of StockListingJSON is not a number.");
          }
      }
    setLowText(the_rational_text);
  }

void StockListingJSON::fromJSONBasePrice(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field BasePrice of StockListingJSON is not a string.");
    setBasePrice(std::string(json_string->getData()));
  }

void StockListingJSON::fromJSONBasePriceUpper(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field BasePriceUpper of StockListingJSON is not a string.");
    setBasePriceUpper(std::string(json_string->getData()));
  }

void StockListingJSON::fromJSONBasePriceLower(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field BasePriceLower of StockListingJSON is not a string.");
    setBasePriceLower(std::string(json_string->getData()));
  }

void StockListingJSON::fromJSONTradingValue(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field TradingValue of StockListingJSON is not a string.");
    setTradingValue(std::string(json_string->getData()));
  }

void StockListingJSON::fromJSONVwap(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Vwap of StockListingJSON is not a string.");
    setVwap(std::string(json_string->getData()));
  }

void StockListingJSON::fromJSONMarketcap(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Marketcap of StockListingJSON is not a string.");
    setMarketcap(std::string(json_string->getData()));
  }

void StockListingJSON::fromJSONTradingUnit(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field TradingUnit of StockListingJSON is not a string.");
    setTradingUnit(std::string(json_string->getData()));
  }

void StockListingJSON::fromJSONCalcSharesOutstanding(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field CalcSharesOutstanding of StockListingJSON is not a string.");
    setCalcSharesOutstanding(std::string(json_string->getData()));
  }

void StockListingJSON::fromJSONTickSizeFlag(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field TickSizeFlag of StockListingJSON is not a string.");
    setTickSizeFlag(std::string(json_string->getData()));
  }

void StockListingJSON::fromJSONPrincipalMarket(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field PrincipalMarket of StockListingJSON is not a string.");
    setPrincipalMarket(std::string(json_string->getData()));
  }

void StockListingJSON::fromJSONIndustryName(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field IndustryName of StockListingJSON is not a string.");
    setIndustryName(std::string(json_string->getData()));
  }

void StockListingJSON::fromJSONNikkeiIndustryName(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field NikkeiIndustryName of StockListingJSON is not a string.");
    setNikkeiIndustryName(std::string(json_string->getData()));
  }

void StockListingJSON::fromJSONNikkeiFlag(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field NikkeiFlag of StockListingJSON is not a string.");
    setNikkeiFlag(std::string(json_string->getData()));
  }

void StockListingJSON::fromJSONTopix500Flag(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Topix500Flag of StockListingJSON is not a string.");
    setTopix500Flag(std::string(json_string->getData()));
  }

void StockListingJSON::fromJSONSs1Price(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Ss1Price of StockListingJSON is not a string.");
    setSs1Price(std::string(json_string->getData()));
  }

void StockListingJSON::fromJSONSs1PriceOpen(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Ss1PriceOpen of StockListingJSON is not a string.");
    setSs1PriceOpen(std::string(json_string->getData()));
  }

void StockListingJSON::fromJSONSs1PriceHigh(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Ss1PriceHigh of StockListingJSON is not a string.");
    setSs1PriceHigh(std::string(json_string->getData()));
  }

void StockListingJSON::fromJSONSs1PriceLow(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Ss1PriceLow of StockListingJSON is not a string.");
    setSs1PriceLow(std::string(json_string->getData()));
  }

void StockListingJSON::fromJSONSs1PriceChg(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Ss1PriceChg of StockListingJSON is not a string.");
    setSs1PriceChg(std::string(json_string->getData()));
  }

void StockListingJSON::fromJSONSs1PricePchg(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Ss1PricePchg of StockListingJSON is not a string.");
    setSs1PricePchg(std::string(json_string->getData()));
  }

void StockListingJSON::fromJSONSs1Volume(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Ss1Volume of StockListingJSON is not a string.");
    setSs1Volume(std::string(json_string->getData()));
  }

void StockListingJSON::fromJSONSs1Vwap(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Ss1Vwap of StockListingJSON is not a string.");
    setSs1Vwap(std::string(json_string->getData()));
  }

void StockListingJSON::fromJSONSs2Price(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Ss2Price of StockListingJSON is not a string.");
    setSs2Price(std::string(json_string->getData()));
  }

void StockListingJSON::fromJSONSs2PriceOpen(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Ss2PriceOpen of StockListingJSON is not a string.");
    setSs2PriceOpen(std::string(json_string->getData()));
  }

void StockListingJSON::fromJSONSs2PriceHigh(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Ss2PriceHigh of StockListingJSON is not a string.");
    setSs2PriceHigh(std::string(json_string->getData()));
  }

void StockListingJSON::fromJSONSs2PriceLow(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Ss2PriceLow of StockListingJSON is not a string.");
    setSs2PriceLow(std::string(json_string->getData()));
  }

void StockListingJSON::fromJSONSs2PriceChg(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Ss2PriceChg of StockListingJSON is not a string.");
    setSs2PriceChg(std::string(json_string->getData()));
  }

void StockListingJSON::fromJSONSs2PricePchg(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Ss2PricePchg of StockListingJSON is not a string.");
    setSs2PricePchg(std::string(json_string->getData()));
  }

void StockListingJSON::fromJSONSs2Volume(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Ss2Volume of StockListingJSON is not a string.");
    setSs2Volume(std::string(json_string->getData()));
  }

void StockListingJSON::fromJSONSs2Vwap(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Ss2Vwap of StockListingJSON is not a string.");
    setSs2Vwap(std::string(json_string->getData()));
  }

void StockListingJSON::fromJSONCorpPer(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field CorpPer of StockListingJSON is not a string.");
    setCorpPer(std::string(json_string->getData()));
  }

void StockListingJSON::fromJSONBeta90Topix(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Beta90Topix of StockListingJSON is not a string.");
    setBeta90Topix(std::string(json_string->getData()));
  }

void StockListingJSON::fromJSONBeta180Topix(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Beta180Topix of StockListingJSON is not a string.");
    setBeta180Topix(std::string(json_string->getData()));
  }

void StockListingJSON::fromJSONBeta90Nikkei225(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Beta90Nikkei225 of StockListingJSON is not a string.");
    setBeta90Nikkei225(std::string(json_string->getData()));
  }

void StockListingJSON::fromJSONBeta180Nikkei225(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Beta180Nikkei225 of StockListingJSON is not a string.");
    setBeta180Nikkei225(std::string(json_string->getData()));
  }

void StockListingJSON::fromJSONEarningScheduledDate(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field EarningScheduledDate of StockListingJSON is not a string.");
    setEarningScheduledDate(std::string(json_string->getData()));
  }

void StockListingJSON::fromJSONEarningFullyearDate(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field EarningFullyearDate of StockListingJSON is not a string.");
    setEarningFullyearDate(std::string(json_string->getData()));
  }

void StockListingJSON::fromJSONDisplayDividendDate(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field DisplayDividendDate of StockListingJSON is not a string.");
    setDisplayDividendDate(std::string(json_string->getData()));
  }

void StockListingJSON::fromJSONExDividendDate(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field ExDividendDate of StockListingJSON is not a string.");
    setExDividendDate(std::string(json_string->getData()));
  }

void StockListingJSON::fromJSONCoSettleFyEnded(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field CoSettleFyEnded of StockListingJSON is not a string.");
    setCoSettleFyEnded(std::string(json_string->getData()));
  }

void StockListingJSON::fromJSONCoSettleRoe(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field CoSettleRoe of StockListingJSON is not a string.");
    setCoSettleRoe(std::string(json_string->getData()));
  }

void StockListingJSON::fromJSONCoSettleDps(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field CoSettleDps of StockListingJSON is not a string.");
    setCoSettleDps(std::string(json_string->getData()));
  }

void StockListingJSON::fromJSONCoEstFyEnded(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field CoEstFyEnded of StockListingJSON is not a string.");
    setCoEstFyEnded(std::string(json_string->getData()));
  }

void StockListingJSON::fromJSONCoEstDps(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field CoEstDps of StockListingJSON is not a string.");
    setCoEstDps(std::string(json_string->getData()));
  }

StockListingJSON::StockListingJSON(void) :
        flagHasListingID(false),
        flagHasSymbol(false),
        flagHasShortName(false),
        flagHasShortPossessiveName(false),
        flagHasMediumName(false),
        flagHasLongName(false),
        flagHasPrice(false),
        flagHasPriceDate(false),
        flagHasIntraDayPriceSource(false),
        flagHasCurrency(false),
        flagHasIntradayPrices(false),
        flagHasDailyHistoricalPrices(false),
        flagHasPERatio(false),
        flagHasMarketCap(false),
        flagHasVolume(false),
        flagHasValueChange(false),
        flagHasPercentChange(false),
        flagHasPreviousCloseDate(false),
        flagHasOpen(false),
        flagHasClose(false),
        flagHasChartImageURL1D(false),
        flagHasChartImageURL5D(false),
        flagHasChartImageURL3M(false),
        flagHasChartImageURL6M(false),
        flagHasChartImageURL1Y(false),
        flagHasExternalURL(false),
        flagHasStockExchangeShortName(false),
        flagHasStockExchangeLongName(false),
        flagHasStockExchangeSymbol(false),
        flagHasStockExchangeUTCOffset(false),
        flagHasNumShares(false),
        flagHasDateRange(false),
        flagHasImplicitDateRange(false),
        flagHasHigh(false),
        flagHasLow(false),
        flagHasBasePrice(false),
        flagHasBasePriceUpper(false),
        flagHasBasePriceLower(false),
        flagHasTradingValue(false),
        flagHasVwap(false),
        flagHasMarketcap(false),
        flagHasTradingUnit(false),
        flagHasCalcSharesOutstanding(false),
        flagHasTickSizeFlag(false),
        flagHasPrincipalMarket(false),
        flagHasIndustryName(false),
        flagHasNikkeiIndustryName(false),
        flagHasNikkeiFlag(false),
        flagHasTopix500Flag(false),
        flagHasSs1Price(false),
        flagHasSs1PriceOpen(false),
        flagHasSs1PriceHigh(false),
        flagHasSs1PriceLow(false),
        flagHasSs1PriceChg(false),
        flagHasSs1PricePchg(false),
        flagHasSs1Volume(false),
        flagHasSs1Vwap(false),
        flagHasSs2Price(false),
        flagHasSs2PriceOpen(false),
        flagHasSs2PriceHigh(false),
        flagHasSs2PriceLow(false),
        flagHasSs2PriceChg(false),
        flagHasSs2PricePchg(false),
        flagHasSs2Volume(false),
        flagHasSs2Vwap(false),
        flagHasCorpPer(false),
        flagHasBeta90Topix(false),
        flagHasBeta180Topix(false),
        flagHasBeta90Nikkei225(false),
        flagHasBeta180Nikkei225(false),
        flagHasEarningScheduledDate(false),
        flagHasEarningFullyearDate(false),
        flagHasDisplayDividendDate(false),
        flagHasExDividendDate(false),
        flagHasCoSettleFyEnded(false),
        flagHasCoSettleRoe(false),
        flagHasCoSettleDps(false),
        flagHasCoEstFyEnded(false),
        flagHasCoEstDps(false)
  {
    extraIndex = create_string_index();
  }

StockListingJSON::~StockListingJSON(void)
  {
    if (flagHasSymbol)
      {
        storeSymbol->remove_reference();
      }
    if (flagHasShortName)
      {
        storeShortName->remove_reference();
      }
    if (flagHasShortPossessiveName)
      {
        storeShortPossessiveName->remove_reference();
      }
    if (flagHasMediumName)
      {
        storeMediumName->remove_reference();
      }
    if (flagHasLongName)
      {
        storeLongName->remove_reference();
      }
    if (flagHasPrice)
      {
        storePrice->remove_reference();
      }
    if (flagHasPriceDate)
      {
        storePriceDate->remove_reference();
      }
    if (flagHasIntradayPrices)
      {
        for (size_t num7 = 0; num7 < storeIntradayPrices.size(); ++num7)
          {
            storeIntradayPrices[num7]->remove_reference();
          }
      }
    if (flagHasDailyHistoricalPrices)
      {
        for (size_t num8 = 0; num8 < storeDailyHistoricalPrices.size(); ++num8)
          {
            storeDailyHistoricalPrices[num8]->remove_reference();
          }
      }
    if (flagHasPERatio)
      {
        storePERatio->remove_reference();
      }
    if (flagHasMarketCap)
      {
        storeMarketCap->remove_reference();
      }
    if (flagHasVolume)
      {
        storeVolume->remove_reference();
      }
    if (flagHasValueChange)
      {
        storeValueChange->remove_reference();
      }
    if (flagHasPercentChange)
      {
        storePercentChange->remove_reference();
      }
    if (flagHasPreviousCloseDate)
      {
        storePreviousCloseDate->remove_reference();
      }
    if (flagHasStockExchangeShortName)
      {
        storeStockExchangeShortName->remove_reference();
      }
    if (flagHasStockExchangeLongName)
      {
        storeStockExchangeLongName->remove_reference();
      }
    if (flagHasStockExchangeSymbol)
      {
        storeStockExchangeSymbol->remove_reference();
      }
    if (flagHasDateRange)
      {
        storeDateRange->remove_reference();
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool StockListingJSON::hasListingID(void) const
  {
    return flagHasListingID;
  }

OInteger StockListingJSON::getListingID(void)
  {
    assert(flagHasListingID);
    return storeListingID;
  }

const OInteger StockListingJSON::getListingID(void) const
  {
    assert(flagHasListingID);
    return storeListingID;
  }

bool StockListingJSON::hasSymbol(void) const
  {
    return flagHasSymbol;
  }

StockAttributeValueJSON * StockListingJSON::getSymbol(void)
  {
    assert(flagHasSymbol);
    return storeSymbol;
  }

const StockAttributeValueJSON * StockListingJSON::getSymbol(void) const
  {
    assert(flagHasSymbol);
    return storeSymbol;
  }

bool StockListingJSON::hasShortName(void) const
  {
    return flagHasShortName;
  }

StockAttributeValueJSON * StockListingJSON::getShortName(void)
  {
    assert(flagHasShortName);
    return storeShortName;
  }

const StockAttributeValueJSON * StockListingJSON::getShortName(void) const
  {
    assert(flagHasShortName);
    return storeShortName;
  }

bool StockListingJSON::hasShortPossessiveName(void) const
  {
    return flagHasShortPossessiveName;
  }

StockAttributeValueJSON * StockListingJSON::getShortPossessiveName(void)
  {
    assert(flagHasShortPossessiveName);
    return storeShortPossessiveName;
  }

const StockAttributeValueJSON * StockListingJSON::getShortPossessiveName(void) const
  {
    assert(flagHasShortPossessiveName);
    return storeShortPossessiveName;
  }

bool StockListingJSON::hasMediumName(void) const
  {
    return flagHasMediumName;
  }

StockAttributeValueJSON * StockListingJSON::getMediumName(void)
  {
    assert(flagHasMediumName);
    return storeMediumName;
  }

const StockAttributeValueJSON * StockListingJSON::getMediumName(void) const
  {
    assert(flagHasMediumName);
    return storeMediumName;
  }

bool StockListingJSON::hasLongName(void) const
  {
    return flagHasLongName;
  }

StockAttributeValueJSON * StockListingJSON::getLongName(void)
  {
    assert(flagHasLongName);
    return storeLongName;
  }

const StockAttributeValueJSON * StockListingJSON::getLongName(void) const
  {
    assert(flagHasLongName);
    return storeLongName;
  }

bool StockListingJSON::hasPrice(void) const
  {
    return flagHasPrice;
  }

StockAttributeValueJSON * StockListingJSON::getPrice(void)
  {
    assert(flagHasPrice);
    return storePrice;
  }

const StockAttributeValueJSON * StockListingJSON::getPrice(void) const
  {
    assert(flagHasPrice);
    return storePrice;
  }

bool StockListingJSON::hasPriceDate(void) const
  {
    return flagHasPriceDate;
  }

DateAndOrTimeJSON * StockListingJSON::getPriceDate(void)
  {
    assert(flagHasPriceDate);
    return storePriceDate;
  }

const DateAndOrTimeJSON * StockListingJSON::getPriceDate(void) const
  {
    assert(flagHasPriceDate);
    return storePriceDate;
  }

bool StockListingJSON::hasIntraDayPriceSource(void) const
  {
    return flagHasIntraDayPriceSource;
  }

bool StockListingJSON::getIntraDayPriceSource(void)
  {
    assert(flagHasIntraDayPriceSource);
    return storeIntraDayPriceSource;
  }

const bool StockListingJSON::getIntraDayPriceSource(void) const
  {
    assert(flagHasIntraDayPriceSource);
    return storeIntraDayPriceSource;
  }

bool StockListingJSON::hasCurrency(void) const
  {
    return flagHasCurrency;
  }

std::string StockListingJSON::getCurrency(void)
  {
    assert(flagHasCurrency);
    return storeCurrency;
  }

const std::string StockListingJSON::getCurrency(void) const
  {
    assert(flagHasCurrency);
    return storeCurrency;
  }

bool StockListingJSON::hasIntradayPrices(void) const
  {
    return flagHasIntradayPrices;
  }

size_t StockListingJSON::countOfIntradayPrices(void) const
  {
    assert(flagHasIntradayPrices);
    return storeIntradayPrices.size();
  }

StockHistoricalQuoteJSON * StockListingJSON::elementOfIntradayPrices(size_t element_num)
  {
    assert(flagHasIntradayPrices);
    return storeIntradayPrices[element_num];
  }

const StockHistoricalQuoteJSON * StockListingJSON::elementOfIntradayPrices(size_t element_num) const
  {
    assert(flagHasIntradayPrices);
    return storeIntradayPrices[element_num];
  }

std::vector< StockHistoricalQuoteJSON * > StockListingJSON::getIntradayPrices(void)
  {
    assert(flagHasIntradayPrices);
    return storeIntradayPrices;
  }

const std::vector< StockHistoricalQuoteJSON * > StockListingJSON::getIntradayPrices(void) const
  {
    assert(flagHasIntradayPrices);
    return storeIntradayPrices;
  }

bool StockListingJSON::hasDailyHistoricalPrices(void) const
  {
    return flagHasDailyHistoricalPrices;
  }

size_t StockListingJSON::countOfDailyHistoricalPrices(void) const
  {
    assert(flagHasDailyHistoricalPrices);
    return storeDailyHistoricalPrices.size();
  }

StockHistoricalQuoteJSON * StockListingJSON::elementOfDailyHistoricalPrices(size_t element_num)
  {
    assert(flagHasDailyHistoricalPrices);
    return storeDailyHistoricalPrices[element_num];
  }

const StockHistoricalQuoteJSON * StockListingJSON::elementOfDailyHistoricalPrices(size_t element_num) const
  {
    assert(flagHasDailyHistoricalPrices);
    return storeDailyHistoricalPrices[element_num];
  }

std::vector< StockHistoricalQuoteJSON * > StockListingJSON::getDailyHistoricalPrices(void)
  {
    assert(flagHasDailyHistoricalPrices);
    return storeDailyHistoricalPrices;
  }

const std::vector< StockHistoricalQuoteJSON * > StockListingJSON::getDailyHistoricalPrices(void) const
  {
    assert(flagHasDailyHistoricalPrices);
    return storeDailyHistoricalPrices;
  }

bool StockListingJSON::hasPERatio(void) const
  {
    return flagHasPERatio;
  }

StockAttributeValueJSON * StockListingJSON::getPERatio(void)
  {
    assert(flagHasPERatio);
    return storePERatio;
  }

const StockAttributeValueJSON * StockListingJSON::getPERatio(void) const
  {
    assert(flagHasPERatio);
    return storePERatio;
  }

bool StockListingJSON::hasMarketCap(void) const
  {
    return flagHasMarketCap;
  }

StockAttributeValueJSON * StockListingJSON::getMarketCap(void)
  {
    assert(flagHasMarketCap);
    return storeMarketCap;
  }

const StockAttributeValueJSON * StockListingJSON::getMarketCap(void) const
  {
    assert(flagHasMarketCap);
    return storeMarketCap;
  }

bool StockListingJSON::hasVolume(void) const
  {
    return flagHasVolume;
  }

StockAttributeValueJSON * StockListingJSON::getVolume(void)
  {
    assert(flagHasVolume);
    return storeVolume;
  }

const StockAttributeValueJSON * StockListingJSON::getVolume(void) const
  {
    assert(flagHasVolume);
    return storeVolume;
  }

bool StockListingJSON::hasValueChange(void) const
  {
    return flagHasValueChange;
  }

StockAttributeValueJSON * StockListingJSON::getValueChange(void)
  {
    assert(flagHasValueChange);
    return storeValueChange;
  }

const StockAttributeValueJSON * StockListingJSON::getValueChange(void) const
  {
    assert(flagHasValueChange);
    return storeValueChange;
  }

bool StockListingJSON::hasPercentChange(void) const
  {
    return flagHasPercentChange;
  }

StockAttributeValueJSON * StockListingJSON::getPercentChange(void)
  {
    assert(flagHasPercentChange);
    return storePercentChange;
  }

const StockAttributeValueJSON * StockListingJSON::getPercentChange(void) const
  {
    assert(flagHasPercentChange);
    return storePercentChange;
  }

bool StockListingJSON::hasPreviousCloseDate(void) const
  {
    return flagHasPreviousCloseDate;
  }

DateAndOrTimeJSON * StockListingJSON::getPreviousCloseDate(void)
  {
    assert(flagHasPreviousCloseDate);
    return storePreviousCloseDate;
  }

const DateAndOrTimeJSON * StockListingJSON::getPreviousCloseDate(void) const
  {
    assert(flagHasPreviousCloseDate);
    return storePreviousCloseDate;
  }

bool StockListingJSON::hasOpen(void) const
  {
    return flagHasOpen;
  }

double StockListingJSON::getOpen(void)
  {
    assert(flagHasOpen);
    if (textStoreOpen != "")
      {
        return atof(textStoreOpen.c_str());
      }
    return storeOpen;
  }

const double StockListingJSON::getOpen(void) const
  {
    assert(flagHasOpen);
    if (textStoreOpen != "")
      {
        return atof(textStoreOpen.c_str());
      }
    return storeOpen;
  }

std::string StockListingJSON::getOpenAsText(void) const
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

bool StockListingJSON::hasClose(void) const
  {
    return flagHasClose;
  }

double StockListingJSON::getClose(void)
  {
    assert(flagHasClose);
    if (textStoreClose != "")
      {
        return atof(textStoreClose.c_str());
      }
    return storeClose;
  }

const double StockListingJSON::getClose(void) const
  {
    assert(flagHasClose);
    if (textStoreClose != "")
      {
        return atof(textStoreClose.c_str());
      }
    return storeClose;
  }

std::string StockListingJSON::getCloseAsText(void) const
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

bool StockListingJSON::hasChartImageURL1D(void) const
  {
    return flagHasChartImageURL1D;
  }

std::string StockListingJSON::getChartImageURL1D(void)
  {
    assert(flagHasChartImageURL1D);
    return storeChartImageURL1D;
  }

const std::string StockListingJSON::getChartImageURL1D(void) const
  {
    assert(flagHasChartImageURL1D);
    return storeChartImageURL1D;
  }

bool StockListingJSON::hasChartImageURL5D(void) const
  {
    return flagHasChartImageURL5D;
  }

std::string StockListingJSON::getChartImageURL5D(void)
  {
    assert(flagHasChartImageURL5D);
    return storeChartImageURL5D;
  }

const std::string StockListingJSON::getChartImageURL5D(void) const
  {
    assert(flagHasChartImageURL5D);
    return storeChartImageURL5D;
  }

bool StockListingJSON::hasChartImageURL3M(void) const
  {
    return flagHasChartImageURL3M;
  }

std::string StockListingJSON::getChartImageURL3M(void)
  {
    assert(flagHasChartImageURL3M);
    return storeChartImageURL3M;
  }

const std::string StockListingJSON::getChartImageURL3M(void) const
  {
    assert(flagHasChartImageURL3M);
    return storeChartImageURL3M;
  }

bool StockListingJSON::hasChartImageURL6M(void) const
  {
    return flagHasChartImageURL6M;
  }

std::string StockListingJSON::getChartImageURL6M(void)
  {
    assert(flagHasChartImageURL6M);
    return storeChartImageURL6M;
  }

const std::string StockListingJSON::getChartImageURL6M(void) const
  {
    assert(flagHasChartImageURL6M);
    return storeChartImageURL6M;
  }

bool StockListingJSON::hasChartImageURL1Y(void) const
  {
    return flagHasChartImageURL1Y;
  }

std::string StockListingJSON::getChartImageURL1Y(void)
  {
    assert(flagHasChartImageURL1Y);
    return storeChartImageURL1Y;
  }

const std::string StockListingJSON::getChartImageURL1Y(void) const
  {
    assert(flagHasChartImageURL1Y);
    return storeChartImageURL1Y;
  }

bool StockListingJSON::hasExternalURL(void) const
  {
    return flagHasExternalURL;
  }

std::string StockListingJSON::getExternalURL(void)
  {
    assert(flagHasExternalURL);
    return storeExternalURL;
  }

const std::string StockListingJSON::getExternalURL(void) const
  {
    assert(flagHasExternalURL);
    return storeExternalURL;
  }

bool StockListingJSON::hasStockExchangeShortName(void) const
  {
    return flagHasStockExchangeShortName;
  }

StockAttributeValueJSON * StockListingJSON::getStockExchangeShortName(void)
  {
    assert(flagHasStockExchangeShortName);
    return storeStockExchangeShortName;
  }

const StockAttributeValueJSON * StockListingJSON::getStockExchangeShortName(void) const
  {
    assert(flagHasStockExchangeShortName);
    return storeStockExchangeShortName;
  }

bool StockListingJSON::hasStockExchangeLongName(void) const
  {
    return flagHasStockExchangeLongName;
  }

StockAttributeValueJSON * StockListingJSON::getStockExchangeLongName(void)
  {
    assert(flagHasStockExchangeLongName);
    return storeStockExchangeLongName;
  }

const StockAttributeValueJSON * StockListingJSON::getStockExchangeLongName(void) const
  {
    assert(flagHasStockExchangeLongName);
    return storeStockExchangeLongName;
  }

bool StockListingJSON::hasStockExchangeSymbol(void) const
  {
    return flagHasStockExchangeSymbol;
  }

StockAttributeValueJSON * StockListingJSON::getStockExchangeSymbol(void)
  {
    assert(flagHasStockExchangeSymbol);
    return storeStockExchangeSymbol;
  }

const StockAttributeValueJSON * StockListingJSON::getStockExchangeSymbol(void) const
  {
    assert(flagHasStockExchangeSymbol);
    return storeStockExchangeSymbol;
  }

bool StockListingJSON::hasStockExchangeUTCOffset(void) const
  {
    return flagHasStockExchangeUTCOffset;
  }

double StockListingJSON::getStockExchangeUTCOffset(void)
  {
    assert(flagHasStockExchangeUTCOffset);
    if (textStoreStockExchangeUTCOffset != "")
      {
        return atof(textStoreStockExchangeUTCOffset.c_str());
      }
    return storeStockExchangeUTCOffset;
  }

const double StockListingJSON::getStockExchangeUTCOffset(void) const
  {
    assert(flagHasStockExchangeUTCOffset);
    if (textStoreStockExchangeUTCOffset != "")
      {
        return atof(textStoreStockExchangeUTCOffset.c_str());
      }
    return storeStockExchangeUTCOffset;
  }

std::string StockListingJSON::getStockExchangeUTCOffsetAsText(void) const
  {
    assert(flagHasStockExchangeUTCOffset);
    if (textStoreStockExchangeUTCOffset == "")
      {
        char buffer[100];
        sprintf(&(buffer[0]), "%g", storeStockExchangeUTCOffset);
        return &(buffer[0]);
      }
    else
      {
        return (textStoreStockExchangeUTCOffset);
      }
  }

bool StockListingJSON::hasNumShares(void) const
  {
    return flagHasNumShares;
  }

OInteger StockListingJSON::getNumShares(void)
  {
    assert(flagHasNumShares);
    return storeNumShares;
  }

const OInteger StockListingJSON::getNumShares(void) const
  {
    assert(flagHasNumShares);
    return storeNumShares;
  }

bool StockListingJSON::hasDateRange(void) const
  {
    return flagHasDateRange;
  }

DateTimeRangeSpecJSON * StockListingJSON::getDateRange(void)
  {
    assert(flagHasDateRange);
    return storeDateRange;
  }

const DateTimeRangeSpecJSON * StockListingJSON::getDateRange(void) const
  {
    assert(flagHasDateRange);
    return storeDateRange;
  }

bool StockListingJSON::hasImplicitDateRange(void) const
  {
    return flagHasImplicitDateRange;
  }

bool StockListingJSON::getImplicitDateRange(void)
  {
    assert(flagHasImplicitDateRange);
    return storeImplicitDateRange;
  }

const bool StockListingJSON::getImplicitDateRange(void) const
  {
    assert(flagHasImplicitDateRange);
    return storeImplicitDateRange;
  }

bool StockListingJSON::hasHigh(void) const
  {
    return flagHasHigh;
  }

double StockListingJSON::getHigh(void)
  {
    assert(flagHasHigh);
    if (textStoreHigh != "")
      {
        return atof(textStoreHigh.c_str());
      }
    return storeHigh;
  }

const double StockListingJSON::getHigh(void) const
  {
    assert(flagHasHigh);
    if (textStoreHigh != "")
      {
        return atof(textStoreHigh.c_str());
      }
    return storeHigh;
  }

std::string StockListingJSON::getHighAsText(void) const
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

bool StockListingJSON::hasLow(void) const
  {
    return flagHasLow;
  }

double StockListingJSON::getLow(void)
  {
    assert(flagHasLow);
    if (textStoreLow != "")
      {
        return atof(textStoreLow.c_str());
      }
    return storeLow;
  }

const double StockListingJSON::getLow(void) const
  {
    assert(flagHasLow);
    if (textStoreLow != "")
      {
        return atof(textStoreLow.c_str());
      }
    return storeLow;
  }

std::string StockListingJSON::getLowAsText(void) const
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

bool StockListingJSON::hasBasePrice(void) const
  {
    return flagHasBasePrice;
  }

std::string StockListingJSON::getBasePrice(void)
  {
    assert(flagHasBasePrice);
    return storeBasePrice;
  }

const std::string StockListingJSON::getBasePrice(void) const
  {
    assert(flagHasBasePrice);
    return storeBasePrice;
  }

bool StockListingJSON::hasBasePriceUpper(void) const
  {
    return flagHasBasePriceUpper;
  }

std::string StockListingJSON::getBasePriceUpper(void)
  {
    assert(flagHasBasePriceUpper);
    return storeBasePriceUpper;
  }

const std::string StockListingJSON::getBasePriceUpper(void) const
  {
    assert(flagHasBasePriceUpper);
    return storeBasePriceUpper;
  }

bool StockListingJSON::hasBasePriceLower(void) const
  {
    return flagHasBasePriceLower;
  }

std::string StockListingJSON::getBasePriceLower(void)
  {
    assert(flagHasBasePriceLower);
    return storeBasePriceLower;
  }

const std::string StockListingJSON::getBasePriceLower(void) const
  {
    assert(flagHasBasePriceLower);
    return storeBasePriceLower;
  }

bool StockListingJSON::hasTradingValue(void) const
  {
    return flagHasTradingValue;
  }

std::string StockListingJSON::getTradingValue(void)
  {
    assert(flagHasTradingValue);
    return storeTradingValue;
  }

const std::string StockListingJSON::getTradingValue(void) const
  {
    assert(flagHasTradingValue);
    return storeTradingValue;
  }

bool StockListingJSON::hasVwap(void) const
  {
    return flagHasVwap;
  }

std::string StockListingJSON::getVwap(void)
  {
    assert(flagHasVwap);
    return storeVwap;
  }

const std::string StockListingJSON::getVwap(void) const
  {
    assert(flagHasVwap);
    return storeVwap;
  }

bool StockListingJSON::hasMarketcap(void) const
  {
    return flagHasMarketcap;
  }

std::string StockListingJSON::getMarketcap(void)
  {
    assert(flagHasMarketcap);
    return storeMarketcap;
  }

const std::string StockListingJSON::getMarketcap(void) const
  {
    assert(flagHasMarketcap);
    return storeMarketcap;
  }

bool StockListingJSON::hasTradingUnit(void) const
  {
    return flagHasTradingUnit;
  }

std::string StockListingJSON::getTradingUnit(void)
  {
    assert(flagHasTradingUnit);
    return storeTradingUnit;
  }

const std::string StockListingJSON::getTradingUnit(void) const
  {
    assert(flagHasTradingUnit);
    return storeTradingUnit;
  }

bool StockListingJSON::hasCalcSharesOutstanding(void) const
  {
    return flagHasCalcSharesOutstanding;
  }

std::string StockListingJSON::getCalcSharesOutstanding(void)
  {
    assert(flagHasCalcSharesOutstanding);
    return storeCalcSharesOutstanding;
  }

const std::string StockListingJSON::getCalcSharesOutstanding(void) const
  {
    assert(flagHasCalcSharesOutstanding);
    return storeCalcSharesOutstanding;
  }

bool StockListingJSON::hasTickSizeFlag(void) const
  {
    return flagHasTickSizeFlag;
  }

std::string StockListingJSON::getTickSizeFlag(void)
  {
    assert(flagHasTickSizeFlag);
    return storeTickSizeFlag;
  }

const std::string StockListingJSON::getTickSizeFlag(void) const
  {
    assert(flagHasTickSizeFlag);
    return storeTickSizeFlag;
  }

bool StockListingJSON::hasPrincipalMarket(void) const
  {
    return flagHasPrincipalMarket;
  }

std::string StockListingJSON::getPrincipalMarket(void)
  {
    assert(flagHasPrincipalMarket);
    return storePrincipalMarket;
  }

const std::string StockListingJSON::getPrincipalMarket(void) const
  {
    assert(flagHasPrincipalMarket);
    return storePrincipalMarket;
  }

bool StockListingJSON::hasIndustryName(void) const
  {
    return flagHasIndustryName;
  }

std::string StockListingJSON::getIndustryName(void)
  {
    assert(flagHasIndustryName);
    return storeIndustryName;
  }

const std::string StockListingJSON::getIndustryName(void) const
  {
    assert(flagHasIndustryName);
    return storeIndustryName;
  }

bool StockListingJSON::hasNikkeiIndustryName(void) const
  {
    return flagHasNikkeiIndustryName;
  }

std::string StockListingJSON::getNikkeiIndustryName(void)
  {
    assert(flagHasNikkeiIndustryName);
    return storeNikkeiIndustryName;
  }

const std::string StockListingJSON::getNikkeiIndustryName(void) const
  {
    assert(flagHasNikkeiIndustryName);
    return storeNikkeiIndustryName;
  }

bool StockListingJSON::hasNikkeiFlag(void) const
  {
    return flagHasNikkeiFlag;
  }

std::string StockListingJSON::getNikkeiFlag(void)
  {
    assert(flagHasNikkeiFlag);
    return storeNikkeiFlag;
  }

const std::string StockListingJSON::getNikkeiFlag(void) const
  {
    assert(flagHasNikkeiFlag);
    return storeNikkeiFlag;
  }

bool StockListingJSON::hasTopix500Flag(void) const
  {
    return flagHasTopix500Flag;
  }

std::string StockListingJSON::getTopix500Flag(void)
  {
    assert(flagHasTopix500Flag);
    return storeTopix500Flag;
  }

const std::string StockListingJSON::getTopix500Flag(void) const
  {
    assert(flagHasTopix500Flag);
    return storeTopix500Flag;
  }

bool StockListingJSON::hasSs1Price(void) const
  {
    return flagHasSs1Price;
  }

std::string StockListingJSON::getSs1Price(void)
  {
    assert(flagHasSs1Price);
    return storeSs1Price;
  }

const std::string StockListingJSON::getSs1Price(void) const
  {
    assert(flagHasSs1Price);
    return storeSs1Price;
  }

bool StockListingJSON::hasSs1PriceOpen(void) const
  {
    return flagHasSs1PriceOpen;
  }

std::string StockListingJSON::getSs1PriceOpen(void)
  {
    assert(flagHasSs1PriceOpen);
    return storeSs1PriceOpen;
  }

const std::string StockListingJSON::getSs1PriceOpen(void) const
  {
    assert(flagHasSs1PriceOpen);
    return storeSs1PriceOpen;
  }

bool StockListingJSON::hasSs1PriceHigh(void) const
  {
    return flagHasSs1PriceHigh;
  }

std::string StockListingJSON::getSs1PriceHigh(void)
  {
    assert(flagHasSs1PriceHigh);
    return storeSs1PriceHigh;
  }

const std::string StockListingJSON::getSs1PriceHigh(void) const
  {
    assert(flagHasSs1PriceHigh);
    return storeSs1PriceHigh;
  }

bool StockListingJSON::hasSs1PriceLow(void) const
  {
    return flagHasSs1PriceLow;
  }

std::string StockListingJSON::getSs1PriceLow(void)
  {
    assert(flagHasSs1PriceLow);
    return storeSs1PriceLow;
  }

const std::string StockListingJSON::getSs1PriceLow(void) const
  {
    assert(flagHasSs1PriceLow);
    return storeSs1PriceLow;
  }

bool StockListingJSON::hasSs1PriceChg(void) const
  {
    return flagHasSs1PriceChg;
  }

std::string StockListingJSON::getSs1PriceChg(void)
  {
    assert(flagHasSs1PriceChg);
    return storeSs1PriceChg;
  }

const std::string StockListingJSON::getSs1PriceChg(void) const
  {
    assert(flagHasSs1PriceChg);
    return storeSs1PriceChg;
  }

bool StockListingJSON::hasSs1PricePchg(void) const
  {
    return flagHasSs1PricePchg;
  }

std::string StockListingJSON::getSs1PricePchg(void)
  {
    assert(flagHasSs1PricePchg);
    return storeSs1PricePchg;
  }

const std::string StockListingJSON::getSs1PricePchg(void) const
  {
    assert(flagHasSs1PricePchg);
    return storeSs1PricePchg;
  }

bool StockListingJSON::hasSs1Volume(void) const
  {
    return flagHasSs1Volume;
  }

std::string StockListingJSON::getSs1Volume(void)
  {
    assert(flagHasSs1Volume);
    return storeSs1Volume;
  }

const std::string StockListingJSON::getSs1Volume(void) const
  {
    assert(flagHasSs1Volume);
    return storeSs1Volume;
  }

bool StockListingJSON::hasSs1Vwap(void) const
  {
    return flagHasSs1Vwap;
  }

std::string StockListingJSON::getSs1Vwap(void)
  {
    assert(flagHasSs1Vwap);
    return storeSs1Vwap;
  }

const std::string StockListingJSON::getSs1Vwap(void) const
  {
    assert(flagHasSs1Vwap);
    return storeSs1Vwap;
  }

bool StockListingJSON::hasSs2Price(void) const
  {
    return flagHasSs2Price;
  }

std::string StockListingJSON::getSs2Price(void)
  {
    assert(flagHasSs2Price);
    return storeSs2Price;
  }

const std::string StockListingJSON::getSs2Price(void) const
  {
    assert(flagHasSs2Price);
    return storeSs2Price;
  }

bool StockListingJSON::hasSs2PriceOpen(void) const
  {
    return flagHasSs2PriceOpen;
  }

std::string StockListingJSON::getSs2PriceOpen(void)
  {
    assert(flagHasSs2PriceOpen);
    return storeSs2PriceOpen;
  }

const std::string StockListingJSON::getSs2PriceOpen(void) const
  {
    assert(flagHasSs2PriceOpen);
    return storeSs2PriceOpen;
  }

bool StockListingJSON::hasSs2PriceHigh(void) const
  {
    return flagHasSs2PriceHigh;
  }

std::string StockListingJSON::getSs2PriceHigh(void)
  {
    assert(flagHasSs2PriceHigh);
    return storeSs2PriceHigh;
  }

const std::string StockListingJSON::getSs2PriceHigh(void) const
  {
    assert(flagHasSs2PriceHigh);
    return storeSs2PriceHigh;
  }

bool StockListingJSON::hasSs2PriceLow(void) const
  {
    return flagHasSs2PriceLow;
  }

std::string StockListingJSON::getSs2PriceLow(void)
  {
    assert(flagHasSs2PriceLow);
    return storeSs2PriceLow;
  }

const std::string StockListingJSON::getSs2PriceLow(void) const
  {
    assert(flagHasSs2PriceLow);
    return storeSs2PriceLow;
  }

bool StockListingJSON::hasSs2PriceChg(void) const
  {
    return flagHasSs2PriceChg;
  }

std::string StockListingJSON::getSs2PriceChg(void)
  {
    assert(flagHasSs2PriceChg);
    return storeSs2PriceChg;
  }

const std::string StockListingJSON::getSs2PriceChg(void) const
  {
    assert(flagHasSs2PriceChg);
    return storeSs2PriceChg;
  }

bool StockListingJSON::hasSs2PricePchg(void) const
  {
    return flagHasSs2PricePchg;
  }

std::string StockListingJSON::getSs2PricePchg(void)
  {
    assert(flagHasSs2PricePchg);
    return storeSs2PricePchg;
  }

const std::string StockListingJSON::getSs2PricePchg(void) const
  {
    assert(flagHasSs2PricePchg);
    return storeSs2PricePchg;
  }

bool StockListingJSON::hasSs2Volume(void) const
  {
    return flagHasSs2Volume;
  }

std::string StockListingJSON::getSs2Volume(void)
  {
    assert(flagHasSs2Volume);
    return storeSs2Volume;
  }

const std::string StockListingJSON::getSs2Volume(void) const
  {
    assert(flagHasSs2Volume);
    return storeSs2Volume;
  }

bool StockListingJSON::hasSs2Vwap(void) const
  {
    return flagHasSs2Vwap;
  }

std::string StockListingJSON::getSs2Vwap(void)
  {
    assert(flagHasSs2Vwap);
    return storeSs2Vwap;
  }

const std::string StockListingJSON::getSs2Vwap(void) const
  {
    assert(flagHasSs2Vwap);
    return storeSs2Vwap;
  }

bool StockListingJSON::hasCorpPer(void) const
  {
    return flagHasCorpPer;
  }

std::string StockListingJSON::getCorpPer(void)
  {
    assert(flagHasCorpPer);
    return storeCorpPer;
  }

const std::string StockListingJSON::getCorpPer(void) const
  {
    assert(flagHasCorpPer);
    return storeCorpPer;
  }

bool StockListingJSON::hasBeta90Topix(void) const
  {
    return flagHasBeta90Topix;
  }

std::string StockListingJSON::getBeta90Topix(void)
  {
    assert(flagHasBeta90Topix);
    return storeBeta90Topix;
  }

const std::string StockListingJSON::getBeta90Topix(void) const
  {
    assert(flagHasBeta90Topix);
    return storeBeta90Topix;
  }

bool StockListingJSON::hasBeta180Topix(void) const
  {
    return flagHasBeta180Topix;
  }

std::string StockListingJSON::getBeta180Topix(void)
  {
    assert(flagHasBeta180Topix);
    return storeBeta180Topix;
  }

const std::string StockListingJSON::getBeta180Topix(void) const
  {
    assert(flagHasBeta180Topix);
    return storeBeta180Topix;
  }

bool StockListingJSON::hasBeta90Nikkei225(void) const
  {
    return flagHasBeta90Nikkei225;
  }

std::string StockListingJSON::getBeta90Nikkei225(void)
  {
    assert(flagHasBeta90Nikkei225);
    return storeBeta90Nikkei225;
  }

const std::string StockListingJSON::getBeta90Nikkei225(void) const
  {
    assert(flagHasBeta90Nikkei225);
    return storeBeta90Nikkei225;
  }

bool StockListingJSON::hasBeta180Nikkei225(void) const
  {
    return flagHasBeta180Nikkei225;
  }

std::string StockListingJSON::getBeta180Nikkei225(void)
  {
    assert(flagHasBeta180Nikkei225);
    return storeBeta180Nikkei225;
  }

const std::string StockListingJSON::getBeta180Nikkei225(void) const
  {
    assert(flagHasBeta180Nikkei225);
    return storeBeta180Nikkei225;
  }

bool StockListingJSON::hasEarningScheduledDate(void) const
  {
    return flagHasEarningScheduledDate;
  }

std::string StockListingJSON::getEarningScheduledDate(void)
  {
    assert(flagHasEarningScheduledDate);
    return storeEarningScheduledDate;
  }

const std::string StockListingJSON::getEarningScheduledDate(void) const
  {
    assert(flagHasEarningScheduledDate);
    return storeEarningScheduledDate;
  }

bool StockListingJSON::hasEarningFullyearDate(void) const
  {
    return flagHasEarningFullyearDate;
  }

std::string StockListingJSON::getEarningFullyearDate(void)
  {
    assert(flagHasEarningFullyearDate);
    return storeEarningFullyearDate;
  }

const std::string StockListingJSON::getEarningFullyearDate(void) const
  {
    assert(flagHasEarningFullyearDate);
    return storeEarningFullyearDate;
  }

bool StockListingJSON::hasDisplayDividendDate(void) const
  {
    return flagHasDisplayDividendDate;
  }

std::string StockListingJSON::getDisplayDividendDate(void)
  {
    assert(flagHasDisplayDividendDate);
    return storeDisplayDividendDate;
  }

const std::string StockListingJSON::getDisplayDividendDate(void) const
  {
    assert(flagHasDisplayDividendDate);
    return storeDisplayDividendDate;
  }

bool StockListingJSON::hasExDividendDate(void) const
  {
    return flagHasExDividendDate;
  }

std::string StockListingJSON::getExDividendDate(void)
  {
    assert(flagHasExDividendDate);
    return storeExDividendDate;
  }

const std::string StockListingJSON::getExDividendDate(void) const
  {
    assert(flagHasExDividendDate);
    return storeExDividendDate;
  }

bool StockListingJSON::hasCoSettleFyEnded(void) const
  {
    return flagHasCoSettleFyEnded;
  }

std::string StockListingJSON::getCoSettleFyEnded(void)
  {
    assert(flagHasCoSettleFyEnded);
    return storeCoSettleFyEnded;
  }

const std::string StockListingJSON::getCoSettleFyEnded(void) const
  {
    assert(flagHasCoSettleFyEnded);
    return storeCoSettleFyEnded;
  }

bool StockListingJSON::hasCoSettleRoe(void) const
  {
    return flagHasCoSettleRoe;
  }

std::string StockListingJSON::getCoSettleRoe(void)
  {
    assert(flagHasCoSettleRoe);
    return storeCoSettleRoe;
  }

const std::string StockListingJSON::getCoSettleRoe(void) const
  {
    assert(flagHasCoSettleRoe);
    return storeCoSettleRoe;
  }

bool StockListingJSON::hasCoSettleDps(void) const
  {
    return flagHasCoSettleDps;
  }

std::string StockListingJSON::getCoSettleDps(void)
  {
    assert(flagHasCoSettleDps);
    return storeCoSettleDps;
  }

const std::string StockListingJSON::getCoSettleDps(void) const
  {
    assert(flagHasCoSettleDps);
    return storeCoSettleDps;
  }

bool StockListingJSON::hasCoEstFyEnded(void) const
  {
    return flagHasCoEstFyEnded;
  }

std::string StockListingJSON::getCoEstFyEnded(void)
  {
    assert(flagHasCoEstFyEnded);
    return storeCoEstFyEnded;
  }

const std::string StockListingJSON::getCoEstFyEnded(void) const
  {
    assert(flagHasCoEstFyEnded);
    return storeCoEstFyEnded;
  }

bool StockListingJSON::hasCoEstDps(void) const
  {
    return flagHasCoEstDps;
  }

std::string StockListingJSON::getCoEstDps(void)
  {
    assert(flagHasCoEstDps);
    return storeCoEstDps;
  }

const std::string StockListingJSON::getCoEstDps(void) const
  {
    assert(flagHasCoEstDps);
    return storeCoEstDps;
  }

StockListingJSON *StockListingJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    StockListingJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<StockListingJSON>, StockListingJSON *, bool> generator("Type StockListing", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
