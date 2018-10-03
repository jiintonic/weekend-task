/* file "ApplyPromoCodeResponseJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "ApplyPromoCodeResponseJSON.h"

#include "ApplyPromoCodeResponseJSON.h"


ApplyPromoCodeResponseJSON::ApplyPromoCodeResponseJSON(const ApplyPromoCodeResponseJSON &)
  {
    assert(false);
  }

ApplyPromoCodeResponseJSON &ApplyPromoCodeResponseJSON::operator=(const ApplyPromoCodeResponseJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void ApplyPromoCodeResponseJSON::fromJSONpromotion_code(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field promotion_code of ApplyPromoCodeResponseJSON is not a string.");
    setpromotion_code(std::string(json_string->getData()));
  }

void ApplyPromoCodeResponseJSON::fromJSONdescription(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field description of ApplyPromoCodeResponseJSON is not a string.");
    setdescription(std::string(json_string->getData()));
  }

ApplyPromoCodeResponseJSON::ApplyPromoCodeResponseJSON(void) :
        flagHaspromotion_code(false),
        flagHasdescription(false)
  {
    extraIndex = create_string_index();
  }

ApplyPromoCodeResponseJSON::~ApplyPromoCodeResponseJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool ApplyPromoCodeResponseJSON::haspromotion_code(void) const
  {
    return flagHaspromotion_code;
  }

std::string ApplyPromoCodeResponseJSON::getpromotion_code(void)
  {
    assert(flagHaspromotion_code);
    return storepromotion_code;
  }

const std::string ApplyPromoCodeResponseJSON::getpromotion_code(void) const
  {
    assert(flagHaspromotion_code);
    return storepromotion_code;
  }

bool ApplyPromoCodeResponseJSON::hasdescription(void) const
  {
    return flagHasdescription;
  }

std::string ApplyPromoCodeResponseJSON::getdescription(void)
  {
    assert(flagHasdescription);
    return storedescription;
  }

const std::string ApplyPromoCodeResponseJSON::getdescription(void) const
  {
    assert(flagHasdescription);
    return storedescription;
  }

ApplyPromoCodeResponseJSON *ApplyPromoCodeResponseJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    ApplyPromoCodeResponseJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<ApplyPromoCodeResponseJSON>, ApplyPromoCodeResponseJSON *, bool> generator("Type ApplyPromoCodeResponse", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
