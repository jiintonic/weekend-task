/* file "PhoneCancelCommandJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "PhoneCancelCommandJSON.h"

#include "PhoneCancelCommandJSON.h"


PhoneCancelCommandJSON::PhoneCancelCommandJSON(const PhoneCancelCommandJSON &)
  {
    assert(false);
  }

PhoneCancelCommandJSON &PhoneCancelCommandJSON::operator=(const PhoneCancelCommandJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

PhoneCancelCommandJSON::PhoneCancelCommandJSON(void)
  {
    extraIndex = create_string_index();
  }

PhoneCancelCommandJSON::~PhoneCancelCommandJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *PhoneCancelCommandJSON::getPhoneCommandKind(void) const
  {
    return "Cancel";
  }

PhoneCancelCommandJSON *PhoneCancelCommandJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    PhoneCancelCommandJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<PhoneCancelCommandJSON>, PhoneCancelCommandJSON *, bool> generator("Type PhoneCancelCommand", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
