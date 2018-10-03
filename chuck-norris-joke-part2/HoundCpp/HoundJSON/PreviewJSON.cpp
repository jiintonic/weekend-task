/* file "PreviewJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "PreviewJSON.h"

#include "PreviewJSON.h"


PreviewJSON::PreviewJSON(const PreviewJSON &)
  {
    assert(false);
  }

PreviewJSON &PreviewJSON::operator=(const PreviewJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void PreviewJSON::fromJSONValue(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    setValue(json_value);
  }

PreviewJSON::PreviewJSON(void) :
        flagHasValue(false)
  {
  }

PreviewJSON::PreviewJSON(JSONValue * init_value) :
        flagHasValue(true),
        storeValue(init_value)
  {
  }

PreviewJSON::~PreviewJSON(void)
  {
    if (flagHasValue)
      {
        storeValue->remove_reference();
      }
  }

bool PreviewJSON::hasValue(void) const
  {
    return flagHasValue;
  }

JSONValue * PreviewJSON::getValue(void)
  {
    assert(flagHasValue);
    return storeValue;
  }

const JSONValue * PreviewJSON::getValue(void) const
  {
    assert(flagHasValue);
    return storeValue;
  }

PreviewJSON *PreviewJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    PreviewJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<PreviewJSON>, PreviewJSON *, bool> generator("Type Preview", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
