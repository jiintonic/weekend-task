/* file "UberDeepLinksJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "UberDeepLinksJSON.h"

#include "UberDeepLinksJSON.h"


UberDeepLinksJSON::UberDeepLinksJSON(const UberDeepLinksJSON &)
  {
    assert(false);
  }

UberDeepLinksJSON &UberDeepLinksJSON::operator=(const UberDeepLinksJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void UberDeepLinksJSON::fromJSONStandardLink(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field StandardLink of UberDeepLinksJSON is not a string.");
    setStandardLink(std::string(json_string->getData()));
  }

void UberDeepLinksJSON::fromJSONUniversalLink(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field UniversalLink of UberDeepLinksJSON is not a string.");
    setUniversalLink(std::string(json_string->getData()));
  }

UberDeepLinksJSON::UberDeepLinksJSON(void) :
        flagHasStandardLink(false),
        flagHasUniversalLink(false)
  {
    extraIndex = create_string_index();
  }

UberDeepLinksJSON::~UberDeepLinksJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool UberDeepLinksJSON::hasStandardLink(void) const
  {
    return flagHasStandardLink;
  }

std::string UberDeepLinksJSON::getStandardLink(void)
  {
    assert(flagHasStandardLink);
    return storeStandardLink;
  }

const std::string UberDeepLinksJSON::getStandardLink(void) const
  {
    assert(flagHasStandardLink);
    return storeStandardLink;
  }

bool UberDeepLinksJSON::hasUniversalLink(void) const
  {
    return flagHasUniversalLink;
  }

std::string UberDeepLinksJSON::getUniversalLink(void)
  {
    assert(flagHasUniversalLink);
    return storeUniversalLink;
  }

const std::string UberDeepLinksJSON::getUniversalLink(void) const
  {
    assert(flagHasUniversalLink);
    return storeUniversalLink;
  }

UberDeepLinksJSON *UberDeepLinksJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    UberDeepLinksJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<UberDeepLinksJSON>, UberDeepLinksJSON *, bool> generator("Type UberDeepLinks", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
