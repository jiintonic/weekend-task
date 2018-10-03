/* file "IntegerIntervalJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "IntegerIntervalJSON.h"

#include "IntegerIntervalJSON.h"


IntegerIntervalJSON::IntegerIntervalJSON(const IntegerIntervalJSON &)
  {
    assert(false);
  }

IntegerIntervalJSON &IntegerIntervalJSON::operator=(const IntegerIntervalJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void IntegerIntervalJSON::fromJSONLeftEndpoint(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    IntegerEndpointJSON *convert_classy = IntegerEndpointJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setLeftEndpoint(convert_classy);
    convert_classy->remove_reference();
  }

void IntegerIntervalJSON::fromJSONRightEndpoint(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    IntegerEndpointJSON *convert_classy = IntegerEndpointJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setRightEndpoint(convert_classy);
    convert_classy->remove_reference();
  }

IntegerIntervalJSON::IntegerIntervalJSON(void) :
        flagHasLeftEndpoint(false),
        flagHasRightEndpoint(false)
  {
    extraIndex = create_string_index();
  }

IntegerIntervalJSON::~IntegerIntervalJSON(void)
  {
    if (flagHasLeftEndpoint)
      {
        storeLeftEndpoint->remove_reference();
      }
    if (flagHasRightEndpoint)
      {
        storeRightEndpoint->remove_reference();
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool IntegerIntervalJSON::hasLeftEndpoint(void) const
  {
    return flagHasLeftEndpoint;
  }

IntegerEndpointJSON * IntegerIntervalJSON::getLeftEndpoint(void)
  {
    assert(flagHasLeftEndpoint);
    return storeLeftEndpoint;
  }

const IntegerEndpointJSON * IntegerIntervalJSON::getLeftEndpoint(void) const
  {
    assert(flagHasLeftEndpoint);
    return storeLeftEndpoint;
  }

bool IntegerIntervalJSON::hasRightEndpoint(void) const
  {
    return flagHasRightEndpoint;
  }

IntegerEndpointJSON * IntegerIntervalJSON::getRightEndpoint(void)
  {
    assert(flagHasRightEndpoint);
    return storeRightEndpoint;
  }

const IntegerEndpointJSON * IntegerIntervalJSON::getRightEndpoint(void) const
  {
    assert(flagHasRightEndpoint);
    return storeRightEndpoint;
  }

IntegerIntervalJSON *IntegerIntervalJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    IntegerIntervalJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<IntegerIntervalJSON>, IntegerIntervalJSON *, bool> generator("Type IntegerInterval", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
