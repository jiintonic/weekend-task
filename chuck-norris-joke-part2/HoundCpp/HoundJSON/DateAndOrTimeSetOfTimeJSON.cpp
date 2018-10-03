/* file "DateAndOrTimeSetOfTimeJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "DateAndOrTimeSetOfTimeJSON.h"

#include "DateAndOrTimeSetOfTimeJSON.h"


DateAndOrTimeSetOfTimeJSON::DateAndOrTimeSetOfTimeJSON(const DateAndOrTimeSetOfTimeJSON &)
  {
    assert(false);
  }

DateAndOrTimeSetOfTimeJSON &DateAndOrTimeSetOfTimeJSON::operator=(const DateAndOrTimeSetOfTimeJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *DateAndOrTimeSetOfTimeJSON::extraPointToJSON(void) const
  {
    JSONValueHandler handler_Point;
    storePoint->write_as_json(&handler_Point);
    handler_Point.result->add_reference();
    return handler_Point.result;
  }

void DateAndOrTimeSetOfTimeJSON::fromJSONPoint(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DateAndOrTimeJSON *convert_classy = DateAndOrTimeJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setPoint(convert_classy);
    convert_classy->remove_reference();
  }

DateAndOrTimeSetOfTimeJSON::DateAndOrTimeSetOfTimeJSON(void) :
        flagHasPoint(false)
  {
    extraIndex = create_string_index();
  }

DateAndOrTimeSetOfTimeJSON::~DateAndOrTimeSetOfTimeJSON(void)
  {
    if (flagHasPoint)
      {
        storePoint->remove_reference();
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *DateAndOrTimeSetOfTimeJSON::getSetOfTimeKind(void) const
  {
    return "DateAndOrTime";
  }

bool DateAndOrTimeSetOfTimeJSON::hasPoint(void) const
  {
    return flagHasPoint;
  }

DateAndOrTimeJSON * DateAndOrTimeSetOfTimeJSON::getPoint(void)
  {
    assert(flagHasPoint);
    return storePoint;
  }

const DateAndOrTimeJSON * DateAndOrTimeSetOfTimeJSON::getPoint(void) const
  {
    assert(flagHasPoint);
    return storePoint;
  }

DateAndOrTimeSetOfTimeJSON *DateAndOrTimeSetOfTimeJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    DateAndOrTimeSetOfTimeJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<DateAndOrTimeSetOfTimeJSON>, DateAndOrTimeSetOfTimeJSON *, bool> generator("Type DateAndOrTimeSetOfTime", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
