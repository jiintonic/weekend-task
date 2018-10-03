/* file "SportsOlympicsEventSchedulesAndResultsArgumentDateAndTimeJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "SportsOlympicsEventSchedulesAndResultsArgumentDateAndTimeJSON.h"

#include "SportsOlympicsEventSchedulesAndResultsArgumentDateAndTimeJSON.h"


SportsOlympicsEventSchedulesAndResultsArgumentDateAndTimeJSON::SportsOlympicsEventSchedulesAndResultsArgumentDateAndTimeJSON(const SportsOlympicsEventSchedulesAndResultsArgumentDateAndTimeJSON &)
  {
    assert(false);
  }

SportsOlympicsEventSchedulesAndResultsArgumentDateAndTimeJSON &SportsOlympicsEventSchedulesAndResultsArgumentDateAndTimeJSON::operator=(const SportsOlympicsEventSchedulesAndResultsArgumentDateAndTimeJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *SportsOlympicsEventSchedulesAndResultsArgumentDateAndTimeJSON::extraDateTimeRangeToJSON(void) const
  {
    JSONValueHandler handler_DateTimeRange;
    storeDateTimeRange->write_as_json(&handler_DateTimeRange);
    handler_DateTimeRange.result->add_reference();
    return handler_DateTimeRange.result;
  }

void SportsOlympicsEventSchedulesAndResultsArgumentDateAndTimeJSON::fromJSONDateTimeRange(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DateTimeRangeSpecJSON *convert_classy = DateTimeRangeSpecJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setDateTimeRange(convert_classy);
    convert_classy->remove_reference();
  }

SportsOlympicsEventSchedulesAndResultsArgumentDateAndTimeJSON::SportsOlympicsEventSchedulesAndResultsArgumentDateAndTimeJSON(void) :
        flagHasDateTimeRange(false)
  {
    extraIndex = create_string_index();
  }

SportsOlympicsEventSchedulesAndResultsArgumentDateAndTimeJSON::~SportsOlympicsEventSchedulesAndResultsArgumentDateAndTimeJSON(void)
  {
    if (flagHasDateTimeRange)
      {
        storeDateTimeRange->remove_reference();
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *SportsOlympicsEventSchedulesAndResultsArgumentDateAndTimeJSON::getSportsOlympicsEventSchedulesAndResultsArgumentKind(void) const
  {
    return "MedalType";
  }

bool SportsOlympicsEventSchedulesAndResultsArgumentDateAndTimeJSON::hasDateTimeRange(void) const
  {
    return flagHasDateTimeRange;
  }

DateTimeRangeSpecJSON * SportsOlympicsEventSchedulesAndResultsArgumentDateAndTimeJSON::getDateTimeRange(void)
  {
    assert(flagHasDateTimeRange);
    return storeDateTimeRange;
  }

const DateTimeRangeSpecJSON * SportsOlympicsEventSchedulesAndResultsArgumentDateAndTimeJSON::getDateTimeRange(void) const
  {
    assert(flagHasDateTimeRange);
    return storeDateTimeRange;
  }

SportsOlympicsEventSchedulesAndResultsArgumentDateAndTimeJSON *SportsOlympicsEventSchedulesAndResultsArgumentDateAndTimeJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    SportsOlympicsEventSchedulesAndResultsArgumentDateAndTimeJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<SportsOlympicsEventSchedulesAndResultsArgumentDateAndTimeJSON>, SportsOlympicsEventSchedulesAndResultsArgumentDateAndTimeJSON *, bool> generator("Type SportsOlympicsEventSchedulesAndResultsArgumentDateAndTime", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
