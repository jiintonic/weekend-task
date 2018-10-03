/* file "AlarmQuitInformationNuggetJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "AlarmQuitInformationNuggetJSON.h"

#include "AlarmQuitInformationNuggetJSON.h"


AlarmQuitInformationNuggetJSON::AlarmQuitInformationNuggetJSON(const AlarmQuitInformationNuggetJSON &)
  {
    assert(false);
  }

AlarmQuitInformationNuggetJSON &AlarmQuitInformationNuggetJSON::operator=(const AlarmQuitInformationNuggetJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

AlarmQuitInformationNuggetJSON::AlarmQuitInformationNuggetJSON(void)
  {
    extraIndex = create_string_index();
  }

AlarmQuitInformationNuggetJSON::~AlarmQuitInformationNuggetJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *AlarmQuitInformationNuggetJSON::getAlarmNuggetKind(void) const
  {
    return "AlarmQuit";
  }

AlarmQuitInformationNuggetJSON *AlarmQuitInformationNuggetJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    AlarmQuitInformationNuggetJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<AlarmQuitInformationNuggetJSON>, AlarmQuitInformationNuggetJSON *, bool> generator("Type AlarmQuitInformationNugget", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
