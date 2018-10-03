/* file "TimezoneLookupInformationNuggetJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "TimezoneLookupInformationNuggetJSON.h"

#include "TimezoneLookupInformationNuggetJSON.h"


TimezoneLookupInformationNuggetJSON::TimezoneLookupInformationNuggetJSON(const TimezoneLookupInformationNuggetJSON &)
  {
    assert(false);
  }

TimezoneLookupInformationNuggetJSON &TimezoneLookupInformationNuggetJSON::operator=(const TimezoneLookupInformationNuggetJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *TimezoneLookupInformationNuggetJSON::extraMapLocationToJSON(void) const
  {
    JSONValueHandler handler_MapLocation;
    storeMapLocation->write_as_json(&handler_MapLocation);
    handler_MapLocation.result->add_reference();
    return handler_MapLocation.result;
  }

JSONValue *TimezoneLookupInformationNuggetJSON::extraDateAndTimeToJSON(void) const
  {
    JSONValueHandler handler_DateAndTime;
    storeDateAndTime->write_as_json(&handler_DateAndTime);
    handler_DateAndTime.result->add_reference();
    return handler_DateAndTime.result;
  }

JSONValue *TimezoneLookupInformationNuggetJSON::extraOlsonCodeToJSON(void) const
  {
    JSONStringValue *generated_string_OlsonCode = new JSONStringValue(storeOlsonCode.c_str());
    return generated_string_OlsonCode;
  }

JSONValue *TimezoneLookupInformationNuggetJSON::extraAbbreviatedCurrentRuleToJSON(void) const
  {
    JSONStringValue *generated_string_AbbreviatedCurrentRule = new JSONStringValue(storeAbbreviatedCurrentRule.c_str());
    return generated_string_AbbreviatedCurrentRule;
  }

JSONValue *TimezoneLookupInformationNuggetJSON::extraOffsetToJSON(void) const
  {
    JSONValue *generated_rational_Offset;
    if (((double)(long int)storeOffset) == storeOffset)
        generated_rational_Offset = new JSONIntegerValue((long int)(storeOffset));
    else
        generated_rational_Offset = new JSONRationalValue(storeOffset, DBL_DIG);
    return generated_rational_Offset;
  }

JSONValue *TimezoneLookupInformationNuggetJSON::extraUnitsToJSON(void) const
  {
    JSONStringValue *generated_string_Units = new JSONStringValue(storeUnits.c_str());
    return generated_string_Units;
  }

void TimezoneLookupInformationNuggetJSON::fromJSONMapLocation(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    MapLocationJSON *convert_classy = MapLocationJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setMapLocation(convert_classy);
    convert_classy->remove_reference();
  }

void TimezoneLookupInformationNuggetJSON::fromJSONDateAndTime(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DateAndOrTimeJSON *convert_classy = DateAndOrTimeJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setDateAndTime(convert_classy);
    convert_classy->remove_reference();
  }

void TimezoneLookupInformationNuggetJSON::fromJSONOlsonCode(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field OlsonCode of TimezoneLookupInformationNuggetJSON is not a string.");
    setOlsonCode(std::string(json_string->getData()));
  }

void TimezoneLookupInformationNuggetJSON::fromJSONAbbreviatedCurrentRule(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field AbbreviatedCurrentRule of TimezoneLookupInformationNuggetJSON is not a string.");
    setAbbreviatedCurrentRule(std::string(json_string->getData()));
  }

void TimezoneLookupInformationNuggetJSON::fromJSONOffset(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field Offset of TimezoneLookupInformationNuggetJSON is not a number.");
          }
      }
    setOffsetText(the_rational_text);
  }

void TimezoneLookupInformationNuggetJSON::fromJSONUnits(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Units of TimezoneLookupInformationNuggetJSON is not a string.");
    setUnits(std::string(json_string->getData()));
  }

TimezoneLookupInformationNuggetJSON::TimezoneLookupInformationNuggetJSON(void) :
        flagHasMapLocation(false),
        flagHasDateAndTime(false),
        flagHasOlsonCode(false),
        flagHasAbbreviatedCurrentRule(false),
        flagHasOffset(false),
        flagHasUnits(false)
  {
    extraIndex = create_string_index();
  }

TimezoneLookupInformationNuggetJSON::~TimezoneLookupInformationNuggetJSON(void)
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

const char *TimezoneLookupInformationNuggetJSON::getDateAndTimeNuggetKind(void) const
  {
    return "TimezoneLookup";
  }

bool TimezoneLookupInformationNuggetJSON::hasMapLocation(void) const
  {
    return flagHasMapLocation;
  }

MapLocationJSON * TimezoneLookupInformationNuggetJSON::getMapLocation(void)
  {
    assert(flagHasMapLocation);
    return storeMapLocation;
  }

const MapLocationJSON * TimezoneLookupInformationNuggetJSON::getMapLocation(void) const
  {
    assert(flagHasMapLocation);
    return storeMapLocation;
  }

bool TimezoneLookupInformationNuggetJSON::hasDateAndTime(void) const
  {
    return flagHasDateAndTime;
  }

DateAndOrTimeJSON * TimezoneLookupInformationNuggetJSON::getDateAndTime(void)
  {
    assert(flagHasDateAndTime);
    return storeDateAndTime;
  }

const DateAndOrTimeJSON * TimezoneLookupInformationNuggetJSON::getDateAndTime(void) const
  {
    assert(flagHasDateAndTime);
    return storeDateAndTime;
  }

bool TimezoneLookupInformationNuggetJSON::hasOlsonCode(void) const
  {
    return flagHasOlsonCode;
  }

std::string TimezoneLookupInformationNuggetJSON::getOlsonCode(void)
  {
    assert(flagHasOlsonCode);
    return storeOlsonCode;
  }

const std::string TimezoneLookupInformationNuggetJSON::getOlsonCode(void) const
  {
    assert(flagHasOlsonCode);
    return storeOlsonCode;
  }

bool TimezoneLookupInformationNuggetJSON::hasAbbreviatedCurrentRule(void) const
  {
    return flagHasAbbreviatedCurrentRule;
  }

std::string TimezoneLookupInformationNuggetJSON::getAbbreviatedCurrentRule(void)
  {
    assert(flagHasAbbreviatedCurrentRule);
    return storeAbbreviatedCurrentRule;
  }

const std::string TimezoneLookupInformationNuggetJSON::getAbbreviatedCurrentRule(void) const
  {
    assert(flagHasAbbreviatedCurrentRule);
    return storeAbbreviatedCurrentRule;
  }

bool TimezoneLookupInformationNuggetJSON::hasOffset(void) const
  {
    return flagHasOffset;
  }

double TimezoneLookupInformationNuggetJSON::getOffset(void)
  {
    assert(flagHasOffset);
    if (textStoreOffset != "")
      {
        return atof(textStoreOffset.c_str());
      }
    return storeOffset;
  }

const double TimezoneLookupInformationNuggetJSON::getOffset(void) const
  {
    assert(flagHasOffset);
    if (textStoreOffset != "")
      {
        return atof(textStoreOffset.c_str());
      }
    return storeOffset;
  }

std::string TimezoneLookupInformationNuggetJSON::getOffsetAsText(void) const
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

bool TimezoneLookupInformationNuggetJSON::hasUnits(void) const
  {
    return flagHasUnits;
  }

std::string TimezoneLookupInformationNuggetJSON::getUnits(void)
  {
    assert(flagHasUnits);
    return storeUnits;
  }

const std::string TimezoneLookupInformationNuggetJSON::getUnits(void) const
  {
    assert(flagHasUnits);
    return storeUnits;
  }

TimezoneLookupInformationNuggetJSON *TimezoneLookupInformationNuggetJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    TimezoneLookupInformationNuggetJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<TimezoneLookupInformationNuggetJSON>, TimezoneLookupInformationNuggetJSON *, bool> generator("Type TimezoneLookupInformationNugget", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
