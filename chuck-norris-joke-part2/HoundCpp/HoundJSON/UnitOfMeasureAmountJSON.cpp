/* file "UnitOfMeasureAmountJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "UnitOfMeasureAmountJSON.h"

#include "UnitOfMeasureAmountJSON.h"


UnitOfMeasureAmountJSON::UnitOfMeasureAmountJSON(const UnitOfMeasureAmountJSON &)
  {
    assert(false);
  }

UnitOfMeasureAmountJSON &UnitOfMeasureAmountJSON::operator=(const UnitOfMeasureAmountJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *UnitOfMeasureAmountJSON::extraUnitOfMeasureIDToJSON(void) const
  {
    JSONStringValue *generated_string_UnitOfMeasureID = new JSONStringValue(storeUnitOfMeasureID.c_str());
    return generated_string_UnitOfMeasureID;
  }

void UnitOfMeasureAmountJSON::fromJSONUnitOfMeasureID(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field UnitOfMeasureID of UnitOfMeasureAmountJSON is not a string.");
    setUnitOfMeasureID(std::string(json_string->getData()));
  }

UnitOfMeasureAmountJSON::UnitOfMeasureAmountJSON(void) :
        flagHasUnitOfMeasureID(false)
  {
    extraIndex = create_string_index();
  }

UnitOfMeasureAmountJSON::~UnitOfMeasureAmountJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool UnitOfMeasureAmountJSON::hasUnitOfMeasureID(void) const
  {
    return flagHasUnitOfMeasureID;
  }

std::string UnitOfMeasureAmountJSON::getUnitOfMeasureID(void)
  {
    assert(flagHasUnitOfMeasureID);
    return storeUnitOfMeasureID;
  }

const std::string UnitOfMeasureAmountJSON::getUnitOfMeasureID(void) const
  {
    assert(flagHasUnitOfMeasureID);
    return storeUnitOfMeasureID;
  }

UnitOfMeasureAmountJSON *UnitOfMeasureAmountJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    UnitOfMeasureAmountJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<UnitOfMeasureAmountJSON>, UnitOfMeasureAmountJSON *, bool> generator("Type UnitOfMeasureAmount", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
