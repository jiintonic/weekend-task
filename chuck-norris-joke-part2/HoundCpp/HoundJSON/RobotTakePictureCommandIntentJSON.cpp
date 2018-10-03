/* file "RobotTakePictureCommandIntentJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "RobotTakePictureCommandIntentJSON.h"

#include "RobotTakePictureCommandIntentJSON.h"


RobotTakePictureCommandIntentJSON::RobotTakePictureCommandIntentJSON(const RobotTakePictureCommandIntentJSON &)
  {
    assert(false);
  }

RobotTakePictureCommandIntentJSON &RobotTakePictureCommandIntentJSON::operator=(const RobotTakePictureCommandIntentJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

RobotTakePictureCommandIntentJSON::RobotTakePictureCommandIntentJSON(void)
  {
    extraIndex = create_string_index();
  }

RobotTakePictureCommandIntentJSON::~RobotTakePictureCommandIntentJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *RobotTakePictureCommandIntentJSON::getRobotIntentKind(void) const
  {
    return "TakePictureCommand";
  }

RobotTakePictureCommandIntentJSON *RobotTakePictureCommandIntentJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    RobotTakePictureCommandIntentJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<RobotTakePictureCommandIntentJSON>, RobotTakePictureCommandIntentJSON *, bool> generator("Type RobotTakePictureCommandIntent", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
