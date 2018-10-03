/* file "BadTerrierExpressionJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "BadTerrierExpressionJSON.h"

#include "BadTerrierExpressionJSON.h"


BadTerrierExpressionJSON::BadTerrierExpressionJSON(const BadTerrierExpressionJSON &)
  {
    assert(false);
  }

BadTerrierExpressionJSON &BadTerrierExpressionJSON::operator=(const BadTerrierExpressionJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

BadTerrierExpressionJSON::BadTerrierExpressionJSON(void)
  {
    extraIndex = create_string_index();
  }

BadTerrierExpressionJSON::~BadTerrierExpressionJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *BadTerrierExpressionJSON::getErrorType(void) const
  {
    return "BadTerrierExpression";
  }

BadTerrierExpressionJSON *BadTerrierExpressionJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    BadTerrierExpressionJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<BadTerrierExpressionJSON>, BadTerrierExpressionJSON *, bool> generator("Type BadTerrierExpression", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
