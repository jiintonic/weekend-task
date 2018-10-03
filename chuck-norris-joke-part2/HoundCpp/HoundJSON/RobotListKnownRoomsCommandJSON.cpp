/* file "RobotListKnownRoomsCommandJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "RobotListKnownRoomsCommandJSON.h"

#include "RobotListKnownRoomsCommandJSON.h"


RobotListKnownRoomsCommandJSON::RobotListKnownRoomsCommandJSON(const RobotListKnownRoomsCommandJSON &)
  {
    assert(false);
  }

RobotListKnownRoomsCommandJSON &RobotListKnownRoomsCommandJSON::operator=(const RobotListKnownRoomsCommandJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *RobotListKnownRoomsCommandJSON::extraKnownRoomsToJSON(void) const
  {
    JSONValueHandler handler_KnownRooms;
    storeKnownRooms->write_as_json(&handler_KnownRooms);
    handler_KnownRooms.result->add_reference();
    return handler_KnownRooms.result;
  }

void RobotListKnownRoomsCommandJSON::fromJSONKnownRooms(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    KnownRoomsJSON *convert_classy = KnownRoomsJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setKnownRooms(convert_classy);
    convert_classy->remove_reference();
  }

RobotListKnownRoomsCommandJSON::RobotListKnownRoomsCommandJSON(void) :
        flagHasKnownRooms(false)
  {
    extraIndex = create_string_index();
  }

RobotListKnownRoomsCommandJSON::~RobotListKnownRoomsCommandJSON(void)
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

const char *RobotListKnownRoomsCommandJSON::getRobotCommandKind(void) const
  {
    return "ListKnownRoomsCommand";
  }

bool RobotListKnownRoomsCommandJSON::hasKnownRooms(void) const
  {
    return flagHasKnownRooms;
  }

KnownRoomsJSON * RobotListKnownRoomsCommandJSON::getKnownRooms(void)
  {
    assert(flagHasKnownRooms);
    return storeKnownRooms;
  }

const KnownRoomsJSON * RobotListKnownRoomsCommandJSON::getKnownRooms(void) const
  {
    assert(flagHasKnownRooms);
    return storeKnownRooms;
  }

RobotListKnownRoomsCommandJSON *RobotListKnownRoomsCommandJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    RobotListKnownRoomsCommandJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<RobotListKnownRoomsCommandJSON>, RobotListKnownRoomsCommandJSON *, bool> generator("Type RobotListKnownRoomsCommand", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
