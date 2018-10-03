/* file "HomeAutomationDisambiguateSpecifierDataJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "HomeAutomationDisambiguateSpecifierDataJSON.h"

#include "HomeAutomationDisambiguateSpecifierDataJSON.h"


HomeAutomationDisambiguateSpecifierDataJSON::HomeAutomationDisambiguateSpecifierDataJSON(const HomeAutomationDisambiguateSpecifierDataJSON &)
  {
    assert(false);
  }

HomeAutomationDisambiguateSpecifierDataJSON &HomeAutomationDisambiguateSpecifierDataJSON::operator=(const HomeAutomationDisambiguateSpecifierDataJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *HomeAutomationDisambiguateSpecifierDataJSON::extraAmbiguitiesToJSON(void) const
  {
    JSONValueHandler handler_Ambiguities;
    storeAmbiguities->write_as_json(&handler_Ambiguities);
    handler_Ambiguities.result->add_reference();
    return handler_Ambiguities.result;
  }

void HomeAutomationDisambiguateSpecifierDataJSON::fromJSONAmbiguities(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    HomeAutomationAmbiguityListJSON *convert_classy = HomeAutomationAmbiguityListJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setAmbiguities(convert_classy);
    convert_classy->remove_reference();
  }

HomeAutomationDisambiguateSpecifierDataJSON::HomeAutomationDisambiguateSpecifierDataJSON(void) :
        flagHasAmbiguities(false)
  {
    extraIndex = create_string_index();
  }

HomeAutomationDisambiguateSpecifierDataJSON::~HomeAutomationDisambiguateSpecifierDataJSON(void)
  {
    if (flagHasAmbiguities)
      {
        storeAmbiguities->remove_reference();
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool HomeAutomationDisambiguateSpecifierDataJSON::hasAmbiguities(void) const
  {
    return flagHasAmbiguities;
  }

HomeAutomationAmbiguityListJSON * HomeAutomationDisambiguateSpecifierDataJSON::getAmbiguities(void)
  {
    assert(flagHasAmbiguities);
    return storeAmbiguities;
  }

const HomeAutomationAmbiguityListJSON * HomeAutomationDisambiguateSpecifierDataJSON::getAmbiguities(void) const
  {
    assert(flagHasAmbiguities);
    return storeAmbiguities;
  }

HomeAutomationDisambiguateSpecifierDataJSON *HomeAutomationDisambiguateSpecifierDataJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    HomeAutomationDisambiguateSpecifierDataJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<HomeAutomationDisambiguateSpecifierDataJSON>, HomeAutomationDisambiguateSpecifierDataJSON *, bool> generator("Type HomeAutomationDisambiguateSpecifierData", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
