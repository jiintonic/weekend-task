/* file "RememberUserLocationIntentJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "RememberUserLocationIntentJSON.h"

#include "RememberUserLocationIntentJSON.h"


RememberUserLocationIntentJSON::RememberUserLocationIntentJSON(const RememberUserLocationIntentJSON &)
  {
    assert(false);
  }

RememberUserLocationIntentJSON &RememberUserLocationIntentJSON::operator=(const RememberUserLocationIntentJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *RememberUserLocationIntentJSON::extraIsOwnedToJSON(void) const
  {
    JSONValue *generated_boolean_IsOwned = (storeIsOwned ? (JSONValue *)new JSONTrueValue() : (JSONValue *)new JSONFalseValue());
    return generated_boolean_IsOwned;
  }

JSONValue *RememberUserLocationIntentJSON::extraWhatToJSON(void) const
  {
    JSONStringValue *generated_string_What = new JSONStringValue(storeWhat.c_str());
    return generated_string_What;
  }

JSONValue *RememberUserLocationIntentJSON::extraLocationToJSON(void) const
  {
    JSONValueHandler handler_Location;
    storeLocation->write_as_json(&handler_Location);
    handler_Location.result->add_reference();
    return handler_Location.result;
  }

void RememberUserLocationIntentJSON::fromJSONIsOwned(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field IsOwned of RememberUserLocationIntentJSON is not true for false.");
          }
      }
    setIsOwned(the_bool);
  }

void RememberUserLocationIntentJSON::fromJSONWhat(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field What of RememberUserLocationIntentJSON is not a string.");
    setWhat(std::string(json_string->getData()));
  }

void RememberUserLocationIntentJSON::fromJSONLocation(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    LocationIntentJSON *convert_classy = LocationIntentJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setLocation(convert_classy);
    convert_classy->remove_reference();
  }

RememberUserLocationIntentJSON::RememberUserLocationIntentJSON(void) :
        flagHasIsOwned(false),
        flagHasWhat(false),
        flagHasLocation(false)
  {
    extraIndex = create_string_index();
  }

RememberUserLocationIntentJSON::~RememberUserLocationIntentJSON(void)
  {
    if (flagHasLocation)
      {
        storeLocation->remove_reference();
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *RememberUserLocationIntentJSON::getUserMemoryIntentKind(void) const
  {
    return "RememberUserLocation";
  }

bool RememberUserLocationIntentJSON::hasIsOwned(void) const
  {
    return flagHasIsOwned;
  }

bool RememberUserLocationIntentJSON::getIsOwned(void)
  {
    assert(flagHasIsOwned);
    return storeIsOwned;
  }

const bool RememberUserLocationIntentJSON::getIsOwned(void) const
  {
    assert(flagHasIsOwned);
    return storeIsOwned;
  }

bool RememberUserLocationIntentJSON::hasWhat(void) const
  {
    return flagHasWhat;
  }

std::string RememberUserLocationIntentJSON::getWhat(void)
  {
    assert(flagHasWhat);
    return storeWhat;
  }

const std::string RememberUserLocationIntentJSON::getWhat(void) const
  {
    assert(flagHasWhat);
    return storeWhat;
  }

bool RememberUserLocationIntentJSON::hasLocation(void) const
  {
    return flagHasLocation;
  }

LocationIntentJSON * RememberUserLocationIntentJSON::getLocation(void)
  {
    assert(flagHasLocation);
    return storeLocation;
  }

const LocationIntentJSON * RememberUserLocationIntentJSON::getLocation(void) const
  {
    assert(flagHasLocation);
    return storeLocation;
  }

RememberUserLocationIntentJSON *RememberUserLocationIntentJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    RememberUserLocationIntentJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<RememberUserLocationIntentJSON>, RememberUserLocationIntentJSON *, bool> generator("Type RememberUserLocationIntent", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
