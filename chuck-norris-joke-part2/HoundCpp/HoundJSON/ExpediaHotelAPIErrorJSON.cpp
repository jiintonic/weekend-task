/* file "ExpediaHotelAPIErrorJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "ExpediaHotelAPIErrorJSON.h"

#include "ExpediaHotelAPIErrorJSON.h"


ExpediaHotelAPIErrorJSON::ExpediaHotelAPIErrorJSON(const ExpediaHotelAPIErrorJSON &)
  {
    assert(false);
  }

ExpediaHotelAPIErrorJSON &ExpediaHotelAPIErrorJSON::operator=(const ExpediaHotelAPIErrorJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *ExpediaHotelAPIErrorJSON::extraExpediaResponseJSONToJSON(void) const
  {
    JSONStringValue *generated_string_ExpediaResponseJSON = new JSONStringValue(storeExpediaResponseJSON.c_str());
    return generated_string_ExpediaResponseJSON;
  }

JSONValue *ExpediaHotelAPIErrorJSON::extraExpediaErrorCodeToJSON(void) const
  {
    JSONStringValue *generated_string_ExpediaErrorCode = new JSONStringValue(storeExpediaErrorCode.c_str());
    return generated_string_ExpediaErrorCode;
  }

void ExpediaHotelAPIErrorJSON::fromJSONExpediaResponseJSON(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field ExpediaResponseJSON of ExpediaHotelAPIErrorJSON is not a string.");
    setExpediaResponseJSON(std::string(json_string->getData()));
  }

void ExpediaHotelAPIErrorJSON::fromJSONExpediaErrorCode(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field ExpediaErrorCode of ExpediaHotelAPIErrorJSON is not a string.");
    setExpediaErrorCode(std::string(json_string->getData()));
  }

ExpediaHotelAPIErrorJSON::ExpediaHotelAPIErrorJSON(void) :
        flagHasExpediaResponseJSON(false),
        flagHasExpediaErrorCode(false)
  {
    extraIndex = create_string_index();
  }

ExpediaHotelAPIErrorJSON::~ExpediaHotelAPIErrorJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *ExpediaHotelAPIErrorJSON::getErrorType(void) const
  {
    return "ExpediaHotelAPIError";
  }

bool ExpediaHotelAPIErrorJSON::hasExpediaResponseJSON(void) const
  {
    return flagHasExpediaResponseJSON;
  }

std::string ExpediaHotelAPIErrorJSON::getExpediaResponseJSON(void)
  {
    assert(flagHasExpediaResponseJSON);
    return storeExpediaResponseJSON;
  }

const std::string ExpediaHotelAPIErrorJSON::getExpediaResponseJSON(void) const
  {
    assert(flagHasExpediaResponseJSON);
    return storeExpediaResponseJSON;
  }

bool ExpediaHotelAPIErrorJSON::hasExpediaErrorCode(void) const
  {
    return flagHasExpediaErrorCode;
  }

std::string ExpediaHotelAPIErrorJSON::getExpediaErrorCode(void)
  {
    assert(flagHasExpediaErrorCode);
    return storeExpediaErrorCode;
  }

const std::string ExpediaHotelAPIErrorJSON::getExpediaErrorCode(void) const
  {
    assert(flagHasExpediaErrorCode);
    return storeExpediaErrorCode;
  }

ExpediaHotelAPIErrorJSON *ExpediaHotelAPIErrorJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    ExpediaHotelAPIErrorJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<ExpediaHotelAPIErrorJSON>, ExpediaHotelAPIErrorJSON *, bool> generator("Type ExpediaHotelAPIError", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
