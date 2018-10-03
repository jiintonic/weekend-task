/* file "MortgageCalculatorCancelCommandJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "MortgageCalculatorCancelCommandJSON.h"

#include "MortgageCalculatorCancelCommandJSON.h"


MortgageCalculatorCancelCommandJSON::MortgageCalculatorCancelCommandJSON(const MortgageCalculatorCancelCommandJSON &)
  {
    assert(false);
  }

MortgageCalculatorCancelCommandJSON &MortgageCalculatorCancelCommandJSON::operator=(const MortgageCalculatorCancelCommandJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

MortgageCalculatorCancelCommandJSON::MortgageCalculatorCancelCommandJSON(void)
  {
  }

MortgageCalculatorCancelCommandJSON::~MortgageCalculatorCancelCommandJSON(void)
  {
  }

const char *MortgageCalculatorCancelCommandJSON::getMortgageCalculatorCommandKind(void) const
  {
    return "MortgageCalculatorCancelCommand";
  }

MortgageCalculatorCancelCommandJSON *MortgageCalculatorCancelCommandJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    MortgageCalculatorCancelCommandJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<MortgageCalculatorCancelCommandJSON>, MortgageCalculatorCancelCommandJSON *, bool> generator("Type MortgageCalculatorCancelCommand", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
