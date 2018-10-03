/* file "BlackjackDoubledownInformationNuggetJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "BlackjackDoubledownInformationNuggetJSON.h"

#include "BlackjackDoubledownInformationNuggetJSON.h"


BlackjackDoubledownInformationNuggetJSON::BlackjackDoubledownInformationNuggetJSON(const BlackjackDoubledownInformationNuggetJSON &)
  {
    assert(false);
  }

BlackjackDoubledownInformationNuggetJSON &BlackjackDoubledownInformationNuggetJSON::operator=(const BlackjackDoubledownInformationNuggetJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *BlackjackDoubledownInformationNuggetJSON::extraImageURLToJSON(void) const
  {
    JSONStringValue *generated_string_ImageURL = new JSONStringValue(storeImageURL.c_str());
    return generated_string_ImageURL;
  }

JSONValue *BlackjackDoubledownInformationNuggetJSON::extraBankrollToJSON(void) const
  {
    JSONValue *generated_rational_Bankroll;
    if (((double)(long int)storeBankroll) == storeBankroll)
        generated_rational_Bankroll = new JSONIntegerValue((long int)(storeBankroll));
    else
        generated_rational_Bankroll = new JSONRationalValue(storeBankroll, DBL_DIG);
    return generated_rational_Bankroll;
  }

JSONValue *BlackjackDoubledownInformationNuggetJSON::extraPlayerHandToJSON(void) const
  {
    JSONValueHandler handler_PlayerHand;
    storePlayerHand->write_as_json(&handler_PlayerHand);
    handler_PlayerHand.result->add_reference();
    return handler_PlayerHand.result;
  }

JSONValue *BlackjackDoubledownInformationNuggetJSON::extraPlayerHandTotalToJSON(void) const
  {
    JSONIntegerValue *generated_integer_PlayerHandTotal = new JSONIntegerValue(storePlayerHandTotal);
    return generated_integer_PlayerHandTotal;
  }

JSONValue *BlackjackDoubledownInformationNuggetJSON::extraDealerHandToJSON(void) const
  {
    JSONValueHandler handler_DealerHand;
    storeDealerHand->write_as_json(&handler_DealerHand);
    handler_DealerHand.result->add_reference();
    return handler_DealerHand.result;
  }

JSONValue *BlackjackDoubledownInformationNuggetJSON::extraDealerHandTotalToJSON(void) const
  {
    JSONIntegerValue *generated_integer_DealerHandTotal = new JSONIntegerValue(storeDealerHandTotal);
    return generated_integer_DealerHandTotal;
  }

void BlackjackDoubledownInformationNuggetJSON::fromJSONImageURL(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field ImageURL of BlackjackDoubledownInformationNuggetJSON is not a string.");
    setImageURL(std::string(json_string->getData()));
  }

void BlackjackDoubledownInformationNuggetJSON::fromJSONBankroll(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field Bankroll of BlackjackDoubledownInformationNuggetJSON is not a number.");
          }
      }
    setBankrollText(the_rational_text);
  }

void BlackjackDoubledownInformationNuggetJSON::fromJSONPlayerHand(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    BlackjackHandJSON *convert_classy = BlackjackHandJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setPlayerHand(convert_classy);
    convert_classy->remove_reference();
  }

void BlackjackDoubledownInformationNuggetJSON::fromJSONPlayerHandTotal(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    uint8_t extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field PlayerHandTotal of BlackjackDoubledownInformationNuggetJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field PlayerHandTotal of BlackjackDoubledownInformationNuggetJSON is not an integer.");
          }
        extracted_integer = (uint8_t)(json_rational->getUnsignedLongInt())    ;
      }
    else
      {
        extracted_integer = (uint8_t)(json_integer->getUnsignedLongInt())    ;
      }
    setPlayerHandTotal(extracted_integer);
  }

void BlackjackDoubledownInformationNuggetJSON::fromJSONDealerHand(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    BlackjackHandJSON *convert_classy = BlackjackHandJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setDealerHand(convert_classy);
    convert_classy->remove_reference();
  }

void BlackjackDoubledownInformationNuggetJSON::fromJSONDealerHandTotal(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    uint8_t extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field DealerHandTotal of BlackjackDoubledownInformationNuggetJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field DealerHandTotal of BlackjackDoubledownInformationNuggetJSON is not an integer.");
          }
        extracted_integer = (uint8_t)(json_rational->getUnsignedLongInt())    ;
      }
    else
      {
        extracted_integer = (uint8_t)(json_integer->getUnsignedLongInt())    ;
      }
    setDealerHandTotal(extracted_integer);
  }

BlackjackDoubledownInformationNuggetJSON::BlackjackDoubledownInformationNuggetJSON(void) :
        flagHasImageURL(false),
        flagHasBankroll(false),
        flagHasPlayerHand(false),
        flagHasPlayerHandTotal(false),
        flagHasDealerHand(false),
        flagHasDealerHandTotal(false)
  {
    extraIndex = create_string_index();
  }

BlackjackDoubledownInformationNuggetJSON::~BlackjackDoubledownInformationNuggetJSON(void)
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

const char *BlackjackDoubledownInformationNuggetJSON::getBlackjackNuggetKind(void) const
  {
    return "BlackjackDoubledownCommand";
  }

bool BlackjackDoubledownInformationNuggetJSON::hasImageURL(void) const
  {
    return flagHasImageURL;
  }

std::string BlackjackDoubledownInformationNuggetJSON::getImageURL(void)
  {
    assert(flagHasImageURL);
    return storeImageURL;
  }

const std::string BlackjackDoubledownInformationNuggetJSON::getImageURL(void) const
  {
    assert(flagHasImageURL);
    return storeImageURL;
  }

bool BlackjackDoubledownInformationNuggetJSON::hasBankroll(void) const
  {
    return flagHasBankroll;
  }

double BlackjackDoubledownInformationNuggetJSON::getBankroll(void)
  {
    assert(flagHasBankroll);
    if (textStoreBankroll != "")
      {
        return atof(textStoreBankroll.c_str());
      }
    return storeBankroll;
  }

const double BlackjackDoubledownInformationNuggetJSON::getBankroll(void) const
  {
    assert(flagHasBankroll);
    if (textStoreBankroll != "")
      {
        return atof(textStoreBankroll.c_str());
      }
    return storeBankroll;
  }

std::string BlackjackDoubledownInformationNuggetJSON::getBankrollAsText(void) const
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

bool BlackjackDoubledownInformationNuggetJSON::hasPlayerHand(void) const
  {
    return flagHasPlayerHand;
  }

BlackjackHandJSON * BlackjackDoubledownInformationNuggetJSON::getPlayerHand(void)
  {
    assert(flagHasPlayerHand);
    return storePlayerHand;
  }

const BlackjackHandJSON * BlackjackDoubledownInformationNuggetJSON::getPlayerHand(void) const
  {
    assert(flagHasPlayerHand);
    return storePlayerHand;
  }

bool BlackjackDoubledownInformationNuggetJSON::hasPlayerHandTotal(void) const
  {
    return flagHasPlayerHandTotal;
  }

uint8_t BlackjackDoubledownInformationNuggetJSON::getPlayerHandTotal(void)
  {
    assert(flagHasPlayerHandTotal);
    return storePlayerHandTotal;
  }

const uint8_t BlackjackDoubledownInformationNuggetJSON::getPlayerHandTotal(void) const
  {
    assert(flagHasPlayerHandTotal);
    return storePlayerHandTotal;
  }

bool BlackjackDoubledownInformationNuggetJSON::hasDealerHand(void) const
  {
    return flagHasDealerHand;
  }

BlackjackHandJSON * BlackjackDoubledownInformationNuggetJSON::getDealerHand(void)
  {
    assert(flagHasDealerHand);
    return storeDealerHand;
  }

const BlackjackHandJSON * BlackjackDoubledownInformationNuggetJSON::getDealerHand(void) const
  {
    assert(flagHasDealerHand);
    return storeDealerHand;
  }

bool BlackjackDoubledownInformationNuggetJSON::hasDealerHandTotal(void) const
  {
    return flagHasDealerHandTotal;
  }

uint8_t BlackjackDoubledownInformationNuggetJSON::getDealerHandTotal(void)
  {
    assert(flagHasDealerHandTotal);
    return storeDealerHandTotal;
  }

const uint8_t BlackjackDoubledownInformationNuggetJSON::getDealerHandTotal(void) const
  {
    assert(flagHasDealerHandTotal);
    return storeDealerHandTotal;
  }

BlackjackDoubledownInformationNuggetJSON *BlackjackDoubledownInformationNuggetJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    BlackjackDoubledownInformationNuggetJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<BlackjackDoubledownInformationNuggetJSON>, BlackjackDoubledownInformationNuggetJSON *, bool> generator("Type BlackjackDoubledownInformationNugget", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
