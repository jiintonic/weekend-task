/* file "TimerQuitInformationNuggetJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "TimerQuitInformationNuggetJSON.h"

#include "TimerQuitInformationNuggetJSON.h"


TimerQuitInformationNuggetJSON::TimerQuitInformationNuggetJSON(const TimerQuitInformationNuggetJSON &)
  {
    assert(false);
  }

TimerQuitInformationNuggetJSON &TimerQuitInformationNuggetJSON::operator=(const TimerQuitInformationNuggetJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

TimerQuitInformationNuggetJSON::TimerQuitInformationNuggetJSON(void)
  {
    extraIndex = create_string_index();
  }

TimerQuitInformationNuggetJSON::~TimerQuitInformationNuggetJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *TimerQuitInformationNuggetJSON::getTimerNuggetKind(void) const
  {
    return "TimerQuit";
  }

TimerQuitInformationNuggetJSON *TimerQuitInformationNuggetJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    TimerQuitInformationNuggetJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<TimerQuitInformationNuggetJSON>, TimerQuitInformationNuggetJSON *, bool> generator("Type TimerQuitInformationNugget", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
