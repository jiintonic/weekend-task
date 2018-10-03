/* file "StockGlobalHistoricalQuoteJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "StockGlobalHistoricalQuoteJSON.h"

#include "StockGlobalHistoricalQuoteJSON.h"


StockGlobalHistoricalQuoteJSON::StockGlobalHistoricalQuoteJSON(const StockGlobalHistoricalQuoteJSON &)
  {
    assert(false);
  }

StockGlobalHistoricalQuoteJSON &StockGlobalHistoricalQuoteJSON::operator=(const StockGlobalHistoricalQuoteJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void StockGlobalHistoricalQuoteJSON::fromJSONOutcome(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Outcome of StockGlobalHistoricalQuoteJSON is not a string.");
    setOutcome(std::string(json_string->getData()));
  }

void StockGlobalHistoricalQuoteJSON::fromJSONMessage(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TypeMessage or_result;
    bool or_done = false;
    if (!or_done)
      {
        try
          {
            const JSONStringValue *json_string = json_value->string_value();
            if (json_string == NULL)
                throw("The value for ??? is not a string.");
            or_result.choice0 = std::string(json_string->getData());
            or_result.key = 0;
            or_done = true;
          }
        catch (char *e1)
          {
            free(e1);
          }
        catch (const char *e1)
          {
          }
      }
    if (!or_done)
      {
        try
          {
            or_result.key = 1;
            or_done = true;
          }
        catch (char *e1)
          {
            free(e1);
          }
        catch (const char *e1)
          {
          }
      }
    if (!or_done)
        throw("The value for field Message of StockGlobalHistoricalQuoteJSON is not one of the allowed values.");
    setMessage(or_result);
    switch (or_result.key)
      {
        case 0:
            break;
        case 1:
            break;
        default:
            assert(false);
      }
  }

void StockGlobalHistoricalQuoteJSON::fromJSONDate(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Date of StockGlobalHistoricalQuoteJSON is not a string.");
    setDate(std::string(json_string->getData()));
  }

void StockGlobalHistoricalQuoteJSON::fromJSONOpen(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TypeOpen or_result;
    bool or_done = false;
    if (!or_done)
      {
        try
          {
            const JSONRationalValue *json_rational = json_value->rational_value();
            double the_double;
            if (json_rational != NULL)
              {
                the_double = json_rational->getDouble();
              }
            else
              {
                const JSONIntegerValue *json_integer = json_value->integer_value();
                if (json_integer != NULL)
                  {
                    the_double = json_integer->getLongInt();
                  }
                else
                  {
                    throw("The value for ??? is not a number.");
                  }
              }
            or_result.u.choice0 = the_double;
            or_result.key = 0;
            or_done = true;
          }
        catch (char *e1)
          {
            free(e1);
          }
        catch (const char *e1)
          {
          }
      }
    if (!or_done)
      {
        try
          {
            or_result.key = 1;
            or_done = true;
          }
        catch (char *e1)
          {
            free(e1);
          }
        catch (const char *e1)
          {
          }
      }
    if (!or_done)
        throw("The value for field Open of StockGlobalHistoricalQuoteJSON is not one of the allowed values.");
    setOpen(or_result);
    switch (or_result.key)
      {
        case 0:
            break;
        case 1:
            break;
        default:
            assert(false);
      }
  }

void StockGlobalHistoricalQuoteJSON::fromJSONClose(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TypeClose or_result;
    bool or_done = false;
    if (!or_done)
      {
        try
          {
            const JSONRationalValue *json_rational = json_value->rational_value();
            double the_double;
            if (json_rational != NULL)
              {
                the_double = json_rational->getDouble();
              }
            else
              {
                const JSONIntegerValue *json_integer = json_value->integer_value();
                if (json_integer != NULL)
                  {
                    the_double = json_integer->getLongInt();
                  }
                else
                  {
                    throw("The value for ??? is not a number.");
                  }
              }
            or_result.u.choice0 = the_double;
            or_result.key = 0;
            or_done = true;
          }
        catch (char *e1)
          {
            free(e1);
          }
        catch (const char *e1)
          {
          }
      }
    if (!or_done)
      {
        try
          {
            or_result.key = 1;
            or_done = true;
          }
        catch (char *e1)
          {
            free(e1);
          }
        catch (const char *e1)
          {
          }
      }
    if (!or_done)
        throw("The value for field Close of StockGlobalHistoricalQuoteJSON is not one of the allowed values.");
    setClose(or_result);
    switch (or_result.key)
      {
        case 0:
            break;
        case 1:
            break;
        default:
            assert(false);
      }
  }

void StockGlobalHistoricalQuoteJSON::fromJSONHigh(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TypeHigh or_result;
    bool or_done = false;
    if (!or_done)
      {
        try
          {
            const JSONRationalValue *json_rational = json_value->rational_value();
            double the_double;
            if (json_rational != NULL)
              {
                the_double = json_rational->getDouble();
              }
            else
              {
                const JSONIntegerValue *json_integer = json_value->integer_value();
                if (json_integer != NULL)
                  {
                    the_double = json_integer->getLongInt();
                  }
                else
                  {
                    throw("The value for ??? is not a number.");
                  }
              }
            or_result.u.choice0 = the_double;
            or_result.key = 0;
            or_done = true;
          }
        catch (char *e1)
          {
            free(e1);
          }
        catch (const char *e1)
          {
          }
      }
    if (!or_done)
      {
        try
          {
            or_result.key = 1;
            or_done = true;
          }
        catch (char *e1)
          {
            free(e1);
          }
        catch (const char *e1)
          {
          }
      }
    if (!or_done)
        throw("The value for field High of StockGlobalHistoricalQuoteJSON is not one of the allowed values.");
    setHigh(or_result);
    switch (or_result.key)
      {
        case 0:
            break;
        case 1:
            break;
        default:
            assert(false);
      }
  }

void StockGlobalHistoricalQuoteJSON::fromJSONLow(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TypeLow or_result;
    bool or_done = false;
    if (!or_done)
      {
        try
          {
            const JSONRationalValue *json_rational = json_value->rational_value();
            double the_double;
            if (json_rational != NULL)
              {
                the_double = json_rational->getDouble();
              }
            else
              {
                const JSONIntegerValue *json_integer = json_value->integer_value();
                if (json_integer != NULL)
                  {
                    the_double = json_integer->getLongInt();
                  }
                else
                  {
                    throw("The value for ??? is not a number.");
                  }
              }
            or_result.u.choice0 = the_double;
            or_result.key = 0;
            or_done = true;
          }
        catch (char *e1)
          {
            free(e1);
          }
        catch (const char *e1)
          {
          }
      }
    if (!or_done)
      {
        try
          {
            or_result.key = 1;
            or_done = true;
          }
        catch (char *e1)
          {
            free(e1);
          }
        catch (const char *e1)
          {
          }
      }
    if (!or_done)
        throw("The value for field Low of StockGlobalHistoricalQuoteJSON is not one of the allowed values.");
    setLow(or_result);
    switch (or_result.key)
      {
        case 0:
            break;
        case 1:
            break;
        default:
            assert(false);
      }
  }

void StockGlobalHistoricalQuoteJSON::fromJSONLast(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TypeLast or_result;
    bool or_done = false;
    if (!or_done)
      {
        try
          {
            const JSONRationalValue *json_rational = json_value->rational_value();
            double the_double;
            if (json_rational != NULL)
              {
                the_double = json_rational->getDouble();
              }
            else
              {
                const JSONIntegerValue *json_integer = json_value->integer_value();
                if (json_integer != NULL)
                  {
                    the_double = json_integer->getLongInt();
                  }
                else
                  {
                    throw("The value for ??? is not a number.");
                  }
              }
            or_result.u.choice0 = the_double;
            or_result.key = 0;
            or_done = true;
          }
        catch (char *e1)
          {
            free(e1);
          }
        catch (const char *e1)
          {
          }
      }
    if (!or_done)
      {
        try
          {
            or_result.key = 1;
            or_done = true;
          }
        catch (char *e1)
          {
            free(e1);
          }
        catch (const char *e1)
          {
          }
      }
    if (!or_done)
        throw("The value for field Last of StockGlobalHistoricalQuoteJSON is not one of the allowed values.");
    setLast(or_result);
    switch (or_result.key)
      {
        case 0:
            break;
        case 1:
            break;
        default:
            assert(false);
      }
  }

void StockGlobalHistoricalQuoteJSON::fromJSONVolume(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TypeVolume or_result;
    bool or_done = false;
    if (!or_done)
      {
        try
          {
            const JSONRationalValue *json_rational = json_value->rational_value();
            double the_double;
            if (json_rational != NULL)
              {
                the_double = json_rational->getDouble();
              }
            else
              {
                const JSONIntegerValue *json_integer = json_value->integer_value();
                if (json_integer != NULL)
                  {
                    the_double = json_integer->getLongInt();
                  }
                else
                  {
                    throw("The value for ??? is not a number.");
                  }
              }
            or_result.u.choice0 = the_double;
            or_result.key = 0;
            or_done = true;
          }
        catch (char *e1)
          {
            free(e1);
          }
        catch (const char *e1)
          {
          }
      }
    if (!or_done)
      {
        try
          {
            or_result.key = 1;
            or_done = true;
          }
        catch (char *e1)
          {
            free(e1);
          }
        catch (const char *e1)
          {
          }
      }
    if (!or_done)
        throw("The value for field Volume of StockGlobalHistoricalQuoteJSON is not one of the allowed values.");
    setVolume(or_result);
    switch (or_result.key)
      {
        case 0:
            break;
        case 1:
            break;
        default:
            assert(false);
      }
  }

void StockGlobalHistoricalQuoteJSON::fromJSONSplitRatio(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TypeSplitRatio or_result;
    bool or_done = false;
    if (!or_done)
      {
        try
          {
            const JSONRationalValue *json_rational = json_value->rational_value();
            double the_double;
            if (json_rational != NULL)
              {
                the_double = json_rational->getDouble();
              }
            else
              {
                const JSONIntegerValue *json_integer = json_value->integer_value();
                if (json_integer != NULL)
                  {
                    the_double = json_integer->getLongInt();
                  }
                else
                  {
                    throw("The value for ??? is not a number.");
                  }
              }
            or_result.u.choice0 = the_double;
            or_result.key = 0;
            or_done = true;
          }
        catch (char *e1)
          {
            free(e1);
          }
        catch (const char *e1)
          {
          }
      }
    if (!or_done)
      {
        try
          {
            or_result.key = 1;
            or_done = true;
          }
        catch (char *e1)
          {
            free(e1);
          }
        catch (const char *e1)
          {
          }
      }
    if (!or_done)
        throw("The value for field SplitRatio of StockGlobalHistoricalQuoteJSON is not one of the allowed values.");
    setSplitRatio(or_result);
    switch (or_result.key)
      {
        case 0:
            break;
        case 1:
            break;
        default:
            assert(false);
      }
  }

void StockGlobalHistoricalQuoteJSON::fromJSONCurrency(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TypeCurrency or_result;
    bool or_done = false;
    if (!or_done)
      {
        try
          {
            const JSONStringValue *json_string = json_value->string_value();
            if (json_string == NULL)
                throw("The value for ??? is not a string.");
            or_result.choice0 = std::string(json_string->getData());
            or_result.key = 0;
            or_done = true;
          }
        catch (char *e1)
          {
            free(e1);
          }
        catch (const char *e1)
          {
          }
      }
    if (!or_done)
      {
        try
          {
            or_result.key = 1;
            or_done = true;
          }
        catch (char *e1)
          {
            free(e1);
          }
        catch (const char *e1)
          {
          }
      }
    if (!or_done)
        throw("The value for field Currency of StockGlobalHistoricalQuoteJSON is not one of the allowed values.");
    setCurrency(or_result);
    switch (or_result.key)
      {
        case 0:
            break;
        case 1:
            break;
        default:
            assert(false);
      }
  }

StockGlobalHistoricalQuoteJSON::StockGlobalHistoricalQuoteJSON(void) :
        flagHasOutcome(false),
        flagHasMessage(false),
        flagHasDate(false),
        flagHasOpen(false),
        flagHasClose(false),
        flagHasHigh(false),
        flagHasLow(false),
        flagHasLast(false),
        flagHasVolume(false),
        flagHasSplitRatio(false),
        flagHasCurrency(false)
  {
    extraIndex = create_string_index();
  }

StockGlobalHistoricalQuoteJSON::~StockGlobalHistoricalQuoteJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool StockGlobalHistoricalQuoteJSON::hasOutcome(void) const
  {
    return flagHasOutcome;
  }

std::string StockGlobalHistoricalQuoteJSON::getOutcome(void)
  {
    assert(flagHasOutcome);
    return storeOutcome;
  }

const std::string StockGlobalHistoricalQuoteJSON::getOutcome(void) const
  {
    assert(flagHasOutcome);
    return storeOutcome;
  }

bool StockGlobalHistoricalQuoteJSON::hasMessage(void) const
  {
    return flagHasMessage;
  }

StockGlobalHistoricalQuoteJSON::TypeMessage StockGlobalHistoricalQuoteJSON::getMessage(void)
  {
    assert(flagHasMessage);
    return storeMessage;
  }

const StockGlobalHistoricalQuoteJSON::TypeMessage StockGlobalHistoricalQuoteJSON::getMessage(void) const
  {
    assert(flagHasMessage);
    return storeMessage;
  }

bool StockGlobalHistoricalQuoteJSON::hasDate(void) const
  {
    return flagHasDate;
  }

std::string StockGlobalHistoricalQuoteJSON::getDate(void)
  {
    assert(flagHasDate);
    return storeDate;
  }

const std::string StockGlobalHistoricalQuoteJSON::getDate(void) const
  {
    assert(flagHasDate);
    return storeDate;
  }

bool StockGlobalHistoricalQuoteJSON::hasOpen(void) const
  {
    return flagHasOpen;
  }

StockGlobalHistoricalQuoteJSON::TypeOpen StockGlobalHistoricalQuoteJSON::getOpen(void)
  {
    assert(flagHasOpen);
    return storeOpen;
  }

const StockGlobalHistoricalQuoteJSON::TypeOpen StockGlobalHistoricalQuoteJSON::getOpen(void) const
  {
    assert(flagHasOpen);
    return storeOpen;
  }

bool StockGlobalHistoricalQuoteJSON::hasClose(void) const
  {
    return flagHasClose;
  }

StockGlobalHistoricalQuoteJSON::TypeClose StockGlobalHistoricalQuoteJSON::getClose(void)
  {
    assert(flagHasClose);
    return storeClose;
  }

const StockGlobalHistoricalQuoteJSON::TypeClose StockGlobalHistoricalQuoteJSON::getClose(void) const
  {
    assert(flagHasClose);
    return storeClose;
  }

bool StockGlobalHistoricalQuoteJSON::hasHigh(void) const
  {
    return flagHasHigh;
  }

StockGlobalHistoricalQuoteJSON::TypeHigh StockGlobalHistoricalQuoteJSON::getHigh(void)
  {
    assert(flagHasHigh);
    return storeHigh;
  }

const StockGlobalHistoricalQuoteJSON::TypeHigh StockGlobalHistoricalQuoteJSON::getHigh(void) const
  {
    assert(flagHasHigh);
    return storeHigh;
  }

bool StockGlobalHistoricalQuoteJSON::hasLow(void) const
  {
    return flagHasLow;
  }

StockGlobalHistoricalQuoteJSON::TypeLow StockGlobalHistoricalQuoteJSON::getLow(void)
  {
    assert(flagHasLow);
    return storeLow;
  }

const StockGlobalHistoricalQuoteJSON::TypeLow StockGlobalHistoricalQuoteJSON::getLow(void) const
  {
    assert(flagHasLow);
    return storeLow;
  }

bool StockGlobalHistoricalQuoteJSON::hasLast(void) const
  {
    return flagHasLast;
  }

StockGlobalHistoricalQuoteJSON::TypeLast StockGlobalHistoricalQuoteJSON::getLast(void)
  {
    assert(flagHasLast);
    return storeLast;
  }

const StockGlobalHistoricalQuoteJSON::TypeLast StockGlobalHistoricalQuoteJSON::getLast(void) const
  {
    assert(flagHasLast);
    return storeLast;
  }

bool StockGlobalHistoricalQuoteJSON::hasVolume(void) const
  {
    return flagHasVolume;
  }

StockGlobalHistoricalQuoteJSON::TypeVolume StockGlobalHistoricalQuoteJSON::getVolume(void)
  {
    assert(flagHasVolume);
    return storeVolume;
  }

const StockGlobalHistoricalQuoteJSON::TypeVolume StockGlobalHistoricalQuoteJSON::getVolume(void) const
  {
    assert(flagHasVolume);
    return storeVolume;
  }

bool StockGlobalHistoricalQuoteJSON::hasSplitRatio(void) const
  {
    return flagHasSplitRatio;
  }

StockGlobalHistoricalQuoteJSON::TypeSplitRatio StockGlobalHistoricalQuoteJSON::getSplitRatio(void)
  {
    assert(flagHasSplitRatio);
    return storeSplitRatio;
  }

const StockGlobalHistoricalQuoteJSON::TypeSplitRatio StockGlobalHistoricalQuoteJSON::getSplitRatio(void) const
  {
    assert(flagHasSplitRatio);
    return storeSplitRatio;
  }

bool StockGlobalHistoricalQuoteJSON::hasCurrency(void) const
  {
    return flagHasCurrency;
  }

StockGlobalHistoricalQuoteJSON::TypeCurrency StockGlobalHistoricalQuoteJSON::getCurrency(void)
  {
    assert(flagHasCurrency);
    return storeCurrency;
  }

const StockGlobalHistoricalQuoteJSON::TypeCurrency StockGlobalHistoricalQuoteJSON::getCurrency(void) const
  {
    assert(flagHasCurrency);
    return storeCurrency;
  }

StockGlobalHistoricalQuoteJSON *StockGlobalHistoricalQuoteJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    StockGlobalHistoricalQuoteJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<StockGlobalHistoricalQuoteJSON>, StockGlobalHistoricalQuoteJSON *, bool> generator("Type StockGlobalHistoricalQuote", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
