/* file "RobotStateJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "RobotStateJSON.h"

#include "RobotStateJSON.h"


RobotStateJSON::RobotStateJSON(const RobotStateJSON &)
  {
    assert(false);
  }

RobotStateJSON &RobotStateJSON::operator=(const RobotStateJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void RobotStateJSON::fromJSONCurrentAction(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field CurrentAction of RobotStateJSON is not a string.");
    setCurrentAction(std::string(json_string->getData()));
  }

void RobotStateJSON::fromJSONRecordingVideo(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONTrueValue *json_true = json_value->true_value();
    bool the_bool;
    if (json_true != NULL)
      {
        the_bool = true;
      }
    else
      {
        const JSONFalseValue *json_false = json_value->false_value();
        if (json_false != NULL)
          {
            the_bool = false;
          }
        else
          {
            throw("The value for field RecordingVideo of RobotStateJSON is not true for false.");
          }
      }
    setRecordingVideo(the_bool);
  }

void RobotStateJSON::fromJSONKnownRooms(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    KnownRoomsJSON *convert_classy = KnownRoomsJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setKnownRooms(convert_classy);
    convert_classy->remove_reference();
  }

RobotStateJSON::RobotStateJSON(void) :
        flagHasCurrentAction(false),
        flagHasRecordingVideo(false),
        flagHasKnownRooms(false)
  {
    extraIndex = create_string_index();
  }

RobotStateJSON::~RobotStateJSON(void)
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

bool RobotStateJSON::hasCurrentAction(void) const
  {
    return flagHasCurrentAction;
  }

std::string RobotStateJSON::getCurrentAction(void)
  {
    assert(flagHasCurrentAction);
    return storeCurrentAction;
  }

const std::string RobotStateJSON::getCurrentAction(void) const
  {
    assert(flagHasCurrentAction);
    return storeCurrentAction;
  }

bool RobotStateJSON::hasRecordingVideo(void) const
  {
    return flagHasRecordingVideo;
  }

bool RobotStateJSON::getRecordingVideo(void)
  {
    assert(flagHasRecordingVideo);
    return storeRecordingVideo;
  }

const bool RobotStateJSON::getRecordingVideo(void) const
  {
    assert(flagHasRecordingVideo);
    return storeRecordingVideo;
  }

bool RobotStateJSON::hasKnownRooms(void) const
  {
    return flagHasKnownRooms;
  }

KnownRoomsJSON * RobotStateJSON::getKnownRooms(void)
  {
    assert(flagHasKnownRooms);
    return storeKnownRooms;
  }

const KnownRoomsJSON * RobotStateJSON::getKnownRooms(void) const
  {
    assert(flagHasKnownRooms);
    return storeKnownRooms;
  }

RobotStateJSON *RobotStateJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    RobotStateJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<RobotStateJSON>, RobotStateJSON *, bool> generator("Type RobotState", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
