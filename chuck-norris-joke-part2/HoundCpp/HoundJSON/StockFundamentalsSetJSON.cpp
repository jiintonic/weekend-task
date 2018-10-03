/* file "StockFundamentalsSetJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "StockFundamentalsSetJSON.h"

#include "StockFundamentalsSetJSON.h"


StockFundamentalsSetJSON::StockFundamentalsSetJSON(const StockFundamentalsSetJSON &)
  {
    assert(false);
  }

StockFundamentalsSetJSON &StockFundamentalsSetJSON::operator=(const StockFundamentalsSetJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void StockFundamentalsSetJSON::fromJSONAsOfDate(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TypeAsOfDate or_result;
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
        throw("The value for field AsOfDate of StockFundamentalsSetJSON is not one of the allowed values.");
    setAsOfDate(or_result);
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

void StockFundamentalsSetJSON::fromJSONCurrency(JSONValue *json_value, bool ignore_extras)
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
        throw("The value for field Currency of StockFundamentalsSetJSON is not one of the allowed values.");
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

void StockFundamentalsSetJSON::fromJSONFundamentals(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field Fundamentals of StockFundamentalsSetJSON is not an array.");
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

StockFundamentalsSetJSON::StockFundamentalsSetJSON(void) :
        flagHasAsOfDate(false),
        flagHasCurrency(false),
        flagHasFundamentals(false)
  {
    extraIndex = create_string_index();
  }

StockFundamentalsSetJSON::~StockFundamentalsSetJSON(void)
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

bool StockFundamentalsSetJSON::hasAsOfDate(void) const
  {
    return flagHasAsOfDate;
  }

StockFundamentalsSetJSON::TypeAsOfDate StockFundamentalsSetJSON::getAsOfDate(void)
  {
    assert(flagHasAsOfDate);
    return storeAsOfDate;
  }

const StockFundamentalsSetJSON::TypeAsOfDate StockFundamentalsSetJSON::getAsOfDate(void) const
  {
    assert(flagHasAsOfDate);
    return storeAsOfDate;
  }

bool StockFundamentalsSetJSON::hasCurrency(void) const
  {
    return flagHasCurrency;
  }

StockFundamentalsSetJSON::TypeCurrency StockFundamentalsSetJSON::getCurrency(void)
  {
    assert(flagHasCurrency);
    return storeCurrency;
  }

const StockFundamentalsSetJSON::TypeCurrency StockFundamentalsSetJSON::getCurrency(void) const
  {
    assert(flagHasCurrency);
    return storeCurrency;
  }

bool StockFundamentalsSetJSON::hasFundamentals(void) const
  {
    return flagHasFundamentals;
  }

size_t StockFundamentalsSetJSON::countOfFundamentals(void) const
  {
    assert(flagHasFundamentals);
    return storeFundamentals.size();
  }

StockFundamentalJSON * StockFundamentalsSetJSON::elementOfFundamentals(size_t element_num)
  {
    assert(flagHasFundamentals);
    return storeFundamentals[element_num];
  }

const StockFundamentalJSON * StockFundamentalsSetJSON::elementOfFundamentals(size_t element_num) const
  {
    assert(flagHasFundamentals);
    return storeFundamentals[element_num];
  }

std::vector< StockFundamentalJSON * > StockFundamentalsSetJSON::getFundamentals(void)
  {
    assert(flagHasFundamentals);
    return storeFundamentals;
  }

const std::vector< StockFundamentalJSON * > StockFundamentalsSetJSON::getFundamentals(void) const
  {
    assert(flagHasFundamentals);
    return storeFundamentals;
  }

StockFundamentalsSetJSON *StockFundamentalsSetJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    StockFundamentalsSetJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<StockFundamentalsSetJSON>, StockFundamentalsSetJSON *, bool> generator("Type StockFundamentalsSet", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
