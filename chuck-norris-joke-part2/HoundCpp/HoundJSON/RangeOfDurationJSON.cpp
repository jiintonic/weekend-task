/* file "RangeOfDurationJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "RangeOfDurationJSON.h"

#include "RangeOfDurationJSON.h"


RangeOfDurationJSON::RangeOfDurationJSON(const RangeOfDurationJSON &)
  {
    assert(false);
  }

RangeOfDurationJSON &RangeOfDurationJSON::operator=(const RangeOfDurationJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void RangeOfDurationJSON::fromJSONLeftEndpoint(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DurationEndpointJSON *convert_classy = DurationEndpointJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setLeftEndpoint(convert_classy);
    convert_classy->remove_reference();
  }

void RangeOfDurationJSON::fromJSONRightEndpoint(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DurationEndpointJSON *convert_classy = DurationEndpointJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setRightEndpoint(convert_classy);
    convert_classy->remove_reference();
  }

RangeOfDurationJSON::RangeOfDurationJSON(void) :
        flagHasLeftEndpoint(false),
        flagHasRightEndpoint(false)
  {
    extraIndex = create_string_index();
  }

RangeOfDurationJSON::~RangeOfDurationJSON(void)
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

bool RangeOfDurationJSON::hasLeftEndpoint(void) const
  {
    return flagHasLeftEndpoint;
  }

DurationEndpointJSON * RangeOfDurationJSON::getLeftEndpoint(void)
  {
    assert(flagHasLeftEndpoint);
    return storeLeftEndpoint;
  }

const DurationEndpointJSON * RangeOfDurationJSON::getLeftEndpoint(void) const
  {
    assert(flagHasLeftEndpoint);
    return storeLeftEndpoint;
  }

bool RangeOfDurationJSON::hasRightEndpoint(void) const
  {
    return flagHasRightEndpoint;
  }

DurationEndpointJSON * RangeOfDurationJSON::getRightEndpoint(void)
  {
    assert(flagHasRightEndpoint);
    return storeRightEndpoint;
  }

const DurationEndpointJSON * RangeOfDurationJSON::getRightEndpoint(void) const
  {
    assert(flagHasRightEndpoint);
    return storeRightEndpoint;
  }

RangeOfDurationJSON *RangeOfDurationJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    RangeOfDurationJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<RangeOfDurationJSON>, RangeOfDurationJSON *, bool> generator("Type RangeOfDuration", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
