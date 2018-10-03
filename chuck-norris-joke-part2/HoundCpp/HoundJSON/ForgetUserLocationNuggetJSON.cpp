/* file "ForgetUserLocationNuggetJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "ForgetUserLocationNuggetJSON.h"

#include "ForgetUserLocationNuggetJSON.h"


ForgetUserLocationNuggetJSON::ForgetUserLocationNuggetJSON(const ForgetUserLocationNuggetJSON &)
  {
    assert(false);
  }

ForgetUserLocationNuggetJSON &ForgetUserLocationNuggetJSON::operator=(const ForgetUserLocationNuggetJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *ForgetUserLocationNuggetJSON::extraIsOwnedToJSON(void) const
  {
    JSONValue *generated_boolean_IsOwned = (storeIsOwned ? (JSONValue *)new JSONTrueValue() : (JSONValue *)new JSONFalseValue());
    return generated_boolean_IsOwned;
  }

JSONValue *ForgetUserLocationNuggetJSON::extraWhatToJSON(void) const
  {
    JSONStringValue *generated_string_What = new JSONStringValue(storeWhat.c_str());
    return generated_string_What;
  }

void ForgetUserLocationNuggetJSON::fromJSONIsOwned(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONTrueValue *json_true = json_value->true_value();
    bool the_bool;
    if (json_true != NULL)
      {
        the_bool = true;
      }
    else
      {
        const JSONFalseValue *json_false = json_value->false_value();
        if (json_false != NULL)
          {
            the_bool = false;
          }
        else
          {
            throw("The value for field IsOwned of ForgetUserLocationNuggetJSON is not true for false.");
          }
      }
    setIsOwned(the_bool);
  }

void ForgetUserLocationNuggetJSON::fromJSONWhat(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field What of ForgetUserLocationNuggetJSON is not a string.");
    setWhat(std::string(json_string->getData()));
  }

ForgetUserLocationNuggetJSON::ForgetUserLocationNuggetJSON(void) :
        flagHasIsOwned(false),
        flagHasWhat(false)
  {
    extraIndex = create_string_index();
  }

ForgetUserLocationNuggetJSON::~ForgetUserLocationNuggetJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *ForgetUserLocationNuggetJSON::getUserMemoryNuggetKind(void) const
  {
    return "ForgetUserLocation";
  }

bool ForgetUserLocationNuggetJSON::hasIsOwned(void) const
  {
    return flagHasIsOwned;
  }

bool ForgetUserLocationNuggetJSON::getIsOwned(void)
  {
    assert(flagHasIsOwned);
    return storeIsOwned;
  }

const bool ForgetUserLocationNuggetJSON::getIsOwned(void) const
  {
    assert(flagHasIsOwned);
    return storeIsOwned;
  }

bool ForgetUserLocationNuggetJSON::hasWhat(void) const
  {
    return flagHasWhat;
  }

std::string ForgetUserLocationNuggetJSON::getWhat(void)
  {
    assert(flagHasWhat);
    return storeWhat;
  }

const std::string ForgetUserLocationNuggetJSON::getWhat(void) const
  {
    assert(flagHasWhat);
    return storeWhat;
  }

ForgetUserLocationNuggetJSON *ForgetUserLocationNuggetJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    ForgetUserLocationNuggetJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<ForgetUserLocationNuggetJSON>, ForgetUserLocationNuggetJSON *, bool> generator("Type ForgetUserLocationNugget", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
