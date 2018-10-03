/* file "RandomNumberGeneratorCoinFlipRequestResultJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "RandomNumberGeneratorCoinFlipRequestResultJSON.h"

#include "RandomNumberGeneratorCoinFlipRequestResultJSON.h"


RandomNumberGeneratorCoinFlipRequestResultJSON::TypeValues RandomNumberGeneratorCoinFlipRequestResultJSON::stringToValues(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'H':
            if (strcmp(&(chars[1]), "eads") == 0)
                return Values_Heads;
            break;
        case 'T':
            if (strcmp(&(chars[1]), "ails") == 0)
                return Values_Tails;
            break;
        default:
            break;
      }
    throw("The value for field `Values' is not one of the legal values.");
  }

const char *RandomNumberGeneratorCoinFlipRequestResultJSON::stringFromValues(TypeValues the_enum)
  {
    switch (the_enum)
      {
        case Values_Heads:
            return "Heads";
        case Values_Tails:
            return "Tails";
        default:
            assert(false);
            return NULL;
      }
  }

RandomNumberGeneratorCoinFlipRequestResultJSON::TypeValuesSummaryJSON::TypeValuesSummaryJSON(const TypeValuesSummaryJSON &)
  {
    assert(false);
  }

RandomNumberGeneratorCoinFlipRequestResultJSON::TypeValuesSummaryJSON &RandomNumberGeneratorCoinFlipRequestResultJSON::TypeValuesSummaryJSON::operator=(const TypeValuesSummaryJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void RandomNumberGeneratorCoinFlipRequestResultJSON::TypeValuesSummaryJSON::fromJSONNumHeads(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field NumHeads of TypeValuesSummaryJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field NumHeads of TypeValuesSummaryJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setNumHeads(extracted_integer);
  }

void RandomNumberGeneratorCoinFlipRequestResultJSON::TypeValuesSummaryJSON::fromJSONNumTails(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field NumTails of TypeValuesSummaryJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field NumTails of TypeValuesSummaryJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setNumTails(extracted_integer);
  }

RandomNumberGeneratorCoinFlipRequestResultJSON::TypeValuesSummaryJSON::TypeValuesSummaryJSON(void) :
        flagHasNumHeads(false),
        flagHasNumTails(false)
  {
  }

RandomNumberGeneratorCoinFlipRequestResultJSON::TypeValuesSummaryJSON::~TypeValuesSummaryJSON(void)
  {
  }

bool RandomNumberGeneratorCoinFlipRequestResultJSON::TypeValuesSummaryJSON::hasNumHeads(void) const
  {
    return flagHasNumHeads;
  }

OInteger RandomNumberGeneratorCoinFlipRequestResultJSON::TypeValuesSummaryJSON::getNumHeads(void)
  {
    assert(flagHasNumHeads);
    return storeNumHeads;
  }

const OInteger RandomNumberGeneratorCoinFlipRequestResultJSON::TypeValuesSummaryJSON::getNumHeads(void) const
  {
    assert(flagHasNumHeads);
    return storeNumHeads;
  }

bool RandomNumberGeneratorCoinFlipRequestResultJSON::TypeValuesSummaryJSON::hasNumTails(void) const
  {
    return flagHasNumTails;
  }

OInteger RandomNumberGeneratorCoinFlipRequestResultJSON::TypeValuesSummaryJSON::getNumTails(void)
  {
    assert(flagHasNumTails);
    return storeNumTails;
  }

const OInteger RandomNumberGeneratorCoinFlipRequestResultJSON::TypeValuesSummaryJSON::getNumTails(void) const
  {
    assert(flagHasNumTails);
    return storeNumTails;
  }

RandomNumberGeneratorCoinFlipRequestResultJSON::RandomNumberGeneratorCoinFlipRequestResultJSON(const RandomNumberGeneratorCoinFlipRequestResultJSON &)
  {
    assert(false);
  }

RandomNumberGeneratorCoinFlipRequestResultJSON &RandomNumberGeneratorCoinFlipRequestResultJSON::operator=(const RandomNumberGeneratorCoinFlipRequestResultJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *RandomNumberGeneratorCoinFlipRequestResultJSON::extraValuesToJSON(void) const
  {
    JSONArrayValue *generated_array_1_Values = new JSONArrayValue();
    for (size_t num1 = 0; num1 < storeValues.size(); ++num1)
      {
        JSONStringValue *generated_string_Values;
        switch (storeValues[num1])
          {
            case Values_Heads:
                generated_string_Values = new JSONStringValue("Heads");
                break;
            case Values_Tails:
                generated_string_Values = new JSONStringValue("Tails");
                break;
            default:
                assert(false);
                generated_string_Values = NULL;
          }
        generated_array_1_Values->appendComponent(generated_string_Values);
      }
    return generated_array_1_Values;
  }

JSONValue *RandomNumberGeneratorCoinFlipRequestResultJSON::extraFromDiceOrNumbersToJSON(void) const
  {
    JSONValue *generated_boolean_FromDiceOrNumbers = (storeFromDiceOrNumbers ? (JSONValue *)new JSONTrueValue() : (JSONValue *)new JSONFalseValue());
    return generated_boolean_FromDiceOrNumbers;
  }

JSONValue *RandomNumberGeneratorCoinFlipRequestResultJSON::extraValuesSummaryToJSON(void) const
  {
    JSONValueHandler handler_ValuesSummary;
    storeValuesSummary->write_as_json(&handler_ValuesSummary);
    handler_ValuesSummary.result->add_reference();
    return handler_ValuesSummary.result;
  }

void RandomNumberGeneratorCoinFlipRequestResultJSON::fromJSONValues(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field Values of RandomNumberGeneratorCoinFlipRequestResultJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    if (count1 < 1)
        throw("The value for field Values of RandomNumberGeneratorCoinFlipRequestResultJSON has too few elements.");
    std::vector< TypeValues > vector_Values1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        const JSONStringValue *json_string = json_array1->component(num1)->string_value();
        if (json_string == NULL)
            throw("The value for an element of field Values of RandomNumberGeneratorCoinFlipRequestResultJSON is not a string.");
        TypeValues the_enum;
        switch ((unsigned char)(json_string->getData()[0]))
          {
            case 'H':
                if (strcmp(&(json_string->getData()[1]), "eads") == 0)
                      {
                        the_enum = Values_Heads;
                        goto enum_is_done;
                      }
                break;
            case 'T':
                if (strcmp(&(json_string->getData()[1]), "ails") == 0)
                      {
                        the_enum = Values_Tails;
                        goto enum_is_done;
                      }
                break;
            default:
                break;
          }
        throw("The value for an element of field Values of RandomNumberGeneratorCoinFlipRequestResultJSON is not one of the legal strings.");
      enum_is_done:;
        vector_Values1[num1] = the_enum;
      }
    assert(vector_Values1.size() >= 1);
    initValues();
    for (size_t num2 = 0; num2 < vector_Values1.size(); ++num2)
        appendValues(vector_Values1[num2]);
    for (size_t num1 = 0; num1 < vector_Values1.size(); ++num1)
      {
      }
  }

void RandomNumberGeneratorCoinFlipRequestResultJSON::fromJSONFromDiceOrNumbers(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONTrueValue *json_true = json_value->true_value();
    bool the_bool;
    if (json_true != NULL)
      {
        the_bool = true;
      }
    else
      {
        const JSONFalseValue *json_false = json_value->false_value();
        if (json_false != NULL)
          {
            the_bool = false;
          }
        else
          {
            throw("The value for field FromDiceOrNumbers of RandomNumberGeneratorCoinFlipRequestResultJSON is not true for false.");
          }
      }
    setFromDiceOrNumbers(the_bool);
  }

void RandomNumberGeneratorCoinFlipRequestResultJSON::fromJSONValuesSummary(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TypeValuesSummaryJSON *convert_classy = TypeValuesSummaryJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setValuesSummary(convert_classy);
    convert_classy->remove_reference();
  }

RandomNumberGeneratorCoinFlipRequestResultJSON::RandomNumberGeneratorCoinFlipRequestResultJSON(void) :
        flagHasValues(false),
        flagHasFromDiceOrNumbers(false),
        flagHasValuesSummary(false)
  {
  }

RandomNumberGeneratorCoinFlipRequestResultJSON::~RandomNumberGeneratorCoinFlipRequestResultJSON(void)
  {
    if (flagHasValuesSummary)
      {
        storeValuesSummary->remove_reference();
      }
  }

const char *RandomNumberGeneratorCoinFlipRequestResultJSON::getRandomNumberRequestKind(void) const
  {
    return "CoinFlipRequest";
  }

bool RandomNumberGeneratorCoinFlipRequestResultJSON::hasValues(void) const
  {
    return flagHasValues;
  }

size_t RandomNumberGeneratorCoinFlipRequestResultJSON::countOfValues(void) const
  {
    assert(flagHasValues);
    return storeValues.size();
  }

RandomNumberGeneratorCoinFlipRequestResultJSON::TypeValues RandomNumberGeneratorCoinFlipRequestResultJSON::elementOfValues(size_t element_num)
  {
    assert(flagHasValues);
    return storeValues[element_num];
  }

const RandomNumberGeneratorCoinFlipRequestResultJSON::TypeValues RandomNumberGeneratorCoinFlipRequestResultJSON::elementOfValues(size_t element_num) const
  {
    assert(flagHasValues);
    return storeValues[element_num];
  }

std::vector< RandomNumberGeneratorCoinFlipRequestResultJSON::TypeValues > RandomNumberGeneratorCoinFlipRequestResultJSON::getValues(void)
  {
    assert(flagHasValues);
    return storeValues;
  }

const std::vector< RandomNumberGeneratorCoinFlipRequestResultJSON::TypeValues > RandomNumberGeneratorCoinFlipRequestResultJSON::getValues(void) const
  {
    assert(flagHasValues);
    return storeValues;
  }

bool RandomNumberGeneratorCoinFlipRequestResultJSON::hasFromDiceOrNumbers(void) const
  {
    return flagHasFromDiceOrNumbers;
  }

bool RandomNumberGeneratorCoinFlipRequestResultJSON::getFromDiceOrNumbers(void)
  {
    assert(flagHasFromDiceOrNumbers);
    return storeFromDiceOrNumbers;
  }

const bool RandomNumberGeneratorCoinFlipRequestResultJSON::getFromDiceOrNumbers(void) const
  {
    assert(flagHasFromDiceOrNumbers);
    return storeFromDiceOrNumbers;
  }

bool RandomNumberGeneratorCoinFlipRequestResultJSON::hasValuesSummary(void) const
  {
    return flagHasValuesSummary;
  }

RandomNumberGeneratorCoinFlipRequestResultJSON::TypeValuesSummaryJSON * RandomNumberGeneratorCoinFlipRequestResultJSON::getValuesSummary(void)
  {
    assert(flagHasValuesSummary);
    return storeValuesSummary;
  }

const RandomNumberGeneratorCoinFlipRequestResultJSON::TypeValuesSummaryJSON * RandomNumberGeneratorCoinFlipRequestResultJSON::getValuesSummary(void) const
  {
    assert(flagHasValuesSummary);
    return storeValuesSummary;
  }

char RandomNumberGeneratorCoinFlipRequestResultJSON::TypeValuesSummaryJSON::Generator::lowerBoundNumHeads[] = "1";
char RandomNumberGeneratorCoinFlipRequestResultJSON::TypeValuesSummaryJSON::Generator::lowerBoundNumTails[] = "1";
RandomNumberGeneratorCoinFlipRequestResultJSON::TypeValuesSummaryJSON *RandomNumberGeneratorCoinFlipRequestResultJSON::TypeValuesSummaryJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    TypeValuesSummaryJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<TypeValuesSummaryJSON>, TypeValuesSummaryJSON *, bool> generator("Type TypeValuesSummary", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
RandomNumberGeneratorCoinFlipRequestResultJSON *RandomNumberGeneratorCoinFlipRequestResultJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    RandomNumberGeneratorCoinFlipRequestResultJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<RandomNumberGeneratorCoinFlipRequestResultJSON>, RandomNumberGeneratorCoinFlipRequestResultJSON *, bool> generator("Type RandomNumberGeneratorCoinFlipRequestResult", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
