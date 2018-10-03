/* file "AgeCalculatorCancelCommandJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "AgeCalculatorCancelCommandJSON.h"

#include "AgeCalculatorCancelCommandJSON.h"


AgeCalculatorCancelCommandJSON::AgeCalculatorCancelCommandJSON(const AgeCalculatorCancelCommandJSON &)
  {
    assert(false);
  }

AgeCalculatorCancelCommandJSON &AgeCalculatorCancelCommandJSON::operator=(const AgeCalculatorCancelCommandJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

AgeCalculatorCancelCommandJSON::AgeCalculatorCancelCommandJSON(void)
  {
  }

AgeCalculatorCancelCommandJSON::~AgeCalculatorCancelCommandJSON(void)
  {
  }

const char *AgeCalculatorCancelCommandJSON::getCommandKind(void) const
  {
    return "AgeCalculatorCancelCommand";
  }

AgeCalculatorCancelCommandJSON *AgeCalculatorCancelCommandJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    AgeCalculatorCancelCommandJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<AgeCalculatorCancelCommandJSON>, AgeCalculatorCancelCommandJSON *, bool> generator("Type AgeCalculatorCancelCommand", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
