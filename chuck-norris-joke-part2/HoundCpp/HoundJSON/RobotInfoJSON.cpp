/* file "RobotInfoJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "RobotInfoJSON.h"

#include "RobotInfoJSON.h"


RobotInfoJSON::RobotInfoJSON(const RobotInfoJSON &)
  {
    assert(false);
  }

RobotInfoJSON &RobotInfoJSON::operator=(const RobotInfoJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void RobotInfoJSON::fromJSONRobotConfiguration(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    RobotConfigurationJSON *convert_classy = RobotConfigurationJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setRobotConfiguration(convert_classy);
    convert_classy->remove_reference();
  }

void RobotInfoJSON::fromJSONRobotState(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    RobotStateJSON *convert_classy = RobotStateJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setRobotState(convert_classy);
    convert_classy->remove_reference();
  }

RobotInfoJSON::RobotInfoJSON(void) :
        flagHasRobotConfiguration(false),
        flagHasRobotState(false)
  {
    extraIndex = create_string_index();
  }

RobotInfoJSON::~RobotInfoJSON(void)
  {
    if (flagHasRobotConfiguration)
      {
        storeRobotConfiguration->remove_reference();
      }
    if (flagHasRobotState)
      {
        storeRobotState->remove_reference();
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool RobotInfoJSON::hasRobotConfiguration(void) const
  {
    return flagHasRobotConfiguration;
  }

RobotConfigurationJSON * RobotInfoJSON::getRobotConfiguration(void)
  {
    assert(flagHasRobotConfiguration);
    return storeRobotConfiguration;
  }

const RobotConfigurationJSON * RobotInfoJSON::getRobotConfiguration(void) const
  {
    assert(flagHasRobotConfiguration);
    return storeRobotConfiguration;
  }

bool RobotInfoJSON::hasRobotState(void) const
  {
    return flagHasRobotState;
  }

RobotStateJSON * RobotInfoJSON::getRobotState(void)
  {
    assert(flagHasRobotState);
    return storeRobotState;
  }

const RobotStateJSON * RobotInfoJSON::getRobotState(void) const
  {
    assert(flagHasRobotState);
    return storeRobotState;
  }

RobotInfoJSON *RobotInfoJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    RobotInfoJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<RobotInfoJSON>, RobotInfoJSON *, bool> generator("Type RobotInfo", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
