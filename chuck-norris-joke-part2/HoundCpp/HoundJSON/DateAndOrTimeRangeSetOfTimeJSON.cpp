/* file "DateAndOrTimeRangeSetOfTimeJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "DateAndOrTimeRangeSetOfTimeJSON.h"

#include "DateAndOrTimeRangeSetOfTimeJSON.h"


DateAndOrTimeRangeSetOfTimeJSON::DateAndOrTimeRangeSetOfTimeJSON(const DateAndOrTimeRangeSetOfTimeJSON &)
  {
    assert(false);
  }

DateAndOrTimeRangeSetOfTimeJSON &DateAndOrTimeRangeSetOfTimeJSON::operator=(const DateAndOrTimeRangeSetOfTimeJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *DateAndOrTimeRangeSetOfTimeJSON::extraStartToJSON(void) const
  {
    JSONValueHandler handler_Start;
    storeStart->write_as_json(&handler_Start);
    handler_Start.result->add_reference();
    return handler_Start.result;
  }

JSONValue *DateAndOrTimeRangeSetOfTimeJSON::extraEndToJSON(void) const
  {
    JSONValueHandler handler_End;
    storeEnd->write_as_json(&handler_End);
    handler_End.result->add_reference();
    return handler_End.result;
  }

void DateAndOrTimeRangeSetOfTimeJSON::fromJSONStart(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DateAndOrTimeJSON *convert_classy = DateAndOrTimeJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setStart(convert_classy);
    convert_classy->remove_reference();
  }

void DateAndOrTimeRangeSetOfTimeJSON::fromJSONEnd(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DateAndOrTimeJSON *convert_classy = DateAndOrTimeJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setEnd(convert_classy);
    convert_classy->remove_reference();
  }

DateAndOrTimeRangeSetOfTimeJSON::DateAndOrTimeRangeSetOfTimeJSON(void) :
        flagHasStart(false),
        flagHasEnd(false)
  {
    extraIndex = create_string_index();
  }

DateAndOrTimeRangeSetOfTimeJSON::~DateAndOrTimeRangeSetOfTimeJSON(void)
  {
    if (flagHasStart)
      {
        storeStart->remove_reference();
      }
    if (flagHasEnd)
      {
        storeEnd->remove_reference();
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *DateAndOrTimeRangeSetOfTimeJSON::getSetOfTimeKind(void) const
  {
    return "DateAndOrTimeRange";
  }

bool DateAndOrTimeRangeSetOfTimeJSON::hasStart(void) const
  {
    return flagHasStart;
  }

DateAndOrTimeJSON * DateAndOrTimeRangeSetOfTimeJSON::getStart(void)
  {
    assert(flagHasStart);
    return storeStart;
  }

const DateAndOrTimeJSON * DateAndOrTimeRangeSetOfTimeJSON::getStart(void) const
  {
    assert(flagHasStart);
    return storeStart;
  }

bool DateAndOrTimeRangeSetOfTimeJSON::hasEnd(void) const
  {
    return flagHasEnd;
  }

DateAndOrTimeJSON * DateAndOrTimeRangeSetOfTimeJSON::getEnd(void)
  {
    assert(flagHasEnd);
    return storeEnd;
  }

const DateAndOrTimeJSON * DateAndOrTimeRangeSetOfTimeJSON::getEnd(void) const
  {
    assert(flagHasEnd);
    return storeEnd;
  }

DateAndOrTimeRangeSetOfTimeJSON *DateAndOrTimeRangeSetOfTimeJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    DateAndOrTimeRangeSetOfTimeJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<DateAndOrTimeRangeSetOfTimeJSON>, DateAndOrTimeRangeSetOfTimeJSON *, bool> generator("Type DateAndOrTimeRangeSetOfTime", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
