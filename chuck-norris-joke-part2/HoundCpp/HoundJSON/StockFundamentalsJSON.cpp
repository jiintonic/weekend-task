/* file "StockFundamentalsJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "StockFundamentalsJSON.h"

#include "StockFundamentalsJSON.h"


StockFundamentalsJSON::StockFundamentalsJSON(const StockFundamentalsJSON &)
  {
    assert(false);
  }

StockFundamentalsJSON &StockFundamentalsJSON::operator=(const StockFundamentalsJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void StockFundamentalsJSON::fromJSONOutcome(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Outcome of StockFundamentalsJSON is not a string.");
    setOutcome(std::string(json_string->getData()));
  }

void StockFundamentalsJSON::fromJSONMessage(JSONValue *json_value, bool ignore_extras)
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
        throw("The value for field Message of StockFundamentalsJSON is not one of the allowed values.");
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

void StockFundamentalsJSON::fromJSONDelay(JSONValue *json_value, bool ignore_extras)
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
        throw("The value for field Delay of StockFundamentalsJSON is not one of the allowed values.");
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

void StockFundamentalsJSON::fromJSONFundamentals(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field Fundamentals of StockFundamentalsJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< StockFundamentalJSON * > vector_Fundamentals1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        StockFundamentalJSON *convert_classy = StockFundamentalJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_Fundamentals1[num1] = convert_classy;
      }
    initFundamentals();
    for (size_t num2 = 0; num2 < vector_Fundamentals1.size(); ++num2)
        appendFundamentals(vector_Fundamentals1[num2]);
    for (size_t num1 = 0; num1 < vector_Fundamentals1.size(); ++num1)
      {
        vector_Fundamentals1[num1]->remove_reference();
      }
  }

StockFundamentalsJSON::StockFundamentalsJSON(void) :
        flagHasOutcome(false),
        flagHasMessage(false),
        flagHasDelay(false),
        flagHasFundamentals(false)
  {
    extraIndex = create_string_index();
  }

StockFundamentalsJSON::~StockFundamentalsJSON(void)
  {
    if (flagHasFundamentals)
      {
        for (size_t num4 = 0; num4 < storeFundamentals.size(); ++num4)
          {
            storeFundamentals[num4]->remove_reference();
          }
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool StockFundamentalsJSON::hasOutcome(void) const
  {
    return flagHasOutcome;
  }

std::string StockFundamentalsJSON::getOutcome(void)
  {
    assert(flagHasOutcome);
    return storeOutcome;
  }

const std::string StockFundamentalsJSON::getOutcome(void) const
  {
    assert(flagHasOutcome);
    return storeOutcome;
  }

bool StockFundamentalsJSON::hasMessage(void) const
  {
    return flagHasMessage;
  }

StockFundamentalsJSON::TypeMessage StockFundamentalsJSON::getMessage(void)
  {
    assert(flagHasMessage);
    return storeMessage;
  }

const StockFundamentalsJSON::TypeMessage StockFundamentalsJSON::getMessage(void) const
  {
    assert(flagHasMessage);
    return storeMessage;
  }

bool StockFundamentalsJSON::hasDelay(void) const
  {
    return flagHasDelay;
  }

StockFundamentalsJSON::TypeDelay StockFundamentalsJSON::getDelay(void)
  {
    assert(flagHasDelay);
    return storeDelay;
  }

const StockFundamentalsJSON::TypeDelay StockFundamentalsJSON::getDelay(void) const
  {
    assert(flagHasDelay);
    return storeDelay;
  }

bool StockFundamentalsJSON::hasFundamentals(void) const
  {
    return flagHasFundamentals;
  }

size_t StockFundamentalsJSON::countOfFundamentals(void) const
  {
    assert(flagHasFundamentals);
    return storeFundamentals.size();
  }

StockFundamentalJSON * StockFundamentalsJSON::elementOfFundamentals(size_t element_num)
  {
    assert(flagHasFundamentals);
    return storeFundamentals[element_num];
  }

const StockFundamentalJSON * StockFundamentalsJSON::elementOfFundamentals(size_t element_num) const
  {
    assert(flagHasFundamentals);
    return storeFundamentals[element_num];
  }

std::vector< StockFundamentalJSON * > StockFundamentalsJSON::getFundamentals(void)
  {
    assert(flagHasFundamentals);
    return storeFundamentals;
  }

const std::vector< StockFundamentalJSON * > StockFundamentalsJSON::getFundamentals(void) const
  {
    assert(flagHasFundamentals);
    return storeFundamentals;
  }

StockFundamentalsJSON *StockFundamentalsJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    StockFundamentalsJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<StockFundamentalsJSON>, StockFundamentalsJSON *, bool> generator("Type StockFundamentals", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
