/* file "ShowContactsCommandJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "ShowContactsCommandJSON.h"

#include "ShowContactsCommandJSON.h"


ShowContactsCommandJSON::ShowContactsCommandJSON(const ShowContactsCommandJSON &)
  {
    assert(false);
  }

ShowContactsCommandJSON &ShowContactsCommandJSON::operator=(const ShowContactsCommandJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

ShowContactsCommandJSON::ShowContactsCommandJSON(void)
  {
    extraIndex = create_string_index();
  }

ShowContactsCommandJSON::~ShowContactsCommandJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *ShowContactsCommandJSON::getPhoneCommandKind(void) const
  {
    return "ShowContacts";
  }

ShowContactsCommandJSON *ShowContactsCommandJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    ShowContactsCommandJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<ShowContactsCommandJSON>, ShowContactsCommandJSON *, bool> generator("Type ShowContactsCommand", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
