/* file "HandHistoryJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "HandHistoryJSON.h"

#include "HandHistoryJSON.h"


HandHistoryJSON::HandHistoryJSON(const HandHistoryJSON &)
  {
    assert(false);
  }

HandHistoryJSON &HandHistoryJSON::operator=(const HandHistoryJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void HandHistoryJSON::fromJSONLastDateAndOrTime(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DateAndOrTimeJSON *convert_classy = DateAndOrTimeJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setLastDateAndOrTime(convert_classy);
    convert_classy->remove_reference();
  }

void HandHistoryJSON::fromJSONNumberOfPlayerCards(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    uint8_t extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field NumberOfPlayerCards of HandHistoryJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field NumberOfPlayerCards of HandHistoryJSON is not an integer.");
          }
        extracted_integer = (uint8_t)(json_rational->getUnsignedLongInt())    ;
      }
    else
      {
        extracted_integer = (uint8_t)(json_integer->getUnsignedLongInt())    ;
      }
    setNumberOfPlayerCards(extracted_integer);
  }

void HandHistoryJSON::fromJSONBetAmount(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field BetAmount of HandHistoryJSON is not a number.");
          }
      }
    setBetAmountText(the_rational_text);
  }

HandHistoryJSON::HandHistoryJSON(void) :
        flagHasLastDateAndOrTime(false),
        flagHasNumberOfPlayerCards(false),
        flagHasBetAmount(false)
  {
    extraIndex = create_string_index();
  }

HandHistoryJSON::~HandHistoryJSON(void)
  {
    if (flagHasLastDateAndOrTime)
      {
        storeLastDateAndOrTime->remove_reference();
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool HandHistoryJSON::hasLastDateAndOrTime(void) const
  {
    return flagHasLastDateAndOrTime;
  }

DateAndOrTimeJSON * HandHistoryJSON::getLastDateAndOrTime(void)
  {
    assert(flagHasLastDateAndOrTime);
    return storeLastDateAndOrTime;
  }

const DateAndOrTimeJSON * HandHistoryJSON::getLastDateAndOrTime(void) const
  {
    assert(flagHasLastDateAndOrTime);
    return storeLastDateAndOrTime;
  }

bool HandHistoryJSON::hasNumberOfPlayerCards(void) const
  {
    return flagHasNumberOfPlayerCards;
  }

uint8_t HandHistoryJSON::getNumberOfPlayerCards(void)
  {
    assert(flagHasNumberOfPlayerCards);
    return storeNumberOfPlayerCards;
  }

const uint8_t HandHistoryJSON::getNumberOfPlayerCards(void) const
  {
    assert(flagHasNumberOfPlayerCards);
    return storeNumberOfPlayerCards;
  }

bool HandHistoryJSON::hasBetAmount(void) const
  {
    return flagHasBetAmount;
  }

double HandHistoryJSON::getBetAmount(void)
  {
    assert(flagHasBetAmount);
    if (textStoreBetAmount != "")
      {
        return atof(textStoreBetAmount.c_str());
      }
    return storeBetAmount;
  }

const double HandHistoryJSON::getBetAmount(void) const
  {
    assert(flagHasBetAmount);
    if (textStoreBetAmount != "")
      {
        return atof(textStoreBetAmount.c_str());
      }
    return storeBetAmount;
  }

std::string HandHistoryJSON::getBetAmountAsText(void) const
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

HandHistoryJSON *HandHistoryJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    HandHistoryJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<HandHistoryJSON>, HandHistoryJSON *, bool> generator("Type HandHistory", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
