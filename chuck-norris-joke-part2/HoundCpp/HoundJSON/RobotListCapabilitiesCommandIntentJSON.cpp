/* file "RobotListCapabilitiesCommandIntentJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "RobotListCapabilitiesCommandIntentJSON.h"

#include "RobotListCapabilitiesCommandIntentJSON.h"


RobotListCapabilitiesCommandIntentJSON::RobotListCapabilitiesCommandIntentJSON(const RobotListCapabilitiesCommandIntentJSON &)
  {
    assert(false);
  }

RobotListCapabilitiesCommandIntentJSON &RobotListCapabilitiesCommandIntentJSON::operator=(const RobotListCapabilitiesCommandIntentJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

RobotListCapabilitiesCommandIntentJSON::RobotListCapabilitiesCommandIntentJSON(void)
  {
    extraIndex = create_string_index();
  }

RobotListCapabilitiesCommandIntentJSON::~RobotListCapabilitiesCommandIntentJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *RobotListCapabilitiesCommandIntentJSON::getRobotIntentKind(void) const
  {
    return "ListCapabilitiesCommand";
  }

RobotListCapabilitiesCommandIntentJSON *RobotListCapabilitiesCommandIntentJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    RobotListCapabilitiesCommandIntentJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<RobotListCapabilitiesCommandIntentJSON>, RobotListCapabilitiesCommandIntentJSON *, bool> generator("Type RobotListCapabilitiesCommandIntent", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
