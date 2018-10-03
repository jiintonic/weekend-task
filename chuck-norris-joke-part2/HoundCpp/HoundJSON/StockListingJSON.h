/* file "StockListingJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef STOCKLISTINGJSON_H
#define STOCKLISTINGJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONHoldingArrayGenerator.h"
#include "JSONStringGenerator.h"
#include "JSONNumberTextGenerator.h"
#include "JSONDoubleGenerator.h"
#include "JSONIntegerUnboundRangeGenerator.h"
#include "JSONBooleanGenerator.h"
#include <vector>
#include <string>
#include "OInteger.h"
#include "StockAttributeValueJSON.h"
#include "StockAttributeValueJSON.h"
#include "StockAttributeValueJSON.h"
#include "StockAttributeValueJSON.h"
#include "StockAttributeValueJSON.h"
#include "StockAttributeValueJSON.h"
#include "DateAndOrTimeJSON.h"
#include "StockHistoricalQuoteJSON.h"
#include "StockHistoricalQuoteJSON.h"
#include "StockAttributeValueJSON.h"
#include "StockAttributeValueJSON.h"
#include "StockAttributeValueJSON.h"
#include "StockAttributeValueJSON.h"
#include "StockAttributeValueJSON.h"
#include "DateAndOrTimeJSON.h"
#include "StockAttributeValueJSON.h"
#include "StockAttributeValueJSON.h"
#include "StockAttributeValueJSON.h"
#include "DateTimeRangeSpecJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class StockListingJSON : public ReferenceCounted
  {
  private:
    bool flagHasListingID;
    OInteger storeListingID;
    bool flagHasSymbol;
    StockAttributeValueJSON * storeSymbol;
    bool flagHasShortName;
    StockAttributeValueJSON * storeShortName;
    bool flagHasShortPossessiveName;
    StockAttributeValueJSON * storeShortPossessiveName;
    bool flagHasMediumName;
    StockAttributeValueJSON * storeMediumName;
    bool flagHasLongName;
    StockAttributeValueJSON * storeLongName;
    bool flagHasPrice;
    StockAttributeValueJSON * storePrice;
    bool flagHasPriceDate;
    DateAndOrTimeJSON * storePriceDate;
    bool flagHasIntraDayPriceSource;
    bool storeIntraDayPriceSource;
    bool flagHasCurrency;
    std::string storeCurrency;
    bool flagHasIntradayPrices;
    std::vector< StockHistoricalQuoteJSON * > storeIntradayPrices;
    bool flagHasDailyHistoricalPrices;
    std::vector< StockHistoricalQuoteJSON * > storeDailyHistoricalPrices;
    bool flagHasPERatio;
    StockAttributeValueJSON * storePERatio;
    bool flagHasMarketCap;
    StockAttributeValueJSON * storeMarketCap;
    bool flagHasVolume;
    StockAttributeValueJSON * storeVolume;
    bool flagHasValueChange;
    StockAttributeValueJSON * storeValueChange;
    bool flagHasPercentChange;
    StockAttributeValueJSON * storePercentChange;
    bool flagHasPreviousCloseDate;
    DateAndOrTimeJSON * storePreviousCloseDate;
    bool flagHasOpen;
    double storeOpen;
    std::string textStoreOpen;
    bool flagHasClose;
    double storeClose;
    std::string textStoreClose;
    bool flagHasChartImageURL1D;
    std::string storeChartImageURL1D;
    bool flagHasChartImageURL5D;
    std::string storeChartImageURL5D;
    bool flagHasChartImageURL3M;
    std::string storeChartImageURL3M;
    bool flagHasChartImageURL6M;
    std::string storeChartImageURL6M;
    bool flagHasChartImageURL1Y;
    std::string storeChartImageURL1Y;
    bool flagHasExternalURL;
    std::string storeExternalURL;
    bool flagHasStockExchangeShortName;
    StockAttributeValueJSON * storeStockExchangeShortName;
    bool flagHasStockExchangeLongName;
    StockAttributeValueJSON * storeStockExchangeLongName;
    bool flagHasStockExchangeSymbol;
    StockAttributeValueJSON * storeStockExchangeSymbol;
    bool flagHasStockExchangeUTCOffset;
    double storeStockExchangeUTCOffset;
    std::string textStoreStockExchangeUTCOffset;
    bool flagHasNumShares;
    OInteger storeNumShares;
    bool flagHasDateRange;
    DateTimeRangeSpecJSON * storeDateRange;
    bool flagHasImplicitDateRange;
    bool storeImplicitDateRange;
    bool flagHasHigh;
    double storeHigh;
    std::string textStoreHigh;
    bool flagHasLow;
    double storeLow;
    std::string textStoreLow;
    bool flagHasBasePrice;
    std::string storeBasePrice;
    bool flagHasBasePriceUpper;
    std::string storeBasePriceUpper;
    bool flagHasBasePriceLower;
    std::string storeBasePriceLower;
    bool flagHasTradingValue;
    std::string storeTradingValue;
    bool flagHasVwap;
    std::string storeVwap;
    bool flagHasMarketcap;
    std::string storeMarketcap;
    bool flagHasTradingUnit;
    std::string storeTradingUnit;
    bool flagHasCalcSharesOutstanding;
    std::string storeCalcSharesOutstanding;
    bool flagHasTickSizeFlag;
    std::string storeTickSizeFlag;
    bool flagHasPrincipalMarket;
    std::string storePrincipalMarket;
    bool flagHasIndustryName;
    std::string storeIndustryName;
    bool flagHasNikkeiIndustryName;
    std::string storeNikkeiIndustryName;
    bool flagHasNikkeiFlag;
    std::string storeNikkeiFlag;
    bool flagHasTopix500Flag;
    std::string storeTopix500Flag;
    bool flagHasSs1Price;
    std::string storeSs1Price;
    bool flagHasSs1PriceOpen;
    std::string storeSs1PriceOpen;
    bool flagHasSs1PriceHigh;
    std::string storeSs1PriceHigh;
    bool flagHasSs1PriceLow;
    std::string storeSs1PriceLow;
    bool flagHasSs1PriceChg;
    std::string storeSs1PriceChg;
    bool flagHasSs1PricePchg;
    std::string storeSs1PricePchg;
    bool flagHasSs1Volume;
    std::string storeSs1Volume;
    bool flagHasSs1Vwap;
    std::string storeSs1Vwap;
    bool flagHasSs2Price;
    std::string storeSs2Price;
    bool flagHasSs2PriceOpen;
    std::string storeSs2PriceOpen;
    bool flagHasSs2PriceHigh;
    std::string storeSs2PriceHigh;
    bool flagHasSs2PriceLow;
    std::string storeSs2PriceLow;
    bool flagHasSs2PriceChg;
    std::string storeSs2PriceChg;
    bool flagHasSs2PricePchg;
    std::string storeSs2PricePchg;
    bool flagHasSs2Volume;
    std::string storeSs2Volume;
    bool flagHasSs2Vwap;
    std::string storeSs2Vwap;
    bool flagHasCorpPer;
    std::string storeCorpPer;
    bool flagHasBeta90Topix;
    std::string storeBeta90Topix;
    bool flagHasBeta180Topix;
    std::string storeBeta180Topix;
    bool flagHasBeta90Nikkei225;
    std::string storeBeta90Nikkei225;
    bool flagHasBeta180Nikkei225;
    std::string storeBeta180Nikkei225;
    bool flagHasEarningScheduledDate;
    std::string storeEarningScheduledDate;
    bool flagHasEarningFullyearDate;
    std::string storeEarningFullyearDate;
    bool flagHasDisplayDividendDate;
    std::string storeDisplayDividendDate;
    bool flagHasExDividendDate;
    std::string storeExDividendDate;
    bool flagHasCoSettleFyEnded;
    std::string storeCoSettleFyEnded;
    bool flagHasCoSettleRoe;
    std::string storeCoSettleRoe;
    bool flagHasCoSettleDps;
    std::string storeCoSettleDps;
    bool flagHasCoEstFyEnded;
    std::string storeCoEstFyEnded;
    bool flagHasCoEstDps;
    std::string storeCoEstDps;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    StockListingJSON(const StockListingJSON &);
    StockListingJSON & operator=(const StockListingJSON &other);

    void  fromJSONListingID(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONSymbol(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONShortName(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONShortPossessiveName(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONMediumName(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONLongName(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONPrice(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONPriceDate(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONIntraDayPriceSource(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONCurrency(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONIntradayPrices(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONDailyHistoricalPrices(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONPERatio(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONMarketCap(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONVolume(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONValueChange(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONPercentChange(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONPreviousCloseDate(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONOpen(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONClose(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONChartImageURL1D(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONChartImageURL5D(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONChartImageURL3M(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONChartImageURL6M(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONChartImageURL1Y(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONExternalURL(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONStockExchangeShortName(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONStockExchangeLongName(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONStockExchangeSymbol(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONStockExchangeUTCOffset(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONNumShares(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONDateRange(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONImplicitDateRange(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONHigh(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONLow(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONBasePrice(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONBasePriceUpper(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONBasePriceLower(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONTradingValue(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONVwap(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONMarketcap(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONTradingUnit(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONCalcSharesOutstanding(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONTickSizeFlag(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONPrincipalMarket(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONIndustryName(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONNikkeiIndustryName(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONNikkeiFlag(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONTopix500Flag(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONSs1Price(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONSs1PriceOpen(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONSs1PriceHigh(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONSs1PriceLow(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONSs1PriceChg(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONSs1PricePchg(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONSs1Volume(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONSs1Vwap(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONSs2Price(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONSs2PriceOpen(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONSs2PriceHigh(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONSs2PriceLow(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONSs2PriceChg(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONSs2PricePchg(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONSs2Volume(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONSs2Vwap(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONCorpPer(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONBeta90Topix(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONBeta180Topix(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONBeta90Nikkei225(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONBeta180Nikkei225(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONEarningScheduledDate(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONEarningFullyearDate(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONDisplayDividendDate(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONExDividendDate(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONCoSettleFyEnded(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONCoSettleRoe(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONCoSettleDps(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONCoEstFyEnded(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONCoEstDps(JSONValue *json_value, bool ignore_extras = false);


  public:
    StockListingJSON(void);
    virtual ~StockListingJSON(void);
    bool  hasListingID(void) const;
    OInteger  getListingID(void);
    const OInteger  getListingID(void) const;
    bool  hasSymbol(void) const;
    StockAttributeValueJSON *  getSymbol(void);
    const StockAttributeValueJSON *  getSymbol(void) const;
    bool  hasShortName(void) const;
    StockAttributeValueJSON *  getShortName(void);
    const StockAttributeValueJSON *  getShortName(void) const;
    bool  hasShortPossessiveName(void) const;
    StockAttributeValueJSON *  getShortPossessiveName(void);
    const StockAttributeValueJSON *  getShortPossessiveName(void) const;
    bool  hasMediumName(void) const;
    StockAttributeValueJSON *  getMediumName(void);
    const StockAttributeValueJSON *  getMediumName(void) const;
    bool  hasLongName(void) const;
    StockAttributeValueJSON *  getLongName(void);
    const StockAttributeValueJSON *  getLongName(void) const;
    bool  hasPrice(void) const;
    StockAttributeValueJSON *  getPrice(void);
    const StockAttributeValueJSON *  getPrice(void) const;
    bool  hasPriceDate(void) const;
    DateAndOrTimeJSON *  getPriceDate(void);
    const DateAndOrTimeJSON *  getPriceDate(void) const;
    bool  hasIntraDayPriceSource(void) const;
    bool  getIntraDayPriceSource(void);
    const bool  getIntraDayPriceSource(void) const;
    bool  hasCurrency(void) const;
    std::string  getCurrency(void);
    const std::string  getCurrency(void) const;
    bool  hasIntradayPrices(void) const;
    size_t  countOfIntradayPrices(void) const;
    StockHistoricalQuoteJSON *  elementOfIntradayPrices(size_t element_num);
    const StockHistoricalQuoteJSON *  elementOfIntradayPrices(size_t element_num) const;
    std::vector< StockHistoricalQuoteJSON * >  getIntradayPrices(void);
    const std::vector< StockHistoricalQuoteJSON * >  getIntradayPrices(void) const;
    bool  hasDailyHistoricalPrices(void) const;
    size_t  countOfDailyHistoricalPrices(void) const;
    StockHistoricalQuoteJSON *  elementOfDailyHistoricalPrices(size_t element_num);
    const StockHistoricalQuoteJSON *  elementOfDailyHistoricalPrices(size_t element_num) const;
    std::vector< StockHistoricalQuoteJSON * >  getDailyHistoricalPrices(void);
    const std::vector< StockHistoricalQuoteJSON * >  getDailyHistoricalPrices(void) const;
    bool  hasPERatio(void) const;
    StockAttributeValueJSON *  getPERatio(void);
    const StockAttributeValueJSON *  getPERatio(void) const;
    bool  hasMarketCap(void) const;
    StockAttributeValueJSON *  getMarketCap(void);
    const StockAttributeValueJSON *  getMarketCap(void) const;
    bool  hasVolume(void) const;
    StockAttributeValueJSON *  getVolume(void);
    const StockAttributeValueJSON *  getVolume(void) const;
    bool  hasValueChange(void) const;
    StockAttributeValueJSON *  getValueChange(void);
    const StockAttributeValueJSON *  getValueChange(void) const;
    bool  hasPercentChange(void) const;
    StockAttributeValueJSON *  getPercentChange(void);
    const StockAttributeValueJSON *  getPercentChange(void) const;
    bool  hasPreviousCloseDate(void) const;
    DateAndOrTimeJSON *  getPreviousCloseDate(void);
    const DateAndOrTimeJSON *  getPreviousCloseDate(void) const;
    bool  hasOpen(void) const;
    double  getOpen(void);
    const double  getOpen(void) const;
    std::string  getOpenAsText(void) const;
    bool  hasClose(void) const;
    double  getClose(void);
    const double  getClose(void) const;
    std::string  getCloseAsText(void) const;
    bool  hasChartImageURL1D(void) const;
    std::string  getChartImageURL1D(void);
    const std::string  getChartImageURL1D(void) const;
    bool  hasChartImageURL5D(void) const;
    std::string  getChartImageURL5D(void);
    const std::string  getChartImageURL5D(void) const;
    bool  hasChartImageURL3M(void) const;
    std::string  getChartImageURL3M(void);
    const std::string  getChartImageURL3M(void) const;
    bool  hasChartImageURL6M(void) const;
    std::string  getChartImageURL6M(void);
    const std::string  getChartImageURL6M(void) const;
    bool  hasChartImageURL1Y(void) const;
    std::string  getChartImageURL1Y(void);
    const std::string  getChartImageURL1Y(void) const;
    bool  hasExternalURL(void) const;
    std::string  getExternalURL(void);
    const std::string  getExternalURL(void) const;
    bool  hasStockExchangeShortName(void) const;
    StockAttributeValueJSON *  getStockExchangeShortName(void);
    const StockAttributeValueJSON *  getStockExchangeShortName(void) const;
    bool  hasStockExchangeLongName(void) const;
    StockAttributeValueJSON *  getStockExchangeLongName(void);
    const StockAttributeValueJSON *  getStockExchangeLongName(void) const;
    bool  hasStockExchangeSymbol(void) const;
    StockAttributeValueJSON *  getStockExchangeSymbol(void);
    const StockAttributeValueJSON *  getStockExchangeSymbol(void) const;
    bool  hasStockExchangeUTCOffset(void) const;
    double  getStockExchangeUTCOffset(void);
    const double  getStockExchangeUTCOffset(void) const;
    std::string  getStockExchangeUTCOffsetAsText(void) const;
    bool  hasNumShares(void) const;
    OInteger  getNumShares(void);
    const OInteger  getNumShares(void) const;
    bool  hasDateRange(void) const;
    DateTimeRangeSpecJSON *  getDateRange(void);
    const DateTimeRangeSpecJSON *  getDateRange(void) const;
    bool  hasImplicitDateRange(void) const;
    bool  getImplicitDateRange(void);
    const bool  getImplicitDateRange(void) const;
    bool  hasHigh(void) const;
    double  getHigh(void);
    const double  getHigh(void) const;
    std::string  getHighAsText(void) const;
    bool  hasLow(void) const;
    double  getLow(void);
    const double  getLow(void) const;
    std::string  getLowAsText(void) const;
    bool  hasBasePrice(void) const;
    std::string  getBasePrice(void);
    const std::string  getBasePrice(void) const;
    bool  hasBasePriceUpper(void) const;
    std::string  getBasePriceUpper(void);
    const std::string  getBasePriceUpper(void) const;
    bool  hasBasePriceLower(void) const;
    std::string  getBasePriceLower(void);
    const std::string  getBasePriceLower(void) const;
    bool  hasTradingValue(void) const;
    std::string  getTradingValue(void);
    const std::string  getTradingValue(void) const;
    bool  hasVwap(void) const;
    std::string  getVwap(void);
    const std::string  getVwap(void) const;
    bool  hasMarketcap(void) const;
    std::string  getMarketcap(void);
    const std::string  getMarketcap(void) const;
    bool  hasTradingUnit(void) const;
    std::string  getTradingUnit(void);
    const std::string  getTradingUnit(void) const;
    bool  hasCalcSharesOutstanding(void) const;
    std::string  getCalcSharesOutstanding(void);
    const std::string  getCalcSharesOutstanding(void) const;
    bool  hasTickSizeFlag(void) const;
    std::string  getTickSizeFlag(void);
    const std::string  getTickSizeFlag(void) const;
    bool  hasPrincipalMarket(void) const;
    std::string  getPrincipalMarket(void);
    const std::string  getPrincipalMarket(void) const;
    bool  hasIndustryName(void) const;
    std::string  getIndustryName(void);
    const std::string  getIndustryName(void) const;
    bool  hasNikkeiIndustryName(void) const;
    std::string  getNikkeiIndustryName(void);
    const std::string  getNikkeiIndustryName(void) const;
    bool  hasNikkeiFlag(void) const;
    std::string  getNikkeiFlag(void);
    const std::string  getNikkeiFlag(void) const;
    bool  hasTopix500Flag(void) const;
    std::string  getTopix500Flag(void);
    const std::string  getTopix500Flag(void) const;
    bool  hasSs1Price(void) const;
    std::string  getSs1Price(void);
    const std::string  getSs1Price(void) const;
    bool  hasSs1PriceOpen(void) const;
    std::string  getSs1PriceOpen(void);
    const std::string  getSs1PriceOpen(void) const;
    bool  hasSs1PriceHigh(void) const;
    std::string  getSs1PriceHigh(void);
    const std::string  getSs1PriceHigh(void) const;
    bool  hasSs1PriceLow(void) const;
    std::string  getSs1PriceLow(void);
    const std::string  getSs1PriceLow(void) const;
    bool  hasSs1PriceChg(void) const;
    std::string  getSs1PriceChg(void);
    const std::string  getSs1PriceChg(void) const;
    bool  hasSs1PricePchg(void) const;
    std::string  getSs1PricePchg(void);
    const std::string  getSs1PricePchg(void) const;
    bool  hasSs1Volume(void) const;
    std::string  getSs1Volume(void);
    const std::string  getSs1Volume(void) const;
    bool  hasSs1Vwap(void) const;
    std::string  getSs1Vwap(void);
    const std::string  getSs1Vwap(void) const;
    bool  hasSs2Price(void) const;
    std::string  getSs2Price(void);
    const std::string  getSs2Price(void) const;
    bool  hasSs2PriceOpen(void) const;
    std::string  getSs2PriceOpen(void);
    const std::string  getSs2PriceOpen(void) const;
    bool  hasSs2PriceHigh(void) const;
    std::string  getSs2PriceHigh(void);
    const std::string  getSs2PriceHigh(void) const;
    bool  hasSs2PriceLow(void) const;
    std::string  getSs2PriceLow(void);
    const std::string  getSs2PriceLow(void) const;
    bool  hasSs2PriceChg(void) const;
    std::string  getSs2PriceChg(void);
    const std::string  getSs2PriceChg(void) const;
    bool  hasSs2PricePchg(void) const;
    std::string  getSs2PricePchg(void);
    const std::string  getSs2PricePchg(void) const;
    bool  hasSs2Volume(void) const;
    std::string  getSs2Volume(void);
    const std::string  getSs2Volume(void) const;
    bool  hasSs2Vwap(void) const;
    std::string  getSs2Vwap(void);
    const std::string  getSs2Vwap(void) const;
    bool  hasCorpPer(void) const;
    std::string  getCorpPer(void);
    const std::string  getCorpPer(void) const;
    bool  hasBeta90Topix(void) const;
    std::string  getBeta90Topix(void);
    const std::string  getBeta90Topix(void) const;
    bool  hasBeta180Topix(void) const;
    std::string  getBeta180Topix(void);
    const std::string  getBeta180Topix(void) const;
    bool  hasBeta90Nikkei225(void) const;
    std::string  getBeta90Nikkei225(void);
    const std::string  getBeta90Nikkei225(void) const;
    bool  hasBeta180Nikkei225(void) const;
    std::string  getBeta180Nikkei225(void);
    const std::string  getBeta180Nikkei225(void) const;
    bool  hasEarningScheduledDate(void) const;
    std::string  getEarningScheduledDate(void);
    const std::string  getEarningScheduledDate(void) const;
    bool  hasEarningFullyearDate(void) const;
    std::string  getEarningFullyearDate(void);
    const std::string  getEarningFullyearDate(void) const;
    bool  hasDisplayDividendDate(void) const;
    std::string  getDisplayDividendDate(void);
    const std::string  getDisplayDividendDate(void) const;
    bool  hasExDividendDate(void) const;
    std::string  getExDividendDate(void);
    const std::string  getExDividendDate(void) const;
    bool  hasCoSettleFyEnded(void) const;
    std::string  getCoSettleFyEnded(void);
    const std::string  getCoSettleFyEnded(void) const;
    bool  hasCoSettleRoe(void) const;
    std::string  getCoSettleRoe(void);
    const std::string  getCoSettleRoe(void) const;
    bool  hasCoSettleDps(void) const;
    std::string  getCoSettleDps(void);
    const std::string  getCoSettleDps(void) const;
    bool  hasCoEstFyEnded(void) const;
    std::string  getCoEstFyEnded(void);
    const std::string  getCoEstFyEnded(void) const;
    bool  hasCoEstDps(void) const;
    std::string  getCoEstDps(void);
    const std::string  getCoEstDps(void) const;

    virtual size_t extraStockListingComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraStockListingComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraStockListingComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraStockListingComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraStockListingLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraStockListingLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }

    void setListingID(OInteger new_value)
      {
        flagHasListingID = true;
        storeListingID = new_value;
      }
    void unsetListingID(void)
      {
        flagHasListingID = false;
      }
    void setSymbol(StockAttributeValueJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasSymbol)
          {
            storeSymbol->remove_reference();
          }
        flagHasSymbol = true;
        storeSymbol = new_value;
      }
    void unsetSymbol(void)
      {
        if (flagHasSymbol)
          {
            storeSymbol->remove_reference();
          }
        flagHasSymbol = false;
      }
    void setShortName(StockAttributeValueJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasShortName)
          {
            storeShortName->remove_reference();
          }
        flagHasShortName = true;
        storeShortName = new_value;
      }
    void unsetShortName(void)
      {
        if (flagHasShortName)
          {
            storeShortName->remove_reference();
          }
        flagHasShortName = false;
      }
    void setShortPossessiveName(StockAttributeValueJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasShortPossessiveName)
          {
            storeShortPossessiveName->remove_reference();
          }
        flagHasShortPossessiveName = true;
        storeShortPossessiveName = new_value;
      }
    void unsetShortPossessiveName(void)
      {
        if (flagHasShortPossessiveName)
          {
            storeShortPossessiveName->remove_reference();
          }
        flagHasShortPossessiveName = false;
      }
    void setMediumName(StockAttributeValueJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasMediumName)
          {
            storeMediumName->remove_reference();
          }
        flagHasMediumName = true;
        storeMediumName = new_value;
      }
    void unsetMediumName(void)
      {
        if (flagHasMediumName)
          {
            storeMediumName->remove_reference();
          }
        flagHasMediumName = false;
      }
    void setLongName(StockAttributeValueJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasLongName)
          {
            storeLongName->remove_reference();
          }
        flagHasLongName = true;
        storeLongName = new_value;
      }
    void unsetLongName(void)
      {
        if (flagHasLongName)
          {
            storeLongName->remove_reference();
          }
        flagHasLongName = false;
      }
    void setPrice(StockAttributeValueJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasPrice)
          {
            storePrice->remove_reference();
          }
        flagHasPrice = true;
        storePrice = new_value;
      }
    void unsetPrice(void)
      {
        if (flagHasPrice)
          {
            storePrice->remove_reference();
          }
        flagHasPrice = false;
      }
    void setPriceDate(DateAndOrTimeJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasPriceDate)
          {
            storePriceDate->remove_reference();
          }
        flagHasPriceDate = true;
        storePriceDate = new_value;
      }
    void unsetPriceDate(void)
      {
        if (flagHasPriceDate)
          {
            storePriceDate->remove_reference();
          }
        flagHasPriceDate = false;
      }
    void setIntraDayPriceSource(bool new_value)
      {
        flagHasIntraDayPriceSource = true;
        storeIntraDayPriceSource = new_value;
      }
    void unsetIntraDayPriceSource(void)
      {
        flagHasIntraDayPriceSource = false;
      }
    void setCurrency(std::string new_value)
      {
        flagHasCurrency = true;
        storeCurrency = new_value;
      }
    void unsetCurrency(void)
      {
        flagHasCurrency = false;
      }
    void initIntradayPrices(void)
      {
        if (flagHasIntradayPrices)
          {
            for (size_t num3 = 0; num3 < storeIntradayPrices.size(); ++num3)
              {
                storeIntradayPrices[num3]->remove_reference();
              }
          }
        flagHasIntradayPrices = true;
        storeIntradayPrices.clear();
      }
    void appendIntradayPrices(StockHistoricalQuoteJSON * to_append)
      {
        if (!flagHasIntradayPrices)
          {
            flagHasIntradayPrices = true;
            storeIntradayPrices.clear();
          }
        assert(flagHasIntradayPrices);
        to_append->add_reference();
        storeIntradayPrices.push_back(to_append);
      }
    void unsetIntradayPrices(void)
      {
        if (flagHasIntradayPrices)
          {
            for (size_t num4 = 0; num4 < storeIntradayPrices.size(); ++num4)
              {
                storeIntradayPrices[num4]->remove_reference();
              }
          }
        flagHasIntradayPrices = false;
        storeIntradayPrices.clear();
      }
    void initDailyHistoricalPrices(void)
      {
        if (flagHasDailyHistoricalPrices)
          {
            for (size_t num5 = 0; num5 < storeDailyHistoricalPrices.size(); ++num5)
              {
                storeDailyHistoricalPrices[num5]->remove_reference();
              }
          }
        flagHasDailyHistoricalPrices = true;
        storeDailyHistoricalPrices.clear();
      }
    void appendDailyHistoricalPrices(StockHistoricalQuoteJSON * to_append)
      {
        if (!flagHasDailyHistoricalPrices)
          {
            flagHasDailyHistoricalPrices = true;
            storeDailyHistoricalPrices.clear();
          }
        assert(flagHasDailyHistoricalPrices);
        to_append->add_reference();
        storeDailyHistoricalPrices.push_back(to_append);
      }
    void unsetDailyHistoricalPrices(void)
      {
        if (flagHasDailyHistoricalPrices)
          {
            for (size_t num6 = 0; num6 < storeDailyHistoricalPrices.size(); ++num6)
              {
                storeDailyHistoricalPrices[num6]->remove_reference();
              }
          }
        flagHasDailyHistoricalPrices = false;
        storeDailyHistoricalPrices.clear();
      }
    void setPERatio(StockAttributeValueJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasPERatio)
          {
            storePERatio->remove_reference();
          }
        flagHasPERatio = true;
        storePERatio = new_value;
      }
    void unsetPERatio(void)
      {
        if (flagHasPERatio)
          {
            storePERatio->remove_reference();
          }
        flagHasPERatio = false;
      }
    void setMarketCap(StockAttributeValueJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasMarketCap)
          {
            storeMarketCap->remove_reference();
          }
        flagHasMarketCap = true;
        storeMarketCap = new_value;
      }
    void unsetMarketCap(void)
      {
        if (flagHasMarketCap)
          {
            storeMarketCap->remove_reference();
          }
        flagHasMarketCap = false;
      }
    void setVolume(StockAttributeValueJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasVolume)
          {
            storeVolume->remove_reference();
          }
        flagHasVolume = true;
        storeVolume = new_value;
      }
    void unsetVolume(void)
      {
        if (flagHasVolume)
          {
            storeVolume->remove_reference();
          }
        flagHasVolume = false;
      }
    void setValueChange(StockAttributeValueJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasValueChange)
          {
            storeValueChange->remove_reference();
          }
        flagHasValueChange = true;
        storeValueChange = new_value;
      }
    void unsetValueChange(void)
      {
        if (flagHasValueChange)
          {
            storeValueChange->remove_reference();
          }
        flagHasValueChange = false;
      }
    void setPercentChange(StockAttributeValueJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasPercentChange)
          {
            storePercentChange->remove_reference();
          }
        flagHasPercentChange = true;
        storePercentChange = new_value;
      }
    void unsetPercentChange(void)
      {
        if (flagHasPercentChange)
          {
            storePercentChange->remove_reference();
          }
        flagHasPercentChange = false;
      }
    void setPreviousCloseDate(DateAndOrTimeJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasPreviousCloseDate)
          {
            storePreviousCloseDate->remove_reference();
          }
        flagHasPreviousCloseDate = true;
        storePreviousCloseDate = new_value;
      }
    void unsetPreviousCloseDate(void)
      {
        if (flagHasPreviousCloseDate)
          {
            storePreviousCloseDate->remove_reference();
          }
        flagHasPreviousCloseDate = false;
      }
    void setOpen(double new_value)
      {
        flagHasOpen = true;
        storeOpen = new_value;
        textStoreOpen = "";
      }
    void setOpenText(std::string new_value)
      {
        flagHasOpen = true;
        if (!(JSONWriter::is_valid_number_format(new_value.c_str())))
            throw("The text value for field Open of StockListingJSON is not a valid number.");
        textStoreOpen = new_value;
      }
    void unsetOpen(void)
      {
        flagHasOpen = false;
      }
    void setClose(double new_value)
      {
        flagHasClose = true;
        storeClose = new_value;
        textStoreClose = "";
      }
    void setCloseText(std::string new_value)
      {
        flagHasClose = true;
        if (!(JSONWriter::is_valid_number_format(new_value.c_str())))
            throw("The text value for field Close of StockListingJSON is not a valid number.");
        textStoreClose = new_value;
      }
    void unsetClose(void)
      {
        flagHasClose = false;
      }
    void setChartImageURL1D(std::string new_value)
      {
        flagHasChartImageURL1D = true;
        storeChartImageURL1D = new_value;
      }
    void unsetChartImageURL1D(void)
      {
        flagHasChartImageURL1D = false;
      }
    void setChartImageURL5D(std::string new_value)
      {
        flagHasChartImageURL5D = true;
        storeChartImageURL5D = new_value;
      }
    void unsetChartImageURL5D(void)
      {
        flagHasChartImageURL5D = false;
      }
    void setChartImageURL3M(std::string new_value)
      {
        flagHasChartImageURL3M = true;
        storeChartImageURL3M = new_value;
      }
    void unsetChartImageURL3M(void)
      {
        flagHasChartImageURL3M = false;
      }
    void setChartImageURL6M(std::string new_value)
      {
        flagHasChartImageURL6M = true;
        storeChartImageURL6M = new_value;
      }
    void unsetChartImageURL6M(void)
      {
        flagHasChartImageURL6M = false;
      }
    void setChartImageURL1Y(std::string new_value)
      {
        flagHasChartImageURL1Y = true;
        storeChartImageURL1Y = new_value;
      }
    void unsetChartImageURL1Y(void)
      {
        flagHasChartImageURL1Y = false;
      }
    void setExternalURL(std::string new_value)
      {
        flagHasExternalURL = true;
        storeExternalURL = new_value;
      }
    void unsetExternalURL(void)
      {
        flagHasExternalURL = false;
      }
    void setStockExchangeShortName(StockAttributeValueJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasStockExchangeShortName)
          {
            storeStockExchangeShortName->remove_reference();
          }
        flagHasStockExchangeShortName = true;
        storeStockExchangeShortName = new_value;
      }
    void unsetStockExchangeShortName(void)
      {
        if (flagHasStockExchangeShortName)
          {
            storeStockExchangeShortName->remove_reference();
          }
        flagHasStockExchangeShortName = false;
      }
    void setStockExchangeLongName(StockAttributeValueJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasStockExchangeLongName)
          {
            storeStockExchangeLongName->remove_reference();
          }
        flagHasStockExchangeLongName = true;
        storeStockExchangeLongName = new_value;
      }
    void unsetStockExchangeLongName(void)
      {
        if (flagHasStockExchangeLongName)
          {
            storeStockExchangeLongName->remove_reference();
          }
        flagHasStockExchangeLongName = false;
      }
    void setStockExchangeSymbol(StockAttributeValueJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasStockExchangeSymbol)
          {
            storeStockExchangeSymbol->remove_reference();
          }
        flagHasStockExchangeSymbol = true;
        storeStockExchangeSymbol = new_value;
      }
    void unsetStockExchangeSymbol(void)
      {
        if (flagHasStockExchangeSymbol)
          {
            storeStockExchangeSymbol->remove_reference();
          }
        flagHasStockExchangeSymbol = false;
      }
    void setStockExchangeUTCOffset(double new_value)
      {
        flagHasStockExchangeUTCOffset = true;
        storeStockExchangeUTCOffset = new_value;
        textStoreStockExchangeUTCOffset = "";
      }
    void setStockExchangeUTCOffsetText(std::string new_value)
      {
        flagHasStockExchangeUTCOffset = true;
        if (!(JSONWriter::is_valid_number_format(new_value.c_str())))
            throw("The text value for field StockExchangeUTCOffset of StockListingJSON is not a valid number.");
        textStoreStockExchangeUTCOffset = new_value;
      }
    void unsetStockExchangeUTCOffset(void)
      {
        flagHasStockExchangeUTCOffset = false;
      }
    void setNumShares(OInteger new_value)
      {
        flagHasNumShares = true;
        storeNumShares = new_value;
      }
    void unsetNumShares(void)
      {
        flagHasNumShares = false;
      }
    void setDateRange(DateTimeRangeSpecJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasDateRange)
          {
            storeDateRange->remove_reference();
          }
        flagHasDateRange = true;
        storeDateRange = new_value;
      }
    void unsetDateRange(void)
      {
        if (flagHasDateRange)
          {
            storeDateRange->remove_reference();
          }
        flagHasDateRange = false;
      }
    void setImplicitDateRange(bool new_value)
      {
        flagHasImplicitDateRange = true;
        storeImplicitDateRange = new_value;
      }
    void unsetImplicitDateRange(void)
      {
        flagHasImplicitDateRange = false;
      }
    void setHigh(double new_value)
      {
        flagHasHigh = true;
        storeHigh = new_value;
        textStoreHigh = "";
      }
    void setHighText(std::string new_value)
      {
        flagHasHigh = true;
        if (!(JSONWriter::is_valid_number_format(new_value.c_str())))
            throw("The text value for field High of StockListingJSON is not a valid number.");
        textStoreHigh = new_value;
      }
    void unsetHigh(void)
      {
        flagHasHigh = false;
      }
    void setLow(double new_value)
      {
        flagHasLow = true;
        storeLow = new_value;
        textStoreLow = "";
      }
    void setLowText(std::string new_value)
      {
        flagHasLow = true;
        if (!(JSONWriter::is_valid_number_format(new_value.c_str())))
            throw("The text value for field Low of StockListingJSON is not a valid number.");
        textStoreLow = new_value;
      }
    void unsetLow(void)
      {
        flagHasLow = false;
      }
    void setBasePrice(std::string new_value)
      {
        flagHasBasePrice = true;
        storeBasePrice = new_value;
      }
    void unsetBasePrice(void)
      {
        flagHasBasePrice = false;
      }
    void setBasePriceUpper(std::string new_value)
      {
        flagHasBasePriceUpper = true;
        storeBasePriceUpper = new_value;
      }
    void unsetBasePriceUpper(void)
      {
        flagHasBasePriceUpper = false;
      }
    void setBasePriceLower(std::string new_value)
      {
        flagHasBasePriceLower = true;
        storeBasePriceLower = new_value;
      }
    void unsetBasePriceLower(void)
      {
        flagHasBasePriceLower = false;
      }
    void setTradingValue(std::string new_value)
      {
        flagHasTradingValue = true;
        storeTradingValue = new_value;
      }
    void unsetTradingValue(void)
      {
        flagHasTradingValue = false;
      }
    void setVwap(std::string new_value)
      {
        flagHasVwap = true;
        storeVwap = new_value;
      }
    void unsetVwap(void)
      {
        flagHasVwap = false;
      }
    void setMarketcap(std::string new_value)
      {
        flagHasMarketcap = true;
        storeMarketcap = new_value;
      }
    void unsetMarketcap(void)
      {
        flagHasMarketcap = false;
      }
    void setTradingUnit(std::string new_value)
      {
        flagHasTradingUnit = true;
        storeTradingUnit = new_value;
      }
    void unsetTradingUnit(void)
      {
        flagHasTradingUnit = false;
      }
    void setCalcSharesOutstanding(std::string new_value)
      {
        flagHasCalcSharesOutstanding = true;
        storeCalcSharesOutstanding = new_value;
      }
    void unsetCalcSharesOutstanding(void)
      {
        flagHasCalcSharesOutstanding = false;
      }
    void setTickSizeFlag(std::string new_value)
      {
        flagHasTickSizeFlag = true;
        storeTickSizeFlag = new_value;
      }
    void unsetTickSizeFlag(void)
      {
        flagHasTickSizeFlag = false;
      }
    void setPrincipalMarket(std::string new_value)
      {
        flagHasPrincipalMarket = true;
        storePrincipalMarket = new_value;
      }
    void unsetPrincipalMarket(void)
      {
        flagHasPrincipalMarket = false;
      }
    void setIndustryName(std::string new_value)
      {
        flagHasIndustryName = true;
        storeIndustryName = new_value;
      }
    void unsetIndustryName(void)
      {
        flagHasIndustryName = false;
      }
    void setNikkeiIndustryName(std::string new_value)
      {
        flagHasNikkeiIndustryName = true;
        storeNikkeiIndustryName = new_value;
      }
    void unsetNikkeiIndustryName(void)
      {
        flagHasNikkeiIndustryName = false;
      }
    void setNikkeiFlag(std::string new_value)
      {
        flagHasNikkeiFlag = true;
        storeNikkeiFlag = new_value;
      }
    void unsetNikkeiFlag(void)
      {
        flagHasNikkeiFlag = false;
      }
    void setTopix500Flag(std::string new_value)
      {
        flagHasTopix500Flag = true;
        storeTopix500Flag = new_value;
      }
    void unsetTopix500Flag(void)
      {
        flagHasTopix500Flag = false;
      }
    void setSs1Price(std::string new_value)
      {
        flagHasSs1Price = true;
        storeSs1Price = new_value;
      }
    void unsetSs1Price(void)
      {
        flagHasSs1Price = false;
      }
    void setSs1PriceOpen(std::string new_value)
      {
        flagHasSs1PriceOpen = true;
        storeSs1PriceOpen = new_value;
      }
    void unsetSs1PriceOpen(void)
      {
        flagHasSs1PriceOpen = false;
      }
    void setSs1PriceHigh(std::string new_value)
      {
        flagHasSs1PriceHigh = true;
        storeSs1PriceHigh = new_value;
      }
    void unsetSs1PriceHigh(void)
      {
        flagHasSs1PriceHigh = false;
      }
    void setSs1PriceLow(std::string new_value)
      {
        flagHasSs1PriceLow = true;
        storeSs1PriceLow = new_value;
      }
    void unsetSs1PriceLow(void)
      {
        flagHasSs1PriceLow = false;
      }
    void setSs1PriceChg(std::string new_value)
      {
        flagHasSs1PriceChg = true;
        storeSs1PriceChg = new_value;
      }
    void unsetSs1PriceChg(void)
      {
        flagHasSs1PriceChg = false;
      }
    void setSs1PricePchg(std::string new_value)
      {
        flagHasSs1PricePchg = true;
        storeSs1PricePchg = new_value;
      }
    void unsetSs1PricePchg(void)
      {
        flagHasSs1PricePchg = false;
      }
    void setSs1Volume(std::string new_value)
      {
        flagHasSs1Volume = true;
        storeSs1Volume = new_value;
      }
    void unsetSs1Volume(void)
      {
        flagHasSs1Volume = false;
      }
    void setSs1Vwap(std::string new_value)
      {
        flagHasSs1Vwap = true;
        storeSs1Vwap = new_value;
      }
    void unsetSs1Vwap(void)
      {
        flagHasSs1Vwap = false;
      }
    void setSs2Price(std::string new_value)
      {
        flagHasSs2Price = true;
        storeSs2Price = new_value;
      }
    void unsetSs2Price(void)
      {
        flagHasSs2Price = false;
      }
    void setSs2PriceOpen(std::string new_value)
      {
        flagHasSs2PriceOpen = true;
        storeSs2PriceOpen = new_value;
      }
    void unsetSs2PriceOpen(void)
      {
        flagHasSs2PriceOpen = false;
      }
    void setSs2PriceHigh(std::string new_value)
      {
        flagHasSs2PriceHigh = true;
        storeSs2PriceHigh = new_value;
      }
    void unsetSs2PriceHigh(void)
      {
        flagHasSs2PriceHigh = false;
      }
    void setSs2PriceLow(std::string new_value)
      {
        flagHasSs2PriceLow = true;
        storeSs2PriceLow = new_value;
      }
    void unsetSs2PriceLow(void)
      {
        flagHasSs2PriceLow = false;
      }
    void setSs2PriceChg(std::string new_value)
      {
        flagHasSs2PriceChg = true;
        storeSs2PriceChg = new_value;
      }
    void unsetSs2PriceChg(void)
      {
        flagHasSs2PriceChg = false;
      }
    void setSs2PricePchg(std::string new_value)
      {
        flagHasSs2PricePchg = true;
        storeSs2PricePchg = new_value;
      }
    void unsetSs2PricePchg(void)
      {
        flagHasSs2PricePchg = false;
      }
    void setSs2Volume(std::string new_value)
      {
        flagHasSs2Volume = true;
        storeSs2Volume = new_value;
      }
    void unsetSs2Volume(void)
      {
        flagHasSs2Volume = false;
      }
    void setSs2Vwap(std::string new_value)
      {
        flagHasSs2Vwap = true;
        storeSs2Vwap = new_value;
      }
    void unsetSs2Vwap(void)
      {
        flagHasSs2Vwap = false;
      }
    void setCorpPer(std::string new_value)
      {
        flagHasCorpPer = true;
        storeCorpPer = new_value;
      }
    void unsetCorpPer(void)
      {
        flagHasCorpPer = false;
      }
    void setBeta90Topix(std::string new_value)
      {
        flagHasBeta90Topix = true;
        storeBeta90Topix = new_value;
      }
    void unsetBeta90Topix(void)
      {
        flagHasBeta90Topix = false;
      }
    void setBeta180Topix(std::string new_value)
      {
        flagHasBeta180Topix = true;
        storeBeta180Topix = new_value;
      }
    void unsetBeta180Topix(void)
      {
        flagHasBeta180Topix = false;
      }
    void setBeta90Nikkei225(std::string new_value)
      {
        flagHasBeta90Nikkei225 = true;
        storeBeta90Nikkei225 = new_value;
      }
    void unsetBeta90Nikkei225(void)
      {
        flagHasBeta90Nikkei225 = false;
      }
    void setBeta180Nikkei225(std::string new_value)
      {
        flagHasBeta180Nikkei225 = true;
        storeBeta180Nikkei225 = new_value;
      }
    void unsetBeta180Nikkei225(void)
      {
        flagHasBeta180Nikkei225 = false;
      }
    void setEarningScheduledDate(std::string new_value)
      {
        flagHasEarningScheduledDate = true;
        storeEarningScheduledDate = new_value;
      }
    void unsetEarningScheduledDate(void)
      {
        flagHasEarningScheduledDate = false;
      }
    void setEarningFullyearDate(std::string new_value)
      {
        flagHasEarningFullyearDate = true;
        storeEarningFullyearDate = new_value;
      }
    void unsetEarningFullyearDate(void)
      {
        flagHasEarningFullyearDate = false;
      }
    void setDisplayDividendDate(std::string new_value)
      {
        flagHasDisplayDividendDate = true;
        storeDisplayDividendDate = new_value;
      }
    void unsetDisplayDividendDate(void)
      {
        flagHasDisplayDividendDate = false;
      }
    void setExDividendDate(std::string new_value)
      {
        flagHasExDividendDate = true;
        storeExDividendDate = new_value;
      }
    void unsetExDividendDate(void)
      {
        flagHasExDividendDate = false;
      }
    void setCoSettleFyEnded(std::string new_value)
      {
        flagHasCoSettleFyEnded = true;
        storeCoSettleFyEnded = new_value;
      }
    void unsetCoSettleFyEnded(void)
      {
        flagHasCoSettleFyEnded = false;
      }
    void setCoSettleRoe(std::string new_value)
      {
        flagHasCoSettleRoe = true;
        storeCoSettleRoe = new_value;
      }
    void unsetCoSettleRoe(void)
      {
        flagHasCoSettleRoe = false;
      }
    void setCoSettleDps(std::string new_value)
      {
        flagHasCoSettleDps = true;
        storeCoSettleDps = new_value;
      }
    void unsetCoSettleDps(void)
      {
        flagHasCoSettleDps = false;
      }
    void setCoEstFyEnded(std::string new_value)
      {
        flagHasCoEstFyEnded = true;
        storeCoEstFyEnded = new_value;
      }
    void unsetCoEstFyEnded(void)
      {
        flagHasCoEstFyEnded = false;
      }
    void setCoEstDps(std::string new_value)
      {
        flagHasCoEstDps = true;
        storeCoEstDps = new_value;
      }
    void unsetCoEstDps(void)
      {
        flagHasCoEstDps = false;
      }

    virtual void extraStockListingAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraStockListingSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraStockListingLookup(key);
        if (old_field == NULL)
          {
            extraStockListingAppendPair(key, new_component);
          }
        else
          {
            size_t count = extraKeys.size();
            assert(count == extraValues.size());
            for (size_t num = 0; num < count; ++num)
              {
                if (strcmp(extraKeys[num].c_str(),  key) == 0)
                  {
                    extraValues[num] = new_component;
                    break;
                  }
              }
            enter_into_string_index(extraIndex, key, new_component);
            new_component->add_reference();
            old_field->remove_reference();
            old_field->remove_reference();
          }
      }

    void write_as_json(JSONHandler *handler) const
      {
        handler->start_object();
        write_fields_as_json(handler);
        size_t extra_count = extraKeys.size();
        assert(extra_count == extraValues.size());
        for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
          {
            handler->start_pair(extraKeys[extra_num].c_str());
            extraValues[extra_num]->write(handler);
          }
        handler->finish_object();
      }

    virtual void write_fields_as_json(JSONHandler *handler) const
      {
        assert(flagHasListingID);
        handler->start_pair("ListingID");
        handler->number_value(storeListingID.get_o_integer());
        assert(flagHasSymbol);
        handler->start_pair("Symbol");
        storeSymbol->write_as_json(handler);
        if (flagHasShortName)
          {
            handler->start_pair("ShortName");
            storeShortName->write_as_json(handler);
          }
        if (flagHasShortPossessiveName)
          {
            handler->start_pair("ShortPossessiveName");
            storeShortPossessiveName->write_as_json(handler);
          }
        if (flagHasMediumName)
          {
            handler->start_pair("MediumName");
            storeMediumName->write_as_json(handler);
          }
        if (flagHasLongName)
          {
            handler->start_pair("LongName");
            storeLongName->write_as_json(handler);
          }
        if (flagHasPrice)
          {
            handler->start_pair("Price");
            storePrice->write_as_json(handler);
          }
        if (flagHasPriceDate)
          {
            handler->start_pair("PriceDate");
            storePriceDate->write_as_json(handler);
          }
        if (flagHasIntraDayPriceSource)
          {
            handler->start_pair("IntraDayPriceSource");
            handler->boolean_value(storeIntraDayPriceSource);
          }
        assert(flagHasCurrency);
        handler->start_pair("Currency");
        handler->string_value(storeCurrency);
        if (flagHasIntradayPrices)
          {
            handler->start_pair("IntradayPrices");
            handler->start_array();
            for (size_t num1 = 0; num1 < storeIntradayPrices.size(); ++num1)
              {
                storeIntradayPrices[num1]->write_as_json(handler);
              }
            handler->finish_array();
          }
        if (flagHasDailyHistoricalPrices)
          {
            handler->start_pair("DailyHistoricalPrices");
            handler->start_array();
            for (size_t num2 = 0; num2 < storeDailyHistoricalPrices.size(); ++num2)
              {
                storeDailyHistoricalPrices[num2]->write_as_json(handler);
              }
            handler->finish_array();
          }
        if (flagHasPERatio)
          {
            handler->start_pair("PERatio");
            storePERatio->write_as_json(handler);
          }
        if (flagHasMarketCap)
          {
            handler->start_pair("MarketCap");
            storeMarketCap->write_as_json(handler);
          }
        if (flagHasVolume)
          {
            handler->start_pair("Volume");
            storeVolume->write_as_json(handler);
          }
        if (flagHasValueChange)
          {
            handler->start_pair("ValueChange");
            storeValueChange->write_as_json(handler);
          }
        if (flagHasPercentChange)
          {
            handler->start_pair("PercentChange");
            storePercentChange->write_as_json(handler);
          }
        if (flagHasPreviousCloseDate)
          {
            handler->start_pair("PreviousCloseDate");
            storePreviousCloseDate->write_as_json(handler);
          }
        if (flagHasOpen)
          {
            handler->start_pair("Open");
            if (textStoreOpen != "")
                handler->number_value(textStoreOpen.c_str());
            else if (((double)(long int)storeOpen) == storeOpen)
                handler->number_value((long int)storeOpen);
            else
                handler->number_value(storeOpen);
          }
        if (flagHasClose)
          {
            handler->start_pair("Close");
            if (textStoreClose != "")
                handler->number_value(textStoreClose.c_str());
            else if (((double)(long int)storeClose) == storeClose)
                handler->number_value((long int)storeClose);
            else
                handler->number_value(storeClose);
          }
        if (flagHasChartImageURL1D)
          {
            handler->start_pair("ChartImageURL1D");
            handler->string_value(storeChartImageURL1D);
          }
        if (flagHasChartImageURL5D)
          {
            handler->start_pair("ChartImageURL5D");
            handler->string_value(storeChartImageURL5D);
          }
        if (flagHasChartImageURL3M)
          {
            handler->start_pair("ChartImageURL3M");
            handler->string_value(storeChartImageURL3M);
          }
        if (flagHasChartImageURL6M)
          {
            handler->start_pair("ChartImageURL6M");
            handler->string_value(storeChartImageURL6M);
          }
        if (flagHasChartImageURL1Y)
          {
            handler->start_pair("ChartImageURL1Y");
            handler->string_value(storeChartImageURL1Y);
          }
        if (flagHasExternalURL)
          {
            handler->start_pair("ExternalURL");
            handler->string_value(storeExternalURL);
          }
        assert(flagHasStockExchangeShortName);
        handler->start_pair("StockExchangeShortName");
        storeStockExchangeShortName->write_as_json(handler);
        assert(flagHasStockExchangeLongName);
        handler->start_pair("StockExchangeLongName");
        storeStockExchangeLongName->write_as_json(handler);
        assert(flagHasStockExchangeSymbol);
        handler->start_pair("StockExchangeSymbol");
        storeStockExchangeSymbol->write_as_json(handler);
        if (flagHasStockExchangeUTCOffset)
          {
            handler->start_pair("StockExchangeUTCOffset");
            if (textStoreStockExchangeUTCOffset != "")
                handler->number_value(textStoreStockExchangeUTCOffset.c_str());
            else if (((double)(long int)storeStockExchangeUTCOffset) == storeStockExchangeUTCOffset)
                handler->number_value((long int)storeStockExchangeUTCOffset);
            else
                handler->number_value(storeStockExchangeUTCOffset);
          }
        if (flagHasNumShares)
          {
            handler->start_pair("NumShares");
            handler->number_value(storeNumShares.get_o_integer());
          }
        if (flagHasDateRange)
          {
            handler->start_pair("DateRange");
            storeDateRange->write_as_json(handler);
          }
        if (flagHasImplicitDateRange)
          {
            handler->start_pair("ImplicitDateRange");
            handler->boolean_value(storeImplicitDateRange);
          }
        if (flagHasHigh)
          {
            handler->start_pair("High");
            if (textStoreHigh != "")
                handler->number_value(textStoreHigh.c_str());
            else if (((double)(long int)storeHigh) == storeHigh)
                handler->number_value((long int)storeHigh);
            else
                handler->number_value(storeHigh);
          }
        if (flagHasLow)
          {
            handler->start_pair("Low");
            if (textStoreLow != "")
                handler->number_value(textStoreLow.c_str());
            else if (((double)(long int)storeLow) == storeLow)
                handler->number_value((long int)storeLow);
            else
                handler->number_value(storeLow);
          }
        if (flagHasBasePrice)
          {
            handler->start_pair("BasePrice");
            handler->string_value(storeBasePrice);
          }
        if (flagHasBasePriceUpper)
          {
            handler->start_pair("BasePriceUpper");
            handler->string_value(storeBasePriceUpper);
          }
        if (flagHasBasePriceLower)
          {
            handler->start_pair("BasePriceLower");
            handler->string_value(storeBasePriceLower);
          }
        if (flagHasTradingValue)
          {
            handler->start_pair("TradingValue");
            handler->string_value(storeTradingValue);
          }
        if (flagHasVwap)
          {
            handler->start_pair("Vwap");
            handler->string_value(storeVwap);
          }
        if (flagHasMarketcap)
          {
            handler->start_pair("Marketcap");
            handler->string_value(storeMarketcap);
          }
        if (flagHasTradingUnit)
          {
            handler->start_pair("TradingUnit");
            handler->string_value(storeTradingUnit);
          }
        if (flagHasCalcSharesOutstanding)
          {
            handler->start_pair("CalcSharesOutstanding");
            handler->string_value(storeCalcSharesOutstanding);
          }
        if (flagHasTickSizeFlag)
          {
            handler->start_pair("TickSizeFlag");
            handler->string_value(storeTickSizeFlag);
          }
        if (flagHasPrincipalMarket)
          {
            handler->start_pair("PrincipalMarket");
            handler->string_value(storePrincipalMarket);
          }
        if (flagHasIndustryName)
          {
            handler->start_pair("IndustryName");
            handler->string_value(storeIndustryName);
          }
        if (flagHasNikkeiIndustryName)
          {
            handler->start_pair("NikkeiIndustryName");
            handler->string_value(storeNikkeiIndustryName);
          }
        if (flagHasNikkeiFlag)
          {
            handler->start_pair("NikkeiFlag");
            handler->string_value(storeNikkeiFlag);
          }
        if (flagHasTopix500Flag)
          {
            handler->start_pair("Topix500Flag");
            handler->string_value(storeTopix500Flag);
          }
        if (flagHasSs1Price)
          {
            handler->start_pair("Ss1Price");
            handler->string_value(storeSs1Price);
          }
        if (flagHasSs1PriceOpen)
          {
            handler->start_pair("Ss1PriceOpen");
            handler->string_value(storeSs1PriceOpen);
          }
        if (flagHasSs1PriceHigh)
          {
            handler->start_pair("Ss1PriceHigh");
            handler->string_value(storeSs1PriceHigh);
          }
        if (flagHasSs1PriceLow)
          {
            handler->start_pair("Ss1PriceLow");
            handler->string_value(storeSs1PriceLow);
          }
        if (flagHasSs1PriceChg)
          {
            handler->start_pair("Ss1PriceChg");
            handler->string_value(storeSs1PriceChg);
          }
        if (flagHasSs1PricePchg)
          {
            handler->start_pair("Ss1PricePchg");
            handler->string_value(storeSs1PricePchg);
          }
        if (flagHasSs1Volume)
          {
            handler->start_pair("Ss1Volume");
            handler->string_value(storeSs1Volume);
          }
        if (flagHasSs1Vwap)
          {
            handler->start_pair("Ss1Vwap");
            handler->string_value(storeSs1Vwap);
          }
        if (flagHasSs2Price)
          {
            handler->start_pair("Ss2Price");
            handler->string_value(storeSs2Price);
          }
        if (flagHasSs2PriceOpen)
          {
            handler->start_pair("Ss2PriceOpen");
            handler->string_value(storeSs2PriceOpen);
          }
        if (flagHasSs2PriceHigh)
          {
            handler->start_pair("Ss2PriceHigh");
            handler->string_value(storeSs2PriceHigh);
          }
        if (flagHasSs2PriceLow)
          {
            handler->start_pair("Ss2PriceLow");
            handler->string_value(storeSs2PriceLow);
          }
        if (flagHasSs2PriceChg)
          {
            handler->start_pair("Ss2PriceChg");
            handler->string_value(storeSs2PriceChg);
          }
        if (flagHasSs2PricePchg)
          {
            handler->start_pair("Ss2PricePchg");
            handler->string_value(storeSs2PricePchg);
          }
        if (flagHasSs2Volume)
          {
            handler->start_pair("Ss2Volume");
            handler->string_value(storeSs2Volume);
          }
        if (flagHasSs2Vwap)
          {
            handler->start_pair("Ss2Vwap");
            handler->string_value(storeSs2Vwap);
          }
        if (flagHasCorpPer)
          {
            handler->start_pair("CorpPer");
            handler->string_value(storeCorpPer);
          }
        if (flagHasBeta90Topix)
          {
            handler->start_pair("Beta90Topix");
            handler->string_value(storeBeta90Topix);
          }
        if (flagHasBeta180Topix)
          {
            handler->start_pair("Beta180Topix");
            handler->string_value(storeBeta180Topix);
          }
        if (flagHasBeta90Nikkei225)
          {
            handler->start_pair("Beta90Nikkei225");
            handler->string_value(storeBeta90Nikkei225);
          }
        if (flagHasBeta180Nikkei225)
          {
            handler->start_pair("Beta180Nikkei225");
            handler->string_value(storeBeta180Nikkei225);
          }
        if (flagHasEarningScheduledDate)
          {
            handler->start_pair("EarningScheduledDate");
            handler->string_value(storeEarningScheduledDate);
          }
        if (flagHasEarningFullyearDate)
          {
            handler->start_pair("EarningFullyearDate");
            handler->string_value(storeEarningFullyearDate);
          }
        if (flagHasDisplayDividendDate)
          {
            handler->start_pair("DisplayDividendDate");
            handler->string_value(storeDisplayDividendDate);
          }
        if (flagHasExDividendDate)
          {
            handler->start_pair("ExDividendDate");
            handler->string_value(storeExDividendDate);
          }
        if (flagHasCoSettleFyEnded)
          {
            handler->start_pair("CoSettleFyEnded");
            handler->string_value(storeCoSettleFyEnded);
          }
        if (flagHasCoSettleRoe)
          {
            handler->start_pair("CoSettleRoe");
            handler->string_value(storeCoSettleRoe);
          }
        if (flagHasCoSettleDps)
          {
            handler->start_pair("CoSettleDps");
            handler->string_value(storeCoSettleDps);
          }
        if (flagHasCoEstFyEnded)
          {
            handler->start_pair("CoEstFyEnded");
            handler->string_value(storeCoEstFyEnded);
          }
        if (flagHasCoEstDps)
          {
            handler->start_pair("CoEstDps");
            handler->string_value(storeCoEstDps);
          }
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasListingID()))
          {
            return "When parsing the object for %what%, the \"ListingID\" field was missing.";
          }
        if (!(hasSymbol()))
          {
            return "When parsing the object for %what%, the \"Symbol\" field was missing.";
          }
        if (!(hasCurrency()))
          {
            return "When parsing the object for %what%, the \"Currency\" field was missing.";
          }
        if (!(hasStockExchangeShortName()))
          {
            return "When parsing the object for %what%, the \"StockExchangeShortName\" field was missing.";
          }
        if (!(hasStockExchangeLongName()))
          {
            return "When parsing the object for %what%, the \"StockExchangeLongName\" field was missing.";
          }
        if (!(hasStockExchangeSymbol()))
          {
            return "When parsing the object for %what%, the \"StockExchangeSymbol\" field was missing.";
          }
        return NULL;
      }

    static StockListingJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static StockListingJSON *from_text(const char *text, bool ignore_extras = false)
      {
        StockListingJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<StockListingJSON>, StockListingJSON *, bool> generator("Type StockListing", ignore_extras);
            parse_json_value(text, "Text for StockListingJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static StockListingJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        StockListingJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<StockListingJSON>, StockListingJSON *, bool> generator("Type StockListing", ignore_extras);
            parse_json_value(fp, file_name, &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    class Generator : public JSONObjectGenerator
      {
      private:
        JSONHoldingGenerator<JSONIntegerUnboundRangeGenerator, OInteger, o_integer > fieldGeneratorListingID;
        JSONHoldingGenerator<StockAttributeValueJSON::Generator, RCHandle<StockAttributeValueJSON>, StockAttributeValueJSON *, bool > fieldGeneratorSymbol;
        JSONHoldingGenerator<StockAttributeValueJSON::Generator, RCHandle<StockAttributeValueJSON>, StockAttributeValueJSON *, bool > fieldGeneratorShortName;
        JSONHoldingGenerator<StockAttributeValueJSON::Generator, RCHandle<StockAttributeValueJSON>, StockAttributeValueJSON *, bool > fieldGeneratorShortPossessiveName;
        JSONHoldingGenerator<StockAttributeValueJSON::Generator, RCHandle<StockAttributeValueJSON>, StockAttributeValueJSON *, bool > fieldGeneratorMediumName;
        JSONHoldingGenerator<StockAttributeValueJSON::Generator, RCHandle<StockAttributeValueJSON>, StockAttributeValueJSON *, bool > fieldGeneratorLongName;
        JSONHoldingGenerator<StockAttributeValueJSON::Generator, RCHandle<StockAttributeValueJSON>, StockAttributeValueJSON *, bool > fieldGeneratorPrice;
        JSONHoldingGenerator<DateAndOrTimeJSON::Generator, RCHandle<DateAndOrTimeJSON>, DateAndOrTimeJSON *, bool > fieldGeneratorPriceDate;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorIntraDayPriceSource;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorCurrency;
        JSONHoldingArrayGenerator<StockHistoricalQuoteJSON::Generator, RCHandle<StockHistoricalQuoteJSON>, StockHistoricalQuoteJSON *, bool > fieldGeneratorIntradayPrices;
        JSONHoldingArrayGenerator<StockHistoricalQuoteJSON::Generator, RCHandle<StockHistoricalQuoteJSON>, StockHistoricalQuoteJSON *, bool > fieldGeneratorDailyHistoricalPrices;
        JSONHoldingGenerator<StockAttributeValueJSON::Generator, RCHandle<StockAttributeValueJSON>, StockAttributeValueJSON *, bool > fieldGeneratorPERatio;
        JSONHoldingGenerator<StockAttributeValueJSON::Generator, RCHandle<StockAttributeValueJSON>, StockAttributeValueJSON *, bool > fieldGeneratorMarketCap;
        JSONHoldingGenerator<StockAttributeValueJSON::Generator, RCHandle<StockAttributeValueJSON>, StockAttributeValueJSON *, bool > fieldGeneratorVolume;
        JSONHoldingGenerator<StockAttributeValueJSON::Generator, RCHandle<StockAttributeValueJSON>, StockAttributeValueJSON *, bool > fieldGeneratorValueChange;
        JSONHoldingGenerator<StockAttributeValueJSON::Generator, RCHandle<StockAttributeValueJSON>, StockAttributeValueJSON *, bool > fieldGeneratorPercentChange;
        JSONHoldingGenerator<DateAndOrTimeJSON::Generator, RCHandle<DateAndOrTimeJSON>, DateAndOrTimeJSON *, bool > fieldGeneratorPreviousCloseDate;
        JSONHoldingGenerator<JSONNumberTextGenerator, std::string, const char * > fieldGeneratorOpen;
        JSONHoldingGenerator<JSONNumberTextGenerator, std::string, const char * > fieldGeneratorClose;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorChartImageURL1D;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorChartImageURL5D;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorChartImageURL3M;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorChartImageURL6M;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorChartImageURL1Y;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorExternalURL;
        JSONHoldingGenerator<StockAttributeValueJSON::Generator, RCHandle<StockAttributeValueJSON>, StockAttributeValueJSON *, bool > fieldGeneratorStockExchangeShortName;
        JSONHoldingGenerator<StockAttributeValueJSON::Generator, RCHandle<StockAttributeValueJSON>, StockAttributeValueJSON *, bool > fieldGeneratorStockExchangeLongName;
        JSONHoldingGenerator<StockAttributeValueJSON::Generator, RCHandle<StockAttributeValueJSON>, StockAttributeValueJSON *, bool > fieldGeneratorStockExchangeSymbol;
        JSONHoldingGenerator<JSONNumberTextGenerator, std::string, const char * > fieldGeneratorStockExchangeUTCOffset;
        JSONHoldingGenerator<JSONIntegerUnboundRangeGenerator, OInteger, o_integer > fieldGeneratorNumShares;
        JSONHoldingGenerator<DateTimeRangeSpecJSON::Generator, RCHandle<DateTimeRangeSpecJSON>, DateTimeRangeSpecJSON *, bool > fieldGeneratorDateRange;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorImplicitDateRange;
        JSONHoldingGenerator<JSONNumberTextGenerator, std::string, const char * > fieldGeneratorHigh;
        JSONHoldingGenerator<JSONNumberTextGenerator, std::string, const char * > fieldGeneratorLow;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorBasePrice;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorBasePriceUpper;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorBasePriceLower;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorTradingValue;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorVwap;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorMarketcap;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorTradingUnit;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorCalcSharesOutstanding;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorTickSizeFlag;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorPrincipalMarket;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorIndustryName;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorNikkeiIndustryName;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorNikkeiFlag;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorTopix500Flag;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorSs1Price;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorSs1PriceOpen;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorSs1PriceHigh;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorSs1PriceLow;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorSs1PriceChg;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorSs1PricePchg;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorSs1Volume;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorSs1Vwap;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorSs2Price;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorSs2PriceOpen;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorSs2PriceHigh;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorSs2PriceLow;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorSs2PriceChg;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorSs2PricePchg;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorSs2Volume;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorSs2Vwap;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorCorpPer;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorBeta90Topix;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorBeta180Topix;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorBeta90Nikkei225;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorBeta180Nikkei225;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorEarningScheduledDate;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorEarningFullyearDate;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorDisplayDividendDate;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorExDividendDate;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorCoSettleFyEnded;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorCoSettleRoe;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorCoSettleDps;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorCoEstFyEnded;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorCoEstDps;
        class UnknownFieldGenerator : public JSONValueHandler
          {
          public:
            bool ignore;
            std::vector<std::string> field_names;
            std::vector<RCHandle<JSONValue> > field_values;
            string_index *index;
            UnknownFieldGenerator(bool init_ignore) : ignore(init_ignore)
              {
            index = create_string_index();
              }
            ~UnknownFieldGenerator(void)
              {
                destroy_string_index(index);
              }


          protected:
            void new_value(JSONValue *item)
              {
                if (ignore)
                    return;
                assert(field_names.size() == (field_values.size() + 1));
                enter_into_string_index(index, field_names[field_values.size()].c_str(), item);
                field_values.push_back(item);
              }

          public:
            void reset()
              {
                field_names.clear();
                field_values.clear();
                destroy_string_index(index);
            index = create_string_index();
              }
          };
        UnknownFieldGenerator unknownFieldGenerator;


      protected:
        void start(void)
          {
          }
        JSONHandler *start_field(const char *field_name)
          {
            JSONHandler *result = start_known_field(field_name);
            if (result != NULL)
                return result;
            assert(unknownFieldGenerator.field_names.size() ==
                   unknownFieldGenerator.field_values.size());
            if (unknownFieldGenerator.ignore)
              {
                assert(unknownFieldGenerator.field_names.size() == 0);
              }
            else
              {
                unknownFieldGenerator.field_names.push_back(field_name);
              }
            return &unknownFieldGenerator;
          }
        void finish_field(const char *field_name, JSONHandler *field_handler)
          {
          }
        void finish(void)
          {
            StockListingJSON *result = new StockListingJSON();
            assert(result != NULL);
            RCHandle<StockListingJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraStockListingAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void finish(StockListingJSON *result)
          {
            if (fieldGeneratorListingID.have_value)
              {
                result->setListingID(fieldGeneratorListingID.value);
                fieldGeneratorListingID.have_value = false;
              }
            else if (!(result->hasListingID()))
              {
                error("When parsing the object for %what%, the \"ListingID\" field was missing.");
              }
            if (fieldGeneratorSymbol.have_value)
              {
                result->setSymbol(fieldGeneratorSymbol.value.referenced());
                fieldGeneratorSymbol.have_value = false;
              }
            else if (!(result->hasSymbol()))
              {
                error("When parsing the object for %what%, the \"Symbol\" field was missing.");
              }
            if (fieldGeneratorShortName.have_value)
              {
                result->setShortName(fieldGeneratorShortName.value.referenced());
                fieldGeneratorShortName.have_value = false;
              }
            if (fieldGeneratorShortPossessiveName.have_value)
              {
                result->setShortPossessiveName(fieldGeneratorShortPossessiveName.value.referenced());
                fieldGeneratorShortPossessiveName.have_value = false;
              }
            if (fieldGeneratorMediumName.have_value)
              {
                result->setMediumName(fieldGeneratorMediumName.value.referenced());
                fieldGeneratorMediumName.have_value = false;
              }
            if (fieldGeneratorLongName.have_value)
              {
                result->setLongName(fieldGeneratorLongName.value.referenced());
                fieldGeneratorLongName.have_value = false;
              }
            if (fieldGeneratorPrice.have_value)
              {
                result->setPrice(fieldGeneratorPrice.value.referenced());
                fieldGeneratorPrice.have_value = false;
              }
            if (fieldGeneratorPriceDate.have_value)
              {
                result->setPriceDate(fieldGeneratorPriceDate.value.referenced());
                fieldGeneratorPriceDate.have_value = false;
              }
            if (fieldGeneratorIntraDayPriceSource.have_value)
              {
                result->setIntraDayPriceSource(fieldGeneratorIntraDayPriceSource.value);
                fieldGeneratorIntraDayPriceSource.have_value = false;
              }
            if (fieldGeneratorCurrency.have_value)
              {
                result->setCurrency(fieldGeneratorCurrency.value);
                fieldGeneratorCurrency.have_value = false;
              }
            else if (!(result->hasCurrency()))
              {
                error("When parsing the object for %what%, the \"Currency\" field was missing.");
              }
            if (fieldGeneratorIntradayPrices.have_value)
              {
                result->initIntradayPrices();
                size_t count = fieldGeneratorIntradayPrices.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendIntradayPrices(fieldGeneratorIntradayPrices.value[num].referenced());
                  }
                fieldGeneratorIntradayPrices.value.clear();
                fieldGeneratorIntradayPrices.have_value = false;
              }
            if (fieldGeneratorDailyHistoricalPrices.have_value)
              {
                result->initDailyHistoricalPrices();
                size_t count = fieldGeneratorDailyHistoricalPrices.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendDailyHistoricalPrices(fieldGeneratorDailyHistoricalPrices.value[num].referenced());
                  }
                fieldGeneratorDailyHistoricalPrices.value.clear();
                fieldGeneratorDailyHistoricalPrices.have_value = false;
              }
            if (fieldGeneratorPERatio.have_value)
              {
                result->setPERatio(fieldGeneratorPERatio.value.referenced());
                fieldGeneratorPERatio.have_value = false;
              }
            if (fieldGeneratorMarketCap.have_value)
              {
                result->setMarketCap(fieldGeneratorMarketCap.value.referenced());
                fieldGeneratorMarketCap.have_value = false;
              }
            if (fieldGeneratorVolume.have_value)
              {
                result->setVolume(fieldGeneratorVolume.value.referenced());
                fieldGeneratorVolume.have_value = false;
              }
            if (fieldGeneratorValueChange.have_value)
              {
                result->setValueChange(fieldGeneratorValueChange.value.referenced());
                fieldGeneratorValueChange.have_value = false;
              }
            if (fieldGeneratorPercentChange.have_value)
              {
                result->setPercentChange(fieldGeneratorPercentChange.value.referenced());
                fieldGeneratorPercentChange.have_value = false;
              }
            if (fieldGeneratorPreviousCloseDate.have_value)
              {
                result->setPreviousCloseDate(fieldGeneratorPreviousCloseDate.value.referenced());
                fieldGeneratorPreviousCloseDate.have_value = false;
              }
            if (fieldGeneratorOpen.have_value)
              {
                result->setOpenText(fieldGeneratorOpen.value);
                fieldGeneratorOpen.have_value = false;
              }
            if (fieldGeneratorClose.have_value)
              {
                result->setCloseText(fieldGeneratorClose.value);
                fieldGeneratorClose.have_value = false;
              }
            if (fieldGeneratorChartImageURL1D.have_value)
              {
                result->setChartImageURL1D(fieldGeneratorChartImageURL1D.value);
                fieldGeneratorChartImageURL1D.have_value = false;
              }
            if (fieldGeneratorChartImageURL5D.have_value)
              {
                result->setChartImageURL5D(fieldGeneratorChartImageURL5D.value);
                fieldGeneratorChartImageURL5D.have_value = false;
              }
            if (fieldGeneratorChartImageURL3M.have_value)
              {
                result->setChartImageURL3M(fieldGeneratorChartImageURL3M.value);
                fieldGeneratorChartImageURL3M.have_value = false;
              }
            if (fieldGeneratorChartImageURL6M.have_value)
              {
                result->setChartImageURL6M(fieldGeneratorChartImageURL6M.value);
                fieldGeneratorChartImageURL6M.have_value = false;
              }
            if (fieldGeneratorChartImageURL1Y.have_value)
              {
                result->setChartImageURL1Y(fieldGeneratorChartImageURL1Y.value);
                fieldGeneratorChartImageURL1Y.have_value = false;
              }
            if (fieldGeneratorExternalURL.have_value)
              {
                result->setExternalURL(fieldGeneratorExternalURL.value);
                fieldGeneratorExternalURL.have_value = false;
              }
            if (fieldGeneratorStockExchangeShortName.have_value)
              {
                result->setStockExchangeShortName(fieldGeneratorStockExchangeShortName.value.referenced());
                fieldGeneratorStockExchangeShortName.have_value = false;
              }
            else if (!(result->hasStockExchangeShortName()))
              {
                error("When parsing the object for %what%, the \"StockExchangeShortName\" field was missing.");
              }
            if (fieldGeneratorStockExchangeLongName.have_value)
              {
                result->setStockExchangeLongName(fieldGeneratorStockExchangeLongName.value.referenced());
                fieldGeneratorStockExchangeLongName.have_value = false;
              }
            else if (!(result->hasStockExchangeLongName()))
              {
                error("When parsing the object for %what%, the \"StockExchangeLongName\" field was missing.");
              }
            if (fieldGeneratorStockExchangeSymbol.have_value)
              {
                result->setStockExchangeSymbol(fieldGeneratorStockExchangeSymbol.value.referenced());
                fieldGeneratorStockExchangeSymbol.have_value = false;
              }
            else if (!(result->hasStockExchangeSymbol()))
              {
                error("When parsing the object for %what%, the \"StockExchangeSymbol\" field was missing.");
              }
            if (fieldGeneratorStockExchangeUTCOffset.have_value)
              {
                result->setStockExchangeUTCOffsetText(fieldGeneratorStockExchangeUTCOffset.value);
                fieldGeneratorStockExchangeUTCOffset.have_value = false;
              }
            if (fieldGeneratorNumShares.have_value)
              {
                result->setNumShares(fieldGeneratorNumShares.value);
                fieldGeneratorNumShares.have_value = false;
              }
            if (fieldGeneratorDateRange.have_value)
              {
                result->setDateRange(fieldGeneratorDateRange.value.referenced());
                fieldGeneratorDateRange.have_value = false;
              }
            if (fieldGeneratorImplicitDateRange.have_value)
              {
                result->setImplicitDateRange(fieldGeneratorImplicitDateRange.value);
                fieldGeneratorImplicitDateRange.have_value = false;
              }
            if (fieldGeneratorHigh.have_value)
              {
                result->setHighText(fieldGeneratorHigh.value);
                fieldGeneratorHigh.have_value = false;
              }
            if (fieldGeneratorLow.have_value)
              {
                result->setLowText(fieldGeneratorLow.value);
                fieldGeneratorLow.have_value = false;
              }
            if (fieldGeneratorBasePrice.have_value)
              {
                result->setBasePrice(fieldGeneratorBasePrice.value);
                fieldGeneratorBasePrice.have_value = false;
              }
            if (fieldGeneratorBasePriceUpper.have_value)
              {
                result->setBasePriceUpper(fieldGeneratorBasePriceUpper.value);
                fieldGeneratorBasePriceUpper.have_value = false;
              }
            if (fieldGeneratorBasePriceLower.have_value)
              {
                result->setBasePriceLower(fieldGeneratorBasePriceLower.value);
                fieldGeneratorBasePriceLower.have_value = false;
              }
            if (fieldGeneratorTradingValue.have_value)
              {
                result->setTradingValue(fieldGeneratorTradingValue.value);
                fieldGeneratorTradingValue.have_value = false;
              }
            if (fieldGeneratorVwap.have_value)
              {
                result->setVwap(fieldGeneratorVwap.value);
                fieldGeneratorVwap.have_value = false;
              }
            if (fieldGeneratorMarketcap.have_value)
              {
                result->setMarketcap(fieldGeneratorMarketcap.value);
                fieldGeneratorMarketcap.have_value = false;
              }
            if (fieldGeneratorTradingUnit.have_value)
              {
                result->setTradingUnit(fieldGeneratorTradingUnit.value);
                fieldGeneratorTradingUnit.have_value = false;
              }
            if (fieldGeneratorCalcSharesOutstanding.have_value)
              {
                result->setCalcSharesOutstanding(fieldGeneratorCalcSharesOutstanding.value);
                fieldGeneratorCalcSharesOutstanding.have_value = false;
              }
            if (fieldGeneratorTickSizeFlag.have_value)
              {
                result->setTickSizeFlag(fieldGeneratorTickSizeFlag.value);
                fieldGeneratorTickSizeFlag.have_value = false;
              }
            if (fieldGeneratorPrincipalMarket.have_value)
              {
                result->setPrincipalMarket(fieldGeneratorPrincipalMarket.value);
                fieldGeneratorPrincipalMarket.have_value = false;
              }
            if (fieldGeneratorIndustryName.have_value)
              {
                result->setIndustryName(fieldGeneratorIndustryName.value);
                fieldGeneratorIndustryName.have_value = false;
              }
            if (fieldGeneratorNikkeiIndustryName.have_value)
              {
                result->setNikkeiIndustryName(fieldGeneratorNikkeiIndustryName.value);
                fieldGeneratorNikkeiIndustryName.have_value = false;
              }
            if (fieldGeneratorNikkeiFlag.have_value)
              {
                result->setNikkeiFlag(fieldGeneratorNikkeiFlag.value);
                fieldGeneratorNikkeiFlag.have_value = false;
              }
            if (fieldGeneratorTopix500Flag.have_value)
              {
                result->setTopix500Flag(fieldGeneratorTopix500Flag.value);
                fieldGeneratorTopix500Flag.have_value = false;
              }
            if (fieldGeneratorSs1Price.have_value)
              {
                result->setSs1Price(fieldGeneratorSs1Price.value);
                fieldGeneratorSs1Price.have_value = false;
              }
            if (fieldGeneratorSs1PriceOpen.have_value)
              {
                result->setSs1PriceOpen(fieldGeneratorSs1PriceOpen.value);
                fieldGeneratorSs1PriceOpen.have_value = false;
              }
            if (fieldGeneratorSs1PriceHigh.have_value)
              {
                result->setSs1PriceHigh(fieldGeneratorSs1PriceHigh.value);
                fieldGeneratorSs1PriceHigh.have_value = false;
              }
            if (fieldGeneratorSs1PriceLow.have_value)
              {
                result->setSs1PriceLow(fieldGeneratorSs1PriceLow.value);
                fieldGeneratorSs1PriceLow.have_value = false;
              }
            if (fieldGeneratorSs1PriceChg.have_value)
              {
                result->setSs1PriceChg(fieldGeneratorSs1PriceChg.value);
                fieldGeneratorSs1PriceChg.have_value = false;
              }
            if (fieldGeneratorSs1PricePchg.have_value)
              {
                result->setSs1PricePchg(fieldGeneratorSs1PricePchg.value);
                fieldGeneratorSs1PricePchg.have_value = false;
              }
            if (fieldGeneratorSs1Volume.have_value)
              {
                result->setSs1Volume(fieldGeneratorSs1Volume.value);
                fieldGeneratorSs1Volume.have_value = false;
              }
            if (fieldGeneratorSs1Vwap.have_value)
              {
                result->setSs1Vwap(fieldGeneratorSs1Vwap.value);
                fieldGeneratorSs1Vwap.have_value = false;
              }
            if (fieldGeneratorSs2Price.have_value)
              {
                result->setSs2Price(fieldGeneratorSs2Price.value);
                fieldGeneratorSs2Price.have_value = false;
              }
            if (fieldGeneratorSs2PriceOpen.have_value)
              {
                result->setSs2PriceOpen(fieldGeneratorSs2PriceOpen.value);
                fieldGeneratorSs2PriceOpen.have_value = false;
              }
            if (fieldGeneratorSs2PriceHigh.have_value)
              {
                result->setSs2PriceHigh(fieldGeneratorSs2PriceHigh.value);
                fieldGeneratorSs2PriceHigh.have_value = false;
              }
            if (fieldGeneratorSs2PriceLow.have_value)
              {
                result->setSs2PriceLow(fieldGeneratorSs2PriceLow.value);
                fieldGeneratorSs2PriceLow.have_value = false;
              }
            if (fieldGeneratorSs2PriceChg.have_value)
              {
                result->setSs2PriceChg(fieldGeneratorSs2PriceChg.value);
                fieldGeneratorSs2PriceChg.have_value = false;
              }
            if (fieldGeneratorSs2PricePchg.have_value)
              {
                result->setSs2PricePchg(fieldGeneratorSs2PricePchg.value);
                fieldGeneratorSs2PricePchg.have_value = false;
              }
            if (fieldGeneratorSs2Volume.have_value)
              {
                result->setSs2Volume(fieldGeneratorSs2Volume.value);
                fieldGeneratorSs2Volume.have_value = false;
              }
            if (fieldGeneratorSs2Vwap.have_value)
              {
                result->setSs2Vwap(fieldGeneratorSs2Vwap.value);
                fieldGeneratorSs2Vwap.have_value = false;
              }
            if (fieldGeneratorCorpPer.have_value)
              {
                result->setCorpPer(fieldGeneratorCorpPer.value);
                fieldGeneratorCorpPer.have_value = false;
              }
            if (fieldGeneratorBeta90Topix.have_value)
              {
                result->setBeta90Topix(fieldGeneratorBeta90Topix.value);
                fieldGeneratorBeta90Topix.have_value = false;
              }
            if (fieldGeneratorBeta180Topix.have_value)
              {
                result->setBeta180Topix(fieldGeneratorBeta180Topix.value);
                fieldGeneratorBeta180Topix.have_value = false;
              }
            if (fieldGeneratorBeta90Nikkei225.have_value)
              {
                result->setBeta90Nikkei225(fieldGeneratorBeta90Nikkei225.value);
                fieldGeneratorBeta90Nikkei225.have_value = false;
              }
            if (fieldGeneratorBeta180Nikkei225.have_value)
              {
                result->setBeta180Nikkei225(fieldGeneratorBeta180Nikkei225.value);
                fieldGeneratorBeta180Nikkei225.have_value = false;
              }
            if (fieldGeneratorEarningScheduledDate.have_value)
              {
                result->setEarningScheduledDate(fieldGeneratorEarningScheduledDate.value);
                fieldGeneratorEarningScheduledDate.have_value = false;
              }
            if (fieldGeneratorEarningFullyearDate.have_value)
              {
                result->setEarningFullyearDate(fieldGeneratorEarningFullyearDate.value);
                fieldGeneratorEarningFullyearDate.have_value = false;
              }
            if (fieldGeneratorDisplayDividendDate.have_value)
              {
                result->setDisplayDividendDate(fieldGeneratorDisplayDividendDate.value);
                fieldGeneratorDisplayDividendDate.have_value = false;
              }
            if (fieldGeneratorExDividendDate.have_value)
              {
                result->setExDividendDate(fieldGeneratorExDividendDate.value);
                fieldGeneratorExDividendDate.have_value = false;
              }
            if (fieldGeneratorCoSettleFyEnded.have_value)
              {
                result->setCoSettleFyEnded(fieldGeneratorCoSettleFyEnded.value);
                fieldGeneratorCoSettleFyEnded.have_value = false;
              }
            if (fieldGeneratorCoSettleRoe.have_value)
              {
                result->setCoSettleRoe(fieldGeneratorCoSettleRoe.value);
                fieldGeneratorCoSettleRoe.have_value = false;
              }
            if (fieldGeneratorCoSettleDps.have_value)
              {
                result->setCoSettleDps(fieldGeneratorCoSettleDps.value);
                fieldGeneratorCoSettleDps.have_value = false;
              }
            if (fieldGeneratorCoEstFyEnded.have_value)
              {
                result->setCoEstFyEnded(fieldGeneratorCoEstFyEnded.value);
                fieldGeneratorCoEstFyEnded.have_value = false;
              }
            if (fieldGeneratorCoEstDps.have_value)
              {
                result->setCoEstDps(fieldGeneratorCoEstDps.value);
                fieldGeneratorCoEstDps.have_value = false;
              }
          }
        virtual void handle_result(StockListingJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'B':
                    switch ((unsigned char)(field_name[1]))
                      {
                        case 'a':
                            if (strncmp(&(field_name[2]), "sePrice", 7) == 0)
                              {
                                switch ((unsigned char)(field_name[9]))
                                  {
                                    case 0:
                                        return &fieldGeneratorBasePrice;
                                    case 'L':
                                        if (strcmp(&(field_name[10]), "ower") == 0)
                                            return &fieldGeneratorBasePriceLower;
                                        break;
                                    case 'U':
                                        if (strcmp(&(field_name[10]), "pper") == 0)
                                            return &fieldGeneratorBasePriceUpper;
                                        break;
                                    default:
                                        break;
                                  }
                              }
                            break;
                        case 'e':
                            if (strncmp(&(field_name[2]), "ta", 2) == 0)
                              {
                                switch ((unsigned char)(field_name[4]))
                                  {
                                    case '1':
                                        if (strncmp(&(field_name[5]), "80", 2) == 0)
                                          {
                                            switch ((unsigned char)(field_name[7]))
                                              {
                                                case 'N':
                                                    if (strcmp(&(field_name[8]), "ikkei225") == 0)
                                                        return &fieldGeneratorBeta180Nikkei225;
                                                    break;
                                                case 'T':
                                                    if (strcmp(&(field_name[8]), "opix") == 0)
                                                        return &fieldGeneratorBeta180Topix;
                                                    break;
                                                default:
                                                    break;
                                              }
                                          }
                                        break;
                                    case '9':
                                        if (strncmp(&(field_name[5]), "0", 1) == 0)
                                          {
                                            switch ((unsigned char)(field_name[6]))
                                              {
                                                case 'N':
                                                    if (strcmp(&(field_name[7]), "ikkei225") == 0)
                                                        return &fieldGeneratorBeta90Nikkei225;
                                                    break;
                                                case 'T':
                                                    if (strcmp(&(field_name[7]), "opix") == 0)
                                                        return &fieldGeneratorBeta90Topix;
                                                    break;
                                                default:
                                                    break;
                                              }
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
                    break;
                case 'C':
                    switch ((unsigned char)(field_name[1]))
                      {
                        case 'a':
                            if (strcmp(&(field_name[2]), "lcSharesOutstanding") == 0)
                                return &fieldGeneratorCalcSharesOutstanding;
                            break;
                        case 'h':
                            if (strncmp(&(field_name[2]), "artImageURL", 11) == 0)
                              {
                                switch ((unsigned char)(field_name[13]))
                                  {
                                    case '1':
                                        switch ((unsigned char)(field_name[14]))
                                          {
                                            case 'D':
                                                if (field_name[15] == 0)
                                                    return &fieldGeneratorChartImageURL1D;
                                                break;
                                            case 'Y':
                                                if (field_name[15] == 0)
                                                    return &fieldGeneratorChartImageURL1Y;
                                                break;
                                            default:
                                                break;
                                          }
                                        break;
                                    case '3':
                                        if (strcmp(&(field_name[14]), "M") == 0)
                                            return &fieldGeneratorChartImageURL3M;
                                        break;
                                    case '5':
                                        if (strcmp(&(field_name[14]), "D") == 0)
                                            return &fieldGeneratorChartImageURL5D;
                                        break;
                                    case '6':
                                        if (strcmp(&(field_name[14]), "M") == 0)
                                            return &fieldGeneratorChartImageURL6M;
                                        break;
                                    default:
                                        break;
                                  }
                              }
                            break;
                        case 'l':
                            if (strcmp(&(field_name[2]), "ose") == 0)
                                return &fieldGeneratorClose;
                            break;
                        case 'o':
                            switch ((unsigned char)(field_name[2]))
                              {
                                case 'E':
                                    if (strncmp(&(field_name[3]), "st", 2) == 0)
                                      {
                                        switch ((unsigned char)(field_name[5]))
                                          {
                                            case 'D':
                                                if (strcmp(&(field_name[6]), "ps") == 0)
                                                    return &fieldGeneratorCoEstDps;
                                                break;
                                            case 'F':
                                                if (strcmp(&(field_name[6]), "yEnded") == 0)
                                                    return &fieldGeneratorCoEstFyEnded;
                                                break;
                                            default:
                                                break;
                                          }
                                      }
                                    break;
                                case 'S':
                                    if (strncmp(&(field_name[3]), "ettle", 5) == 0)
                                      {
                                        switch ((unsigned char)(field_name[8]))
                                          {
                                            case 'D':
                                                if (strcmp(&(field_name[9]), "ps") == 0)
                                                    return &fieldGeneratorCoSettleDps;
                                                break;
                                            case 'F':
                                                if (strcmp(&(field_name[9]), "yEnded") == 0)
                                                    return &fieldGeneratorCoSettleFyEnded;
                                                break;
                                            case 'R':
                                                if (strcmp(&(field_name[9]), "oe") == 0)
                                                    return &fieldGeneratorCoSettleRoe;
                                                break;
                                            default:
                                                break;
                                          }
                                      }
                                    break;
                                case 'r':
                                    if (strcmp(&(field_name[3]), "pPer") == 0)
                                        return &fieldGeneratorCorpPer;
                                    break;
                                default:
                                    break;
                              }
                            break;
                        case 'u':
                            if (strcmp(&(field_name[2]), "rrency") == 0)
                                return &fieldGeneratorCurrency;
                            break;
                        default:
                            break;
                      }
                    break;
                case 'D':
                    switch ((unsigned char)(field_name[1]))
                      {
                        case 'a':
                            switch ((unsigned char)(field_name[2]))
                              {
                                case 'i':
                                    if (strcmp(&(field_name[3]), "lyHistoricalPrices") == 0)
                                        return &fieldGeneratorDailyHistoricalPrices;
                                    break;
                                case 't':
                                    if (strcmp(&(field_name[3]), "eRange") == 0)
                                        return &fieldGeneratorDateRange;
                                    break;
                                default:
                                    break;
                              }
                            break;
                        case 'i':
                            if (strcmp(&(field_name[2]), "splayDividendDate") == 0)
                                return &fieldGeneratorDisplayDividendDate;
                            break;
                        default:
                            break;
                      }
                    break;
                case 'E':
                    switch ((unsigned char)(field_name[1]))
                      {
                        case 'a':
                            if (strncmp(&(field_name[2]), "rning", 5) == 0)
                              {
                                switch ((unsigned char)(field_name[7]))
                                  {
                                    case 'F':
                                        if (strcmp(&(field_name[8]), "ullyearDate") == 0)
                                            return &fieldGeneratorEarningFullyearDate;
                                        break;
                                    case 'S':
                                        if (strcmp(&(field_name[8]), "cheduledDate") == 0)
                                            return &fieldGeneratorEarningScheduledDate;
                                        break;
                                    default:
                                        break;
                                  }
                              }
                            break;
                        case 'x':
                            switch ((unsigned char)(field_name[2]))
                              {
                                case 'D':
                                    if (strcmp(&(field_name[3]), "ividendDate") == 0)
                                        return &fieldGeneratorExDividendDate;
                                    break;
                                case 't':
                                    if (strcmp(&(field_name[3]), "ernalURL") == 0)
                                        return &fieldGeneratorExternalURL;
                                    break;
                                default:
                                    break;
                              }
                            break;
                        default:
                            break;
                      }
                    break;
                case 'H':
                    if (strcmp(&(field_name[1]), "igh") == 0)
                        return &fieldGeneratorHigh;
                    break;
                case 'I':
                    switch ((unsigned char)(field_name[1]))
                      {
                        case 'm':
                            if (strcmp(&(field_name[2]), "plicitDateRange") == 0)
                                return &fieldGeneratorImplicitDateRange;
                            break;
                        case 'n':
                            switch ((unsigned char)(field_name[2]))
                              {
                                case 'd':
                                    if (strcmp(&(field_name[3]), "ustryName") == 0)
                                        return &fieldGeneratorIndustryName;
                                    break;
                                case 't':
                                    if (strncmp(&(field_name[3]), "ra", 2) == 0)
                                      {
                                        switch ((unsigned char)(field_name[5]))
                                          {
                                            case 'D':
                                                if (strcmp(&(field_name[6]), "ayPriceSource") == 0)
                                                    return &fieldGeneratorIntraDayPriceSource;
                                                break;
                                            case 'd':
                                                if (strcmp(&(field_name[6]), "ayPrices") == 0)
                                                    return &fieldGeneratorIntradayPrices;
                                                break;
                                            default:
                                                break;
                                          }
                                      }
                                    break;
                                default:
                                    break;
                              }
                            break;
                        default:
                            break;
                      }
                    break;
                case 'L':
                    switch ((unsigned char)(field_name[1]))
                      {
                        case 'i':
                            if (strcmp(&(field_name[2]), "stingID") == 0)
                                return &fieldGeneratorListingID;
                            break;
                        case 'o':
                            switch ((unsigned char)(field_name[2]))
                              {
                                case 'n':
                                    if (strcmp(&(field_name[3]), "gName") == 0)
                                        return &fieldGeneratorLongName;
                                    break;
                                case 'w':
                                    if (field_name[3] == 0)
                                        return &fieldGeneratorLow;
                                    break;
                                default:
                                    break;
                              }
                            break;
                        default:
                            break;
                      }
                    break;
                case 'M':
                    switch ((unsigned char)(field_name[1]))
                      {
                        case 'a':
                            if (strncmp(&(field_name[2]), "rket", 4) == 0)
                              {
                                switch ((unsigned char)(field_name[6]))
                                  {
                                    case 'C':
                                        if (strcmp(&(field_name[7]), "ap") == 0)
                                            return &fieldGeneratorMarketCap;
                                        break;
                                    case 'c':
                                        if (strcmp(&(field_name[7]), "ap") == 0)
                                            return &fieldGeneratorMarketcap;
                                        break;
                                    default:
                                        break;
                                  }
                              }
                            break;
                        case 'e':
                            if (strcmp(&(field_name[2]), "diumName") == 0)
                                return &fieldGeneratorMediumName;
                            break;
                        default:
                            break;
                      }
                    break;
                case 'N':
                    switch ((unsigned char)(field_name[1]))
                      {
                        case 'i':
                            if (strncmp(&(field_name[2]), "kkei", 4) == 0)
                              {
                                switch ((unsigned char)(field_name[6]))
                                  {
                                    case 'F':
                                        if (strcmp(&(field_name[7]), "lag") == 0)
                                            return &fieldGeneratorNikkeiFlag;
                                        break;
                                    case 'I':
                                        if (strcmp(&(field_name[7]), "ndustryName") == 0)
                                            return &fieldGeneratorNikkeiIndustryName;
                                        break;
                                    default:
                                        break;
                                  }
                              }
                            break;
                        case 'u':
                            if (strcmp(&(field_name[2]), "mShares") == 0)
                                return &fieldGeneratorNumShares;
                            break;
                        default:
                            break;
                      }
                    break;
                case 'O':
                    if (strcmp(&(field_name[1]), "pen") == 0)
                        return &fieldGeneratorOpen;
                    break;
                case 'P':
                    switch ((unsigned char)(field_name[1]))
                      {
                        case 'E':
                            if (strcmp(&(field_name[2]), "Ratio") == 0)
                                return &fieldGeneratorPERatio;
                            break;
                        case 'e':
                            if (strcmp(&(field_name[2]), "rcentChange") == 0)
                                return &fieldGeneratorPercentChange;
                            break;
                        case 'r':
                            switch ((unsigned char)(field_name[2]))
                              {
                                case 'e':
                                    if (strcmp(&(field_name[3]), "viousCloseDate") == 0)
                                        return &fieldGeneratorPreviousCloseDate;
                                    break;
                                case 'i':
                                    switch ((unsigned char)(field_name[3]))
                                      {
                                        case 'c':
                                            if (strncmp(&(field_name[4]), "e", 1) == 0)
                                              {
                                                switch ((unsigned char)(field_name[5]))
                                                  {
                                                    case 0:
                                                        return &fieldGeneratorPrice;
                                                    case 'D':
                                                        if (strcmp(&(field_name[6]), "ate") == 0)
                                                            return &fieldGeneratorPriceDate;
                                                        break;
                                                    default:
                                                        break;
                                                  }
                                              }
                                            break;
                                        case 'n':
                                            if (strcmp(&(field_name[4]), "cipalMarket") == 0)
                                                return &fieldGeneratorPrincipalMarket;
                                            break;
                                        default:
                                            break;
                                      }
                                    break;
                                default:
                                    break;
                              }
                            break;
                        default:
                            break;
                      }
                    break;
                case 'S':
                    switch ((unsigned char)(field_name[1]))
                      {
                        case 'h':
                            if (strncmp(&(field_name[2]), "ort", 3) == 0)
                              {
                                switch ((unsigned char)(field_name[5]))
                                  {
                                    case 'N':
                                        if (strcmp(&(field_name[6]), "ame") == 0)
                                            return &fieldGeneratorShortName;
                                        break;
                                    case 'P':
                                        if (strcmp(&(field_name[6]), "ossessiveName") == 0)
                                            return &fieldGeneratorShortPossessiveName;
                                        break;
                                    default:
                                        break;
                                  }
                              }
                            break;
                        case 's':
                            switch ((unsigned char)(field_name[2]))
                              {
                                case '1':
                                    switch ((unsigned char)(field_name[3]))
                                      {
                                        case 'P':
                                            if (strncmp(&(field_name[4]), "rice", 4) == 0)
                                              {
                                                switch ((unsigned char)(field_name[8]))
                                                  {
                                                    case 0:
                                                        return &fieldGeneratorSs1Price;
                                                    case 'C':
                                                        if (strcmp(&(field_name[9]), "hg") == 0)
                                                            return &fieldGeneratorSs1PriceChg;
                                                        break;
                                                    case 'H':
                                                        if (strcmp(&(field_name[9]), "igh") == 0)
                                                            return &fieldGeneratorSs1PriceHigh;
                                                        break;
                                                    case 'L':
                                                        if (strcmp(&(field_name[9]), "ow") == 0)
                                                            return &fieldGeneratorSs1PriceLow;
                                                        break;
                                                    case 'O':
                                                        if (strcmp(&(field_name[9]), "pen") == 0)
                                                            return &fieldGeneratorSs1PriceOpen;
                                                        break;
                                                    case 'P':
                                                        if (strcmp(&(field_name[9]), "chg") == 0)
                                                            return &fieldGeneratorSs1PricePchg;
                                                        break;
                                                    default:
                                                        break;
                                                  }
                                              }
                                            break;
                                        case 'V':
                                            switch ((unsigned char)(field_name[4]))
                                              {
                                                case 'o':
                                                    if (strcmp(&(field_name[5]), "lume") == 0)
                                                        return &fieldGeneratorSs1Volume;
                                                    break;
                                                case 'w':
                                                    if (strcmp(&(field_name[5]), "ap") == 0)
                                                        return &fieldGeneratorSs1Vwap;
                                                    break;
                                                default:
                                                    break;
                                              }
                                            break;
                                        default:
                                            break;
                                      }
                                    break;
                                case '2':
                                    switch ((unsigned char)(field_name[3]))
                                      {
                                        case 'P':
                                            if (strncmp(&(field_name[4]), "rice", 4) == 0)
                                              {
                                                switch ((unsigned char)(field_name[8]))
                                                  {
                                                    case 0:
                                                        return &fieldGeneratorSs2Price;
                                                    case 'C':
                                                        if (strcmp(&(field_name[9]), "hg") == 0)
                                                            return &fieldGeneratorSs2PriceChg;
                                                        break;
                                                    case 'H':
                                                        if (strcmp(&(field_name[9]), "igh") == 0)
                                                            return &fieldGeneratorSs2PriceHigh;
                                                        break;
                                                    case 'L':
                                                        if (strcmp(&(field_name[9]), "ow") == 0)
                                                            return &fieldGeneratorSs2PriceLow;
                                                        break;
                                                    case 'O':
                                                        if (strcmp(&(field_name[9]), "pen") == 0)
                                                            return &fieldGeneratorSs2PriceOpen;
                                                        break;
                                                    case 'P':
                                                        if (strcmp(&(field_name[9]), "chg") == 0)
                                                            return &fieldGeneratorSs2PricePchg;
                                                        break;
                                                    default:
                                                        break;
                                                  }
                                              }
                                            break;
                                        case 'V':
                                            switch ((unsigned char)(field_name[4]))
                                              {
                                                case 'o':
                                                    if (strcmp(&(field_name[5]), "lume") == 0)
                                                        return &fieldGeneratorSs2Volume;
                                                    break;
                                                case 'w':
                                                    if (strcmp(&(field_name[5]), "ap") == 0)
                                                        return &fieldGeneratorSs2Vwap;
                                                    break;
                                                default:
                                                    break;
                                              }
                                            break;
                                        default:
                                            break;
                                      }
                                    break;
                                default:
                                    break;
                              }
                            break;
                        case 't':
                            if (strncmp(&(field_name[2]), "ockExchange", 11) == 0)
                              {
                                switch ((unsigned char)(field_name[13]))
                                  {
                                    case 'L':
                                        if (strcmp(&(field_name[14]), "ongName") == 0)
                                            return &fieldGeneratorStockExchangeLongName;
                                        break;
                                    case 'S':
                                        switch ((unsigned char)(field_name[14]))
                                          {
                                            case 'h':
                                                if (strcmp(&(field_name[15]), "ortName") == 0)
                                                    return &fieldGeneratorStockExchangeShortName;
                                                break;
                                            case 'y':
                                                if (strcmp(&(field_name[15]), "mbol") == 0)
                                                    return &fieldGeneratorStockExchangeSymbol;
                                                break;
                                            default:
                                                break;
                                          }
                                        break;
                                    case 'U':
                                        if (strcmp(&(field_name[14]), "TCOffset") == 0)
                                            return &fieldGeneratorStockExchangeUTCOffset;
                                        break;
                                    default:
                                        break;
                                  }
                              }
                            break;
                        case 'y':
                            if (strcmp(&(field_name[2]), "mbol") == 0)
                                return &fieldGeneratorSymbol;
                            break;
                        default:
                            break;
                      }
                    break;
                case 'T':
                    switch ((unsigned char)(field_name[1]))
                      {
                        case 'i':
                            if (strcmp(&(field_name[2]), "ckSizeFlag") == 0)
                                return &fieldGeneratorTickSizeFlag;
                            break;
                        case 'o':
                            if (strcmp(&(field_name[2]), "pix500Flag") == 0)
                                return &fieldGeneratorTopix500Flag;
                            break;
                        case 'r':
                            if (strncmp(&(field_name[2]), "ading", 5) == 0)
                              {
                                switch ((unsigned char)(field_name[7]))
                                  {
                                    case 'U':
                                        if (strcmp(&(field_name[8]), "nit") == 0)
                                            return &fieldGeneratorTradingUnit;
                                        break;
                                    case 'V':
                                        if (strcmp(&(field_name[8]), "alue") == 0)
                                            return &fieldGeneratorTradingValue;
                                        break;
                                    default:
                                        break;
                                  }
                              }
                            break;
                        default:
                            break;
                      }
                    break;
                case 'V':
                    switch ((unsigned char)(field_name[1]))
                      {
                        case 'a':
                            if (strcmp(&(field_name[2]), "lueChange") == 0)
                                return &fieldGeneratorValueChange;
                            break;
                        case 'o':
                            if (strcmp(&(field_name[2]), "lume") == 0)
                                return &fieldGeneratorVolume;
                            break;
                        case 'w':
                            if (strcmp(&(field_name[2]), "ap") == 0)
                                return &fieldGeneratorVwap;
                            break;
                        default:
                            break;
                      }
                    break;
                default:
                    break;
              }
            return NULL;
          }

      public:
        Generator(bool ignore_extras = false) : fieldGeneratorListingID("field \"ListingID\" of the StockListing class"), fieldGeneratorSymbol("field \"Symbol\" of the StockListing class", ignore_extras), fieldGeneratorShortName("field \"ShortName\" of the StockListing class", ignore_extras), fieldGeneratorShortPossessiveName("field \"ShortPossessiveName\" of the StockListing class", ignore_extras), fieldGeneratorMediumName("field \"MediumName\" of the StockListing class", ignore_extras), fieldGeneratorLongName("field \"LongName\" of the StockListing class", ignore_extras), fieldGeneratorPrice("field \"Price\" of the StockListing class", ignore_extras), fieldGeneratorPriceDate("field \"PriceDate\" of the StockListing class", ignore_extras), fieldGeneratorIntraDayPriceSource("field \"IntraDayPriceSource\" of the StockListing class"), fieldGeneratorCurrency("field \"Currency\" of the StockListing class"), fieldGeneratorIntradayPrices("field \"IntradayPrices\" of the StockListing class", ignore_extras), fieldGeneratorDailyHistoricalPrices("field \"DailyHistoricalPrices\" of the StockListing class", ignore_extras), fieldGeneratorPERatio("field \"PERatio\" of the StockListing class", ignore_extras), fieldGeneratorMarketCap("field \"MarketCap\" of the StockListing class", ignore_extras), fieldGeneratorVolume("field \"Volume\" of the StockListing class", ignore_extras), fieldGeneratorValueChange("field \"ValueChange\" of the StockListing class", ignore_extras), fieldGeneratorPercentChange("field \"PercentChange\" of the StockListing class", ignore_extras), fieldGeneratorPreviousCloseDate("field \"PreviousCloseDate\" of the StockListing class", ignore_extras), fieldGeneratorOpen("field \"Open\" of the StockListing class"), fieldGeneratorClose("field \"Close\" of the StockListing class"), fieldGeneratorChartImageURL1D("field \"ChartImageURL1D\" of the StockListing class"), fieldGeneratorChartImageURL5D("field \"ChartImageURL5D\" of the StockListing class"), fieldGeneratorChartImageURL3M("field \"ChartImageURL3M\" of the StockListing class"), fieldGeneratorChartImageURL6M("field \"ChartImageURL6M\" of the StockListing class"), fieldGeneratorChartImageURL1Y("field \"ChartImageURL1Y\" of the StockListing class"), fieldGeneratorExternalURL("field \"ExternalURL\" of the StockListing class"), fieldGeneratorStockExchangeShortName("field \"StockExchangeShortName\" of the StockListing class", ignore_extras), fieldGeneratorStockExchangeLongName("field \"StockExchangeLongName\" of the StockListing class", ignore_extras), fieldGeneratorStockExchangeSymbol("field \"StockExchangeSymbol\" of the StockListing class", ignore_extras), fieldGeneratorStockExchangeUTCOffset("field \"StockExchangeUTCOffset\" of the StockListing class"), fieldGeneratorNumShares("field \"NumShares\" of the StockListing class"), fieldGeneratorDateRange("field \"DateRange\" of the StockListing class", ignore_extras), fieldGeneratorImplicitDateRange("field \"ImplicitDateRange\" of the StockListing class"), fieldGeneratorHigh("field \"High\" of the StockListing class"), fieldGeneratorLow("field \"Low\" of the StockListing class"), fieldGeneratorBasePrice("field \"BasePrice\" of the StockListing class"), fieldGeneratorBasePriceUpper("field \"BasePriceUpper\" of the StockListing class"), fieldGeneratorBasePriceLower("field \"BasePriceLower\" of the StockListing class"), fieldGeneratorTradingValue("field \"TradingValue\" of the StockListing class"), fieldGeneratorVwap("field \"Vwap\" of the StockListing class"), fieldGeneratorMarketcap("field \"Marketcap\" of the StockListing class"), fieldGeneratorTradingUnit("field \"TradingUnit\" of the StockListing class"), fieldGeneratorCalcSharesOutstanding("field \"CalcSharesOutstanding\" of the StockListing class"), fieldGeneratorTickSizeFlag("field \"TickSizeFlag\" of the StockListing class"), fieldGeneratorPrincipalMarket("field \"PrincipalMarket\" of the StockListing class"), fieldGeneratorIndustryName("field \"IndustryName\" of the StockListing class"), fieldGeneratorNikkeiIndustryName("field \"NikkeiIndustryName\" of the StockListing class"), fieldGeneratorNikkeiFlag("field \"NikkeiFlag\" of the StockListing class"), fieldGeneratorTopix500Flag("field \"Topix500Flag\" of the StockListing class"), fieldGeneratorSs1Price("field \"Ss1Price\" of the StockListing class"), fieldGeneratorSs1PriceOpen("field \"Ss1PriceOpen\" of the StockListing class"), fieldGeneratorSs1PriceHigh("field \"Ss1PriceHigh\" of the StockListing class"), fieldGeneratorSs1PriceLow("field \"Ss1PriceLow\" of the StockListing class"), fieldGeneratorSs1PriceChg("field \"Ss1PriceChg\" of the StockListing class"), fieldGeneratorSs1PricePchg("field \"Ss1PricePchg\" of the StockListing class"), fieldGeneratorSs1Volume("field \"Ss1Volume\" of the StockListing class"), fieldGeneratorSs1Vwap("field \"Ss1Vwap\" of the StockListing class"), fieldGeneratorSs2Price("field \"Ss2Price\" of the StockListing class"), fieldGeneratorSs2PriceOpen("field \"Ss2PriceOpen\" of the StockListing class"), fieldGeneratorSs2PriceHigh("field \"Ss2PriceHigh\" of the StockListing class"), fieldGeneratorSs2PriceLow("field \"Ss2PriceLow\" of the StockListing class"), fieldGeneratorSs2PriceChg("field \"Ss2PriceChg\" of the StockListing class"), fieldGeneratorSs2PricePchg("field \"Ss2PricePchg\" of the StockListing class"), fieldGeneratorSs2Volume("field \"Ss2Volume\" of the StockListing class"), fieldGeneratorSs2Vwap("field \"Ss2Vwap\" of the StockListing class"), fieldGeneratorCorpPer("field \"CorpPer\" of the StockListing class"), fieldGeneratorBeta90Topix("field \"Beta90Topix\" of the StockListing class"), fieldGeneratorBeta180Topix("field \"Beta180Topix\" of the StockListing class"), fieldGeneratorBeta90Nikkei225("field \"Beta90Nikkei225\" of the StockListing class"), fieldGeneratorBeta180Nikkei225("field \"Beta180Nikkei225\" of the StockListing class"), fieldGeneratorEarningScheduledDate("field \"EarningScheduledDate\" of the StockListing class"), fieldGeneratorEarningFullyearDate("field \"EarningFullyearDate\" of the StockListing class"), fieldGeneratorDisplayDividendDate("field \"DisplayDividendDate\" of the StockListing class"), fieldGeneratorExDividendDate("field \"ExDividendDate\" of the StockListing class"), fieldGeneratorCoSettleFyEnded("field \"CoSettleFyEnded\" of the StockListing class"), fieldGeneratorCoSettleRoe("field \"CoSettleRoe\" of the StockListing class"), fieldGeneratorCoSettleDps("field \"CoSettleDps\" of the StockListing class"), fieldGeneratorCoEstFyEnded("field \"CoEstFyEnded\" of the StockListing class"), fieldGeneratorCoEstDps("field \"CoEstDps\" of the StockListing class"), unknownFieldGenerator(ignore_extras)
          {
            set_what("the StockListing class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorListingID.reset();
            fieldGeneratorSymbol.reset();
            fieldGeneratorShortName.reset();
            fieldGeneratorShortPossessiveName.reset();
            fieldGeneratorMediumName.reset();
            fieldGeneratorLongName.reset();
            fieldGeneratorPrice.reset();
            fieldGeneratorPriceDate.reset();
            fieldGeneratorIntraDayPriceSource.reset();
            fieldGeneratorCurrency.reset();
            fieldGeneratorIntradayPrices.reset();
            fieldGeneratorDailyHistoricalPrices.reset();
            fieldGeneratorPERatio.reset();
            fieldGeneratorMarketCap.reset();
            fieldGeneratorVolume.reset();
            fieldGeneratorValueChange.reset();
            fieldGeneratorPercentChange.reset();
            fieldGeneratorPreviousCloseDate.reset();
            fieldGeneratorOpen.reset();
            fieldGeneratorClose.reset();
            fieldGeneratorChartImageURL1D.reset();
            fieldGeneratorChartImageURL5D.reset();
            fieldGeneratorChartImageURL3M.reset();
            fieldGeneratorChartImageURL6M.reset();
            fieldGeneratorChartImageURL1Y.reset();
            fieldGeneratorExternalURL.reset();
            fieldGeneratorStockExchangeShortName.reset();
            fieldGeneratorStockExchangeLongName.reset();
            fieldGeneratorStockExchangeSymbol.reset();
            fieldGeneratorStockExchangeUTCOffset.reset();
            fieldGeneratorNumShares.reset();
            fieldGeneratorDateRange.reset();
            fieldGeneratorImplicitDateRange.reset();
            fieldGeneratorHigh.reset();
            fieldGeneratorLow.reset();
            fieldGeneratorBasePrice.reset();
            fieldGeneratorBasePriceUpper.reset();
            fieldGeneratorBasePriceLower.reset();
            fieldGeneratorTradingValue.reset();
            fieldGeneratorVwap.reset();
            fieldGeneratorMarketcap.reset();
            fieldGeneratorTradingUnit.reset();
            fieldGeneratorCalcSharesOutstanding.reset();
            fieldGeneratorTickSizeFlag.reset();
            fieldGeneratorPrincipalMarket.reset();
            fieldGeneratorIndustryName.reset();
            fieldGeneratorNikkeiIndustryName.reset();
            fieldGeneratorNikkeiFlag.reset();
            fieldGeneratorTopix500Flag.reset();
            fieldGeneratorSs1Price.reset();
            fieldGeneratorSs1PriceOpen.reset();
            fieldGeneratorSs1PriceHigh.reset();
            fieldGeneratorSs1PriceLow.reset();
            fieldGeneratorSs1PriceChg.reset();
            fieldGeneratorSs1PricePchg.reset();
            fieldGeneratorSs1Volume.reset();
            fieldGeneratorSs1Vwap.reset();
            fieldGeneratorSs2Price.reset();
            fieldGeneratorSs2PriceOpen.reset();
            fieldGeneratorSs2PriceHigh.reset();
            fieldGeneratorSs2PriceLow.reset();
            fieldGeneratorSs2PriceChg.reset();
            fieldGeneratorSs2PricePchg.reset();
            fieldGeneratorSs2Volume.reset();
            fieldGeneratorSs2Vwap.reset();
            fieldGeneratorCorpPer.reset();
            fieldGeneratorBeta90Topix.reset();
            fieldGeneratorBeta180Topix.reset();
            fieldGeneratorBeta90Nikkei225.reset();
            fieldGeneratorBeta180Nikkei225.reset();
            fieldGeneratorEarningScheduledDate.reset();
            fieldGeneratorEarningFullyearDate.reset();
            fieldGeneratorDisplayDividendDate.reset();
            fieldGeneratorExDividendDate.reset();
            fieldGeneratorCoSettleFyEnded.reset();
            fieldGeneratorCoSettleRoe.reset();
            fieldGeneratorCoSettleDps.reset();
            fieldGeneratorCoEstFyEnded.reset();
            fieldGeneratorCoEstDps.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* STOCKLISTINGJSON_H */
