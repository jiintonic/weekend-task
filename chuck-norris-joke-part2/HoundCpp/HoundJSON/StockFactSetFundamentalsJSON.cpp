/* file "StockFactSetFundamentalsJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "StockFactSetFundamentalsJSON.h"

#include "StockFactSetFundamentalsJSON.h"


StockFactSetFundamentalsJSON::StockFactSetFundamentalsJSON(const StockFactSetFundamentalsJSON &)
  {
    assert(false);
  }

StockFactSetFundamentalsJSON &StockFactSetFundamentalsJSON::operator=(const StockFactSetFundamentalsJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void StockFactSetFundamentalsJSON::fromJSONOutcome(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Outcome of StockFactSetFundamentalsJSON is not a string.");
    setOutcome(std::string(json_string->getData()));
  }

void StockFactSetFundamentalsJSON::fromJSONMessage(JSONValue *json_value, bool ignore_extras)
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
        throw("The value for field Message of StockFactSetFundamentalsJSON is not one of the allowed values.");
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

void StockFactSetFundamentalsJSON::fromJSONDelay(JSONValue *json_value, bool ignore_extras)
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
        throw("The value for field Delay of StockFactSetFundamentalsJSON is not one of the allowed values.");
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

void StockFactSetFundamentalsJSON::fromJSONFundamentalsSets(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field FundamentalsSets of StockFactSetFundamentalsJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< StockFundamentalsSetJSON * > vector_FundamentalsSets1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        StockFundamentalsSetJSON *convert_classy = StockFundamentalsSetJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_FundamentalsSets1[num1] = convert_classy;
      }
    initFundamentalsSets();
    for (size_t num2 = 0; num2 < vector_FundamentalsSets1.size(); ++num2)
        appendFundamentalsSets(vector_FundamentalsSets1[num2]);
    for (size_t num1 = 0; num1 < vector_FundamentalsSets1.size(); ++num1)
      {
        vector_FundamentalsSets1[num1]->remove_reference();
      }
  }

StockFactSetFundamentalsJSON::StockFactSetFundamentalsJSON(void) :
        flagHasOutcome(false),
        flagHasMessage(false),
        flagHasDelay(false),
        flagHasFundamentalsSets(false)
  {
    extraIndex = create_string_index();
  }

StockFactSetFundamentalsJSON::~StockFactSetFundamentalsJSON(void)
  {
    if (flagHasFundamentalsSets)
      {
        for (size_t num4 = 0; num4 < storeFundamentalsSets.size(); ++num4)
          {
            storeFundamentalsSets[num4]->remove_reference();
          }
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool StockFactSetFundamentalsJSON::hasOutcome(void) const
  {
    return flagHasOutcome;
  }

std::string StockFactSetFundamentalsJSON::getOutcome(void)
  {
    assert(flagHasOutcome);
    return storeOutcome;
  }

const std::string StockFactSetFundamentalsJSON::getOutcome(void) const
  {
    assert(flagHasOutcome);
    return storeOutcome;
  }

bool StockFactSetFundamentalsJSON::hasMessage(void) const
  {
    return flagHasMessage;
  }

StockFactSetFundamentalsJSON::TypeMessage StockFactSetFundamentalsJSON::getMessage(void)
  {
    assert(flagHasMessage);
    return storeMessage;
  }

const StockFactSetFundamentalsJSON::TypeMessage StockFactSetFundamentalsJSON::getMessage(void) const
  {
    assert(flagHasMessage);
    return storeMessage;
  }

bool StockFactSetFundamentalsJSON::hasDelay(void) const
  {
    return flagHasDelay;
  }

StockFactSetFundamentalsJSON::TypeDelay StockFactSetFundamentalsJSON::getDelay(void)
  {
    assert(flagHasDelay);
    return storeDelay;
  }

const StockFactSetFundamentalsJSON::TypeDelay StockFactSetFundamentalsJSON::getDelay(void) const
  {
    assert(flagHasDelay);
    return storeDelay;
  }

bool StockFactSetFundamentalsJSON::hasFundamentalsSets(void) const
  {
    return flagHasFundamentalsSets;
  }

size_t StockFactSetFundamentalsJSON::countOfFundamentalsSets(void) const
  {
    assert(flagHasFundamentalsSets);
    return storeFundamentalsSets.size();
  }

StockFundamentalsSetJSON * StockFactSetFundamentalsJSON::elementOfFundamentalsSets(size_t element_num)
  {
    assert(flagHasFundamentalsSets);
    return storeFundamentalsSets[element_num];
  }

const StockFundamentalsSetJSON * StockFactSetFundamentalsJSON::elementOfFundamentalsSets(size_t element_num) const
  {
    assert(flagHasFundamentalsSets);
    return storeFundamentalsSets[element_num];
  }

std::vector< StockFundamentalsSetJSON * > StockFactSetFundamentalsJSON::getFundamentalsSets(void)
  {
    assert(flagHasFundamentalsSets);
    return storeFundamentalsSets;
  }

const std::vector< StockFundamentalsSetJSON * > StockFactSetFundamentalsJSON::getFundamentalsSets(void) const
  {
    assert(flagHasFundamentalsSets);
    return storeFundamentalsSets;
  }

StockFactSetFundamentalsJSON *StockFactSetFundamentalsJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    StockFactSetFundamentalsJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<StockFactSetFundamentalsJSON>, StockFactSetFundamentalsJSON *, bool> generator("Type StockFactSetFundamentals", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
