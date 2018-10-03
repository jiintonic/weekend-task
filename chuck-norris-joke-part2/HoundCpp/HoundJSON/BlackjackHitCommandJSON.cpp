/* file "BlackjackHitCommandJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "BlackjackHitCommandJSON.h"

#include "BlackjackHitCommandJSON.h"


BlackjackHitCommandJSON::TypeNativeDataJSON::TypeNativeDataJSON(const TypeNativeDataJSON &)
  {
    assert(false);
  }

BlackjackHitCommandJSON::TypeNativeDataJSON &BlackjackHitCommandJSON::TypeNativeDataJSON::operator=(const TypeNativeDataJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void BlackjackHitCommandJSON::TypeNativeDataJSON::fromJSONImageURL(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field ImageURL of TypeNativeDataJSON is not a string.");
    setImageURL(std::string(json_string->getData()));
  }

void BlackjackHitCommandJSON::TypeNativeDataJSON::fromJSONBankroll(JSONValue *json_value, bool ignore_extras)
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

void BlackjackHitCommandJSON::TypeNativeDataJSON::fromJSONBetAmount(JSONValue *json_value, bool ignore_extras)
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

void BlackjackHitCommandJSON::TypeNativeDataJSON::fromJSONPlayerHand(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    BlackjackHandJSON *convert_classy = BlackjackHandJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setPlayerHand(convert_classy);
    convert_classy->remove_reference();
  }

void BlackjackHitCommandJSON::TypeNativeDataJSON::fromJSONPlayerHandTotal(JSONValue *json_value, bool ignore_extras)
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

void BlackjackHitCommandJSON::TypeNativeDataJSON::fromJSONDealerHand(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    BlackjackHandJSON *convert_classy = BlackjackHandJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setDealerHand(convert_classy);
    convert_classy->remove_reference();
  }

void BlackjackHitCommandJSON::TypeNativeDataJSON::fromJSONDealerHandTotal(JSONValue *json_value, bool ignore_extras)
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

BlackjackHitCommandJSON::TypeNativeDataJSON::TypeNativeDataJSON(void) :
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

BlackjackHitCommandJSON::TypeNativeDataJSON::~TypeNativeDataJSON(void)
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

bool BlackjackHitCommandJSON::TypeNativeDataJSON::hasImageURL(void) const
  {
    return flagHasImageURL;
  }

std::string BlackjackHitCommandJSON::TypeNativeDataJSON::getImageURL(void)
  {
    assert(flagHasImageURL);
    return storeImageURL;
  }

const std::string BlackjackHitCommandJSON::TypeNativeDataJSON::getImageURL(void) const
  {
    assert(flagHasImageURL);
    return storeImageURL;
  }

bool BlackjackHitCommandJSON::TypeNativeDataJSON::hasBankroll(void) const
  {
    return flagHasBankroll;
  }

double BlackjackHitCommandJSON::TypeNativeDataJSON::getBankroll(void)
  {
    assert(flagHasBankroll);
    if (textStoreBankroll != "")
      {
        return atof(textStoreBankroll.c_str());
      }
    return storeBankroll;
  }

const double BlackjackHitCommandJSON::TypeNativeDataJSON::getBankroll(void) const
  {
    assert(flagHasBankroll);
    if (textStoreBankroll != "")
      {
        return atof(textStoreBankroll.c_str());
      }
    return storeBankroll;
  }

std::string BlackjackHitCommandJSON::TypeNativeDataJSON::getBankrollAsText(void) const
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

bool BlackjackHitCommandJSON::TypeNativeDataJSON::hasBetAmount(void) const
  {
    return flagHasBetAmount;
  }

double BlackjackHitCommandJSON::TypeNativeDataJSON::getBetAmount(void)
  {
    assert(flagHasBetAmount);
    if (textStoreBetAmount != "")
      {
        return atof(textStoreBetAmount.c_str());
      }
    return storeBetAmount;
  }

const double BlackjackHitCommandJSON::TypeNativeDataJSON::getBetAmount(void) const
  {
    assert(flagHasBetAmount);
    if (textStoreBetAmount != "")
      {
        return atof(textStoreBetAmount.c_str());
      }
    return storeBetAmount;
  }

std::string BlackjackHitCommandJSON::TypeNativeDataJSON::getBetAmountAsText(void) const
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

bool BlackjackHitCommandJSON::TypeNativeDataJSON::hasPlayerHand(void) const
  {
    return flagHasPlayerHand;
  }

BlackjackHandJSON * BlackjackHitCommandJSON::TypeNativeDataJSON::getPlayerHand(void)
  {
    assert(flagHasPlayerHand);
    return storePlayerHand;
  }

const BlackjackHandJSON * BlackjackHitCommandJSON::TypeNativeDataJSON::getPlayerHand(void) const
  {
    assert(flagHasPlayerHand);
    return storePlayerHand;
  }

bool BlackjackHitCommandJSON::TypeNativeDataJSON::hasPlayerHandTotal(void) const
  {
    return flagHasPlayerHandTotal;
  }

uint8_t BlackjackHitCommandJSON::TypeNativeDataJSON::getPlayerHandTotal(void)
  {
    assert(flagHasPlayerHandTotal);
    return storePlayerHandTotal;
  }

const uint8_t BlackjackHitCommandJSON::TypeNativeDataJSON::getPlayerHandTotal(void) const
  {
    assert(flagHasPlayerHandTotal);
    return storePlayerHandTotal;
  }

bool BlackjackHitCommandJSON::TypeNativeDataJSON::hasDealerHand(void) const
  {
    return flagHasDealerHand;
  }

BlackjackHandJSON * BlackjackHitCommandJSON::TypeNativeDataJSON::getDealerHand(void)
  {
    assert(flagHasDealerHand);
    return storeDealerHand;
  }

const BlackjackHandJSON * BlackjackHitCommandJSON::TypeNativeDataJSON::getDealerHand(void) const
  {
    assert(flagHasDealerHand);
    return storeDealerHand;
  }

bool BlackjackHitCommandJSON::TypeNativeDataJSON::hasDealerHandTotal(void) const
  {
    return flagHasDealerHandTotal;
  }

uint8_t BlackjackHitCommandJSON::TypeNativeDataJSON::getDealerHandTotal(void)
  {
    assert(flagHasDealerHandTotal);
    return storeDealerHandTotal;
  }

const uint8_t BlackjackHitCommandJSON::TypeNativeDataJSON::getDealerHandTotal(void) const
  {
    assert(flagHasDealerHandTotal);
    return storeDealerHandTotal;
  }

BlackjackHitCommandJSON::BlackjackHitCommandJSON(const BlackjackHitCommandJSON &)
  {
    assert(false);
  }

BlackjackHitCommandJSON &BlackjackHitCommandJSON::operator=(const BlackjackHitCommandJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *BlackjackHitCommandJSON::extraNativeDataToJSON(void) const
  {
    JSONValueHandler handler_NativeData;
    storeNativeData->write_as_json(&handler_NativeData);
    handler_NativeData.result->add_reference();
    return handler_NativeData.result;
  }

void BlackjackHitCommandJSON::fromJSONNativeData(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TypeNativeDataJSON *convert_classy = TypeNativeDataJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setNativeData(convert_classy);
    convert_classy->remove_reference();
  }

BlackjackHitCommandJSON::BlackjackHitCommandJSON(void) :
        flagHasNativeData(false)
  {
    extraIndex = create_string_index();
  }

BlackjackHitCommandJSON::~BlackjackHitCommandJSON(void)
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

const char *BlackjackHitCommandJSON::getBlackjackCommandKind(void) const
  {
    return "BlackjackHitCommand";
  }

bool BlackjackHitCommandJSON::hasNativeData(void) const
  {
    return flagHasNativeData;
  }

BlackjackHitCommandJSON::TypeNativeDataJSON * BlackjackHitCommandJSON::getNativeData(void)
  {
    assert(flagHasNativeData);
    return storeNativeData;
  }

const BlackjackHitCommandJSON::TypeNativeDataJSON * BlackjackHitCommandJSON::getNativeData(void) const
  {
    assert(flagHasNativeData);
    return storeNativeData;
  }

BlackjackHitCommandJSON::TypeNativeDataJSON *BlackjackHitCommandJSON::TypeNativeDataJSON::from_json(JSONValue *json_value, bool ignore_extras)
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
BlackjackHitCommandJSON *BlackjackHitCommandJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    BlackjackHitCommandJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<BlackjackHitCommandJSON>, BlackjackHitCommandJSON *, bool> generator("Type BlackjackHitCommand", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
