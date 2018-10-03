/* file "RobotListCapabilitiesCommandJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "RobotListCapabilitiesCommandJSON.h"

#include "RobotListCapabilitiesCommandJSON.h"


RobotListCapabilitiesCommandJSON::RobotListCapabilitiesCommandJSON(const RobotListCapabilitiesCommandJSON &)
  {
    assert(false);
  }

RobotListCapabilitiesCommandJSON &RobotListCapabilitiesCommandJSON::operator=(const RobotListCapabilitiesCommandJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

RobotListCapabilitiesCommandJSON::RobotListCapabilitiesCommandJSON(void)
  {
    extraIndex = create_string_index();
  }

RobotListCapabilitiesCommandJSON::~RobotListCapabilitiesCommandJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *RobotListCapabilitiesCommandJSON::getRobotCommandKind(void) const
  {
    return "ListCapabilitiesCommand";
  }

RobotListCapabilitiesCommandJSON *RobotListCapabilitiesCommandJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    RobotListCapabilitiesCommandJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<RobotListCapabilitiesCommandJSON>, RobotListCapabilitiesCommandJSON *, bool> generator("Type RobotListCapabilitiesCommand", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
