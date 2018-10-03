/* file "RememberUserLocationNuggetJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "RememberUserLocationNuggetJSON.h"

#include "RememberUserLocationNuggetJSON.h"


RememberUserLocationNuggetJSON::RememberUserLocationNuggetJSON(const RememberUserLocationNuggetJSON &)
  {
    assert(false);
  }

RememberUserLocationNuggetJSON &RememberUserLocationNuggetJSON::operator=(const RememberUserLocationNuggetJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *RememberUserLocationNuggetJSON::extraIsOwnedToJSON(void) const
  {
    JSONValue *generated_boolean_IsOwned = (storeIsOwned ? (JSONValue *)new JSONTrueValue() : (JSONValue *)new JSONFalseValue());
    return generated_boolean_IsOwned;
  }

JSONValue *RememberUserLocationNuggetJSON::extraWhatToJSON(void) const
  {
    JSONStringValue *generated_string_What = new JSONStringValue(storeWhat.c_str());
    return generated_string_What;
  }

JSONValue *RememberUserLocationNuggetJSON::extraLocationToJSON(void) const
  {
    JSONValueHandler handler_Location;
    storeLocation->write_as_json(&handler_Location);
    handler_Location.result->add_reference();
    return handler_Location.result;
  }

void RememberUserLocationNuggetJSON::fromJSONIsOwned(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field IsOwned of RememberUserLocationNuggetJSON is not true for false.");
          }
      }
    setIsOwned(the_bool);
  }

void RememberUserLocationNuggetJSON::fromJSONWhat(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field What of RememberUserLocationNuggetJSON is not a string.");
    setWhat(std::string(json_string->getData()));
  }

void RememberUserLocationNuggetJSON::fromJSONLocation(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    MapLocationJSON *convert_classy = MapLocationJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setLocation(convert_classy);
    convert_classy->remove_reference();
  }

RememberUserLocationNuggetJSON::RememberUserLocationNuggetJSON(void) :
        flagHasIsOwned(false),
        flagHasWhat(false),
        flagHasLocation(false)
  {
    extraIndex = create_string_index();
  }

RememberUserLocationNuggetJSON::~RememberUserLocationNuggetJSON(void)
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

const char *RememberUserLocationNuggetJSON::getUserMemoryNuggetKind(void) const
  {
    return "RememberUserLocation";
  }

bool RememberUserLocationNuggetJSON::hasIsOwned(void) const
  {
    return flagHasIsOwned;
  }

bool RememberUserLocationNuggetJSON::getIsOwned(void)
  {
    assert(flagHasIsOwned);
    return storeIsOwned;
  }

const bool RememberUserLocationNuggetJSON::getIsOwned(void) const
  {
    assert(flagHasIsOwned);
    return storeIsOwned;
  }

bool RememberUserLocationNuggetJSON::hasWhat(void) const
  {
    return flagHasWhat;
  }

std::string RememberUserLocationNuggetJSON::getWhat(void)
  {
    assert(flagHasWhat);
    return storeWhat;
  }

const std::string RememberUserLocationNuggetJSON::getWhat(void) const
  {
    assert(flagHasWhat);
    return storeWhat;
  }

bool RememberUserLocationNuggetJSON::hasLocation(void) const
  {
    return flagHasLocation;
  }

MapLocationJSON * RememberUserLocationNuggetJSON::getLocation(void)
  {
    assert(flagHasLocation);
    return storeLocation;
  }

const MapLocationJSON * RememberUserLocationNuggetJSON::getLocation(void) const
  {
    assert(flagHasLocation);
    return storeLocation;
  }

RememberUserLocationNuggetJSON *RememberUserLocationNuggetJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    RememberUserLocationNuggetJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<RememberUserLocationNuggetJSON>, RememberUserLocationNuggetJSON *, bool> generator("Type RememberUserLocationNugget", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
