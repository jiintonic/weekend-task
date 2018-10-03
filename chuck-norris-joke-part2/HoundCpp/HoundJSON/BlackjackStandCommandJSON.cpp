/* file "BlackjackStandCommandJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "BlackjackStandCommandJSON.h"

#include "BlackjackStandCommandJSON.h"


BlackjackStandCommandJSON::TypeNativeDataJSON::TypeNativeDataJSON(const TypeNativeDataJSON &)
  {
    assert(false);
  }

BlackjackStandCommandJSON::TypeNativeDataJSON &BlackjackStandCommandJSON::TypeNativeDataJSON::operator=(const TypeNativeDataJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void BlackjackStandCommandJSON::TypeNativeDataJSON::fromJSONImageURL(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field ImageURL of TypeNativeDataJSON is not a string.");
    setImageURL(std::string(json_string->getData()));
  }

void BlackjackStandCommandJSON::TypeNativeDataJSON::fromJSONBankroll(JSONValue *json_value, bool ignore_extras)
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

void BlackjackStandCommandJSON::TypeNativeDataJSON::fromJSONPlayerHand(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    BlackjackHandJSON *convert_classy = BlackjackHandJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setPlayerHand(convert_classy);
    convert_classy->remove_reference();
  }

void BlackjackStandCommandJSON::TypeNativeDataJSON::fromJSONPlayerHandTotal(JSONValue *json_value, bool ignore_extras)
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

void BlackjackStandCommandJSON::TypeNativeDataJSON::fromJSONDealerHand(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    BlackjackHandJSON *convert_classy = BlackjackHandJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setDealerHand(convert_classy);
    convert_classy->remove_reference();
  }

void BlackjackStandCommandJSON::TypeNativeDataJSON::fromJSONDealerHandTotal(JSONValue *json_value, bool ignore_extras)
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

BlackjackStandCommandJSON::TypeNativeDataJSON::TypeNativeDataJSON(void) :
        flagHasImageURL(false),
        flagHasBankroll(false),
        flagHasPlayerHand(false),
        flagHasPlayerHandTotal(false),
        flagHasDealerHand(false),
        flagHasDealerHandTotal(false)
  {
    extraIndex = create_string_index();
  }

BlackjackStandCommandJSON::TypeNativeDataJSON::~TypeNativeDataJSON(void)
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

bool BlackjackStandCommandJSON::TypeNativeDataJSON::hasImageURL(void) const
  {
    return flagHasImageURL;
  }

std::string BlackjackStandCommandJSON::TypeNativeDataJSON::getImageURL(void)
  {
    assert(flagHasImageURL);
    return storeImageURL;
  }

const std::string BlackjackStandCommandJSON::TypeNativeDataJSON::getImageURL(void) const
  {
    assert(flagHasImageURL);
    return storeImageURL;
  }

bool BlackjackStandCommandJSON::TypeNativeDataJSON::hasBankroll(void) const
  {
    return flagHasBankroll;
  }

double BlackjackStandCommandJSON::TypeNativeDataJSON::getBankroll(void)
  {
    assert(flagHasBankroll);
    if (textStoreBankroll != "")
      {
        return atof(textStoreBankroll.c_str());
      }
    return storeBankroll;
  }

const double BlackjackStandCommandJSON::TypeNativeDataJSON::getBankroll(void) const
  {
    assert(flagHasBankroll);
    if (textStoreBankroll != "")
      {
        return atof(textStoreBankroll.c_str());
      }
    return storeBankroll;
  }

std::string BlackjackStandCommandJSON::TypeNativeDataJSON::getBankrollAsText(void) const
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

bool BlackjackStandCommandJSON::TypeNativeDataJSON::hasPlayerHand(void) const
  {
    return flagHasPlayerHand;
  }

BlackjackHandJSON * BlackjackStandCommandJSON::TypeNativeDataJSON::getPlayerHand(void)
  {
    assert(flagHasPlayerHand);
    return storePlayerHand;
  }

const BlackjackHandJSON * BlackjackStandCommandJSON::TypeNativeDataJSON::getPlayerHand(void) const
  {
    assert(flagHasPlayerHand);
    return storePlayerHand;
  }

bool BlackjackStandCommandJSON::TypeNativeDataJSON::hasPlayerHandTotal(void) const
  {
    return flagHasPlayerHandTotal;
  }

uint8_t BlackjackStandCommandJSON::TypeNativeDataJSON::getPlayerHandTotal(void)
  {
    assert(flagHasPlayerHandTotal);
    return storePlayerHandTotal;
  }

const uint8_t BlackjackStandCommandJSON::TypeNativeDataJSON::getPlayerHandTotal(void) const
  {
    assert(flagHasPlayerHandTotal);
    return storePlayerHandTotal;
  }

bool BlackjackStandCommandJSON::TypeNativeDataJSON::hasDealerHand(void) const
  {
    return flagHasDealerHand;
  }

BlackjackHandJSON * BlackjackStandCommandJSON::TypeNativeDataJSON::getDealerHand(void)
  {
    assert(flagHasDealerHand);
    return storeDealerHand;
  }

const BlackjackHandJSON * BlackjackStandCommandJSON::TypeNativeDataJSON::getDealerHand(void) const
  {
    assert(flagHasDealerHand);
    return storeDealerHand;
  }

bool BlackjackStandCommandJSON::TypeNativeDataJSON::hasDealerHandTotal(void) const
  {
    return flagHasDealerHandTotal;
  }

uint8_t BlackjackStandCommandJSON::TypeNativeDataJSON::getDealerHandTotal(void)
  {
    assert(flagHasDealerHandTotal);
    return storeDealerHandTotal;
  }

const uint8_t BlackjackStandCommandJSON::TypeNativeDataJSON::getDealerHandTotal(void) const
  {
    assert(flagHasDealerHandTotal);
    return storeDealerHandTotal;
  }

BlackjackStandCommandJSON::BlackjackStandCommandJSON(const BlackjackStandCommandJSON &)
  {
    assert(false);
  }

BlackjackStandCommandJSON &BlackjackStandCommandJSON::operator=(const BlackjackStandCommandJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *BlackjackStandCommandJSON::extraNativeDataToJSON(void) const
  {
    JSONValueHandler handler_NativeData;
    storeNativeData->write_as_json(&handler_NativeData);
    handler_NativeData.result->add_reference();
    return handler_NativeData.result;
  }

void BlackjackStandCommandJSON::fromJSONNativeData(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TypeNativeDataJSON *convert_classy = TypeNativeDataJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setNativeData(convert_classy);
    convert_classy->remove_reference();
  }

BlackjackStandCommandJSON::BlackjackStandCommandJSON(void) :
        flagHasNativeData(false)
  {
    extraIndex = create_string_index();
  }

BlackjackStandCommandJSON::~BlackjackStandCommandJSON(void)
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

const char *BlackjackStandCommandJSON::getBlackjackCommandKind(void) const
  {
    return "BlackjackStandCommand";
  }

bool BlackjackStandCommandJSON::hasNativeData(void) const
  {
    return flagHasNativeData;
  }

BlackjackStandCommandJSON::TypeNativeDataJSON * BlackjackStandCommandJSON::getNativeData(void)
  {
    assert(flagHasNativeData);
    return storeNativeData;
  }

const BlackjackStandCommandJSON::TypeNativeDataJSON * BlackjackStandCommandJSON::getNativeData(void) const
  {
    assert(flagHasNativeData);
    return storeNativeData;
  }

BlackjackStandCommandJSON::TypeNativeDataJSON *BlackjackStandCommandJSON::TypeNativeDataJSON::from_json(JSONValue *json_value, bool ignore_extras)
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
BlackjackStandCommandJSON *BlackjackStandCommandJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    BlackjackStandCommandJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<BlackjackStandCommandJSON>, BlackjackStandCommandJSON *, bool> generator("Type BlackjackStandCommand", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
