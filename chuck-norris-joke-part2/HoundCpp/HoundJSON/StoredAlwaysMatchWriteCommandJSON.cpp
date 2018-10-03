/* file "StoredAlwaysMatchWriteCommandJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "StoredAlwaysMatchWriteCommandJSON.h"

#include "StoredAlwaysMatchWriteCommandJSON.h"


StoredAlwaysMatchWriteCommandJSON::StoredAlwaysMatchWriteCommandJSON(const StoredAlwaysMatchWriteCommandJSON &)
  {
    assert(false);
  }

StoredAlwaysMatchWriteCommandJSON &StoredAlwaysMatchWriteCommandJSON::operator=(const StoredAlwaysMatchWriteCommandJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

StoredAlwaysMatchWriteCommandJSON::StoredAlwaysMatchWriteCommandJSON(void)
  {
    extraIndex = create_string_index();
  }

StoredAlwaysMatchWriteCommandJSON::~StoredAlwaysMatchWriteCommandJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *StoredAlwaysMatchWriteCommandJSON::getStoredAlwaysMatchCommandKind(void) const
  {
    return "Write";
  }

StoredAlwaysMatchWriteCommandJSON *StoredAlwaysMatchWriteCommandJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    StoredAlwaysMatchWriteCommandJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<StoredAlwaysMatchWriteCommandJSON>, StoredAlwaysMatchWriteCommandJSON *, bool> generator("Type StoredAlwaysMatchWriteCommand", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
