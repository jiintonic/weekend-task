/* file "MoneyJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "MoneyJSON.h"

#include "MoneyJSON.h"


MoneyJSON::MoneyJSON(const MoneyJSON &)
  {
    assert(false);
  }

MoneyJSON &MoneyJSON::operator=(const MoneyJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void MoneyJSON::fromJSONCode(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Code of MoneyJSON is not a string.");
    setCode(std::string(json_string->getData()));
  }

void MoneyJSON::fromJSONSymbol(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Symbol of MoneyJSON is not a string.");
    setSymbol(std::string(json_string->getData()));
  }

void MoneyJSON::fromJSONAmount(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field Amount of MoneyJSON is not a number.");
          }
      }
    setAmountText(the_rational_text);
  }

MoneyJSON::MoneyJSON(void) :
        flagHasCode(false),
        flagHasSymbol(false),
        flagHasAmount(false)
  {
  }

MoneyJSON::~MoneyJSON(void)
  {
  }

bool MoneyJSON::hasCode(void) const
  {
    return flagHasCode;
  }

std::string MoneyJSON::getCode(void)
  {
    assert(flagHasCode);
    return storeCode;
  }

const std::string MoneyJSON::getCode(void) const
  {
    assert(flagHasCode);
    return storeCode;
  }

bool MoneyJSON::hasSymbol(void) const
  {
    return flagHasSymbol;
  }

std::string MoneyJSON::getSymbol(void)
  {
    assert(flagHasSymbol);
    return storeSymbol;
  }

const std::string MoneyJSON::getSymbol(void) const
  {
    assert(flagHasSymbol);
    return storeSymbol;
  }

bool MoneyJSON::hasAmount(void) const
  {
    return flagHasAmount;
  }

double MoneyJSON::getAmount(void)
  {
    assert(flagHasAmount);
    if (textStoreAmount != "")
      {
        return atof(textStoreAmount.c_str());
      }
    return storeAmount;
  }

const double MoneyJSON::getAmount(void) const
  {
    assert(flagHasAmount);
    if (textStoreAmount != "")
      {
        return atof(textStoreAmount.c_str());
      }
    return storeAmount;
  }

std::string MoneyJSON::getAmountAsText(void) const
  {
    assert(flagHasAmount);
    if (textStoreAmount == "")
      {
        char buffer[100];
        sprintf(&(buffer[0]), "%g", storeAmount);
        return &(buffer[0]);
      }
    else
      {
        return (textStoreAmount);
      }
  }

MoneyJSON *MoneyJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    MoneyJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<MoneyJSON>, MoneyJSON *, bool> generator("Type Money", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
