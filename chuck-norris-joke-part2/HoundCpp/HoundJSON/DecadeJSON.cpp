/* file "DecadeJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "DecadeJSON.h"

#include "DecadeJSON.h"


DecadeJSON::DecadeJSON(const DecadeJSON &)
  {
    assert(false);
  }

DecadeJSON &DecadeJSON::operator=(const DecadeJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void DecadeJSON::fromJSONDecade(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field Decade of DecadeJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field Decade of DecadeJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setDecade(extracted_integer);
  }

DecadeJSON::DecadeJSON(void) :
        flagHasDecade(false)
  {
    extraIndex = create_string_index();
  }

DecadeJSON::~DecadeJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool DecadeJSON::hasDecade(void) const
  {
    return flagHasDecade;
  }

OInteger DecadeJSON::getDecade(void)
  {
    assert(flagHasDecade);
    return storeDecade;
  }

const OInteger DecadeJSON::getDecade(void) const
  {
    assert(flagHasDecade);
    return storeDecade;
  }

char DecadeJSON::Generator::lowerBoundDecade[] = "0";
DecadeJSON *DecadeJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    DecadeJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<DecadeJSON>, DecadeJSON *, bool> generator("Type Decade", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
