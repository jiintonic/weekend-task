/* file "SportsStandingsArgumentConferenceJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "SportsStandingsArgumentConferenceJSON.h"

#include "SportsStandingsArgumentConferenceJSON.h"


SportsStandingsArgumentConferenceJSON::TypeArgumentType SportsStandingsArgumentConferenceJSON::stringToArgumentType(const char *chars)
  {
    if (strcmp(chars, "SportsStandingsArgumentConference") == 0)
        return ArgumentType_SportsStandingsArgumentConference;
    throw("The value for field `ArgumentType' is not one of the legal values.");
  }

const char *SportsStandingsArgumentConferenceJSON::stringFromArgumentType(TypeArgumentType the_enum)
  {
    switch (the_enum)
      {
        case ArgumentType_SportsStandingsArgumentConference:
            return "SportsStandingsArgumentConference";
        default:
            assert(false);
            return NULL;
      }
  }

SportsStandingsArgumentConferenceJSON::SportsStandingsArgumentConferenceJSON(const SportsStandingsArgumentConferenceJSON &)
  {
    assert(false);
  }

SportsStandingsArgumentConferenceJSON &SportsStandingsArgumentConferenceJSON::operator=(const SportsStandingsArgumentConferenceJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void SportsStandingsArgumentConferenceJSON::fromJSONArgumentType(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field ArgumentType of SportsStandingsArgumentConferenceJSON is not a string.");
    if (!(strcmp(json_string->getData(), "SportsStandingsArgumentConference") == 0))
        throw("The value for field ArgumentType of SportsStandingsArgumentConferenceJSON is not `SportsStandingsArgumentConference'.");
    setArgumentType();
  }

SportsStandingsArgumentConferenceJSON::SportsStandingsArgumentConferenceJSON(void) :
        flagHasArgumentType(false)
  {
    extraIndex = create_string_index();
  }

SportsStandingsArgumentConferenceJSON::~SportsStandingsArgumentConferenceJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool SportsStandingsArgumentConferenceJSON::hasArgumentType(void) const
  {
    return flagHasArgumentType;
  }

SportsStandingsArgumentConferenceJSON::TypeArgumentType SportsStandingsArgumentConferenceJSON::getArgumentType(void)
  {
    assert(flagHasArgumentType);
    return ArgumentType_SportsStandingsArgumentConference;
  }

const SportsStandingsArgumentConferenceJSON::TypeArgumentType SportsStandingsArgumentConferenceJSON::getArgumentType(void) const
  {
    assert(flagHasArgumentType);
    return ArgumentType_SportsStandingsArgumentConference;
  }

const char *SportsStandingsArgumentConferenceJSON::getArgumentTypeAsChars(void) const
  {
    return stringFromArgumentType(getArgumentType());
  }

std::string SportsStandingsArgumentConferenceJSON::getArgumentTypeAsString(void) const
  {
    return stringFromArgumentType(getArgumentType());
  }

SportsStandingsArgumentConferenceJSON *SportsStandingsArgumentConferenceJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    SportsStandingsArgumentConferenceJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<SportsStandingsArgumentConferenceJSON>, SportsStandingsArgumentConferenceJSON *, bool> generator("Type SportsStandingsArgumentConference", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
