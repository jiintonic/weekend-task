/* file "UberAccessDataJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "UberAccessDataJSON.h"

#include "UberAccessDataJSON.h"


UberAccessDataJSON::UberAccessDataJSON(const UberAccessDataJSON &)
  {
    assert(false);
  }

UberAccessDataJSON &UberAccessDataJSON::operator=(const UberAccessDataJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void UberAccessDataJSON::fromJSONBearerToken(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field BearerToken of UberAccessDataJSON is not a string.");
    setBearerToken(std::string(json_string->getData()));
  }

UberAccessDataJSON::UberAccessDataJSON(void) :
        flagHasBearerToken(false)
  {
    extraIndex = create_string_index();
  }

UberAccessDataJSON::~UberAccessDataJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool UberAccessDataJSON::hasBearerToken(void) const
  {
    return flagHasBearerToken;
  }

std::string UberAccessDataJSON::getBearerToken(void)
  {
    assert(flagHasBearerToken);
    return storeBearerToken;
  }

const std::string UberAccessDataJSON::getBearerToken(void) const
  {
    assert(flagHasBearerToken);
    return storeBearerToken;
  }

UberAccessDataJSON *UberAccessDataJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    UberAccessDataJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<UberAccessDataJSON>, UberAccessDataJSON *, bool> generator("Type UberAccessData", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
