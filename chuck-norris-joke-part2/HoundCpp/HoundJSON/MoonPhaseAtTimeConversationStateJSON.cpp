/* file "MoonPhaseAtTimeConversationStateJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "MoonPhaseAtTimeConversationStateJSON.h"

#include "MoonPhaseAtTimeConversationStateJSON.h"


MoonPhaseAtTimeConversationStateJSON::TypeDateAndTimeKind MoonPhaseAtTimeConversationStateJSON::stringToDateAndTimeKind(const char *chars)
  {
    if (strcmp(chars, "MoonPhaseAtTime") == 0)
        return DateAndTimeKind_MoonPhaseAtTime;
    throw("The value for field `DateAndTimeKind' is not one of the legal values.");
  }

const char *MoonPhaseAtTimeConversationStateJSON::stringFromDateAndTimeKind(TypeDateAndTimeKind the_enum)
  {
    switch (the_enum)
      {
        case DateAndTimeKind_MoonPhaseAtTime:
            return "MoonPhaseAtTime";
        default:
            assert(false);
            return NULL;
      }
  }

MoonPhaseAtTimeConversationStateJSON::MoonPhaseAtTimeConversationStateJSON(const MoonPhaseAtTimeConversationStateJSON &)
  {
    assert(false);
  }

MoonPhaseAtTimeConversationStateJSON &MoonPhaseAtTimeConversationStateJSON::operator=(const MoonPhaseAtTimeConversationStateJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void MoonPhaseAtTimeConversationStateJSON::fromJSONDateAndTimeKind(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field DateAndTimeKind of MoonPhaseAtTimeConversationStateJSON is not a string.");
    if (!(strcmp(json_string->getData(), "MoonPhaseAtTime") == 0))
        throw("The value for field DateAndTimeKind of MoonPhaseAtTimeConversationStateJSON is not `MoonPhaseAtTime'.");
    setDateAndTimeKind();
  }

void MoonPhaseAtTimeConversationStateJSON::fromJSONDateTimeSpec(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DateTimeSpecJSON *convert_classy = DateTimeSpecJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setDateTimeSpec(convert_classy);
    convert_classy->remove_reference();
  }

void MoonPhaseAtTimeConversationStateJSON::fromJSONMoonPhase(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field MoonPhase of MoonPhaseAtTimeConversationStateJSON is not a string.");
    setMoonPhase(std::string(json_string->getData()));
  }

MoonPhaseAtTimeConversationStateJSON::MoonPhaseAtTimeConversationStateJSON(void) :
        flagHasDateAndTimeKind(false),
        flagHasDateTimeSpec(false),
        flagHasMoonPhase(false)
  {
    extraIndex = create_string_index();
  }

MoonPhaseAtTimeConversationStateJSON::~MoonPhaseAtTimeConversationStateJSON(void)
  {
    if (flagHasDateTimeSpec)
      {
        storeDateTimeSpec->remove_reference();
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool MoonPhaseAtTimeConversationStateJSON::hasDateAndTimeKind(void) const
  {
    return flagHasDateAndTimeKind;
  }

MoonPhaseAtTimeConversationStateJSON::TypeDateAndTimeKind MoonPhaseAtTimeConversationStateJSON::getDateAndTimeKind(void)
  {
    assert(flagHasDateAndTimeKind);
    return DateAndTimeKind_MoonPhaseAtTime;
  }

const MoonPhaseAtTimeConversationStateJSON::TypeDateAndTimeKind MoonPhaseAtTimeConversationStateJSON::getDateAndTimeKind(void) const
  {
    assert(flagHasDateAndTimeKind);
    return DateAndTimeKind_MoonPhaseAtTime;
  }

const char *MoonPhaseAtTimeConversationStateJSON::getDateAndTimeKindAsChars(void) const
  {
    return stringFromDateAndTimeKind(getDateAndTimeKind());
  }

std::string MoonPhaseAtTimeConversationStateJSON::getDateAndTimeKindAsString(void) const
  {
    return stringFromDateAndTimeKind(getDateAndTimeKind());
  }

bool MoonPhaseAtTimeConversationStateJSON::hasDateTimeSpec(void) const
  {
    return flagHasDateTimeSpec;
  }

DateTimeSpecJSON * MoonPhaseAtTimeConversationStateJSON::getDateTimeSpec(void)
  {
    assert(flagHasDateTimeSpec);
    return storeDateTimeSpec;
  }

const DateTimeSpecJSON * MoonPhaseAtTimeConversationStateJSON::getDateTimeSpec(void) const
  {
    assert(flagHasDateTimeSpec);
    return storeDateTimeSpec;
  }

bool MoonPhaseAtTimeConversationStateJSON::hasMoonPhase(void) const
  {
    return flagHasMoonPhase;
  }

std::string MoonPhaseAtTimeConversationStateJSON::getMoonPhase(void)
  {
    assert(flagHasMoonPhase);
    return storeMoonPhase;
  }

const std::string MoonPhaseAtTimeConversationStateJSON::getMoonPhase(void) const
  {
    assert(flagHasMoonPhase);
    return storeMoonPhase;
  }

MoonPhaseAtTimeConversationStateJSON *MoonPhaseAtTimeConversationStateJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    MoonPhaseAtTimeConversationStateJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<MoonPhaseAtTimeConversationStateJSON>, MoonPhaseAtTimeConversationStateJSON *, bool> generator("Type MoonPhaseAtTimeConversationState", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
