/* file "RobotSetKnownRoomsCommandJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "RobotSetKnownRoomsCommandJSON.h"

#include "RobotSetKnownRoomsCommandJSON.h"


RobotSetKnownRoomsCommandJSON::RobotSetKnownRoomsCommandJSON(const RobotSetKnownRoomsCommandJSON &)
  {
    assert(false);
  }

RobotSetKnownRoomsCommandJSON &RobotSetKnownRoomsCommandJSON::operator=(const RobotSetKnownRoomsCommandJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *RobotSetKnownRoomsCommandJSON::extraKnownRoomsToJSON(void) const
  {
    JSONValueHandler handler_KnownRooms;
    storeKnownRooms->write_as_json(&handler_KnownRooms);
    handler_KnownRooms.result->add_reference();
    return handler_KnownRooms.result;
  }

void RobotSetKnownRoomsCommandJSON::fromJSONKnownRooms(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    KnownRoomsJSON *convert_classy = KnownRoomsJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setKnownRooms(convert_classy);
    convert_classy->remove_reference();
  }

RobotSetKnownRoomsCommandJSON::RobotSetKnownRoomsCommandJSON(void) :
        flagHasKnownRooms(false)
  {
    extraIndex = create_string_index();
  }

RobotSetKnownRoomsCommandJSON::~RobotSetKnownRoomsCommandJSON(void)
  {
    if (flagHasKnownRooms)
      {
        storeKnownRooms->remove_reference();
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *RobotSetKnownRoomsCommandJSON::getRobotCommandKind(void) const
  {
    return "RobotSetKnownRoomsCommand";
  }

bool RobotSetKnownRoomsCommandJSON::hasKnownRooms(void) const
  {
    return flagHasKnownRooms;
  }

KnownRoomsJSON * RobotSetKnownRoomsCommandJSON::getKnownRooms(void)
  {
    assert(flagHasKnownRooms);
    return storeKnownRooms;
  }

const KnownRoomsJSON * RobotSetKnownRoomsCommandJSON::getKnownRooms(void) const
  {
    assert(flagHasKnownRooms);
    return storeKnownRooms;
  }

RobotSetKnownRoomsCommandJSON *RobotSetKnownRoomsCommandJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    RobotSetKnownRoomsCommandJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<RobotSetKnownRoomsCommandJSON>, RobotSetKnownRoomsCommandJSON *, bool> generator("Type RobotSetKnownRoomsCommand", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
