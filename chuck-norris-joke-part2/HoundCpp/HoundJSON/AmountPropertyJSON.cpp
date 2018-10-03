/* file "AmountPropertyJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "AmountPropertyJSON.h"

#include "AmountPropertyJSON.h"


AmountPropertyJSON::AmountPropertyJSON(const AmountPropertyJSON &)
  {
    assert(false);
  }

AmountPropertyJSON &AmountPropertyJSON::operator=(const AmountPropertyJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *AmountPropertyJSON::extraBaseToJSON(void) const
  {
    JSONValueHandler handler_Base;
    storeBase->write_as_json(&handler_Base);
    handler_Base.result->add_reference();
    return handler_Base.result;
  }

JSONValue *AmountPropertyJSON::extraPropertyToJSON(void) const
  {
    JSONValueHandler handler_Property;
    storeProperty->write_as_json(&handler_Property);
    handler_Property.result->add_reference();
    return handler_Property.result;
  }

JSONValue *AmountPropertyJSON::extraAmountToJSON(void) const
  {
    JSONValueHandler handler_Amount;
    storeAmount->write_as_json(&handler_Amount);
    handler_Amount.result->add_reference();
    return handler_Amount.result;
  }

void AmountPropertyJSON::fromJSONBase(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    GeneralizedThingJSON *convert_classy = GeneralizedThingJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setBase(convert_classy);
    convert_classy->remove_reference();
  }

void AmountPropertyJSON::fromJSONProperty(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    PropertyJSON *convert_classy = PropertyJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setProperty(convert_classy);
    convert_classy->remove_reference();
  }

void AmountPropertyJSON::fromJSONAmount(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    AmountJSON *convert_classy = AmountJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setAmount(convert_classy);
    convert_classy->remove_reference();
  }

AmountPropertyJSON::AmountPropertyJSON(void) :
        flagHasBase(false),
        flagHasProperty(false),
        flagHasAmount(false)
  {
    extraIndex = create_string_index();
  }

AmountPropertyJSON::~AmountPropertyJSON(void)
  {
    if (flagHasBase)
      {
        storeBase->remove_reference();
      }
    if (flagHasProperty)
      {
        storeProperty->remove_reference();
      }
    if (flagHasAmount)
      {
        storeAmount->remove_reference();
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *AmountPropertyJSON::getThingKind(void) const
  {
    return "AmountProperty";
  }

bool AmountPropertyJSON::hasBase(void) const
  {
    return flagHasBase;
  }

GeneralizedThingJSON * AmountPropertyJSON::getBase(void)
  {
    assert(flagHasBase);
    return storeBase;
  }

const GeneralizedThingJSON * AmountPropertyJSON::getBase(void) const
  {
    assert(flagHasBase);
    return storeBase;
  }

bool AmountPropertyJSON::hasProperty(void) const
  {
    return flagHasProperty;
  }

PropertyJSON * AmountPropertyJSON::getProperty(void)
  {
    assert(flagHasProperty);
    return storeProperty;
  }

const PropertyJSON * AmountPropertyJSON::getProperty(void) const
  {
    assert(flagHasProperty);
    return storeProperty;
  }

bool AmountPropertyJSON::hasAmount(void) const
  {
    return flagHasAmount;
  }

AmountJSON * AmountPropertyJSON::getAmount(void)
  {
    assert(flagHasAmount);
    return storeAmount;
  }

const AmountJSON * AmountPropertyJSON::getAmount(void) const
  {
    assert(flagHasAmount);
    return storeAmount;
  }

AmountPropertyJSON *AmountPropertyJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    AmountPropertyJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<AmountPropertyJSON>, AmountPropertyJSON *, bool> generator("Type AmountProperty", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
