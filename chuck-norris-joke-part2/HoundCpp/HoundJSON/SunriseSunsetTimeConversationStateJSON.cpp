/* file "SunriseSunsetTimeConversationStateJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "SunriseSunsetTimeConversationStateJSON.h"

#include "SunriseSunsetTimeConversationStateJSON.h"


SunriseSunsetTimeConversationStateJSON::TypeDateAndTimeKind SunriseSunsetTimeConversationStateJSON::stringToDateAndTimeKind(const char *chars)
  {
    if (strcmp(chars, "SunriseSunsetTime") == 0)
        return DateAndTimeKind_SunriseSunsetTime;
    throw("The value for field `DateAndTimeKind' is not one of the legal values.");
  }

const char *SunriseSunsetTimeConversationStateJSON::stringFromDateAndTimeKind(TypeDateAndTimeKind the_enum)
  {
    switch (the_enum)
      {
        case DateAndTimeKind_SunriseSunsetTime:
            return "SunriseSunsetTime";
        default:
            assert(false);
            return NULL;
      }
  }

SunriseSunsetTimeConversationStateJSON::SunriseSunsetTimeConversationStateJSON(const SunriseSunsetTimeConversationStateJSON &)
  {
    assert(false);
  }

SunriseSunsetTimeConversationStateJSON &SunriseSunsetTimeConversationStateJSON::operator=(const SunriseSunsetTimeConversationStateJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void SunriseSunsetTimeConversationStateJSON::fromJSONDateAndTimeKind(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field DateAndTimeKind of SunriseSunsetTimeConversationStateJSON is not a string.");
    if (!(strcmp(json_string->getData(), "SunriseSunsetTime") == 0))
        throw("The value for field DateAndTimeKind of SunriseSunsetTimeConversationStateJSON is not `SunriseSunsetTime'.");
    setDateAndTimeKind();
  }

void SunriseSunsetTimeConversationStateJSON::fromJSONMapLocation(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    MapLocationJSON *convert_classy = MapLocationJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setMapLocation(convert_classy);
    convert_classy->remove_reference();
  }

void SunriseSunsetTimeConversationStateJSON::fromJSONRequestedType(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field RequestedType of SunriseSunsetTimeConversationStateJSON is not a string.");
    setRequestedType(std::string(json_string->getData()));
  }

void SunriseSunsetTimeConversationStateJSON::fromJSONDateTimeRangeSpec(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DateTimeRangeSpecJSON *convert_classy = DateTimeRangeSpecJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setDateTimeRangeSpec(convert_classy);
    convert_classy->remove_reference();
  }

void SunriseSunsetTimeConversationStateJSON::fromJSONIsDateTimeRequested(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field IsDateTimeRequested of SunriseSunsetTimeConversationStateJSON is not true for false.");
          }
      }
    setIsDateTimeRequested(the_bool);
  }

void SunriseSunsetTimeConversationStateJSON::fromJSONFutureRequested(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field FutureRequested of SunriseSunsetTimeConversationStateJSON is not true for false.");
          }
      }
    setFutureRequested(the_bool);
  }

void SunriseSunsetTimeConversationStateJSON::fromJSONPastRequested(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field PastRequested of SunriseSunsetTimeConversationStateJSON is not true for false.");
          }
      }
    setPastRequested(the_bool);
  }

SunriseSunsetTimeConversationStateJSON::SunriseSunsetTimeConversationStateJSON(void) :
        flagHasDateAndTimeKind(false),
        flagHasMapLocation(false),
        flagHasRequestedType(false),
        flagHasDateTimeRangeSpec(false),
        flagHasIsDateTimeRequested(false),
        flagHasFutureRequested(false),
        flagHasPastRequested(false)
  {
    extraIndex = create_string_index();
  }

SunriseSunsetTimeConversationStateJSON::~SunriseSunsetTimeConversationStateJSON(void)
  {
    if (flagHasMapLocation)
      {
        storeMapLocation->remove_reference();
      }
    if (flagHasDateTimeRangeSpec)
      {
        storeDateTimeRangeSpec->remove_reference();
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool SunriseSunsetTimeConversationStateJSON::hasDateAndTimeKind(void) const
  {
    return flagHasDateAndTimeKind;
  }

SunriseSunsetTimeConversationStateJSON::TypeDateAndTimeKind SunriseSunsetTimeConversationStateJSON::getDateAndTimeKind(void)
  {
    assert(flagHasDateAndTimeKind);
    return DateAndTimeKind_SunriseSunsetTime;
  }

const SunriseSunsetTimeConversationStateJSON::TypeDateAndTimeKind SunriseSunsetTimeConversationStateJSON::getDateAndTimeKind(void) const
  {
    assert(flagHasDateAndTimeKind);
    return DateAndTimeKind_SunriseSunsetTime;
  }

const char *SunriseSunsetTimeConversationStateJSON::getDateAndTimeKindAsChars(void) const
  {
    return stringFromDateAndTimeKind(getDateAndTimeKind());
  }

std::string SunriseSunsetTimeConversationStateJSON::getDateAndTimeKindAsString(void) const
  {
    return stringFromDateAndTimeKind(getDateAndTimeKind());
  }

bool SunriseSunsetTimeConversationStateJSON::hasMapLocation(void) const
  {
    return flagHasMapLocation;
  }

MapLocationJSON * SunriseSunsetTimeConversationStateJSON::getMapLocation(void)
  {
    assert(flagHasMapLocation);
    return storeMapLocation;
  }

const MapLocationJSON * SunriseSunsetTimeConversationStateJSON::getMapLocation(void) const
  {
    assert(flagHasMapLocation);
    return storeMapLocation;
  }

bool SunriseSunsetTimeConversationStateJSON::hasRequestedType(void) const
  {
    return flagHasRequestedType;
  }

std::string SunriseSunsetTimeConversationStateJSON::getRequestedType(void)
  {
    assert(flagHasRequestedType);
    return storeRequestedType;
  }

const std::string SunriseSunsetTimeConversationStateJSON::getRequestedType(void) const
  {
    assert(flagHasRequestedType);
    return storeRequestedType;
  }

bool SunriseSunsetTimeConversationStateJSON::hasDateTimeRangeSpec(void) const
  {
    return flagHasDateTimeRangeSpec;
  }

DateTimeRangeSpecJSON * SunriseSunsetTimeConversationStateJSON::getDateTimeRangeSpec(void)
  {
    assert(flagHasDateTimeRangeSpec);
    return storeDateTimeRangeSpec;
  }

const DateTimeRangeSpecJSON * SunriseSunsetTimeConversationStateJSON::getDateTimeRangeSpec(void) const
  {
    assert(flagHasDateTimeRangeSpec);
    return storeDateTimeRangeSpec;
  }

bool SunriseSunsetTimeConversationStateJSON::hasIsDateTimeRequested(void) const
  {
    return flagHasIsDateTimeRequested;
  }

bool SunriseSunsetTimeConversationStateJSON::getIsDateTimeRequested(void)
  {
    assert(flagHasIsDateTimeRequested);
    return storeIsDateTimeRequested;
  }

const bool SunriseSunsetTimeConversationStateJSON::getIsDateTimeRequested(void) const
  {
    assert(flagHasIsDateTimeRequested);
    return storeIsDateTimeRequested;
  }

bool SunriseSunsetTimeConversationStateJSON::hasFutureRequested(void) const
  {
    return flagHasFutureRequested;
  }

bool SunriseSunsetTimeConversationStateJSON::getFutureRequested(void)
  {
    assert(flagHasFutureRequested);
    return storeFutureRequested;
  }

const bool SunriseSunsetTimeConversationStateJSON::getFutureRequested(void) const
  {
    assert(flagHasFutureRequested);
    return storeFutureRequested;
  }

bool SunriseSunsetTimeConversationStateJSON::hasPastRequested(void) const
  {
    return flagHasPastRequested;
  }

bool SunriseSunsetTimeConversationStateJSON::getPastRequested(void)
  {
    assert(flagHasPastRequested);
    return storePastRequested;
  }

const bool SunriseSunsetTimeConversationStateJSON::getPastRequested(void) const
  {
    assert(flagHasPastRequested);
    return storePastRequested;
  }

SunriseSunsetTimeConversationStateJSON *SunriseSunsetTimeConversationStateJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    SunriseSunsetTimeConversationStateJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<SunriseSunsetTimeConversationStateJSON>, SunriseSunsetTimeConversationStateJSON *, bool> generator("Type SunriseSunsetTimeConversationState", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
