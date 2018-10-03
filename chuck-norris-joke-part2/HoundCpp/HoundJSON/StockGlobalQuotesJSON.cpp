/* file "StockGlobalQuotesJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "StockGlobalQuotesJSON.h"

#include "StockGlobalQuotesJSON.h"


StockGlobalQuotesJSON::StockGlobalQuotesJSON(const StockGlobalQuotesJSON &)
  {
    assert(false);
  }

StockGlobalQuotesJSON &StockGlobalQuotesJSON::operator=(const StockGlobalQuotesJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void StockGlobalQuotesJSON::fromJSONOutcome(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Outcome of StockGlobalQuotesJSON is not a string.");
    setOutcome(std::string(json_string->getData()));
  }

void StockGlobalQuotesJSON::fromJSONMessage(JSONValue *json_value, bool ignore_extras)
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
        throw("The value for field Message of StockGlobalQuotesJSON is not one of the allowed values.");
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

void StockGlobalQuotesJSON::fromJSONDelay(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TypeDelay or_result;
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
        throw("The value for field Delay of StockGlobalQuotesJSON is not one of the allowed values.");
    setDelay(or_result);
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

void StockGlobalQuotesJSON::fromJSONDate(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Date of StockGlobalQuotesJSON is not a string.");
    setDate(std::string(json_string->getData()));
  }

void StockGlobalQuotesJSON::fromJSONTime(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Time of StockGlobalQuotesJSON is not a string.");
    setTime(std::string(json_string->getData()));
  }

void StockGlobalQuotesJSON::fromJSONUTCOffset(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field UTCOffset of StockGlobalQuotesJSON is not a number.");
          }
      }
    setUTCOffsetText(the_rational_text);
  }

void StockGlobalQuotesJSON::fromJSONOpen(JSONValue *json_value, bool ignore_extras)
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
        throw("The value for field Open of StockGlobalQuotesJSON is not one of the allowed values.");
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

void StockGlobalQuotesJSON::fromJSONClose(JSONValue *json_value, bool ignore_extras)
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
        throw("The value for field Close of StockGlobalQuotesJSON is not one of the allowed values.");
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

void StockGlobalQuotesJSON::fromJSONHigh(JSONValue *json_value, bool ignore_extras)
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
        throw("The value for field High of StockGlobalQuotesJSON is not one of the allowed values.");
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

void StockGlobalQuotesJSON::fromJSONLow(JSONValue *json_value, bool ignore_extras)
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
        throw("The value for field Low of StockGlobalQuotesJSON is not one of the allowed values.");
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

void StockGlobalQuotesJSON::fromJSONLast(JSONValue *json_value, bool ignore_extras)
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
        throw("The value for field Last of StockGlobalQuotesJSON is not one of the allowed values.");
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

void StockGlobalQuotesJSON::fromJSONLastSize(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TypeLastSize or_result;
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
        throw("The value for field LastSize of StockGlobalQuotesJSON is not one of the allowed values.");
    setLastSize(or_result);
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

void StockGlobalQuotesJSON::fromJSONVolume(JSONValue *json_value, bool ignore_extras)
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
        throw("The value for field Volume of StockGlobalQuotesJSON is not one of the allowed values.");
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

void StockGlobalQuotesJSON::fromJSONPreviousClose(JSONValue *json_value, bool ignore_extras)
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
        throw("The value for field PreviousClose of StockGlobalQuotesJSON is not one of the allowed values.");
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

void StockGlobalQuotesJSON::fromJSONPreviousCloseDate(JSONValue *json_value, bool ignore_extras)
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
        throw("The value for field PreviousCloseDate of StockGlobalQuotesJSON is not one of the allowed values.");
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

void StockGlobalQuotesJSON::fromJSONChangeFromPreviousClose(JSONValue *json_value, bool ignore_extras)
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
        throw("The value for field ChangeFromPreviousClose of StockGlobalQuotesJSON is not one of the allowed values.");
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

void StockGlobalQuotesJSON::fromJSONPercentChangeFromPreviousClose(JSONValue *json_value, bool ignore_extras)
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
        throw("The value for field PercentChangeFromPreviousClose of StockGlobalQuotesJSON is not one of the allowed values.");
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

void StockGlobalQuotesJSON::fromJSONHigh52Weeks(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TypeHigh52Weeks or_result;
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
        throw("The value for field High52Weeks of StockGlobalQuotesJSON is not one of the allowed values.");
    setHigh52Weeks(or_result);
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

void StockGlobalQuotesJSON::fromJSONLow52Weeks(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TypeLow52Weeks or_result;
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
        throw("The value for field Low52Weeks of StockGlobalQuotesJSON is not one of the allowed values.");
    setLow52Weeks(or_result);
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

void StockGlobalQuotesJSON::fromJSONCurrency(JSONValue *json_value, bool ignore_extras)
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
        throw("The value for field Currency of StockGlobalQuotesJSON is not one of the allowed values.");
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

void StockGlobalQuotesJSON::fromJSONTradingHalted(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TypeTradingHalted or_result;
    bool or_done = false;
    if (!or_done)
      {
        try
          {
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
                    throw("The value for ??? is not true for false.");
                  }
              }
            or_result.u.choice0 = the_bool;
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
        throw("The value for field TradingHalted of StockGlobalQuotesJSON is not one of the allowed values.");
    setTradingHalted(or_result);
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

void StockGlobalQuotesJSON::fromJSONSecurity(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    StockSecurityDetailsJSON *convert_classy = StockSecurityDetailsJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setSecurity(convert_classy);
    convert_classy->remove_reference();
  }

StockGlobalQuotesJSON::StockGlobalQuotesJSON(void) :
        flagHasOutcome(false),
        flagHasMessage(false),
        flagHasDelay(false),
        flagHasDate(false),
        flagHasTime(false),
        flagHasUTCOffset(false),
        flagHasOpen(false),
        flagHasClose(false),
        flagHasHigh(false),
        flagHasLow(false),
        flagHasLast(false),
        flagHasLastSize(false),
        flagHasVolume(false),
        flagHasPreviousClose(false),
        flagHasPreviousCloseDate(false),
        flagHasChangeFromPreviousClose(false),
        flagHasPercentChangeFromPreviousClose(false),
        flagHasHigh52Weeks(false),
        flagHasLow52Weeks(false),
        flagHasCurrency(false),
        flagHasTradingHalted(false),
        flagHasSecurity(false)
  {
    extraIndex = create_string_index();
  }

StockGlobalQuotesJSON::~StockGlobalQuotesJSON(void)
  {
    if (flagHasSecurity)
      {
        storeSecurity->remove_reference();
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool StockGlobalQuotesJSON::hasOutcome(void) const
  {
    return flagHasOutcome;
  }

std::string StockGlobalQuotesJSON::getOutcome(void)
  {
    assert(flagHasOutcome);
    return storeOutcome;
  }

const std::string StockGlobalQuotesJSON::getOutcome(void) const
  {
    assert(flagHasOutcome);
    return storeOutcome;
  }

bool StockGlobalQuotesJSON::hasMessage(void) const
  {
    return flagHasMessage;
  }

StockGlobalQuotesJSON::TypeMessage StockGlobalQuotesJSON::getMessage(void)
  {
    assert(flagHasMessage);
    return storeMessage;
  }

const StockGlobalQuotesJSON::TypeMessage StockGlobalQuotesJSON::getMessage(void) const
  {
    assert(flagHasMessage);
    return storeMessage;
  }

bool StockGlobalQuotesJSON::hasDelay(void) const
  {
    return flagHasDelay;
  }

StockGlobalQuotesJSON::TypeDelay StockGlobalQuotesJSON::getDelay(void)
  {
    assert(flagHasDelay);
    return storeDelay;
  }

const StockGlobalQuotesJSON::TypeDelay StockGlobalQuotesJSON::getDelay(void) const
  {
    assert(flagHasDelay);
    return storeDelay;
  }

bool StockGlobalQuotesJSON::hasDate(void) const
  {
    return flagHasDate;
  }

std::string StockGlobalQuotesJSON::getDate(void)
  {
    assert(flagHasDate);
    return storeDate;
  }

const std::string StockGlobalQuotesJSON::getDate(void) const
  {
    assert(flagHasDate);
    return storeDate;
  }

bool StockGlobalQuotesJSON::hasTime(void) const
  {
    return flagHasTime;
  }

std::string StockGlobalQuotesJSON::getTime(void)
  {
    assert(flagHasTime);
    return storeTime;
  }

const std::string StockGlobalQuotesJSON::getTime(void) const
  {
    assert(flagHasTime);
    return storeTime;
  }

bool StockGlobalQuotesJSON::hasUTCOffset(void) const
  {
    return flagHasUTCOffset;
  }

double StockGlobalQuotesJSON::getUTCOffset(void)
  {
    assert(flagHasUTCOffset);
    if (textStoreUTCOffset != "")
      {
        return atof(textStoreUTCOffset.c_str());
      }
    return storeUTCOffset;
  }

const double StockGlobalQuotesJSON::getUTCOffset(void) const
  {
    assert(flagHasUTCOffset);
    if (textStoreUTCOffset != "")
      {
        return atof(textStoreUTCOffset.c_str());
      }
    return storeUTCOffset;
  }

std::string StockGlobalQuotesJSON::getUTCOffsetAsText(void) const
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

bool StockGlobalQuotesJSON::hasOpen(void) const
  {
    return flagHasOpen;
  }

StockGlobalQuotesJSON::TypeOpen StockGlobalQuotesJSON::getOpen(void)
  {
    assert(flagHasOpen);
    return storeOpen;
  }

const StockGlobalQuotesJSON::TypeOpen StockGlobalQuotesJSON::getOpen(void) const
  {
    assert(flagHasOpen);
    return storeOpen;
  }

bool StockGlobalQuotesJSON::hasClose(void) const
  {
    return flagHasClose;
  }

StockGlobalQuotesJSON::TypeClose StockGlobalQuotesJSON::getClose(void)
  {
    assert(flagHasClose);
    return storeClose;
  }

const StockGlobalQuotesJSON::TypeClose StockGlobalQuotesJSON::getClose(void) const
  {
    assert(flagHasClose);
    return storeClose;
  }

bool StockGlobalQuotesJSON::hasHigh(void) const
  {
    return flagHasHigh;
  }

StockGlobalQuotesJSON::TypeHigh StockGlobalQuotesJSON::getHigh(void)
  {
    assert(flagHasHigh);
    return storeHigh;
  }

const StockGlobalQuotesJSON::TypeHigh StockGlobalQuotesJSON::getHigh(void) const
  {
    assert(flagHasHigh);
    return storeHigh;
  }

bool StockGlobalQuotesJSON::hasLow(void) const
  {
    return flagHasLow;
  }

StockGlobalQuotesJSON::TypeLow StockGlobalQuotesJSON::getLow(void)
  {
    assert(flagHasLow);
    return storeLow;
  }

const StockGlobalQuotesJSON::TypeLow StockGlobalQuotesJSON::getLow(void) const
  {
    assert(flagHasLow);
    return storeLow;
  }

bool StockGlobalQuotesJSON::hasLast(void) const
  {
    return flagHasLast;
  }

StockGlobalQuotesJSON::TypeLast StockGlobalQuotesJSON::getLast(void)
  {
    assert(flagHasLast);
    return storeLast;
  }

const StockGlobalQuotesJSON::TypeLast StockGlobalQuotesJSON::getLast(void) const
  {
    assert(flagHasLast);
    return storeLast;
  }

bool StockGlobalQuotesJSON::hasLastSize(void) const
  {
    return flagHasLastSize;
  }

StockGlobalQuotesJSON::TypeLastSize StockGlobalQuotesJSON::getLastSize(void)
  {
    assert(flagHasLastSize);
    return storeLastSize;
  }

const StockGlobalQuotesJSON::TypeLastSize StockGlobalQuotesJSON::getLastSize(void) const
  {
    assert(flagHasLastSize);
    return storeLastSize;
  }

bool StockGlobalQuotesJSON::hasVolume(void) const
  {
    return flagHasVolume;
  }

StockGlobalQuotesJSON::TypeVolume StockGlobalQuotesJSON::getVolume(void)
  {
    assert(flagHasVolume);
    return storeVolume;
  }

const StockGlobalQuotesJSON::TypeVolume StockGlobalQuotesJSON::getVolume(void) const
  {
    assert(flagHasVolume);
    return storeVolume;
  }

bool StockGlobalQuotesJSON::hasPreviousClose(void) const
  {
    return flagHasPreviousClose;
  }

StockGlobalQuotesJSON::TypePreviousClose StockGlobalQuotesJSON::getPreviousClose(void)
  {
    assert(flagHasPreviousClose);
    return storePreviousClose;
  }

const StockGlobalQuotesJSON::TypePreviousClose StockGlobalQuotesJSON::getPreviousClose(void) const
  {
    assert(flagHasPreviousClose);
    return storePreviousClose;
  }

bool StockGlobalQuotesJSON::hasPreviousCloseDate(void) const
  {
    return flagHasPreviousCloseDate;
  }

StockGlobalQuotesJSON::TypePreviousCloseDate StockGlobalQuotesJSON::getPreviousCloseDate(void)
  {
    assert(flagHasPreviousCloseDate);
    return storePreviousCloseDate;
  }

const StockGlobalQuotesJSON::TypePreviousCloseDate StockGlobalQuotesJSON::getPreviousCloseDate(void) const
  {
    assert(flagHasPreviousCloseDate);
    return storePreviousCloseDate;
  }

bool StockGlobalQuotesJSON::hasChangeFromPreviousClose(void) const
  {
    return flagHasChangeFromPreviousClose;
  }

StockGlobalQuotesJSON::TypeChangeFromPreviousClose StockGlobalQuotesJSON::getChangeFromPreviousClose(void)
  {
    assert(flagHasChangeFromPreviousClose);
    return storeChangeFromPreviousClose;
  }

const StockGlobalQuotesJSON::TypeChangeFromPreviousClose StockGlobalQuotesJSON::getChangeFromPreviousClose(void) const
  {
    assert(flagHasChangeFromPreviousClose);
    return storeChangeFromPreviousClose;
  }

bool StockGlobalQuotesJSON::hasPercentChangeFromPreviousClose(void) const
  {
    return flagHasPercentChangeFromPreviousClose;
  }

StockGlobalQuotesJSON::TypePercentChangeFromPreviousClose StockGlobalQuotesJSON::getPercentChangeFromPreviousClose(void)
  {
    assert(flagHasPercentChangeFromPreviousClose);
    return storePercentChangeFromPreviousClose;
  }

const StockGlobalQuotesJSON::TypePercentChangeFromPreviousClose StockGlobalQuotesJSON::getPercentChangeFromPreviousClose(void) const
  {
    assert(flagHasPercentChangeFromPreviousClose);
    return storePercentChangeFromPreviousClose;
  }

bool StockGlobalQuotesJSON::hasHigh52Weeks(void) const
  {
    return flagHasHigh52Weeks;
  }

StockGlobalQuotesJSON::TypeHigh52Weeks StockGlobalQuotesJSON::getHigh52Weeks(void)
  {
    assert(flagHasHigh52Weeks);
    return storeHigh52Weeks;
  }

const StockGlobalQuotesJSON::TypeHigh52Weeks StockGlobalQuotesJSON::getHigh52Weeks(void) const
  {
    assert(flagHasHigh52Weeks);
    return storeHigh52Weeks;
  }

bool StockGlobalQuotesJSON::hasLow52Weeks(void) const
  {
    return flagHasLow52Weeks;
  }

StockGlobalQuotesJSON::TypeLow52Weeks StockGlobalQuotesJSON::getLow52Weeks(void)
  {
    assert(flagHasLow52Weeks);
    return storeLow52Weeks;
  }

const StockGlobalQuotesJSON::TypeLow52Weeks StockGlobalQuotesJSON::getLow52Weeks(void) const
  {
    assert(flagHasLow52Weeks);
    return storeLow52Weeks;
  }

bool StockGlobalQuotesJSON::hasCurrency(void) const
  {
    return flagHasCurrency;
  }

StockGlobalQuotesJSON::TypeCurrency StockGlobalQuotesJSON::getCurrency(void)
  {
    assert(flagHasCurrency);
    return storeCurrency;
  }

const StockGlobalQuotesJSON::TypeCurrency StockGlobalQuotesJSON::getCurrency(void) const
  {
    assert(flagHasCurrency);
    return storeCurrency;
  }

bool StockGlobalQuotesJSON::hasTradingHalted(void) const
  {
    return flagHasTradingHalted;
  }

StockGlobalQuotesJSON::TypeTradingHalted StockGlobalQuotesJSON::getTradingHalted(void)
  {
    assert(flagHasTradingHalted);
    return storeTradingHalted;
  }

const StockGlobalQuotesJSON::TypeTradingHalted StockGlobalQuotesJSON::getTradingHalted(void) const
  {
    assert(flagHasTradingHalted);
    return storeTradingHalted;
  }

bool StockGlobalQuotesJSON::hasSecurity(void) const
  {
    return flagHasSecurity;
  }

StockSecurityDetailsJSON * StockGlobalQuotesJSON::getSecurity(void)
  {
    assert(flagHasSecurity);
    return storeSecurity;
  }

const StockSecurityDetailsJSON * StockGlobalQuotesJSON::getSecurity(void) const
  {
    assert(flagHasSecurity);
    return storeSecurity;
  }

StockGlobalQuotesJSON *StockGlobalQuotesJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    StockGlobalQuotesJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<StockGlobalQuotesJSON>, StockGlobalQuotesJSON *, bool> generator("Type StockGlobalQuotes", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
