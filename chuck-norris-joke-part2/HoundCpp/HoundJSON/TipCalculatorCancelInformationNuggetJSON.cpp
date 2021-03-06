/* file "TipCalculatorCancelInformationNuggetJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "TipCalculatorCancelInformationNuggetJSON.h"

#include "TipCalculatorCancelInformationNuggetJSON.h"


TipCalculatorCancelInformationNuggetJSON::TipCalculatorCancelInformationNuggetJSON(const TipCalculatorCancelInformationNuggetJSON &)
  {
    assert(false);
  }

TipCalculatorCancelInformationNuggetJSON &TipCalculatorCancelInformationNuggetJSON::operator=(const TipCalculatorCancelInformationNuggetJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

TipCalculatorCancelInformationNuggetJSON::TipCalculatorCancelInformationNuggetJSON(void)
  {
    extraIndex = create_string_index();
  }

TipCalculatorCancelInformationNuggetJSON::~TipCalculatorCancelInformationNuggetJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *TipCalculatorCancelInformationNuggetJSON::getNuggetKind(void) const
  {
    return "TipCalculatorCancel";
  }

TipCalculatorCancelInformationNuggetJSON *TipCalculatorCancelInformationNuggetJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    TipCalculatorCancelInformationNuggetJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<TipCalculatorCancelInformationNuggetJSON>, TipCalculatorCancelInformationNuggetJSON *, bool> generator("Type TipCalculatorCancelInformationNugget", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
