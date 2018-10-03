/* file "UberErrorUnknownLocationJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "UberErrorUnknownLocationJSON.h"

#include "UberErrorUnknownLocationJSON.h"


UberErrorUnknownLocationJSON::UberErrorUnknownLocationJSON(const UberErrorUnknownLocationJSON &)
  {
    assert(false);
  }

UberErrorUnknownLocationJSON &UberErrorUnknownLocationJSON::operator=(const UberErrorUnknownLocationJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

UberErrorUnknownLocationJSON::UberErrorUnknownLocationJSON(void)
  {
    extraIndex = create_string_index();
  }

UberErrorUnknownLocationJSON::~UberErrorUnknownLocationJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *UberErrorUnknownLocationJSON::getUberErrorKind(void) const
  {
    return "UberErrorUnknownLocation";
  }

UberErrorUnknownLocationJSON *UberErrorUnknownLocationJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    UberErrorUnknownLocationJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<UberErrorUnknownLocationJSON>, UberErrorUnknownLocationJSON *, bool> generator("Type UberErrorUnknownLocation", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
