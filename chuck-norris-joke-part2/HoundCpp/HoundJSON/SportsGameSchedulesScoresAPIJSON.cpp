/* file "SportsGameSchedulesScoresAPIJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "SportsGameSchedulesScoresAPIJSON.h"

#include "SportsGameSchedulesScoresAPIJSON.h"


SportsGameSchedulesScoresAPIJSON::SportsGameSchedulesScoresAPIJSON(const SportsGameSchedulesScoresAPIJSON &)
  {
    assert(false);
  }

SportsGameSchedulesScoresAPIJSON &SportsGameSchedulesScoresAPIJSON::operator=(const SportsGameSchedulesScoresAPIJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void SportsGameSchedulesScoresAPIJSON::fromJSONValue(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field Value of SportsGameSchedulesScoresAPIJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< TypeValue > vector_Value1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        TypeValue or_result;
        bool or_done = false;
        if (!or_done)
          {
            try
              {
                SportsResultScoreCricketJSON *convert_classy = SportsResultScoreCricketJSON::from_json(json_array1->component(num1), ignore_extras);
                convert_classy->add_reference();
                or_result.u.choice0 = convert_classy;
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
                SportsGameSchedulesScoresAPIGameJSON *convert_classy = SportsGameSchedulesScoresAPIGameJSON::from_json(json_array1->component(num1), ignore_extras);
                convert_classy->add_reference();
                or_result.u.choice1 = convert_classy;
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
            throw("The value for an element of field Value of SportsGameSchedulesScoresAPIJSON is not one of the allowed values.");
        vector_Value1[num1] = or_result;
      }
    initValue();
    for (size_t num2 = 0; num2 < vector_Value1.size(); ++num2)
        appendValue(vector_Value1[num2]);
    for (size_t num1 = 0; num1 < vector_Value1.size(); ++num1)
      {
        switch (vector_Value1[num1].key)
          {
            case 0:
                vector_Value1[num1].u.choice0->remove_reference();
                break;
            case 1:
                vector_Value1[num1].u.choice1->remove_reference();
                break;
            default:
                assert(false);
          }
      }
  }

SportsGameSchedulesScoresAPIJSON::SportsGameSchedulesScoresAPIJSON(void) :
        flagHasValue(false)
  {
  }

SportsGameSchedulesScoresAPIJSON::~SportsGameSchedulesScoresAPIJSON(void)
  {
    if (flagHasValue)
      {
        for (size_t num4 = 0; num4 < storeValue.size(); ++num4)
          {
            switch (storeValue[num4].key)
              {
                case 0:
                    storeValue[num4].u.choice0->remove_reference();
                    break;
                case 1:
                    storeValue[num4].u.choice1->remove_reference();
                    break;
                default:
                    assert(false);
              }
          }
      }
  }

bool SportsGameSchedulesScoresAPIJSON::hasValue(void) const
  {
    return flagHasValue;
  }

size_t SportsGameSchedulesScoresAPIJSON::countOfValue(void) const
  {
    assert(flagHasValue);
    return storeValue.size();
  }

SportsGameSchedulesScoresAPIJSON::TypeValue SportsGameSchedulesScoresAPIJSON::elementOfValue(size_t element_num)
  {
    assert(flagHasValue);
    return storeValue[element_num];
  }

const SportsGameSchedulesScoresAPIJSON::TypeValue SportsGameSchedulesScoresAPIJSON::elementOfValue(size_t element_num) const
  {
    assert(flagHasValue);
    return storeValue[element_num];
  }

std::vector< SportsGameSchedulesScoresAPIJSON::TypeValue > SportsGameSchedulesScoresAPIJSON::getValue(void)
  {
    assert(flagHasValue);
    return storeValue;
  }

const std::vector< SportsGameSchedulesScoresAPIJSON::TypeValue > SportsGameSchedulesScoresAPIJSON::getValue(void) const
  {
    assert(flagHasValue);
    return storeValue;
  }

SportsGameSchedulesScoresAPIJSON *SportsGameSchedulesScoresAPIJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    SportsGameSchedulesScoresAPIJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<SportsGameSchedulesScoresAPIJSON>, SportsGameSchedulesScoresAPIJSON *, bool> generator("Type SportsGameSchedulesScoresAPI", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
