/* file "RobotTakeVideoCommandJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "RobotTakeVideoCommandJSON.h"

#include "RobotTakeVideoCommandJSON.h"


RobotTakeVideoCommandJSON::RobotTakeVideoCommandJSON(const RobotTakeVideoCommandJSON &)
  {
    assert(false);
  }

RobotTakeVideoCommandJSON &RobotTakeVideoCommandJSON::operator=(const RobotTakeVideoCommandJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

RobotTakeVideoCommandJSON::RobotTakeVideoCommandJSON(void)
  {
    extraIndex = create_string_index();
  }

RobotTakeVideoCommandJSON::~RobotTakeVideoCommandJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *RobotTakeVideoCommandJSON::getRobotCommandKind(void) const
  {
    return "TakeVideoCommand";
  }

RobotTakeVideoCommandJSON *RobotTakeVideoCommandJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    RobotTakeVideoCommandJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<RobotTakeVideoCommandJSON>, RobotTakeVideoCommandJSON *, bool> generator("Type RobotTakeVideoCommand", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
