/* file "SolarSystemBodyJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "SolarSystemBodyJSON.h"

#include "SolarSystemBodyJSON.h"


SolarSystemBodyJSON::SolarSystemBodyJSON(const SolarSystemBodyJSON &)
  {
    assert(false);
  }

SolarSystemBodyJSON &SolarSystemBodyJSON::operator=(const SolarSystemBodyJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *SolarSystemBodyJSON::extraEnglishNameToJSON(void) const
  {
    JSONStringValue *generated_string_EnglishName = new JSONStringValue(storeEnglishName.c_str());
    return generated_string_EnglishName;
  }

void SolarSystemBodyJSON::fromJSONEnglishName(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field EnglishName of SolarSystemBodyJSON is not a string.");
    setEnglishName(std::string(json_string->getData()));
  }

SolarSystemBodyJSON::SolarSystemBodyJSON(void) :
        flagHasEnglishName(false)
  {
    extraIndex = create_string_index();
  }

SolarSystemBodyJSON::~SolarSystemBodyJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *SolarSystemBodyJSON::getThingKind(void) const
  {
    return "SolarSystemBody";
  }

bool SolarSystemBodyJSON::hasEnglishName(void) const
  {
    return flagHasEnglishName;
  }

std::string SolarSystemBodyJSON::getEnglishName(void)
  {
    assert(flagHasEnglishName);
    return storeEnglishName;
  }

const std::string SolarSystemBodyJSON::getEnglishName(void) const
  {
    assert(flagHasEnglishName);
    return storeEnglishName;
  }

SolarSystemBodyJSON *SolarSystemBodyJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    SolarSystemBodyJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<SolarSystemBodyJSON>, SolarSystemBodyJSON *, bool> generator("Type SolarSystemBody", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
