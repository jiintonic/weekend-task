/* file "ResponseTypesJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "ResponseTypesJSON.h"

#include "ResponseTypesJSON.h"


ResponseTypesJSON::ResponseTypesJSON(const ResponseTypesJSON &)
  {
    assert(false);
  }

ResponseTypesJSON &ResponseTypesJSON::operator=(const ResponseTypesJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void ResponseTypesJSON::fromJSONSpokenShort(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field SpokenShort of ResponseTypesJSON is not a string.");
    setSpokenShort(std::string(json_string->getData()));
  }

void ResponseTypesJSON::fromJSONSpokenLong(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field SpokenLong of ResponseTypesJSON is not a string.");
    setSpokenLong(std::string(json_string->getData()));
  }

void ResponseTypesJSON::fromJSONWrittenShort(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field WrittenShort of ResponseTypesJSON is not a string.");
    setWrittenShort(std::string(json_string->getData()));
  }

void ResponseTypesJSON::fromJSONWrittenLong(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field WrittenLong of ResponseTypesJSON is not a string.");
    setWrittenLong(std::string(json_string->getData()));
  }

ResponseTypesJSON::ResponseTypesJSON(void) :
        flagHasSpokenShort(false),
        flagHasSpokenLong(false),
        flagHasWrittenShort(false),
        flagHasWrittenLong(false)
  {
    extraIndex = create_string_index();
  }

ResponseTypesJSON::~ResponseTypesJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool ResponseTypesJSON::hasSpokenShort(void) const
  {
    return flagHasSpokenShort;
  }

std::string ResponseTypesJSON::getSpokenShort(void)
  {
    assert(flagHasSpokenShort);
    return storeSpokenShort;
  }

const std::string ResponseTypesJSON::getSpokenShort(void) const
  {
    assert(flagHasSpokenShort);
    return storeSpokenShort;
  }

bool ResponseTypesJSON::hasSpokenLong(void) const
  {
    return flagHasSpokenLong;
  }

std::string ResponseTypesJSON::getSpokenLong(void)
  {
    assert(flagHasSpokenLong);
    return storeSpokenLong;
  }

const std::string ResponseTypesJSON::getSpokenLong(void) const
  {
    assert(flagHasSpokenLong);
    return storeSpokenLong;
  }

bool ResponseTypesJSON::hasWrittenShort(void) const
  {
    return flagHasWrittenShort;
  }

std::string ResponseTypesJSON::getWrittenShort(void)
  {
    assert(flagHasWrittenShort);
    return storeWrittenShort;
  }

const std::string ResponseTypesJSON::getWrittenShort(void) const
  {
    assert(flagHasWrittenShort);
    return storeWrittenShort;
  }

bool ResponseTypesJSON::hasWrittenLong(void) const
  {
    return flagHasWrittenLong;
  }

std::string ResponseTypesJSON::getWrittenLong(void)
  {
    assert(flagHasWrittenLong);
    return storeWrittenLong;
  }

const std::string ResponseTypesJSON::getWrittenLong(void) const
  {
    assert(flagHasWrittenLong);
    return storeWrittenLong;
  }

ResponseTypesJSON *ResponseTypesJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    ResponseTypesJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<ResponseTypesJSON>, ResponseTypesJSON *, bool> generator("Type ResponseTypes", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
