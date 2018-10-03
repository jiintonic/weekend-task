/* file "TipCalculatorShowResultsCommandJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "TipCalculatorShowResultsCommandJSON.h"

#include "TipCalculatorShowResultsCommandJSON.h"


TipCalculatorShowResultsCommandJSON::TypeNativeDataJSON::TypeNativeDataJSON(const TypeNativeDataJSON &)
  {
    assert(false);
  }

TipCalculatorShowResultsCommandJSON::TypeNativeDataJSON &TipCalculatorShowResultsCommandJSON::TypeNativeDataJSON::operator=(const TypeNativeDataJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void TipCalculatorShowResultsCommandJSON::TypeNativeDataJSON::fromJSONTipCalculatorInputData(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TipCalculatorInputDataJSON *convert_classy = TipCalculatorInputDataJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setTipCalculatorInputData(convert_classy);
    convert_classy->remove_reference();
  }

void TipCalculatorShowResultsCommandJSON::TypeNativeDataJSON::fromJSONTipPercentageResult(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field TipPercentageResult of TypeNativeDataJSON is not a number.");
          }
      }
    setTipPercentageResultText(the_rational_text);
  }

void TipCalculatorShowResultsCommandJSON::TypeNativeDataJSON::fromJSONTipAmountResult(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    MoneyJSON *convert_classy = MoneyJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setTipAmountResult(convert_classy);
    convert_classy->remove_reference();
  }

void TipCalculatorShowResultsCommandJSON::TypeNativeDataJSON::fromJSONStandardTipPercentages(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field StandardTipPercentages of TypeNativeDataJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    if (count1 < 1)
        throw("The value for field StandardTipPercentages of TypeNativeDataJSON has too few elements.");
    std::vector< double > vector_StandardTipPercentages1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        const JSONRationalValue *json_rational = json_array1->component(num1)->rational_value();
        double the_double;
        if (json_rational != NULL)
          {
            the_double = json_rational->getDouble();
          }
        else
          {
            const JSONIntegerValue *json_integer = json_array1->component(num1)->integer_value();
            if (json_integer != NULL)
              {
                the_double = json_integer->getLongInt();
              }
            else
              {
                throw("The value for an element of field StandardTipPercentages of TypeNativeDataJSON is not a number.");
              }
          }
        vector_StandardTipPercentages1[num1] = the_double;
      }
    assert(vector_StandardTipPercentages1.size() >= 1);
    initStandardTipPercentages();
    for (size_t num3 = 0; num3 < vector_StandardTipPercentages1.size(); ++num3)
        appendStandardTipPercentages(vector_StandardTipPercentages1[num3]);
    for (size_t num1 = 0; num1 < vector_StandardTipPercentages1.size(); ++num1)
      {
      }
  }

void TipCalculatorShowResultsCommandJSON::TypeNativeDataJSON::fromJSONStandardTipAmounts(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field StandardTipAmounts of TypeNativeDataJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    if (count1 < 1)
        throw("The value for field StandardTipAmounts of TypeNativeDataJSON has too few elements.");
    std::vector< MoneyJSON * > vector_StandardTipAmounts1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        MoneyJSON *convert_classy = MoneyJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_StandardTipAmounts1[num1] = convert_classy;
      }
    assert(vector_StandardTipAmounts1.size() >= 1);
    initStandardTipAmounts();
    for (size_t num4 = 0; num4 < vector_StandardTipAmounts1.size(); ++num4)
        appendStandardTipAmounts(vector_StandardTipAmounts1[num4]);
    for (size_t num1 = 0; num1 < vector_StandardTipAmounts1.size(); ++num1)
      {
        vector_StandardTipAmounts1[num1]->remove_reference();
      }
  }

void TipCalculatorShowResultsCommandJSON::TypeNativeDataJSON::fromJSONUsingStandardTip(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field UsingStandardTip of TypeNativeDataJSON is not true for false.");
          }
      }
    setUsingStandardTip(the_bool);
  }

void TipCalculatorShowResultsCommandJSON::TypeNativeDataJSON::fromJSONTotalAmountResult(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    MoneyJSON *convert_classy = MoneyJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setTotalAmountResult(convert_classy);
    convert_classy->remove_reference();
  }

void TipCalculatorShowResultsCommandJSON::TypeNativeDataJSON::fromJSONShareOfTotal(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    MoneyJSON *convert_classy = MoneyJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setShareOfTotal(convert_classy);
    convert_classy->remove_reference();
  }

void TipCalculatorShowResultsCommandJSON::TypeNativeDataJSON::fromJSONShareOfTip(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    MoneyJSON *convert_classy = MoneyJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setShareOfTip(convert_classy);
    convert_classy->remove_reference();
  }

void TipCalculatorShowResultsCommandJSON::TypeNativeDataJSON::fromJSONNotUnderstood(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field NotUnderstood of TypeNativeDataJSON is not true for false.");
          }
      }
    setNotUnderstood(the_bool);
  }

void TipCalculatorShowResultsCommandJSON::TypeNativeDataJSON::fromJSONResultError(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field ResultError of TypeNativeDataJSON is not a string.");
    setResultError(std::string(json_string->getData()));
  }

TipCalculatorShowResultsCommandJSON::TypeNativeDataJSON::TypeNativeDataJSON(void) :
        flagHasTipCalculatorInputData(false),
        flagHasTipPercentageResult(false),
        flagHasTipAmountResult(false),
        flagHasStandardTipPercentages(false),
        flagHasStandardTipAmounts(false),
        flagHasUsingStandardTip(false),
        flagHasTotalAmountResult(false),
        flagHasShareOfTotal(false),
        flagHasShareOfTip(false),
        flagHasNotUnderstood(false),
        flagHasResultError(false)
  {
    extraIndex = create_string_index();
  }

TipCalculatorShowResultsCommandJSON::TypeNativeDataJSON::~TypeNativeDataJSON(void)
  {
    if (flagHasTipCalculatorInputData)
      {
        storeTipCalculatorInputData->remove_reference();
      }
    if (flagHasTipAmountResult)
      {
        storeTipAmountResult->remove_reference();
      }
    if (flagHasStandardTipAmounts)
      {
        for (size_t num4 = 0; num4 < storeStandardTipAmounts.size(); ++num4)
          {
            storeStandardTipAmounts[num4]->remove_reference();
          }
      }
    if (flagHasTotalAmountResult)
      {
        storeTotalAmountResult->remove_reference();
      }
    if (flagHasShareOfTotal)
      {
        storeShareOfTotal->remove_reference();
      }
    if (flagHasShareOfTip)
      {
        storeShareOfTip->remove_reference();
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool TipCalculatorShowResultsCommandJSON::TypeNativeDataJSON::hasTipCalculatorInputData(void) const
  {
    return flagHasTipCalculatorInputData;
  }

TipCalculatorInputDataJSON * TipCalculatorShowResultsCommandJSON::TypeNativeDataJSON::getTipCalculatorInputData(void)
  {
    assert(flagHasTipCalculatorInputData);
    return storeTipCalculatorInputData;
  }

const TipCalculatorInputDataJSON * TipCalculatorShowResultsCommandJSON::TypeNativeDataJSON::getTipCalculatorInputData(void) const
  {
    assert(flagHasTipCalculatorInputData);
    return storeTipCalculatorInputData;
  }

bool TipCalculatorShowResultsCommandJSON::TypeNativeDataJSON::hasTipPercentageResult(void) const
  {
    return flagHasTipPercentageResult;
  }

double TipCalculatorShowResultsCommandJSON::TypeNativeDataJSON::getTipPercentageResult(void)
  {
    assert(flagHasTipPercentageResult);
    if (textStoreTipPercentageResult != "")
      {
        return atof(textStoreTipPercentageResult.c_str());
      }
    return storeTipPercentageResult;
  }

const double TipCalculatorShowResultsCommandJSON::TypeNativeDataJSON::getTipPercentageResult(void) const
  {
    assert(flagHasTipPercentageResult);
    if (textStoreTipPercentageResult != "")
      {
        return atof(textStoreTipPercentageResult.c_str());
      }
    return storeTipPercentageResult;
  }

std::string TipCalculatorShowResultsCommandJSON::TypeNativeDataJSON::getTipPercentageResultAsText(void) const
  {
    assert(flagHasTipPercentageResult);
    if (textStoreTipPercentageResult == "")
      {
        char buffer[100];
        sprintf(&(buffer[0]), "%g", storeTipPercentageResult);
        return &(buffer[0]);
      }
    else
      {
        return (textStoreTipPercentageResult);
      }
  }

bool TipCalculatorShowResultsCommandJSON::TypeNativeDataJSON::hasTipAmountResult(void) const
  {
    return flagHasTipAmountResult;
  }

MoneyJSON * TipCalculatorShowResultsCommandJSON::TypeNativeDataJSON::getTipAmountResult(void)
  {
    assert(flagHasTipAmountResult);
    return storeTipAmountResult;
  }

const MoneyJSON * TipCalculatorShowResultsCommandJSON::TypeNativeDataJSON::getTipAmountResult(void) const
  {
    assert(flagHasTipAmountResult);
    return storeTipAmountResult;
  }

bool TipCalculatorShowResultsCommandJSON::TypeNativeDataJSON::hasStandardTipPercentages(void) const
  {
    return flagHasStandardTipPercentages;
  }

size_t TipCalculatorShowResultsCommandJSON::TypeNativeDataJSON::countOfStandardTipPercentages(void) const
  {
    assert(flagHasStandardTipPercentages);
    return storeStandardTipPercentages.size();
  }

double TipCalculatorShowResultsCommandJSON::TypeNativeDataJSON::elementOfStandardTipPercentages(size_t element_num)
  {
    assert(flagHasStandardTipPercentages);
    return storeStandardTipPercentages[element_num];
  }

const double TipCalculatorShowResultsCommandJSON::TypeNativeDataJSON::elementOfStandardTipPercentages(size_t element_num) const
  {
    assert(flagHasStandardTipPercentages);
    return storeStandardTipPercentages[element_num];
  }

std::vector< double > TipCalculatorShowResultsCommandJSON::TypeNativeDataJSON::getStandardTipPercentages(void)
  {
    assert(flagHasStandardTipPercentages);
    return storeStandardTipPercentages;
  }

const std::vector< double > TipCalculatorShowResultsCommandJSON::TypeNativeDataJSON::getStandardTipPercentages(void) const
  {
    assert(flagHasStandardTipPercentages);
    return storeStandardTipPercentages;
  }

bool TipCalculatorShowResultsCommandJSON::TypeNativeDataJSON::hasStandardTipAmounts(void) const
  {
    return flagHasStandardTipAmounts;
  }

size_t TipCalculatorShowResultsCommandJSON::TypeNativeDataJSON::countOfStandardTipAmounts(void) const
  {
    assert(flagHasStandardTipAmounts);
    return storeStandardTipAmounts.size();
  }

MoneyJSON * TipCalculatorShowResultsCommandJSON::TypeNativeDataJSON::elementOfStandardTipAmounts(size_t element_num)
  {
    assert(flagHasStandardTipAmounts);
    return storeStandardTipAmounts[element_num];
  }

const MoneyJSON * TipCalculatorShowResultsCommandJSON::TypeNativeDataJSON::elementOfStandardTipAmounts(size_t element_num) const
  {
    assert(flagHasStandardTipAmounts);
    return storeStandardTipAmounts[element_num];
  }

std::vector< MoneyJSON * > TipCalculatorShowResultsCommandJSON::TypeNativeDataJSON::getStandardTipAmounts(void)
  {
    assert(flagHasStandardTipAmounts);
    return storeStandardTipAmounts;
  }

const std::vector< MoneyJSON * > TipCalculatorShowResultsCommandJSON::TypeNativeDataJSON::getStandardTipAmounts(void) const
  {
    assert(flagHasStandardTipAmounts);
    return storeStandardTipAmounts;
  }

bool TipCalculatorShowResultsCommandJSON::TypeNativeDataJSON::hasUsingStandardTip(void) const
  {
    return flagHasUsingStandardTip;
  }

bool TipCalculatorShowResultsCommandJSON::TypeNativeDataJSON::getUsingStandardTip(void)
  {
    assert(flagHasUsingStandardTip);
    return storeUsingStandardTip;
  }

const bool TipCalculatorShowResultsCommandJSON::TypeNativeDataJSON::getUsingStandardTip(void) const
  {
    assert(flagHasUsingStandardTip);
    return storeUsingStandardTip;
  }

bool TipCalculatorShowResultsCommandJSON::TypeNativeDataJSON::hasTotalAmountResult(void) const
  {
    return flagHasTotalAmountResult;
  }

MoneyJSON * TipCalculatorShowResultsCommandJSON::TypeNativeDataJSON::getTotalAmountResult(void)
  {
    assert(flagHasTotalAmountResult);
    return storeTotalAmountResult;
  }

const MoneyJSON * TipCalculatorShowResultsCommandJSON::TypeNativeDataJSON::getTotalAmountResult(void) const
  {
    assert(flagHasTotalAmountResult);
    return storeTotalAmountResult;
  }

bool TipCalculatorShowResultsCommandJSON::TypeNativeDataJSON::hasShareOfTotal(void) const
  {
    return flagHasShareOfTotal;
  }

MoneyJSON * TipCalculatorShowResultsCommandJSON::TypeNativeDataJSON::getShareOfTotal(void)
  {
    assert(flagHasShareOfTotal);
    return storeShareOfTotal;
  }

const MoneyJSON * TipCalculatorShowResultsCommandJSON::TypeNativeDataJSON::getShareOfTotal(void) const
  {
    assert(flagHasShareOfTotal);
    return storeShareOfTotal;
  }

bool TipCalculatorShowResultsCommandJSON::TypeNativeDataJSON::hasShareOfTip(void) const
  {
    return flagHasShareOfTip;
  }

MoneyJSON * TipCalculatorShowResultsCommandJSON::TypeNativeDataJSON::getShareOfTip(void)
  {
    assert(flagHasShareOfTip);
    return storeShareOfTip;
  }

const MoneyJSON * TipCalculatorShowResultsCommandJSON::TypeNativeDataJSON::getShareOfTip(void) const
  {
    assert(flagHasShareOfTip);
    return storeShareOfTip;
  }

bool TipCalculatorShowResultsCommandJSON::TypeNativeDataJSON::hasNotUnderstood(void) const
  {
    return flagHasNotUnderstood;
  }

bool TipCalculatorShowResultsCommandJSON::TypeNativeDataJSON::getNotUnderstood(void)
  {
    assert(flagHasNotUnderstood);
    return storeNotUnderstood;
  }

const bool TipCalculatorShowResultsCommandJSON::TypeNativeDataJSON::getNotUnderstood(void) const
  {
    assert(flagHasNotUnderstood);
    return storeNotUnderstood;
  }

bool TipCalculatorShowResultsCommandJSON::TypeNativeDataJSON::hasResultError(void) const
  {
    return flagHasResultError;
  }

std::string TipCalculatorShowResultsCommandJSON::TypeNativeDataJSON::getResultError(void)
  {
    assert(flagHasResultError);
    return storeResultError;
  }

const std::string TipCalculatorShowResultsCommandJSON::TypeNativeDataJSON::getResultError(void) const
  {
    assert(flagHasResultError);
    return storeResultError;
  }

TipCalculatorShowResultsCommandJSON::TipCalculatorShowResultsCommandJSON(const TipCalculatorShowResultsCommandJSON &)
  {
    assert(false);
  }

TipCalculatorShowResultsCommandJSON &TipCalculatorShowResultsCommandJSON::operator=(const TipCalculatorShowResultsCommandJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *TipCalculatorShowResultsCommandJSON::extraNativeDataToJSON(void) const
  {
    JSONValueHandler handler_NativeData;
    storeNativeData->write_as_json(&handler_NativeData);
    handler_NativeData.result->add_reference();
    return handler_NativeData.result;
  }

void TipCalculatorShowResultsCommandJSON::fromJSONNativeData(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TypeNativeDataJSON *convert_classy = TypeNativeDataJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setNativeData(convert_classy);
    convert_classy->remove_reference();
  }

TipCalculatorShowResultsCommandJSON::TipCalculatorShowResultsCommandJSON(void) :
        flagHasNativeData(false)
  {
    extraIndex = create_string_index();
  }

TipCalculatorShowResultsCommandJSON::~TipCalculatorShowResultsCommandJSON(void)
  {
    if (flagHasNativeData)
      {
        storeNativeData->remove_reference();
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *TipCalculatorShowResultsCommandJSON::getTipCalculatorCommandKind(void) const
  {
    return "TipCalculatorShowResultsCommand";
  }

bool TipCalculatorShowResultsCommandJSON::hasNativeData(void) const
  {
    return flagHasNativeData;
  }

TipCalculatorShowResultsCommandJSON::TypeNativeDataJSON * TipCalculatorShowResultsCommandJSON::getNativeData(void)
  {
    assert(flagHasNativeData);
    return storeNativeData;
  }

const TipCalculatorShowResultsCommandJSON::TypeNativeDataJSON * TipCalculatorShowResultsCommandJSON::getNativeData(void) const
  {
    assert(flagHasNativeData);
    return storeNativeData;
  }

TipCalculatorShowResultsCommandJSON::TypeNativeDataJSON *TipCalculatorShowResultsCommandJSON::TypeNativeDataJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    TypeNativeDataJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<TypeNativeDataJSON>, TypeNativeDataJSON *, bool> generator("Type TypeNativeData", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
TipCalculatorShowResultsCommandJSON *TipCalculatorShowResultsCommandJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    TipCalculatorShowResultsCommandJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<TipCalculatorShowResultsCommandJSON>, TipCalculatorShowResultsCommandJSON *, bool> generator("Type TipCalculatorShowResultsCommand", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
