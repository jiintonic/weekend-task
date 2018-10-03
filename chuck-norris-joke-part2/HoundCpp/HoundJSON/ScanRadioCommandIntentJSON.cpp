/* file "ScanRadioCommandIntentJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "ScanRadioCommandIntentJSON.h"

#include "ScanRadioCommandIntentJSON.h"


ScanRadioCommandIntentJSON::ScanRadioCommandIntentJSON(const ScanRadioCommandIntentJSON &)
  {
    assert(false);
  }

ScanRadioCommandIntentJSON &ScanRadioCommandIntentJSON::operator=(const ScanRadioCommandIntentJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

ScanRadioCommandIntentJSON::ScanRadioCommandIntentJSON(void)
  {
    extraIndex = create_string_index();
  }

ScanRadioCommandIntentJSON::~ScanRadioCommandIntentJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *ScanRadioCommandIntentJSON::getRadioIntentKind(void) const
  {
    return "ScanRadio";
  }

ScanRadioCommandIntentJSON *ScanRadioCommandIntentJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    ScanRadioCommandIntentJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<ScanRadioCommandIntentJSON>, ScanRadioCommandIntentJSON *, bool> generator("Type ScanRadioCommandIntent", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
