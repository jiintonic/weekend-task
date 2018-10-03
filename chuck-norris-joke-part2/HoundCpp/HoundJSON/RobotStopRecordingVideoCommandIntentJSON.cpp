/* file "RobotStopRecordingVideoCommandIntentJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "RobotStopRecordingVideoCommandIntentJSON.h"

#include "RobotStopRecordingVideoCommandIntentJSON.h"


RobotStopRecordingVideoCommandIntentJSON::RobotStopRecordingVideoCommandIntentJSON(const RobotStopRecordingVideoCommandIntentJSON &)
  {
    assert(false);
  }

RobotStopRecordingVideoCommandIntentJSON &RobotStopRecordingVideoCommandIntentJSON::operator=(const RobotStopRecordingVideoCommandIntentJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

RobotStopRecordingVideoCommandIntentJSON::RobotStopRecordingVideoCommandIntentJSON(void)
  {
    extraIndex = create_string_index();
  }

RobotStopRecordingVideoCommandIntentJSON::~RobotStopRecordingVideoCommandIntentJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *RobotStopRecordingVideoCommandIntentJSON::getRobotIntentKind(void) const
  {
    return "StopRecordingVideoCommand";
  }

RobotStopRecordingVideoCommandIntentJSON *RobotStopRecordingVideoCommandIntentJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    RobotStopRecordingVideoCommandIntentJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<RobotStopRecordingVideoCommandIntentJSON>, RobotStopRecordingVideoCommandIntentJSON *, bool> generator("Type RobotStopRecordingVideoCommandIntent", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
