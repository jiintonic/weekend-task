/* file "ContactResultJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "ContactResultJSON.h"

#include "ContactResultJSON.h"
#include "EmailContactResultJSON.h"
#include "SMSContactResultJSON.h"


ContactResultJSON::ContactResultJSON(const ContactResultJSON &)
  {
    assert(false);
  }

ContactResultJSON &ContactResultJSON::operator=(const ContactResultJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void ContactResultJSON::fromJSONUniqueId(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field UniqueId of ContactResultJSON is not a string.");
    setUniqueId(std::string(json_string->getData()));
  }

ContactResultJSON::ContactResultJSON(void) :
        flagHasUniqueId(false)
  {
    extraIndex = create_string_index();
  }

ContactResultJSON::~ContactResultJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool ContactResultJSON::hasUniqueId(void) const
  {
    return flagHasUniqueId;
  }

std::string ContactResultJSON::getUniqueId(void)
  {
    assert(flagHasUniqueId);
    return storeUniqueId;
  }

const std::string ContactResultJSON::getUniqueId(void) const
  {
    assert(flagHasUniqueId);
    return storeUniqueId;
  }

ContactResultJSON *ContactResultJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    ContactResultJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<ContactResultJSON>, ContactResultJSON *, bool> generator("Type ContactResult", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
