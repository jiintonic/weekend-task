/* file "TipCalculatorInputDataJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "TipCalculatorInputDataJSON.h"

#include "TipCalculatorInputDataJSON.h"


TipCalculatorInputDataJSON::TipCalculatorInputDataJSON(const TipCalculatorInputDataJSON &)
  {
    assert(false);
  }

TipCalculatorInputDataJSON &TipCalculatorInputDataJSON::operator=(const TipCalculatorInputDataJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void TipCalculatorInputDataJSON::fromJSONNextRequest(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field NextRequest of TipCalculatorInputDataJSON is not a string.");
    setNextRequest(std::string(json_string->getData()));
  }

void TipCalculatorInputDataJSON::fromJSONLastRequest(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field LastRequest of TipCalculatorInputDataJSON is not a string.");
    setLastRequest(std::string(json_string->getData()));
  }

void TipCalculatorInputDataJSON::fromJSONBillAmount(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    MoneyJSON *convert_classy = MoneyJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setBillAmount(convert_classy);
    convert_classy->remove_reference();
  }

void TipCalculatorInputDataJSON::fromJSONBillAmountIsNew(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field BillAmountIsNew of TipCalculatorInputDataJSON is not true for false.");
          }
      }
    setBillAmountIsNew(the_bool);
  }

void TipCalculatorInputDataJSON::fromJSONTaxPercentage(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field TaxPercentage of TipCalculatorInputDataJSON is not a number.");
          }
      }
    setTaxPercentageText(the_rational_text);
  }

void TipCalculatorInputDataJSON::fromJSONTaxPercentageIsNew(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field TaxPercentageIsNew of TipCalculatorInputDataJSON is not true for false.");
          }
      }
    setTaxPercentageIsNew(the_bool);
  }

void TipCalculatorInputDataJSON::fromJSONTaxAmount(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    MoneyJSON *convert_classy = MoneyJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setTaxAmount(convert_classy);
    convert_classy->remove_reference();
  }

void TipCalculatorInputDataJSON::fromJSONTaxAmountIsNew(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field TaxAmountIsNew of TipCalculatorInputDataJSON is not true for false.");
          }
      }
    setTaxAmountIsNew(the_bool);
  }

void TipCalculatorInputDataJSON::fromJSONTipPercentage(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field TipPercentage of TipCalculatorInputDataJSON is not a number.");
          }
      }
    setTipPercentageText(the_rational_text);
  }

void TipCalculatorInputDataJSON::fromJSONTipPercentageIsNew(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field TipPercentageIsNew of TipCalculatorInputDataJSON is not true for false.");
          }
      }
    setTipPercentageIsNew(the_bool);
  }

void TipCalculatorInputDataJSON::fromJSONTipAmount(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    MoneyJSON *convert_classy = MoneyJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setTipAmount(convert_classy);
    convert_classy->remove_reference();
  }

void TipCalculatorInputDataJSON::fromJSONTipAmountIsNew(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field TipAmountIsNew of TipCalculatorInputDataJSON is not true for false.");
          }
      }
    setTipAmountIsNew(the_bool);
  }

void TipCalculatorInputDataJSON::fromJSONRoundingAmount(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    MoneyJSON *convert_classy = MoneyJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setRoundingAmount(convert_classy);
    convert_classy->remove_reference();
  }

void TipCalculatorInputDataJSON::fromJSONRoundingAmountIsNew(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field RoundingAmountIsNew of TipCalculatorInputDataJSON is not true for false.");
          }
      }
    setRoundingAmountIsNew(the_bool);
  }

void TipCalculatorInputDataJSON::fromJSONPartySize(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field PartySize of TipCalculatorInputDataJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field PartySize of TipCalculatorInputDataJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setPartySize(extracted_integer);
  }

void TipCalculatorInputDataJSON::fromJSONPartySizeIsNew(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field PartySizeIsNew of TipCalculatorInputDataJSON is not true for false.");
          }
      }
    setPartySizeIsNew(the_bool);
  }

void TipCalculatorInputDataJSON::fromJSONTotalAmount(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    MoneyJSON *convert_classy = MoneyJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setTotalAmount(convert_classy);
    convert_classy->remove_reference();
  }

void TipCalculatorInputDataJSON::fromJSONTotalAmountIsNew(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field TotalAmountIsNew of TipCalculatorInputDataJSON is not true for false.");
          }
      }
    setTotalAmountIsNew(the_bool);
  }

void TipCalculatorInputDataJSON::fromJSONAmbiguousAmount(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    MoneyJSON *convert_classy = MoneyJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setAmbiguousAmount(convert_classy);
    convert_classy->remove_reference();
  }

void TipCalculatorInputDataJSON::fromJSONAmbiguousAmountIsNew(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field AmbiguousAmountIsNew of TipCalculatorInputDataJSON is not true for false.");
          }
      }
    setAmbiguousAmountIsNew(the_bool);
  }

void TipCalculatorInputDataJSON::fromJSONCalculationType(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field CalculationType of TipCalculatorInputDataJSON is not a string.");
    setCalculationType(std::string(json_string->getData()));
  }

void TipCalculatorInputDataJSON::fromJSONCalculationTypeIsNew(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field CalculationTypeIsNew of TipCalculatorInputDataJSON is not true for false.");
          }
      }
    setCalculationTypeIsNew(the_bool);
  }

void TipCalculatorInputDataJSON::fromJSONMethodType(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field MethodType of TipCalculatorInputDataJSON is not a string.");
    setMethodType(std::string(json_string->getData()));
  }

void TipCalculatorInputDataJSON::fromJSONMethodTypeIsNew(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field MethodTypeIsNew of TipCalculatorInputDataJSON is not true for false.");
          }
      }
    setMethodTypeIsNew(the_bool);
  }

void TipCalculatorInputDataJSON::fromJSONDoNotKnow(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field DoNotKnow of TipCalculatorInputDataJSON is not true for false.");
          }
      }
    setDoNotKnow(the_bool);
  }

void TipCalculatorInputDataJSON::fromJSONWantToKnow(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field WantToKnow of TipCalculatorInputDataJSON is not true for false.");
          }
      }
    setWantToKnow(the_bool);
  }

void TipCalculatorInputDataJSON::fromJSONTipCalculatorStart(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field TipCalculatorStart of TipCalculatorInputDataJSON is not true for false.");
          }
      }
    setTipCalculatorStart(the_bool);
  }

void TipCalculatorInputDataJSON::fromJSONUserConfused(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field UserConfused of TipCalculatorInputDataJSON is not true for false.");
          }
      }
    setUserConfused(the_bool);
  }

TipCalculatorInputDataJSON::TipCalculatorInputDataJSON(void) :
        flagHasNextRequest(false),
        flagHasLastRequest(false),
        flagHasBillAmount(false),
        flagHasBillAmountIsNew(false),
        flagHasTaxPercentage(false),
        flagHasTaxPercentageIsNew(false),
        flagHasTaxAmount(false),
        flagHasTaxAmountIsNew(false),
        flagHasTipPercentage(false),
        flagHasTipPercentageIsNew(false),
        flagHasTipAmount(false),
        flagHasTipAmountIsNew(false),
        flagHasRoundingAmount(false),
        flagHasRoundingAmountIsNew(false),
        flagHasPartySize(false),
        flagHasPartySizeIsNew(false),
        flagHasTotalAmount(false),
        flagHasTotalAmountIsNew(false),
        flagHasAmbiguousAmount(false),
        flagHasAmbiguousAmountIsNew(false),
        flagHasCalculationType(false),
        flagHasCalculationTypeIsNew(false),
        flagHasMethodType(false),
        flagHasMethodTypeIsNew(false),
        flagHasDoNotKnow(false),
        flagHasWantToKnow(false),
        flagHasTipCalculatorStart(false),
        flagHasUserConfused(false)
  {
    extraIndex = create_string_index();
  }

TipCalculatorInputDataJSON::~TipCalculatorInputDataJSON(void)
  {
    if (flagHasBillAmount)
      {
        storeBillAmount->remove_reference();
      }
    if (flagHasTaxAmount)
      {
        storeTaxAmount->remove_reference();
      }
    if (flagHasTipAmount)
      {
        storeTipAmount->remove_reference();
      }
    if (flagHasRoundingAmount)
      {
        storeRoundingAmount->remove_reference();
      }
    if (flagHasTotalAmount)
      {
        storeTotalAmount->remove_reference();
      }
    if (flagHasAmbiguousAmount)
      {
        storeAmbiguousAmount->remove_reference();
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool TipCalculatorInputDataJSON::hasNextRequest(void) const
  {
    return flagHasNextRequest;
  }

std::string TipCalculatorInputDataJSON::getNextRequest(void)
  {
    assert(flagHasNextRequest);
    return storeNextRequest;
  }

const std::string TipCalculatorInputDataJSON::getNextRequest(void) const
  {
    assert(flagHasNextRequest);
    return storeNextRequest;
  }

bool TipCalculatorInputDataJSON::hasLastRequest(void) const
  {
    return flagHasLastRequest;
  }

std::string TipCalculatorInputDataJSON::getLastRequest(void)
  {
    assert(flagHasLastRequest);
    return storeLastRequest;
  }

const std::string TipCalculatorInputDataJSON::getLastRequest(void) const
  {
    assert(flagHasLastRequest);
    return storeLastRequest;
  }

bool TipCalculatorInputDataJSON::hasBillAmount(void) const
  {
    return flagHasBillAmount;
  }

MoneyJSON * TipCalculatorInputDataJSON::getBillAmount(void)
  {
    assert(flagHasBillAmount);
    return storeBillAmount;
  }

const MoneyJSON * TipCalculatorInputDataJSON::getBillAmount(void) const
  {
    assert(flagHasBillAmount);
    return storeBillAmount;
  }

bool TipCalculatorInputDataJSON::hasBillAmountIsNew(void) const
  {
    return flagHasBillAmountIsNew;
  }

bool TipCalculatorInputDataJSON::getBillAmountIsNew(void)
  {
    assert(flagHasBillAmountIsNew);
    return storeBillAmountIsNew;
  }

const bool TipCalculatorInputDataJSON::getBillAmountIsNew(void) const
  {
    assert(flagHasBillAmountIsNew);
    return storeBillAmountIsNew;
  }

bool TipCalculatorInputDataJSON::hasTaxPercentage(void) const
  {
    return flagHasTaxPercentage;
  }

double TipCalculatorInputDataJSON::getTaxPercentage(void)
  {
    assert(flagHasTaxPercentage);
    if (textStoreTaxPercentage != "")
      {
        return atof(textStoreTaxPercentage.c_str());
      }
    return storeTaxPercentage;
  }

const double TipCalculatorInputDataJSON::getTaxPercentage(void) const
  {
    assert(flagHasTaxPercentage);
    if (textStoreTaxPercentage != "")
      {
        return atof(textStoreTaxPercentage.c_str());
      }
    return storeTaxPercentage;
  }

std::string TipCalculatorInputDataJSON::getTaxPercentageAsText(void) const
  {
    assert(flagHasTaxPercentage);
    if (textStoreTaxPercentage == "")
      {
        char buffer[100];
        sprintf(&(buffer[0]), "%g", storeTaxPercentage);
        return &(buffer[0]);
      }
    else
      {
        return (textStoreTaxPercentage);
      }
  }

bool TipCalculatorInputDataJSON::hasTaxPercentageIsNew(void) const
  {
    return flagHasTaxPercentageIsNew;
  }

bool TipCalculatorInputDataJSON::getTaxPercentageIsNew(void)
  {
    assert(flagHasTaxPercentageIsNew);
    return storeTaxPercentageIsNew;
  }

const bool TipCalculatorInputDataJSON::getTaxPercentageIsNew(void) const
  {
    assert(flagHasTaxPercentageIsNew);
    return storeTaxPercentageIsNew;
  }

bool TipCalculatorInputDataJSON::hasTaxAmount(void) const
  {
    return flagHasTaxAmount;
  }

MoneyJSON * TipCalculatorInputDataJSON::getTaxAmount(void)
  {
    assert(flagHasTaxAmount);
    return storeTaxAmount;
  }

const MoneyJSON * TipCalculatorInputDataJSON::getTaxAmount(void) const
  {
    assert(flagHasTaxAmount);
    return storeTaxAmount;
  }

bool TipCalculatorInputDataJSON::hasTaxAmountIsNew(void) const
  {
    return flagHasTaxAmountIsNew;
  }

bool TipCalculatorInputDataJSON::getTaxAmountIsNew(void)
  {
    assert(flagHasTaxAmountIsNew);
    return storeTaxAmountIsNew;
  }

const bool TipCalculatorInputDataJSON::getTaxAmountIsNew(void) const
  {
    assert(flagHasTaxAmountIsNew);
    return storeTaxAmountIsNew;
  }

bool TipCalculatorInputDataJSON::hasTipPercentage(void) const
  {
    return flagHasTipPercentage;
  }

double TipCalculatorInputDataJSON::getTipPercentage(void)
  {
    assert(flagHasTipPercentage);
    if (textStoreTipPercentage != "")
      {
        return atof(textStoreTipPercentage.c_str());
      }
    return storeTipPercentage;
  }

const double TipCalculatorInputDataJSON::getTipPercentage(void) const
  {
    assert(flagHasTipPercentage);
    if (textStoreTipPercentage != "")
      {
        return atof(textStoreTipPercentage.c_str());
      }
    return storeTipPercentage;
  }

std::string TipCalculatorInputDataJSON::getTipPercentageAsText(void) const
  {
    assert(flagHasTipPercentage);
    if (textStoreTipPercentage == "")
      {
        char buffer[100];
        sprintf(&(buffer[0]), "%g", storeTipPercentage);
        return &(buffer[0]);
      }
    else
      {
        return (textStoreTipPercentage);
      }
  }

bool TipCalculatorInputDataJSON::hasTipPercentageIsNew(void) const
  {
    return flagHasTipPercentageIsNew;
  }

bool TipCalculatorInputDataJSON::getTipPercentageIsNew(void)
  {
    assert(flagHasTipPercentageIsNew);
    return storeTipPercentageIsNew;
  }

const bool TipCalculatorInputDataJSON::getTipPercentageIsNew(void) const
  {
    assert(flagHasTipPercentageIsNew);
    return storeTipPercentageIsNew;
  }

bool TipCalculatorInputDataJSON::hasTipAmount(void) const
  {
    return flagHasTipAmount;
  }

MoneyJSON * TipCalculatorInputDataJSON::getTipAmount(void)
  {
    assert(flagHasTipAmount);
    return storeTipAmount;
  }

const MoneyJSON * TipCalculatorInputDataJSON::getTipAmount(void) const
  {
    assert(flagHasTipAmount);
    return storeTipAmount;
  }

bool TipCalculatorInputDataJSON::hasTipAmountIsNew(void) const
  {
    return flagHasTipAmountIsNew;
  }

bool TipCalculatorInputDataJSON::getTipAmountIsNew(void)
  {
    assert(flagHasTipAmountIsNew);
    return storeTipAmountIsNew;
  }

const bool TipCalculatorInputDataJSON::getTipAmountIsNew(void) const
  {
    assert(flagHasTipAmountIsNew);
    return storeTipAmountIsNew;
  }

bool TipCalculatorInputDataJSON::hasRoundingAmount(void) const
  {
    return flagHasRoundingAmount;
  }

MoneyJSON * TipCalculatorInputDataJSON::getRoundingAmount(void)
  {
    assert(flagHasRoundingAmount);
    return storeRoundingAmount;
  }

const MoneyJSON * TipCalculatorInputDataJSON::getRoundingAmount(void) const
  {
    assert(flagHasRoundingAmount);
    return storeRoundingAmount;
  }

bool TipCalculatorInputDataJSON::hasRoundingAmountIsNew(void) const
  {
    return flagHasRoundingAmountIsNew;
  }

bool TipCalculatorInputDataJSON::getRoundingAmountIsNew(void)
  {
    assert(flagHasRoundingAmountIsNew);
    return storeRoundingAmountIsNew;
  }

const bool TipCalculatorInputDataJSON::getRoundingAmountIsNew(void) const
  {
    assert(flagHasRoundingAmountIsNew);
    return storeRoundingAmountIsNew;
  }

bool TipCalculatorInputDataJSON::hasPartySize(void) const
  {
    return flagHasPartySize;
  }

OInteger TipCalculatorInputDataJSON::getPartySize(void)
  {
    assert(flagHasPartySize);
    return storePartySize;
  }

const OInteger TipCalculatorInputDataJSON::getPartySize(void) const
  {
    assert(flagHasPartySize);
    return storePartySize;
  }

bool TipCalculatorInputDataJSON::hasPartySizeIsNew(void) const
  {
    return flagHasPartySizeIsNew;
  }

bool TipCalculatorInputDataJSON::getPartySizeIsNew(void)
  {
    assert(flagHasPartySizeIsNew);
    return storePartySizeIsNew;
  }

const bool TipCalculatorInputDataJSON::getPartySizeIsNew(void) const
  {
    assert(flagHasPartySizeIsNew);
    return storePartySizeIsNew;
  }

bool TipCalculatorInputDataJSON::hasTotalAmount(void) const
  {
    return flagHasTotalAmount;
  }

MoneyJSON * TipCalculatorInputDataJSON::getTotalAmount(void)
  {
    assert(flagHasTotalAmount);
    return storeTotalAmount;
  }

const MoneyJSON * TipCalculatorInputDataJSON::getTotalAmount(void) const
  {
    assert(flagHasTotalAmount);
    return storeTotalAmount;
  }

bool TipCalculatorInputDataJSON::hasTotalAmountIsNew(void) const
  {
    return flagHasTotalAmountIsNew;
  }

bool TipCalculatorInputDataJSON::getTotalAmountIsNew(void)
  {
    assert(flagHasTotalAmountIsNew);
    return storeTotalAmountIsNew;
  }

const bool TipCalculatorInputDataJSON::getTotalAmountIsNew(void) const
  {
    assert(flagHasTotalAmountIsNew);
    return storeTotalAmountIsNew;
  }

bool TipCalculatorInputDataJSON::hasAmbiguousAmount(void) const
  {
    return flagHasAmbiguousAmount;
  }

MoneyJSON * TipCalculatorInputDataJSON::getAmbiguousAmount(void)
  {
    assert(flagHasAmbiguousAmount);
    return storeAmbiguousAmount;
  }

const MoneyJSON * TipCalculatorInputDataJSON::getAmbiguousAmount(void) const
  {
    assert(flagHasAmbiguousAmount);
    return storeAmbiguousAmount;
  }

bool TipCalculatorInputDataJSON::hasAmbiguousAmountIsNew(void) const
  {
    return flagHasAmbiguousAmountIsNew;
  }

bool TipCalculatorInputDataJSON::getAmbiguousAmountIsNew(void)
  {
    assert(flagHasAmbiguousAmountIsNew);
    return storeAmbiguousAmountIsNew;
  }

const bool TipCalculatorInputDataJSON::getAmbiguousAmountIsNew(void) const
  {
    assert(flagHasAmbiguousAmountIsNew);
    return storeAmbiguousAmountIsNew;
  }

bool TipCalculatorInputDataJSON::hasCalculationType(void) const
  {
    return flagHasCalculationType;
  }

std::string TipCalculatorInputDataJSON::getCalculationType(void)
  {
    assert(flagHasCalculationType);
    return storeCalculationType;
  }

const std::string TipCalculatorInputDataJSON::getCalculationType(void) const
  {
    assert(flagHasCalculationType);
    return storeCalculationType;
  }

bool TipCalculatorInputDataJSON::hasCalculationTypeIsNew(void) const
  {
    return flagHasCalculationTypeIsNew;
  }

bool TipCalculatorInputDataJSON::getCalculationTypeIsNew(void)
  {
    assert(flagHasCalculationTypeIsNew);
    return storeCalculationTypeIsNew;
  }

const bool TipCalculatorInputDataJSON::getCalculationTypeIsNew(void) const
  {
    assert(flagHasCalculationTypeIsNew);
    return storeCalculationTypeIsNew;
  }

bool TipCalculatorInputDataJSON::hasMethodType(void) const
  {
    return flagHasMethodType;
  }

std::string TipCalculatorInputDataJSON::getMethodType(void)
  {
    assert(flagHasMethodType);
    return storeMethodType;
  }

const std::string TipCalculatorInputDataJSON::getMethodType(void) const
  {
    assert(flagHasMethodType);
    return storeMethodType;
  }

bool TipCalculatorInputDataJSON::hasMethodTypeIsNew(void) const
  {
    return flagHasMethodTypeIsNew;
  }

bool TipCalculatorInputDataJSON::getMethodTypeIsNew(void)
  {
    assert(flagHasMethodTypeIsNew);
    return storeMethodTypeIsNew;
  }

const bool TipCalculatorInputDataJSON::getMethodTypeIsNew(void) const
  {
    assert(flagHasMethodTypeIsNew);
    return storeMethodTypeIsNew;
  }

bool TipCalculatorInputDataJSON::hasDoNotKnow(void) const
  {
    return flagHasDoNotKnow;
  }

bool TipCalculatorInputDataJSON::getDoNotKnow(void)
  {
    assert(flagHasDoNotKnow);
    return storeDoNotKnow;
  }

const bool TipCalculatorInputDataJSON::getDoNotKnow(void) const
  {
    assert(flagHasDoNotKnow);
    return storeDoNotKnow;
  }

bool TipCalculatorInputDataJSON::hasWantToKnow(void) const
  {
    return flagHasWantToKnow;
  }

bool TipCalculatorInputDataJSON::getWantToKnow(void)
  {
    assert(flagHasWantToKnow);
    return storeWantToKnow;
  }

const bool TipCalculatorInputDataJSON::getWantToKnow(void) const
  {
    assert(flagHasWantToKnow);
    return storeWantToKnow;
  }

bool TipCalculatorInputDataJSON::hasTipCalculatorStart(void) const
  {
    return flagHasTipCalculatorStart;
  }

bool TipCalculatorInputDataJSON::getTipCalculatorStart(void)
  {
    assert(flagHasTipCalculatorStart);
    return storeTipCalculatorStart;
  }

const bool TipCalculatorInputDataJSON::getTipCalculatorStart(void) const
  {
    assert(flagHasTipCalculatorStart);
    return storeTipCalculatorStart;
  }

bool TipCalculatorInputDataJSON::hasUserConfused(void) const
  {
    return flagHasUserConfused;
  }

bool TipCalculatorInputDataJSON::getUserConfused(void)
  {
    assert(flagHasUserConfused);
    return storeUserConfused;
  }

const bool TipCalculatorInputDataJSON::getUserConfused(void) const
  {
    assert(flagHasUserConfused);
    return storeUserConfused;
  }

char TipCalculatorInputDataJSON::Generator::lowerBoundPartySize[] = "1";
TipCalculatorInputDataJSON *TipCalculatorInputDataJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    TipCalculatorInputDataJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<TipCalculatorInputDataJSON>, TipCalculatorInputDataJSON *, bool> generator("Type TipCalculatorInputData", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
