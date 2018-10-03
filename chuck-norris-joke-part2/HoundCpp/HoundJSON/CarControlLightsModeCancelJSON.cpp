/* file "CarControlLightsModeCancelJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "CarControlLightsModeCancelJSON.h"

#include "CarControlLightsModeCancelJSON.h"


CarControlLightsModeCancelJSON::CarControlLightsModeCancelJSON(const CarControlLightsModeCancelJSON &)
  {
    assert(false);
  }

CarControlLightsModeCancelJSON &CarControlLightsModeCancelJSON::operator=(const CarControlLightsModeCancelJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

CarControlLightsModeCancelJSON::CarControlLightsModeCancelJSON(void)
  {
    extraIndex = create_string_index();
  }

CarControlLightsModeCancelJSON::~CarControlLightsModeCancelJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *CarControlLightsModeCancelJSON::getCarControlCommandKind(void) const
  {
    return "CarControlLightsModeCancel";
  }

CarControlLightsModeCancelJSON *CarControlLightsModeCancelJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    CarControlLightsModeCancelJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<CarControlLightsModeCancelJSON>, CarControlLightsModeCancelJSON *, bool> generator("Type CarControlLightsModeCancel", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
