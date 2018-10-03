/* file "MortgageCalculatorShowResultsCommandJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "MortgageCalculatorShowResultsCommandJSON.h"

#include "MortgageCalculatorShowResultsCommandJSON.h"


MortgageCalculatorShowResultsCommandJSON::TypeNativeDataJSON::TypeResultError::TypeResultError(void)
  {
  }

MortgageCalculatorShowResultsCommandJSON::TypeNativeDataJSON::TypeResultError::TypeResultError(const TypeResultError &other) : in_known_list(other.in_known_list)
  {
    if (in_known_list)
        list_value = other.list_value;
    else
        string_value = other.string_value;
  }

MortgageCalculatorShowResultsCommandJSON::TypeNativeDataJSON::TypeResultError::TypeResultError(TypeResultErrorKnownValues other) : in_known_list(true), list_value(other)

  {
  }

bool MortgageCalculatorShowResultsCommandJSON::TypeNativeDataJSON::TypeResultError::operator==(const TypeResultError &other) const
  {
    if (in_known_list != other.in_known_list)
        return false;
    if (in_known_list)
        return list_value == other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) == 0);
  }

bool MortgageCalculatorShowResultsCommandJSON::TypeNativeDataJSON::TypeResultError::operator!=(const TypeResultError &other) const
  {
    return !(operator==(other));
  }

bool MortgageCalculatorShowResultsCommandJSON::TypeNativeDataJSON::TypeResultError::operator<(const TypeResultError &other) const
  {
    if (in_known_list != other.in_known_list)
        return in_known_list;
    if (in_known_list)
        return list_value < other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) < 0);
  }

bool MortgageCalculatorShowResultsCommandJSON::TypeNativeDataJSON::TypeResultError::operator>(const TypeResultError &other) const
  {
    return other.operator<(*this);
  }

bool MortgageCalculatorShowResultsCommandJSON::TypeNativeDataJSON::TypeResultError::operator>=(const TypeResultError &other) const
  {
    return !(operator<(other));
  }

bool MortgageCalculatorShowResultsCommandJSON::TypeNativeDataJSON::TypeResultError::operator<=(const TypeResultError &other) const
  {
    return !(other.operator<(*this));
  }

MortgageCalculatorShowResultsCommandJSON::TypeNativeDataJSON::TypeResultErrorKnownValues MortgageCalculatorShowResultsCommandJSON::TypeNativeDataJSON::stringToResultError(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'A':
            if (strcmp(&(chars[1]), "mortizationInfinite") == 0)
                return ResultError_AmortizationInfinite;
            break;
        case 'D':
            if (strncmp(&(chars[1]), "ownPayment", 10) == 0)
              {
                switch ((unsigned char)(chars[11]))
                  {
                    case 'E':
                        if (strcmp(&(chars[12]), "xceedsHomeValue") == 0)
                            return ResultError_DownPaymentExceedsHomeValue;
                        break;
                    case 'N':
                        if (strcmp(&(chars[12]), "egative") == 0)
                            return ResultError_DownPaymentNegative;
                        break;
                    default:
                        break;
                  }
              }
            break;
        case 'I':
            if (strcmp(&(chars[1]), "nputVariableConflict") == 0)
                return ResultError_InputVariableConflict;
            break;
        case 'M':
            if (strcmp(&(chars[1]), "ultipleCurrencies") == 0)
                return ResultError_MultipleCurrencies;
            break;
        case 'N':
            switch ((unsigned char)(chars[1]))
              {
                case 'e':
                    if (strcmp(&(chars[2]), "gativeInput") == 0)
                        return ResultError_NegativeInput;
                    break;
                case 'o':
                    if (strcmp(&(chars[2]), "ne") == 0)
                        return ResultError_None;
                    break;
                default:
                    break;
              }
            break;
        case 'P':
            if (strcmp(&(chars[1]), "recision") == 0)
                return ResultError_Precision;
            break;
        default:
            break;
      }
    return ResultError__none;
  }

const char *MortgageCalculatorShowResultsCommandJSON::TypeNativeDataJSON::stringFromResultError(TypeResultErrorKnownValues the_enum)
  {
    switch (the_enum)
      {
        case ResultError_None:
            return "None";
        case ResultError_AmortizationInfinite:
            return "AmortizationInfinite";
        case ResultError_DownPaymentNegative:
            return "DownPaymentNegative";
        case ResultError_InputVariableConflict:
            return "InputVariableConflict";
        case ResultError_MultipleCurrencies:
            return "MultipleCurrencies";
        case ResultError_DownPaymentExceedsHomeValue:
            return "DownPaymentExceedsHomeValue";
        case ResultError_Precision:
            return "Precision";
        case ResultError_NegativeInput:
            return "NegativeInput";
        default:
            assert(false);
            return NULL;
      }
  }

MortgageCalculatorShowResultsCommandJSON::TypeNativeDataJSON::TypeNativeDataJSON(const TypeNativeDataJSON &)
  {
    assert(false);
  }

MortgageCalculatorShowResultsCommandJSON::TypeNativeDataJSON &MortgageCalculatorShowResultsCommandJSON::TypeNativeDataJSON::operator=(const TypeNativeDataJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void MortgageCalculatorShowResultsCommandJSON::TypeNativeDataJSON::fromJSONPaymentAmount(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    MoneyJSON *convert_classy = MoneyJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setPaymentAmount(convert_classy);
    convert_classy->remove_reference();
  }

void MortgageCalculatorShowResultsCommandJSON::TypeNativeDataJSON::fromJSONTotalInterest(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    MoneyJSON *convert_classy = MoneyJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setTotalInterest(convert_classy);
    convert_classy->remove_reference();
  }

void MortgageCalculatorShowResultsCommandJSON::TypeNativeDataJSON::fromJSONTotalPaidResult(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    MoneyJSON *convert_classy = MoneyJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setTotalPaidResult(convert_classy);
    convert_classy->remove_reference();
  }

void MortgageCalculatorShowResultsCommandJSON::TypeNativeDataJSON::fromJSONDownPaymentResult(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    MoneyJSON *convert_classy = MoneyJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setDownPaymentResult(convert_classy);
    convert_classy->remove_reference();
  }

void MortgageCalculatorShowResultsCommandJSON::TypeNativeDataJSON::fromJSONDownPaymentPercentResult(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field DownPaymentPercentResult of TypeNativeDataJSON is not a number.");
          }
      }
    setDownPaymentPercentResultText(the_rational_text);
  }

void MortgageCalculatorShowResultsCommandJSON::TypeNativeDataJSON::fromJSONNumMonthsResult(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field NumMonthsResult of TypeNativeDataJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field NumMonthsResult of TypeNativeDataJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setNumMonthsResult(extracted_integer);
  }

void MortgageCalculatorShowResultsCommandJSON::TypeNativeDataJSON::fromJSONPrincipalPaidResult(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    MoneyJSON *convert_classy = MoneyJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setPrincipalPaidResult(convert_classy);
    convert_classy->remove_reference();
  }

void MortgageCalculatorShowResultsCommandJSON::TypeNativeDataJSON::fromJSONPrincipalResult(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    MoneyJSON *convert_classy = MoneyJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setPrincipalResult(convert_classy);
    convert_classy->remove_reference();
  }

void MortgageCalculatorShowResultsCommandJSON::TypeNativeDataJSON::fromJSONPrincipalOwingResult(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    MoneyJSON *convert_classy = MoneyJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setPrincipalOwingResult(convert_classy);
    convert_classy->remove_reference();
  }

void MortgageCalculatorShowResultsCommandJSON::TypeNativeDataJSON::fromJSONHomeValueResult(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    MoneyJSON *convert_classy = MoneyJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setHomeValueResult(convert_classy);
    convert_classy->remove_reference();
  }

void MortgageCalculatorShowResultsCommandJSON::TypeNativeDataJSON::fromJSONInterestRateResult(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field InterestRateResult of TypeNativeDataJSON is not a number.");
          }
      }
    setInterestRateResultText(the_rational_text);
  }

void MortgageCalculatorShowResultsCommandJSON::TypeNativeDataJSON::fromJSONMortgageInputData(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    MortgageCalculatorInputDataJSON *convert_classy = MortgageCalculatorInputDataJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setMortgageInputData(convert_classy);
    convert_classy->remove_reference();
  }

void MortgageCalculatorShowResultsCommandJSON::TypeNativeDataJSON::fromJSONNotUnderstood(JSONValue *json_value, bool ignore_extras)
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

void MortgageCalculatorShowResultsCommandJSON::TypeNativeDataJSON::fromJSONResultError(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field ResultError of TypeNativeDataJSON is not a string.");
    TypeResultError the_open_enum;
    switch ((unsigned char)(json_string->getData()[0]))
      {
        case 'A':
            if (strcmp(&(json_string->getData()[1]), "mortizationInfinite") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = ResultError_AmortizationInfinite;
                    goto open_enum_is_done;
                  }
            break;
        case 'D':
            if (strncmp(&(json_string->getData()[1]), "ownPayment", 10) == 0)
              {
                switch ((unsigned char)(json_string->getData()[11]))
                  {
                    case 'E':
                        if (strcmp(&(json_string->getData()[12]), "xceedsHomeValue") == 0)
                              {
                                the_open_enum.in_known_list = true;
                                the_open_enum.list_value = ResultError_DownPaymentExceedsHomeValue;
                                goto open_enum_is_done;
                              }
                        break;
                    case 'N':
                        if (strcmp(&(json_string->getData()[12]), "egative") == 0)
                              {
                                the_open_enum.in_known_list = true;
                                the_open_enum.list_value = ResultError_DownPaymentNegative;
                                goto open_enum_is_done;
                              }
                        break;
                    default:
                        break;
                  }
              }
            break;
        case 'I':
            if (strcmp(&(json_string->getData()[1]), "nputVariableConflict") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = ResultError_InputVariableConflict;
                    goto open_enum_is_done;
                  }
            break;
        case 'M':
            if (strcmp(&(json_string->getData()[1]), "ultipleCurrencies") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = ResultError_MultipleCurrencies;
                    goto open_enum_is_done;
                  }
            break;
        case 'N':
            switch ((unsigned char)(json_string->getData()[1]))
              {
                case 'e':
                    if (strcmp(&(json_string->getData()[2]), "gativeInput") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = ResultError_NegativeInput;
                            goto open_enum_is_done;
                          }
                    break;
                case 'o':
                    if (strcmp(&(json_string->getData()[2]), "ne") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = ResultError_None;
                            goto open_enum_is_done;
                          }
                    break;
                default:
                    break;
              }
            break;
        case 'P':
            if (strcmp(&(json_string->getData()[1]), "recision") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = ResultError_Precision;
                    goto open_enum_is_done;
                  }
            break;
        default:
            break;
      }
    the_open_enum.in_known_list = false;
    the_open_enum.string_value = json_string->getData();
  open_enum_is_done:;
    setResultError(the_open_enum);
  }

void MortgageCalculatorShowResultsCommandJSON::TypeNativeDataJSON::fromJSONAuxPaymentPerYear(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    MoneyJSON *convert_classy = MoneyJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setAuxPaymentPerYear(convert_classy);
    convert_classy->remove_reference();
  }

void MortgageCalculatorShowResultsCommandJSON::TypeNativeDataJSON::fromJSONAuxTotalPayment(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    MoneyJSON *convert_classy = MoneyJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setAuxTotalPayment(convert_classy);
    convert_classy->remove_reference();
  }

void MortgageCalculatorShowResultsCommandJSON::TypeNativeDataJSON::fromJSONAuxInterestFirstYear(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    MoneyJSON *convert_classy = MoneyJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setAuxInterestFirstYear(convert_classy);
    convert_classy->remove_reference();
  }

void MortgageCalculatorShowResultsCommandJSON::TypeNativeDataJSON::fromJSONAuxInterestLastYear(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    MoneyJSON *convert_classy = MoneyJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setAuxInterestLastYear(convert_classy);
    convert_classy->remove_reference();
  }

void MortgageCalculatorShowResultsCommandJSON::TypeNativeDataJSON::fromJSONAuxInterestTotal(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    MoneyJSON *convert_classy = MoneyJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setAuxInterestTotal(convert_classy);
    convert_classy->remove_reference();
  }

MortgageCalculatorShowResultsCommandJSON::TypeNativeDataJSON::TypeNativeDataJSON(void) :
        flagHasPaymentAmount(false),
        flagHasTotalInterest(false),
        flagHasTotalPaidResult(false),
        flagHasDownPaymentResult(false),
        flagHasDownPaymentPercentResult(false),
        flagHasNumMonthsResult(false),
        flagHasPrincipalPaidResult(false),
        flagHasPrincipalResult(false),
        flagHasPrincipalOwingResult(false),
        flagHasHomeValueResult(false),
        flagHasInterestRateResult(false),
        flagHasMortgageInputData(false),
        flagHasNotUnderstood(false),
        flagHasResultError(false),
        flagHasAuxPaymentPerYear(false),
        flagHasAuxTotalPayment(false),
        flagHasAuxInterestFirstYear(false),
        flagHasAuxInterestLastYear(false),
        flagHasAuxInterestTotal(false)
  {
    extraIndex = create_string_index();
  }

MortgageCalculatorShowResultsCommandJSON::TypeNativeDataJSON::~TypeNativeDataJSON(void)
  {
    if (flagHasPaymentAmount)
      {
        storePaymentAmount->remove_reference();
      }
    if (flagHasTotalInterest)
      {
        storeTotalInterest->remove_reference();
      }
    if (flagHasTotalPaidResult)
      {
        storeTotalPaidResult->remove_reference();
      }
    if (flagHasDownPaymentResult)
      {
        storeDownPaymentResult->remove_reference();
      }
    if (flagHasPrincipalPaidResult)
      {
        storePrincipalPaidResult->remove_reference();
      }
    if (flagHasPrincipalResult)
      {
        storePrincipalResult->remove_reference();
      }
    if (flagHasPrincipalOwingResult)
      {
        storePrincipalOwingResult->remove_reference();
      }
    if (flagHasHomeValueResult)
      {
        storeHomeValueResult->remove_reference();
      }
    if (flagHasMortgageInputData)
      {
        storeMortgageInputData->remove_reference();
      }
    if (flagHasAuxPaymentPerYear)
      {
        storeAuxPaymentPerYear->remove_reference();
      }
    if (flagHasAuxTotalPayment)
      {
        storeAuxTotalPayment->remove_reference();
      }
    if (flagHasAuxInterestFirstYear)
      {
        storeAuxInterestFirstYear->remove_reference();
      }
    if (flagHasAuxInterestLastYear)
      {
        storeAuxInterestLastYear->remove_reference();
      }
    if (flagHasAuxInterestTotal)
      {
        storeAuxInterestTotal->remove_reference();
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool MortgageCalculatorShowResultsCommandJSON::TypeNativeDataJSON::hasPaymentAmount(void) const
  {
    return flagHasPaymentAmount;
  }

MoneyJSON * MortgageCalculatorShowResultsCommandJSON::TypeNativeDataJSON::getPaymentAmount(void)
  {
    assert(flagHasPaymentAmount);
    return storePaymentAmount;
  }

const MoneyJSON * MortgageCalculatorShowResultsCommandJSON::TypeNativeDataJSON::getPaymentAmount(void) const
  {
    assert(flagHasPaymentAmount);
    return storePaymentAmount;
  }

bool MortgageCalculatorShowResultsCommandJSON::TypeNativeDataJSON::hasTotalInterest(void) const
  {
    return flagHasTotalInterest;
  }

MoneyJSON * MortgageCalculatorShowResultsCommandJSON::TypeNativeDataJSON::getTotalInterest(void)
  {
    assert(flagHasTotalInterest);
    return storeTotalInterest;
  }

const MoneyJSON * MortgageCalculatorShowResultsCommandJSON::TypeNativeDataJSON::getTotalInterest(void) const
  {
    assert(flagHasTotalInterest);
    return storeTotalInterest;
  }

bool MortgageCalculatorShowResultsCommandJSON::TypeNativeDataJSON::hasTotalPaidResult(void) const
  {
    return flagHasTotalPaidResult;
  }

MoneyJSON * MortgageCalculatorShowResultsCommandJSON::TypeNativeDataJSON::getTotalPaidResult(void)
  {
    assert(flagHasTotalPaidResult);
    return storeTotalPaidResult;
  }

const MoneyJSON * MortgageCalculatorShowResultsCommandJSON::TypeNativeDataJSON::getTotalPaidResult(void) const
  {
    assert(flagHasTotalPaidResult);
    return storeTotalPaidResult;
  }

bool MortgageCalculatorShowResultsCommandJSON::TypeNativeDataJSON::hasDownPaymentResult(void) const
  {
    return flagHasDownPaymentResult;
  }

MoneyJSON * MortgageCalculatorShowResultsCommandJSON::TypeNativeDataJSON::getDownPaymentResult(void)
  {
    assert(flagHasDownPaymentResult);
    return storeDownPaymentResult;
  }

const MoneyJSON * MortgageCalculatorShowResultsCommandJSON::TypeNativeDataJSON::getDownPaymentResult(void) const
  {
    assert(flagHasDownPaymentResult);
    return storeDownPaymentResult;
  }

bool MortgageCalculatorShowResultsCommandJSON::TypeNativeDataJSON::hasDownPaymentPercentResult(void) const
  {
    return flagHasDownPaymentPercentResult;
  }

double MortgageCalculatorShowResultsCommandJSON::TypeNativeDataJSON::getDownPaymentPercentResult(void)
  {
    assert(flagHasDownPaymentPercentResult);
    if (textStoreDownPaymentPercentResult != "")
      {
        return atof(textStoreDownPaymentPercentResult.c_str());
      }
    return storeDownPaymentPercentResult;
  }

const double MortgageCalculatorShowResultsCommandJSON::TypeNativeDataJSON::getDownPaymentPercentResult(void) const
  {
    assert(flagHasDownPaymentPercentResult);
    if (textStoreDownPaymentPercentResult != "")
      {
        return atof(textStoreDownPaymentPercentResult.c_str());
      }
    return storeDownPaymentPercentResult;
  }

std::string MortgageCalculatorShowResultsCommandJSON::TypeNativeDataJSON::getDownPaymentPercentResultAsText(void) const
  {
    assert(flagHasDownPaymentPercentResult);
    if (textStoreDownPaymentPercentResult == "")
      {
        char buffer[100];
        sprintf(&(buffer[0]), "%g", storeDownPaymentPercentResult);
        return &(buffer[0]);
      }
    else
      {
        return (textStoreDownPaymentPercentResult);
      }
  }

bool MortgageCalculatorShowResultsCommandJSON::TypeNativeDataJSON::hasNumMonthsResult(void) const
  {
    return flagHasNumMonthsResult;
  }

OInteger MortgageCalculatorShowResultsCommandJSON::TypeNativeDataJSON::getNumMonthsResult(void)
  {
    assert(flagHasNumMonthsResult);
    return storeNumMonthsResult;
  }

const OInteger MortgageCalculatorShowResultsCommandJSON::TypeNativeDataJSON::getNumMonthsResult(void) const
  {
    assert(flagHasNumMonthsResult);
    return storeNumMonthsResult;
  }

bool MortgageCalculatorShowResultsCommandJSON::TypeNativeDataJSON::hasPrincipalPaidResult(void) const
  {
    return flagHasPrincipalPaidResult;
  }

MoneyJSON * MortgageCalculatorShowResultsCommandJSON::TypeNativeDataJSON::getPrincipalPaidResult(void)
  {
    assert(flagHasPrincipalPaidResult);
    return storePrincipalPaidResult;
  }

const MoneyJSON * MortgageCalculatorShowResultsCommandJSON::TypeNativeDataJSON::getPrincipalPaidResult(void) const
  {
    assert(flagHasPrincipalPaidResult);
    return storePrincipalPaidResult;
  }

bool MortgageCalculatorShowResultsCommandJSON::TypeNativeDataJSON::hasPrincipalResult(void) const
  {
    return flagHasPrincipalResult;
  }

MoneyJSON * MortgageCalculatorShowResultsCommandJSON::TypeNativeDataJSON::getPrincipalResult(void)
  {
    assert(flagHasPrincipalResult);
    return storePrincipalResult;
  }

const MoneyJSON * MortgageCalculatorShowResultsCommandJSON::TypeNativeDataJSON::getPrincipalResult(void) const
  {
    assert(flagHasPrincipalResult);
    return storePrincipalResult;
  }

bool MortgageCalculatorShowResultsCommandJSON::TypeNativeDataJSON::hasPrincipalOwingResult(void) const
  {
    return flagHasPrincipalOwingResult;
  }

MoneyJSON * MortgageCalculatorShowResultsCommandJSON::TypeNativeDataJSON::getPrincipalOwingResult(void)
  {
    assert(flagHasPrincipalOwingResult);
    return storePrincipalOwingResult;
  }

const MoneyJSON * MortgageCalculatorShowResultsCommandJSON::TypeNativeDataJSON::getPrincipalOwingResult(void) const
  {
    assert(flagHasPrincipalOwingResult);
    return storePrincipalOwingResult;
  }

bool MortgageCalculatorShowResultsCommandJSON::TypeNativeDataJSON::hasHomeValueResult(void) const
  {
    return flagHasHomeValueResult;
  }

MoneyJSON * MortgageCalculatorShowResultsCommandJSON::TypeNativeDataJSON::getHomeValueResult(void)
  {
    assert(flagHasHomeValueResult);
    return storeHomeValueResult;
  }

const MoneyJSON * MortgageCalculatorShowResultsCommandJSON::TypeNativeDataJSON::getHomeValueResult(void) const
  {
    assert(flagHasHomeValueResult);
    return storeHomeValueResult;
  }

bool MortgageCalculatorShowResultsCommandJSON::TypeNativeDataJSON::hasInterestRateResult(void) const
  {
    return flagHasInterestRateResult;
  }

double MortgageCalculatorShowResultsCommandJSON::TypeNativeDataJSON::getInterestRateResult(void)
  {
    assert(flagHasInterestRateResult);
    if (textStoreInterestRateResult != "")
      {
        return atof(textStoreInterestRateResult.c_str());
      }
    return storeInterestRateResult;
  }

const double MortgageCalculatorShowResultsCommandJSON::TypeNativeDataJSON::getInterestRateResult(void) const
  {
    assert(flagHasInterestRateResult);
    if (textStoreInterestRateResult != "")
      {
        return atof(textStoreInterestRateResult.c_str());
      }
    return storeInterestRateResult;
  }

std::string MortgageCalculatorShowResultsCommandJSON::TypeNativeDataJSON::getInterestRateResultAsText(void) const
  {
    assert(flagHasInterestRateResult);
    if (textStoreInterestRateResult == "")
      {
        char buffer[100];
        sprintf(&(buffer[0]), "%g", storeInterestRateResult);
        return &(buffer[0]);
      }
    else
      {
        return (textStoreInterestRateResult);
      }
  }

bool MortgageCalculatorShowResultsCommandJSON::TypeNativeDataJSON::hasMortgageInputData(void) const
  {
    return flagHasMortgageInputData;
  }

MortgageCalculatorInputDataJSON * MortgageCalculatorShowResultsCommandJSON::TypeNativeDataJSON::getMortgageInputData(void)
  {
    assert(flagHasMortgageInputData);
    return storeMortgageInputData;
  }

const MortgageCalculatorInputDataJSON * MortgageCalculatorShowResultsCommandJSON::TypeNativeDataJSON::getMortgageInputData(void) const
  {
    assert(flagHasMortgageInputData);
    return storeMortgageInputData;
  }

bool MortgageCalculatorShowResultsCommandJSON::TypeNativeDataJSON::hasNotUnderstood(void) const
  {
    return flagHasNotUnderstood;
  }

bool MortgageCalculatorShowResultsCommandJSON::TypeNativeDataJSON::getNotUnderstood(void)
  {
    assert(flagHasNotUnderstood);
    return storeNotUnderstood;
  }

const bool MortgageCalculatorShowResultsCommandJSON::TypeNativeDataJSON::getNotUnderstood(void) const
  {
    assert(flagHasNotUnderstood);
    return storeNotUnderstood;
  }

bool MortgageCalculatorShowResultsCommandJSON::TypeNativeDataJSON::hasResultError(void) const
  {
    return flagHasResultError;
  }

MortgageCalculatorShowResultsCommandJSON::TypeNativeDataJSON::TypeResultError MortgageCalculatorShowResultsCommandJSON::TypeNativeDataJSON::getResultError(void)
  {
    assert(flagHasResultError);
    return storeResultError;
  }

const MortgageCalculatorShowResultsCommandJSON::TypeNativeDataJSON::TypeResultError MortgageCalculatorShowResultsCommandJSON::TypeNativeDataJSON::getResultError(void) const
  {
    assert(flagHasResultError);
    return storeResultError;
  }

const char *MortgageCalculatorShowResultsCommandJSON::TypeNativeDataJSON::getResultErrorAsChars(void) const
  {
    TypeResultError result = getResultError();
    if (result.in_known_list)
        return stringFromResultError(result.list_value);
    else
        return result.string_value.c_str();
  }

std::string MortgageCalculatorShowResultsCommandJSON::TypeNativeDataJSON::getResultErrorAsString(void) const
  {
    return getResultErrorAsChars();
  }

bool MortgageCalculatorShowResultsCommandJSON::TypeNativeDataJSON::hasAuxPaymentPerYear(void) const
  {
    return flagHasAuxPaymentPerYear;
  }

MoneyJSON * MortgageCalculatorShowResultsCommandJSON::TypeNativeDataJSON::getAuxPaymentPerYear(void)
  {
    assert(flagHasAuxPaymentPerYear);
    return storeAuxPaymentPerYear;
  }

const MoneyJSON * MortgageCalculatorShowResultsCommandJSON::TypeNativeDataJSON::getAuxPaymentPerYear(void) const
  {
    assert(flagHasAuxPaymentPerYear);
    return storeAuxPaymentPerYear;
  }

bool MortgageCalculatorShowResultsCommandJSON::TypeNativeDataJSON::hasAuxTotalPayment(void) const
  {
    return flagHasAuxTotalPayment;
  }

MoneyJSON * MortgageCalculatorShowResultsCommandJSON::TypeNativeDataJSON::getAuxTotalPayment(void)
  {
    assert(flagHasAuxTotalPayment);
    return storeAuxTotalPayment;
  }

const MoneyJSON * MortgageCalculatorShowResultsCommandJSON::TypeNativeDataJSON::getAuxTotalPayment(void) const
  {
    assert(flagHasAuxTotalPayment);
    return storeAuxTotalPayment;
  }

bool MortgageCalculatorShowResultsCommandJSON::TypeNativeDataJSON::hasAuxInterestFirstYear(void) const
  {
    return flagHasAuxInterestFirstYear;
  }

MoneyJSON * MortgageCalculatorShowResultsCommandJSON::TypeNativeDataJSON::getAuxInterestFirstYear(void)
  {
    assert(flagHasAuxInterestFirstYear);
    return storeAuxInterestFirstYear;
  }

const MoneyJSON * MortgageCalculatorShowResultsCommandJSON::TypeNativeDataJSON::getAuxInterestFirstYear(void) const
  {
    assert(flagHasAuxInterestFirstYear);
    return storeAuxInterestFirstYear;
  }

bool MortgageCalculatorShowResultsCommandJSON::TypeNativeDataJSON::hasAuxInterestLastYear(void) const
  {
    return flagHasAuxInterestLastYear;
  }

MoneyJSON * MortgageCalculatorShowResultsCommandJSON::TypeNativeDataJSON::getAuxInterestLastYear(void)
  {
    assert(flagHasAuxInterestLastYear);
    return storeAuxInterestLastYear;
  }

const MoneyJSON * MortgageCalculatorShowResultsCommandJSON::TypeNativeDataJSON::getAuxInterestLastYear(void) const
  {
    assert(flagHasAuxInterestLastYear);
    return storeAuxInterestLastYear;
  }

bool MortgageCalculatorShowResultsCommandJSON::TypeNativeDataJSON::hasAuxInterestTotal(void) const
  {
    return flagHasAuxInterestTotal;
  }

MoneyJSON * MortgageCalculatorShowResultsCommandJSON::TypeNativeDataJSON::getAuxInterestTotal(void)
  {
    assert(flagHasAuxInterestTotal);
    return storeAuxInterestTotal;
  }

const MoneyJSON * MortgageCalculatorShowResultsCommandJSON::TypeNativeDataJSON::getAuxInterestTotal(void) const
  {
    assert(flagHasAuxInterestTotal);
    return storeAuxInterestTotal;
  }

MortgageCalculatorShowResultsCommandJSON::MortgageCalculatorShowResultsCommandJSON(const MortgageCalculatorShowResultsCommandJSON &)
  {
    assert(false);
  }

MortgageCalculatorShowResultsCommandJSON &MortgageCalculatorShowResultsCommandJSON::operator=(const MortgageCalculatorShowResultsCommandJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *MortgageCalculatorShowResultsCommandJSON::extraNativeDataToJSON(void) const
  {
    JSONValueHandler handler_NativeData;
    storeNativeData->write_as_json(&handler_NativeData);
    handler_NativeData.result->add_reference();
    return handler_NativeData.result;
  }

void MortgageCalculatorShowResultsCommandJSON::fromJSONNativeData(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TypeNativeDataJSON *convert_classy = TypeNativeDataJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setNativeData(convert_classy);
    convert_classy->remove_reference();
  }

MortgageCalculatorShowResultsCommandJSON::MortgageCalculatorShowResultsCommandJSON(void) :
        flagHasNativeData(false)
  {
  }

MortgageCalculatorShowResultsCommandJSON::~MortgageCalculatorShowResultsCommandJSON(void)
  {
    if (flagHasNativeData)
      {
        storeNativeData->remove_reference();
      }
  }

const char *MortgageCalculatorShowResultsCommandJSON::getMortgageCalculatorCommandKind(void) const
  {
    return "MortgageCalculatorShowResultsCommand";
  }

bool MortgageCalculatorShowResultsCommandJSON::hasNativeData(void) const
  {
    return flagHasNativeData;
  }

MortgageCalculatorShowResultsCommandJSON::TypeNativeDataJSON * MortgageCalculatorShowResultsCommandJSON::getNativeData(void)
  {
    assert(flagHasNativeData);
    return storeNativeData;
  }

const MortgageCalculatorShowResultsCommandJSON::TypeNativeDataJSON * MortgageCalculatorShowResultsCommandJSON::getNativeData(void) const
  {
    assert(flagHasNativeData);
    return storeNativeData;
  }

char MortgageCalculatorShowResultsCommandJSON::TypeNativeDataJSON::Generator::lowerBoundNumMonthsResult[] = "0";
MortgageCalculatorShowResultsCommandJSON::TypeNativeDataJSON *MortgageCalculatorShowResultsCommandJSON::TypeNativeDataJSON::from_json(JSONValue *json_value, bool ignore_extras)
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
MortgageCalculatorShowResultsCommandJSON *MortgageCalculatorShowResultsCommandJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    MortgageCalculatorShowResultsCommandJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<MortgageCalculatorShowResultsCommandJSON>, MortgageCalculatorShowResultsCommandJSON *, bool> generator("Type MortgageCalculatorShowResultsCommand", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
