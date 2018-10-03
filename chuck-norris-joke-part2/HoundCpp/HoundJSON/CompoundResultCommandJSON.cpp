/* file "CompoundResultCommandJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "CompoundResultCommandJSON.h"

#include "CompoundResultCommandJSON.h"


CompoundResultCommandJSON::CompoundResultCommandJSON(const CompoundResultCommandJSON &)
  {
    assert(false);
  }

CompoundResultCommandJSON &CompoundResultCommandJSON::operator=(const CompoundResultCommandJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *CompoundResultCommandJSON::extraResultsToJSON(void) const
  {
    JSONArrayValue *generated_array_1_Results = new JSONArrayValue();
    for (size_t num1 = 0; num1 < storeResults.size(); ++num1)
      {
        JSONValueHandler handler_Results;
        storeResults[num1]->write_as_json(&handler_Results);
        handler_Results.result->add_reference();
        generated_array_1_Results->appendComponent(handler_Results.result);
        handler_Results.result->remove_reference();
      }
    return generated_array_1_Results;
  }

void CompoundResultCommandJSON::fromJSONResults(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field Results of CompoundResultCommandJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    if (count1 < 1)
        throw("The value for field Results of CompoundResultCommandJSON has too few elements.");
    std::vector< ResultClauseJSON * > vector_Results1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        ResultClauseJSON *convert_classy = ResultClauseJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_Results1[num1] = convert_classy;
      }
    assert(vector_Results1.size() >= 1);
    initResults();
    for (size_t num2 = 0; num2 < vector_Results1.size(); ++num2)
        appendResults(vector_Results1[num2]);
    for (size_t num1 = 0; num1 < vector_Results1.size(); ++num1)
      {
        vector_Results1[num1]->remove_reference();
      }
  }

CompoundResultCommandJSON::CompoundResultCommandJSON(void) :
        flagHasResults(false)
  {
    extraIndex = create_string_index();
  }

CompoundResultCommandJSON::~CompoundResultCommandJSON(void)
  {
    if (flagHasResults)
      {
        for (size_t num4 = 0; num4 < storeResults.size(); ++num4)
          {
            storeResults[num4]->remove_reference();
          }
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *CompoundResultCommandJSON::getCommandKind(void) const
  {
    return "CompoundResultCommand";
  }

bool CompoundResultCommandJSON::hasResults(void) const
  {
    return flagHasResults;
  }

size_t CompoundResultCommandJSON::countOfResults(void) const
  {
    assert(flagHasResults);
    return storeResults.size();
  }

ResultClauseJSON * CompoundResultCommandJSON::elementOfResults(size_t element_num)
  {
    assert(flagHasResults);
    return storeResults[element_num];
  }

const ResultClauseJSON * CompoundResultCommandJSON::elementOfResults(size_t element_num) const
  {
    assert(flagHasResults);
    return storeResults[element_num];
  }

std::vector< ResultClauseJSON * > CompoundResultCommandJSON::getResults(void)
  {
    assert(flagHasResults);
    return storeResults;
  }

const std::vector< ResultClauseJSON * > CompoundResultCommandJSON::getResults(void) const
  {
    assert(flagHasResults);
    return storeResults;
  }

CompoundResultCommandJSON *CompoundResultCommandJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    CompoundResultCommandJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<CompoundResultCommandJSON>, CompoundResultCommandJSON *, bool> generator("Type CompoundResultCommand", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
