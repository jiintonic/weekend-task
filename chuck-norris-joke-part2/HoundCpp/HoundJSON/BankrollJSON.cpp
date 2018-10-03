/* file "BankrollJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "BankrollJSON.h"

#include "BankrollJSON.h"


BankrollJSON::BankrollJSON(const BankrollJSON &)
  {
    assert(false);
  }

BankrollJSON &BankrollJSON::operator=(const BankrollJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void BankrollJSON::fromJSONBankroll(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field Bankroll of BankrollJSON is not a number.");
          }
      }
    setBankrollText(the_rational_text);
  }

BankrollJSON::BankrollJSON(void) :
        flagHasBankroll(false)
  {
    extraIndex = create_string_index();
  }

BankrollJSON::~BankrollJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool BankrollJSON::hasBankroll(void) const
  {
    return flagHasBankroll;
  }

double BankrollJSON::getBankroll(void)
  {
    assert(flagHasBankroll);
    if (textStoreBankroll != "")
      {
        return atof(textStoreBankroll.c_str());
      }
    return storeBankroll;
  }

const double BankrollJSON::getBankroll(void) const
  {
    assert(flagHasBankroll);
    if (textStoreBankroll != "")
      {
        return atof(textStoreBankroll.c_str());
      }
    return storeBankroll;
  }

std::string BankrollJSON::getBankrollAsText(void) const
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

BankrollJSON *BankrollJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    BankrollJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<BankrollJSON>, BankrollJSON *, bool> generator("Type Bankroll", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
