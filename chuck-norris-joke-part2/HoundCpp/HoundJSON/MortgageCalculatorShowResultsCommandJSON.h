/* file "MortgageCalculatorShowResultsCommandJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef MORTGAGECALCULATORSHOWRESULTSCOMMANDJSON_H
#define MORTGAGECALCULATORSHOWRESULTSCOMMANDJSON_H

#pragma interface

#include "MortgageCalculatorCommandJSON.h"
#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONStringGenerator.h"
#include "JSONNumberTextGenerator.h"
#include "JSONDoubleGenerator.h"
#include "JSONIntegerLowerBoundOnlyGenerator.h"
#include "JSONBooleanGenerator.h"
#include "OInteger.h"
#include "MoneyJSON.h"
#include "MoneyJSON.h"
#include "MoneyJSON.h"
#include "MoneyJSON.h"
#include "MoneyJSON.h"
#include "MoneyJSON.h"
#include "MoneyJSON.h"
#include "MoneyJSON.h"
#include "MortgageCalculatorInputDataJSON.h"
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


class MortgageCalculatorShowResultsCommandJSON : public MortgageCalculatorCommandJSON
  {
  public:
    class TypeNativeDataJSON : public ReferenceCounted
      {
      public:
        enum TypeResultErrorKnownValues
          {
            ResultError_None,
            ResultError_AmortizationInfinite,
            ResultError_DownPaymentNegative,
            ResultError_InputVariableConflict,
            ResultError_MultipleCurrencies,
            ResultError_DownPaymentExceedsHomeValue,
            ResultError_Precision,
            ResultError_NegativeInput,
            ResultError__none
          };
        struct TypeResultError
          {
            bool in_known_list;
            std::string string_value;
            TypeResultErrorKnownValues list_value;

            TypeResultError(void);
            TypeResultError(const TypeResultError &other);
            TypeResultError(TypeResultErrorKnownValues other);
            bool  operator==(const TypeResultError &other) const;
            bool  operator!=(const TypeResultError &other) const;
            bool  operator<(const TypeResultError &other) const;
            bool  operator>(const TypeResultError &other) const;
            bool  operator>=(const TypeResultError &other) const;
            bool  operator<=(const TypeResultError &other) const;

          };

        static TypeResultErrorKnownValues  stringToResultError(const char *chars);
        static const char * stringFromResultError(TypeResultErrorKnownValues the_enum);

      private:
        bool flagHasPaymentAmount;
        MoneyJSON * storePaymentAmount;
        bool flagHasTotalInterest;
        MoneyJSON * storeTotalInterest;
        bool flagHasTotalPaidResult;
        MoneyJSON * storeTotalPaidResult;
        bool flagHasDownPaymentResult;
        MoneyJSON * storeDownPaymentResult;
        bool flagHasDownPaymentPercentResult;
        double storeDownPaymentPercentResult;
        std::string textStoreDownPaymentPercentResult;
        bool flagHasNumMonthsResult;
        OInteger storeNumMonthsResult;
        bool flagHasPrincipalPaidResult;
        MoneyJSON * storePrincipalPaidResult;
        bool flagHasPrincipalResult;
        MoneyJSON * storePrincipalResult;
        bool flagHasPrincipalOwingResult;
        MoneyJSON * storePrincipalOwingResult;
        bool flagHasHomeValueResult;
        MoneyJSON * storeHomeValueResult;
        bool flagHasInterestRateResult;
        double storeInterestRateResult;
        std::string textStoreInterestRateResult;
        bool flagHasMortgageInputData;
        MortgageCalculatorInputDataJSON * storeMortgageInputData;
        bool flagHasNotUnderstood;
        bool storeNotUnderstood;
        bool flagHasResultError;
        TypeResultError storeResultError;
        bool flagHasAuxPaymentPerYear;
        MoneyJSON * storeAuxPaymentPerYear;
        bool flagHasAuxTotalPayment;
        MoneyJSON * storeAuxTotalPayment;
        bool flagHasAuxInterestFirstYear;
        MoneyJSON * storeAuxInterestFirstYear;
        bool flagHasAuxInterestLastYear;
        MoneyJSON * storeAuxInterestLastYear;
        bool flagHasAuxInterestTotal;
        MoneyJSON * storeAuxInterestTotal;
        std::vector<std::string> extraKeys;
        std::vector<JSONValue *> extraValues;
        string_index *extraIndex;

        TypeNativeDataJSON(const TypeNativeDataJSON &);
        TypeNativeDataJSON & operator=(const TypeNativeDataJSON &other);

        void  fromJSONPaymentAmount(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONTotalInterest(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONTotalPaidResult(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONDownPaymentResult(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONDownPaymentPercentResult(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONNumMonthsResult(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONPrincipalPaidResult(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONPrincipalResult(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONPrincipalOwingResult(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONHomeValueResult(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONInterestRateResult(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONMortgageInputData(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONNotUnderstood(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONResultError(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONAuxPaymentPerYear(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONAuxTotalPayment(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONAuxInterestFirstYear(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONAuxInterestLastYear(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONAuxInterestTotal(JSONValue *json_value, bool ignore_extras = false);


      public:
        TypeNativeDataJSON(void);
        virtual ~TypeNativeDataJSON(void);
        bool  hasPaymentAmount(void) const;
        MoneyJSON *  getPaymentAmount(void);
        const MoneyJSON *  getPaymentAmount(void) const;
        bool  hasTotalInterest(void) const;
        MoneyJSON *  getTotalInterest(void);
        const MoneyJSON *  getTotalInterest(void) const;
        bool  hasTotalPaidResult(void) const;
        MoneyJSON *  getTotalPaidResult(void);
        const MoneyJSON *  getTotalPaidResult(void) const;
        bool  hasDownPaymentResult(void) const;
        MoneyJSON *  getDownPaymentResult(void);
        const MoneyJSON *  getDownPaymentResult(void) const;
        bool  hasDownPaymentPercentResult(void) const;
        double  getDownPaymentPercentResult(void);
        const double  getDownPaymentPercentResult(void) const;
        std::string  getDownPaymentPercentResultAsText(void) const;
        bool  hasNumMonthsResult(void) const;
        OInteger  getNumMonthsResult(void);
        const OInteger  getNumMonthsResult(void) const;
        bool  hasPrincipalPaidResult(void) const;
        MoneyJSON *  getPrincipalPaidResult(void);
        const MoneyJSON *  getPrincipalPaidResult(void) const;
        bool  hasPrincipalResult(void) const;
        MoneyJSON *  getPrincipalResult(void);
        const MoneyJSON *  getPrincipalResult(void) const;
        bool  hasPrincipalOwingResult(void) const;
        MoneyJSON *  getPrincipalOwingResult(void);
        const MoneyJSON *  getPrincipalOwingResult(void) const;
        bool  hasHomeValueResult(void) const;
        MoneyJSON *  getHomeValueResult(void);
        const MoneyJSON *  getHomeValueResult(void) const;
        bool  hasInterestRateResult(void) const;
        double  getInterestRateResult(void);
        const double  getInterestRateResult(void) const;
        std::string  getInterestRateResultAsText(void) const;
        bool  hasMortgageInputData(void) const;
        MortgageCalculatorInputDataJSON *  getMortgageInputData(void);
        const MortgageCalculatorInputDataJSON *  getMortgageInputData(void) const;
        bool  hasNotUnderstood(void) const;
        bool  getNotUnderstood(void);
        const bool  getNotUnderstood(void) const;
        bool  hasResultError(void) const;
        TypeResultError  getResultError(void);
        const TypeResultError  getResultError(void) const;
        const char * getResultErrorAsChars(void) const;
        std::string  getResultErrorAsString(void) const;
        bool  hasAuxPaymentPerYear(void) const;
        MoneyJSON *  getAuxPaymentPerYear(void);
        const MoneyJSON *  getAuxPaymentPerYear(void) const;
        bool  hasAuxTotalPayment(void) const;
        MoneyJSON *  getAuxTotalPayment(void);
        const MoneyJSON *  getAuxTotalPayment(void) const;
        bool  hasAuxInterestFirstYear(void) const;
        MoneyJSON *  getAuxInterestFirstYear(void);
        const MoneyJSON *  getAuxInterestFirstYear(void) const;
        bool  hasAuxInterestLastYear(void) const;
        MoneyJSON *  getAuxInterestLastYear(void);
        const MoneyJSON *  getAuxInterestLastYear(void) const;
        bool  hasAuxInterestTotal(void) const;
        MoneyJSON *  getAuxInterestTotal(void);
        const MoneyJSON *  getAuxInterestTotal(void) const;

        virtual size_t extraTypeNativeDataComponentCount(void) const
          {
            assert(extraKeys.size() == extraValues.size());
            return extraKeys.size();
          }
        virtual const char *extraTypeNativeDataComponentKey(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraKeys[component_num].c_str();
          }
        virtual JSONValue *extraTypeNativeDataComponentValue(size_t component_num)
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        virtual const JSONValue *extraTypeNativeDataComponentValue(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        virtual JSONValue *extraTypeNativeDataLookup(const char *field_name)
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }
        virtual const JSONValue *extraTypeNativeDataLookup(const char *field_name) const
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }

        void setPaymentAmount(MoneyJSON * new_value)
          {
            new_value->add_reference();
            if (flagHasPaymentAmount)
              {
                storePaymentAmount->remove_reference();
              }
            flagHasPaymentAmount = true;
            storePaymentAmount = new_value;
          }
        void unsetPaymentAmount(void)
          {
            if (flagHasPaymentAmount)
              {
                storePaymentAmount->remove_reference();
              }
            flagHasPaymentAmount = false;
          }
        void setTotalInterest(MoneyJSON * new_value)
          {
            new_value->add_reference();
            if (flagHasTotalInterest)
              {
                storeTotalInterest->remove_reference();
              }
            flagHasTotalInterest = true;
            storeTotalInterest = new_value;
          }
        void unsetTotalInterest(void)
          {
            if (flagHasTotalInterest)
              {
                storeTotalInterest->remove_reference();
              }
            flagHasTotalInterest = false;
          }
        void setTotalPaidResult(MoneyJSON * new_value)
          {
            new_value->add_reference();
            if (flagHasTotalPaidResult)
              {
                storeTotalPaidResult->remove_reference();
              }
            flagHasTotalPaidResult = true;
            storeTotalPaidResult = new_value;
          }
        void unsetTotalPaidResult(void)
          {
            if (flagHasTotalPaidResult)
              {
                storeTotalPaidResult->remove_reference();
              }
            flagHasTotalPaidResult = false;
          }
        void setDownPaymentResult(MoneyJSON * new_value)
          {
            new_value->add_reference();
            if (flagHasDownPaymentResult)
              {
                storeDownPaymentResult->remove_reference();
              }
            flagHasDownPaymentResult = true;
            storeDownPaymentResult = new_value;
          }
        void unsetDownPaymentResult(void)
          {
            if (flagHasDownPaymentResult)
              {
                storeDownPaymentResult->remove_reference();
              }
            flagHasDownPaymentResult = false;
          }
        void setDownPaymentPercentResult(double new_value)
          {
            flagHasDownPaymentPercentResult = true;
            if (new_value < 0)
                throw("The value for field DownPaymentPercentResult of TypeNativeDataJSON is less than the lower bound (0) for that field.");
            storeDownPaymentPercentResult = new_value;
            textStoreDownPaymentPercentResult = "";
          }
        void setDownPaymentPercentResultText(std::string new_value)
          {
            flagHasDownPaymentPercentResult = true;
            if (!(JSONWriter::is_valid_number_format(new_value.c_str())))
                throw("The text value for field DownPaymentPercentResult of TypeNativeDataJSON is not a valid number.");
            if (JSONWriter::compare_number_text_to_repeating_fraction(new_value.c_str(), false, "", "", false, "") < 0)
                throw("The value for field DownPaymentPercentResult of TypeNativeDataJSON is less than the lower bound (0) for that field.");
            textStoreDownPaymentPercentResult = new_value;
          }
        void unsetDownPaymentPercentResult(void)
          {
            flagHasDownPaymentPercentResult = false;
          }
        void setNumMonthsResult(OInteger new_value)
          {
            flagHasNumMonthsResult = true;
            if (new_value < 0)
                throw("The value for field NumMonthsResult of TypeNativeDataJSON is less than the lower bound (0) for that field.");
            storeNumMonthsResult = new_value;
          }
        void unsetNumMonthsResult(void)
          {
            flagHasNumMonthsResult = false;
          }
        void setPrincipalPaidResult(MoneyJSON * new_value)
          {
            new_value->add_reference();
            if (flagHasPrincipalPaidResult)
              {
                storePrincipalPaidResult->remove_reference();
              }
            flagHasPrincipalPaidResult = true;
            storePrincipalPaidResult = new_value;
          }
        void unsetPrincipalPaidResult(void)
          {
            if (flagHasPrincipalPaidResult)
              {
                storePrincipalPaidResult->remove_reference();
              }
            flagHasPrincipalPaidResult = false;
          }
        void setPrincipalResult(MoneyJSON * new_value)
          {
            new_value->add_reference();
            if (flagHasPrincipalResult)
              {
                storePrincipalResult->remove_reference();
              }
            flagHasPrincipalResult = true;
            storePrincipalResult = new_value;
          }
        void unsetPrincipalResult(void)
          {
            if (flagHasPrincipalResult)
              {
                storePrincipalResult->remove_reference();
              }
            flagHasPrincipalResult = false;
          }
        void setPrincipalOwingResult(MoneyJSON * new_value)
          {
            new_value->add_reference();
            if (flagHasPrincipalOwingResult)
              {
                storePrincipalOwingResult->remove_reference();
              }
            flagHasPrincipalOwingResult = true;
            storePrincipalOwingResult = new_value;
          }
        void unsetPrincipalOwingResult(void)
          {
            if (flagHasPrincipalOwingResult)
              {
                storePrincipalOwingResult->remove_reference();
              }
            flagHasPrincipalOwingResult = false;
          }
        void setHomeValueResult(MoneyJSON * new_value)
          {
            new_value->add_reference();
            if (flagHasHomeValueResult)
              {
                storeHomeValueResult->remove_reference();
              }
            flagHasHomeValueResult = true;
            storeHomeValueResult = new_value;
          }
        void unsetHomeValueResult(void)
          {
            if (flagHasHomeValueResult)
              {
                storeHomeValueResult->remove_reference();
              }
            flagHasHomeValueResult = false;
          }
        void setInterestRateResult(double new_value)
          {
            flagHasInterestRateResult = true;
            if (new_value < 0)
                throw("The value for field InterestRateResult of TypeNativeDataJSON is less than the lower bound (0) for that field.");
            storeInterestRateResult = new_value;
            textStoreInterestRateResult = "";
          }
        void setInterestRateResultText(std::string new_value)
          {
            flagHasInterestRateResult = true;
            if (!(JSONWriter::is_valid_number_format(new_value.c_str())))
                throw("The text value for field InterestRateResult of TypeNativeDataJSON is not a valid number.");
            if (JSONWriter::compare_number_text_to_repeating_fraction(new_value.c_str(), false, "", "", false, "") < 0)
                throw("The value for field InterestRateResult of TypeNativeDataJSON is less than the lower bound (0) for that field.");
            textStoreInterestRateResult = new_value;
          }
        void unsetInterestRateResult(void)
          {
            flagHasInterestRateResult = false;
          }
        void setMortgageInputData(MortgageCalculatorInputDataJSON * new_value)
          {
            new_value->add_reference();
            if (flagHasMortgageInputData)
              {
                storeMortgageInputData->remove_reference();
              }
            flagHasMortgageInputData = true;
            storeMortgageInputData = new_value;
          }
        void unsetMortgageInputData(void)
          {
            if (flagHasMortgageInputData)
              {
                storeMortgageInputData->remove_reference();
              }
            flagHasMortgageInputData = false;
          }
        void setNotUnderstood(bool new_value)
          {
            flagHasNotUnderstood = true;
            storeNotUnderstood = new_value;
          }
        void unsetNotUnderstood(void)
          {
            flagHasNotUnderstood = false;
          }
        void setResultError(TypeResultError new_value)
          {
            flagHasResultError = true;
            storeResultError = new_value;
          }
        void setResultError(const char *chars)
          {
            TypeResultErrorKnownValues known = stringToResultError(chars);
            TypeResultError new_value;
            if (known == ResultError__none)
              {
                new_value.in_known_list = false;
                new_value.string_value = chars;
              }
            else
              {
                new_value.in_known_list = true;
                new_value.list_value = known;
              }
            setResultError(new_value);
          }
        void setResultError(std::string the_string)
          {
            setResultError(the_string.c_str());
          }
        void setResultError(TypeResultErrorKnownValues new_value)
          {
            TypeResultError new_full_value;
            assert(new_value != ResultError__none);
            new_full_value.in_known_list = true;
            new_full_value.list_value = new_value;
            setResultError(new_full_value);
          }
        void unsetResultError(void)
          {
            flagHasResultError = false;
          }
        void setAuxPaymentPerYear(MoneyJSON * new_value)
          {
            new_value->add_reference();
            if (flagHasAuxPaymentPerYear)
              {
                storeAuxPaymentPerYear->remove_reference();
              }
            flagHasAuxPaymentPerYear = true;
            storeAuxPaymentPerYear = new_value;
          }
        void unsetAuxPaymentPerYear(void)
          {
            if (flagHasAuxPaymentPerYear)
              {
                storeAuxPaymentPerYear->remove_reference();
              }
            flagHasAuxPaymentPerYear = false;
          }
        void setAuxTotalPayment(MoneyJSON * new_value)
          {
            new_value->add_reference();
            if (flagHasAuxTotalPayment)
              {
                storeAuxTotalPayment->remove_reference();
              }
            flagHasAuxTotalPayment = true;
            storeAuxTotalPayment = new_value;
          }
        void unsetAuxTotalPayment(void)
          {
            if (flagHasAuxTotalPayment)
              {
                storeAuxTotalPayment->remove_reference();
              }
            flagHasAuxTotalPayment = false;
          }
        void setAuxInterestFirstYear(MoneyJSON * new_value)
          {
            new_value->add_reference();
            if (flagHasAuxInterestFirstYear)
              {
                storeAuxInterestFirstYear->remove_reference();
              }
            flagHasAuxInterestFirstYear = true;
            storeAuxInterestFirstYear = new_value;
          }
        void unsetAuxInterestFirstYear(void)
          {
            if (flagHasAuxInterestFirstYear)
              {
                storeAuxInterestFirstYear->remove_reference();
              }
            flagHasAuxInterestFirstYear = false;
          }
        void setAuxInterestLastYear(MoneyJSON * new_value)
          {
            new_value->add_reference();
            if (flagHasAuxInterestLastYear)
              {
                storeAuxInterestLastYear->remove_reference();
              }
            flagHasAuxInterestLastYear = true;
            storeAuxInterestLastYear = new_value;
          }
        void unsetAuxInterestLastYear(void)
          {
            if (flagHasAuxInterestLastYear)
              {
                storeAuxInterestLastYear->remove_reference();
              }
            flagHasAuxInterestLastYear = false;
          }
        void setAuxInterestTotal(MoneyJSON * new_value)
          {
            new_value->add_reference();
            if (flagHasAuxInterestTotal)
              {
                storeAuxInterestTotal->remove_reference();
              }
            flagHasAuxInterestTotal = true;
            storeAuxInterestTotal = new_value;
          }
        void unsetAuxInterestTotal(void)
          {
            if (flagHasAuxInterestTotal)
              {
                storeAuxInterestTotal->remove_reference();
              }
            flagHasAuxInterestTotal = false;
          }

        virtual void extraTypeNativeDataAppendPair(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            assert(extraKeys.size() == extraValues.size());
            extraKeys.push_back(key);
            extraValues.push_back(new_component);
            enter_into_string_index(extraIndex, key, new_component);
            new_component->add_reference();
          }
        virtual void extraTypeNativeDataSetField(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            JSONValue *old_field = extraTypeNativeDataLookup(key);
            if (old_field == NULL)
              {
                extraTypeNativeDataAppendPair(key, new_component);
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
            if (flagHasPaymentAmount)
              {
                handler->start_pair("PaymentAmount");
                storePaymentAmount->write_as_json(handler);
              }
            if (flagHasTotalInterest)
              {
                handler->start_pair("TotalInterest");
                storeTotalInterest->write_as_json(handler);
              }
            if (flagHasTotalPaidResult)
              {
                handler->start_pair("TotalPaidResult");
                storeTotalPaidResult->write_as_json(handler);
              }
            if (flagHasDownPaymentResult)
              {
                handler->start_pair("DownPaymentResult");
                storeDownPaymentResult->write_as_json(handler);
              }
            if (flagHasDownPaymentPercentResult)
              {
                handler->start_pair("DownPaymentPercentResult");
                if (textStoreDownPaymentPercentResult != "")
                    handler->number_value(textStoreDownPaymentPercentResult.c_str());
                else if (((double)(long int)storeDownPaymentPercentResult) == storeDownPaymentPercentResult)
                    handler->number_value((long int)storeDownPaymentPercentResult);
                else
                    handler->number_value(storeDownPaymentPercentResult);
              }
            if (flagHasNumMonthsResult)
              {
                handler->start_pair("NumMonthsResult");
                handler->number_value(storeNumMonthsResult.get_o_integer());
              }
            if (flagHasPrincipalPaidResult)
              {
                handler->start_pair("PrincipalPaidResult");
                storePrincipalPaidResult->write_as_json(handler);
              }
            if (flagHasPrincipalResult)
              {
                handler->start_pair("PrincipalResult");
                storePrincipalResult->write_as_json(handler);
              }
            if (flagHasPrincipalOwingResult)
              {
                handler->start_pair("PrincipalOwingResult");
                storePrincipalOwingResult->write_as_json(handler);
              }
            if (flagHasHomeValueResult)
              {
                handler->start_pair("HomeValueResult");
                storeHomeValueResult->write_as_json(handler);
              }
            if (flagHasInterestRateResult)
              {
                handler->start_pair("InterestRateResult");
                if (textStoreInterestRateResult != "")
                    handler->number_value(textStoreInterestRateResult.c_str());
                else if (((double)(long int)storeInterestRateResult) == storeInterestRateResult)
                    handler->number_value((long int)storeInterestRateResult);
                else
                    handler->number_value(storeInterestRateResult);
              }
            assert(flagHasMortgageInputData);
            handler->start_pair("MortgageInputData");
            storeMortgageInputData->write_as_json(handler);
            if (flagHasNotUnderstood)
              {
                handler->start_pair("NotUnderstood");
                handler->boolean_value(storeNotUnderstood);
              }
            if (flagHasResultError)
              {
                handler->start_pair("ResultError");
                if (storeResultError.in_known_list)
                  {
                    switch (storeResultError.list_value)
                      {
                        case ResultError_None:
                            handler->string_value("None");
                            break;
                        case ResultError_AmortizationInfinite:
                            handler->string_value("AmortizationInfinite");
                            break;
                        case ResultError_DownPaymentNegative:
                            handler->string_value("DownPaymentNegative");
                            break;
                        case ResultError_InputVariableConflict:
                            handler->string_value("InputVariableConflict");
                            break;
                        case ResultError_MultipleCurrencies:
                            handler->string_value("MultipleCurrencies");
                            break;
                        case ResultError_DownPaymentExceedsHomeValue:
                            handler->string_value("DownPaymentExceedsHomeValue");
                            break;
                        case ResultError_Precision:
                            handler->string_value("Precision");
                            break;
                        case ResultError_NegativeInput:
                            handler->string_value("NegativeInput");
                            break;
                        default:
                            assert(false);
                      }
                  }
                else
                  {
                            handler->string_value(storeResultError.string_value);
                  }
              }
            if (flagHasAuxPaymentPerYear)
              {
                handler->start_pair("AuxPaymentPerYear");
                storeAuxPaymentPerYear->write_as_json(handler);
              }
            if (flagHasAuxTotalPayment)
              {
                handler->start_pair("AuxTotalPayment");
                storeAuxTotalPayment->write_as_json(handler);
              }
            if (flagHasAuxInterestFirstYear)
              {
                handler->start_pair("AuxInterestFirstYear");
                storeAuxInterestFirstYear->write_as_json(handler);
              }
            if (flagHasAuxInterestLastYear)
              {
                handler->start_pair("AuxInterestLastYear");
                storeAuxInterestLastYear->write_as_json(handler);
              }
            if (flagHasAuxInterestTotal)
              {
                handler->start_pair("AuxInterestTotal");
                storeAuxInterestTotal->write_as_json(handler);
              }
          }
        virtual const char *missing_field_error(void) const
          {
            if (!(hasMortgageInputData()))
              {
                return "When parsing the object for %what%, the \"MortgageInputData\" field was missing.";
              }
            return NULL;
          }

        static TypeNativeDataJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
        static TypeNativeDataJSON *from_text(const char *text, bool ignore_extras = false)
          {
            TypeNativeDataJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeNativeDataJSON>, TypeNativeDataJSON *, bool> generator("Type TypeNativeData", ignore_extras);
                parse_json_value(text, "Text for TypeNativeDataJSON", &generator);
                assert(generator.have_value);
                result = generator.value.referenced();
                result->add_reference();
              };
            result->remove_reference_no_delete();
            return result;
          }
        static TypeNativeDataJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
          {
            TypeNativeDataJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeNativeDataJSON>, TypeNativeDataJSON *, bool> generator("Type TypeNativeData", ignore_extras);
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
            JSONHoldingGenerator<MoneyJSON::Generator, RCHandle<MoneyJSON>, MoneyJSON *, bool > fieldGeneratorPaymentAmount;
            JSONHoldingGenerator<MoneyJSON::Generator, RCHandle<MoneyJSON>, MoneyJSON *, bool > fieldGeneratorTotalInterest;
            JSONHoldingGenerator<MoneyJSON::Generator, RCHandle<MoneyJSON>, MoneyJSON *, bool > fieldGeneratorTotalPaidResult;
            JSONHoldingGenerator<MoneyJSON::Generator, RCHandle<MoneyJSON>, MoneyJSON *, bool > fieldGeneratorDownPaymentResult;
            JSONHoldingGenerator<JSONNumberTextGenerator, std::string, const char * > fieldGeneratorDownPaymentPercentResult;
            static char lowerBoundNumMonthsResult[];
            JSONHoldingGenerator<JSONIntegerLowerBoundOnlyGenerator<lowerBoundNumMonthsResult>, OInteger, o_integer > fieldGeneratorNumMonthsResult;
            JSONHoldingGenerator<MoneyJSON::Generator, RCHandle<MoneyJSON>, MoneyJSON *, bool > fieldGeneratorPrincipalPaidResult;
            JSONHoldingGenerator<MoneyJSON::Generator, RCHandle<MoneyJSON>, MoneyJSON *, bool > fieldGeneratorPrincipalResult;
            JSONHoldingGenerator<MoneyJSON::Generator, RCHandle<MoneyJSON>, MoneyJSON *, bool > fieldGeneratorPrincipalOwingResult;
            JSONHoldingGenerator<MoneyJSON::Generator, RCHandle<MoneyJSON>, MoneyJSON *, bool > fieldGeneratorHomeValueResult;
            JSONHoldingGenerator<JSONNumberTextGenerator, std::string, const char * > fieldGeneratorInterestRateResult;
            JSONHoldingGenerator<MortgageCalculatorInputDataJSON::Generator, RCHandle<MortgageCalculatorInputDataJSON>, MortgageCalculatorInputDataJSON *, bool > fieldGeneratorMortgageInputData;
            JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorNotUnderstood;
        class FieldGeneratorResultError : public JSONStringGenerator
              {
              protected:
                FieldGeneratorResultError(const char *what)
                  {
                    set_what(what);
                  }
                FieldGeneratorResultError(void)
                  {
                  }
                void handle_result(const char *result)
                  {
                    TypeResultErrorKnownValues known = stringToResultError(result);
                    TypeResultError new_value;
                    if (known == ResultError__none)
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
                virtual void handle_result(TypeResultError result) = 0;
              };
            JSONHoldingGenerator<FieldGeneratorResultError, TypeResultError, TypeResultError > fieldGeneratorResultError;
            JSONHoldingGenerator<MoneyJSON::Generator, RCHandle<MoneyJSON>, MoneyJSON *, bool > fieldGeneratorAuxPaymentPerYear;
            JSONHoldingGenerator<MoneyJSON::Generator, RCHandle<MoneyJSON>, MoneyJSON *, bool > fieldGeneratorAuxTotalPayment;
            JSONHoldingGenerator<MoneyJSON::Generator, RCHandle<MoneyJSON>, MoneyJSON *, bool > fieldGeneratorAuxInterestFirstYear;
            JSONHoldingGenerator<MoneyJSON::Generator, RCHandle<MoneyJSON>, MoneyJSON *, bool > fieldGeneratorAuxInterestLastYear;
            JSONHoldingGenerator<MoneyJSON::Generator, RCHandle<MoneyJSON>, MoneyJSON *, bool > fieldGeneratorAuxInterestTotal;
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
                TypeNativeDataJSON *result = new TypeNativeDataJSON();
                assert(result != NULL);
                RCHandle<TypeNativeDataJSON> result_holder = result;
                finish(result);
                size_t extra_count = unknownFieldGenerator.field_names.size();
                assert(extra_count == unknownFieldGenerator.field_values.size());
                for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
                  {
                    result->extraTypeNativeDataAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
                  }
                unknownFieldGenerator.field_names.clear();
                unknownFieldGenerator.field_values.clear();
                destroy_string_index(unknownFieldGenerator.index);
            unknownFieldGenerator.index = create_string_index();
                handle_result(result);
              }
            void finish(TypeNativeDataJSON *result)
              {
                if (fieldGeneratorPaymentAmount.have_value)
                  {
                    result->setPaymentAmount(fieldGeneratorPaymentAmount.value.referenced());
                    fieldGeneratorPaymentAmount.have_value = false;
                  }
                if (fieldGeneratorTotalInterest.have_value)
                  {
                    result->setTotalInterest(fieldGeneratorTotalInterest.value.referenced());
                    fieldGeneratorTotalInterest.have_value = false;
                  }
                if (fieldGeneratorTotalPaidResult.have_value)
                  {
                    result->setTotalPaidResult(fieldGeneratorTotalPaidResult.value.referenced());
                    fieldGeneratorTotalPaidResult.have_value = false;
                  }
                if (fieldGeneratorDownPaymentResult.have_value)
                  {
                    result->setDownPaymentResult(fieldGeneratorDownPaymentResult.value.referenced());
                    fieldGeneratorDownPaymentResult.have_value = false;
                  }
                if (fieldGeneratorDownPaymentPercentResult.have_value)
                  {
                    result->setDownPaymentPercentResultText(fieldGeneratorDownPaymentPercentResult.value);
                    fieldGeneratorDownPaymentPercentResult.have_value = false;
                  }
                if (fieldGeneratorNumMonthsResult.have_value)
                  {
                    result->setNumMonthsResult(fieldGeneratorNumMonthsResult.value);
                    fieldGeneratorNumMonthsResult.have_value = false;
                  }
                if (fieldGeneratorPrincipalPaidResult.have_value)
                  {
                    result->setPrincipalPaidResult(fieldGeneratorPrincipalPaidResult.value.referenced());
                    fieldGeneratorPrincipalPaidResult.have_value = false;
                  }
                if (fieldGeneratorPrincipalResult.have_value)
                  {
                    result->setPrincipalResult(fieldGeneratorPrincipalResult.value.referenced());
                    fieldGeneratorPrincipalResult.have_value = false;
                  }
                if (fieldGeneratorPrincipalOwingResult.have_value)
                  {
                    result->setPrincipalOwingResult(fieldGeneratorPrincipalOwingResult.value.referenced());
                    fieldGeneratorPrincipalOwingResult.have_value = false;
                  }
                if (fieldGeneratorHomeValueResult.have_value)
                  {
                    result->setHomeValueResult(fieldGeneratorHomeValueResult.value.referenced());
                    fieldGeneratorHomeValueResult.have_value = false;
                  }
                if (fieldGeneratorInterestRateResult.have_value)
                  {
                    result->setInterestRateResultText(fieldGeneratorInterestRateResult.value);
                    fieldGeneratorInterestRateResult.have_value = false;
                  }
                if (fieldGeneratorMortgageInputData.have_value)
                  {
                    result->setMortgageInputData(fieldGeneratorMortgageInputData.value.referenced());
                    fieldGeneratorMortgageInputData.have_value = false;
                  }
                else if (!(result->hasMortgageInputData()))
                  {
                    error("When parsing the object for %what%, the \"MortgageInputData\" field was missing.");
                  }
                if (fieldGeneratorNotUnderstood.have_value)
                  {
                    result->setNotUnderstood(fieldGeneratorNotUnderstood.value);
                    fieldGeneratorNotUnderstood.have_value = false;
                  }
                if (fieldGeneratorResultError.have_value)
                  {
                    result->setResultError(fieldGeneratorResultError.value);
                    fieldGeneratorResultError.have_value = false;
                  }
                if (fieldGeneratorAuxPaymentPerYear.have_value)
                  {
                    result->setAuxPaymentPerYear(fieldGeneratorAuxPaymentPerYear.value.referenced());
                    fieldGeneratorAuxPaymentPerYear.have_value = false;
                  }
                if (fieldGeneratorAuxTotalPayment.have_value)
                  {
                    result->setAuxTotalPayment(fieldGeneratorAuxTotalPayment.value.referenced());
                    fieldGeneratorAuxTotalPayment.have_value = false;
                  }
                if (fieldGeneratorAuxInterestFirstYear.have_value)
                  {
                    result->setAuxInterestFirstYear(fieldGeneratorAuxInterestFirstYear.value.referenced());
                    fieldGeneratorAuxInterestFirstYear.have_value = false;
                  }
                if (fieldGeneratorAuxInterestLastYear.have_value)
                  {
                    result->setAuxInterestLastYear(fieldGeneratorAuxInterestLastYear.value.referenced());
                    fieldGeneratorAuxInterestLastYear.have_value = false;
                  }
                if (fieldGeneratorAuxInterestTotal.have_value)
                  {
                    result->setAuxInterestTotal(fieldGeneratorAuxInterestTotal.value.referenced());
                    fieldGeneratorAuxInterestTotal.have_value = false;
                  }
              }
            virtual void handle_result(TypeNativeDataJSON *new_result) = 0;
            virtual JSONHandler *start_known_field(const char *field_name)
              {
                switch ((unsigned char)(field_name[0]))
                  {
                    case 'A':
                        if (strncmp(&(field_name[1]), "ux", 2) == 0)
                          {
                            switch ((unsigned char)(field_name[3]))
                              {
                                case 'I':
                                    if (strncmp(&(field_name[4]), "nterest", 7) == 0)
                                      {
                                        switch ((unsigned char)(field_name[11]))
                                          {
                                            case 'F':
                                                if (strcmp(&(field_name[12]), "irstYear") == 0)
                                                    return &fieldGeneratorAuxInterestFirstYear;
                                                break;
                                            case 'L':
                                                if (strcmp(&(field_name[12]), "astYear") == 0)
                                                    return &fieldGeneratorAuxInterestLastYear;
                                                break;
                                            case 'T':
                                                if (strcmp(&(field_name[12]), "otal") == 0)
                                                    return &fieldGeneratorAuxInterestTotal;
                                                break;
                                            default:
                                                break;
                                          }
                                      }
                                    break;
                                case 'P':
                                    if (strcmp(&(field_name[4]), "aymentPerYear") == 0)
                                        return &fieldGeneratorAuxPaymentPerYear;
                                    break;
                                case 'T':
                                    if (strcmp(&(field_name[4]), "otalPayment") == 0)
                                        return &fieldGeneratorAuxTotalPayment;
                                    break;
                                default:
                                    break;
                              }
                          }
                        break;
                    case 'D':
                        if (strncmp(&(field_name[1]), "ownPayment", 10) == 0)
                          {
                            switch ((unsigned char)(field_name[11]))
                              {
                                case 'P':
                                    if (strcmp(&(field_name[12]), "ercentResult") == 0)
                                        return &fieldGeneratorDownPaymentPercentResult;
                                    break;
                                case 'R':
                                    if (strcmp(&(field_name[12]), "esult") == 0)
                                        return &fieldGeneratorDownPaymentResult;
                                    break;
                                default:
                                    break;
                              }
                          }
                        break;
                    case 'H':
                        if (strcmp(&(field_name[1]), "omeValueResult") == 0)
                            return &fieldGeneratorHomeValueResult;
                        break;
                    case 'I':
                        if (strcmp(&(field_name[1]), "nterestRateResult") == 0)
                            return &fieldGeneratorInterestRateResult;
                        break;
                    case 'M':
                        if (strcmp(&(field_name[1]), "ortgageInputData") == 0)
                            return &fieldGeneratorMortgageInputData;
                        break;
                    case 'N':
                        switch ((unsigned char)(field_name[1]))
                          {
                            case 'o':
                                if (strcmp(&(field_name[2]), "tUnderstood") == 0)
                                    return &fieldGeneratorNotUnderstood;
                                break;
                            case 'u':
                                if (strcmp(&(field_name[2]), "mMonthsResult") == 0)
                                    return &fieldGeneratorNumMonthsResult;
                                break;
                            default:
                                break;
                          }
                        break;
                    case 'P':
                        switch ((unsigned char)(field_name[1]))
                          {
                            case 'a':
                                if (strcmp(&(field_name[2]), "ymentAmount") == 0)
                                    return &fieldGeneratorPaymentAmount;
                                break;
                            case 'r':
                                if (strncmp(&(field_name[2]), "incipal", 7) == 0)
                                  {
                                    switch ((unsigned char)(field_name[9]))
                                      {
                                        case 'O':
                                            if (strcmp(&(field_name[10]), "wingResult") == 0)
                                                return &fieldGeneratorPrincipalOwingResult;
                                            break;
                                        case 'P':
                                            if (strcmp(&(field_name[10]), "aidResult") == 0)
                                                return &fieldGeneratorPrincipalPaidResult;
                                            break;
                                        case 'R':
                                            if (strcmp(&(field_name[10]), "esult") == 0)
                                                return &fieldGeneratorPrincipalResult;
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
                        if (strcmp(&(field_name[1]), "esultError") == 0)
                            return &fieldGeneratorResultError;
                        break;
                    case 'T':
                        if (strncmp(&(field_name[1]), "otal", 4) == 0)
                          {
                            switch ((unsigned char)(field_name[5]))
                              {
                                case 'I':
                                    if (strcmp(&(field_name[6]), "nterest") == 0)
                                        return &fieldGeneratorTotalInterest;
                                    break;
                                case 'P':
                                    if (strcmp(&(field_name[6]), "aidResult") == 0)
                                        return &fieldGeneratorTotalPaidResult;
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
            Generator(bool ignore_extras = false) : fieldGeneratorPaymentAmount("field \"PaymentAmount\" of the TypeNativeData class", ignore_extras), fieldGeneratorTotalInterest("field \"TotalInterest\" of the TypeNativeData class", ignore_extras), fieldGeneratorTotalPaidResult("field \"TotalPaidResult\" of the TypeNativeData class", ignore_extras), fieldGeneratorDownPaymentResult("field \"DownPaymentResult\" of the TypeNativeData class", ignore_extras), fieldGeneratorDownPaymentPercentResult("field \"DownPaymentPercentResult\" of the TypeNativeData class"), fieldGeneratorNumMonthsResult("field \"NumMonthsResult\" of the TypeNativeData class"), fieldGeneratorPrincipalPaidResult("field \"PrincipalPaidResult\" of the TypeNativeData class", ignore_extras), fieldGeneratorPrincipalResult("field \"PrincipalResult\" of the TypeNativeData class", ignore_extras), fieldGeneratorPrincipalOwingResult("field \"PrincipalOwingResult\" of the TypeNativeData class", ignore_extras), fieldGeneratorHomeValueResult("field \"HomeValueResult\" of the TypeNativeData class", ignore_extras), fieldGeneratorInterestRateResult("field \"InterestRateResult\" of the TypeNativeData class"), fieldGeneratorMortgageInputData("field \"MortgageInputData\" of the TypeNativeData class", ignore_extras), fieldGeneratorNotUnderstood("field \"NotUnderstood\" of the TypeNativeData class"), fieldGeneratorResultError("field \"ResultError\" of the TypeNativeData class"), fieldGeneratorAuxPaymentPerYear("field \"AuxPaymentPerYear\" of the TypeNativeData class", ignore_extras), fieldGeneratorAuxTotalPayment("field \"AuxTotalPayment\" of the TypeNativeData class", ignore_extras), fieldGeneratorAuxInterestFirstYear("field \"AuxInterestFirstYear\" of the TypeNativeData class", ignore_extras), fieldGeneratorAuxInterestLastYear("field \"AuxInterestLastYear\" of the TypeNativeData class", ignore_extras), fieldGeneratorAuxInterestTotal("field \"AuxInterestTotal\" of the TypeNativeData class", ignore_extras), unknownFieldGenerator(ignore_extras)
              {
                set_what("the TypeNativeData class");
              }
            ~Generator(void)
              {
              }

            void reset(void)
              {
                fieldGeneratorPaymentAmount.reset();
                fieldGeneratorTotalInterest.reset();
                fieldGeneratorTotalPaidResult.reset();
                fieldGeneratorDownPaymentResult.reset();
                fieldGeneratorDownPaymentPercentResult.reset();
                fieldGeneratorNumMonthsResult.reset();
                fieldGeneratorPrincipalPaidResult.reset();
                fieldGeneratorPrincipalResult.reset();
                fieldGeneratorPrincipalOwingResult.reset();
                fieldGeneratorHomeValueResult.reset();
                fieldGeneratorInterestRateResult.reset();
                fieldGeneratorMortgageInputData.reset();
                fieldGeneratorNotUnderstood.reset();
                fieldGeneratorResultError.reset();
                fieldGeneratorAuxPaymentPerYear.reset();
                fieldGeneratorAuxTotalPayment.reset();
                fieldGeneratorAuxInterestFirstYear.reset();
                fieldGeneratorAuxInterestLastYear.reset();
                fieldGeneratorAuxInterestTotal.reset();
                JSONObjectGenerator::reset();
                unknownFieldGenerator.reset();
              }
          };
      };

  private:
    bool flagHasNativeData;
    TypeNativeDataJSON * storeNativeData;

    MortgageCalculatorShowResultsCommandJSON(const MortgageCalculatorShowResultsCommandJSON &);
    MortgageCalculatorShowResultsCommandJSON & operator=(const MortgageCalculatorShowResultsCommandJSON &other);

    JSONValue * extraNativeDataToJSON(void) const;

    void  fromJSONNativeData(JSONValue *json_value, bool ignore_extras = false);


  public:
    MortgageCalculatorShowResultsCommandJSON(void);
    virtual ~MortgageCalculatorShowResultsCommandJSON(void);
    const char * getMortgageCalculatorCommandKind(void) const;
    bool  hasNativeData(void) const;
    TypeNativeDataJSON *  getNativeData(void);
    const TypeNativeDataJSON *  getNativeData(void) const;

    size_t extraMortgageCalculatorCommandComponentCount(void) const
      {
        size_t result = 0;
        if (flagHasNativeData)
            ++result;
        return result;
      }
    const char *extraMortgageCalculatorCommandComponentKey(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasNativeData)
          {
            if (remainder == 0)
                return "NativeData";
            --remainder;
          }
        assert(false);
        return NULL;
      }
    JSONValue *extraMortgageCalculatorCommandComponentValue(size_t component_num)
      {
        size_t remainder = component_num;
        if (flagHasNativeData)
          {
            if (remainder == 0)
                return extraNativeDataToJSON();
            --remainder;
          }
        assert(false);
        return NULL;
      }
    const JSONValue *extraMortgageCalculatorCommandComponentValue(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasNativeData)
          {
            if (remainder == 0)
                return extraNativeDataToJSON();
            --remainder;
          }
        assert(false);
        return NULL;
      }
    JSONValue *extraMortgageCalculatorCommandLookup(const char *field_name)
      {
        if (strcmp(field_name, "NativeData") == 0)
            return (flagHasNativeData ? extraNativeDataToJSON() : NULL);
        return NULL;
      }
    const JSONValue *extraMortgageCalculatorCommandLookup(const char *field_name) const
      {
        if (strcmp(field_name, "NativeData") == 0)
            return (flagHasNativeData ? extraNativeDataToJSON() : NULL);
        return NULL;
      }

    void setNativeData(TypeNativeDataJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasNativeData)
          {
            storeNativeData->remove_reference();
          }
        flagHasNativeData = true;
        storeNativeData = new_value;
      }
    void unsetNativeData(void)
      {
        if (flagHasNativeData)
          {
            storeNativeData->remove_reference();
          }
        flagHasNativeData = false;
      }

    void extraMortgageCalculatorCommandAppendPair(const char *key, JSONValue *new_component)
      {
        if (strcmp(key, "NativeData") == 0)
            {
            fromJSONNativeData(new_component, false);
            return;
            }
      }
    void extraMortgageCalculatorCommandSetField(const char *key, JSONValue *new_component)
      {
        if (strcmp(key, "NativeData") == 0)
            {
            fromJSONNativeData(new_component, false);
            return;
            }
      }

    virtual void write_as_json(JSONHandler *handler) const
      {
        handler->start_object();
        write_fields_as_json(handler);
        handler->finish_object();
      }

    virtual void write_fields_as_json(JSONHandler *handler) const
      {
        MortgageCalculatorCommandJSON::write_fields_as_json(handler);
        if (flagHasNativeData)
          {
            handler->start_pair("NativeData");
            storeNativeData->write_as_json(handler);
          }
      }
    virtual const char *missing_field_error(void) const
      {
        return NULL;
      }

    static MortgageCalculatorShowResultsCommandJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static MortgageCalculatorShowResultsCommandJSON *from_text(const char *text, bool ignore_extras = false)
      {
        MortgageCalculatorShowResultsCommandJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<MortgageCalculatorShowResultsCommandJSON>, MortgageCalculatorShowResultsCommandJSON *, bool> generator("Type MortgageCalculatorShowResultsCommand", ignore_extras);
            parse_json_value(text, "Text for MortgageCalculatorShowResultsCommandJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static MortgageCalculatorShowResultsCommandJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        MortgageCalculatorShowResultsCommandJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<MortgageCalculatorShowResultsCommandJSON>, MortgageCalculatorShowResultsCommandJSON *, bool> generator("Type MortgageCalculatorShowResultsCommand", ignore_extras);
            parse_json_value(fp, file_name, &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    class Generator : public MortgageCalculatorCommandJSON::Generator
      {
      private:
        JSONHoldingGenerator<TypeNativeDataJSON::Generator, RCHandle<TypeNativeDataJSON>, TypeNativeDataJSON *, bool > fieldGeneratorNativeData;


      protected:
        void start(void)
          {
          }
        JSONHandler *start_field(const char *field_name)
          {
            JSONHandler *result = start_known_field(field_name);
            if (result != NULL)
                return result;
            std::string message("");
            message = message + "Field \"" + field_name + "\" found for a type that doesn't allow extra fields.";
            char *message_chars = (char *)(malloc(strlen(message.c_str()) + 1));
            strcpy(message_chars, message.c_str());
            throw(message_chars);
          }
        void finish_field(const char *field_name, JSONHandler *field_handler)
          {
          }
        void finish(void)
          {
            if (!(strcmp(getMortgageCalculatorCommandJSONKey().c_str(), "MortgageCalculatorShowResultsCommand") == 0))
                throw("The key field has a value other than `MortgageCalculatorShowResultsCommand'.");
            MortgageCalculatorShowResultsCommandJSON *result = new MortgageCalculatorShowResultsCommandJSON();
            assert(result != NULL);
            RCHandle<MortgageCalculatorShowResultsCommandJSON> result_holder = result;
            finish(result);
            handle_result(result);
          }
        void handle_result(MortgageCalculatorCommandJSON *new_result)
          {
            handle_result((MortgageCalculatorShowResultsCommandJSON *)new_result);
          }
        void finish(MortgageCalculatorShowResultsCommandJSON *result)
          {
            if (fieldGeneratorNativeData.have_value)
              {
                result->setNativeData(fieldGeneratorNativeData.value.referenced());
                fieldGeneratorNativeData.have_value = false;
              }
            MortgageCalculatorCommandJSON::Generator::finish(result);
          }
        virtual void handle_result(MortgageCalculatorShowResultsCommandJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            if (strcmp(field_name, "NativeData") == 0)
                return &fieldGeneratorNativeData;
            return MortgageCalculatorCommandJSON::Generator::start_known_field(field_name);
          }

      public:
        Generator(bool ignore_extras = false) : MortgageCalculatorCommandJSON::Generator(ignore_extras), fieldGeneratorNativeData("field \"NativeData\" of the MortgageCalculatorShowResultsCommand class", ignore_extras)
          {
            set_what("the MortgageCalculatorShowResultsCommand class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorNativeData.reset();
            MortgageCalculatorCommandJSON::Generator::reset();
          }
      };
  };

#endif /* MORTGAGECALCULATORSHOWRESULTSCOMMANDJSON_H */
