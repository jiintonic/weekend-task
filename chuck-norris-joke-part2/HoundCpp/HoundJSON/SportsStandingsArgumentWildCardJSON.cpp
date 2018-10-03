/* file "SportsStandingsArgumentWildCardJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "SportsStandingsArgumentWildCardJSON.h"

#include "SportsStandingsArgumentWildCardJSON.h"


SportsStandingsArgumentWildCardJSON::TypeArgumentType SportsStandingsArgumentWildCardJSON::stringToArgumentType(const char *chars)
  {
    if (strcmp(chars, "SportsStandingsArgumentWildCard") == 0)
        return ArgumentType_SportsStandingsArgumentWildCard;
    throw("The value for field `ArgumentType' is not one of the legal values.");
  }

const char *SportsStandingsArgumentWildCardJSON::stringFromArgumentType(TypeArgumentType the_enum)
  {
    switch (the_enum)
      {
        case ArgumentType_SportsStandingsArgumentWildCard:
            return "SportsStandingsArgumentWildCard";
        default:
            assert(false);
            return NULL;
      }
  }

SportsStandingsArgumentWildCardJSON::SportsStandingsArgumentWildCardJSON(const SportsStandingsArgumentWildCardJSON &)
  {
    assert(false);
  }

SportsStandingsArgumentWildCardJSON &SportsStandingsArgumentWildCardJSON::operator=(const SportsStandingsArgumentWildCardJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void SportsStandingsArgumentWildCardJSON::fromJSONArgumentType(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field ArgumentType of SportsStandingsArgumentWildCardJSON is not a string.");
    if (!(strcmp(json_string->getData(), "SportsStandingsArgumentWildCard") == 0))
        throw("The value for field ArgumentType of SportsStandingsArgumentWildCardJSON is not `SportsStandingsArgumentWildCard'.");
    setArgumentType();
  }

SportsStandingsArgumentWildCardJSON::SportsStandingsArgumentWildCardJSON(void) :
        flagHasArgumentType(false)
  {
    extraIndex = create_string_index();
  }

SportsStandingsArgumentWildCardJSON::~SportsStandingsArgumentWildCardJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool SportsStandingsArgumentWildCardJSON::hasArgumentType(void) const
  {
    return flagHasArgumentType;
  }

SportsStandingsArgumentWildCardJSON::TypeArgumentType SportsStandingsArgumentWildCardJSON::getArgumentType(void)
  {
    assert(flagHasArgumentType);
    return ArgumentType_SportsStandingsArgumentWildCard;
  }

const SportsStandingsArgumentWildCardJSON::TypeArgumentType SportsStandingsArgumentWildCardJSON::getArgumentType(void) const
  {
    assert(flagHasArgumentType);
    return ArgumentType_SportsStandingsArgumentWildCard;
  }

const char *SportsStandingsArgumentWildCardJSON::getArgumentTypeAsChars(void) const
  {
    return stringFromArgumentType(getArgumentType());
  }

std::string SportsStandingsArgumentWildCardJSON::getArgumentTypeAsString(void) const
  {
    return stringFromArgumentType(getArgumentType());
  }

SportsStandingsArgumentWildCardJSON *SportsStandingsArgumentWildCardJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    SportsStandingsArgumentWildCardJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<SportsStandingsArgumentWildCardJSON>, SportsStandingsArgumentWildCardJSON *, bool> generator("Type SportsStandingsArgumentWildCard", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
