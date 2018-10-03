/* file "HomeAutomationControlDisambiguateSpecifierCommandJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "HomeAutomationControlDisambiguateSpecifierCommandJSON.h"

#include "HomeAutomationControlDisambiguateSpecifierCommandJSON.h"


HomeAutomationControlDisambiguateSpecifierCommandJSON::HomeAutomationControlDisambiguateSpecifierCommandJSON(const HomeAutomationControlDisambiguateSpecifierCommandJSON &)
  {
    assert(false);
  }

HomeAutomationControlDisambiguateSpecifierCommandJSON &HomeAutomationControlDisambiguateSpecifierCommandJSON::operator=(const HomeAutomationControlDisambiguateSpecifierCommandJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *HomeAutomationControlDisambiguateSpecifierCommandJSON::extraCompactDeviceSpecifierToJSON(void) const
  {
    JSONValueHandler handler_CompactDeviceSpecifier;
    storeCompactDeviceSpecifier->write_as_json(&handler_CompactDeviceSpecifier);
    handler_CompactDeviceSpecifier.result->add_reference();
    return handler_CompactDeviceSpecifier.result;
  }

JSONValue *HomeAutomationControlDisambiguateSpecifierCommandJSON::extraOperationToJSON(void) const
  {
    JSONValueHandler handler_Operation;
    storeOperation->write_as_json(&handler_Operation);
    handler_Operation.result->add_reference();
    return handler_Operation.result;
  }

JSONValue *HomeAutomationControlDisambiguateSpecifierCommandJSON::extraAmbiguitiesToJSON(void) const
  {
    JSONValueHandler handler_Ambiguities;
    storeAmbiguities->write_as_json(&handler_Ambiguities);
    handler_Ambiguities.result->add_reference();
    return handler_Ambiguities.result;
  }

void HomeAutomationControlDisambiguateSpecifierCommandJSON::fromJSONCompactDeviceSpecifier(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    HomeAutomationCompactDeviceSpecifierJSON *convert_classy = HomeAutomationCompactDeviceSpecifierJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setCompactDeviceSpecifier(convert_classy);
    convert_classy->remove_reference();
  }

void HomeAutomationControlDisambiguateSpecifierCommandJSON::fromJSONOperation(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    HomeAutomationOperationJSON *convert_classy = HomeAutomationOperationJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setOperation(convert_classy);
    convert_classy->remove_reference();
  }

void HomeAutomationControlDisambiguateSpecifierCommandJSON::fromJSONAmbiguities(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    HomeAutomationAmbiguityListJSON *convert_classy = HomeAutomationAmbiguityListJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setAmbiguities(convert_classy);
    convert_classy->remove_reference();
  }

HomeAutomationControlDisambiguateSpecifierCommandJSON::HomeAutomationControlDisambiguateSpecifierCommandJSON(void) :
        flagHasCompactDeviceSpecifier(false),
        flagHasOperation(false),
        flagHasAmbiguities(false)
  {
    extraIndex = create_string_index();
  }

HomeAutomationControlDisambiguateSpecifierCommandJSON::~HomeAutomationControlDisambiguateSpecifierCommandJSON(void)
  {
    if (flagHasCompactDeviceSpecifier)
      {
        storeCompactDeviceSpecifier->remove_reference();
      }
    if (flagHasOperation)
      {
        storeOperation->remove_reference();
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

const char *HomeAutomationControlDisambiguateSpecifierCommandJSON::getDisambiguateCommandKind(void) const
  {
    return "HomeAutomationControlDisambiguateSpecifierCommand";
  }

bool HomeAutomationControlDisambiguateSpecifierCommandJSON::hasCompactDeviceSpecifier(void) const
  {
    return flagHasCompactDeviceSpecifier;
  }

HomeAutomationCompactDeviceSpecifierJSON * HomeAutomationControlDisambiguateSpecifierCommandJSON::getCompactDeviceSpecifier(void)
  {
    assert(flagHasCompactDeviceSpecifier);
    return storeCompactDeviceSpecifier;
  }

const HomeAutomationCompactDeviceSpecifierJSON * HomeAutomationControlDisambiguateSpecifierCommandJSON::getCompactDeviceSpecifier(void) const
  {
    assert(flagHasCompactDeviceSpecifier);
    return storeCompactDeviceSpecifier;
  }

bool HomeAutomationControlDisambiguateSpecifierCommandJSON::hasOperation(void) const
  {
    return flagHasOperation;
  }

HomeAutomationOperationJSON * HomeAutomationControlDisambiguateSpecifierCommandJSON::getOperation(void)
  {
    assert(flagHasOperation);
    return storeOperation;
  }

const HomeAutomationOperationJSON * HomeAutomationControlDisambiguateSpecifierCommandJSON::getOperation(void) const
  {
    assert(flagHasOperation);
    return storeOperation;
  }

HomeAutomationOperationJSON::TypeValue HomeAutomationControlDisambiguateSpecifierCommandJSON::getOperationValue(void)
  {
    return getOperation()->getValue();
  }

const HomeAutomationOperationJSON::TypeValue HomeAutomationControlDisambiguateSpecifierCommandJSON::getOperationValue(void) const
  {
    return getOperation()->getValue();
  }

const char *HomeAutomationControlDisambiguateSpecifierCommandJSON::getOperationAsChars(void) const
  {
    return getOperation()->getValueAsChars();
  }

std::string HomeAutomationControlDisambiguateSpecifierCommandJSON::getOperationAsString(void) const
  {
    return getOperation()->getValueAsString();
  }

bool HomeAutomationControlDisambiguateSpecifierCommandJSON::hasAmbiguities(void) const
  {
    return flagHasAmbiguities;
  }

HomeAutomationAmbiguityListJSON * HomeAutomationControlDisambiguateSpecifierCommandJSON::getAmbiguities(void)
  {
    assert(flagHasAmbiguities);
    return storeAmbiguities;
  }

const HomeAutomationAmbiguityListJSON * HomeAutomationControlDisambiguateSpecifierCommandJSON::getAmbiguities(void) const
  {
    assert(flagHasAmbiguities);
    return storeAmbiguities;
  }

HomeAutomationControlDisambiguateSpecifierCommandJSON *HomeAutomationControlDisambiguateSpecifierCommandJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    HomeAutomationControlDisambiguateSpecifierCommandJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<HomeAutomationControlDisambiguateSpecifierCommandJSON>, HomeAutomationControlDisambiguateSpecifierCommandJSON *, bool> generator("Type HomeAutomationControlDisambiguateSpecifierCommand", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
