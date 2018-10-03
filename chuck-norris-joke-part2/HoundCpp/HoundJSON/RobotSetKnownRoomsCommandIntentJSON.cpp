/* file "RobotSetKnownRoomsCommandIntentJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "RobotSetKnownRoomsCommandIntentJSON.h"

#include "RobotSetKnownRoomsCommandIntentJSON.h"


RobotSetKnownRoomsCommandIntentJSON::RobotSetKnownRoomsCommandIntentJSON(const RobotSetKnownRoomsCommandIntentJSON &)
  {
    assert(false);
  }

RobotSetKnownRoomsCommandIntentJSON &RobotSetKnownRoomsCommandIntentJSON::operator=(const RobotSetKnownRoomsCommandIntentJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *RobotSetKnownRoomsCommandIntentJSON::extraRoomsListToJSON(void) const
  {
    JSONArrayValue *generated_array_1_RoomsList = new JSONArrayValue();
    for (size_t num1 = 0; num1 < storeRoomsList.size(); ++num1)
      {
        JSONValueHandler handler_RoomsList;
        storeRoomsList[num1]->write_as_json(&handler_RoomsList);
        handler_RoomsList.result->add_reference();
        generated_array_1_RoomsList->appendComponent(handler_RoomsList.result);
        handler_RoomsList.result->remove_reference();
      }
    return generated_array_1_RoomsList;
  }

void RobotSetKnownRoomsCommandIntentJSON::fromJSONRoomsList(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field RoomsList of RobotSetKnownRoomsCommandIntentJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< RoomJSON * > vector_RoomsList1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        RoomJSON *convert_classy = RoomJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_RoomsList1[num1] = convert_classy;
      }
    initRoomsList();
    for (size_t num2 = 0; num2 < vector_RoomsList1.size(); ++num2)
        appendRoomsList(vector_RoomsList1[num2]);
    for (size_t num1 = 0; num1 < vector_RoomsList1.size(); ++num1)
      {
        vector_RoomsList1[num1]->remove_reference();
      }
  }

RobotSetKnownRoomsCommandIntentJSON::RobotSetKnownRoomsCommandIntentJSON(void) :
        flagHasRoomsList(false)
  {
    extraIndex = create_string_index();
  }

RobotSetKnownRoomsCommandIntentJSON::~RobotSetKnownRoomsCommandIntentJSON(void)
  {
    if (flagHasRoomsList)
      {
        for (size_t num4 = 0; num4 < storeRoomsList.size(); ++num4)
          {
            storeRoomsList[num4]->remove_reference();
          }
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *RobotSetKnownRoomsCommandIntentJSON::getRobotIntentKind(void) const
  {
    return "RobotSetKnownRoomsCommand";
  }

bool RobotSetKnownRoomsCommandIntentJSON::hasRoomsList(void) const
  {
    return flagHasRoomsList;
  }

size_t RobotSetKnownRoomsCommandIntentJSON::countOfRoomsList(void) const
  {
    assert(flagHasRoomsList);
    return storeRoomsList.size();
  }

RoomJSON * RobotSetKnownRoomsCommandIntentJSON::elementOfRoomsList(size_t element_num)
  {
    assert(flagHasRoomsList);
    return storeRoomsList[element_num];
  }

const RoomJSON * RobotSetKnownRoomsCommandIntentJSON::elementOfRoomsList(size_t element_num) const
  {
    assert(flagHasRoomsList);
    return storeRoomsList[element_num];
  }

std::vector< RoomJSON * > RobotSetKnownRoomsCommandIntentJSON::getRoomsList(void)
  {
    assert(flagHasRoomsList);
    return storeRoomsList;
  }

const std::vector< RoomJSON * > RobotSetKnownRoomsCommandIntentJSON::getRoomsList(void) const
  {
    assert(flagHasRoomsList);
    return storeRoomsList;
  }

RobotSetKnownRoomsCommandIntentJSON *RobotSetKnownRoomsCommandIntentJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    RobotSetKnownRoomsCommandIntentJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<RobotSetKnownRoomsCommandIntentJSON>, RobotSetKnownRoomsCommandIntentJSON *, bool> generator("Type RobotSetKnownRoomsCommandIntent", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
