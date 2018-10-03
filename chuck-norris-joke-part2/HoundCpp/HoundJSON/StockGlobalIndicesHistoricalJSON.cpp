/* file "StockGlobalIndicesHistoricalJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "StockGlobalIndicesHistoricalJSON.h"

#include "StockGlobalIndicesHistoricalJSON.h"


StockGlobalIndicesHistoricalJSON::StockGlobalIndicesHistoricalJSON(const StockGlobalIndicesHistoricalJSON &)
  {
    assert(false);
  }

StockGlobalIndicesHistoricalJSON &StockGlobalIndicesHistoricalJSON::operator=(const StockGlobalIndicesHistoricalJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void StockGlobalIndicesHistoricalJSON::fromJSONOutcome(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Outcome of StockGlobalIndicesHistoricalJSON is not a string.");
    setOutcome(std::string(json_string->getData()));
  }

void StockGlobalIndicesHistoricalJSON::fromJSONMessage(JSONValue *json_value, bool ignore_extras)
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
        throw("The value for field Message of StockGlobalIndicesHistoricalJSON is not one of the allowed values.");
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

void StockGlobalIndicesHistoricalJSON::fromJSONDelay(JSONValue *json_value, bool ignore_extras)
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
        throw("The value for field Delay of StockGlobalIndicesHistoricalJSON is not one of the allowed values.");
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

void StockGlobalIndicesHistoricalJSON::fromJSONValues(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field Values of StockGlobalIndicesHistoricalJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< StockGlobalIndicesHistoricalQuoteJSON * > vector_Values1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        StockGlobalIndicesHistoricalQuoteJSON *convert_classy = StockGlobalIndicesHistoricalQuoteJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_Values1[num1] = convert_classy;
      }
    initValues();
    for (size_t num2 = 0; num2 < vector_Values1.size(); ++num2)
        appendValues(vector_Values1[num2]);
    for (size_t num1 = 0; num1 < vector_Values1.size(); ++num1)
      {
        vector_Values1[num1]->remove_reference();
      }
  }

StockGlobalIndicesHistoricalJSON::StockGlobalIndicesHistoricalJSON(void) :
        flagHasOutcome(false),
        flagHasMessage(false),
        flagHasDelay(false),
        flagHasValues(false)
  {
    extraIndex = create_string_index();
  }

StockGlobalIndicesHistoricalJSON::~StockGlobalIndicesHistoricalJSON(void)
  {
    if (flagHasValues)
      {
        for (size_t num4 = 0; num4 < storeValues.size(); ++num4)
          {
            storeValues[num4]->remove_reference();
          }
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool StockGlobalIndicesHistoricalJSON::hasOutcome(void) const
  {
    return flagHasOutcome;
  }

std::string StockGlobalIndicesHistoricalJSON::getOutcome(void)
  {
    assert(flagHasOutcome);
    return storeOutcome;
  }

const std::string StockGlobalIndicesHistoricalJSON::getOutcome(void) const
  {
    assert(flagHasOutcome);
    return storeOutcome;
  }

bool StockGlobalIndicesHistoricalJSON::hasMessage(void) const
  {
    return flagHasMessage;
  }

StockGlobalIndicesHistoricalJSON::TypeMessage StockGlobalIndicesHistoricalJSON::getMessage(void)
  {
    assert(flagHasMessage);
    return storeMessage;
  }

const StockGlobalIndicesHistoricalJSON::TypeMessage StockGlobalIndicesHistoricalJSON::getMessage(void) const
  {
    assert(flagHasMessage);
    return storeMessage;
  }

bool StockGlobalIndicesHistoricalJSON::hasDelay(void) const
  {
    return flagHasDelay;
  }

StockGlobalIndicesHistoricalJSON::TypeDelay StockGlobalIndicesHistoricalJSON::getDelay(void)
  {
    assert(flagHasDelay);
    return storeDelay;
  }

const StockGlobalIndicesHistoricalJSON::TypeDelay StockGlobalIndicesHistoricalJSON::getDelay(void) const
  {
    assert(flagHasDelay);
    return storeDelay;
  }

bool StockGlobalIndicesHistoricalJSON::hasValues(void) const
  {
    return flagHasValues;
  }

size_t StockGlobalIndicesHistoricalJSON::countOfValues(void) const
  {
    assert(flagHasValues);
    return storeValues.size();
  }

StockGlobalIndicesHistoricalQuoteJSON * StockGlobalIndicesHistoricalJSON::elementOfValues(size_t element_num)
  {
    assert(flagHasValues);
    return storeValues[element_num];
  }

const StockGlobalIndicesHistoricalQuoteJSON * StockGlobalIndicesHistoricalJSON::elementOfValues(size_t element_num) const
  {
    assert(flagHasValues);
    return storeValues[element_num];
  }

std::vector< StockGlobalIndicesHistoricalQuoteJSON * > StockGlobalIndicesHistoricalJSON::getValues(void)
  {
    assert(flagHasValues);
    return storeValues;
  }

const std::vector< StockGlobalIndicesHistoricalQuoteJSON * > StockGlobalIndicesHistoricalJSON::getValues(void) const
  {
    assert(flagHasValues);
    return storeValues;
  }

StockGlobalIndicesHistoricalJSON *StockGlobalIndicesHistoricalJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    StockGlobalIndicesHistoricalJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<StockGlobalIndicesHistoricalJSON>, StockGlobalIndicesHistoricalJSON *, bool> generator("Type StockGlobalIndicesHistorical", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
