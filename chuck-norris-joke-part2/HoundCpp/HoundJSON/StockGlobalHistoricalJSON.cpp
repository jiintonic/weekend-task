/* file "StockGlobalHistoricalJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "StockGlobalHistoricalJSON.h"

#include "StockGlobalHistoricalJSON.h"


StockGlobalHistoricalJSON::StockGlobalHistoricalJSON(const StockGlobalHistoricalJSON &)
  {
    assert(false);
  }

StockGlobalHistoricalJSON &StockGlobalHistoricalJSON::operator=(const StockGlobalHistoricalJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void StockGlobalHistoricalJSON::fromJSONOutcome(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Outcome of StockGlobalHistoricalJSON is not a string.");
    setOutcome(std::string(json_string->getData()));
  }

void StockGlobalHistoricalJSON::fromJSONMessage(JSONValue *json_value, bool ignore_extras)
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
        throw("The value for field Message of StockGlobalHistoricalJSON is not one of the allowed values.");
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

void StockGlobalHistoricalJSON::fromJSONDelay(JSONValue *json_value, bool ignore_extras)
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
        throw("The value for field Delay of StockGlobalHistoricalJSON is not one of the allowed values.");
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

void StockGlobalHistoricalJSON::fromJSONGlobalQuotes(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field GlobalQuotes of StockGlobalHistoricalJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< StockGlobalHistoricalQuoteJSON * > vector_GlobalQuotes1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        StockGlobalHistoricalQuoteJSON *convert_classy = StockGlobalHistoricalQuoteJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_GlobalQuotes1[num1] = convert_classy;
      }
    initGlobalQuotes();
    for (size_t num2 = 0; num2 < vector_GlobalQuotes1.size(); ++num2)
        appendGlobalQuotes(vector_GlobalQuotes1[num2]);
    for (size_t num1 = 0; num1 < vector_GlobalQuotes1.size(); ++num1)
      {
        vector_GlobalQuotes1[num1]->remove_reference();
      }
  }

StockGlobalHistoricalJSON::StockGlobalHistoricalJSON(void) :
        flagHasOutcome(false),
        flagHasMessage(false),
        flagHasDelay(false),
        flagHasGlobalQuotes(false)
  {
    extraIndex = create_string_index();
  }

StockGlobalHistoricalJSON::~StockGlobalHistoricalJSON(void)
  {
    if (flagHasGlobalQuotes)
      {
        for (size_t num4 = 0; num4 < storeGlobalQuotes.size(); ++num4)
          {
            storeGlobalQuotes[num4]->remove_reference();
          }
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool StockGlobalHistoricalJSON::hasOutcome(void) const
  {
    return flagHasOutcome;
  }

std::string StockGlobalHistoricalJSON::getOutcome(void)
  {
    assert(flagHasOutcome);
    return storeOutcome;
  }

const std::string StockGlobalHistoricalJSON::getOutcome(void) const
  {
    assert(flagHasOutcome);
    return storeOutcome;
  }

bool StockGlobalHistoricalJSON::hasMessage(void) const
  {
    return flagHasMessage;
  }

StockGlobalHistoricalJSON::TypeMessage StockGlobalHistoricalJSON::getMessage(void)
  {
    assert(flagHasMessage);
    return storeMessage;
  }

const StockGlobalHistoricalJSON::TypeMessage StockGlobalHistoricalJSON::getMessage(void) const
  {
    assert(flagHasMessage);
    return storeMessage;
  }

bool StockGlobalHistoricalJSON::hasDelay(void) const
  {
    return flagHasDelay;
  }

StockGlobalHistoricalJSON::TypeDelay StockGlobalHistoricalJSON::getDelay(void)
  {
    assert(flagHasDelay);
    return storeDelay;
  }

const StockGlobalHistoricalJSON::TypeDelay StockGlobalHistoricalJSON::getDelay(void) const
  {
    assert(flagHasDelay);
    return storeDelay;
  }

bool StockGlobalHistoricalJSON::hasGlobalQuotes(void) const
  {
    return flagHasGlobalQuotes;
  }

size_t StockGlobalHistoricalJSON::countOfGlobalQuotes(void) const
  {
    assert(flagHasGlobalQuotes);
    return storeGlobalQuotes.size();
  }

StockGlobalHistoricalQuoteJSON * StockGlobalHistoricalJSON::elementOfGlobalQuotes(size_t element_num)
  {
    assert(flagHasGlobalQuotes);
    return storeGlobalQuotes[element_num];
  }

const StockGlobalHistoricalQuoteJSON * StockGlobalHistoricalJSON::elementOfGlobalQuotes(size_t element_num) const
  {
    assert(flagHasGlobalQuotes);
    return storeGlobalQuotes[element_num];
  }

std::vector< StockGlobalHistoricalQuoteJSON * > StockGlobalHistoricalJSON::getGlobalQuotes(void)
  {
    assert(flagHasGlobalQuotes);
    return storeGlobalQuotes;
  }

const std::vector< StockGlobalHistoricalQuoteJSON * > StockGlobalHistoricalJSON::getGlobalQuotes(void) const
  {
    assert(flagHasGlobalQuotes);
    return storeGlobalQuotes;
  }

StockGlobalHistoricalJSON *StockGlobalHistoricalJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    StockGlobalHistoricalJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<StockGlobalHistoricalJSON>, StockGlobalHistoricalJSON *, bool> generator("Type StockGlobalHistorical", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
