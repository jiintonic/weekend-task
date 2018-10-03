/* file "HomeAutomationQueryDisambiguateSpecifierCommandJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "HomeAutomationQueryDisambiguateSpecifierCommandJSON.h"

#include "HomeAutomationQueryDisambiguateSpecifierCommandJSON.h"


HomeAutomationQueryDisambiguateSpecifierCommandJSON::HomeAutomationQueryDisambiguateSpecifierCommandJSON(const HomeAutomationQueryDisambiguateSpecifierCommandJSON &)
  {
    assert(false);
  }

HomeAutomationQueryDisambiguateSpecifierCommandJSON &HomeAutomationQueryDisambiguateSpecifierCommandJSON::operator=(const HomeAutomationQueryDisambiguateSpecifierCommandJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *HomeAutomationQueryDisambiguateSpecifierCommandJSON::extraCompactDeviceSpecifierToJSON(void) const
  {
    JSONValueHandler handler_CompactDeviceSpecifier;
    storeCompactDeviceSpecifier->write_as_json(&handler_CompactDeviceSpecifier);
    handler_CompactDeviceSpecifier.result->add_reference();
    return handler_CompactDeviceSpecifier.result;
  }

JSONValue *HomeAutomationQueryDisambiguateSpecifierCommandJSON::extraHintToJSON(void) const
  {
    JSONValueHandler handler_Hint;
    storeHint->write_as_json(&handler_Hint);
    handler_Hint.result->add_reference();
    return handler_Hint.result;
  }

JSONValue *HomeAutomationQueryDisambiguateSpecifierCommandJSON::extraAmbiguitiesToJSON(void) const
  {
    JSONValueHandler handler_Ambiguities;
    storeAmbiguities->write_as_json(&handler_Ambiguities);
    handler_Ambiguities.result->add_reference();
    return handler_Ambiguities.result;
  }

void HomeAutomationQueryDisambiguateSpecifierCommandJSON::fromJSONCompactDeviceSpecifier(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    HomeAutomationCompactDeviceSpecifierJSON *convert_classy = HomeAutomationCompactDeviceSpecifierJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setCompactDeviceSpecifier(convert_classy);
    convert_classy->remove_reference();
  }

void HomeAutomationQueryDisambiguateSpecifierCommandJSON::fromJSONHint(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    HomeAutomationQueryHintJSON *convert_classy = HomeAutomationQueryHintJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setHint(convert_classy);
    convert_classy->remove_reference();
  }

void HomeAutomationQueryDisambiguateSpecifierCommandJSON::fromJSONAmbiguities(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    HomeAutomationAmbiguityListJSON *convert_classy = HomeAutomationAmbiguityListJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setAmbiguities(convert_classy);
    convert_classy->remove_reference();
  }

HomeAutomationQueryDisambiguateSpecifierCommandJSON::HomeAutomationQueryDisambiguateSpecifierCommandJSON(void) :
        flagHasCompactDeviceSpecifier(false),
        flagHasHint(false),
        flagHasAmbiguities(false)
  {
    extraIndex = create_string_index();
  }

HomeAutomationQueryDisambiguateSpecifierCommandJSON::~HomeAutomationQueryDisambiguateSpecifierCommandJSON(void)
  {
    if (flagHasCompactDeviceSpecifier)
      {
        storeCompactDeviceSpecifier->remove_reference();
      }
    if (flagHasHint)
      {
        storeHint->remove_reference();
      }
    if (flagHasAmbiguities)
      {
        storeAmbiguities->remove_reference();
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *HomeAutomationQueryDisambiguateSpecifierCommandJSON::getDisambiguateCommandKind(void) const
  {
    return "HomeAutomationQueryDisambiguateSpecifierCommand";
  }

bool HomeAutomationQueryDisambiguateSpecifierCommandJSON::hasCompactDeviceSpecifier(void) const
  {
    return flagHasCompactDeviceSpecifier;
  }

HomeAutomationCompactDeviceSpecifierJSON * HomeAutomationQueryDisambiguateSpecifierCommandJSON::getCompactDeviceSpecifier(void)
  {
    assert(flagHasCompactDeviceSpecifier);
    return storeCompactDeviceSpecifier;
  }

const HomeAutomationCompactDeviceSpecifierJSON * HomeAutomationQueryDisambiguateSpecifierCommandJSON::getCompactDeviceSpecifier(void) const
  {
    assert(flagHasCompactDeviceSpecifier);
    return storeCompactDeviceSpecifier;
  }

bool HomeAutomationQueryDisambiguateSpecifierCommandJSON::hasHint(void) const
  {
    return flagHasHint;
  }

HomeAutomationQueryHintJSON * HomeAutomationQueryDisambiguateSpecifierCommandJSON::getHint(void)
  {
    assert(flagHasHint);
    return storeHint;
  }

const HomeAutomationQueryHintJSON * HomeAutomationQueryDisambiguateSpecifierCommandJSON::getHint(void) const
  {
    assert(flagHasHint);
    return storeHint;
  }

bool HomeAutomationQueryDisambiguateSpecifierCommandJSON::hasAmbiguities(void) const
  {
    return flagHasAmbiguities;
  }

HomeAutomationAmbiguityListJSON * HomeAutomationQueryDisambiguateSpecifierCommandJSON::getAmbiguities(void)
  {
    assert(flagHasAmbiguities);
    return storeAmbiguities;
  }

const HomeAutomationAmbiguityListJSON * HomeAutomationQueryDisambiguateSpecifierCommandJSON::getAmbiguities(void) const
  {
    assert(flagHasAmbiguities);
    return storeAmbiguities;
  }

HomeAutomationQueryDisambiguateSpecifierCommandJSON *HomeAutomationQueryDisambiguateSpecifierCommandJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    HomeAutomationQueryDisambiguateSpecifierCommandJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<HomeAutomationQueryDisambiguateSpecifierCommandJSON>, HomeAutomationQueryDisambiguateSpecifierCommandJSON *, bool> generator("Type HomeAutomationQueryDisambiguateSpecifierCommand", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
