/* file "UserParsingDataJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "UserParsingDataJSON.h"

#include "UserParsingDataJSON.h"


UserParsingDataJSON::UserParsingDataJSON(const UserParsingDataJSON &)
  {
    assert(false);
  }

UserParsingDataJSON &UserParsingDataJSON::operator=(const UserParsingDataJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void UserParsingDataJSON::fromJSONWhatUserCallsUs(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field WhatUserCallsUs of UserParsingDataJSON is not a string.");
    setWhatUserCallsUs(std::string(json_string->getData()));
  }

void UserParsingDataJSON::fromJSONRealmData(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    if (json_value->object_value() == NULL)
        throw("The value for field RealmData of UserParsingDataJSON is not an object.");
    json_value->object_value()->add_reference();
    setRealmData(json_value->object_value());
    json_value->object_value()->remove_reference();
  }

UserParsingDataJSON::UserParsingDataJSON(void) :
        flagHasWhatUserCallsUs(false),
        flagHasRealmData(false)
  {
    extraIndex = create_string_index();
  }

UserParsingDataJSON::~UserParsingDataJSON(void)
  {
    if (flagHasRealmData)
      {
        storeRealmData->remove_reference();
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool UserParsingDataJSON::hasWhatUserCallsUs(void) const
  {
    return flagHasWhatUserCallsUs;
  }

std::string UserParsingDataJSON::getWhatUserCallsUs(void)
  {
    assert(flagHasWhatUserCallsUs);
    return storeWhatUserCallsUs;
  }

const std::string UserParsingDataJSON::getWhatUserCallsUs(void) const
  {
    assert(flagHasWhatUserCallsUs);
    return storeWhatUserCallsUs;
  }

bool UserParsingDataJSON::hasRealmData(void) const
  {
    return flagHasRealmData;
  }

JSONObjectValue * UserParsingDataJSON::getRealmData(void)
  {
    assert(flagHasRealmData);
    return storeRealmData;
  }

const JSONObjectValue * UserParsingDataJSON::getRealmData(void) const
  {
    assert(flagHasRealmData);
    return storeRealmData;
  }

UserParsingDataJSON *UserParsingDataJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    UserParsingDataJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<UserParsingDataJSON>, UserParsingDataJSON *, bool> generator("Type UserParsingData", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
