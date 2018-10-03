/* file "ScanRadioCommandJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "ScanRadioCommandJSON.h"

#include "ScanRadioCommandJSON.h"


ScanRadioCommandJSON::ScanRadioCommandJSON(const ScanRadioCommandJSON &)
  {
    assert(false);
  }

ScanRadioCommandJSON &ScanRadioCommandJSON::operator=(const ScanRadioCommandJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

ScanRadioCommandJSON::ScanRadioCommandJSON(void)
  {
    extraIndex = create_string_index();
  }

ScanRadioCommandJSON::~ScanRadioCommandJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *ScanRadioCommandJSON::getRadioCommandKind(void) const
  {
    return "ScanRadio";
  }

ScanRadioCommandJSON *ScanRadioCommandJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    ScanRadioCommandJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<ScanRadioCommandJSON>, ScanRadioCommandJSON *, bool> generator("Type ScanRadioCommand", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
