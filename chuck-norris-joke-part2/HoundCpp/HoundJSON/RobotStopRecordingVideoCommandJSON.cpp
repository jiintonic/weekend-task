/* file "RobotStopRecordingVideoCommandJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "RobotStopRecordingVideoCommandJSON.h"

#include "RobotStopRecordingVideoCommandJSON.h"


RobotStopRecordingVideoCommandJSON::RobotStopRecordingVideoCommandJSON(const RobotStopRecordingVideoCommandJSON &)
  {
    assert(false);
  }

RobotStopRecordingVideoCommandJSON &RobotStopRecordingVideoCommandJSON::operator=(const RobotStopRecordingVideoCommandJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

RobotStopRecordingVideoCommandJSON::RobotStopRecordingVideoCommandJSON(void)
  {
    extraIndex = create_string_index();
  }

RobotStopRecordingVideoCommandJSON::~RobotStopRecordingVideoCommandJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *RobotStopRecordingVideoCommandJSON::getRobotCommandKind(void) const
  {
    return "StopRecordingVideoCommand";
  }

RobotStopRecordingVideoCommandJSON *RobotStopRecordingVideoCommandJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    RobotStopRecordingVideoCommandJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<RobotStopRecordingVideoCommandJSON>, RobotStopRecordingVideoCommandJSON *, bool> generator("Type RobotStopRecordingVideoCommand", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
