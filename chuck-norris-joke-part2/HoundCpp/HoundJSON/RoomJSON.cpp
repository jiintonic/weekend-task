/* file "RoomJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "RoomJSON.h"

#include "RoomJSON.h"


RoomJSON::RoomJSON(const RoomJSON &)
  {
    assert(false);
  }

RoomJSON &RoomJSON::operator=(const RoomJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void RoomJSON::fromJSONName(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Name of RoomJSON is not a string.");
    setName(std::string(json_string->getData()));
  }

void RoomJSON::fromJSONDeterminerMentioned(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field DeterminerMentioned of RoomJSON is not true for false.");
          }
      }
    setDeterminerMentioned(the_bool);
  }

void RoomJSON::fromJSONUUID(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field UUID of RoomJSON is not a string.");
    setUUID(std::string(json_string->getData()));
  }

RoomJSON::RoomJSON(void) :
        flagHasName(false),
        flagHasDeterminerMentioned(false),
        flagHasUUID(false)
  {
    extraIndex = create_string_index();
  }

RoomJSON::~RoomJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool RoomJSON::hasName(void) const
  {
    return flagHasName;
  }

std::string RoomJSON::getName(void)
  {
    assert(flagHasName);
    return storeName;
  }

const std::string RoomJSON::getName(void) const
  {
    assert(flagHasName);
    return storeName;
  }

bool RoomJSON::hasDeterminerMentioned(void) const
  {
    return flagHasDeterminerMentioned;
  }

bool RoomJSON::getDeterminerMentioned(void)
  {
    assert(flagHasDeterminerMentioned);
    return storeDeterminerMentioned;
  }

const bool RoomJSON::getDeterminerMentioned(void) const
  {
    assert(flagHasDeterminerMentioned);
    return storeDeterminerMentioned;
  }

bool RoomJSON::hasUUID(void) const
  {
    return flagHasUUID;
  }

std::string RoomJSON::getUUID(void)
  {
    assert(flagHasUUID);
    return storeUUID;
  }

const std::string RoomJSON::getUUID(void) const
  {
    assert(flagHasUUID);
    return storeUUID;
  }

RoomJSON *RoomJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    RoomJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<RoomJSON>, RoomJSON *, bool> generator("Type Room", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
