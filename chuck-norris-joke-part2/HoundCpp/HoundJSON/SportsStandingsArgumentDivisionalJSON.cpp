/* file "SportsStandingsArgumentDivisionalJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "SportsStandingsArgumentDivisionalJSON.h"

#include "SportsStandingsArgumentDivisionalJSON.h"


SportsStandingsArgumentDivisionalJSON::TypeArgumentType SportsStandingsArgumentDivisionalJSON::stringToArgumentType(const char *chars)
  {
    if (strcmp(chars, "SportsStandingsArgumentDivisional") == 0)
        return ArgumentType_SportsStandingsArgumentDivisional;
    throw("The value for field `ArgumentType' is not one of the legal values.");
  }

const char *SportsStandingsArgumentDivisionalJSON::stringFromArgumentType(TypeArgumentType the_enum)
  {
    switch (the_enum)
      {
        case ArgumentType_SportsStandingsArgumentDivisional:
            return "SportsStandingsArgumentDivisional";
        default:
            assert(false);
            return NULL;
      }
  }

SportsStandingsArgumentDivisionalJSON::SportsStandingsArgumentDivisionalJSON(const SportsStandingsArgumentDivisionalJSON &)
  {
    assert(false);
  }

SportsStandingsArgumentDivisionalJSON &SportsStandingsArgumentDivisionalJSON::operator=(const SportsStandingsArgumentDivisionalJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void SportsStandingsArgumentDivisionalJSON::fromJSONArgumentType(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field ArgumentType of SportsStandingsArgumentDivisionalJSON is not a string.");
    if (!(strcmp(json_string->getData(), "SportsStandingsArgumentDivisional") == 0))
        throw("The value for field ArgumentType of SportsStandingsArgumentDivisionalJSON is not `SportsStandingsArgumentDivisional'.");
    setArgumentType();
  }

SportsStandingsArgumentDivisionalJSON::SportsStandingsArgumentDivisionalJSON(void) :
        flagHasArgumentType(false)
  {
    extraIndex = create_string_index();
  }

SportsStandingsArgumentDivisionalJSON::~SportsStandingsArgumentDivisionalJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool SportsStandingsArgumentDivisionalJSON::hasArgumentType(void) const
  {
    return flagHasArgumentType;
  }

SportsStandingsArgumentDivisionalJSON::TypeArgumentType SportsStandingsArgumentDivisionalJSON::getArgumentType(void)
  {
    assert(flagHasArgumentType);
    return ArgumentType_SportsStandingsArgumentDivisional;
  }

const SportsStandingsArgumentDivisionalJSON::TypeArgumentType SportsStandingsArgumentDivisionalJSON::getArgumentType(void) const
  {
    assert(flagHasArgumentType);
    return ArgumentType_SportsStandingsArgumentDivisional;
  }

const char *SportsStandingsArgumentDivisionalJSON::getArgumentTypeAsChars(void) const
  {
    return stringFromArgumentType(getArgumentType());
  }

std::string SportsStandingsArgumentDivisionalJSON::getArgumentTypeAsString(void) const
  {
    return stringFromArgumentType(getArgumentType());
  }

SportsStandingsArgumentDivisionalJSON *SportsStandingsArgumentDivisionalJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    SportsStandingsArgumentDivisionalJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<SportsStandingsArgumentDivisionalJSON>, SportsStandingsArgumentDivisionalJSON *, bool> generator("Type SportsStandingsArgumentDivisional", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
