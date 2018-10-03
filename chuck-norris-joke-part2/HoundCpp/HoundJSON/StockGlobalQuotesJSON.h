/* file "StockGlobalQuotesJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef STOCKGLOBALQUOTESJSON_H
#define STOCKGLOBALQUOTESJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONStringGenerator.h"
#include "JSONNumberTextGenerator.h"
#include "JSONDoubleGenerator.h"
#include "JSONBooleanGenerator.h"
#include "JSONNullGenerator.h"
#include "JSONParallelGenerator.h"
#include <string>
#include "StockSecurityDetailsJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class StockGlobalQuotesJSON : public ReferenceCounted
  {
  public:
    struct TypeMessage
      {
        size_t key;
        std::string choice0;
        bool choice1;
      };
    struct TypeDelay
      {
        size_t key;
        union
          {
            double choice0;
            bool choice1;
          } u;
      };
    struct TypeOpen
      {
        size_t key;
        union
          {
            double choice0;
            bool choice1;
          } u;
      };
    struct TypeClose
      {
        size_t key;
        union
          {
            double choice0;
            bool choice1;
          } u;
      };
    struct TypeHigh
      {
        size_t key;
        union
          {
            double choice0;
            bool choice1;
          } u;
      };
    struct TypeLow
      {
        size_t key;
        union
          {
            double choice0;
            bool choice1;
          } u;
      };
    struct TypeLast
      {
        size_t key;
        union
          {
            double choice0;
            bool choice1;
          } u;
      };
    struct TypeLastSize
      {
        size_t key;
        union
          {
            double choice0;
            bool choice1;
          } u;
      };
    struct TypeVolume
      {
        size_t key;
        union
          {
            double choice0;
            bool choice1;
          } u;
      };
    struct TypePreviousClose
      {
        size_t key;
        union
          {
            double choice0;
            bool choice1;
          } u;
      };
    struct TypePreviousCloseDate
      {
        size_t key;
        std::string choice0;
        bool choice1;
      };
    struct TypeChangeFromPreviousClose
      {
        size_t key;
        union
          {
            double choice0;
            bool choice1;
          } u;
      };
    struct TypePercentChangeFromPreviousClose
      {
        size_t key;
        union
          {
            double choice0;
            bool choice1;
          } u;
      };
    struct TypeHigh52Weeks
      {
        size_t key;
        union
          {
            double choice0;
            bool choice1;
          } u;
      };
    struct TypeLow52Weeks
      {
        size_t key;
        union
          {
            double choice0;
            bool choice1;
          } u;
      };
    struct TypeCurrency
      {
        size_t key;
        std::string choice0;
        bool choice1;
      };
    struct TypeTradingHalted
      {
        size_t key;
        union
          {
            bool choice0;
            bool choice1;
          } u;
      };

  private:
    bool flagHasOutcome;
    std::string storeOutcome;
    bool flagHasMessage;
    TypeMessage storeMessage;
    bool flagHasDelay;
    TypeDelay storeDelay;
    bool flagHasDate;
    std::string storeDate;
    bool flagHasTime;
    std::string storeTime;
    bool flagHasUTCOffset;
    double storeUTCOffset;
    std::string textStoreUTCOffset;
    bool flagHasOpen;
    TypeOpen storeOpen;
    bool flagHasClose;
    TypeClose storeClose;
    bool flagHasHigh;
    TypeHigh storeHigh;
    bool flagHasLow;
    TypeLow storeLow;
    bool flagHasLast;
    TypeLast storeLast;
    bool flagHasLastSize;
    TypeLastSize storeLastSize;
    bool flagHasVolume;
    TypeVolume storeVolume;
    bool flagHasPreviousClose;
    TypePreviousClose storePreviousClose;
    bool flagHasPreviousCloseDate;
    TypePreviousCloseDate storePreviousCloseDate;
    bool flagHasChangeFromPreviousClose;
    TypeChangeFromPreviousClose storeChangeFromPreviousClose;
    bool flagHasPercentChangeFromPreviousClose;
    TypePercentChangeFromPreviousClose storePercentChangeFromPreviousClose;
    bool flagHasHigh52Weeks;
    TypeHigh52Weeks storeHigh52Weeks;
    bool flagHasLow52Weeks;
    TypeLow52Weeks storeLow52Weeks;
    bool flagHasCurrency;
    TypeCurrency storeCurrency;
    bool flagHasTradingHalted;
    TypeTradingHalted storeTradingHalted;
    bool flagHasSecurity;
    StockSecurityDetailsJSON * storeSecurity;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    StockGlobalQuotesJSON(const StockGlobalQuotesJSON &);
    StockGlobalQuotesJSON & operator=(const StockGlobalQuotesJSON &other);

    void  fromJSONOutcome(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONMessage(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONDelay(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONDate(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONTime(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONUTCOffset(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONOpen(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONClose(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONHigh(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONLow(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONLast(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONLastSize(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONVolume(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONPreviousClose(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONPreviousCloseDate(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONChangeFromPreviousClose(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONPercentChangeFromPreviousClose(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONHigh52Weeks(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONLow52Weeks(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONCurrency(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONTradingHalted(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONSecurity(JSONValue *json_value, bool ignore_extras = false);


  public:
    StockGlobalQuotesJSON(void);
    virtual ~StockGlobalQuotesJSON(void);
    bool  hasOutcome(void) const;
    std::string  getOutcome(void);
    const std::string  getOutcome(void) const;
    bool  hasMessage(void) const;
    TypeMessage  getMessage(void);
    const TypeMessage  getMessage(void) const;
    bool  hasDelay(void) const;
    TypeDelay  getDelay(void);
    const TypeDelay  getDelay(void) const;
    bool  hasDate(void) const;
    std::string  getDate(void);
    const std::string  getDate(void) const;
    bool  hasTime(void) const;
    std::string  getTime(void);
    const std::string  getTime(void) const;
    bool  hasUTCOffset(void) const;
    double  getUTCOffset(void);
    const double  getUTCOffset(void) const;
    std::string  getUTCOffsetAsText(void) const;
    bool  hasOpen(void) const;
    TypeOpen  getOpen(void);
    const TypeOpen  getOpen(void) const;
    bool  hasClose(void) const;
    TypeClose  getClose(void);
    const TypeClose  getClose(void) const;
    bool  hasHigh(void) const;
    TypeHigh  getHigh(void);
    const TypeHigh  getHigh(void) const;
    bool  hasLow(void) const;
    TypeLow  getLow(void);
    const TypeLow  getLow(void) const;
    bool  hasLast(void) const;
    TypeLast  getLast(void);
    const TypeLast  getLast(void) const;
    bool  hasLastSize(void) const;
    TypeLastSize  getLastSize(void);
    const TypeLastSize  getLastSize(void) const;
    bool  hasVolume(void) const;
    TypeVolume  getVolume(void);
    const TypeVolume  getVolume(void) const;
    bool  hasPreviousClose(void) const;
    TypePreviousClose  getPreviousClose(void);
    const TypePreviousClose  getPreviousClose(void) const;
    bool  hasPreviousCloseDate(void) const;
    TypePreviousCloseDate  getPreviousCloseDate(void);
    const TypePreviousCloseDate  getPreviousCloseDate(void) const;
    bool  hasChangeFromPreviousClose(void) const;
    TypeChangeFromPreviousClose  getChangeFromPreviousClose(void);
    const TypeChangeFromPreviousClose  getChangeFromPreviousClose(void) const;
    bool  hasPercentChangeFromPreviousClose(void) const;
    TypePercentChangeFromPreviousClose  getPercentChangeFromPreviousClose(void);
    const TypePercentChangeFromPreviousClose  getPercentChangeFromPreviousClose(void) const;
    bool  hasHigh52Weeks(void) const;
    TypeHigh52Weeks  getHigh52Weeks(void);
    const TypeHigh52Weeks  getHigh52Weeks(void) const;
    bool  hasLow52Weeks(void) const;
    TypeLow52Weeks  getLow52Weeks(void);
    const TypeLow52Weeks  getLow52Weeks(void) const;
    bool  hasCurrency(void) const;
    TypeCurrency  getCurrency(void);
    const TypeCurrency  getCurrency(void) const;
    bool  hasTradingHalted(void) const;
    TypeTradingHalted  getTradingHalted(void);
    const TypeTradingHalted  getTradingHalted(void) const;
    bool  hasSecurity(void) const;
    StockSecurityDetailsJSON *  getSecurity(void);
    const StockSecurityDetailsJSON *  getSecurity(void) const;

    virtual size_t extraStockGlobalQuotesComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraStockGlobalQuotesComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraStockGlobalQuotesComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraStockGlobalQuotesComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraStockGlobalQuotesLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraStockGlobalQuotesLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }

    void setOutcome(std::string new_value)
      {
        flagHasOutcome = true;
        storeOutcome = new_value;
      }
    void unsetOutcome(void)
      {
        flagHasOutcome = false;
      }
    void setMessage(TypeMessage new_value)
      {
        flagHasMessage = true;
        switch (new_value.key)
          {
            case 0:
                break;
            case 1:
                break;
            default:
                assert(false);
          }
        storeMessage = new_value;
      }
    void unsetMessage(void)
      {
        flagHasMessage = false;
      }
    void setDelay(TypeDelay new_value)
      {
        flagHasDelay = true;
        switch (new_value.key)
          {
            case 0:
                break;
            case 1:
                break;
            default:
                assert(false);
          }
        storeDelay = new_value;
      }
    void unsetDelay(void)
      {
        flagHasDelay = false;
      }
    void setDate(std::string new_value)
      {
        flagHasDate = true;
        storeDate = new_value;
      }
    void unsetDate(void)
      {
        flagHasDate = false;
      }
    void setTime(std::string new_value)
      {
        flagHasTime = true;
        storeTime = new_value;
      }
    void unsetTime(void)
      {
        flagHasTime = false;
      }
    void setUTCOffset(double new_value)
      {
        flagHasUTCOffset = true;
        storeUTCOffset = new_value;
        textStoreUTCOffset = "";
      }
    void setUTCOffsetText(std::string new_value)
      {
        flagHasUTCOffset = true;
        if (!(JSONWriter::is_valid_number_format(new_value.c_str())))
            throw("The text value for field UTCOffset of StockGlobalQuotesJSON is not a valid number.");
        textStoreUTCOffset = new_value;
      }
    void unsetUTCOffset(void)
      {
        flagHasUTCOffset = false;
      }
    void setOpen(TypeOpen new_value)
      {
        flagHasOpen = true;
        switch (new_value.key)
          {
            case 0:
                break;
            case 1:
                break;
            default:
                assert(false);
          }
        storeOpen = new_value;
      }
    void unsetOpen(void)
      {
        flagHasOpen = false;
      }
    void setClose(TypeClose new_value)
      {
        flagHasClose = true;
        switch (new_value.key)
          {
            case 0:
                break;
            case 1:
                break;
            default:
                assert(false);
          }
        storeClose = new_value;
      }
    void unsetClose(void)
      {
        flagHasClose = false;
      }
    void setHigh(TypeHigh new_value)
      {
        flagHasHigh = true;
        switch (new_value.key)
          {
            case 0:
                break;
            case 1:
                break;
            default:
                assert(false);
          }
        storeHigh = new_value;
      }
    void unsetHigh(void)
      {
        flagHasHigh = false;
      }
    void setLow(TypeLow new_value)
      {
        flagHasLow = true;
        switch (new_value.key)
          {
            case 0:
                break;
            case 1:
                break;
            default:
                assert(false);
          }
        storeLow = new_value;
      }
    void unsetLow(void)
      {
        flagHasLow = false;
      }
    void setLast(TypeLast new_value)
      {
        flagHasLast = true;
        switch (new_value.key)
          {
            case 0:
                break;
            case 1:
                break;
            default:
                assert(false);
          }
        storeLast = new_value;
      }
    void unsetLast(void)
      {
        flagHasLast = false;
      }
    void setLastSize(TypeLastSize new_value)
      {
        flagHasLastSize = true;
        switch (new_value.key)
          {
            case 0:
                break;
            case 1:
                break;
            default:
                assert(false);
          }
        storeLastSize = new_value;
      }
    void unsetLastSize(void)
      {
        flagHasLastSize = false;
      }
    void setVolume(TypeVolume new_value)
      {
        flagHasVolume = true;
        switch (new_value.key)
          {
            case 0:
                break;
            case 1:
                break;
            default:
                assert(false);
          }
        storeVolume = new_value;
      }
    void unsetVolume(void)
      {
        flagHasVolume = false;
      }
    void setPreviousClose(TypePreviousClose new_value)
      {
        flagHasPreviousClose = true;
        switch (new_value.key)
          {
            case 0:
                break;
            case 1:
                break;
            default:
                assert(false);
          }
        storePreviousClose = new_value;
      }
    void unsetPreviousClose(void)
      {
        flagHasPreviousClose = false;
      }
    void setPreviousCloseDate(TypePreviousCloseDate new_value)
      {
        flagHasPreviousCloseDate = true;
        switch (new_value.key)
          {
            case 0:
                break;
            case 1:
                break;
            default:
                assert(false);
          }
        storePreviousCloseDate = new_value;
      }
    void unsetPreviousCloseDate(void)
      {
        flagHasPreviousCloseDate = false;
      }
    void setChangeFromPreviousClose(TypeChangeFromPreviousClose new_value)
      {
        flagHasChangeFromPreviousClose = true;
        switch (new_value.key)
          {
            case 0:
                break;
            case 1:
                break;
            default:
                assert(false);
          }
        storeChangeFromPreviousClose = new_value;
      }
    void unsetChangeFromPreviousClose(void)
      {
        flagHasChangeFromPreviousClose = false;
      }
    void setPercentChangeFromPreviousClose(TypePercentChangeFromPreviousClose new_value)
      {
        flagHasPercentChangeFromPreviousClose = true;
        switch (new_value.key)
          {
            case 0:
                break;
            case 1:
                break;
            default:
                assert(false);
          }
        storePercentChangeFromPreviousClose = new_value;
      }
    void unsetPercentChangeFromPreviousClose(void)
      {
        flagHasPercentChangeFromPreviousClose = false;
      }
    void setHigh52Weeks(TypeHigh52Weeks new_value)
      {
        flagHasHigh52Weeks = true;
        switch (new_value.key)
          {
            case 0:
                break;
            case 1:
                break;
            default:
                assert(false);
          }
        storeHigh52Weeks = new_value;
      }
    void unsetHigh52Weeks(void)
      {
        flagHasHigh52Weeks = false;
      }
    void setLow52Weeks(TypeLow52Weeks new_value)
      {
        flagHasLow52Weeks = true;
        switch (new_value.key)
          {
            case 0:
                break;
            case 1:
                break;
            default:
                assert(false);
          }
        storeLow52Weeks = new_value;
      }
    void unsetLow52Weeks(void)
      {
        flagHasLow52Weeks = false;
      }
    void setCurrency(TypeCurrency new_value)
      {
        flagHasCurrency = true;
        switch (new_value.key)
          {
            case 0:
                break;
            case 1:
                break;
            default:
                assert(false);
          }
        storeCurrency = new_value;
      }
    void unsetCurrency(void)
      {
        flagHasCurrency = false;
      }
    void setTradingHalted(TypeTradingHalted new_value)
      {
        flagHasTradingHalted = true;
        switch (new_value.key)
          {
            case 0:
                break;
            case 1:
                break;
            default:
                assert(false);
          }
        storeTradingHalted = new_value;
      }
    void unsetTradingHalted(void)
      {
        flagHasTradingHalted = false;
      }
    void setSecurity(StockSecurityDetailsJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasSecurity)
          {
            storeSecurity->remove_reference();
          }
        flagHasSecurity = true;
        storeSecurity = new_value;
      }
    void unsetSecurity(void)
      {
        if (flagHasSecurity)
          {
            storeSecurity->remove_reference();
          }
        flagHasSecurity = false;
      }

    virtual void extraStockGlobalQuotesAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraStockGlobalQuotesSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraStockGlobalQuotesLookup(key);
        if (old_field == NULL)
          {
            extraStockGlobalQuotesAppendPair(key, new_component);
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
        assert(flagHasOutcome);
        handler->start_pair("Outcome");
        handler->string_value(storeOutcome);
        if (flagHasMessage)
          {
            handler->start_pair("Message");
            switch (storeMessage.key)
              {
                case 0:
                    handler->string_value(storeMessage.choice0);
                    break;
                case 1:
                    handler->null_value();
                    break;
                default:
                    assert(false);
              }
          }
        if (flagHasDelay)
          {
            handler->start_pair("Delay");
            switch (storeDelay.key)
              {
                case 0:
                    if (((double)(long int)storeDelay.u.choice0) == storeDelay.u.choice0)
                        handler->number_value((long int)storeDelay.u.choice0);
                    else
                        handler->number_value(storeDelay.u.choice0);
                    break;
                case 1:
                    handler->null_value();
                    break;
                default:
                    assert(false);
              }
          }
        assert(flagHasDate);
        handler->start_pair("Date");
        handler->string_value(storeDate);
        assert(flagHasTime);
        handler->start_pair("Time");
        handler->string_value(storeTime);
        assert(flagHasUTCOffset);
        handler->start_pair("UTCOffset");
        if (textStoreUTCOffset != "")
            handler->number_value(textStoreUTCOffset.c_str());
        else if (((double)(long int)storeUTCOffset) == storeUTCOffset)
            handler->number_value((long int)storeUTCOffset);
        else
            handler->number_value(storeUTCOffset);
        if (flagHasOpen)
          {
            handler->start_pair("Open");
            switch (storeOpen.key)
              {
                case 0:
                    if (((double)(long int)storeOpen.u.choice0) == storeOpen.u.choice0)
                        handler->number_value((long int)storeOpen.u.choice0);
                    else
                        handler->number_value(storeOpen.u.choice0);
                    break;
                case 1:
                    handler->null_value();
                    break;
                default:
                    assert(false);
              }
          }
        if (flagHasClose)
          {
            handler->start_pair("Close");
            switch (storeClose.key)
              {
                case 0:
                    if (((double)(long int)storeClose.u.choice0) == storeClose.u.choice0)
                        handler->number_value((long int)storeClose.u.choice0);
                    else
                        handler->number_value(storeClose.u.choice0);
                    break;
                case 1:
                    handler->null_value();
                    break;
                default:
                    assert(false);
              }
          }
        if (flagHasHigh)
          {
            handler->start_pair("High");
            switch (storeHigh.key)
              {
                case 0:
                    if (((double)(long int)storeHigh.u.choice0) == storeHigh.u.choice0)
                        handler->number_value((long int)storeHigh.u.choice0);
                    else
                        handler->number_value(storeHigh.u.choice0);
                    break;
                case 1:
                    handler->null_value();
                    break;
                default:
                    assert(false);
              }
          }
        if (flagHasLow)
          {
            handler->start_pair("Low");
            switch (storeLow.key)
              {
                case 0:
                    if (((double)(long int)storeLow.u.choice0) == storeLow.u.choice0)
                        handler->number_value((long int)storeLow.u.choice0);
                    else
                        handler->number_value(storeLow.u.choice0);
                    break;
                case 1:
                    handler->null_value();
                    break;
                default:
                    assert(false);
              }
          }
        if (flagHasLast)
          {
            handler->start_pair("Last");
            switch (storeLast.key)
              {
                case 0:
                    if (((double)(long int)storeLast.u.choice0) == storeLast.u.choice0)
                        handler->number_value((long int)storeLast.u.choice0);
                    else
                        handler->number_value(storeLast.u.choice0);
                    break;
                case 1:
                    handler->null_value();
                    break;
                default:
                    assert(false);
              }
          }
        if (flagHasLastSize)
          {
            handler->start_pair("LastSize");
            switch (storeLastSize.key)
              {
                case 0:
                    if (((double)(long int)storeLastSize.u.choice0) == storeLastSize.u.choice0)
                        handler->number_value((long int)storeLastSize.u.choice0);
                    else
                        handler->number_value(storeLastSize.u.choice0);
                    break;
                case 1:
                    handler->null_value();
                    break;
                default:
                    assert(false);
              }
          }
        if (flagHasVolume)
          {
            handler->start_pair("Volume");
            switch (storeVolume.key)
              {
                case 0:
                    if (((double)(long int)storeVolume.u.choice0) == storeVolume.u.choice0)
                        handler->number_value((long int)storeVolume.u.choice0);
                    else
                        handler->number_value(storeVolume.u.choice0);
                    break;
                case 1:
                    handler->null_value();
                    break;
                default:
                    assert(false);
              }
          }
        if (flagHasPreviousClose)
          {
            handler->start_pair("PreviousClose");
            switch (storePreviousClose.key)
              {
                case 0:
                    if (((double)(long int)storePreviousClose.u.choice0) == storePreviousClose.u.choice0)
                        handler->number_value((long int)storePreviousClose.u.choice0);
                    else
                        handler->number_value(storePreviousClose.u.choice0);
                    break;
                case 1:
                    handler->null_value();
                    break;
                default:
                    assert(false);
              }
          }
        if (flagHasPreviousCloseDate)
          {
            handler->start_pair("PreviousCloseDate");
            switch (storePreviousCloseDate.key)
              {
                case 0:
                    handler->string_value(storePreviousCloseDate.choice0);
                    break;
                case 1:
                    handler->null_value();
                    break;
                default:
                    assert(false);
              }
          }
        if (flagHasChangeFromPreviousClose)
          {
            handler->start_pair("ChangeFromPreviousClose");
            switch (storeChangeFromPreviousClose.key)
              {
                case 0:
                    if (((double)(long int)storeChangeFromPreviousClose.u.choice0) == storeChangeFromPreviousClose.u.choice0)
                        handler->number_value((long int)storeChangeFromPreviousClose.u.choice0);
                    else
                        handler->number_value(storeChangeFromPreviousClose.u.choice0);
                    break;
                case 1:
                    handler->null_value();
                    break;
                default:
                    assert(false);
              }
          }
        if (flagHasPercentChangeFromPreviousClose)
          {
            handler->start_pair("PercentChangeFromPreviousClose");
            switch (storePercentChangeFromPreviousClose.key)
              {
                case 0:
                    if (((double)(long int)storePercentChangeFromPreviousClose.u.choice0) == storePercentChangeFromPreviousClose.u.choice0)
                        handler->number_value((long int)storePercentChangeFromPreviousClose.u.choice0);
                    else
                        handler->number_value(storePercentChangeFromPreviousClose.u.choice0);
                    break;
                case 1:
                    handler->null_value();
                    break;
                default:
                    assert(false);
              }
          }
        if (flagHasHigh52Weeks)
          {
            handler->start_pair("High52Weeks");
            switch (storeHigh52Weeks.key)
              {
                case 0:
                    if (((double)(long int)storeHigh52Weeks.u.choice0) == storeHigh52Weeks.u.choice0)
                        handler->number_value((long int)storeHigh52Weeks.u.choice0);
                    else
                        handler->number_value(storeHigh52Weeks.u.choice0);
                    break;
                case 1:
                    handler->null_value();
                    break;
                default:
                    assert(false);
              }
          }
        if (flagHasLow52Weeks)
          {
            handler->start_pair("Low52Weeks");
            switch (storeLow52Weeks.key)
              {
                case 0:
                    if (((double)(long int)storeLow52Weeks.u.choice0) == storeLow52Weeks.u.choice0)
                        handler->number_value((long int)storeLow52Weeks.u.choice0);
                    else
                        handler->number_value(storeLow52Weeks.u.choice0);
                    break;
                case 1:
                    handler->null_value();
                    break;
                default:
                    assert(false);
              }
          }
        if (flagHasCurrency)
          {
            handler->start_pair("Currency");
            switch (storeCurrency.key)
              {
                case 0:
                    handler->string_value(storeCurrency.choice0);
                    break;
                case 1:
                    handler->null_value();
                    break;
                default:
                    assert(false);
              }
          }
        if (flagHasTradingHalted)
          {
            handler->start_pair("TradingHalted");
            switch (storeTradingHalted.key)
              {
                case 0:
                    handler->boolean_value(storeTradingHalted.u.choice0);
                    break;
                case 1:
                    handler->null_value();
                    break;
                default:
                    assert(false);
              }
          }
        assert(flagHasSecurity);
        handler->start_pair("Security");
        storeSecurity->write_as_json(handler);
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasOutcome()))
          {
            return "When parsing the object for %what%, the \"Outcome\" field was missing.";
          }
        if (!(hasDate()))
          {
            return "When parsing the object for %what%, the \"Date\" field was missing.";
          }
        if (!(hasTime()))
          {
            return "When parsing the object for %what%, the \"Time\" field was missing.";
          }
        if (!(hasUTCOffset()))
          {
            return "When parsing the object for %what%, the \"UTCOffset\" field was missing.";
          }
        if (!(hasSecurity()))
          {
            return "When parsing the object for %what%, the \"Security\" field was missing.";
          }
        return NULL;
      }

    static StockGlobalQuotesJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static StockGlobalQuotesJSON *from_text(const char *text, bool ignore_extras = false)
      {
        StockGlobalQuotesJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<StockGlobalQuotesJSON>, StockGlobalQuotesJSON *, bool> generator("Type StockGlobalQuotes", ignore_extras);
            parse_json_value(text, "Text for StockGlobalQuotesJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static StockGlobalQuotesJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        StockGlobalQuotesJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<StockGlobalQuotesJSON>, StockGlobalQuotesJSON *, bool> generator("Type StockGlobalQuotes", ignore_extras);
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
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorOutcome;
    class FieldGeneratorMessage : public JSONParallelGenerator
          {
          private:
            JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > field0;
            JSONHoldingGenerator<JSONNullGenerator, bool, bool > field1;
            JSONHandler *all_handlers[2];

          protected:
            size_t start(JSONHandler ***parallel_handlers_location)
              {
                *parallel_handlers_location = &(all_handlers[0]);
                return 2;
              }
            void finish(size_t winning_index)
              {
                TypeMessage result;
                result.key = winning_index;
                switch (winning_index)
                  {
                    case 0:
                      {
                        assert(field0.have_value);
                        result.choice0 = field0.value;
                        break;
                      }
                    case 1:
                      {
                        assert(field1.have_value);
                        result.choice1 = field1.value;
                        break;
                      }
                    default:
                      {
                        assert(false);
                      }
                  }
                handle_result(result);
              }
            virtual void handle_result(TypeMessage result) = 0;

          public:
            FieldGeneratorMessage(bool ignore_extras) : field0("option 0 of field \"Message\""), field1("option 1 of field \"Message\"")
              {
                all_handlers[0] = &field0;
                all_handlers[1] = &field1;
              }
            FieldGeneratorMessage(std::string what, bool ignore_extras) : field0("option 0 of field \"Message\""), field1("option 1 of field \"Message\"")
              {
                all_handlers[0] = &field0;
                all_handlers[1] = &field1;
              }
            ~FieldGeneratorMessage(void)  { }

            void reset(void)
              {
                field0.reset();
                field1.reset();
                JSONParallelGenerator::reset();
              }
          };
        class HolderMessage
          {
          private:
            bool have_data;
            TypeMessage data;

          public:
            HolderMessage(void) : have_data(false)  { }
            HolderMessage(TypeMessage init_data) : have_data(true), data(init_data)
              {
                if (have_data)
                  {
                    switch (data.key)
                      {
                        case 0:
                          break;
                        case 1:
                          break;
                        default:
                          assert(false);
                      }
                  }
              }
            HolderMessage(const HolderMessage &other) : have_data(other.haveData()), data(other.referenced())
              {
                if (have_data)
                  {
                    switch (data.key)
                      {
                        case 0:
                          break;
                        case 1:
                          break;
                        default:
                          assert(false);
                      }
                  }
              }
            ~HolderMessage(void)
              {
                if (have_data)
                  {
                    switch (data.key)
                      {
                        case 0:
                          break;
                        case 1:
                          break;
                        default:
                          assert(false);
                      }
                  }
              }

            void operator=(const HolderMessage &other)
              {
                TypeMessage new_data;
                if (other.haveData())
                  {
                    new_data = other.referenced();
                    switch (new_data.key)
                      {
                        case 0:
                          break;
                        case 1:
                          break;
                        default:
                          assert(false);
                      }
                  }
                if (have_data)
                  {
                    switch (data.key)
                      {
                        case 0:
                          break;
                        case 1:
                          break;
                        default:
                          assert(false);
                      }
                  }
                have_data = other.haveData();
                if (have_data)
                    data = new_data;
              }
            bool haveData(void) const
              {
                return have_data;
              }
            TypeMessage referenced(void) const
              {
                return data;
              }
          };
        JSONHoldingGenerator<FieldGeneratorMessage, HolderMessage, TypeMessage, bool > fieldGeneratorMessage;
    class FieldGeneratorDelay : public JSONParallelGenerator
          {
          private:
            JSONHoldingGenerator<JSONNumberTextGenerator, std::string, const char * > field0;
            JSONHoldingGenerator<JSONNullGenerator, bool, bool > field1;
            JSONHandler *all_handlers[2];

          protected:
            size_t start(JSONHandler ***parallel_handlers_location)
              {
                *parallel_handlers_location = &(all_handlers[0]);
                return 2;
              }
            void finish(size_t winning_index)
              {
                TypeDelay result;
                result.key = winning_index;
                switch (winning_index)
                  {
                    case 0:
                      {
                        assert(field0.have_value);
                        result.u.choice0 = atof(field0.value.c_str());
                        break;
                      }
                    case 1:
                      {
                        assert(field1.have_value);
                        result.u.choice1 = field1.value;
                        break;
                      }
                    default:
                      {
                        assert(false);
                      }
                  }
                handle_result(result);
              }
            virtual void handle_result(TypeDelay result) = 0;

          public:
            FieldGeneratorDelay(bool ignore_extras) : field0("option 0 of field \"Delay\""), field1("option 1 of field \"Delay\"")
              {
                all_handlers[0] = &field0;
                all_handlers[1] = &field1;
              }
            FieldGeneratorDelay(std::string what, bool ignore_extras) : field0("option 0 of field \"Delay\""), field1("option 1 of field \"Delay\"")
              {
                all_handlers[0] = &field0;
                all_handlers[1] = &field1;
              }
            ~FieldGeneratorDelay(void)  { }

            void reset(void)
              {
                field0.reset();
                field1.reset();
                JSONParallelGenerator::reset();
              }
          };
        class HolderDelay
          {
          private:
            bool have_data;
            TypeDelay data;

          public:
            HolderDelay(void) : have_data(false)  { }
            HolderDelay(TypeDelay init_data) : have_data(true), data(init_data)
              {
                if (have_data)
                  {
                    switch (data.key)
                      {
                        case 0:
                          break;
                        case 1:
                          break;
                        default:
                          assert(false);
                      }
                  }
              }
            HolderDelay(const HolderDelay &other) : have_data(other.haveData()), data(other.referenced())
              {
                if (have_data)
                  {
                    switch (data.key)
                      {
                        case 0:
                          break;
                        case 1:
                          break;
                        default:
                          assert(false);
                      }
                  }
              }
            ~HolderDelay(void)
              {
                if (have_data)
                  {
                    switch (data.key)
                      {
                        case 0:
                          break;
                        case 1:
                          break;
                        default:
                          assert(false);
                      }
                  }
              }

            void operator=(const HolderDelay &other)
              {
                TypeDelay new_data;
                if (other.haveData())
                  {
                    new_data = other.referenced();
                    switch (new_data.key)
                      {
                        case 0:
                          break;
                        case 1:
                          break;
                        default:
                          assert(false);
                      }
                  }
                if (have_data)
                  {
                    switch (data.key)
                      {
                        case 0:
                          break;
                        case 1:
                          break;
                        default:
                          assert(false);
                      }
                  }
                have_data = other.haveData();
                if (have_data)
                    data = new_data;
              }
            bool haveData(void) const
              {
                return have_data;
              }
            TypeDelay referenced(void) const
              {
                return data;
              }
          };
        JSONHoldingGenerator<FieldGeneratorDelay, HolderDelay, TypeDelay, bool > fieldGeneratorDelay;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorDate;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorTime;
        JSONHoldingGenerator<JSONNumberTextGenerator, std::string, const char * > fieldGeneratorUTCOffset;
    class FieldGeneratorOpen : public JSONParallelGenerator
          {
          private:
            JSONHoldingGenerator<JSONNumberTextGenerator, std::string, const char * > field0;
            JSONHoldingGenerator<JSONNullGenerator, bool, bool > field1;
            JSONHandler *all_handlers[2];

          protected:
            size_t start(JSONHandler ***parallel_handlers_location)
              {
                *parallel_handlers_location = &(all_handlers[0]);
                return 2;
              }
            void finish(size_t winning_index)
              {
                TypeOpen result;
                result.key = winning_index;
                switch (winning_index)
                  {
                    case 0:
                      {
                        assert(field0.have_value);
                        result.u.choice0 = atof(field0.value.c_str());
                        break;
                      }
                    case 1:
                      {
                        assert(field1.have_value);
                        result.u.choice1 = field1.value;
                        break;
                      }
                    default:
                      {
                        assert(false);
                      }
                  }
                handle_result(result);
              }
            virtual void handle_result(TypeOpen result) = 0;

          public:
            FieldGeneratorOpen(bool ignore_extras) : field0("option 0 of field \"Open\""), field1("option 1 of field \"Open\"")
              {
                all_handlers[0] = &field0;
                all_handlers[1] = &field1;
              }
            FieldGeneratorOpen(std::string what, bool ignore_extras) : field0("option 0 of field \"Open\""), field1("option 1 of field \"Open\"")
              {
                all_handlers[0] = &field0;
                all_handlers[1] = &field1;
              }
            ~FieldGeneratorOpen(void)  { }

            void reset(void)
              {
                field0.reset();
                field1.reset();
                JSONParallelGenerator::reset();
              }
          };
        class HolderOpen
          {
          private:
            bool have_data;
            TypeOpen data;

          public:
            HolderOpen(void) : have_data(false)  { }
            HolderOpen(TypeOpen init_data) : have_data(true), data(init_data)
              {
                if (have_data)
                  {
                    switch (data.key)
                      {
                        case 0:
                          break;
                        case 1:
                          break;
                        default:
                          assert(false);
                      }
                  }
              }
            HolderOpen(const HolderOpen &other) : have_data(other.haveData()), data(other.referenced())
              {
                if (have_data)
                  {
                    switch (data.key)
                      {
                        case 0:
                          break;
                        case 1:
                          break;
                        default:
                          assert(false);
                      }
                  }
              }
            ~HolderOpen(void)
              {
                if (have_data)
                  {
                    switch (data.key)
                      {
                        case 0:
                          break;
                        case 1:
                          break;
                        default:
                          assert(false);
                      }
                  }
              }

            void operator=(const HolderOpen &other)
              {
                TypeOpen new_data;
                if (other.haveData())
                  {
                    new_data = other.referenced();
                    switch (new_data.key)
                      {
                        case 0:
                          break;
                        case 1:
                          break;
                        default:
                          assert(false);
                      }
                  }
                if (have_data)
                  {
                    switch (data.key)
                      {
                        case 0:
                          break;
                        case 1:
                          break;
                        default:
                          assert(false);
                      }
                  }
                have_data = other.haveData();
                if (have_data)
                    data = new_data;
              }
            bool haveData(void) const
              {
                return have_data;
              }
            TypeOpen referenced(void) const
              {
                return data;
              }
          };
        JSONHoldingGenerator<FieldGeneratorOpen, HolderOpen, TypeOpen, bool > fieldGeneratorOpen;
    class FieldGeneratorClose : public JSONParallelGenerator
          {
          private:
            JSONHoldingGenerator<JSONNumberTextGenerator, std::string, const char * > field0;
            JSONHoldingGenerator<JSONNullGenerator, bool, bool > field1;
            JSONHandler *all_handlers[2];

          protected:
            size_t start(JSONHandler ***parallel_handlers_location)
              {
                *parallel_handlers_location = &(all_handlers[0]);
                return 2;
              }
            void finish(size_t winning_index)
              {
                TypeClose result;
                result.key = winning_index;
                switch (winning_index)
                  {
                    case 0:
                      {
                        assert(field0.have_value);
                        result.u.choice0 = atof(field0.value.c_str());
                        break;
                      }
                    case 1:
                      {
                        assert(field1.have_value);
                        result.u.choice1 = field1.value;
                        break;
                      }
                    default:
                      {
                        assert(false);
                      }
                  }
                handle_result(result);
              }
            virtual void handle_result(TypeClose result) = 0;

          public:
            FieldGeneratorClose(bool ignore_extras) : field0("option 0 of field \"Close\""), field1("option 1 of field \"Close\"")
              {
                all_handlers[0] = &field0;
                all_handlers[1] = &field1;
              }
            FieldGeneratorClose(std::string what, bool ignore_extras) : field0("option 0 of field \"Close\""), field1("option 1 of field \"Close\"")
              {
                all_handlers[0] = &field0;
                all_handlers[1] = &field1;
              }
            ~FieldGeneratorClose(void)  { }

            void reset(void)
              {
                field0.reset();
                field1.reset();
                JSONParallelGenerator::reset();
              }
          };
        class HolderClose
          {
          private:
            bool have_data;
            TypeClose data;

          public:
            HolderClose(void) : have_data(false)  { }
            HolderClose(TypeClose init_data) : have_data(true), data(init_data)
              {
                if (have_data)
                  {
                    switch (data.key)
                      {
                        case 0:
                          break;
                        case 1:
                          break;
                        default:
                          assert(false);
                      }
                  }
              }
            HolderClose(const HolderClose &other) : have_data(other.haveData()), data(other.referenced())
              {
                if (have_data)
                  {
                    switch (data.key)
                      {
                        case 0:
                          break;
                        case 1:
                          break;
                        default:
                          assert(false);
                      }
                  }
              }
            ~HolderClose(void)
              {
                if (have_data)
                  {
                    switch (data.key)
                      {
                        case 0:
                          break;
                        case 1:
                          break;
                        default:
                          assert(false);
                      }
                  }
              }

            void operator=(const HolderClose &other)
              {
                TypeClose new_data;
                if (other.haveData())
                  {
                    new_data = other.referenced();
                    switch (new_data.key)
                      {
                        case 0:
                          break;
                        case 1:
                          break;
                        default:
                          assert(false);
                      }
                  }
                if (have_data)
                  {
                    switch (data.key)
                      {
                        case 0:
                          break;
                        case 1:
                          break;
                        default:
                          assert(false);
                      }
                  }
                have_data = other.haveData();
                if (have_data)
                    data = new_data;
              }
            bool haveData(void) const
              {
                return have_data;
              }
            TypeClose referenced(void) const
              {
                return data;
              }
          };
        JSONHoldingGenerator<FieldGeneratorClose, HolderClose, TypeClose, bool > fieldGeneratorClose;
    class FieldGeneratorHigh : public JSONParallelGenerator
          {
          private:
            JSONHoldingGenerator<JSONNumberTextGenerator, std::string, const char * > field0;
            JSONHoldingGenerator<JSONNullGenerator, bool, bool > field1;
            JSONHandler *all_handlers[2];

          protected:
            size_t start(JSONHandler ***parallel_handlers_location)
              {
                *parallel_handlers_location = &(all_handlers[0]);
                return 2;
              }
            void finish(size_t winning_index)
              {
                TypeHigh result;
                result.key = winning_index;
                switch (winning_index)
                  {
                    case 0:
                      {
                        assert(field0.have_value);
                        result.u.choice0 = atof(field0.value.c_str());
                        break;
                      }
                    case 1:
                      {
                        assert(field1.have_value);
                        result.u.choice1 = field1.value;
                        break;
                      }
                    default:
                      {
                        assert(false);
                      }
                  }
                handle_result(result);
              }
            virtual void handle_result(TypeHigh result) = 0;

          public:
            FieldGeneratorHigh(bool ignore_extras) : field0("option 0 of field \"High\""), field1("option 1 of field \"High\"")
              {
                all_handlers[0] = &field0;
                all_handlers[1] = &field1;
              }
            FieldGeneratorHigh(std::string what, bool ignore_extras) : field0("option 0 of field \"High\""), field1("option 1 of field \"High\"")
              {
                all_handlers[0] = &field0;
                all_handlers[1] = &field1;
              }
            ~FieldGeneratorHigh(void)  { }

            void reset(void)
              {
                field0.reset();
                field1.reset();
                JSONParallelGenerator::reset();
              }
          };
        class HolderHigh
          {
          private:
            bool have_data;
            TypeHigh data;

          public:
            HolderHigh(void) : have_data(false)  { }
            HolderHigh(TypeHigh init_data) : have_data(true), data(init_data)
              {
                if (have_data)
                  {
                    switch (data.key)
                      {
                        case 0:
                          break;
                        case 1:
                          break;
                        default:
                          assert(false);
                      }
                  }
              }
            HolderHigh(const HolderHigh &other) : have_data(other.haveData()), data(other.referenced())
              {
                if (have_data)
                  {
                    switch (data.key)
                      {
                        case 0:
                          break;
                        case 1:
                          break;
                        default:
                          assert(false);
                      }
                  }
              }
            ~HolderHigh(void)
              {
                if (have_data)
                  {
                    switch (data.key)
                      {
                        case 0:
                          break;
                        case 1:
                          break;
                        default:
                          assert(false);
                      }
                  }
              }

            void operator=(const HolderHigh &other)
              {
                TypeHigh new_data;
                if (other.haveData())
                  {
                    new_data = other.referenced();
                    switch (new_data.key)
                      {
                        case 0:
                          break;
                        case 1:
                          break;
                        default:
                          assert(false);
                      }
                  }
                if (have_data)
                  {
                    switch (data.key)
                      {
                        case 0:
                          break;
                        case 1:
                          break;
                        default:
                          assert(false);
                      }
                  }
                have_data = other.haveData();
                if (have_data)
                    data = new_data;
              }
            bool haveData(void) const
              {
                return have_data;
              }
            TypeHigh referenced(void) const
              {
                return data;
              }
          };
        JSONHoldingGenerator<FieldGeneratorHigh, HolderHigh, TypeHigh, bool > fieldGeneratorHigh;
    class FieldGeneratorLow : public JSONParallelGenerator
          {
          private:
            JSONHoldingGenerator<JSONNumberTextGenerator, std::string, const char * > field0;
            JSONHoldingGenerator<JSONNullGenerator, bool, bool > field1;
            JSONHandler *all_handlers[2];

          protected:
            size_t start(JSONHandler ***parallel_handlers_location)
              {
                *parallel_handlers_location = &(all_handlers[0]);
                return 2;
              }
            void finish(size_t winning_index)
              {
                TypeLow result;
                result.key = winning_index;
                switch (winning_index)
                  {
                    case 0:
                      {
                        assert(field0.have_value);
                        result.u.choice0 = atof(field0.value.c_str());
                        break;
                      }
                    case 1:
                      {
                        assert(field1.have_value);
                        result.u.choice1 = field1.value;
                        break;
                      }
                    default:
                      {
                        assert(false);
                      }
                  }
                handle_result(result);
              }
            virtual void handle_result(TypeLow result) = 0;

          public:
            FieldGeneratorLow(bool ignore_extras) : field0("option 0 of field \"Low\""), field1("option 1 of field \"Low\"")
              {
                all_handlers[0] = &field0;
                all_handlers[1] = &field1;
              }
            FieldGeneratorLow(std::string what, bool ignore_extras) : field0("option 0 of field \"Low\""), field1("option 1 of field \"Low\"")
              {
                all_handlers[0] = &field0;
                all_handlers[1] = &field1;
              }
            ~FieldGeneratorLow(void)  { }

            void reset(void)
              {
                field0.reset();
                field1.reset();
                JSONParallelGenerator::reset();
              }
          };
        class HolderLow
          {
          private:
            bool have_data;
            TypeLow data;

          public:
            HolderLow(void) : have_data(false)  { }
            HolderLow(TypeLow init_data) : have_data(true), data(init_data)
              {
                if (have_data)
                  {
                    switch (data.key)
                      {
                        case 0:
                          break;
                        case 1:
                          break;
                        default:
                          assert(false);
                      }
                  }
              }
            HolderLow(const HolderLow &other) : have_data(other.haveData()), data(other.referenced())
              {
                if (have_data)
                  {
                    switch (data.key)
                      {
                        case 0:
                          break;
                        case 1:
                          break;
                        default:
                          assert(false);
                      }
                  }
              }
            ~HolderLow(void)
              {
                if (have_data)
                  {
                    switch (data.key)
                      {
                        case 0:
                          break;
                        case 1:
                          break;
                        default:
                          assert(false);
                      }
                  }
              }

            void operator=(const HolderLow &other)
              {
                TypeLow new_data;
                if (other.haveData())
                  {
                    new_data = other.referenced();
                    switch (new_data.key)
                      {
                        case 0:
                          break;
                        case 1:
                          break;
                        default:
                          assert(false);
                      }
                  }
                if (have_data)
                  {
                    switch (data.key)
                      {
                        case 0:
                          break;
                        case 1:
                          break;
                        default:
                          assert(false);
                      }
                  }
                have_data = other.haveData();
                if (have_data)
                    data = new_data;
              }
            bool haveData(void) const
              {
                return have_data;
              }
            TypeLow referenced(void) const
              {
                return data;
              }
          };
        JSONHoldingGenerator<FieldGeneratorLow, HolderLow, TypeLow, bool > fieldGeneratorLow;
    class FieldGeneratorLast : public JSONParallelGenerator
          {
          private:
            JSONHoldingGenerator<JSONNumberTextGenerator, std::string, const char * > field0;
            JSONHoldingGenerator<JSONNullGenerator, bool, bool > field1;
            JSONHandler *all_handlers[2];

          protected:
            size_t start(JSONHandler ***parallel_handlers_location)
              {
                *parallel_handlers_location = &(all_handlers[0]);
                return 2;
              }
            void finish(size_t winning_index)
              {
                TypeLast result;
                result.key = winning_index;
                switch (winning_index)
                  {
                    case 0:
                      {
                        assert(field0.have_value);
                        result.u.choice0 = atof(field0.value.c_str());
                        break;
                      }
                    case 1:
                      {
                        assert(field1.have_value);
                        result.u.choice1 = field1.value;
                        break;
                      }
                    default:
                      {
                        assert(false);
                      }
                  }
                handle_result(result);
              }
            virtual void handle_result(TypeLast result) = 0;

          public:
            FieldGeneratorLast(bool ignore_extras) : field0("option 0 of field \"Last\""), field1("option 1 of field \"Last\"")
              {
                all_handlers[0] = &field0;
                all_handlers[1] = &field1;
              }
            FieldGeneratorLast(std::string what, bool ignore_extras) : field0("option 0 of field \"Last\""), field1("option 1 of field \"Last\"")
              {
                all_handlers[0] = &field0;
                all_handlers[1] = &field1;
              }
            ~FieldGeneratorLast(void)  { }

            void reset(void)
              {
                field0.reset();
                field1.reset();
                JSONParallelGenerator::reset();
              }
          };
        class HolderLast
          {
          private:
            bool have_data;
            TypeLast data;

          public:
            HolderLast(void) : have_data(false)  { }
            HolderLast(TypeLast init_data) : have_data(true), data(init_data)
              {
                if (have_data)
                  {
                    switch (data.key)
                      {
                        case 0:
                          break;
                        case 1:
                          break;
                        default:
                          assert(false);
                      }
                  }
              }
            HolderLast(const HolderLast &other) : have_data(other.haveData()), data(other.referenced())
              {
                if (have_data)
                  {
                    switch (data.key)
                      {
                        case 0:
                          break;
                        case 1:
                          break;
                        default:
                          assert(false);
                      }
                  }
              }
            ~HolderLast(void)
              {
                if (have_data)
                  {
                    switch (data.key)
                      {
                        case 0:
                          break;
                        case 1:
                          break;
                        default:
                          assert(false);
                      }
                  }
              }

            void operator=(const HolderLast &other)
              {
                TypeLast new_data;
                if (other.haveData())
                  {
                    new_data = other.referenced();
                    switch (new_data.key)
                      {
                        case 0:
                          break;
                        case 1:
                          break;
                        default:
                          assert(false);
                      }
                  }
                if (have_data)
                  {
                    switch (data.key)
                      {
                        case 0:
                          break;
                        case 1:
                          break;
                        default:
                          assert(false);
                      }
                  }
                have_data = other.haveData();
                if (have_data)
                    data = new_data;
              }
            bool haveData(void) const
              {
                return have_data;
              }
            TypeLast referenced(void) const
              {
                return data;
              }
          };
        JSONHoldingGenerator<FieldGeneratorLast, HolderLast, TypeLast, bool > fieldGeneratorLast;
    class FieldGeneratorLastSize : public JSONParallelGenerator
          {
          private:
            JSONHoldingGenerator<JSONNumberTextGenerator, std::string, const char * > field0;
            JSONHoldingGenerator<JSONNullGenerator, bool, bool > field1;
            JSONHandler *all_handlers[2];

          protected:
            size_t start(JSONHandler ***parallel_handlers_location)
              {
                *parallel_handlers_location = &(all_handlers[0]);
                return 2;
              }
            void finish(size_t winning_index)
              {
                TypeLastSize result;
                result.key = winning_index;
                switch (winning_index)
                  {
                    case 0:
                      {
                        assert(field0.have_value);
                        result.u.choice0 = atof(field0.value.c_str());
                        break;
                      }
                    case 1:
                      {
                        assert(field1.have_value);
                        result.u.choice1 = field1.value;
                        break;
                      }
                    default:
                      {
                        assert(false);
                      }
                  }
                handle_result(result);
              }
            virtual void handle_result(TypeLastSize result) = 0;

          public:
            FieldGeneratorLastSize(bool ignore_extras) : field0("option 0 of field \"LastSize\""), field1("option 1 of field \"LastSize\"")
              {
                all_handlers[0] = &field0;
                all_handlers[1] = &field1;
              }
            FieldGeneratorLastSize(std::string what, bool ignore_extras) : field0("option 0 of field \"LastSize\""), field1("option 1 of field \"LastSize\"")
              {
                all_handlers[0] = &field0;
                all_handlers[1] = &field1;
              }
            ~FieldGeneratorLastSize(void)  { }

            void reset(void)
              {
                field0.reset();
                field1.reset();
                JSONParallelGenerator::reset();
              }
          };
        class HolderLastSize
          {
          private:
            bool have_data;
            TypeLastSize data;

          public:
            HolderLastSize(void) : have_data(false)  { }
            HolderLastSize(TypeLastSize init_data) : have_data(true), data(init_data)
              {
                if (have_data)
                  {
                    switch (data.key)
                      {
                        case 0:
                          break;
                        case 1:
                          break;
                        default:
                          assert(false);
                      }
                  }
              }
            HolderLastSize(const HolderLastSize &other) : have_data(other.haveData()), data(other.referenced())
              {
                if (have_data)
                  {
                    switch (data.key)
                      {
                        case 0:
                          break;
                        case 1:
                          break;
                        default:
                          assert(false);
                      }
                  }
              }
            ~HolderLastSize(void)
              {
                if (have_data)
                  {
                    switch (data.key)
                      {
                        case 0:
                          break;
                        case 1:
                          break;
                        default:
                          assert(false);
                      }
                  }
              }

            void operator=(const HolderLastSize &other)
              {
                TypeLastSize new_data;
                if (other.haveData())
                  {
                    new_data = other.referenced();
                    switch (new_data.key)
                      {
                        case 0:
                          break;
                        case 1:
                          break;
                        default:
                          assert(false);
                      }
                  }
                if (have_data)
                  {
                    switch (data.key)
                      {
                        case 0:
                          break;
                        case 1:
                          break;
                        default:
                          assert(false);
                      }
                  }
                have_data = other.haveData();
                if (have_data)
                    data = new_data;
              }
            bool haveData(void) const
              {
                return have_data;
              }
            TypeLastSize referenced(void) const
              {
                return data;
              }
          };
        JSONHoldingGenerator<FieldGeneratorLastSize, HolderLastSize, TypeLastSize, bool > fieldGeneratorLastSize;
    class FieldGeneratorVolume : public JSONParallelGenerator
          {
          private:
            JSONHoldingGenerator<JSONNumberTextGenerator, std::string, const char * > field0;
            JSONHoldingGenerator<JSONNullGenerator, bool, bool > field1;
            JSONHandler *all_handlers[2];

          protected:
            size_t start(JSONHandler ***parallel_handlers_location)
              {
                *parallel_handlers_location = &(all_handlers[0]);
                return 2;
              }
            void finish(size_t winning_index)
              {
                TypeVolume result;
                result.key = winning_index;
                switch (winning_index)
                  {
                    case 0:
                      {
                        assert(field0.have_value);
                        result.u.choice0 = atof(field0.value.c_str());
                        break;
                      }
                    case 1:
                      {
                        assert(field1.have_value);
                        result.u.choice1 = field1.value;
                        break;
                      }
                    default:
                      {
                        assert(false);
                      }
                  }
                handle_result(result);
              }
            virtual void handle_result(TypeVolume result) = 0;

          public:
            FieldGeneratorVolume(bool ignore_extras) : field0("option 0 of field \"Volume\""), field1("option 1 of field \"Volume\"")
              {
                all_handlers[0] = &field0;
                all_handlers[1] = &field1;
              }
            FieldGeneratorVolume(std::string what, bool ignore_extras) : field0("option 0 of field \"Volume\""), field1("option 1 of field \"Volume\"")
              {
                all_handlers[0] = &field0;
                all_handlers[1] = &field1;
              }
            ~FieldGeneratorVolume(void)  { }

            void reset(void)
              {
                field0.reset();
                field1.reset();
                JSONParallelGenerator::reset();
              }
          };
        class HolderVolume
          {
          private:
            bool have_data;
            TypeVolume data;

          public:
            HolderVolume(void) : have_data(false)  { }
            HolderVolume(TypeVolume init_data) : have_data(true), data(init_data)
              {
                if (have_data)
                  {
                    switch (data.key)
                      {
                        case 0:
                          break;
                        case 1:
                          break;
                        default:
                          assert(false);
                      }
                  }
              }
            HolderVolume(const HolderVolume &other) : have_data(other.haveData()), data(other.referenced())
              {
                if (have_data)
                  {
                    switch (data.key)
                      {
                        case 0:
                          break;
                        case 1:
                          break;
                        default:
                          assert(false);
                      }
                  }
              }
            ~HolderVolume(void)
              {
                if (have_data)
                  {
                    switch (data.key)
                      {
                        case 0:
                          break;
                        case 1:
                          break;
                        default:
                          assert(false);
                      }
                  }
              }

            void operator=(const HolderVolume &other)
              {
                TypeVolume new_data;
                if (other.haveData())
                  {
                    new_data = other.referenced();
                    switch (new_data.key)
                      {
                        case 0:
                          break;
                        case 1:
                          break;
                        default:
                          assert(false);
                      }
                  }
                if (have_data)
                  {
                    switch (data.key)
                      {
                        case 0:
                          break;
                        case 1:
                          break;
                        default:
                          assert(false);
                      }
                  }
                have_data = other.haveData();
                if (have_data)
                    data = new_data;
              }
            bool haveData(void) const
              {
                return have_data;
              }
            TypeVolume referenced(void) const
              {
                return data;
              }
          };
        JSONHoldingGenerator<FieldGeneratorVolume, HolderVolume, TypeVolume, bool > fieldGeneratorVolume;
    class FieldGeneratorPreviousClose : public JSONParallelGenerator
          {
          private:
            JSONHoldingGenerator<JSONNumberTextGenerator, std::string, const char * > field0;
            JSONHoldingGenerator<JSONNullGenerator, bool, bool > field1;
            JSONHandler *all_handlers[2];

          protected:
            size_t start(JSONHandler ***parallel_handlers_location)
              {
                *parallel_handlers_location = &(all_handlers[0]);
                return 2;
              }
            void finish(size_t winning_index)
              {
                TypePreviousClose result;
                result.key = winning_index;
                switch (winning_index)
                  {
                    case 0:
                      {
                        assert(field0.have_value);
                        result.u.choice0 = atof(field0.value.c_str());
                        break;
                      }
                    case 1:
                      {
                        assert(field1.have_value);
                        result.u.choice1 = field1.value;
                        break;
                      }
                    default:
                      {
                        assert(false);
                      }
                  }
                handle_result(result);
              }
            virtual void handle_result(TypePreviousClose result) = 0;

          public:
            FieldGeneratorPreviousClose(bool ignore_extras) : field0("option 0 of field \"PreviousClose\""), field1("option 1 of field \"PreviousClose\"")
              {
                all_handlers[0] = &field0;
                all_handlers[1] = &field1;
              }
            FieldGeneratorPreviousClose(std::string what, bool ignore_extras) : field0("option 0 of field \"PreviousClose\""), field1("option 1 of field \"PreviousClose\"")
              {
                all_handlers[0] = &field0;
                all_handlers[1] = &field1;
              }
            ~FieldGeneratorPreviousClose(void)  { }

            void reset(void)
              {
                field0.reset();
                field1.reset();
                JSONParallelGenerator::reset();
              }
          };
        class HolderPreviousClose
          {
          private:
            bool have_data;
            TypePreviousClose data;

          public:
            HolderPreviousClose(void) : have_data(false)  { }
            HolderPreviousClose(TypePreviousClose init_data) : have_data(true), data(init_data)
              {
                if (have_data)
                  {
                    switch (data.key)
                      {
                        case 0:
                          break;
                        case 1:
                          break;
                        default:
                          assert(false);
                      }
                  }
              }
            HolderPreviousClose(const HolderPreviousClose &other) : have_data(other.haveData()), data(other.referenced())
              {
                if (have_data)
                  {
                    switch (data.key)
                      {
                        case 0:
                          break;
                        case 1:
                          break;
                        default:
                          assert(false);
                      }
                  }
              }
            ~HolderPreviousClose(void)
              {
                if (have_data)
                  {
                    switch (data.key)
                      {
                        case 0:
                          break;
                        case 1:
                          break;
                        default:
                          assert(false);
                      }
                  }
              }

            void operator=(const HolderPreviousClose &other)
              {
                TypePreviousClose new_data;
                if (other.haveData())
                  {
                    new_data = other.referenced();
                    switch (new_data.key)
                      {
                        case 0:
                          break;
                        case 1:
                          break;
                        default:
                          assert(false);
                      }
                  }
                if (have_data)
                  {
                    switch (data.key)
                      {
                        case 0:
                          break;
                        case 1:
                          break;
                        default:
                          assert(false);
                      }
                  }
                have_data = other.haveData();
                if (have_data)
                    data = new_data;
              }
            bool haveData(void) const
              {
                return have_data;
              }
            TypePreviousClose referenced(void) const
              {
                return data;
              }
          };
        JSONHoldingGenerator<FieldGeneratorPreviousClose, HolderPreviousClose, TypePreviousClose, bool > fieldGeneratorPreviousClose;
    class FieldGeneratorPreviousCloseDate : public JSONParallelGenerator
          {
          private:
            JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > field0;
            JSONHoldingGenerator<JSONNullGenerator, bool, bool > field1;
            JSONHandler *all_handlers[2];

          protected:
            size_t start(JSONHandler ***parallel_handlers_location)
              {
                *parallel_handlers_location = &(all_handlers[0]);
                return 2;
              }
            void finish(size_t winning_index)
              {
                TypePreviousCloseDate result;
                result.key = winning_index;
                switch (winning_index)
                  {
                    case 0:
                      {
                        assert(field0.have_value);
                        result.choice0 = field0.value;
                        break;
                      }
                    case 1:
                      {
                        assert(field1.have_value);
                        result.choice1 = field1.value;
                        break;
                      }
                    default:
                      {
                        assert(false);
                      }
                  }
                handle_result(result);
              }
            virtual void handle_result(TypePreviousCloseDate result) = 0;

          public:
            FieldGeneratorPreviousCloseDate(bool ignore_extras) : field0("option 0 of field \"PreviousCloseDate\""), field1("option 1 of field \"PreviousCloseDate\"")
              {
                all_handlers[0] = &field0;
                all_handlers[1] = &field1;
              }
            FieldGeneratorPreviousCloseDate(std::string what, bool ignore_extras) : field0("option 0 of field \"PreviousCloseDate\""), field1("option 1 of field \"PreviousCloseDate\"")
              {
                all_handlers[0] = &field0;
                all_handlers[1] = &field1;
              }
            ~FieldGeneratorPreviousCloseDate(void)  { }

            void reset(void)
              {
                field0.reset();
                field1.reset();
                JSONParallelGenerator::reset();
              }
          };
        class HolderPreviousCloseDate
          {
          private:
            bool have_data;
            TypePreviousCloseDate data;

          public:
            HolderPreviousCloseDate(void) : have_data(false)  { }
            HolderPreviousCloseDate(TypePreviousCloseDate init_data) : have_data(true), data(init_data)
              {
                if (have_data)
                  {
                    switch (data.key)
                      {
                        case 0:
                          break;
                        case 1:
                          break;
                        default:
                          assert(false);
                      }
                  }
              }
            HolderPreviousCloseDate(const HolderPreviousCloseDate &other) : have_data(other.haveData()), data(other.referenced())
              {
                if (have_data)
                  {
                    switch (data.key)
                      {
                        case 0:
                          break;
                        case 1:
                          break;
                        default:
                          assert(false);
                      }
                  }
              }
            ~HolderPreviousCloseDate(void)
              {
                if (have_data)
                  {
                    switch (data.key)
                      {
                        case 0:
                          break;
                        case 1:
                          break;
                        default:
                          assert(false);
                      }
                  }
              }

            void operator=(const HolderPreviousCloseDate &other)
              {
                TypePreviousCloseDate new_data;
                if (other.haveData())
                  {
                    new_data = other.referenced();
                    switch (new_data.key)
                      {
                        case 0:
                          break;
                        case 1:
                          break;
                        default:
                          assert(false);
                      }
                  }
                if (have_data)
                  {
                    switch (data.key)
                      {
                        case 0:
                          break;
                        case 1:
                          break;
                        default:
                          assert(false);
                      }
                  }
                have_data = other.haveData();
                if (have_data)
                    data = new_data;
              }
            bool haveData(void) const
              {
                return have_data;
              }
            TypePreviousCloseDate referenced(void) const
              {
                return data;
              }
          };
        JSONHoldingGenerator<FieldGeneratorPreviousCloseDate, HolderPreviousCloseDate, TypePreviousCloseDate, bool > fieldGeneratorPreviousCloseDate;
    class FieldGeneratorChangeFromPreviousClose : public JSONParallelGenerator
          {
          private:
            JSONHoldingGenerator<JSONNumberTextGenerator, std::string, const char * > field0;
            JSONHoldingGenerator<JSONNullGenerator, bool, bool > field1;
            JSONHandler *all_handlers[2];

          protected:
            size_t start(JSONHandler ***parallel_handlers_location)
              {
                *parallel_handlers_location = &(all_handlers[0]);
                return 2;
              }
            void finish(size_t winning_index)
              {
                TypeChangeFromPreviousClose result;
                result.key = winning_index;
                switch (winning_index)
                  {
                    case 0:
                      {
                        assert(field0.have_value);
                        result.u.choice0 = atof(field0.value.c_str());
                        break;
                      }
                    case 1:
                      {
                        assert(field1.have_value);
                        result.u.choice1 = field1.value;
                        break;
                      }
                    default:
                      {
                        assert(false);
                      }
                  }
                handle_result(result);
              }
            virtual void handle_result(TypeChangeFromPreviousClose result) = 0;

          public:
            FieldGeneratorChangeFromPreviousClose(bool ignore_extras) : field0("option 0 of field \"ChangeFromPreviousClose\""), field1("option 1 of field \"ChangeFromPreviousClose\"")
              {
                all_handlers[0] = &field0;
                all_handlers[1] = &field1;
              }
            FieldGeneratorChangeFromPreviousClose(std::string what, bool ignore_extras) : field0("option 0 of field \"ChangeFromPreviousClose\""), field1("option 1 of field \"ChangeFromPreviousClose\"")
              {
                all_handlers[0] = &field0;
                all_handlers[1] = &field1;
              }
            ~FieldGeneratorChangeFromPreviousClose(void)  { }

            void reset(void)
              {
                field0.reset();
                field1.reset();
                JSONParallelGenerator::reset();
              }
          };
        class HolderChangeFromPreviousClose
          {
          private:
            bool have_data;
            TypeChangeFromPreviousClose data;

          public:
            HolderChangeFromPreviousClose(void) : have_data(false)  { }
            HolderChangeFromPreviousClose(TypeChangeFromPreviousClose init_data) : have_data(true), data(init_data)
              {
                if (have_data)
                  {
                    switch (data.key)
                      {
                        case 0:
                          break;
                        case 1:
                          break;
                        default:
                          assert(false);
                      }
                  }
              }
            HolderChangeFromPreviousClose(const HolderChangeFromPreviousClose &other) : have_data(other.haveData()), data(other.referenced())
              {
                if (have_data)
                  {
                    switch (data.key)
                      {
                        case 0:
                          break;
                        case 1:
                          break;
                        default:
                          assert(false);
                      }
                  }
              }
            ~HolderChangeFromPreviousClose(void)
              {
                if (have_data)
                  {
                    switch (data.key)
                      {
                        case 0:
                          break;
                        case 1:
                          break;
                        default:
                          assert(false);
                      }
                  }
              }

            void operator=(const HolderChangeFromPreviousClose &other)
              {
                TypeChangeFromPreviousClose new_data;
                if (other.haveData())
                  {
                    new_data = other.referenced();
                    switch (new_data.key)
                      {
                        case 0:
                          break;
                        case 1:
                          break;
                        default:
                          assert(false);
                      }
                  }
                if (have_data)
                  {
                    switch (data.key)
                      {
                        case 0:
                          break;
                        case 1:
                          break;
                        default:
                          assert(false);
                      }
                  }
                have_data = other.haveData();
                if (have_data)
                    data = new_data;
              }
            bool haveData(void) const
              {
                return have_data;
              }
            TypeChangeFromPreviousClose referenced(void) const
              {
                return data;
              }
          };
        JSONHoldingGenerator<FieldGeneratorChangeFromPreviousClose, HolderChangeFromPreviousClose, TypeChangeFromPreviousClose, bool > fieldGeneratorChangeFromPreviousClose;
    class FieldGeneratorPercentChangeFromPreviousClose : public JSONParallelGenerator
          {
          private:
            JSONHoldingGenerator<JSONNumberTextGenerator, std::string, const char * > field0;
            JSONHoldingGenerator<JSONNullGenerator, bool, bool > field1;
            JSONHandler *all_handlers[2];

          protected:
            size_t start(JSONHandler ***parallel_handlers_location)
              {
                *parallel_handlers_location = &(all_handlers[0]);
                return 2;
              }
            void finish(size_t winning_index)
              {
                TypePercentChangeFromPreviousClose result;
                result.key = winning_index;
                switch (winning_index)
                  {
                    case 0:
                      {
                        assert(field0.have_value);
                        result.u.choice0 = atof(field0.value.c_str());
                        break;
                      }
                    case 1:
                      {
                        assert(field1.have_value);
                        result.u.choice1 = field1.value;
                        break;
                      }
                    default:
                      {
                        assert(false);
                      }
                  }
                handle_result(result);
              }
            virtual void handle_result(TypePercentChangeFromPreviousClose result) = 0;

          public:
            FieldGeneratorPercentChangeFromPreviousClose(bool ignore_extras) : field0("option 0 of field \"PercentChangeFromPreviousClose\""), field1("option 1 of field \"PercentChangeFromPreviousClose\"")
              {
                all_handlers[0] = &field0;
                all_handlers[1] = &field1;
              }
            FieldGeneratorPercentChangeFromPreviousClose(std::string what, bool ignore_extras) : field0("option 0 of field \"PercentChangeFromPreviousClose\""), field1("option 1 of field \"PercentChangeFromPreviousClose\"")
              {
                all_handlers[0] = &field0;
                all_handlers[1] = &field1;
              }
            ~FieldGeneratorPercentChangeFromPreviousClose(void)  { }

            void reset(void)
              {
                field0.reset();
                field1.reset();
                JSONParallelGenerator::reset();
              }
          };
        class HolderPercentChangeFromPreviousClose
          {
          private:
            bool have_data;
            TypePercentChangeFromPreviousClose data;

          public:
            HolderPercentChangeFromPreviousClose(void) : have_data(false)  { }
            HolderPercentChangeFromPreviousClose(TypePercentChangeFromPreviousClose init_data) : have_data(true), data(init_data)
              {
                if (have_data)
                  {
                    switch (data.key)
                      {
                        case 0:
                          break;
                        case 1:
                          break;
                        default:
                          assert(false);
                      }
                  }
              }
            HolderPercentChangeFromPreviousClose(const HolderPercentChangeFromPreviousClose &other) : have_data(other.haveData()), data(other.referenced())
              {
                if (have_data)
                  {
                    switch (data.key)
                      {
                        case 0:
                          break;
                        case 1:
                          break;
                        default:
                          assert(false);
                      }
                  }
              }
            ~HolderPercentChangeFromPreviousClose(void)
              {
                if (have_data)
                  {
                    switch (data.key)
                      {
                        case 0:
                          break;
                        case 1:
                          break;
                        default:
                          assert(false);
                      }
                  }
              }

            void operator=(const HolderPercentChangeFromPreviousClose &other)
              {
                TypePercentChangeFromPreviousClose new_data;
                if (other.haveData())
                  {
                    new_data = other.referenced();
                    switch (new_data.key)
                      {
                        case 0:
                          break;
                        case 1:
                          break;
                        default:
                          assert(false);
                      }
                  }
                if (have_data)
                  {
                    switch (data.key)
                      {
                        case 0:
                          break;
                        case 1:
                          break;
                        default:
                          assert(false);
                      }
                  }
                have_data = other.haveData();
                if (have_data)
                    data = new_data;
              }
            bool haveData(void) const
              {
                return have_data;
              }
            TypePercentChangeFromPreviousClose referenced(void) const
              {
                return data;
              }
          };
        JSONHoldingGenerator<FieldGeneratorPercentChangeFromPreviousClose, HolderPercentChangeFromPreviousClose, TypePercentChangeFromPreviousClose, bool > fieldGeneratorPercentChangeFromPreviousClose;
    class FieldGeneratorHigh52Weeks : public JSONParallelGenerator
          {
          private:
            JSONHoldingGenerator<JSONNumberTextGenerator, std::string, const char * > field0;
            JSONHoldingGenerator<JSONNullGenerator, bool, bool > field1;
            JSONHandler *all_handlers[2];

          protected:
            size_t start(JSONHandler ***parallel_handlers_location)
              {
                *parallel_handlers_location = &(all_handlers[0]);
                return 2;
              }
            void finish(size_t winning_index)
              {
                TypeHigh52Weeks result;
                result.key = winning_index;
                switch (winning_index)
                  {
                    case 0:
                      {
                        assert(field0.have_value);
                        result.u.choice0 = atof(field0.value.c_str());
                        break;
                      }
                    case 1:
                      {
                        assert(field1.have_value);
                        result.u.choice1 = field1.value;
                        break;
                      }
                    default:
                      {
                        assert(false);
                      }
                  }
                handle_result(result);
              }
            virtual void handle_result(TypeHigh52Weeks result) = 0;

          public:
            FieldGeneratorHigh52Weeks(bool ignore_extras) : field0("option 0 of field \"High52Weeks\""), field1("option 1 of field \"High52Weeks\"")
              {
                all_handlers[0] = &field0;
                all_handlers[1] = &field1;
              }
            FieldGeneratorHigh52Weeks(std::string what, bool ignore_extras) : field0("option 0 of field \"High52Weeks\""), field1("option 1 of field \"High52Weeks\"")
              {
                all_handlers[0] = &field0;
                all_handlers[1] = &field1;
              }
            ~FieldGeneratorHigh52Weeks(void)  { }

            void reset(void)
              {
                field0.reset();
                field1.reset();
                JSONParallelGenerator::reset();
              }
          };
        class HolderHigh52Weeks
          {
          private:
            bool have_data;
            TypeHigh52Weeks data;

          public:
            HolderHigh52Weeks(void) : have_data(false)  { }
            HolderHigh52Weeks(TypeHigh52Weeks init_data) : have_data(true), data(init_data)
              {
                if (have_data)
                  {
                    switch (data.key)
                      {
                        case 0:
                          break;
                        case 1:
                          break;
                        default:
                          assert(false);
                      }
                  }
              }
            HolderHigh52Weeks(const HolderHigh52Weeks &other) : have_data(other.haveData()), data(other.referenced())
              {
                if (have_data)
                  {
                    switch (data.key)
                      {
                        case 0:
                          break;
                        case 1:
                          break;
                        default:
                          assert(false);
                      }
                  }
              }
            ~HolderHigh52Weeks(void)
              {
                if (have_data)
                  {
                    switch (data.key)
                      {
                        case 0:
                          break;
                        case 1:
                          break;
                        default:
                          assert(false);
                      }
                  }
              }

            void operator=(const HolderHigh52Weeks &other)
              {
                TypeHigh52Weeks new_data;
                if (other.haveData())
                  {
                    new_data = other.referenced();
                    switch (new_data.key)
                      {
                        case 0:
                          break;
                        case 1:
                          break;
                        default:
                          assert(false);
                      }
                  }
                if (have_data)
                  {
                    switch (data.key)
                      {
                        case 0:
                          break;
                        case 1:
                          break;
                        default:
                          assert(false);
                      }
                  }
                have_data = other.haveData();
                if (have_data)
                    data = new_data;
              }
            bool haveData(void) const
              {
                return have_data;
              }
            TypeHigh52Weeks referenced(void) const
              {
                return data;
              }
          };
        JSONHoldingGenerator<FieldGeneratorHigh52Weeks, HolderHigh52Weeks, TypeHigh52Weeks, bool > fieldGeneratorHigh52Weeks;
    class FieldGeneratorLow52Weeks : public JSONParallelGenerator
          {
          private:
            JSONHoldingGenerator<JSONNumberTextGenerator, std::string, const char * > field0;
            JSONHoldingGenerator<JSONNullGenerator, bool, bool > field1;
            JSONHandler *all_handlers[2];

          protected:
            size_t start(JSONHandler ***parallel_handlers_location)
              {
                *parallel_handlers_location = &(all_handlers[0]);
                return 2;
              }
            void finish(size_t winning_index)
              {
                TypeLow52Weeks result;
                result.key = winning_index;
                switch (winning_index)
                  {
                    case 0:
                      {
                        assert(field0.have_value);
                        result.u.choice0 = atof(field0.value.c_str());
                        break;
                      }
                    case 1:
                      {
                        assert(field1.have_value);
                        result.u.choice1 = field1.value;
                        break;
                      }
                    default:
                      {
                        assert(false);
                      }
                  }
                handle_result(result);
              }
            virtual void handle_result(TypeLow52Weeks result) = 0;

          public:
            FieldGeneratorLow52Weeks(bool ignore_extras) : field0("option 0 of field \"Low52Weeks\""), field1("option 1 of field \"Low52Weeks\"")
              {
                all_handlers[0] = &field0;
                all_handlers[1] = &field1;
              }
            FieldGeneratorLow52Weeks(std::string what, bool ignore_extras) : field0("option 0 of field \"Low52Weeks\""), field1("option 1 of field \"Low52Weeks\"")
              {
                all_handlers[0] = &field0;
                all_handlers[1] = &field1;
              }
            ~FieldGeneratorLow52Weeks(void)  { }

            void reset(void)
              {
                field0.reset();
                field1.reset();
                JSONParallelGenerator::reset();
              }
          };
        class HolderLow52Weeks
          {
          private:
            bool have_data;
            TypeLow52Weeks data;

          public:
            HolderLow52Weeks(void) : have_data(false)  { }
            HolderLow52Weeks(TypeLow52Weeks init_data) : have_data(true), data(init_data)
              {
                if (have_data)
                  {
                    switch (data.key)
                      {
                        case 0:
                          break;
                        case 1:
                          break;
                        default:
                          assert(false);
                      }
                  }
              }
            HolderLow52Weeks(const HolderLow52Weeks &other) : have_data(other.haveData()), data(other.referenced())
              {
                if (have_data)
                  {
                    switch (data.key)
                      {
                        case 0:
                          break;
                        case 1:
                          break;
                        default:
                          assert(false);
                      }
                  }
              }
            ~HolderLow52Weeks(void)
              {
                if (have_data)
                  {
                    switch (data.key)
                      {
                        case 0:
                          break;
                        case 1:
                          break;
                        default:
                          assert(false);
                      }
                  }
              }

            void operator=(const HolderLow52Weeks &other)
              {
                TypeLow52Weeks new_data;
                if (other.haveData())
                  {
                    new_data = other.referenced();
                    switch (new_data.key)
                      {
                        case 0:
                          break;
                        case 1:
                          break;
                        default:
                          assert(false);
                      }
                  }
                if (have_data)
                  {
                    switch (data.key)
                      {
                        case 0:
                          break;
                        case 1:
                          break;
                        default:
                          assert(false);
                      }
                  }
                have_data = other.haveData();
                if (have_data)
                    data = new_data;
              }
            bool haveData(void) const
              {
                return have_data;
              }
            TypeLow52Weeks referenced(void) const
              {
                return data;
              }
          };
        JSONHoldingGenerator<FieldGeneratorLow52Weeks, HolderLow52Weeks, TypeLow52Weeks, bool > fieldGeneratorLow52Weeks;
    class FieldGeneratorCurrency : public JSONParallelGenerator
          {
          private:
            JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > field0;
            JSONHoldingGenerator<JSONNullGenerator, bool, bool > field1;
            JSONHandler *all_handlers[2];

          protected:
            size_t start(JSONHandler ***parallel_handlers_location)
              {
                *parallel_handlers_location = &(all_handlers[0]);
                return 2;
              }
            void finish(size_t winning_index)
              {
                TypeCurrency result;
                result.key = winning_index;
                switch (winning_index)
                  {
                    case 0:
                      {
                        assert(field0.have_value);
                        result.choice0 = field0.value;
                        break;
                      }
                    case 1:
                      {
                        assert(field1.have_value);
                        result.choice1 = field1.value;
                        break;
                      }
                    default:
                      {
                        assert(false);
                      }
                  }
                handle_result(result);
              }
            virtual void handle_result(TypeCurrency result) = 0;

          public:
            FieldGeneratorCurrency(bool ignore_extras) : field0("option 0 of field \"Currency\""), field1("option 1 of field \"Currency\"")
              {
                all_handlers[0] = &field0;
                all_handlers[1] = &field1;
              }
            FieldGeneratorCurrency(std::string what, bool ignore_extras) : field0("option 0 of field \"Currency\""), field1("option 1 of field \"Currency\"")
              {
                all_handlers[0] = &field0;
                all_handlers[1] = &field1;
              }
            ~FieldGeneratorCurrency(void)  { }

            void reset(void)
              {
                field0.reset();
                field1.reset();
                JSONParallelGenerator::reset();
              }
          };
        class HolderCurrency
          {
          private:
            bool have_data;
            TypeCurrency data;

          public:
            HolderCurrency(void) : have_data(false)  { }
            HolderCurrency(TypeCurrency init_data) : have_data(true), data(init_data)
              {
                if (have_data)
                  {
                    switch (data.key)
                      {
                        case 0:
                          break;
                        case 1:
                          break;
                        default:
                          assert(false);
                      }
                  }
              }
            HolderCurrency(const HolderCurrency &other) : have_data(other.haveData()), data(other.referenced())
              {
                if (have_data)
                  {
                    switch (data.key)
                      {
                        case 0:
                          break;
                        case 1:
                          break;
                        default:
                          assert(false);
                      }
                  }
              }
            ~HolderCurrency(void)
              {
                if (have_data)
                  {
                    switch (data.key)
                      {
                        case 0:
                          break;
                        case 1:
                          break;
                        default:
                          assert(false);
                      }
                  }
              }

            void operator=(const HolderCurrency &other)
              {
                TypeCurrency new_data;
                if (other.haveData())
                  {
                    new_data = other.referenced();
                    switch (new_data.key)
                      {
                        case 0:
                          break;
                        case 1:
                          break;
                        default:
                          assert(false);
                      }
                  }
                if (have_data)
                  {
                    switch (data.key)
                      {
                        case 0:
                          break;
                        case 1:
                          break;
                        default:
                          assert(false);
                      }
                  }
                have_data = other.haveData();
                if (have_data)
                    data = new_data;
              }
            bool haveData(void) const
              {
                return have_data;
              }
            TypeCurrency referenced(void) const
              {
                return data;
              }
          };
        JSONHoldingGenerator<FieldGeneratorCurrency, HolderCurrency, TypeCurrency, bool > fieldGeneratorCurrency;
    class FieldGeneratorTradingHalted : public JSONParallelGenerator
          {
          private:
            JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > field0;
            JSONHoldingGenerator<JSONNullGenerator, bool, bool > field1;
            JSONHandler *all_handlers[2];

          protected:
            size_t start(JSONHandler ***parallel_handlers_location)
              {
                *parallel_handlers_location = &(all_handlers[0]);
                return 2;
              }
            void finish(size_t winning_index)
              {
                TypeTradingHalted result;
                result.key = winning_index;
                switch (winning_index)
                  {
                    case 0:
                      {
                        assert(field0.have_value);
                        result.u.choice0 = field0.value;
                        break;
                      }
                    case 1:
                      {
                        assert(field1.have_value);
                        result.u.choice1 = field1.value;
                        break;
                      }
                    default:
                      {
                        assert(false);
                      }
                  }
                handle_result(result);
              }
            virtual void handle_result(TypeTradingHalted result) = 0;

          public:
            FieldGeneratorTradingHalted(bool ignore_extras) : field0("option 0 of field \"TradingHalted\""), field1("option 1 of field \"TradingHalted\"")
              {
                all_handlers[0] = &field0;
                all_handlers[1] = &field1;
              }
            FieldGeneratorTradingHalted(std::string what, bool ignore_extras) : field0("option 0 of field \"TradingHalted\""), field1("option 1 of field \"TradingHalted\"")
              {
                all_handlers[0] = &field0;
                all_handlers[1] = &field1;
              }
            ~FieldGeneratorTradingHalted(void)  { }

            void reset(void)
              {
                field0.reset();
                field1.reset();
                JSONParallelGenerator::reset();
              }
          };
        class HolderTradingHalted
          {
          private:
            bool have_data;
            TypeTradingHalted data;

          public:
            HolderTradingHalted(void) : have_data(false)  { }
            HolderTradingHalted(TypeTradingHalted init_data) : have_data(true), data(init_data)
              {
                if (have_data)
                  {
                    switch (data.key)
                      {
                        case 0:
                          break;
                        case 1:
                          break;
                        default:
                          assert(false);
                      }
                  }
              }
            HolderTradingHalted(const HolderTradingHalted &other) : have_data(other.haveData()), data(other.referenced())
              {
                if (have_data)
                  {
                    switch (data.key)
                      {
                        case 0:
                          break;
                        case 1:
                          break;
                        default:
                          assert(false);
                      }
                  }
              }
            ~HolderTradingHalted(void)
              {
                if (have_data)
                  {
                    switch (data.key)
                      {
                        case 0:
                          break;
                        case 1:
                          break;
                        default:
                          assert(false);
                      }
                  }
              }

            void operator=(const HolderTradingHalted &other)
              {
                TypeTradingHalted new_data;
                if (other.haveData())
                  {
                    new_data = other.referenced();
                    switch (new_data.key)
                      {
                        case 0:
                          break;
                        case 1:
                          break;
                        default:
                          assert(false);
                      }
                  }
                if (have_data)
                  {
                    switch (data.key)
                      {
                        case 0:
                          break;
                        case 1:
                          break;
                        default:
                          assert(false);
                      }
                  }
                have_data = other.haveData();
                if (have_data)
                    data = new_data;
              }
            bool haveData(void) const
              {
                return have_data;
              }
            TypeTradingHalted referenced(void) const
              {
                return data;
              }
          };
        JSONHoldingGenerator<FieldGeneratorTradingHalted, HolderTradingHalted, TypeTradingHalted, bool > fieldGeneratorTradingHalted;
        JSONHoldingGenerator<StockSecurityDetailsJSON::Generator, RCHandle<StockSecurityDetailsJSON>, StockSecurityDetailsJSON *, bool > fieldGeneratorSecurity;
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
            StockGlobalQuotesJSON *result = new StockGlobalQuotesJSON();
            assert(result != NULL);
            RCHandle<StockGlobalQuotesJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraStockGlobalQuotesAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void finish(StockGlobalQuotesJSON *result)
          {
            if (fieldGeneratorOutcome.have_value)
              {
                result->setOutcome(fieldGeneratorOutcome.value);
                fieldGeneratorOutcome.have_value = false;
              }
            else if (!(result->hasOutcome()))
              {
                error("When parsing the object for %what%, the \"Outcome\" field was missing.");
              }
            if (fieldGeneratorMessage.have_value)
              {
                result->setMessage(fieldGeneratorMessage.value.referenced());
                fieldGeneratorMessage.have_value = false;
              }
            if (fieldGeneratorDelay.have_value)
              {
                result->setDelay(fieldGeneratorDelay.value.referenced());
                fieldGeneratorDelay.have_value = false;
              }
            if (fieldGeneratorDate.have_value)
              {
                result->setDate(fieldGeneratorDate.value);
                fieldGeneratorDate.have_value = false;
              }
            else if (!(result->hasDate()))
              {
                error("When parsing the object for %what%, the \"Date\" field was missing.");
              }
            if (fieldGeneratorTime.have_value)
              {
                result->setTime(fieldGeneratorTime.value);
                fieldGeneratorTime.have_value = false;
              }
            else if (!(result->hasTime()))
              {
                error("When parsing the object for %what%, the \"Time\" field was missing.");
              }
            if (fieldGeneratorUTCOffset.have_value)
              {
                result->setUTCOffsetText(fieldGeneratorUTCOffset.value);
                fieldGeneratorUTCOffset.have_value = false;
              }
            else if (!(result->hasUTCOffset()))
              {
                error("When parsing the object for %what%, the \"UTCOffset\" field was missing.");
              }
            if (fieldGeneratorOpen.have_value)
              {
                result->setOpen(fieldGeneratorOpen.value.referenced());
                fieldGeneratorOpen.have_value = false;
              }
            if (fieldGeneratorClose.have_value)
              {
                result->setClose(fieldGeneratorClose.value.referenced());
                fieldGeneratorClose.have_value = false;
              }
            if (fieldGeneratorHigh.have_value)
              {
                result->setHigh(fieldGeneratorHigh.value.referenced());
                fieldGeneratorHigh.have_value = false;
              }
            if (fieldGeneratorLow.have_value)
              {
                result->setLow(fieldGeneratorLow.value.referenced());
                fieldGeneratorLow.have_value = false;
              }
            if (fieldGeneratorLast.have_value)
              {
                result->setLast(fieldGeneratorLast.value.referenced());
                fieldGeneratorLast.have_value = false;
              }
            if (fieldGeneratorLastSize.have_value)
              {
                result->setLastSize(fieldGeneratorLastSize.value.referenced());
                fieldGeneratorLastSize.have_value = false;
              }
            if (fieldGeneratorVolume.have_value)
              {
                result->setVolume(fieldGeneratorVolume.value.referenced());
                fieldGeneratorVolume.have_value = false;
              }
            if (fieldGeneratorPreviousClose.have_value)
              {
                result->setPreviousClose(fieldGeneratorPreviousClose.value.referenced());
                fieldGeneratorPreviousClose.have_value = false;
              }
            if (fieldGeneratorPreviousCloseDate.have_value)
              {
                result->setPreviousCloseDate(fieldGeneratorPreviousCloseDate.value.referenced());
                fieldGeneratorPreviousCloseDate.have_value = false;
              }
            if (fieldGeneratorChangeFromPreviousClose.have_value)
              {
                result->setChangeFromPreviousClose(fieldGeneratorChangeFromPreviousClose.value.referenced());
                fieldGeneratorChangeFromPreviousClose.have_value = false;
              }
            if (fieldGeneratorPercentChangeFromPreviousClose.have_value)
              {
                result->setPercentChangeFromPreviousClose(fieldGeneratorPercentChangeFromPreviousClose.value.referenced());
                fieldGeneratorPercentChangeFromPreviousClose.have_value = false;
              }
            if (fieldGeneratorHigh52Weeks.have_value)
              {
                result->setHigh52Weeks(fieldGeneratorHigh52Weeks.value.referenced());
                fieldGeneratorHigh52Weeks.have_value = false;
              }
            if (fieldGeneratorLow52Weeks.have_value)
              {
                result->setLow52Weeks(fieldGeneratorLow52Weeks.value.referenced());
                fieldGeneratorLow52Weeks.have_value = false;
              }
            if (fieldGeneratorCurrency.have_value)
              {
                result->setCurrency(fieldGeneratorCurrency.value.referenced());
                fieldGeneratorCurrency.have_value = false;
              }
            if (fieldGeneratorTradingHalted.have_value)
              {
                result->setTradingHalted(fieldGeneratorTradingHalted.value.referenced());
                fieldGeneratorTradingHalted.have_value = false;
              }
            if (fieldGeneratorSecurity.have_value)
              {
                result->setSecurity(fieldGeneratorSecurity.value.referenced());
                fieldGeneratorSecurity.have_value = false;
              }
            else if (!(result->hasSecurity()))
              {
                error("When parsing the object for %what%, the \"Security\" field was missing.");
              }
          }
        virtual void handle_result(StockGlobalQuotesJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'C':
                    switch ((unsigned char)(field_name[1]))
                      {
                        case 'h':
                            if (strcmp(&(field_name[2]), "angeFromPreviousClose") == 0)
                                return &fieldGeneratorChangeFromPreviousClose;
                            break;
                        case 'l':
                            if (strcmp(&(field_name[2]), "ose") == 0)
                                return &fieldGeneratorClose;
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
                            if (strcmp(&(field_name[2]), "te") == 0)
                                return &fieldGeneratorDate;
                            break;
                        case 'e':
                            if (strcmp(&(field_name[2]), "lay") == 0)
                                return &fieldGeneratorDelay;
                            break;
                        default:
                            break;
                      }
                    break;
                case 'H':
                    if (strncmp(&(field_name[1]), "igh", 3) == 0)
                      {
                        switch ((unsigned char)(field_name[4]))
                          {
                            case 0:
                                return &fieldGeneratorHigh;
                            case '5':
                                if (strcmp(&(field_name[5]), "2Weeks") == 0)
                                    return &fieldGeneratorHigh52Weeks;
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 'L':
                    switch ((unsigned char)(field_name[1]))
                      {
                        case 'a':
                            if (strncmp(&(field_name[2]), "st", 2) == 0)
                              {
                                switch ((unsigned char)(field_name[4]))
                                  {
                                    case 0:
                                        return &fieldGeneratorLast;
                                    case 'S':
                                        if (strcmp(&(field_name[5]), "ize") == 0)
                                            return &fieldGeneratorLastSize;
                                        break;
                                    default:
                                        break;
                                  }
                              }
                            break;
                        case 'o':
                            if (strncmp(&(field_name[2]), "w", 1) == 0)
                              {
                                switch ((unsigned char)(field_name[3]))
                                  {
                                    case 0:
                                        return &fieldGeneratorLow;
                                    case '5':
                                        if (strcmp(&(field_name[4]), "2Weeks") == 0)
                                            return &fieldGeneratorLow52Weeks;
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
                case 'M':
                    if (strcmp(&(field_name[1]), "essage") == 0)
                        return &fieldGeneratorMessage;
                    break;
                case 'O':
                    switch ((unsigned char)(field_name[1]))
                      {
                        case 'p':
                            if (strcmp(&(field_name[2]), "en") == 0)
                                return &fieldGeneratorOpen;
                            break;
                        case 'u':
                            if (strcmp(&(field_name[2]), "tcome") == 0)
                                return &fieldGeneratorOutcome;
                            break;
                        default:
                            break;
                      }
                    break;
                case 'P':
                    switch ((unsigned char)(field_name[1]))
                      {
                        case 'e':
                            if (strcmp(&(field_name[2]), "rcentChangeFromPreviousClose") == 0)
                                return &fieldGeneratorPercentChangeFromPreviousClose;
                            break;
                        case 'r':
                            if (strncmp(&(field_name[2]), "eviousClose", 11) == 0)
                              {
                                switch ((unsigned char)(field_name[13]))
                                  {
                                    case 0:
                                        return &fieldGeneratorPreviousClose;
                                    case 'D':
                                        if (strcmp(&(field_name[14]), "ate") == 0)
                                            return &fieldGeneratorPreviousCloseDate;
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
                case 'S':
                    if (strcmp(&(field_name[1]), "ecurity") == 0)
                        return &fieldGeneratorSecurity;
                    break;
                case 'T':
                    switch ((unsigned char)(field_name[1]))
                      {
                        case 'i':
                            if (strcmp(&(field_name[2]), "me") == 0)
                                return &fieldGeneratorTime;
                            break;
                        case 'r':
                            if (strcmp(&(field_name[2]), "adingHalted") == 0)
                                return &fieldGeneratorTradingHalted;
                            break;
                        default:
                            break;
                      }
                    break;
                case 'U':
                    if (strcmp(&(field_name[1]), "TCOffset") == 0)
                        return &fieldGeneratorUTCOffset;
                    break;
                case 'V':
                    if (strcmp(&(field_name[1]), "olume") == 0)
                        return &fieldGeneratorVolume;
                    break;
                default:
                    break;
              }
            return NULL;
          }

      public:
        Generator(bool ignore_extras = false) : fieldGeneratorOutcome("field \"Outcome\" of the StockGlobalQuotes class"), fieldGeneratorMessage("field \"Message\" of the StockGlobalQuotes class", ignore_extras), fieldGeneratorDelay("field \"Delay\" of the StockGlobalQuotes class", ignore_extras), fieldGeneratorDate("field \"Date\" of the StockGlobalQuotes class"), fieldGeneratorTime("field \"Time\" of the StockGlobalQuotes class"), fieldGeneratorUTCOffset("field \"UTCOffset\" of the StockGlobalQuotes class"), fieldGeneratorOpen("field \"Open\" of the StockGlobalQuotes class", ignore_extras), fieldGeneratorClose("field \"Close\" of the StockGlobalQuotes class", ignore_extras), fieldGeneratorHigh("field \"High\" of the StockGlobalQuotes class", ignore_extras), fieldGeneratorLow("field \"Low\" of the StockGlobalQuotes class", ignore_extras), fieldGeneratorLast("field \"Last\" of the StockGlobalQuotes class", ignore_extras), fieldGeneratorLastSize("field \"LastSize\" of the StockGlobalQuotes class", ignore_extras), fieldGeneratorVolume("field \"Volume\" of the StockGlobalQuotes class", ignore_extras), fieldGeneratorPreviousClose("field \"PreviousClose\" of the StockGlobalQuotes class", ignore_extras), fieldGeneratorPreviousCloseDate("field \"PreviousCloseDate\" of the StockGlobalQuotes class", ignore_extras), fieldGeneratorChangeFromPreviousClose("field \"ChangeFromPreviousClose\" of the StockGlobalQuotes class", ignore_extras), fieldGeneratorPercentChangeFromPreviousClose("field \"PercentChangeFromPreviousClose\" of the StockGlobalQuotes class", ignore_extras), fieldGeneratorHigh52Weeks("field \"High52Weeks\" of the StockGlobalQuotes class", ignore_extras), fieldGeneratorLow52Weeks("field \"Low52Weeks\" of the StockGlobalQuotes class", ignore_extras), fieldGeneratorCurrency("field \"Currency\" of the StockGlobalQuotes class", ignore_extras), fieldGeneratorTradingHalted("field \"TradingHalted\" of the StockGlobalQuotes class", ignore_extras), fieldGeneratorSecurity("field \"Security\" of the StockGlobalQuotes class", ignore_extras), unknownFieldGenerator(ignore_extras)
          {
            set_what("the StockGlobalQuotes class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorOutcome.reset();
            fieldGeneratorMessage.reset();
            fieldGeneratorDelay.reset();
            fieldGeneratorDate.reset();
            fieldGeneratorTime.reset();
            fieldGeneratorUTCOffset.reset();
            fieldGeneratorOpen.reset();
            fieldGeneratorClose.reset();
            fieldGeneratorHigh.reset();
            fieldGeneratorLow.reset();
            fieldGeneratorLast.reset();
            fieldGeneratorLastSize.reset();
            fieldGeneratorVolume.reset();
            fieldGeneratorPreviousClose.reset();
            fieldGeneratorPreviousCloseDate.reset();
            fieldGeneratorChangeFromPreviousClose.reset();
            fieldGeneratorPercentChangeFromPreviousClose.reset();
            fieldGeneratorHigh52Weeks.reset();
            fieldGeneratorLow52Weeks.reset();
            fieldGeneratorCurrency.reset();
            fieldGeneratorTradingHalted.reset();
            fieldGeneratorSecurity.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* STOCKGLOBALQUOTESJSON_H */
