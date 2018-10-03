/* file "BlackjackNotUnderstoodCommandJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "BlackjackNotUnderstoodCommandJSON.h"

#include "BlackjackNotUnderstoodCommandJSON.h"


BlackjackNotUnderstoodCommandJSON::TypeNativeDataJSON::TypeNativeDataJSON(const TypeNativeDataJSON &)
  {
    assert(false);
  }

BlackjackNotUnderstoodCommandJSON::TypeNativeDataJSON &BlackjackNotUnderstoodCommandJSON::TypeNativeDataJSON::operator=(const TypeNativeDataJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void BlackjackNotUnderstoodCommandJSON::TypeNativeDataJSON::fromJSONImageURL(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field ImageURL of TypeNativeDataJSON is not a string.");
    setImageURL(std::string(json_string->getData()));
  }

void BlackjackNotUnderstoodCommandJSON::TypeNativeDataJSON::fromJSONBankroll(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field Bankroll of TypeNativeDataJSON is not a number.");
          }
      }
    setBankrollText(the_rational_text);
  }

void BlackjackNotUnderstoodCommandJSON::TypeNativeDataJSON::fromJSONBetAmount(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field BetAmount of TypeNativeDataJSON is not a number.");
          }
      }
    setBetAmountText(the_rational_text);
  }

void BlackjackNotUnderstoodCommandJSON::TypeNativeDataJSON::fromJSONPlayerHand(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    BlackjackHandJSON *convert_classy = BlackjackHandJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setPlayerHand(convert_classy);
    convert_classy->remove_reference();
  }

void BlackjackNotUnderstoodCommandJSON::TypeNativeDataJSON::fromJSONPlayerHandTotal(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    uint8_t extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field PlayerHandTotal of TypeNativeDataJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field PlayerHandTotal of TypeNativeDataJSON is not an integer.");
          }
        extracted_integer = (uint8_t)(json_rational->getUnsignedLongInt())    ;
      }
    else
      {
        extracted_integer = (uint8_t)(json_integer->getUnsignedLongInt())    ;
      }
    setPlayerHandTotal(extracted_integer);
  }

void BlackjackNotUnderstoodCommandJSON::TypeNativeDataJSON::fromJSONDealerHand(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    BlackjackHandJSON *convert_classy = BlackjackHandJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setDealerHand(convert_classy);
    convert_classy->remove_reference();
  }

void BlackjackNotUnderstoodCommandJSON::TypeNativeDataJSON::fromJSONDealerHandTotal(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    uint8_t extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field DealerHandTotal of TypeNativeDataJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field DealerHandTotal of TypeNativeDataJSON is not an integer.");
          }
        extracted_integer = (uint8_t)(json_rational->getUnsignedLongInt())    ;
      }
    else
      {
        extracted_integer = (uint8_t)(json_integer->getUnsignedLongInt())    ;
      }
    setDealerHandTotal(extracted_integer);
  }

BlackjackNotUnderstoodCommandJSON::TypeNativeDataJSON::TypeNativeDataJSON(void) :
        flagHasImageURL(false),
        flagHasBankroll(false),
        flagHasBetAmount(false),
        flagHasPlayerHand(false),
        flagHasPlayerHandTotal(false),
        flagHasDealerHand(false),
        flagHasDealerHandTotal(false)
  {
    extraIndex = create_string_index();
  }

BlackjackNotUnderstoodCommandJSON::TypeNativeDataJSON::~TypeNativeDataJSON(void)
  {
    if (flagHasPlayerHand)
      {
        storePlayerHand->remove_reference();
      }
    if (flagHasDealerHand)
      {
        storeDealerHand->remove_reference();
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool BlackjackNotUnderstoodCommandJSON::TypeNativeDataJSON::hasImageURL(void) const
  {
    return flagHasImageURL;
  }

std::string BlackjackNotUnderstoodCommandJSON::TypeNativeDataJSON::getImageURL(void)
  {
    assert(flagHasImageURL);
    return storeImageURL;
  }

const std::string BlackjackNotUnderstoodCommandJSON::TypeNativeDataJSON::getImageURL(void) const
  {
    assert(flagHasImageURL);
    return storeImageURL;
  }

bool BlackjackNotUnderstoodCommandJSON::TypeNativeDataJSON::hasBankroll(void) const
  {
    return flagHasBankroll;
  }

double BlackjackNotUnderstoodCommandJSON::TypeNativeDataJSON::getBankroll(void)
  {
    assert(flagHasBankroll);
    if (textStoreBankroll != "")
      {
        return atof(textStoreBankroll.c_str());
      }
    return storeBankroll;
  }

const double BlackjackNotUnderstoodCommandJSON::TypeNativeDataJSON::getBankroll(void) const
  {
    assert(flagHasBankroll);
    if (textStoreBankroll != "")
      {
        return atof(textStoreBankroll.c_str());
      }
    return storeBankroll;
  }

std::string BlackjackNotUnderstoodCommandJSON::TypeNativeDataJSON::getBankrollAsText(void) const
  {
    assert(flagHasBankroll);
    if (textStoreBankroll == "")
      {
        char buffer[100];
        sprintf(&(buffer[0]), "%g", storeBankroll);
        return &(buffer[0]);
      }
    else
      {
        return (textStoreBankroll);
      }
  }

bool BlackjackNotUnderstoodCommandJSON::TypeNativeDataJSON::hasBetAmount(void) const
  {
    return flagHasBetAmount;
  }

double BlackjackNotUnderstoodCommandJSON::TypeNativeDataJSON::getBetAmount(void)
  {
    assert(flagHasBetAmount);
    if (textStoreBetAmount != "")
      {
        return atof(textStoreBetAmount.c_str());
      }
    return storeBetAmount;
  }

const double BlackjackNotUnderstoodCommandJSON::TypeNativeDataJSON::getBetAmount(void) const
  {
    assert(flagHasBetAmount);
    if (textStoreBetAmount != "")
      {
        return atof(textStoreBetAmount.c_str());
      }
    return storeBetAmount;
  }

std::string BlackjackNotUnderstoodCommandJSON::TypeNativeDataJSON::getBetAmountAsText(void) const
  {
    assert(flagHasBetAmount);
    if (textStoreBetAmount == "")
      {
        char buffer[100];
        sprintf(&(buffer[0]), "%g", storeBetAmount);
        return &(buffer[0]);
      }
    else
      {
        return (textStoreBetAmount);
      }
  }

bool BlackjackNotUnderstoodCommandJSON::TypeNativeDataJSON::hasPlayerHand(void) const
  {
    return flagHasPlayerHand;
  }

BlackjackHandJSON * BlackjackNotUnderstoodCommandJSON::TypeNativeDataJSON::getPlayerHand(void)
  {
    assert(flagHasPlayerHand);
    return storePlayerHand;
  }

const BlackjackHandJSON * BlackjackNotUnderstoodCommandJSON::TypeNativeDataJSON::getPlayerHand(void) const
  {
    assert(flagHasPlayerHand);
    return storePlayerHand;
  }

bool BlackjackNotUnderstoodCommandJSON::TypeNativeDataJSON::hasPlayerHandTotal(void) const
  {
    return flagHasPlayerHandTotal;
  }

uint8_t BlackjackNotUnderstoodCommandJSON::TypeNativeDataJSON::getPlayerHandTotal(void)
  {
    assert(flagHasPlayerHandTotal);
    return storePlayerHandTotal;
  }

const uint8_t BlackjackNotUnderstoodCommandJSON::TypeNativeDataJSON::getPlayerHandTotal(void) const
  {
    assert(flagHasPlayerHandTotal);
    return storePlayerHandTotal;
  }

bool BlackjackNotUnderstoodCommandJSON::TypeNativeDataJSON::hasDealerHand(void) const
  {
    return flagHasDealerHand;
  }

BlackjackHandJSON * BlackjackNotUnderstoodCommandJSON::TypeNativeDataJSON::getDealerHand(void)
  {
    assert(flagHasDealerHand);
    return storeDealerHand;
  }

const BlackjackHandJSON * BlackjackNotUnderstoodCommandJSON::TypeNativeDataJSON::getDealerHand(void) const
  {
    assert(flagHasDealerHand);
    return storeDealerHand;
  }

bool BlackjackNotUnderstoodCommandJSON::TypeNativeDataJSON::hasDealerHandTotal(void) const
  {
    return flagHasDealerHandTotal;
  }

uint8_t BlackjackNotUnderstoodCommandJSON::TypeNativeDataJSON::getDealerHandTotal(void)
  {
    assert(flagHasDealerHandTotal);
    return storeDealerHandTotal;
  }

const uint8_t BlackjackNotUnderstoodCommandJSON::TypeNativeDataJSON::getDealerHandTotal(void) const
  {
    assert(flagHasDealerHandTotal);
    return storeDealerHandTotal;
  }

BlackjackNotUnderstoodCommandJSON::BlackjackNotUnderstoodCommandJSON(const BlackjackNotUnderstoodCommandJSON &)
  {
    assert(false);
  }

BlackjackNotUnderstoodCommandJSON &BlackjackNotUnderstoodCommandJSON::operator=(const BlackjackNotUnderstoodCommandJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *BlackjackNotUnderstoodCommandJSON::extraNativeDataToJSON(void) const
  {
    JSONValueHandler handler_NativeData;
    storeNativeData->write_as_json(&handler_NativeData);
    handler_NativeData.result->add_reference();
    return handler_NativeData.result;
  }

void BlackjackNotUnderstoodCommandJSON::fromJSONNativeData(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TypeNativeDataJSON *convert_classy = TypeNativeDataJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setNativeData(convert_classy);
    convert_classy->remove_reference();
  }

BlackjackNotUnderstoodCommandJSON::BlackjackNotUnderstoodCommandJSON(void) :
        flagHasNativeData(false)
  {
    extraIndex = create_string_index();
  }

BlackjackNotUnderstoodCommandJSON::~BlackjackNotUnderstoodCommandJSON(void)
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

const char *BlackjackNotUnderstoodCommandJSON::getBlackjackCommandKind(void) const
  {
    return "BlackjackNotUnderstoodCommand";
  }

bool BlackjackNotUnderstoodCommandJSON::hasNativeData(void) const
  {
    return flagHasNativeData;
  }

BlackjackNotUnderstoodCommandJSON::TypeNativeDataJSON * BlackjackNotUnderstoodCommandJSON::getNativeData(void)
  {
    assert(flagHasNativeData);
    return storeNativeData;
  }

const BlackjackNotUnderstoodCommandJSON::TypeNativeDataJSON * BlackjackNotUnderstoodCommandJSON::getNativeData(void) const
  {
    assert(flagHasNativeData);
    return storeNativeData;
  }

BlackjackNotUnderstoodCommandJSON::TypeNativeDataJSON *BlackjackNotUnderstoodCommandJSON::TypeNativeDataJSON::from_json(JSONValue *json_value, bool ignore_extras)
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
BlackjackNotUnderstoodCommandJSON *BlackjackNotUnderstoodCommandJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    BlackjackNotUnderstoodCommandJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<BlackjackNotUnderstoodCommandJSON>, BlackjackNotUnderstoodCommandJSON *, bool> generator("Type BlackjackNotUnderstoodCommand", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
