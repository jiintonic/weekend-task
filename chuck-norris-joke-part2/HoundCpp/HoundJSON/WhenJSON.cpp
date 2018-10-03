/* file "WhenJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "WhenJSON.h"

#include "WhenJSON.h"
#include "DateAndOrTimeRangeSpecJSON.h"


WhenJSON::WhenJSON(const WhenJSON &)
  {
    assert(false);
  }

WhenJSON &WhenJSON::operator=(const WhenJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void WhenJSON::fromJSONInstant(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DateAndOrTimeJSON *convert_classy = DateAndOrTimeJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setInstant(convert_classy);
    convert_classy->remove_reference();
  }

void WhenJSON::fromJSONStart(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DateAndOrTimeJSON *convert_classy = DateAndOrTimeJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setStart(convert_classy);
    convert_classy->remove_reference();
  }

void WhenJSON::fromJSONEnd(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DateAndOrTimeJSON *convert_classy = DateAndOrTimeJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setEnd(convert_classy);
    convert_classy->remove_reference();
  }

void WhenJSON::fromJSONDetails(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    SetOfTimeJSON *convert_classy = SetOfTimeJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setDetails(convert_classy);
    convert_classy->remove_reference();
  }

WhenJSON::WhenJSON(void) :
        flagHasInstant(false),
        flagHasStart(false),
        flagHasEnd(false),
        flagHasDetails(false)
  {
    extraIndex = create_string_index();
  }

WhenJSON::~WhenJSON(void)
  {
    if (flagHasInstant)
      {
        storeInstant->remove_reference();
      }
    if (flagHasStart)
      {
        storeStart->remove_reference();
      }
    if (flagHasEnd)
      {
        storeEnd->remove_reference();
      }
    if (flagHasDetails)
      {
        storeDetails->remove_reference();
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool WhenJSON::hasInstant(void) const
  {
    return flagHasInstant;
  }

DateAndOrTimeJSON * WhenJSON::getInstant(void)
  {
    assert(flagHasInstant);
    return storeInstant;
  }

const DateAndOrTimeJSON * WhenJSON::getInstant(void) const
  {
    assert(flagHasInstant);
    return storeInstant;
  }

bool WhenJSON::hasStart(void) const
  {
    return flagHasStart;
  }

DateAndOrTimeJSON * WhenJSON::getStart(void)
  {
    assert(flagHasStart);
    return storeStart;
  }

const DateAndOrTimeJSON * WhenJSON::getStart(void) const
  {
    assert(flagHasStart);
    return storeStart;
  }

bool WhenJSON::hasEnd(void) const
  {
    return flagHasEnd;
  }

DateAndOrTimeJSON * WhenJSON::getEnd(void)
  {
    assert(flagHasEnd);
    return storeEnd;
  }

const DateAndOrTimeJSON * WhenJSON::getEnd(void) const
  {
    assert(flagHasEnd);
    return storeEnd;
  }

bool WhenJSON::hasDetails(void) const
  {
    return flagHasDetails;
  }

SetOfTimeJSON * WhenJSON::getDetails(void)
  {
    assert(flagHasDetails);
    return storeDetails;
  }

const SetOfTimeJSON * WhenJSON::getDetails(void) const
  {
    assert(flagHasDetails);
    return storeDetails;
  }

WhenJSON *WhenJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    WhenJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<WhenJSON>, WhenJSON *, bool> generator("Type When", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
