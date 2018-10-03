/* file "MortgageCalculatorInputDataJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef MORTGAGECALCULATORINPUTDATAJSON_H
#define MORTGAGECALCULATORINPUTDATAJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONStringGenerator.h"
#include "JSONNumberTextGenerator.h"
#include "JSONDoubleGenerator.h"
#include "JSONIntegerUnboundRangeGenerator.h"
#include "JSONIntegerLowerBoundOnlyGenerator.h"
#include "JSONBooleanGenerator.h"
#include "OInteger.h"
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


class MortgageCalculatorInputDataJSON : public ReferenceCounted
  {
  public:
    enum TypeCalculationTypeKnownValues
      {
        CalculationType_Payment,
        CalculationType_TotalInterest,
        CalculationType_TotalPaid,
        CalculationType_InterestRate,
        CalculationType_DownPayment,
        CalculationType_AmortizationPeriod,
        CalculationType_PrincipalPaid,
        CalculationType_Principal,
        CalculationType_PrincipalOwing,
        CalculationType_HomeValue,
        CalculationType__none
      };
    struct TypeCalculationType
      {
        bool in_known_list;
        std::string string_value;
        TypeCalculationTypeKnownValues list_value;

        TypeCalculationType(void);
        TypeCalculationType(const TypeCalculationType &other);
        TypeCalculationType(TypeCalculationTypeKnownValues other);
        bool  operator==(const TypeCalculationType &other) const;
        bool  operator!=(const TypeCalculationType &other) const;
        bool  operator<(const TypeCalculationType &other) const;
        bool  operator>(const TypeCalculationType &other) const;
        bool  operator>=(const TypeCalculationType &other) const;
        bool  operator<=(const TypeCalculationType &other) const;

      };

    static TypeCalculationTypeKnownValues  stringToCalculationType(const char *chars);
    static const char * stringFromCalculationType(TypeCalculationTypeKnownValues the_enum);
    enum TypeFutureCalculationTypeKnownValues
      {
        FutureCalculationType_TotalInterest,
        FutureCalculationType_TotalPaid,
        FutureCalculationType_PrincipalPaid,
        FutureCalculationType_PrincipalOwing,
        FutureCalculationType__none
      };
    struct TypeFutureCalculationType
      {
        bool in_known_list;
        std::string string_value;
        TypeFutureCalculationTypeKnownValues list_value;

        TypeFutureCalculationType(void);
        TypeFutureCalculationType(const TypeFutureCalculationType &other);
        TypeFutureCalculationType(TypeFutureCalculationTypeKnownValues other);
        bool  operator==(const TypeFutureCalculationType &other) const;
        bool  operator!=(const TypeFutureCalculationType &other) const;
        bool  operator<(const TypeFutureCalculationType &other) const;
        bool  operator>(const TypeFutureCalculationType &other) const;
        bool  operator>=(const TypeFutureCalculationType &other) const;
        bool  operator<=(const TypeFutureCalculationType &other) const;

      };

    static TypeFutureCalculationTypeKnownValues  stringToFutureCalculationType(const char *chars);
    static const char * stringFromFutureCalculationType(TypeFutureCalculationTypeKnownValues the_enum);
    enum TypeRequestTypeKnownValues
      {
        RequestType_Unknown,
        RequestType_AskPrincipal,
        RequestType_AskInterestRate,
        RequestType_AskAmortization,
        RequestType_AskHomeValue,
        RequestType_AskDownPayment,
        RequestType_AskMonthlyPayment,
        RequestType_ShowPayment,
        RequestType_ShowTotalInterest,
        RequestType_ShowTotalPaid,
        RequestType_ShowDownPayment,
        RequestType_ShowInterestRate,
        RequestType_ShowAmortization,
        RequestType_ShowPrincipalPaid,
        RequestType_ShowPrincipal,
        RequestType_ShowPrincipalOwing,
        RequestType_ShowHomeValue,
        RequestType_AskYearRange,
        RequestType_AskYearOwing,
        RequestType_AskPrincipalOrHomeValue,
        RequestType__none
      };
    struct TypeRequestType
      {
        bool in_known_list;
        std::string string_value;
        TypeRequestTypeKnownValues list_value;

        TypeRequestType(void);
        TypeRequestType(const TypeRequestType &other);
        TypeRequestType(TypeRequestTypeKnownValues other);
        bool  operator==(const TypeRequestType &other) const;
        bool  operator!=(const TypeRequestType &other) const;
        bool  operator<(const TypeRequestType &other) const;
        bool  operator>(const TypeRequestType &other) const;
        bool  operator>=(const TypeRequestType &other) const;
        bool  operator<=(const TypeRequestType &other) const;

      };

    static TypeRequestTypeKnownValues  stringToRequestType(const char *chars);
    static const char * stringFromRequestType(TypeRequestTypeKnownValues the_enum);
    enum TypeLastRequestKnownValues
      {
        LastRequest_Unknown,
        LastRequest_AskPrincipal,
        LastRequest_AskInterestRate,
        LastRequest_AskAmortization,
        LastRequest_AskHomeValue,
        LastRequest_AskDownPayment,
        LastRequest_AskMonthlyPayment,
        LastRequest_ShowPayment,
        LastRequest_ShowTotalInterest,
        LastRequest_ShowTotalPaid,
        LastRequest_ShowDownPayment,
        LastRequest_ShowInterestRate,
        LastRequest_ShowAmortization,
        LastRequest_ShowPrincipalPaid,
        LastRequest_ShowPrincipal,
        LastRequest_ShowPrincipalOwing,
        LastRequest_ShowHomeValue,
        LastRequest_AskYearRange,
        LastRequest_AskYearOwing,
        LastRequest_AskPrincipalOrHomeValue,
        LastRequest__none
      };
    struct TypeLastRequest
      {
        bool in_known_list;
        std::string string_value;
        TypeLastRequestKnownValues list_value;

        TypeLastRequest(void);
        TypeLastRequest(const TypeLastRequest &other);
        TypeLastRequest(TypeLastRequestKnownValues other);
        bool  operator==(const TypeLastRequest &other) const;
        bool  operator!=(const TypeLastRequest &other) const;
        bool  operator<(const TypeLastRequest &other) const;
        bool  operator>(const TypeLastRequest &other) const;
        bool  operator>=(const TypeLastRequest &other) const;
        bool  operator<=(const TypeLastRequest &other) const;

      };

    static TypeLastRequestKnownValues  stringToLastRequest(const char *chars);
    static const char * stringFromLastRequest(TypeLastRequestKnownValues the_enum);
    enum TypePaymentFrequencyKnownValues
      {
        PaymentFrequency_monthly,
        PaymentFrequency_biweekly,
        PaymentFrequency_weekly,
        PaymentFrequency__none
      };
    struct TypePaymentFrequency
      {
        bool in_known_list;
        std::string string_value;
        TypePaymentFrequencyKnownValues list_value;

        TypePaymentFrequency(void);
        TypePaymentFrequency(const TypePaymentFrequency &other);
        TypePaymentFrequency(TypePaymentFrequencyKnownValues other);
        bool  operator==(const TypePaymentFrequency &other) const;
        bool  operator!=(const TypePaymentFrequency &other) const;
        bool  operator<(const TypePaymentFrequency &other) const;
        bool  operator>(const TypePaymentFrequency &other) const;
        bool  operator>=(const TypePaymentFrequency &other) const;
        bool  operator<=(const TypePaymentFrequency &other) const;

      };

    static TypePaymentFrequencyKnownValues  stringToPaymentFrequency(const char *chars);
    static const char * stringFromPaymentFrequency(TypePaymentFrequencyKnownValues the_enum);

  private:
    bool flagHasCalculationType;
    TypeCalculationType storeCalculationType;
    bool flagHasCalculationTypeIsNew;
    bool storeCalculationTypeIsNew;
    bool flagHasFutureCalculationType;
    TypeFutureCalculationType storeFutureCalculationType;
    bool flagHasRequestType;
    TypeRequestType storeRequestType;
    bool flagHasLastRequest;
    TypeLastRequest storeLastRequest;
    bool flagHasInterestRate;
    double storeInterestRate;
    std::string textStoreInterestRate;
    bool flagHasInterestRateIsNew;
    bool storeInterestRateIsNew;
    bool flagHasMortgagePrincipal;
    MoneyJSON * storeMortgagePrincipal;
    bool flagHasMortgagePrincipalIsNew;
    bool storeMortgagePrincipalIsNew;
    bool flagHasPrincipalHomeValueAmbiguous;
    bool storePrincipalHomeValueAmbiguous;
    bool flagHasPrincipalHomeValueAmbiguousConfirmed;
    bool storePrincipalHomeValueAmbiguousConfirmed;
    bool flagHasNumMonths;
    OInteger storeNumMonths;
    bool flagHasNumMonthsIsNew;
    bool storeNumMonthsIsNew;
    bool flagHasYearStart;
    OInteger storeYearStart;
    bool flagHasYearEnd;
    OInteger storeYearEnd;
    bool flagHasYearStartEndIsNew;
    bool storeYearStartEndIsNew;
    bool flagHasYearEndOwing;
    OInteger storeYearEndOwing;
    bool flagHasYearEndOwingIsNew;
    bool storeYearEndOwingIsNew;
    bool flagHasDownPaymentPercent;
    double storeDownPaymentPercent;
    std::string textStoreDownPaymentPercent;
    bool flagHasDownPaymentPercentIsNew;
    bool storeDownPaymentPercentIsNew;
    bool flagHasDownPayment;
    MoneyJSON * storeDownPayment;
    bool flagHasDownPaymentIsNew;
    bool storeDownPaymentIsNew;
    bool flagHasHomeValue;
    MoneyJSON * storeHomeValue;
    bool flagHasHomeValueIsNew;
    bool storeHomeValueIsNew;
    bool flagHasMaxPaymentAmount;
    MoneyJSON * storeMaxPaymentAmount;
    bool flagHasMaxPaymentAmountIsNew;
    bool storeMaxPaymentAmountIsNew;
    bool flagHasDoNotKnow;
    bool storeDoNotKnow;
    bool flagHasWantToKnow;
    bool storeWantToKnow;
    bool flagHasMortgageCalculatorStart;
    bool storeMortgageCalculatorStart;
    bool flagHasDefaultCurrency;
    MoneyJSON * storeDefaultCurrency;
    bool flagHasUserConfused;
    bool storeUserConfused;
    bool flagHasPaymentFrequency;
    TypePaymentFrequency storePaymentFrequency;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    MortgageCalculatorInputDataJSON(const MortgageCalculatorInputDataJSON &);
    MortgageCalculatorInputDataJSON & operator=(const MortgageCalculatorInputDataJSON &other);

    void  fromJSONCalculationType(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONCalculationTypeIsNew(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONFutureCalculationType(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONRequestType(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONLastRequest(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONInterestRate(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONInterestRateIsNew(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONMortgagePrincipal(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONMortgagePrincipalIsNew(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONPrincipalHomeValueAmbiguous(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONPrincipalHomeValueAmbiguousConfirmed(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONNumMonths(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONNumMonthsIsNew(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONYearStart(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONYearEnd(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONYearStartEndIsNew(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONYearEndOwing(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONYearEndOwingIsNew(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONDownPaymentPercent(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONDownPaymentPercentIsNew(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONDownPayment(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONDownPaymentIsNew(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONHomeValue(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONHomeValueIsNew(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONMaxPaymentAmount(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONMaxPaymentAmountIsNew(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONDoNotKnow(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONWantToKnow(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONMortgageCalculatorStart(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONDefaultCurrency(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONUserConfused(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONPaymentFrequency(JSONValue *json_value, bool ignore_extras = false);


  public:
    MortgageCalculatorInputDataJSON(void);
    virtual ~MortgageCalculatorInputDataJSON(void);
    bool  hasCalculationType(void) const;
    TypeCalculationType  getCalculationType(void);
    const TypeCalculationType  getCalculationType(void) const;
    const char * getCalculationTypeAsChars(void) const;
    std::string  getCalculationTypeAsString(void) const;
    bool  hasCalculationTypeIsNew(void) const;
    bool  getCalculationTypeIsNew(void);
    const bool  getCalculationTypeIsNew(void) const;
    bool  hasFutureCalculationType(void) const;
    TypeFutureCalculationType  getFutureCalculationType(void);
    const TypeFutureCalculationType  getFutureCalculationType(void) const;
    const char * getFutureCalculationTypeAsChars(void) const;
    std::string  getFutureCalculationTypeAsString(void) const;
    bool  hasRequestType(void) const;
    TypeRequestType  getRequestType(void);
    const TypeRequestType  getRequestType(void) const;
    const char * getRequestTypeAsChars(void) const;
    std::string  getRequestTypeAsString(void) const;
    bool  hasLastRequest(void) const;
    TypeLastRequest  getLastRequest(void);
    const TypeLastRequest  getLastRequest(void) const;
    const char * getLastRequestAsChars(void) const;
    std::string  getLastRequestAsString(void) const;
    bool  hasInterestRate(void) const;
    double  getInterestRate(void);
    const double  getInterestRate(void) const;
    std::string  getInterestRateAsText(void) const;
    bool  hasInterestRateIsNew(void) const;
    bool  getInterestRateIsNew(void);
    const bool  getInterestRateIsNew(void) const;
    bool  hasMortgagePrincipal(void) const;
    MoneyJSON *  getMortgagePrincipal(void);
    const MoneyJSON *  getMortgagePrincipal(void) const;
    bool  hasMortgagePrincipalIsNew(void) const;
    bool  getMortgagePrincipalIsNew(void);
    const bool  getMortgagePrincipalIsNew(void) const;
    bool  hasPrincipalHomeValueAmbiguous(void) const;
    bool  getPrincipalHomeValueAmbiguous(void);
    const bool  getPrincipalHomeValueAmbiguous(void) const;
    bool  hasPrincipalHomeValueAmbiguousConfirmed(void) const;
    bool  getPrincipalHomeValueAmbiguousConfirmed(void);
    const bool  getPrincipalHomeValueAmbiguousConfirmed(void) const;
    bool  hasNumMonths(void) const;
    OInteger  getNumMonths(void);
    const OInteger  getNumMonths(void) const;
    bool  hasNumMonthsIsNew(void) const;
    bool  getNumMonthsIsNew(void);
    const bool  getNumMonthsIsNew(void) const;
    bool  hasYearStart(void) const;
    OInteger  getYearStart(void);
    const OInteger  getYearStart(void) const;
    bool  hasYearEnd(void) const;
    OInteger  getYearEnd(void);
    const OInteger  getYearEnd(void) const;
    bool  hasYearStartEndIsNew(void) const;
    bool  getYearStartEndIsNew(void);
    const bool  getYearStartEndIsNew(void) const;
    bool  hasYearEndOwing(void) const;
    OInteger  getYearEndOwing(void);
    const OInteger  getYearEndOwing(void) const;
    bool  hasYearEndOwingIsNew(void) const;
    bool  getYearEndOwingIsNew(void);
    const bool  getYearEndOwingIsNew(void) const;
    bool  hasDownPaymentPercent(void) const;
    double  getDownPaymentPercent(void);
    const double  getDownPaymentPercent(void) const;
    std::string  getDownPaymentPercentAsText(void) const;
    bool  hasDownPaymentPercentIsNew(void) const;
    bool  getDownPaymentPercentIsNew(void);
    const bool  getDownPaymentPercentIsNew(void) const;
    bool  hasDownPayment(void) const;
    MoneyJSON *  getDownPayment(void);
    const MoneyJSON *  getDownPayment(void) const;
    bool  hasDownPaymentIsNew(void) const;
    bool  getDownPaymentIsNew(void);
    const bool  getDownPaymentIsNew(void) const;
    bool  hasHomeValue(void) const;
    MoneyJSON *  getHomeValue(void);
    const MoneyJSON *  getHomeValue(void) const;
    bool  hasHomeValueIsNew(void) const;
    bool  getHomeValueIsNew(void);
    const bool  getHomeValueIsNew(void) const;
    bool  hasMaxPaymentAmount(void) const;
    MoneyJSON *  getMaxPaymentAmount(void);
    const MoneyJSON *  getMaxPaymentAmount(void) const;
    bool  hasMaxPaymentAmountIsNew(void) const;
    bool  getMaxPaymentAmountIsNew(void);
    const bool  getMaxPaymentAmountIsNew(void) const;
    bool  hasDoNotKnow(void) const;
    bool  getDoNotKnow(void);
    const bool  getDoNotKnow(void) const;
    bool  hasWantToKnow(void) const;
    bool  getWantToKnow(void);
    const bool  getWantToKnow(void) const;
    bool  hasMortgageCalculatorStart(void) const;
    bool  getMortgageCalculatorStart(void);
    const bool  getMortgageCalculatorStart(void) const;
    bool  hasDefaultCurrency(void) const;
    MoneyJSON *  getDefaultCurrency(void);
    const MoneyJSON *  getDefaultCurrency(void) const;
    bool  hasUserConfused(void) const;
    bool  getUserConfused(void);
    const bool  getUserConfused(void) const;
    bool  hasPaymentFrequency(void) const;
    TypePaymentFrequency  getPaymentFrequency(void);
    const TypePaymentFrequency  getPaymentFrequency(void) const;
    const char * getPaymentFrequencyAsChars(void) const;
    std::string  getPaymentFrequencyAsString(void) const;

    virtual size_t extraMortgageCalculatorInputDataComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraMortgageCalculatorInputDataComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraMortgageCalculatorInputDataComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraMortgageCalculatorInputDataComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraMortgageCalculatorInputDataLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraMortgageCalculatorInputDataLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }

    void setCalculationType(TypeCalculationType new_value)
      {
        flagHasCalculationType = true;
        storeCalculationType = new_value;
      }
    void setCalculationType(const char *chars)
      {
        TypeCalculationTypeKnownValues known = stringToCalculationType(chars);
        TypeCalculationType new_value;
        if (known == CalculationType__none)
          {
            new_value.in_known_list = false;
            new_value.string_value = chars;
          }
        else
          {
            new_value.in_known_list = true;
            new_value.list_value = known;
          }
        setCalculationType(new_value);
      }
    void setCalculationType(std::string the_string)
      {
        setCalculationType(the_string.c_str());
      }
    void setCalculationType(TypeCalculationTypeKnownValues new_value)
      {
        TypeCalculationType new_full_value;
        assert(new_value != CalculationType__none);
        new_full_value.in_known_list = true;
        new_full_value.list_value = new_value;
        setCalculationType(new_full_value);
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
    void setFutureCalculationType(TypeFutureCalculationType new_value)
      {
        flagHasFutureCalculationType = true;
        storeFutureCalculationType = new_value;
      }
    void setFutureCalculationType(const char *chars)
      {
        TypeFutureCalculationTypeKnownValues known = stringToFutureCalculationType(chars);
        TypeFutureCalculationType new_value;
        if (known == FutureCalculationType__none)
          {
            new_value.in_known_list = false;
            new_value.string_value = chars;
          }
        else
          {
            new_value.in_known_list = true;
            new_value.list_value = known;
          }
        setFutureCalculationType(new_value);
      }
    void setFutureCalculationType(std::string the_string)
      {
        setFutureCalculationType(the_string.c_str());
      }
    void setFutureCalculationType(TypeFutureCalculationTypeKnownValues new_value)
      {
        TypeFutureCalculationType new_full_value;
        assert(new_value != FutureCalculationType__none);
        new_full_value.in_known_list = true;
        new_full_value.list_value = new_value;
        setFutureCalculationType(new_full_value);
      }
    void unsetFutureCalculationType(void)
      {
        flagHasFutureCalculationType = false;
      }
    void setRequestType(TypeRequestType new_value)
      {
        flagHasRequestType = true;
        storeRequestType = new_value;
      }
    void setRequestType(const char *chars)
      {
        TypeRequestTypeKnownValues known = stringToRequestType(chars);
        TypeRequestType new_value;
        if (known == RequestType__none)
          {
            new_value.in_known_list = false;
            new_value.string_value = chars;
          }
        else
          {
            new_value.in_known_list = true;
            new_value.list_value = known;
          }
        setRequestType(new_value);
      }
    void setRequestType(std::string the_string)
      {
        setRequestType(the_string.c_str());
      }
    void setRequestType(TypeRequestTypeKnownValues new_value)
      {
        TypeRequestType new_full_value;
        assert(new_value != RequestType__none);
        new_full_value.in_known_list = true;
        new_full_value.list_value = new_value;
        setRequestType(new_full_value);
      }
    void unsetRequestType(void)
      {
        flagHasRequestType = false;
      }
    void setLastRequest(TypeLastRequest new_value)
      {
        flagHasLastRequest = true;
        storeLastRequest = new_value;
      }
    void setLastRequest(const char *chars)
      {
        TypeLastRequestKnownValues known = stringToLastRequest(chars);
        TypeLastRequest new_value;
        if (known == LastRequest__none)
          {
            new_value.in_known_list = false;
            new_value.string_value = chars;
          }
        else
          {
            new_value.in_known_list = true;
            new_value.list_value = known;
          }
        setLastRequest(new_value);
      }
    void setLastRequest(std::string the_string)
      {
        setLastRequest(the_string.c_str());
      }
    void setLastRequest(TypeLastRequestKnownValues new_value)
      {
        TypeLastRequest new_full_value;
        assert(new_value != LastRequest__none);
        new_full_value.in_known_list = true;
        new_full_value.list_value = new_value;
        setLastRequest(new_full_value);
      }
    void unsetLastRequest(void)
      {
        flagHasLastRequest = false;
      }
    void setInterestRate(double new_value)
      {
        flagHasInterestRate = true;
        if (new_value < 0)
            throw("The value for field InterestRate of MortgageCalculatorInputDataJSON is less than the lower bound (0) for that field.");
        storeInterestRate = new_value;
        textStoreInterestRate = "";
      }
    void setInterestRateText(std::string new_value)
      {
        flagHasInterestRate = true;
        if (!(JSONWriter::is_valid_number_format(new_value.c_str())))
            throw("The text value for field InterestRate of MortgageCalculatorInputDataJSON is not a valid number.");
        if (JSONWriter::compare_number_text_to_repeating_fraction(new_value.c_str(), false, "", "", false, "") < 0)
            throw("The value for field InterestRate of MortgageCalculatorInputDataJSON is less than the lower bound (0) for that field.");
        textStoreInterestRate = new_value;
      }
    void unsetInterestRate(void)
      {
        flagHasInterestRate = false;
      }
    void setInterestRateIsNew(bool new_value)
      {
        flagHasInterestRateIsNew = true;
        storeInterestRateIsNew = new_value;
      }
    void unsetInterestRateIsNew(void)
      {
        flagHasInterestRateIsNew = false;
      }
    void setMortgagePrincipal(MoneyJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasMortgagePrincipal)
          {
            storeMortgagePrincipal->remove_reference();
          }
        flagHasMortgagePrincipal = true;
        storeMortgagePrincipal = new_value;
      }
    void unsetMortgagePrincipal(void)
      {
        if (flagHasMortgagePrincipal)
          {
            storeMortgagePrincipal->remove_reference();
          }
        flagHasMortgagePrincipal = false;
      }
    void setMortgagePrincipalIsNew(bool new_value)
      {
        flagHasMortgagePrincipalIsNew = true;
        storeMortgagePrincipalIsNew = new_value;
      }
    void unsetMortgagePrincipalIsNew(void)
      {
        flagHasMortgagePrincipalIsNew = false;
      }
    void setPrincipalHomeValueAmbiguous(bool new_value)
      {
        flagHasPrincipalHomeValueAmbiguous = true;
        storePrincipalHomeValueAmbiguous = new_value;
      }
    void unsetPrincipalHomeValueAmbiguous(void)
      {
        flagHasPrincipalHomeValueAmbiguous = false;
      }
    void setPrincipalHomeValueAmbiguousConfirmed(bool new_value)
      {
        flagHasPrincipalHomeValueAmbiguousConfirmed = true;
        storePrincipalHomeValueAmbiguousConfirmed = new_value;
      }
    void unsetPrincipalHomeValueAmbiguousConfirmed(void)
      {
        flagHasPrincipalHomeValueAmbiguousConfirmed = false;
      }
    void setNumMonths(OInteger new_value)
      {
        flagHasNumMonths = true;
        if (new_value < 0)
            throw("The value for field NumMonths of MortgageCalculatorInputDataJSON is less than the lower bound (0) for that field.");
        storeNumMonths = new_value;
      }
    void unsetNumMonths(void)
      {
        flagHasNumMonths = false;
      }
    void setNumMonthsIsNew(bool new_value)
      {
        flagHasNumMonthsIsNew = true;
        storeNumMonthsIsNew = new_value;
      }
    void unsetNumMonthsIsNew(void)
      {
        flagHasNumMonthsIsNew = false;
      }
    void setYearStart(OInteger new_value)
      {
        flagHasYearStart = true;
        if (new_value < 0)
            throw("The value for field YearStart of MortgageCalculatorInputDataJSON is less than the lower bound (0) for that field.");
        storeYearStart = new_value;
      }
    void unsetYearStart(void)
      {
        flagHasYearStart = false;
      }
    void setYearEnd(OInteger new_value)
      {
        flagHasYearEnd = true;
        storeYearEnd = new_value;
      }
    void unsetYearEnd(void)
      {
        flagHasYearEnd = false;
      }
    void setYearStartEndIsNew(bool new_value)
      {
        flagHasYearStartEndIsNew = true;
        storeYearStartEndIsNew = new_value;
      }
    void unsetYearStartEndIsNew(void)
      {
        flagHasYearStartEndIsNew = false;
      }
    void setYearEndOwing(OInteger new_value)
      {
        flagHasYearEndOwing = true;
        if (new_value < 0)
            throw("The value for field YearEndOwing of MortgageCalculatorInputDataJSON is less than the lower bound (0) for that field.");
        storeYearEndOwing = new_value;
      }
    void unsetYearEndOwing(void)
      {
        flagHasYearEndOwing = false;
      }
    void setYearEndOwingIsNew(bool new_value)
      {
        flagHasYearEndOwingIsNew = true;
        storeYearEndOwingIsNew = new_value;
      }
    void unsetYearEndOwingIsNew(void)
      {
        flagHasYearEndOwingIsNew = false;
      }
    void setDownPaymentPercent(double new_value)
      {
        flagHasDownPaymentPercent = true;
        if (new_value < 0)
            throw("The value for field DownPaymentPercent of MortgageCalculatorInputDataJSON is less than the lower bound (0) for that field.");
        storeDownPaymentPercent = new_value;
        textStoreDownPaymentPercent = "";
      }
    void setDownPaymentPercentText(std::string new_value)
      {
        flagHasDownPaymentPercent = true;
        if (!(JSONWriter::is_valid_number_format(new_value.c_str())))
            throw("The text value for field DownPaymentPercent of MortgageCalculatorInputDataJSON is not a valid number.");
        if (JSONWriter::compare_number_text_to_repeating_fraction(new_value.c_str(), false, "", "", false, "") < 0)
            throw("The value for field DownPaymentPercent of MortgageCalculatorInputDataJSON is less than the lower bound (0) for that field.");
        textStoreDownPaymentPercent = new_value;
      }
    void unsetDownPaymentPercent(void)
      {
        flagHasDownPaymentPercent = false;
      }
    void setDownPaymentPercentIsNew(bool new_value)
      {
        flagHasDownPaymentPercentIsNew = true;
        storeDownPaymentPercentIsNew = new_value;
      }
    void unsetDownPaymentPercentIsNew(void)
      {
        flagHasDownPaymentPercentIsNew = false;
      }
    void setDownPayment(MoneyJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasDownPayment)
          {
            storeDownPayment->remove_reference();
          }
        flagHasDownPayment = true;
        storeDownPayment = new_value;
      }
    void unsetDownPayment(void)
      {
        if (flagHasDownPayment)
          {
            storeDownPayment->remove_reference();
          }
        flagHasDownPayment = false;
      }
    void setDownPaymentIsNew(bool new_value)
      {
        flagHasDownPaymentIsNew = true;
        storeDownPaymentIsNew = new_value;
      }
    void unsetDownPaymentIsNew(void)
      {
        flagHasDownPaymentIsNew = false;
      }
    void setHomeValue(MoneyJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasHomeValue)
          {
            storeHomeValue->remove_reference();
          }
        flagHasHomeValue = true;
        storeHomeValue = new_value;
      }
    void unsetHomeValue(void)
      {
        if (flagHasHomeValue)
          {
            storeHomeValue->remove_reference();
          }
        flagHasHomeValue = false;
      }
    void setHomeValueIsNew(bool new_value)
      {
        flagHasHomeValueIsNew = true;
        storeHomeValueIsNew = new_value;
      }
    void unsetHomeValueIsNew(void)
      {
        flagHasHomeValueIsNew = false;
      }
    void setMaxPaymentAmount(MoneyJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasMaxPaymentAmount)
          {
            storeMaxPaymentAmount->remove_reference();
          }
        flagHasMaxPaymentAmount = true;
        storeMaxPaymentAmount = new_value;
      }
    void unsetMaxPaymentAmount(void)
      {
        if (flagHasMaxPaymentAmount)
          {
            storeMaxPaymentAmount->remove_reference();
          }
        flagHasMaxPaymentAmount = false;
      }
    void setMaxPaymentAmountIsNew(bool new_value)
      {
        flagHasMaxPaymentAmountIsNew = true;
        storeMaxPaymentAmountIsNew = new_value;
      }
    void unsetMaxPaymentAmountIsNew(void)
      {
        flagHasMaxPaymentAmountIsNew = false;
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
    void setMortgageCalculatorStart(bool new_value)
      {
        flagHasMortgageCalculatorStart = true;
        storeMortgageCalculatorStart = new_value;
      }
    void unsetMortgageCalculatorStart(void)
      {
        flagHasMortgageCalculatorStart = false;
      }
    void setDefaultCurrency(MoneyJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasDefaultCurrency)
          {
            storeDefaultCurrency->remove_reference();
          }
        flagHasDefaultCurrency = true;
        storeDefaultCurrency = new_value;
      }
    void unsetDefaultCurrency(void)
      {
        if (flagHasDefaultCurrency)
          {
            storeDefaultCurrency->remove_reference();
          }
        flagHasDefaultCurrency = false;
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
    void setPaymentFrequency(TypePaymentFrequency new_value)
      {
        flagHasPaymentFrequency = true;
        storePaymentFrequency = new_value;
      }
    void setPaymentFrequency(const char *chars)
      {
        TypePaymentFrequencyKnownValues known = stringToPaymentFrequency(chars);
        TypePaymentFrequency new_value;
        if (known == PaymentFrequency__none)
          {
            new_value.in_known_list = false;
            new_value.string_value = chars;
          }
        else
          {
            new_value.in_known_list = true;
            new_value.list_value = known;
          }
        setPaymentFrequency(new_value);
      }
    void setPaymentFrequency(std::string the_string)
      {
        setPaymentFrequency(the_string.c_str());
      }
    void setPaymentFrequency(TypePaymentFrequencyKnownValues new_value)
      {
        TypePaymentFrequency new_full_value;
        assert(new_value != PaymentFrequency__none);
        new_full_value.in_known_list = true;
        new_full_value.list_value = new_value;
        setPaymentFrequency(new_full_value);
      }
    void unsetPaymentFrequency(void)
      {
        flagHasPaymentFrequency = false;
      }

    virtual void extraMortgageCalculatorInputDataAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraMortgageCalculatorInputDataSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraMortgageCalculatorInputDataLookup(key);
        if (old_field == NULL)
          {
            extraMortgageCalculatorInputDataAppendPair(key, new_component);
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
        assert(flagHasCalculationType);
        handler->start_pair("CalculationType");
        if (storeCalculationType.in_known_list)
          {
            switch (storeCalculationType.list_value)
              {
                case CalculationType_Payment:
                    handler->string_value("Payment");
                    break;
                case CalculationType_TotalInterest:
                    handler->string_value("TotalInterest");
                    break;
                case CalculationType_TotalPaid:
                    handler->string_value("TotalPaid");
                    break;
                case CalculationType_InterestRate:
                    handler->string_value("InterestRate");
                    break;
                case CalculationType_DownPayment:
                    handler->string_value("DownPayment");
                    break;
                case CalculationType_AmortizationPeriod:
                    handler->string_value("AmortizationPeriod");
                    break;
                case CalculationType_PrincipalPaid:
                    handler->string_value("PrincipalPaid");
                    break;
                case CalculationType_Principal:
                    handler->string_value("Principal");
                    break;
                case CalculationType_PrincipalOwing:
                    handler->string_value("PrincipalOwing");
                    break;
                case CalculationType_HomeValue:
                    handler->string_value("HomeValue");
                    break;
                default:
                    assert(false);
              }
          }
        else
          {
                    handler->string_value(storeCalculationType.string_value);
          }
        if (flagHasCalculationTypeIsNew)
          {
            handler->start_pair("CalculationTypeIsNew");
            handler->boolean_value(storeCalculationTypeIsNew);
          }
        if (flagHasFutureCalculationType)
          {
            handler->start_pair("FutureCalculationType");
            if (storeFutureCalculationType.in_known_list)
              {
                switch (storeFutureCalculationType.list_value)
                  {
                    case FutureCalculationType_TotalInterest:
                        handler->string_value("TotalInterest");
                        break;
                    case FutureCalculationType_TotalPaid:
                        handler->string_value("TotalPaid");
                        break;
                    case FutureCalculationType_PrincipalPaid:
                        handler->string_value("PrincipalPaid");
                        break;
                    case FutureCalculationType_PrincipalOwing:
                        handler->string_value("PrincipalOwing");
                        break;
                    default:
                        assert(false);
                  }
              }
            else
              {
                        handler->string_value(storeFutureCalculationType.string_value);
              }
          }
        assert(flagHasRequestType);
        handler->start_pair("RequestType");
        if (storeRequestType.in_known_list)
          {
            switch (storeRequestType.list_value)
              {
                case RequestType_Unknown:
                    handler->string_value("Unknown");
                    break;
                case RequestType_AskPrincipal:
                    handler->string_value("AskPrincipal");
                    break;
                case RequestType_AskInterestRate:
                    handler->string_value("AskInterestRate");
                    break;
                case RequestType_AskAmortization:
                    handler->string_value("AskAmortization");
                    break;
                case RequestType_AskHomeValue:
                    handler->string_value("AskHomeValue");
                    break;
                case RequestType_AskDownPayment:
                    handler->string_value("AskDownPayment");
                    break;
                case RequestType_AskMonthlyPayment:
                    handler->string_value("AskMonthlyPayment");
                    break;
                case RequestType_ShowPayment:
                    handler->string_value("ShowPayment");
                    break;
                case RequestType_ShowTotalInterest:
                    handler->string_value("ShowTotalInterest");
                    break;
                case RequestType_ShowTotalPaid:
                    handler->string_value("ShowTotalPaid");
                    break;
                case RequestType_ShowDownPayment:
                    handler->string_value("ShowDownPayment");
                    break;
                case RequestType_ShowInterestRate:
                    handler->string_value("ShowInterestRate");
                    break;
                case RequestType_ShowAmortization:
                    handler->string_value("ShowAmortization");
                    break;
                case RequestType_ShowPrincipalPaid:
                    handler->string_value("ShowPrincipalPaid");
                    break;
                case RequestType_ShowPrincipal:
                    handler->string_value("ShowPrincipal");
                    break;
                case RequestType_ShowPrincipalOwing:
                    handler->string_value("ShowPrincipalOwing");
                    break;
                case RequestType_ShowHomeValue:
                    handler->string_value("ShowHomeValue");
                    break;
                case RequestType_AskYearRange:
                    handler->string_value("AskYearRange");
                    break;
                case RequestType_AskYearOwing:
                    handler->string_value("AskYearOwing");
                    break;
                case RequestType_AskPrincipalOrHomeValue:
                    handler->string_value("AskPrincipalOrHomeValue");
                    break;
                default:
                    assert(false);
              }
          }
        else
          {
                    handler->string_value(storeRequestType.string_value);
          }
        if (flagHasLastRequest)
          {
            handler->start_pair("LastRequest");
            if (storeLastRequest.in_known_list)
              {
                switch (storeLastRequest.list_value)
                  {
                    case LastRequest_Unknown:
                        handler->string_value("Unknown");
                        break;
                    case LastRequest_AskPrincipal:
                        handler->string_value("AskPrincipal");
                        break;
                    case LastRequest_AskInterestRate:
                        handler->string_value("AskInterestRate");
                        break;
                    case LastRequest_AskAmortization:
                        handler->string_value("AskAmortization");
                        break;
                    case LastRequest_AskHomeValue:
                        handler->string_value("AskHomeValue");
                        break;
                    case LastRequest_AskDownPayment:
                        handler->string_value("AskDownPayment");
                        break;
                    case LastRequest_AskMonthlyPayment:
                        handler->string_value("AskMonthlyPayment");
                        break;
                    case LastRequest_ShowPayment:
                        handler->string_value("ShowPayment");
                        break;
                    case LastRequest_ShowTotalInterest:
                        handler->string_value("ShowTotalInterest");
                        break;
                    case LastRequest_ShowTotalPaid:
                        handler->string_value("ShowTotalPaid");
                        break;
                    case LastRequest_ShowDownPayment:
                        handler->string_value("ShowDownPayment");
                        break;
                    case LastRequest_ShowInterestRate:
                        handler->string_value("ShowInterestRate");
                        break;
                    case LastRequest_ShowAmortization:
                        handler->string_value("ShowAmortization");
                        break;
                    case LastRequest_ShowPrincipalPaid:
                        handler->string_value("ShowPrincipalPaid");
                        break;
                    case LastRequest_ShowPrincipal:
                        handler->string_value("ShowPrincipal");
                        break;
                    case LastRequest_ShowPrincipalOwing:
                        handler->string_value("ShowPrincipalOwing");
                        break;
                    case LastRequest_ShowHomeValue:
                        handler->string_value("ShowHomeValue");
                        break;
                    case LastRequest_AskYearRange:
                        handler->string_value("AskYearRange");
                        break;
                    case LastRequest_AskYearOwing:
                        handler->string_value("AskYearOwing");
                        break;
                    case LastRequest_AskPrincipalOrHomeValue:
                        handler->string_value("AskPrincipalOrHomeValue");
                        break;
                    default:
                        assert(false);
                  }
              }
            else
              {
                        handler->string_value(storeLastRequest.string_value);
              }
          }
        if (flagHasInterestRate)
          {
            handler->start_pair("InterestRate");
            if (textStoreInterestRate != "")
                handler->number_value(textStoreInterestRate.c_str());
            else if (((double)(long int)storeInterestRate) == storeInterestRate)
                handler->number_value((long int)storeInterestRate);
            else
                handler->number_value(storeInterestRate);
          }
        if (flagHasInterestRateIsNew)
          {
            handler->start_pair("InterestRateIsNew");
            handler->boolean_value(storeInterestRateIsNew);
          }
        if (flagHasMortgagePrincipal)
          {
            handler->start_pair("MortgagePrincipal");
            storeMortgagePrincipal->write_as_json(handler);
          }
        if (flagHasMortgagePrincipalIsNew)
          {
            handler->start_pair("MortgagePrincipalIsNew");
            handler->boolean_value(storeMortgagePrincipalIsNew);
          }
        if (flagHasPrincipalHomeValueAmbiguous)
          {
            handler->start_pair("PrincipalHomeValueAmbiguous");
            handler->boolean_value(storePrincipalHomeValueAmbiguous);
          }
        if (flagHasPrincipalHomeValueAmbiguousConfirmed)
          {
            handler->start_pair("PrincipalHomeValueAmbiguousConfirmed");
            handler->boolean_value(storePrincipalHomeValueAmbiguousConfirmed);
          }
        if (flagHasNumMonths)
          {
            handler->start_pair("NumMonths");
            handler->number_value(storeNumMonths.get_o_integer());
          }
        if (flagHasNumMonthsIsNew)
          {
            handler->start_pair("NumMonthsIsNew");
            handler->boolean_value(storeNumMonthsIsNew);
          }
        if (flagHasYearStart)
          {
            handler->start_pair("YearStart");
            handler->number_value(storeYearStart.get_o_integer());
          }
        if (flagHasYearEnd)
          {
            handler->start_pair("YearEnd");
            handler->number_value(storeYearEnd.get_o_integer());
          }
        if (flagHasYearStartEndIsNew)
          {
            handler->start_pair("YearStartEndIsNew");
            handler->boolean_value(storeYearStartEndIsNew);
          }
        if (flagHasYearEndOwing)
          {
            handler->start_pair("YearEndOwing");
            handler->number_value(storeYearEndOwing.get_o_integer());
          }
        if (flagHasYearEndOwingIsNew)
          {
            handler->start_pair("YearEndOwingIsNew");
            handler->boolean_value(storeYearEndOwingIsNew);
          }
        if (flagHasDownPaymentPercent)
          {
            handler->start_pair("DownPaymentPercent");
            if (textStoreDownPaymentPercent != "")
                handler->number_value(textStoreDownPaymentPercent.c_str());
            else if (((double)(long int)storeDownPaymentPercent) == storeDownPaymentPercent)
                handler->number_value((long int)storeDownPaymentPercent);
            else
                handler->number_value(storeDownPaymentPercent);
          }
        if (flagHasDownPaymentPercentIsNew)
          {
            handler->start_pair("DownPaymentPercentIsNew");
            handler->boolean_value(storeDownPaymentPercentIsNew);
          }
        if (flagHasDownPayment)
          {
            handler->start_pair("DownPayment");
            storeDownPayment->write_as_json(handler);
          }
        if (flagHasDownPaymentIsNew)
          {
            handler->start_pair("DownPaymentIsNew");
            handler->boolean_value(storeDownPaymentIsNew);
          }
        if (flagHasHomeValue)
          {
            handler->start_pair("HomeValue");
            storeHomeValue->write_as_json(handler);
          }
        if (flagHasHomeValueIsNew)
          {
            handler->start_pair("HomeValueIsNew");
            handler->boolean_value(storeHomeValueIsNew);
          }
        if (flagHasMaxPaymentAmount)
          {
            handler->start_pair("MaxPaymentAmount");
            storeMaxPaymentAmount->write_as_json(handler);
          }
        if (flagHasMaxPaymentAmountIsNew)
          {
            handler->start_pair("MaxPaymentAmountIsNew");
            handler->boolean_value(storeMaxPaymentAmountIsNew);
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
        if (flagHasMortgageCalculatorStart)
          {
            handler->start_pair("MortgageCalculatorStart");
            handler->boolean_value(storeMortgageCalculatorStart);
          }
        if (flagHasDefaultCurrency)
          {
            handler->start_pair("DefaultCurrency");
            storeDefaultCurrency->write_as_json(handler);
          }
        if (flagHasUserConfused)
          {
            handler->start_pair("UserConfused");
            handler->boolean_value(storeUserConfused);
          }
        if (flagHasPaymentFrequency)
          {
            handler->start_pair("PaymentFrequency");
            if (storePaymentFrequency.in_known_list)
              {
                switch (storePaymentFrequency.list_value)
                  {
                    case PaymentFrequency_monthly:
                        handler->string_value("monthly");
                        break;
                    case PaymentFrequency_biweekly:
                        handler->string_value("biweekly");
                        break;
                    case PaymentFrequency_weekly:
                        handler->string_value("weekly");
                        break;
                    default:
                        assert(false);
                  }
              }
            else
              {
                        handler->string_value(storePaymentFrequency.string_value);
              }
          }
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasCalculationType()))
          {
            return "When parsing the object for %what%, the \"CalculationType\" field was missing.";
          }
        if (!(hasRequestType()))
          {
            return "When parsing the object for %what%, the \"RequestType\" field was missing.";
          }
        return NULL;
      }

    static MortgageCalculatorInputDataJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static MortgageCalculatorInputDataJSON *from_text(const char *text, bool ignore_extras = false)
      {
        MortgageCalculatorInputDataJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<MortgageCalculatorInputDataJSON>, MortgageCalculatorInputDataJSON *, bool> generator("Type MortgageCalculatorInputData", ignore_extras);
            parse_json_value(text, "Text for MortgageCalculatorInputDataJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static MortgageCalculatorInputDataJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        MortgageCalculatorInputDataJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<MortgageCalculatorInputDataJSON>, MortgageCalculatorInputDataJSON *, bool> generator("Type MortgageCalculatorInputData", ignore_extras);
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
    class FieldGeneratorCalculationType : public JSONStringGenerator
          {
          protected:
            FieldGeneratorCalculationType(const char *what)
              {
                set_what(what);
              }
            FieldGeneratorCalculationType(void)
              {
              }
            void handle_result(const char *result)
              {
                TypeCalculationTypeKnownValues known = stringToCalculationType(result);
                TypeCalculationType new_value;
                if (known == CalculationType__none)
                  {
                    new_value.in_known_list = false;
                    new_value.string_value = result;
                  }
                else
                  {
                    new_value.in_known_list = true;
                    new_value.list_value = known;
                  }
                handle_result(new_value);
              }
            virtual void handle_result(TypeCalculationType result) = 0;
          };
        JSONHoldingGenerator<FieldGeneratorCalculationType, TypeCalculationType, TypeCalculationType > fieldGeneratorCalculationType;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorCalculationTypeIsNew;
    class FieldGeneratorFutureCalculationType : public JSONStringGenerator
          {
          protected:
            FieldGeneratorFutureCalculationType(const char *what)
              {
                set_what(what);
              }
            FieldGeneratorFutureCalculationType(void)
              {
              }
            void handle_result(const char *result)
              {
                TypeFutureCalculationTypeKnownValues known = stringToFutureCalculationType(result);
                TypeFutureCalculationType new_value;
                if (known == FutureCalculationType__none)
                  {
                    new_value.in_known_list = false;
                    new_value.string_value = result;
                  }
                else
                  {
                    new_value.in_known_list = true;
                    new_value.list_value = known;
                  }
                handle_result(new_value);
              }
            virtual void handle_result(TypeFutureCalculationType result) = 0;
          };
        JSONHoldingGenerator<FieldGeneratorFutureCalculationType, TypeFutureCalculationType, TypeFutureCalculationType > fieldGeneratorFutureCalculationType;
    class FieldGeneratorRequestType : public JSONStringGenerator
          {
          protected:
            FieldGeneratorRequestType(const char *what)
              {
                set_what(what);
              }
            FieldGeneratorRequestType(void)
              {
              }
            void handle_result(const char *result)
              {
                TypeRequestTypeKnownValues known = stringToRequestType(result);
                TypeRequestType new_value;
                if (known == RequestType__none)
                  {
                    new_value.in_known_list = false;
                    new_value.string_value = result;
                  }
                else
                  {
                    new_value.in_known_list = true;
                    new_value.list_value = known;
                  }
                handle_result(new_value);
              }
            virtual void handle_result(TypeRequestType result) = 0;
          };
        JSONHoldingGenerator<FieldGeneratorRequestType, TypeRequestType, TypeRequestType > fieldGeneratorRequestType;
    class FieldGeneratorLastRequest : public JSONStringGenerator
          {
          protected:
            FieldGeneratorLastRequest(const char *what)
              {
                set_what(what);
              }
            FieldGeneratorLastRequest(void)
              {
              }
            void handle_result(const char *result)
              {
                TypeLastRequestKnownValues known = stringToLastRequest(result);
                TypeLastRequest new_value;
                if (known == LastRequest__none)
                  {
                    new_value.in_known_list = false;
                    new_value.string_value = result;
                  }
                else
                  {
                    new_value.in_known_list = true;
                    new_value.list_value = known;
                  }
                handle_result(new_value);
              }
            virtual void handle_result(TypeLastRequest result) = 0;
          };
        JSONHoldingGenerator<FieldGeneratorLastRequest, TypeLastRequest, TypeLastRequest > fieldGeneratorLastRequest;
        JSONHoldingGenerator<JSONNumberTextGenerator, std::string, const char * > fieldGeneratorInterestRate;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorInterestRateIsNew;
        JSONHoldingGenerator<MoneyJSON::Generator, RCHandle<MoneyJSON>, MoneyJSON *, bool > fieldGeneratorMortgagePrincipal;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorMortgagePrincipalIsNew;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorPrincipalHomeValueAmbiguous;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorPrincipalHomeValueAmbiguousConfirmed;
        static char lowerBoundNumMonths[];
        JSONHoldingGenerator<JSONIntegerLowerBoundOnlyGenerator<lowerBoundNumMonths>, OInteger, o_integer > fieldGeneratorNumMonths;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorNumMonthsIsNew;
        static char lowerBoundYearStart[];
        JSONHoldingGenerator<JSONIntegerLowerBoundOnlyGenerator<lowerBoundYearStart>, OInteger, o_integer > fieldGeneratorYearStart;
        JSONHoldingGenerator<JSONIntegerUnboundRangeGenerator, OInteger, o_integer > fieldGeneratorYearEnd;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorYearStartEndIsNew;
        static char lowerBoundYearEndOwing[];
        JSONHoldingGenerator<JSONIntegerLowerBoundOnlyGenerator<lowerBoundYearEndOwing>, OInteger, o_integer > fieldGeneratorYearEndOwing;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorYearEndOwingIsNew;
        JSONHoldingGenerator<JSONNumberTextGenerator, std::string, const char * > fieldGeneratorDownPaymentPercent;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorDownPaymentPercentIsNew;
        JSONHoldingGenerator<MoneyJSON::Generator, RCHandle<MoneyJSON>, MoneyJSON *, bool > fieldGeneratorDownPayment;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorDownPaymentIsNew;
        JSONHoldingGenerator<MoneyJSON::Generator, RCHandle<MoneyJSON>, MoneyJSON *, bool > fieldGeneratorHomeValue;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorHomeValueIsNew;
        JSONHoldingGenerator<MoneyJSON::Generator, RCHandle<MoneyJSON>, MoneyJSON *, bool > fieldGeneratorMaxPaymentAmount;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorMaxPaymentAmountIsNew;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorDoNotKnow;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorWantToKnow;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorMortgageCalculatorStart;
        JSONHoldingGenerator<MoneyJSON::Generator, RCHandle<MoneyJSON>, MoneyJSON *, bool > fieldGeneratorDefaultCurrency;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorUserConfused;
    class FieldGeneratorPaymentFrequency : public JSONStringGenerator
          {
          protected:
            FieldGeneratorPaymentFrequency(const char *what)
              {
                set_what(what);
              }
            FieldGeneratorPaymentFrequency(void)
              {
              }
            void handle_result(const char *result)
              {
                TypePaymentFrequencyKnownValues known = stringToPaymentFrequency(result);
                TypePaymentFrequency new_value;
                if (known == PaymentFrequency__none)
                  {
                    new_value.in_known_list = false;
                    new_value.string_value = result;
                  }
                else
                  {
                    new_value.in_known_list = true;
                    new_value.list_value = known;
                  }
                handle_result(new_value);
              }
            virtual void handle_result(TypePaymentFrequency result) = 0;
          };
        JSONHoldingGenerator<FieldGeneratorPaymentFrequency, TypePaymentFrequency, TypePaymentFrequency > fieldGeneratorPaymentFrequency;
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
            MortgageCalculatorInputDataJSON *result = new MortgageCalculatorInputDataJSON();
            assert(result != NULL);
            RCHandle<MortgageCalculatorInputDataJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraMortgageCalculatorInputDataAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void finish(MortgageCalculatorInputDataJSON *result)
          {
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
            if (fieldGeneratorFutureCalculationType.have_value)
              {
                result->setFutureCalculationType(fieldGeneratorFutureCalculationType.value);
                fieldGeneratorFutureCalculationType.have_value = false;
              }
            if (fieldGeneratorRequestType.have_value)
              {
                result->setRequestType(fieldGeneratorRequestType.value);
                fieldGeneratorRequestType.have_value = false;
              }
            else if (!(result->hasRequestType()))
              {
                error("When parsing the object for %what%, the \"RequestType\" field was missing.");
              }
            if (fieldGeneratorLastRequest.have_value)
              {
                result->setLastRequest(fieldGeneratorLastRequest.value);
                fieldGeneratorLastRequest.have_value = false;
              }
            if (fieldGeneratorInterestRate.have_value)
              {
                result->setInterestRateText(fieldGeneratorInterestRate.value);
                fieldGeneratorInterestRate.have_value = false;
              }
            if (fieldGeneratorInterestRateIsNew.have_value)
              {
                result->setInterestRateIsNew(fieldGeneratorInterestRateIsNew.value);
                fieldGeneratorInterestRateIsNew.have_value = false;
              }
            if (fieldGeneratorMortgagePrincipal.have_value)
              {
                result->setMortgagePrincipal(fieldGeneratorMortgagePrincipal.value.referenced());
                fieldGeneratorMortgagePrincipal.have_value = false;
              }
            if (fieldGeneratorMortgagePrincipalIsNew.have_value)
              {
                result->setMortgagePrincipalIsNew(fieldGeneratorMortgagePrincipalIsNew.value);
                fieldGeneratorMortgagePrincipalIsNew.have_value = false;
              }
            if (fieldGeneratorPrincipalHomeValueAmbiguous.have_value)
              {
                result->setPrincipalHomeValueAmbiguous(fieldGeneratorPrincipalHomeValueAmbiguous.value);
                fieldGeneratorPrincipalHomeValueAmbiguous.have_value = false;
              }
            if (fieldGeneratorPrincipalHomeValueAmbiguousConfirmed.have_value)
              {
                result->setPrincipalHomeValueAmbiguousConfirmed(fieldGeneratorPrincipalHomeValueAmbiguousConfirmed.value);
                fieldGeneratorPrincipalHomeValueAmbiguousConfirmed.have_value = false;
              }
            if (fieldGeneratorNumMonths.have_value)
              {
                result->setNumMonths(fieldGeneratorNumMonths.value);
                fieldGeneratorNumMonths.have_value = false;
              }
            if (fieldGeneratorNumMonthsIsNew.have_value)
              {
                result->setNumMonthsIsNew(fieldGeneratorNumMonthsIsNew.value);
                fieldGeneratorNumMonthsIsNew.have_value = false;
              }
            if (fieldGeneratorYearStart.have_value)
              {
                result->setYearStart(fieldGeneratorYearStart.value);
                fieldGeneratorYearStart.have_value = false;
              }
            if (fieldGeneratorYearEnd.have_value)
              {
                result->setYearEnd(fieldGeneratorYearEnd.value);
                fieldGeneratorYearEnd.have_value = false;
              }
            if (fieldGeneratorYearStartEndIsNew.have_value)
              {
                result->setYearStartEndIsNew(fieldGeneratorYearStartEndIsNew.value);
                fieldGeneratorYearStartEndIsNew.have_value = false;
              }
            if (fieldGeneratorYearEndOwing.have_value)
              {
                result->setYearEndOwing(fieldGeneratorYearEndOwing.value);
                fieldGeneratorYearEndOwing.have_value = false;
              }
            if (fieldGeneratorYearEndOwingIsNew.have_value)
              {
                result->setYearEndOwingIsNew(fieldGeneratorYearEndOwingIsNew.value);
                fieldGeneratorYearEndOwingIsNew.have_value = false;
              }
            if (fieldGeneratorDownPaymentPercent.have_value)
              {
                result->setDownPaymentPercentText(fieldGeneratorDownPaymentPercent.value);
                fieldGeneratorDownPaymentPercent.have_value = false;
              }
            if (fieldGeneratorDownPaymentPercentIsNew.have_value)
              {
                result->setDownPaymentPercentIsNew(fieldGeneratorDownPaymentPercentIsNew.value);
                fieldGeneratorDownPaymentPercentIsNew.have_value = false;
              }
            if (fieldGeneratorDownPayment.have_value)
              {
                result->setDownPayment(fieldGeneratorDownPayment.value.referenced());
                fieldGeneratorDownPayment.have_value = false;
              }
            if (fieldGeneratorDownPaymentIsNew.have_value)
              {
                result->setDownPaymentIsNew(fieldGeneratorDownPaymentIsNew.value);
                fieldGeneratorDownPaymentIsNew.have_value = false;
              }
            if (fieldGeneratorHomeValue.have_value)
              {
                result->setHomeValue(fieldGeneratorHomeValue.value.referenced());
                fieldGeneratorHomeValue.have_value = false;
              }
            if (fieldGeneratorHomeValueIsNew.have_value)
              {
                result->setHomeValueIsNew(fieldGeneratorHomeValueIsNew.value);
                fieldGeneratorHomeValueIsNew.have_value = false;
              }
            if (fieldGeneratorMaxPaymentAmount.have_value)
              {
                result->setMaxPaymentAmount(fieldGeneratorMaxPaymentAmount.value.referenced());
                fieldGeneratorMaxPaymentAmount.have_value = false;
              }
            if (fieldGeneratorMaxPaymentAmountIsNew.have_value)
              {
                result->setMaxPaymentAmountIsNew(fieldGeneratorMaxPaymentAmountIsNew.value);
                fieldGeneratorMaxPaymentAmountIsNew.have_value = false;
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
            if (fieldGeneratorMortgageCalculatorStart.have_value)
              {
                result->setMortgageCalculatorStart(fieldGeneratorMortgageCalculatorStart.value);
                fieldGeneratorMortgageCalculatorStart.have_value = false;
              }
            if (fieldGeneratorDefaultCurrency.have_value)
              {
                result->setDefaultCurrency(fieldGeneratorDefaultCurrency.value.referenced());
                fieldGeneratorDefaultCurrency.have_value = false;
              }
            if (fieldGeneratorUserConfused.have_value)
              {
                result->setUserConfused(fieldGeneratorUserConfused.value);
                fieldGeneratorUserConfused.have_value = false;
              }
            if (fieldGeneratorPaymentFrequency.have_value)
              {
                result->setPaymentFrequency(fieldGeneratorPaymentFrequency.value);
                fieldGeneratorPaymentFrequency.have_value = false;
              }
          }
        virtual void handle_result(MortgageCalculatorInputDataJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
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
                    switch ((unsigned char)(field_name[1]))
                      {
                        case 'e':
                            if (strcmp(&(field_name[2]), "faultCurrency") == 0)
                                return &fieldGeneratorDefaultCurrency;
                            break;
                        case 'o':
                            switch ((unsigned char)(field_name[2]))
                              {
                                case 'N':
                                    if (strcmp(&(field_name[3]), "otKnow") == 0)
                                        return &fieldGeneratorDoNotKnow;
                                    break;
                                case 'w':
                                    if (strncmp(&(field_name[3]), "nPayment", 8) == 0)
                                      {
                                        switch ((unsigned char)(field_name[11]))
                                          {
                                            case 0:
                                                return &fieldGeneratorDownPayment;
                                            case 'I':
                                                if (strcmp(&(field_name[12]), "sNew") == 0)
                                                    return &fieldGeneratorDownPaymentIsNew;
                                                break;
                                            case 'P':
                                                if (strncmp(&(field_name[12]), "ercent", 6) == 0)
                                                  {
                                                    switch ((unsigned char)(field_name[18]))
                                                      {
                                                        case 0:
                                                            return &fieldGeneratorDownPaymentPercent;
                                                        case 'I':
                                                            if (strcmp(&(field_name[19]), "sNew") == 0)
                                                                return &fieldGeneratorDownPaymentPercentIsNew;
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
                        default:
                            break;
                      }
                    break;
                case 'F':
                    if (strcmp(&(field_name[1]), "utureCalculationType") == 0)
                        return &fieldGeneratorFutureCalculationType;
                    break;
                case 'H':
                    if (strncmp(&(field_name[1]), "omeValue", 8) == 0)
                      {
                        switch ((unsigned char)(field_name[9]))
                          {
                            case 0:
                                return &fieldGeneratorHomeValue;
                            case 'I':
                                if (strcmp(&(field_name[10]), "sNew") == 0)
                                    return &fieldGeneratorHomeValueIsNew;
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 'I':
                    if (strncmp(&(field_name[1]), "nterestRate", 11) == 0)
                      {
                        switch ((unsigned char)(field_name[12]))
                          {
                            case 0:
                                return &fieldGeneratorInterestRate;
                            case 'I':
                                if (strcmp(&(field_name[13]), "sNew") == 0)
                                    return &fieldGeneratorInterestRateIsNew;
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 'L':
                    if (strcmp(&(field_name[1]), "astRequest") == 0)
                        return &fieldGeneratorLastRequest;
                    break;
                case 'M':
                    switch ((unsigned char)(field_name[1]))
                      {
                        case 'a':
                            if (strncmp(&(field_name[2]), "xPaymentAmount", 14) == 0)
                              {
                                switch ((unsigned char)(field_name[16]))
                                  {
                                    case 0:
                                        return &fieldGeneratorMaxPaymentAmount;
                                    case 'I':
                                        if (strcmp(&(field_name[17]), "sNew") == 0)
                                            return &fieldGeneratorMaxPaymentAmountIsNew;
                                        break;
                                    default:
                                        break;
                                  }
                              }
                            break;
                        case 'o':
                            if (strncmp(&(field_name[2]), "rtgage", 6) == 0)
                              {
                                switch ((unsigned char)(field_name[8]))
                                  {
                                    case 'C':
                                        if (strcmp(&(field_name[9]), "alculatorStart") == 0)
                                            return &fieldGeneratorMortgageCalculatorStart;
                                        break;
                                    case 'P':
                                        if (strncmp(&(field_name[9]), "rincipal", 8) == 0)
                                          {
                                            switch ((unsigned char)(field_name[17]))
                                              {
                                                case 0:
                                                    return &fieldGeneratorMortgagePrincipal;
                                                case 'I':
                                                    if (strcmp(&(field_name[18]), "sNew") == 0)
                                                        return &fieldGeneratorMortgagePrincipalIsNew;
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
                case 'N':
                    if (strncmp(&(field_name[1]), "umMonths", 8) == 0)
                      {
                        switch ((unsigned char)(field_name[9]))
                          {
                            case 0:
                                return &fieldGeneratorNumMonths;
                            case 'I':
                                if (strcmp(&(field_name[10]), "sNew") == 0)
                                    return &fieldGeneratorNumMonthsIsNew;
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 'P':
                    switch ((unsigned char)(field_name[1]))
                      {
                        case 'a':
                            if (strcmp(&(field_name[2]), "ymentFrequency") == 0)
                                return &fieldGeneratorPaymentFrequency;
                            break;
                        case 'r':
                            if (strncmp(&(field_name[2]), "incipalHomeValueAmbiguous", 25) == 0)
                              {
                                switch ((unsigned char)(field_name[27]))
                                  {
                                    case 0:
                                        return &fieldGeneratorPrincipalHomeValueAmbiguous;
                                    case 'C':
                                        if (strcmp(&(field_name[28]), "onfirmed") == 0)
                                            return &fieldGeneratorPrincipalHomeValueAmbiguousConfirmed;
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
                case 'R':
                    if (strcmp(&(field_name[1]), "equestType") == 0)
                        return &fieldGeneratorRequestType;
                    break;
                case 'U':
                    if (strcmp(&(field_name[1]), "serConfused") == 0)
                        return &fieldGeneratorUserConfused;
                    break;
                case 'W':
                    if (strcmp(&(field_name[1]), "antToKnow") == 0)
                        return &fieldGeneratorWantToKnow;
                    break;
                case 'Y':
                    if (strncmp(&(field_name[1]), "ear", 3) == 0)
                      {
                        switch ((unsigned char)(field_name[4]))
                          {
                            case 'E':
                                if (strncmp(&(field_name[5]), "nd", 2) == 0)
                                  {
                                    switch ((unsigned char)(field_name[7]))
                                      {
                                        case 0:
                                            return &fieldGeneratorYearEnd;
                                        case 'O':
                                            if (strncmp(&(field_name[8]), "wing", 4) == 0)
                                              {
                                                switch ((unsigned char)(field_name[12]))
                                                  {
                                                    case 0:
                                                        return &fieldGeneratorYearEndOwing;
                                                    case 'I':
                                                        if (strcmp(&(field_name[13]), "sNew") == 0)
                                                            return &fieldGeneratorYearEndOwingIsNew;
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
                            case 'S':
                                if (strncmp(&(field_name[5]), "tart", 4) == 0)
                                  {
                                    switch ((unsigned char)(field_name[9]))
                                      {
                                        case 0:
                                            return &fieldGeneratorYearStart;
                                        case 'E':
                                            if (strcmp(&(field_name[10]), "ndIsNew") == 0)
                                                return &fieldGeneratorYearStartEndIsNew;
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
            return NULL;
          }

      public:
        Generator(bool ignore_extras = false) : fieldGeneratorCalculationType("field \"CalculationType\" of the MortgageCalculatorInputData class"), fieldGeneratorCalculationTypeIsNew("field \"CalculationTypeIsNew\" of the MortgageCalculatorInputData class"), fieldGeneratorFutureCalculationType("field \"FutureCalculationType\" of the MortgageCalculatorInputData class"), fieldGeneratorRequestType("field \"RequestType\" of the MortgageCalculatorInputData class"), fieldGeneratorLastRequest("field \"LastRequest\" of the MortgageCalculatorInputData class"), fieldGeneratorInterestRate("field \"InterestRate\" of the MortgageCalculatorInputData class"), fieldGeneratorInterestRateIsNew("field \"InterestRateIsNew\" of the MortgageCalculatorInputData class"), fieldGeneratorMortgagePrincipal("field \"MortgagePrincipal\" of the MortgageCalculatorInputData class", ignore_extras), fieldGeneratorMortgagePrincipalIsNew("field \"MortgagePrincipalIsNew\" of the MortgageCalculatorInputData class"), fieldGeneratorPrincipalHomeValueAmbiguous("field \"PrincipalHomeValueAmbiguous\" of the MortgageCalculatorInputData class"), fieldGeneratorPrincipalHomeValueAmbiguousConfirmed("field \"PrincipalHomeValueAmbiguousConfirmed\" of the MortgageCalculatorInputData class"), fieldGeneratorNumMonths("field \"NumMonths\" of the MortgageCalculatorInputData class"), fieldGeneratorNumMonthsIsNew("field \"NumMonthsIsNew\" of the MortgageCalculatorInputData class"), fieldGeneratorYearStart("field \"YearStart\" of the MortgageCalculatorInputData class"), fieldGeneratorYearEnd("field \"YearEnd\" of the MortgageCalculatorInputData class"), fieldGeneratorYearStartEndIsNew("field \"YearStartEndIsNew\" of the MortgageCalculatorInputData class"), fieldGeneratorYearEndOwing("field \"YearEndOwing\" of the MortgageCalculatorInputData class"), fieldGeneratorYearEndOwingIsNew("field \"YearEndOwingIsNew\" of the MortgageCalculatorInputData class"), fieldGeneratorDownPaymentPercent("field \"DownPaymentPercent\" of the MortgageCalculatorInputData class"), fieldGeneratorDownPaymentPercentIsNew("field \"DownPaymentPercentIsNew\" of the MortgageCalculatorInputData class"), fieldGeneratorDownPayment("field \"DownPayment\" of the MortgageCalculatorInputData class", ignore_extras), fieldGeneratorDownPaymentIsNew("field \"DownPaymentIsNew\" of the MortgageCalculatorInputData class"), fieldGeneratorHomeValue("field \"HomeValue\" of the MortgageCalculatorInputData class", ignore_extras), fieldGeneratorHomeValueIsNew("field \"HomeValueIsNew\" of the MortgageCalculatorInputData class"), fieldGeneratorMaxPaymentAmount("field \"MaxPaymentAmount\" of the MortgageCalculatorInputData class", ignore_extras), fieldGeneratorMaxPaymentAmountIsNew("field \"MaxPaymentAmountIsNew\" of the MortgageCalculatorInputData class"), fieldGeneratorDoNotKnow("field \"DoNotKnow\" of the MortgageCalculatorInputData class"), fieldGeneratorWantToKnow("field \"WantToKnow\" of the MortgageCalculatorInputData class"), fieldGeneratorMortgageCalculatorStart("field \"MortgageCalculatorStart\" of the MortgageCalculatorInputData class"), fieldGeneratorDefaultCurrency("field \"DefaultCurrency\" of the MortgageCalculatorInputData class", ignore_extras), fieldGeneratorUserConfused("field \"UserConfused\" of the MortgageCalculatorInputData class"), fieldGeneratorPaymentFrequency("field \"PaymentFrequency\" of the MortgageCalculatorInputData class"), unknownFieldGenerator(ignore_extras)
          {
            set_what("the MortgageCalculatorInputData class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorCalculationType.reset();
            fieldGeneratorCalculationTypeIsNew.reset();
            fieldGeneratorFutureCalculationType.reset();
            fieldGeneratorRequestType.reset();
            fieldGeneratorLastRequest.reset();
            fieldGeneratorInterestRate.reset();
            fieldGeneratorInterestRateIsNew.reset();
            fieldGeneratorMortgagePrincipal.reset();
            fieldGeneratorMortgagePrincipalIsNew.reset();
            fieldGeneratorPrincipalHomeValueAmbiguous.reset();
            fieldGeneratorPrincipalHomeValueAmbiguousConfirmed.reset();
            fieldGeneratorNumMonths.reset();
            fieldGeneratorNumMonthsIsNew.reset();
            fieldGeneratorYearStart.reset();
            fieldGeneratorYearEnd.reset();
            fieldGeneratorYearStartEndIsNew.reset();
            fieldGeneratorYearEndOwing.reset();
            fieldGeneratorYearEndOwingIsNew.reset();
            fieldGeneratorDownPaymentPercent.reset();
            fieldGeneratorDownPaymentPercentIsNew.reset();
            fieldGeneratorDownPayment.reset();
            fieldGeneratorDownPaymentIsNew.reset();
            fieldGeneratorHomeValue.reset();
            fieldGeneratorHomeValueIsNew.reset();
            fieldGeneratorMaxPaymentAmount.reset();
            fieldGeneratorMaxPaymentAmountIsNew.reset();
            fieldGeneratorDoNotKnow.reset();
            fieldGeneratorWantToKnow.reset();
            fieldGeneratorMortgageCalculatorStart.reset();
            fieldGeneratorDefaultCurrency.reset();
            fieldGeneratorUserConfused.reset();
            fieldGeneratorPaymentFrequency.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* MORTGAGECALCULATORINPUTDATAJSON_H */
