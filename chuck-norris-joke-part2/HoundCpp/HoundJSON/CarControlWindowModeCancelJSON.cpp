/* file "CarControlWindowModeCancelJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "CarControlWindowModeCancelJSON.h"

#include "CarControlWindowModeCancelJSON.h"


CarControlWindowModeCancelJSON::CarControlWindowModeCancelJSON(const CarControlWindowModeCancelJSON &)
  {
    assert(false);
  }

CarControlWindowModeCancelJSON &CarControlWindowModeCancelJSON::operator=(const CarControlWindowModeCancelJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

CarControlWindowModeCancelJSON::CarControlWindowModeCancelJSON(void)
  {
    extraIndex = create_string_index();
  }

CarControlWindowModeCancelJSON::~CarControlWindowModeCancelJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *CarControlWindowModeCancelJSON::getCarControlCommandKind(void) const
  {
    return "CarControlWindowModeCancel";
  }

CarControlWindowModeCancelJSON *CarControlWindowModeCancelJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    CarControlWindowModeCancelJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<CarControlWindowModeCancelJSON>, CarControlWindowModeCancelJSON *, bool> generator("Type CarControlWindowModeCancel", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
