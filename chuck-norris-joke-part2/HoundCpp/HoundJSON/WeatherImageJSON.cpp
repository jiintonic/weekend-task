/* file "WeatherImageJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "WeatherImageJSON.h"

#include "WeatherImageJSON.h"


WeatherImageJSON::WeatherImageJSON(const WeatherImageJSON &)
  {
    assert(false);
  }

WeatherImageJSON &WeatherImageJSON::operator=(const WeatherImageJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void WeatherImageJSON::fromJSONURL(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field URL of WeatherImageJSON is not a string.");
    setURL(std::string(json_string->getData()));
  }

void WeatherImageJSON::fromJSONKey(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Key of WeatherImageJSON is not a string.");
    setKey(std::string(json_string->getData()));
  }

WeatherImageJSON::WeatherImageJSON(void) :
        flagHasURL(false),
        flagHasKey(false)
  {
    extraIndex = create_string_index();
  }

WeatherImageJSON::~WeatherImageJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool WeatherImageJSON::hasURL(void) const
  {
    return flagHasURL;
  }

std::string WeatherImageJSON::getURL(void)
  {
    assert(flagHasURL);
    return storeURL;
  }

const std::string WeatherImageJSON::getURL(void) const
  {
    assert(flagHasURL);
    return storeURL;
  }

bool WeatherImageJSON::hasKey(void) const
  {
    return flagHasKey;
  }

std::string WeatherImageJSON::getKey(void)
  {
    assert(flagHasKey);
    return storeKey;
  }

const std::string WeatherImageJSON::getKey(void) const
  {
    assert(flagHasKey);
    return storeKey;
  }

WeatherImageJSON *WeatherImageJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    WeatherImageJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<WeatherImageJSON>, WeatherImageJSON *, bool> generator("Type WeatherImage", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
