/* file "TimezoneLookupConversationStateJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "TimezoneLookupConversationStateJSON.h"

#include "TimezoneLookupConversationStateJSON.h"


TimezoneLookupConversationStateJSON::TypeDateAndTimeKind TimezoneLookupConversationStateJSON::stringToDateAndTimeKind(const char *chars)
  {
    if (strcmp(chars, "TimezoneLookup") == 0)
        return DateAndTimeKind_TimezoneLookup;
    throw("The value for field `DateAndTimeKind' is not one of the legal values.");
  }

const char *TimezoneLookupConversationStateJSON::stringFromDateAndTimeKind(TypeDateAndTimeKind the_enum)
  {
    switch (the_enum)
      {
        case DateAndTimeKind_TimezoneLookup:
            return "TimezoneLookup";
        default:
            assert(false);
            return NULL;
      }
  }

TimezoneLookupConversationStateJSON::TimezoneLookupConversationStateJSON(const TimezoneLookupConversationStateJSON &)
  {
    assert(false);
  }

TimezoneLookupConversationStateJSON &TimezoneLookupConversationStateJSON::operator=(const TimezoneLookupConversationStateJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void TimezoneLookupConversationStateJSON::fromJSONDateAndTimeKind(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field DateAndTimeKind of TimezoneLookupConversationStateJSON is not a string.");
    if (!(strcmp(json_string->getData(), "TimezoneLookup") == 0))
        throw("The value for field DateAndTimeKind of TimezoneLookupConversationStateJSON is not `TimezoneLookup'.");
    setDateAndTimeKind();
  }

void TimezoneLookupConversationStateJSON::fromJSONMapLocation(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    MapLocationJSON *convert_classy = MapLocationJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setMapLocation(convert_classy);
    convert_classy->remove_reference();
  }

void TimezoneLookupConversationStateJSON::fromJSONDateAndTime(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DateAndOrTimeJSON *convert_classy = DateAndOrTimeJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setDateAndTime(convert_classy);
    convert_classy->remove_reference();
  }

void TimezoneLookupConversationStateJSON::fromJSONOlsonCode(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field OlsonCode of TimezoneLookupConversationStateJSON is not a string.");
    setOlsonCode(std::string(json_string->getData()));
  }

void TimezoneLookupConversationStateJSON::fromJSONOffset(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONRationalValue *json_rational = json_value->rational_value();
    std::string the_rational_text;
    if (json_rational != NULL)
      {
        the_rational_text = json_rational->getText();
      }
    else
      {
        const JSONIntegerValue *json_integer = json_value->integer_value();
        if (json_integer != NULL)
          {
            the_rational_text = json_integer->getText();
          }
        else
          {
            throw("The value for field Offset of TimezoneLookupConversationStateJSON is not a number.");
          }
      }
    setOffsetText(the_rational_text);
  }

void TimezoneLookupConversationStateJSON::fromJSONUnits(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Units of TimezoneLookupConversationStateJSON is not a string.");
    setUnits(std::string(json_string->getData()));
  }

TimezoneLookupConversationStateJSON::TimezoneLookupConversationStateJSON(void) :
        flagHasDateAndTimeKind(false),
        flagHasMapLocation(false),
        flagHasDateAndTime(false),
        flagHasOlsonCode(false),
        flagHasOffset(false),
        flagHasUnits(false)
  {
    extraIndex = create_string_index();
  }

TimezoneLookupConversationStateJSON::~TimezoneLookupConversationStateJSON(void)
  {
    if (flagHasMapLocation)
      {
        storeMapLocation->remove_reference();
      }
    if (flagHasDateAndTime)
      {
        storeDateAndTime->remove_reference();
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool TimezoneLookupConversationStateJSON::hasDateAndTimeKind(void) const
  {
    return flagHasDateAndTimeKind;
  }

TimezoneLookupConversationStateJSON::TypeDateAndTimeKind TimezoneLookupConversationStateJSON::getDateAndTimeKind(void)
  {
    assert(flagHasDateAndTimeKind);
    return DateAndTimeKind_TimezoneLookup;
  }

const TimezoneLookupConversationStateJSON::TypeDateAndTimeKind TimezoneLookupConversationStateJSON::getDateAndTimeKind(void) const
  {
    assert(flagHasDateAndTimeKind);
    return DateAndTimeKind_TimezoneLookup;
  }

const char *TimezoneLookupConversationStateJSON::getDateAndTimeKindAsChars(void) const
  {
    return stringFromDateAndTimeKind(getDateAndTimeKind());
  }

std::string TimezoneLookupConversationStateJSON::getDateAndTimeKindAsString(void) const
  {
    return stringFromDateAndTimeKind(getDateAndTimeKind());
  }

bool TimezoneLookupConversationStateJSON::hasMapLocation(void) const
  {
    return flagHasMapLocation;
  }

MapLocationJSON * TimezoneLookupConversationStateJSON::getMapLocation(void)
  {
    assert(flagHasMapLocation);
    return storeMapLocation;
  }

const MapLocationJSON * TimezoneLookupConversationStateJSON::getMapLocation(void) const
  {
    assert(flagHasMapLocation);
    return storeMapLocation;
  }

bool TimezoneLookupConversationStateJSON::hasDateAndTime(void) const
  {
    return flagHasDateAndTime;
  }

DateAndOrTimeJSON * TimezoneLookupConversationStateJSON::getDateAndTime(void)
  {
    assert(flagHasDateAndTime);
    return storeDateAndTime;
  }

const DateAndOrTimeJSON * TimezoneLookupConversationStateJSON::getDateAndTime(void) const
  {
    assert(flagHasDateAndTime);
    return storeDateAndTime;
  }

bool TimezoneLookupConversationStateJSON::hasOlsonCode(void) const
  {
    return flagHasOlsonCode;
  }

std::string TimezoneLookupConversationStateJSON::getOlsonCode(void)
  {
    assert(flagHasOlsonCode);
    return storeOlsonCode;
  }

const std::string TimezoneLookupConversationStateJSON::getOlsonCode(void) const
  {
    assert(flagHasOlsonCode);
    return storeOlsonCode;
  }

bool TimezoneLookupConversationStateJSON::hasOffset(void) const
  {
    return flagHasOffset;
  }

double TimezoneLookupConversationStateJSON::getOffset(void)
  {
    assert(flagHasOffset);
    if (textStoreOffset != "")
      {
        return atof(textStoreOffset.c_str());
      }
    return storeOffset;
  }

const double TimezoneLookupConversationStateJSON::getOffset(void) const
  {
    assert(flagHasOffset);
    if (textStoreOffset != "")
      {
        return atof(textStoreOffset.c_str());
      }
    return storeOffset;
  }

std::string TimezoneLookupConversationStateJSON::getOffsetAsText(void) const
  {
    assert(flagHasOffset);
    if (textStoreOffset == "")
      {
        char buffer[100];
        sprintf(&(buffer[0]), "%g", storeOffset);
        return &(buffer[0]);
      }
    else
      {
        return (textStoreOffset);
      }
  }

bool TimezoneLookupConversationStateJSON::hasUnits(void) const
  {
    return flagHasUnits;
  }

std::string TimezoneLookupConversationStateJSON::getUnits(void)
  {
    assert(flagHasUnits);
    return storeUnits;
  }

const std::string TimezoneLookupConversationStateJSON::getUnits(void) const
  {
    assert(flagHasUnits);
    return storeUnits;
  }

TimezoneLookupConversationStateJSON *TimezoneLookupConversationStateJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    TimezoneLookupConversationStateJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<TimezoneLookupConversationStateJSON>, TimezoneLookupConversationStateJSON *, bool> generator("Type TimezoneLookupConversationState", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
