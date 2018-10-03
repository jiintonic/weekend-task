/* file "HolidaysOnDateLookupConversationStateJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "HolidaysOnDateLookupConversationStateJSON.h"

#include "HolidaysOnDateLookupConversationStateJSON.h"


HolidaysOnDateLookupConversationStateJSON::TypeDateAndTimeKind HolidaysOnDateLookupConversationStateJSON::stringToDateAndTimeKind(const char *chars)
  {
    if (strcmp(chars, "HolidaysOnDateLookup") == 0)
        return DateAndTimeKind_HolidaysOnDateLookup;
    throw("The value for field `DateAndTimeKind' is not one of the legal values.");
  }

const char *HolidaysOnDateLookupConversationStateJSON::stringFromDateAndTimeKind(TypeDateAndTimeKind the_enum)
  {
    switch (the_enum)
      {
        case DateAndTimeKind_HolidaysOnDateLookup:
            return "HolidaysOnDateLookup";
        default:
            assert(false);
            return NULL;
      }
  }

HolidaysOnDateLookupConversationStateJSON::HolidaysOnDateLookupConversationStateJSON(const HolidaysOnDateLookupConversationStateJSON &)
  {
    assert(false);
  }

HolidaysOnDateLookupConversationStateJSON &HolidaysOnDateLookupConversationStateJSON::operator=(const HolidaysOnDateLookupConversationStateJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void HolidaysOnDateLookupConversationStateJSON::fromJSONDateAndTimeKind(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field DateAndTimeKind of HolidaysOnDateLookupConversationStateJSON is not a string.");
    if (!(strcmp(json_string->getData(), "HolidaysOnDateLookup") == 0))
        throw("The value for field DateAndTimeKind of HolidaysOnDateLookupConversationStateJSON is not `HolidaysOnDateLookup'.");
    setDateAndTimeKind();
  }

void HolidaysOnDateLookupConversationStateJSON::fromJSONDateAndOrTimeSpec(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DateAndOrTimeSpecJSON *convert_classy = DateAndOrTimeSpecJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setDateAndOrTimeSpec(convert_classy);
    convert_classy->remove_reference();
  }

HolidaysOnDateLookupConversationStateJSON::HolidaysOnDateLookupConversationStateJSON(void) :
        flagHasDateAndTimeKind(false),
        flagHasDateAndOrTimeSpec(false)
  {
    extraIndex = create_string_index();
  }

HolidaysOnDateLookupConversationStateJSON::~HolidaysOnDateLookupConversationStateJSON(void)
  {
    if (flagHasDateAndOrTimeSpec)
      {
        storeDateAndOrTimeSpec->remove_reference();
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool HolidaysOnDateLookupConversationStateJSON::hasDateAndTimeKind(void) const
  {
    return flagHasDateAndTimeKind;
  }

HolidaysOnDateLookupConversationStateJSON::TypeDateAndTimeKind HolidaysOnDateLookupConversationStateJSON::getDateAndTimeKind(void)
  {
    assert(flagHasDateAndTimeKind);
    return DateAndTimeKind_HolidaysOnDateLookup;
  }

const HolidaysOnDateLookupConversationStateJSON::TypeDateAndTimeKind HolidaysOnDateLookupConversationStateJSON::getDateAndTimeKind(void) const
  {
    assert(flagHasDateAndTimeKind);
    return DateAndTimeKind_HolidaysOnDateLookup;
  }

const char *HolidaysOnDateLookupConversationStateJSON::getDateAndTimeKindAsChars(void) const
  {
    return stringFromDateAndTimeKind(getDateAndTimeKind());
  }

std::string HolidaysOnDateLookupConversationStateJSON::getDateAndTimeKindAsString(void) const
  {
    return stringFromDateAndTimeKind(getDateAndTimeKind());
  }

bool HolidaysOnDateLookupConversationStateJSON::hasDateAndOrTimeSpec(void) const
  {
    return flagHasDateAndOrTimeSpec;
  }

DateAndOrTimeSpecJSON * HolidaysOnDateLookupConversationStateJSON::getDateAndOrTimeSpec(void)
  {
    assert(flagHasDateAndOrTimeSpec);
    return storeDateAndOrTimeSpec;
  }

const DateAndOrTimeSpecJSON * HolidaysOnDateLookupConversationStateJSON::getDateAndOrTimeSpec(void) const
  {
    assert(flagHasDateAndOrTimeSpec);
    return storeDateAndOrTimeSpec;
  }

HolidaysOnDateLookupConversationStateJSON *HolidaysOnDateLookupConversationStateJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    HolidaysOnDateLookupConversationStateJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<HolidaysOnDateLookupConversationStateJSON>, HolidaysOnDateLookupConversationStateJSON *, bool> generator("Type HolidaysOnDateLookupConversationState", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
