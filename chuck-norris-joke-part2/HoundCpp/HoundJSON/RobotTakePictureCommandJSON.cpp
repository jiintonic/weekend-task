/* file "RobotTakePictureCommandJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "RobotTakePictureCommandJSON.h"

#include "RobotTakePictureCommandJSON.h"


RobotTakePictureCommandJSON::RobotTakePictureCommandJSON(const RobotTakePictureCommandJSON &)
  {
    assert(false);
  }

RobotTakePictureCommandJSON &RobotTakePictureCommandJSON::operator=(const RobotTakePictureCommandJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

RobotTakePictureCommandJSON::RobotTakePictureCommandJSON(void)
  {
    extraIndex = create_string_index();
  }

RobotTakePictureCommandJSON::~RobotTakePictureCommandJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *RobotTakePictureCommandJSON::getRobotCommandKind(void) const
  {
    return "TakePictureCommand";
  }

RobotTakePictureCommandJSON *RobotTakePictureCommandJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    RobotTakePictureCommandJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<RobotTakePictureCommandJSON>, RobotTakePictureCommandJSON *, bool> generator("Type RobotTakePictureCommand", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
