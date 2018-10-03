/* file "RobotGoToRoomCommandJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "RobotGoToRoomCommandJSON.h"

#include "RobotGoToRoomCommandJSON.h"


RobotGoToRoomCommandJSON::RobotGoToRoomCommandJSON(const RobotGoToRoomCommandJSON &)
  {
    assert(false);
  }

RobotGoToRoomCommandJSON &RobotGoToRoomCommandJSON::operator=(const RobotGoToRoomCommandJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *RobotGoToRoomCommandJSON::extraRoomToJSON(void) const
  {
    JSONValueHandler handler_Room;
    storeRoom->write_as_json(&handler_Room);
    handler_Room.result->add_reference();
    return handler_Room.result;
  }

void RobotGoToRoomCommandJSON::fromJSONRoom(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    RoomJSON *convert_classy = RoomJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setRoom(convert_classy);
    convert_classy->remove_reference();
  }

RobotGoToRoomCommandJSON::RobotGoToRoomCommandJSON(void) :
        flagHasRoom(false)
  {
    extraIndex = create_string_index();
  }

RobotGoToRoomCommandJSON::~RobotGoToRoomCommandJSON(void)
  {
    if (flagHasRoom)
      {
        storeRoom->remove_reference();
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *RobotGoToRoomCommandJSON::getRobotCommandKind(void) const
  {
    return "GoToRoomCommand";
  }

bool RobotGoToRoomCommandJSON::hasRoom(void) const
  {
    return flagHasRoom;
  }

RoomJSON * RobotGoToRoomCommandJSON::getRoom(void)
  {
    assert(flagHasRoom);
    return storeRoom;
  }

const RoomJSON * RobotGoToRoomCommandJSON::getRoom(void) const
  {
    assert(flagHasRoom);
    return storeRoom;
  }

RobotGoToRoomCommandJSON *RobotGoToRoomCommandJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    RobotGoToRoomCommandJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<RobotGoToRoomCommandJSON>, RobotGoToRoomCommandJSON *, bool> generator("Type RobotGoToRoomCommand", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
