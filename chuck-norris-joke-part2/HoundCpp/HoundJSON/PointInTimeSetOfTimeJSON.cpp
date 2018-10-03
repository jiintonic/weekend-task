/* file "PointInTimeSetOfTimeJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "PointInTimeSetOfTimeJSON.h"

#include "PointInTimeSetOfTimeJSON.h"


PointInTimeSetOfTimeJSON::PointInTimeSetOfTimeJSON(const PointInTimeSetOfTimeJSON &)
  {
    assert(false);
  }

PointInTimeSetOfTimeJSON &PointInTimeSetOfTimeJSON::operator=(const PointInTimeSetOfTimeJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *PointInTimeSetOfTimeJSON::extraPointToJSON(void) const
  {
    JSONValueHandler handler_Point;
    storePoint->write_as_json(&handler_Point);
    handler_Point.result->add_reference();
    return handler_Point.result;
  }

void PointInTimeSetOfTimeJSON::fromJSONPoint(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DateAndOrTimeJSON *convert_classy = DateAndOrTimeJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setPoint(convert_classy);
    convert_classy->remove_reference();
  }

PointInTimeSetOfTimeJSON::PointInTimeSetOfTimeJSON(void) :
        flagHasPoint(false)
  {
    extraIndex = create_string_index();
  }

PointInTimeSetOfTimeJSON::~PointInTimeSetOfTimeJSON(void)
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

const char *PointInTimeSetOfTimeJSON::getSetOfTimeKind(void) const
  {
    return "Point";
  }

bool PointInTimeSetOfTimeJSON::hasPoint(void) const
  {
    return flagHasPoint;
  }

DateAndOrTimeJSON * PointInTimeSetOfTimeJSON::getPoint(void)
  {
    assert(flagHasPoint);
    return storePoint;
  }

const DateAndOrTimeJSON * PointInTimeSetOfTimeJSON::getPoint(void) const
  {
    assert(flagHasPoint);
    return storePoint;
  }

PointInTimeSetOfTimeJSON *PointInTimeSetOfTimeJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    PointInTimeSetOfTimeJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<PointInTimeSetOfTimeJSON>, PointInTimeSetOfTimeJSON *, bool> generator("Type PointInTimeSetOfTime", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
