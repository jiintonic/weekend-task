/* file "StockGlobalIndicesHistoricalQuoteJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "StockGlobalIndicesHistoricalQuoteJSON.h"

#include "StockGlobalIndicesHistoricalQuoteJSON.h"


StockGlobalIndicesHistoricalQuoteJSON::StockGlobalIndicesHistoricalQuoteJSON(const StockGlobalIndicesHistoricalQuoteJSON &)
  {
    assert(false);
  }

StockGlobalIndicesHistoricalQuoteJSON &StockGlobalIndicesHistoricalQuoteJSON::operator=(const StockGlobalIndicesHistoricalQuoteJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void StockGlobalIndicesHistoricalQuoteJSON::fromJSONDate(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Date of StockGlobalIndicesHistoricalQuoteJSON is not a string.");
    setDate(std::string(json_string->getData()));
  }

void StockGlobalIndicesHistoricalQuoteJSON::fromJSONUTCOffset(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field UTCOffset of StockGlobalIndicesHistoricalQuoteJSON is not a number.");
          }
      }
    setUTCOffsetText(the_rational_text);
  }

void StockGlobalIndicesHistoricalQuoteJSON::fromJSONOpen(JSONValue *json_value, bool ignore_extras)
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
        throw("The value for field Open of StockGlobalIndicesHistoricalQuoteJSON is not one of the allowed values.");
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

void StockGlobalIndicesHistoricalQuoteJSON::fromJSONClose(JSONValue *json_value, bool ignore_extras)
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
        throw("The value for field Close of StockGlobalIndicesHistoricalQuoteJSON is not one of the allowed values.");
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

void StockGlobalIndicesHistoricalQuoteJSON::fromJSONHigh(JSONValue *json_value, bool ignore_extras)
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
        throw("The value for field High of StockGlobalIndicesHistoricalQuoteJSON is not one of the allowed values.");
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

void StockGlobalIndicesHistoricalQuoteJSON::fromJSONLow(JSONValue *json_value, bool ignore_extras)
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
        throw("The value for field Low of StockGlobalIndicesHistoricalQuoteJSON is not one of the allowed values.");
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

void StockGlobalIndicesHistoricalQuoteJSON::fromJSONLast(JSONValue *json_value, bool ignore_extras)
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
        throw("The value for field Last of StockGlobalIndicesHistoricalQuoteJSON is not one of the allowed values.");
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

void StockGlobalIndicesHistoricalQuoteJSON::fromJSONPreviousClose(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TypePreviousClose or_result;
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
        throw("The value for field PreviousClose of StockGlobalIndicesHistoricalQuoteJSON is not one of the allowed values.");
    setPreviousClose(or_result);
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

void StockGlobalIndicesHistoricalQuoteJSON::fromJSONPreviousCloseDate(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TypePreviousCloseDate or_result;
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
        throw("The value for field PreviousCloseDate of StockGlobalIndicesHistoricalQuoteJSON is not one of the allowed values.");
    setPreviousCloseDate(or_result);
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

void StockGlobalIndicesHistoricalQuoteJSON::fromJSONChangeFromPreviousClose(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TypeChangeFromPreviousClose or_result;
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
        throw("The value for field ChangeFromPreviousClose of StockGlobalIndicesHistoricalQuoteJSON is not one of the allowed values.");
    setChangeFromPreviousClose(or_result);
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

void StockGlobalIndicesHistoricalQuoteJSON::fromJSONPercentChangeFromPreviousClose(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TypePercentChangeFromPreviousClose or_result;
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
        throw("The value for field PercentChangeFromPreviousClose of StockGlobalIndicesHistoricalQuoteJSON is not one of the allowed values.");
    setPercentChangeFromPreviousClose(or_result);
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

StockGlobalIndicesHistoricalQuoteJSON::StockGlobalIndicesHistoricalQuoteJSON(void) :
        flagHasDate(false),
        flagHasUTCOffset(false),
        flagHasOpen(false),
        flagHasClose(false),
        flagHasHigh(false),
        flagHasLow(false),
        flagHasLast(false),
        flagHasPreviousClose(false),
        flagHasPreviousCloseDate(false),
        flagHasChangeFromPreviousClose(false),
        flagHasPercentChangeFromPreviousClose(false)
  {
    extraIndex = create_string_index();
  }

StockGlobalIndicesHistoricalQuoteJSON::~StockGlobalIndicesHistoricalQuoteJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool StockGlobalIndicesHistoricalQuoteJSON::hasDate(void) const
  {
    return flagHasDate;
  }

std::string StockGlobalIndicesHistoricalQuoteJSON::getDate(void)
  {
    assert(flagHasDate);
    return storeDate;
  }

const std::string StockGlobalIndicesHistoricalQuoteJSON::getDate(void) const
  {
    assert(flagHasDate);
    return storeDate;
  }

bool StockGlobalIndicesHistoricalQuoteJSON::hasUTCOffset(void) const
  {
    return flagHasUTCOffset;
  }

double StockGlobalIndicesHistoricalQuoteJSON::getUTCOffset(void)
  {
    assert(flagHasUTCOffset);
    if (textStoreUTCOffset != "")
      {
        return atof(textStoreUTCOffset.c_str());
      }
    return storeUTCOffset;
  }

const double StockGlobalIndicesHistoricalQuoteJSON::getUTCOffset(void) const
  {
    assert(flagHasUTCOffset);
    if (textStoreUTCOffset != "")
      {
        return atof(textStoreUTCOffset.c_str());
      }
    return storeUTCOffset;
  }

std::string StockGlobalIndicesHistoricalQuoteJSON::getUTCOffsetAsText(void) const
  {
    assert(flagHasUTCOffset);
    if (textStoreUTCOffset == "")
      {
        char buffer[100];
        sprintf(&(buffer[0]), "%g", storeUTCOffset);
        return &(buffer[0]);
      }
    else
      {
        return (textStoreUTCOffset);
      }
  }

bool StockGlobalIndicesHistoricalQuoteJSON::hasOpen(void) const
  {
    return flagHasOpen;
  }

StockGlobalIndicesHistoricalQuoteJSON::TypeOpen StockGlobalIndicesHistoricalQuoteJSON::getOpen(void)
  {
    assert(flagHasOpen);
    return storeOpen;
  }

const StockGlobalIndicesHistoricalQuoteJSON::TypeOpen StockGlobalIndicesHistoricalQuoteJSON::getOpen(void) const
  {
    assert(flagHasOpen);
    return storeOpen;
  }

bool StockGlobalIndicesHistoricalQuoteJSON::hasClose(void) const
  {
    return flagHasClose;
  }

StockGlobalIndicesHistoricalQuoteJSON::TypeClose StockGlobalIndicesHistoricalQuoteJSON::getClose(void)
  {
    assert(flagHasClose);
    return storeClose;
  }

const StockGlobalIndicesHistoricalQuoteJSON::TypeClose StockGlobalIndicesHistoricalQuoteJSON::getClose(void) const
  {
    assert(flagHasClose);
    return storeClose;
  }

bool StockGlobalIndicesHistoricalQuoteJSON::hasHigh(void) const
  {
    return flagHasHigh;
  }

StockGlobalIndicesHistoricalQuoteJSON::TypeHigh StockGlobalIndicesHistoricalQuoteJSON::getHigh(void)
  {
    assert(flagHasHigh);
    return storeHigh;
  }

const StockGlobalIndicesHistoricalQuoteJSON::TypeHigh StockGlobalIndicesHistoricalQuoteJSON::getHigh(void) const
  {
    assert(flagHasHigh);
    return storeHigh;
  }

bool StockGlobalIndicesHistoricalQuoteJSON::hasLow(void) const
  {
    return flagHasLow;
  }

StockGlobalIndicesHistoricalQuoteJSON::TypeLow StockGlobalIndicesHistoricalQuoteJSON::getLow(void)
  {
    assert(flagHasLow);
    return storeLow;
  }

const StockGlobalIndicesHistoricalQuoteJSON::TypeLow StockGlobalIndicesHistoricalQuoteJSON::getLow(void) const
  {
    assert(flagHasLow);
    return storeLow;
  }

bool StockGlobalIndicesHistoricalQuoteJSON::hasLast(void) const
  {
    return flagHasLast;
  }

StockGlobalIndicesHistoricalQuoteJSON::TypeLast StockGlobalIndicesHistoricalQuoteJSON::getLast(void)
  {
    assert(flagHasLast);
    return storeLast;
  }

const StockGlobalIndicesHistoricalQuoteJSON::TypeLast StockGlobalIndicesHistoricalQuoteJSON::getLast(void) const
  {
    assert(flagHasLast);
    return storeLast;
  }

bool StockGlobalIndicesHistoricalQuoteJSON::hasPreviousClose(void) const
  {
    return flagHasPreviousClose;
  }

StockGlobalIndicesHistoricalQuoteJSON::TypePreviousClose StockGlobalIndicesHistoricalQuoteJSON::getPreviousClose(void)
  {
    assert(flagHasPreviousClose);
    return storePreviousClose;
  }

const StockGlobalIndicesHistoricalQuoteJSON::TypePreviousClose StockGlobalIndicesHistoricalQuoteJSON::getPreviousClose(void) const
  {
    assert(flagHasPreviousClose);
    return storePreviousClose;
  }

bool StockGlobalIndicesHistoricalQuoteJSON::hasPreviousCloseDate(void) const
  {
    return flagHasPreviousCloseDate;
  }

StockGlobalIndicesHistoricalQuoteJSON::TypePreviousCloseDate StockGlobalIndicesHistoricalQuoteJSON::getPreviousCloseDate(void)
  {
    assert(flagHasPreviousCloseDate);
    return storePreviousCloseDate;
  }

const StockGlobalIndicesHistoricalQuoteJSON::TypePreviousCloseDate StockGlobalIndicesHistoricalQuoteJSON::getPreviousCloseDate(void) const
  {
    assert(flagHasPreviousCloseDate);
    return storePreviousCloseDate;
  }

bool StockGlobalIndicesHistoricalQuoteJSON::hasChangeFromPreviousClose(void) const
  {
    return flagHasChangeFromPreviousClose;
  }

StockGlobalIndicesHistoricalQuoteJSON::TypeChangeFromPreviousClose StockGlobalIndicesHistoricalQuoteJSON::getChangeFromPreviousClose(void)
  {
    assert(flagHasChangeFromPreviousClose);
    return storeChangeFromPreviousClose;
  }

const StockGlobalIndicesHistoricalQuoteJSON::TypeChangeFromPreviousClose StockGlobalIndicesHistoricalQuoteJSON::getChangeFromPreviousClose(void) const
  {
    assert(flagHasChangeFromPreviousClose);
    return storeChangeFromPreviousClose;
  }

bool StockGlobalIndicesHistoricalQuoteJSON::hasPercentChangeFromPreviousClose(void) const
  {
    return flagHasPercentChangeFromPreviousClose;
  }

StockGlobalIndicesHistoricalQuoteJSON::TypePercentChangeFromPreviousClose StockGlobalIndicesHistoricalQuoteJSON::getPercentChangeFromPreviousClose(void)
  {
    assert(flagHasPercentChangeFromPreviousClose);
    return storePercentChangeFromPreviousClose;
  }

const StockGlobalIndicesHistoricalQuoteJSON::TypePercentChangeFromPreviousClose StockGlobalIndicesHistoricalQuoteJSON::getPercentChangeFromPreviousClose(void) const
  {
    assert(flagHasPercentChangeFromPreviousClose);
    return storePercentChangeFromPreviousClose;
  }

StockGlobalIndicesHistoricalQuoteJSON *StockGlobalIndicesHistoricalQuoteJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    StockGlobalIndicesHistoricalQuoteJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<StockGlobalIndicesHistoricalQuoteJSON>, StockGlobalIndicesHistoricalQuoteJSON *, bool> generator("Type StockGlobalIndicesHistoricalQuote", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
