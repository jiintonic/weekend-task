/* file "RoomParsingItemJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "RoomParsingItemJSON.h"

#include "RoomParsingItemJSON.h"


RoomParsingItemJSON::RoomParsingItemJSON(const RoomParsingItemJSON &)
  {
    assert(false);
  }

RoomParsingItemJSON &RoomParsingItemJSON::operator=(const RoomParsingItemJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void RoomParsingItemJSON::fromJSONRoomName(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field RoomName of RoomParsingItemJSON is not a string.");
    setRoomName(std::string(json_string->getData()));
  }

void RoomParsingItemJSON::fromJSONRoomUUID(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field RoomUUID of RoomParsingItemJSON is not a string.");
    setRoomUUID(std::string(json_string->getData()));
  }

RoomParsingItemJSON::RoomParsingItemJSON(void) :
        flagHasRoomName(false),
        flagHasRoomUUID(false)
  {
    extraIndex = create_string_index();
  }

RoomParsingItemJSON::~RoomParsingItemJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool RoomParsingItemJSON::hasRoomName(void) const
  {
    return flagHasRoomName;
  }

std::string RoomParsingItemJSON::getRoomName(void)
  {
    assert(flagHasRoomName);
    return storeRoomName;
  }

const std::string RoomParsingItemJSON::getRoomName(void) const
  {
    assert(flagHasRoomName);
    return storeRoomName;
  }

bool RoomParsingItemJSON::hasRoomUUID(void) const
  {
    return flagHasRoomUUID;
  }

std::string RoomParsingItemJSON::getRoomUUID(void)
  {
    assert(flagHasRoomUUID);
    return storeRoomUUID;
  }

const std::string RoomParsingItemJSON::getRoomUUID(void) const
  {
    assert(flagHasRoomUUID);
    return storeRoomUUID;
  }

RoomParsingItemJSON *RoomParsingItemJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    RoomParsingItemJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<RoomParsingItemJSON>, RoomParsingItemJSON *, bool> generator("Type RoomParsingItem", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
