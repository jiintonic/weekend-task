/* file "AmountPropertyInformationNuggetJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "AmountPropertyInformationNuggetJSON.h"

#include "AmountPropertyInformationNuggetJSON.h"


AmountPropertyInformationNuggetJSON::AmountPropertyInformationNuggetJSON(const AmountPropertyInformationNuggetJSON &)
  {
    assert(false);
  }

AmountPropertyInformationNuggetJSON &AmountPropertyInformationNuggetJSON::operator=(const AmountPropertyInformationNuggetJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *AmountPropertyInformationNuggetJSON::extraValueToJSON(void) const
  {
    JSONValueHandler handler_Value;
    storeValue->write_as_json(&handler_Value);
    handler_Value.result->add_reference();
    return handler_Value.result;
  }

void AmountPropertyInformationNuggetJSON::fromJSONValue(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    AmountJSON *convert_classy = AmountJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setValue(convert_classy);
    convert_classy->remove_reference();
  }

AmountPropertyInformationNuggetJSON::AmountPropertyInformationNuggetJSON(void) :
        flagHasValue(false)
  {
    extraIndex = create_string_index();
  }

AmountPropertyInformationNuggetJSON::~AmountPropertyInformationNuggetJSON(void)
  {
    if (flagHasValue)
      {
        storeValue->remove_reference();
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *AmountPropertyInformationNuggetJSON::getPropertyValueKind(void) const
  {
    return "AmountProperty";
  }

bool AmountPropertyInformationNuggetJSON::hasValue(void) const
  {
    return flagHasValue;
  }

AmountJSON * AmountPropertyInformationNuggetJSON::getValue(void)
  {
    assert(flagHasValue);
    return storeValue;
  }

const AmountJSON * AmountPropertyInformationNuggetJSON::getValue(void) const
  {
    assert(flagHasValue);
    return storeValue;
  }

AmountPropertyInformationNuggetJSON *AmountPropertyInformationNuggetJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    AmountPropertyInformationNuggetJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<AmountPropertyInformationNuggetJSON>, AmountPropertyInformationNuggetJSON *, bool> generator("Type AmountPropertyInformationNugget", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
