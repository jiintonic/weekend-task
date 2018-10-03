/* file "FiniteRationalQuantityJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "FiniteRationalQuantityJSON.h"

#include "FiniteRationalQuantityJSON.h"


FiniteRationalQuantityJSON::FiniteRationalQuantityJSON(const FiniteRationalQuantityJSON &)
  {
    assert(false);
  }

FiniteRationalQuantityJSON &FiniteRationalQuantityJSON::operator=(const FiniteRationalQuantityJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *FiniteRationalQuantityJSON::extraNumeratorToJSON(void) const
  {
    JSONIntegerValue *generated_integer_Numerator = new JSONIntegerValue(storeNumerator.get_o_integer());
    return generated_integer_Numerator;
  }

JSONValue *FiniteRationalQuantityJSON::extraDenominatorToJSON(void) const
  {
    JSONIntegerValue *generated_integer_Denominator = new JSONIntegerValue(storeDenominator.get_o_integer());
    return generated_integer_Denominator;
  }

void FiniteRationalQuantityJSON::fromJSONNumerator(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field Numerator of FiniteRationalQuantityJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field Numerator of FiniteRationalQuantityJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setNumerator(extracted_integer);
  }

void FiniteRationalQuantityJSON::fromJSONDenominator(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field Denominator of FiniteRationalQuantityJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field Denominator of FiniteRationalQuantityJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setDenominator(extracted_integer);
  }

FiniteRationalQuantityJSON::FiniteRationalQuantityJSON(void) :
        flagHasNumerator(false),
        flagHasDenominator(false)
  {
    extraIndex = create_string_index();
  }

FiniteRationalQuantityJSON::~FiniteRationalQuantityJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *FiniteRationalQuantityJSON::getQuantityKind(void) const
  {
    return "FiniteRational";
  }

bool FiniteRationalQuantityJSON::hasNumerator(void) const
  {
    return flagHasNumerator;
  }

OInteger FiniteRationalQuantityJSON::getNumerator(void)
  {
    assert(flagHasNumerator);
    return storeNumerator;
  }

const OInteger FiniteRationalQuantityJSON::getNumerator(void) const
  {
    assert(flagHasNumerator);
    return storeNumerator;
  }

bool FiniteRationalQuantityJSON::hasDenominator(void) const
  {
    return flagHasDenominator;
  }

OInteger FiniteRationalQuantityJSON::getDenominator(void)
  {
    assert(flagHasDenominator);
    return storeDenominator;
  }

const OInteger FiniteRationalQuantityJSON::getDenominator(void) const
  {
    assert(flagHasDenominator);
    return storeDenominator;
  }

char FiniteRationalQuantityJSON::Generator::lowerBoundDenominator[] = "1";
FiniteRationalQuantityJSON *FiniteRationalQuantityJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    FiniteRationalQuantityJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<FiniteRationalQuantityJSON>, FiniteRationalQuantityJSON *, bool> generator("Type FiniteRationalQuantity", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
