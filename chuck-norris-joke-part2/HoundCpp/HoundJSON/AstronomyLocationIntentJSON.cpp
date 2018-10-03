/* file "AstronomyLocationIntentJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "AstronomyLocationIntentJSON.h"

#include "AstronomyLocationIntentJSON.h"


AstronomyLocationIntentJSON::AstronomyLocationIntentJSON(const AstronomyLocationIntentJSON &)
  {
    assert(false);
  }

AstronomyLocationIntentJSON &AstronomyLocationIntentJSON::operator=(const AstronomyLocationIntentJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *AstronomyLocationIntentJSON::extraNameToJSON(void) const
  {
    JSONStringValue *generated_string_Name = new JSONStringValue(storeName.c_str());
    return generated_string_Name;
  }

void AstronomyLocationIntentJSON::fromJSONName(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Name of AstronomyLocationIntentJSON is not a string.");
    setName(std::string(json_string->getData()));
  }

AstronomyLocationIntentJSON::AstronomyLocationIntentJSON(void) :
        flagHasName(false)
  {
    extraIndex = create_string_index();
  }

AstronomyLocationIntentJSON::~AstronomyLocationIntentJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *AstronomyLocationIntentJSON::getLocationIntentKind(void) const
  {
    return "Astronomy";
  }

bool AstronomyLocationIntentJSON::hasName(void) const
  {
    return flagHasName;
  }

std::string AstronomyLocationIntentJSON::getName(void)
  {
    assert(flagHasName);
    return storeName;
  }

const std::string AstronomyLocationIntentJSON::getName(void) const
  {
    assert(flagHasName);
    return storeName;
  }

AstronomyLocationIntentJSON *AstronomyLocationIntentJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    AstronomyLocationIntentJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<AstronomyLocationIntentJSON>, AstronomyLocationIntentJSON *, bool> generator("Type AstronomyLocationIntent", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
