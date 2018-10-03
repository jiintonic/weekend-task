/* file "TipCalculatorInputDataJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef TIPCALCULATORINPUTDATAJSON_H
#define TIPCALCULATORINPUTDATAJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONStringGenerator.h"
#include "JSONNumberTextGenerator.h"
#include "JSONDoubleGenerator.h"
#include "JSONIntegerLowerBoundOnlyGenerator.h"
#include "JSONBooleanGenerator.h"
#include <string>
#include "OInteger.h"
#include "MoneyJSON.h"
#include "MoneyJSON.h"
#include "MoneyJSON.h"
#include "MoneyJSON.h"
#include "MoneyJSON.h"
#include "MoneyJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class TipCalculatorInputDataJSON : public ReferenceCounted
  {
  private:
    bool flagHasNextRequest;
    std::string storeNextRequest;
    bool flagHasLastRequest;
    std::string storeLastRequest;
    bool flagHasBillAmount;
    MoneyJSON * storeBillAmount;
    bool flagHasBillAmountIsNew;
    bool storeBillAmountIsNew;
    bool flagHasTaxPercentage;
    double storeTaxPercentage;
    std::string textStoreTaxPercentage;
    bool flagHasTaxPercentageIsNew;
    bool storeTaxPercentageIsNew;
    bool flagHasTaxAmount;
    MoneyJSON * storeTaxAmount;
    bool flagHasTaxAmountIsNew;
    bool storeTaxAmountIsNew;
    bool flagHasTipPercentage;
    double storeTipPercentage;
    std::string textStoreTipPercentage;
    bool flagHasTipPercentageIsNew;
    bool storeTipPercentageIsNew;
    bool flagHasTipAmount;
    MoneyJSON * storeTipAmount;
    bool flagHasTipAmountIsNew;
    bool storeTipAmountIsNew;
    bool flagHasRoundingAmount;
    MoneyJSON * storeRoundingAmount;
    bool flagHasRoundingAmountIsNew;
    bool storeRoundingAmountIsNew;
    bool flagHasPartySize;
    OInteger storePartySize;
    bool flagHasPartySizeIsNew;
    bool storePartySizeIsNew;
    bool flagHasTotalAmount;
    MoneyJSON * storeTotalAmount;
    bool flagHasTotalAmountIsNew;
    bool storeTotalAmountIsNew;
    bool flagHasAmbiguousAmount;
    MoneyJSON * storeAmbiguousAmount;
    bool flagHasAmbiguousAmountIsNew;
    bool storeAmbiguousAmountIsNew;
    bool flagHasCalculationType;
    std::string storeCalculationType;
    bool flagHasCalculationTypeIsNew;
    bool storeCalculationTypeIsNew;
    bool flagHasMethodType;
    std::string storeMethodType;
    bool flagHasMethodTypeIsNew;
    bool storeMethodTypeIsNew;
    bool flagHasDoNotKnow;
    bool storeDoNotKnow;
    bool flagHasWantToKnow;
    bool storeWantToKnow;
    bool flagHasTipCalculatorStart;
    bool storeTipCalculatorStart;
    bool flagHasUserConfused;
    bool storeUserConfused;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    TipCalculatorInputDataJSON(const TipCalculatorInputDataJSON &);
    TipCalculatorInputDataJSON & operator=(const TipCalculatorInputDataJSON &other);

    void  fromJSONNextRequest(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONLastRequest(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONBillAmount(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONBillAmountIsNew(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONTaxPercentage(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONTaxPercentageIsNew(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONTaxAmount(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONTaxAmountIsNew(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONTipPercentage(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONTipPercentageIsNew(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONTipAmount(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONTipAmountIsNew(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONRoundingAmount(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONRoundingAmountIsNew(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONPartySize(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONPartySizeIsNew(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONTotalAmount(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONTotalAmountIsNew(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONAmbiguousAmount(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONAmbiguousAmountIsNew(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONCalculationType(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONCalculationTypeIsNew(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONMethodType(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONMethodTypeIsNew(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONDoNotKnow(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONWantToKnow(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONTipCalculatorStart(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONUserConfused(JSONValue *json_value, bool ignore_extras = false);


  public:
    TipCalculatorInputDataJSON(void);
    virtual ~TipCalculatorInputDataJSON(void);
    bool  hasNextRequest(void) const;
    std::string  getNextRequest(void);
    const std::string  getNextRequest(void) const;
    bool  hasLastRequest(void) const;
    std::string  getLastRequest(void);
    const std::string  getLastRequest(void) const;
    bool  hasBillAmount(void) const;
    MoneyJSON *  getBillAmount(void);
    const MoneyJSON *  getBillAmount(void) const;
    bool  hasBillAmountIsNew(void) const;
    bool  getBillAmountIsNew(void);
    const bool  getBillAmountIsNew(void) const;
    bool  hasTaxPercentage(void) const;
    double  getTaxPercentage(void);
    const double  getTaxPercentage(void) const;
    std::string  getTaxPercentageAsText(void) const;
    bool  hasTaxPercentageIsNew(void) const;
    bool  getTaxPercentageIsNew(void);
    const bool  getTaxPercentageIsNew(void) const;
    bool  hasTaxAmount(void) const;
    MoneyJSON *  getTaxAmount(void);
    const MoneyJSON *  getTaxAmount(void) const;
    bool  hasTaxAmountIsNew(void) const;
    bool  getTaxAmountIsNew(void);
    const bool  getTaxAmountIsNew(void) const;
    bool  hasTipPercentage(void) const;
    double  getTipPercentage(void);
    const double  getTipPercentage(void) const;
    std::string  getTipPercentageAsText(void) const;
    bool  hasTipPercentageIsNew(void) const;
    bool  getTipPercentageIsNew(void);
    const bool  getTipPercentageIsNew(void) const;
    bool  hasTipAmount(void) const;
    MoneyJSON *  getTipAmount(void);
    const MoneyJSON *  getTipAmount(void) const;
    bool  hasTipAmountIsNew(void) const;
    bool  getTipAmountIsNew(void);
    const bool  getTipAmountIsNew(void) const;
    bool  hasRoundingAmount(void) const;
    MoneyJSON *  getRoundingAmount(void);
    const MoneyJSON *  getRoundingAmount(void) const;
    bool  hasRoundingAmountIsNew(void) const;
    bool  getRoundingAmountIsNew(void);
    const bool  getRoundingAmountIsNew(void) const;
    bool  hasPartySize(void) const;
    OInteger  getPartySize(void);
    const OInteger  getPartySize(void) const;
    bool  hasPartySizeIsNew(void) const;
    bool  getPartySizeIsNew(void);
    const bool  getPartySizeIsNew(void) const;
    bool  hasTotalAmount(void) const;
    MoneyJSON *  getTotalAmount(void);
    const MoneyJSON *  getTotalAmount(void) const;
    bool  hasTotalAmountIsNew(void) const;
    bool  getTotalAmountIsNew(void);
    const bool  getTotalAmountIsNew(void) const;
    bool  hasAmbiguousAmount(void) const;
    MoneyJSON *  getAmbiguousAmount(void);
    const MoneyJSON *  getAmbiguousAmount(void) const;
    bool  hasAmbiguousAmountIsNew(void) const;
    bool  getAmbiguousAmountIsNew(void);
    const bool  getAmbiguousAmountIsNew(void) const;
    bool  hasCalculationType(void) const;
    std::string  getCalculationType(void);
    const std::string  getCalculationType(void) const;
    bool  hasCalculationTypeIsNew(void) const;
    bool  getCalculationTypeIsNew(void);
    const bool  getCalculationTypeIsNew(void) const;
    bool  hasMethodType(void) const;
    std::string  getMethodType(void);
    const std::string  getMethodType(void) const;
    bool  hasMethodTypeIsNew(void) const;
    bool  getMethodTypeIsNew(void);
    const bool  getMethodTypeIsNew(void) const;
    bool  hasDoNotKnow(void) const;
    bool  getDoNotKnow(void);
    const bool  getDoNotKnow(void) const;
    bool  hasWantToKnow(void) const;
    bool  getWantToKnow(void);
    const bool  getWantToKnow(void) const;
    bool  hasTipCalculatorStart(void) const;
    bool  getTipCalculatorStart(void);
    const bool  getTipCalculatorStart(void) const;
    bool  hasUserConfused(void) const;
    bool  getUserConfused(void);
    const bool  getUserConfused(void) const;

    virtual size_t extraTipCalculatorInputDataComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraTipCalculatorInputDataComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraTipCalculatorInputDataComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraTipCalculatorInputDataComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraTipCalculatorInputDataLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraTipCalculatorInputDataLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }

    void setNextRequest(std::string new_value)
      {
        flagHasNextRequest = true;
        storeNextRequest = new_value;
      }
    void unsetNextRequest(void)
      {
        flagHasNextRequest = false;
      }
    void setLastRequest(std::string new_value)
      {
        flagHasLastRequest = true;
        storeLastRequest = new_value;
      }
    void unsetLastRequest(void)
      {
        flagHasLastRequest = false;
      }
    void setBillAmount(MoneyJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasBillAmount)
          {
            storeBillAmount->remove_reference();
          }
        flagHasBillAmount = true;
        storeBillAmount = new_value;
      }
    void unsetBillAmount(void)
      {
        if (flagHasBillAmount)
          {
            storeBillAmount->remove_reference();
          }
        flagHasBillAmount = false;
      }
    void setBillAmountIsNew(bool new_value)
      {
        flagHasBillAmountIsNew = true;
        storeBillAmountIsNew = new_value;
      }
    void unsetBillAmountIsNew(void)
      {
        flagHasBillAmountIsNew = false;
      }
    void setTaxPercentage(double new_value)
      {
        flagHasTaxPercentage = true;
        if (new_value < 0)
            throw("The value for field TaxPercentage of TipCalculatorInputDataJSON is less than the lower bound (0) for that field.");
        storeTaxPercentage = new_value;
        textStoreTaxPercentage = "";
      }
    void setTaxPercentageText(std::string new_value)
      {
        flagHasTaxPercentage = true;
        if (!(JSONWriter::is_valid_number_format(new_value.c_str())))
            throw("The text value for field TaxPercentage of TipCalculatorInputDataJSON is not a valid number.");
        if (JSONWriter::compare_number_text_to_repeating_fraction(new_value.c_str(), false, "", "", false, "") < 0)
            throw("The value for field TaxPercentage of TipCalculatorInputDataJSON is less than the lower bound (0) for that field.");
        textStoreTaxPercentage = new_value;
      }
    void unsetTaxPercentage(void)
      {
        flagHasTaxPercentage = false;
      }
    void setTaxPercentageIsNew(bool new_value)
      {
        flagHasTaxPercentageIsNew = true;
        storeTaxPercentageIsNew = new_value;
      }
    void unsetTaxPercentageIsNew(void)
      {
        flagHasTaxPercentageIsNew = false;
      }
    void setTaxAmount(MoneyJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasTaxAmount)
          {
            storeTaxAmount->remove_reference();
          }
        flagHasTaxAmount = true;
        storeTaxAmount = new_value;
      }
    void unsetTaxAmount(void)
      {
        if (flagHasTaxAmount)
          {
            storeTaxAmount->remove_reference();
          }
        flagHasTaxAmount = false;
      }
    void setTaxAmountIsNew(bool new_value)
      {
        flagHasTaxAmountIsNew = true;
        storeTaxAmountIsNew = new_value;
      }
    void unsetTaxAmountIsNew(void)
      {
        flagHasTaxAmountIsNew = false;
      }
    void setTipPercentage(double new_value)
      {
        flagHasTipPercentage = true;
        if (new_value < 0)
            throw("The value for field TipPercentage of TipCalculatorInputDataJSON is less than the lower bound (0) for that field.");
        storeTipPercentage = new_value;
        textStoreTipPercentage = "";
      }
    void setTipPercentageText(std::string new_value)
      {
        flagHasTipPercentage = true;
        if (!(JSONWriter::is_valid_number_format(new_value.c_str())))
            throw("The text value for field TipPercentage of TipCalculatorInputDataJSON is not a valid number.");
        if (JSONWriter::compare_number_text_to_repeating_fraction(new_value.c_str(), false, "", "", false, "") < 0)
            throw("The value for field TipPercentage of TipCalculatorInputDataJSON is less than the lower bound (0) for that field.");
        textStoreTipPercentage = new_value;
      }
    void unsetTipPercentage(void)
      {
        flagHasTipPercentage = false;
      }
    void setTipPercentageIsNew(bool new_value)
      {
        flagHasTipPercentageIsNew = true;
        storeTipPercentageIsNew = new_value;
      }
    void unsetTipPercentageIsNew(void)
      {
        flagHasTipPercentageIsNew = false;
      }
    void setTipAmount(MoneyJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasTipAmount)
          {
            storeTipAmount->remove_reference();
          }
        flagHasTipAmount = true;
        storeTipAmount = new_value;
      }
    void unsetTipAmount(void)
      {
        if (flagHasTipAmount)
          {
            storeTipAmount->remove_reference();
          }
        flagHasTipAmount = false;
      }
    void setTipAmountIsNew(bool new_value)
      {
        flagHasTipAmountIsNew = true;
        storeTipAmountIsNew = new_value;
      }
    void unsetTipAmountIsNew(void)
      {
        flagHasTipAmountIsNew = false;
      }
    void setRoundingAmount(MoneyJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasRoundingAmount)
          {
            storeRoundingAmount->remove_reference();
          }
        flagHasRoundingAmount = true;
        storeRoundingAmount = new_value;
      }
    void unsetRoundingAmount(void)
      {
        if (flagHasRoundingAmount)
          {
            storeRoundingAmount->remove_reference();
          }
        flagHasRoundingAmount = false;
      }
    void setRoundingAmountIsNew(bool new_value)
      {
        flagHasRoundingAmountIsNew = true;
        storeRoundingAmountIsNew = new_value;
      }
    void unsetRoundingAmountIsNew(void)
      {
        flagHasRoundingAmountIsNew = false;
      }
    void setPartySize(OInteger new_value)
      {
        flagHasPartySize = true;
        if (new_value < 1)
            throw("The value for field PartySize of TipCalculatorInputDataJSON is less than the lower bound (1) for that field.");
        storePartySize = new_value;
      }
    void unsetPartySize(void)
      {
        flagHasPartySize = false;
      }
    void setPartySizeIsNew(bool new_value)
      {
        flagHasPartySizeIsNew = true;
        storePartySizeIsNew = new_value;
      }
    void unsetPartySizeIsNew(void)
      {
        flagHasPartySizeIsNew = false;
      }
    void setTotalAmount(MoneyJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasTotalAmount)
          {
            storeTotalAmount->remove_reference();
          }
        flagHasTotalAmount = true;
        storeTotalAmount = new_value;
      }
    void unsetTotalAmount(void)
      {
        if (flagHasTotalAmount)
          {
            storeTotalAmount->remove_reference();
          }
        flagHasTotalAmount = false;
      }
    void setTotalAmountIsNew(bool new_value)
      {
        flagHasTotalAmountIsNew = true;
        storeTotalAmountIsNew = new_value;
      }
    void unsetTotalAmountIsNew(void)
      {
        flagHasTotalAmountIsNew = false;
      }
    void setAmbiguousAmount(MoneyJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasAmbiguousAmount)
          {
            storeAmbiguousAmount->remove_reference();
          }
        flagHasAmbiguousAmount = true;
        storeAmbiguousAmount = new_value;
      }
    void unsetAmbiguousAmount(void)
      {
        if (flagHasAmbiguousAmount)
          {
            storeAmbiguousAmount->remove_reference();
          }
        flagHasAmbiguousAmount = false;
      }
    void setAmbiguousAmountIsNew(bool new_value)
      {
        flagHasAmbiguousAmountIsNew = true;
        storeAmbiguousAmountIsNew = new_value;
      }
    void unsetAmbiguousAmountIsNew(void)
      {
        flagHasAmbiguousAmountIsNew = false;
      }
    void setCalculationType(std::string new_value)
      {
        flagHasCalculationType = true;
        storeCalculationType = new_value;
      }
    void unsetCalculationType(void)
      {
        flagHasCalculationType = false;
      }
    void setCalculationTypeIsNew(bool new_value)
      {
        flagHasCalculationTypeIsNew = true;
        storeCalculationTypeIsNew = new_value;
      }
    void unsetCalculationTypeIsNew(void)
      {
        flagHasCalculationTypeIsNew = false;
      }
    void setMethodType(std::string new_value)
      {
        flagHasMethodType = true;
        storeMethodType = new_value;
      }
    void unsetMethodType(void)
      {
        flagHasMethodType = false;
      }
    void setMethodTypeIsNew(bool new_value)
      {
        flagHasMethodTypeIsNew = true;
        storeMethodTypeIsNew = new_value;
      }
    void unsetMethodTypeIsNew(void)
      {
        flagHasMethodTypeIsNew = false;
      }
    void setDoNotKnow(bool new_value)
      {
        flagHasDoNotKnow = true;
        storeDoNotKnow = new_value;
      }
    void unsetDoNotKnow(void)
      {
        flagHasDoNotKnow = false;
      }
    void setWantToKnow(bool new_value)
      {
        flagHasWantToKnow = true;
        storeWantToKnow = new_value;
      }
    void unsetWantToKnow(void)
      {
        flagHasWantToKnow = false;
      }
    void setTipCalculatorStart(bool new_value)
      {
        flagHasTipCalculatorStart = true;
        storeTipCalculatorStart = new_value;
      }
    void unsetTipCalculatorStart(void)
      {
        flagHasTipCalculatorStart = false;
      }
    void setUserConfused(bool new_value)
      {
        flagHasUserConfused = true;
        storeUserConfused = new_value;
      }
    void unsetUserConfused(void)
      {
        flagHasUserConfused = false;
      }

    virtual void extraTipCalculatorInputDataAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraTipCalculatorInputDataSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraTipCalculatorInputDataLookup(key);
        if (old_field == NULL)
          {
            extraTipCalculatorInputDataAppendPair(key, new_component);
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

    virtual void write_as_json(JSONHandler *handler) const
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
        assert(flagHasNextRequest);
        handler->start_pair("NextRequest");
        handler->string_value(storeNextRequest);
        if (flagHasLastRequest)
          {
            handler->start_pair("LastRequest");
            handler->string_value(storeLastRequest);
          }
        if (flagHasBillAmount)
          {
            handler->start_pair("BillAmount");
            storeBillAmount->write_as_json(handler);
          }
        if (flagHasBillAmountIsNew)
          {
            handler->start_pair("BillAmountIsNew");
            handler->boolean_value(storeBillAmountIsNew);
          }
        if (flagHasTaxPercentage)
          {
            handler->start_pair("TaxPercentage");
            if (textStoreTaxPercentage != "")
                handler->number_value(textStoreTaxPercentage.c_str());
            else if (((double)(long int)storeTaxPercentage) == storeTaxPercentage)
                handler->number_value((long int)storeTaxPercentage);
            else
                handler->number_value(storeTaxPercentage);
          }
        if (flagHasTaxPercentageIsNew)
          {
            handler->start_pair("TaxPercentageIsNew");
            handler->boolean_value(storeTaxPercentageIsNew);
          }
        if (flagHasTaxAmount)
          {
            handler->start_pair("TaxAmount");
            storeTaxAmount->write_as_json(handler);
          }
        if (flagHasTaxAmountIsNew)
          {
            handler->start_pair("TaxAmountIsNew");
            handler->boolean_value(storeTaxAmountIsNew);
          }
        if (flagHasTipPercentage)
          {
            handler->start_pair("TipPercentage");
            if (textStoreTipPercentage != "")
                handler->number_value(textStoreTipPercentage.c_str());
            else if (((double)(long int)storeTipPercentage) == storeTipPercentage)
                handler->number_value((long int)storeTipPercentage);
            else
                handler->number_value(storeTipPercentage);
          }
        if (flagHasTipPercentageIsNew)
          {
            handler->start_pair("TipPercentageIsNew");
            handler->boolean_value(storeTipPercentageIsNew);
          }
        if (flagHasTipAmount)
          {
            handler->start_pair("TipAmount");
            storeTipAmount->write_as_json(handler);
          }
        if (flagHasTipAmountIsNew)
          {
            handler->start_pair("TipAmountIsNew");
            handler->boolean_value(storeTipAmountIsNew);
          }
        if (flagHasRoundingAmount)
          {
            handler->start_pair("RoundingAmount");
            storeRoundingAmount->write_as_json(handler);
          }
        if (flagHasRoundingAmountIsNew)
          {
            handler->start_pair("RoundingAmountIsNew");
            handler->boolean_value(storeRoundingAmountIsNew);
          }
        if (flagHasPartySize)
          {
            handler->start_pair("PartySize");
            handler->number_value(storePartySize.get_o_integer());
          }
        if (flagHasPartySizeIsNew)
          {
            handler->start_pair("PartySizeIsNew");
            handler->boolean_value(storePartySizeIsNew);
          }
        if (flagHasTotalAmount)
          {
            handler->start_pair("TotalAmount");
            storeTotalAmount->write_as_json(handler);
          }
        if (flagHasTotalAmountIsNew)
          {
            handler->start_pair("TotalAmountIsNew");
            handler->boolean_value(storeTotalAmountIsNew);
          }
        if (flagHasAmbiguousAmount)
          {
            handler->start_pair("AmbiguousAmount");
            storeAmbiguousAmount->write_as_json(handler);
          }
        if (flagHasAmbiguousAmountIsNew)
          {
            handler->start_pair("AmbiguousAmountIsNew");
            handler->boolean_value(storeAmbiguousAmountIsNew);
          }
        assert(flagHasCalculationType);
        handler->start_pair("CalculationType");
        handler->string_value(storeCalculationType);
        if (flagHasCalculationTypeIsNew)
          {
            handler->start_pair("CalculationTypeIsNew");
            handler->boolean_value(storeCalculationTypeIsNew);
          }
        assert(flagHasMethodType);
        handler->start_pair("MethodType");
        handler->string_value(storeMethodType);
        if (flagHasMethodTypeIsNew)
          {
            handler->start_pair("MethodTypeIsNew");
            handler->boolean_value(storeMethodTypeIsNew);
          }
        if (flagHasDoNotKnow)
          {
            handler->start_pair("DoNotKnow");
            handler->boolean_value(storeDoNotKnow);
          }
        if (flagHasWantToKnow)
          {
            handler->start_pair("WantToKnow");
            handler->boolean_value(storeWantToKnow);
          }
        if (flagHasTipCalculatorStart)
          {
            handler->start_pair("TipCalculatorStart");
            handler->boolean_value(storeTipCalculatorStart);
          }
        if (flagHasUserConfused)
          {
            handler->start_pair("UserConfused");
            handler->boolean_value(storeUserConfused);
          }
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasNextRequest()))
          {
            return "When parsing the object for %what%, the \"NextRequest\" field was missing.";
          }
        if (!(hasCalculationType()))
          {
            return "When parsing the object for %what%, the \"CalculationType\" field was missing.";
          }
        if (!(hasMethodType()))
          {
            return "When parsing the object for %what%, the \"MethodType\" field was missing.";
          }
        return NULL;
      }

    static TipCalculatorInputDataJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static TipCalculatorInputDataJSON *from_text(const char *text, bool ignore_extras = false)
      {
        TipCalculatorInputDataJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<TipCalculatorInputDataJSON>, TipCalculatorInputDataJSON *, bool> generator("Type TipCalculatorInputData", ignore_extras);
            parse_json_value(text, "Text for TipCalculatorInputDataJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static TipCalculatorInputDataJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        TipCalculatorInputDataJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<TipCalculatorInputDataJSON>, TipCalculatorInputDataJSON *, bool> generator("Type TipCalculatorInputData", ignore_extras);
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
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorNextRequest;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorLastRequest;
        JSONHoldingGenerator<MoneyJSON::Generator, RCHandle<MoneyJSON>, MoneyJSON *, bool > fieldGeneratorBillAmount;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorBillAmountIsNew;
        JSONHoldingGenerator<JSONNumberTextGenerator, std::string, const char * > fieldGeneratorTaxPercentage;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorTaxPercentageIsNew;
        JSONHoldingGenerator<MoneyJSON::Generator, RCHandle<MoneyJSON>, MoneyJSON *, bool > fieldGeneratorTaxAmount;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorTaxAmountIsNew;
        JSONHoldingGenerator<JSONNumberTextGenerator, std::string, const char * > fieldGeneratorTipPercentage;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorTipPercentageIsNew;
        JSONHoldingGenerator<MoneyJSON::Generator, RCHandle<MoneyJSON>, MoneyJSON *, bool > fieldGeneratorTipAmount;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorTipAmountIsNew;
        JSONHoldingGenerator<MoneyJSON::Generator, RCHandle<MoneyJSON>, MoneyJSON *, bool > fieldGeneratorRoundingAmount;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorRoundingAmountIsNew;
        static char lowerBoundPartySize[];
        JSONHoldingGenerator<JSONIntegerLowerBoundOnlyGenerator<lowerBoundPartySize>, OInteger, o_integer > fieldGeneratorPartySize;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorPartySizeIsNew;
        JSONHoldingGenerator<MoneyJSON::Generator, RCHandle<MoneyJSON>, MoneyJSON *, bool > fieldGeneratorTotalAmount;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorTotalAmountIsNew;
        JSONHoldingGenerator<MoneyJSON::Generator, RCHandle<MoneyJSON>, MoneyJSON *, bool > fieldGeneratorAmbiguousAmount;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorAmbiguousAmountIsNew;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorCalculationType;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorCalculationTypeIsNew;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorMethodType;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorMethodTypeIsNew;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorDoNotKnow;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorWantToKnow;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorTipCalculatorStart;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorUserConfused;
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
            TipCalculatorInputDataJSON *result = new TipCalculatorInputDataJSON();
            assert(result != NULL);
            RCHandle<TipCalculatorInputDataJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraTipCalculatorInputDataAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void finish(TipCalculatorInputDataJSON *result)
          {
            if (fieldGeneratorNextRequest.have_value)
              {
                result->setNextRequest(fieldGeneratorNextRequest.value);
                fieldGeneratorNextRequest.have_value = false;
              }
            else if (!(result->hasNextRequest()))
              {
                error("When parsing the object for %what%, the \"NextRequest\" field was missing.");
              }
            if (fieldGeneratorLastRequest.have_value)
              {
                result->setLastRequest(fieldGeneratorLastRequest.value);
                fieldGeneratorLastRequest.have_value = false;
              }
            if (fieldGeneratorBillAmount.have_value)
              {
                result->setBillAmount(fieldGeneratorBillAmount.value.referenced());
                fieldGeneratorBillAmount.have_value = false;
              }
            if (fieldGeneratorBillAmountIsNew.have_value)
              {
                result->setBillAmountIsNew(fieldGeneratorBillAmountIsNew.value);
                fieldGeneratorBillAmountIsNew.have_value = false;
              }
            if (fieldGeneratorTaxPercentage.have_value)
              {
                result->setTaxPercentageText(fieldGeneratorTaxPercentage.value);
                fieldGeneratorTaxPercentage.have_value = false;
              }
            if (fieldGeneratorTaxPercentageIsNew.have_value)
              {
                result->setTaxPercentageIsNew(fieldGeneratorTaxPercentageIsNew.value);
                fieldGeneratorTaxPercentageIsNew.have_value = false;
              }
            if (fieldGeneratorTaxAmount.have_value)
              {
                result->setTaxAmount(fieldGeneratorTaxAmount.value.referenced());
                fieldGeneratorTaxAmount.have_value = false;
              }
            if (fieldGeneratorTaxAmountIsNew.have_value)
              {
                result->setTaxAmountIsNew(fieldGeneratorTaxAmountIsNew.value);
                fieldGeneratorTaxAmountIsNew.have_value = false;
              }
            if (fieldGeneratorTipPercentage.have_value)
              {
                result->setTipPercentageText(fieldGeneratorTipPercentage.value);
                fieldGeneratorTipPercentage.have_value = false;
              }
            if (fieldGeneratorTipPercentageIsNew.have_value)
              {
                result->setTipPercentageIsNew(fieldGeneratorTipPercentageIsNew.value);
                fieldGeneratorTipPercentageIsNew.have_value = false;
              }
            if (fieldGeneratorTipAmount.have_value)
              {
                result->setTipAmount(fieldGeneratorTipAmount.value.referenced());
                fieldGeneratorTipAmount.have_value = false;
              }
            if (fieldGeneratorTipAmountIsNew.have_value)
              {
                result->setTipAmountIsNew(fieldGeneratorTipAmountIsNew.value);
                fieldGeneratorTipAmountIsNew.have_value = false;
              }
            if (fieldGeneratorRoundingAmount.have_value)
              {
                result->setRoundingAmount(fieldGeneratorRoundingAmount.value.referenced());
                fieldGeneratorRoundingAmount.have_value = false;
              }
            if (fieldGeneratorRoundingAmountIsNew.have_value)
              {
                result->setRoundingAmountIsNew(fieldGeneratorRoundingAmountIsNew.value);
                fieldGeneratorRoundingAmountIsNew.have_value = false;
              }
            if (fieldGeneratorPartySize.have_value)
              {
                result->setPartySize(fieldGeneratorPartySize.value);
                fieldGeneratorPartySize.have_value = false;
              }
            if (fieldGeneratorPartySizeIsNew.have_value)
              {
                result->setPartySizeIsNew(fieldGeneratorPartySizeIsNew.value);
                fieldGeneratorPartySizeIsNew.have_value = false;
              }
            if (fieldGeneratorTotalAmount.have_value)
              {
                result->setTotalAmount(fieldGeneratorTotalAmount.value.referenced());
                fieldGeneratorTotalAmount.have_value = false;
              }
            if (fieldGeneratorTotalAmountIsNew.have_value)
              {
                result->setTotalAmountIsNew(fieldGeneratorTotalAmountIsNew.value);
                fieldGeneratorTotalAmountIsNew.have_value = false;
              }
            if (fieldGeneratorAmbiguousAmount.have_value)
              {
                result->setAmbiguousAmount(fieldGeneratorAmbiguousAmount.value.referenced());
                fieldGeneratorAmbiguousAmount.have_value = false;
              }
            if (fieldGeneratorAmbiguousAmountIsNew.have_value)
              {
                result->setAmbiguousAmountIsNew(fieldGeneratorAmbiguousAmountIsNew.value);
                fieldGeneratorAmbiguousAmountIsNew.have_value = false;
              }
            if (fieldGeneratorCalculationType.have_value)
              {
                result->setCalculationType(fieldGeneratorCalculationType.value);
                fieldGeneratorCalculationType.have_value = false;
              }
            else if (!(result->hasCalculationType()))
              {
                error("When parsing the object for %what%, the \"CalculationType\" field was missing.");
              }
            if (fieldGeneratorCalculationTypeIsNew.have_value)
              {
                result->setCalculationTypeIsNew(fieldGeneratorCalculationTypeIsNew.value);
                fieldGeneratorCalculationTypeIsNew.have_value = false;
              }
            if (fieldGeneratorMethodType.have_value)
              {
                result->setMethodType(fieldGeneratorMethodType.value);
                fieldGeneratorMethodType.have_value = false;
              }
            else if (!(result->hasMethodType()))
              {
                error("When parsing the object for %what%, the \"MethodType\" field was missing.");
              }
            if (fieldGeneratorMethodTypeIsNew.have_value)
              {
                result->setMethodTypeIsNew(fieldGeneratorMethodTypeIsNew.value);
                fieldGeneratorMethodTypeIsNew.have_value = false;
              }
            if (fieldGeneratorDoNotKnow.have_value)
              {
                result->setDoNotKnow(fieldGeneratorDoNotKnow.value);
                fieldGeneratorDoNotKnow.have_value = false;
              }
            if (fieldGeneratorWantToKnow.have_value)
              {
                result->setWantToKnow(fieldGeneratorWantToKnow.value);
                fieldGeneratorWantToKnow.have_value = false;
              }
            if (fieldGeneratorTipCalculatorStart.have_value)
              {
                result->setTipCalculatorStart(fieldGeneratorTipCalculatorStart.value);
                fieldGeneratorTipCalculatorStart.have_value = false;
              }
            if (fieldGeneratorUserConfused.have_value)
              {
                result->setUserConfused(fieldGeneratorUserConfused.value);
                fieldGeneratorUserConfused.have_value = false;
              }
          }
        virtual void handle_result(TipCalculatorInputDataJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'A':
                    if (strncmp(&(field_name[1]), "mbiguousAmount", 14) == 0)
                      {
                        switch ((unsigned char)(field_name[15]))
                          {
                            case 0:
                                return &fieldGeneratorAmbiguousAmount;
                            case 'I':
                                if (strcmp(&(field_name[16]), "sNew") == 0)
                                    return &fieldGeneratorAmbiguousAmountIsNew;
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 'B':
                    if (strncmp(&(field_name[1]), "illAmount", 9) == 0)
                      {
                        switch ((unsigned char)(field_name[10]))
                          {
                            case 0:
                                return &fieldGeneratorBillAmount;
                            case 'I':
                                if (strcmp(&(field_name[11]), "sNew") == 0)
                                    return &fieldGeneratorBillAmountIsNew;
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 'C':
                    if (strncmp(&(field_name[1]), "alculationType", 14) == 0)
                      {
                        switch ((unsigned char)(field_name[15]))
                          {
                            case 0:
                                return &fieldGeneratorCalculationType;
                            case 'I':
                                if (strcmp(&(field_name[16]), "sNew") == 0)
                                    return &fieldGeneratorCalculationTypeIsNew;
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 'D':
                    if (strcmp(&(field_name[1]), "oNotKnow") == 0)
                        return &fieldGeneratorDoNotKnow;
                    break;
                case 'L':
                    if (strcmp(&(field_name[1]), "astRequest") == 0)
                        return &fieldGeneratorLastRequest;
                    break;
                case 'M':
                    if (strncmp(&(field_name[1]), "ethodType", 9) == 0)
                      {
                        switch ((unsigned char)(field_name[10]))
                          {
                            case 0:
                                return &fieldGeneratorMethodType;
                            case 'I':
                                if (strcmp(&(field_name[11]), "sNew") == 0)
                                    return &fieldGeneratorMethodTypeIsNew;
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 'N':
                    if (strcmp(&(field_name[1]), "extRequest") == 0)
                        return &fieldGeneratorNextRequest;
                    break;
                case 'P':
                    if (strncmp(&(field_name[1]), "artySize", 8) == 0)
                      {
                        switch ((unsigned char)(field_name[9]))
                          {
                            case 0:
                                return &fieldGeneratorPartySize;
                            case 'I':
                                if (strcmp(&(field_name[10]), "sNew") == 0)
                                    return &fieldGeneratorPartySizeIsNew;
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 'R':
                    if (strncmp(&(field_name[1]), "oundingAmount", 13) == 0)
                      {
                        switch ((unsigned char)(field_name[14]))
                          {
                            case 0:
                                return &fieldGeneratorRoundingAmount;
                            case 'I':
                                if (strcmp(&(field_name[15]), "sNew") == 0)
                                    return &fieldGeneratorRoundingAmountIsNew;
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 'T':
                    switch ((unsigned char)(field_name[1]))
                      {
                        case 'a':
                            if (strncmp(&(field_name[2]), "x", 1) == 0)
                              {
                                switch ((unsigned char)(field_name[3]))
                                  {
                                    case 'A':
                                        if (strncmp(&(field_name[4]), "mount", 5) == 0)
                                          {
                                            switch ((unsigned char)(field_name[9]))
                                              {
                                                case 0:
                                                    return &fieldGeneratorTaxAmount;
                                                case 'I':
                                                    if (strcmp(&(field_name[10]), "sNew") == 0)
                                                        return &fieldGeneratorTaxAmountIsNew;
                                                    break;
                                                default:
                                                    break;
                                              }
                                          }
                                        break;
                                    case 'P':
                                        if (strncmp(&(field_name[4]), "ercentage", 9) == 0)
                                          {
                                            switch ((unsigned char)(field_name[13]))
                                              {
                                                case 0:
                                                    return &fieldGeneratorTaxPercentage;
                                                case 'I':
                                                    if (strcmp(&(field_name[14]), "sNew") == 0)
                                                        return &fieldGeneratorTaxPercentageIsNew;
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
                        case 'i':
                            if (strncmp(&(field_name[2]), "p", 1) == 0)
                              {
                                switch ((unsigned char)(field_name[3]))
                                  {
                                    case 'A':
                                        if (strncmp(&(field_name[4]), "mount", 5) == 0)
                                          {
                                            switch ((unsigned char)(field_name[9]))
                                              {
                                                case 0:
                                                    return &fieldGeneratorTipAmount;
                                                case 'I':
                                                    if (strcmp(&(field_name[10]), "sNew") == 0)
                                                        return &fieldGeneratorTipAmountIsNew;
                                                    break;
                                                default:
                                                    break;
                                              }
                                          }
                                        break;
                                    case 'C':
                                        if (strcmp(&(field_name[4]), "alculatorStart") == 0)
                                            return &fieldGeneratorTipCalculatorStart;
                                        break;
                                    case 'P':
                                        if (strncmp(&(field_name[4]), "ercentage", 9) == 0)
                                          {
                                            switch ((unsigned char)(field_name[13]))
                                              {
                                                case 0:
                                                    return &fieldGeneratorTipPercentage;
                                                case 'I':
                                                    if (strcmp(&(field_name[14]), "sNew") == 0)
                                                        return &fieldGeneratorTipPercentageIsNew;
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
                        case 'o':
                            if (strncmp(&(field_name[2]), "talAmount", 9) == 0)
                              {
                                switch ((unsigned char)(field_name[11]))
                                  {
                                    case 0:
                                        return &fieldGeneratorTotalAmount;
                                    case 'I':
                                        if (strcmp(&(field_name[12]), "sNew") == 0)
                                            return &fieldGeneratorTotalAmountIsNew;
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
                case 'U':
                    if (strcmp(&(field_name[1]), "serConfused") == 0)
                        return &fieldGeneratorUserConfused;
                    break;
                case 'W':
                    if (strcmp(&(field_name[1]), "antToKnow") == 0)
                        return &fieldGeneratorWantToKnow;
                    break;
                default:
                    break;
              }
            return NULL;
          }

      public:
        Generator(bool ignore_extras = false) : fieldGeneratorNextRequest("field \"NextRequest\" of the TipCalculatorInputData class"), fieldGeneratorLastRequest("field \"LastRequest\" of the TipCalculatorInputData class"), fieldGeneratorBillAmount("field \"BillAmount\" of the TipCalculatorInputData class", ignore_extras), fieldGeneratorBillAmountIsNew("field \"BillAmountIsNew\" of the TipCalculatorInputData class"), fieldGeneratorTaxPercentage("field \"TaxPercentage\" of the TipCalculatorInputData class"), fieldGeneratorTaxPercentageIsNew("field \"TaxPercentageIsNew\" of the TipCalculatorInputData class"), fieldGeneratorTaxAmount("field \"TaxAmount\" of the TipCalculatorInputData class", ignore_extras), fieldGeneratorTaxAmountIsNew("field \"TaxAmountIsNew\" of the TipCalculatorInputData class"), fieldGeneratorTipPercentage("field \"TipPercentage\" of the TipCalculatorInputData class"), fieldGeneratorTipPercentageIsNew("field \"TipPercentageIsNew\" of the TipCalculatorInputData class"), fieldGeneratorTipAmount("field \"TipAmount\" of the TipCalculatorInputData class", ignore_extras), fieldGeneratorTipAmountIsNew("field \"TipAmountIsNew\" of the TipCalculatorInputData class"), fieldGeneratorRoundingAmount("field \"RoundingAmount\" of the TipCalculatorInputData class", ignore_extras), fieldGeneratorRoundingAmountIsNew("field \"RoundingAmountIsNew\" of the TipCalculatorInputData class"), fieldGeneratorPartySize("field \"PartySize\" of the TipCalculatorInputData class"), fieldGeneratorPartySizeIsNew("field \"PartySizeIsNew\" of the TipCalculatorInputData class"), fieldGeneratorTotalAmount("field \"TotalAmount\" of the TipCalculatorInputData class", ignore_extras), fieldGeneratorTotalAmountIsNew("field \"TotalAmountIsNew\" of the TipCalculatorInputData class"), fieldGeneratorAmbiguousAmount("field \"AmbiguousAmount\" of the TipCalculatorInputData class", ignore_extras), fieldGeneratorAmbiguousAmountIsNew("field \"AmbiguousAmountIsNew\" of the TipCalculatorInputData class"), fieldGeneratorCalculationType("field \"CalculationType\" of the TipCalculatorInputData class"), fieldGeneratorCalculationTypeIsNew("field \"CalculationTypeIsNew\" of the TipCalculatorInputData class"), fieldGeneratorMethodType("field \"MethodType\" of the TipCalculatorInputData class"), fieldGeneratorMethodTypeIsNew("field \"MethodTypeIsNew\" of the TipCalculatorInputData class"), fieldGeneratorDoNotKnow("field \"DoNotKnow\" of the TipCalculatorInputData class"), fieldGeneratorWantToKnow("field \"WantToKnow\" of the TipCalculatorInputData class"), fieldGeneratorTipCalculatorStart("field \"TipCalculatorStart\" of the TipCalculatorInputData class"), fieldGeneratorUserConfused("field \"UserConfused\" of the TipCalculatorInputData class"), unknownFieldGenerator(ignore_extras)
          {
            set_what("the TipCalculatorInputData class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorNextRequest.reset();
            fieldGeneratorLastRequest.reset();
            fieldGeneratorBillAmount.reset();
            fieldGeneratorBillAmountIsNew.reset();
            fieldGeneratorTaxPercentage.reset();
            fieldGeneratorTaxPercentageIsNew.reset();
            fieldGeneratorTaxAmount.reset();
            fieldGeneratorTaxAmountIsNew.reset();
            fieldGeneratorTipPercentage.reset();
            fieldGeneratorTipPercentageIsNew.reset();
            fieldGeneratorTipAmount.reset();
            fieldGeneratorTipAmountIsNew.reset();
            fieldGeneratorRoundingAmount.reset();
            fieldGeneratorRoundingAmountIsNew.reset();
            fieldGeneratorPartySize.reset();
            fieldGeneratorPartySizeIsNew.reset();
            fieldGeneratorTotalAmount.reset();
            fieldGeneratorTotalAmountIsNew.reset();
            fieldGeneratorAmbiguousAmount.reset();
            fieldGeneratorAmbiguousAmountIsNew.reset();
            fieldGeneratorCalculationType.reset();
            fieldGeneratorCalculationTypeIsNew.reset();
            fieldGeneratorMethodType.reset();
            fieldGeneratorMethodTypeIsNew.reset();
            fieldGeneratorDoNotKnow.reset();
            fieldGeneratorWantToKnow.reset();
            fieldGeneratorTipCalculatorStart.reset();
            fieldGeneratorUserConfused.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* TIPCALCULATORINPUTDATAJSON_H */
