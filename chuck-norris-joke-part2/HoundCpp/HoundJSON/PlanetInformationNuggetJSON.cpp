/* file "PlanetInformationNuggetJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "PlanetInformationNuggetJSON.h"

#include "PlanetInformationNuggetJSON.h"


PlanetInformationNuggetJSON::PlanetInformationNuggetJSON(const PlanetInformationNuggetJSON &)
  {
    assert(false);
  }

PlanetInformationNuggetJSON &PlanetInformationNuggetJSON::operator=(const PlanetInformationNuggetJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *PlanetInformationNuggetJSON::extraPlanetNameToJSON(void) const
  {
    JSONStringValue *generated_string_PlanetName = new JSONStringValue(storePlanetName.c_str());
    return generated_string_PlanetName;
  }

void PlanetInformationNuggetJSON::fromJSONPlanetName(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field PlanetName of PlanetInformationNuggetJSON is not a string.");
    setPlanetName(std::string(json_string->getData()));
  }

PlanetInformationNuggetJSON::PlanetInformationNuggetJSON(void) :
        flagHasPlanetName(false)
  {
    extraIndex = create_string_index();
  }

PlanetInformationNuggetJSON::~PlanetInformationNuggetJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *PlanetInformationNuggetJSON::getNuggetKind(void) const
  {
    return "Planet";
  }

bool PlanetInformationNuggetJSON::hasPlanetName(void) const
  {
    return flagHasPlanetName;
  }

std::string PlanetInformationNuggetJSON::getPlanetName(void)
  {
    assert(flagHasPlanetName);
    return storePlanetName;
  }

const std::string PlanetInformationNuggetJSON::getPlanetName(void) const
  {
    assert(flagHasPlanetName);
    return storePlanetName;
  }

PlanetInformationNuggetJSON *PlanetInformationNuggetJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    PlanetInformationNuggetJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<PlanetInformationNuggetJSON>, PlanetInformationNuggetJSON *, bool> generator("Type PlanetInformationNugget", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
