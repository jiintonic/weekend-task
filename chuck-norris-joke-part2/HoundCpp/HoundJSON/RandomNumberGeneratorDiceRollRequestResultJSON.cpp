/* file "RandomNumberGeneratorDiceRollRequestResultJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "RandomNumberGeneratorDiceRollRequestResultJSON.h"

#include "RandomNumberGeneratorDiceRollRequestResultJSON.h"


RandomNumberGeneratorDiceRollRequestResultJSON::RandomNumberGeneratorDiceRollRequestResultJSON(const RandomNumberGeneratorDiceRollRequestResultJSON &)
  {
    assert(false);
  }

RandomNumberGeneratorDiceRollRequestResultJSON &RandomNumberGeneratorDiceRollRequestResultJSON::operator=(const RandomNumberGeneratorDiceRollRequestResultJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *RandomNumberGeneratorDiceRollRequestResultJSON::extraValuesToJSON(void) const
  {
    JSONArrayValue *generated_array_1_Values = new JSONArrayValue();
    for (size_t num1 = 0; num1 < storeValues.size(); ++num1)
      {
        JSONIntegerValue *generated_integer_Values = new JSONIntegerValue(storeValues[num1].get_o_integer());
        generated_array_1_Values->appendComponent(generated_integer_Values);
      }
    return generated_array_1_Values;
  }

JSONValue *RandomNumberGeneratorDiceRollRequestResultJSON::extraNumFacesToJSON(void) const
  {
    JSONIntegerValue *generated_integer_NumFaces = new JSONIntegerValue(storeNumFaces.get_o_integer());
    return generated_integer_NumFaces;
  }

JSONValue *RandomNumberGeneratorDiceRollRequestResultJSON::extraIsDnDStyleToJSON(void) const
  {
    JSONValue *generated_boolean_IsDnDStyle = (storeIsDnDStyle ? (JSONValue *)new JSONTrueValue() : (JSONValue *)new JSONFalseValue());
    return generated_boolean_IsDnDStyle;
  }

JSONValue *RandomNumberGeneratorDiceRollRequestResultJSON::extraTotalToJSON(void) const
  {
    JSONIntegerValue *generated_integer_Total = new JSONIntegerValue(storeTotal.get_o_integer());
    return generated_integer_Total;
  }

JSONValue *RandomNumberGeneratorDiceRollRequestResultJSON::extraModifierToJSON(void) const
  {
    JSONIntegerValue *generated_integer_Modifier = new JSONIntegerValue(storeModifier.get_o_integer());
    return generated_integer_Modifier;
  }

void RandomNumberGeneratorDiceRollRequestResultJSON::fromJSONValues(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field Values of RandomNumberGeneratorDiceRollRequestResultJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    if (count1 < 1)
        throw("The value for field Values of RandomNumberGeneratorDiceRollRequestResultJSON has too few elements.");
    std::vector< OInteger > vector_Values1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        OInteger extracted_integer;
        const JSONIntegerValue *json_integer = json_array1->component(num1)->integer_value();
        if (json_integer == NULL)
          {
            const JSONRationalValue *json_rational = json_array1->component(num1)->rational_value();
            if (json_rational == NULL)
              {
                throw("The value for an element of field Values of RandomNumberGeneratorDiceRollRequestResultJSON is not a number.");
              }
            if (!(json_rational->isInteger()))
              {
                throw("The value for an element of field Values of RandomNumberGeneratorDiceRollRequestResultJSON is not an integer.");
              }
            extracted_integer = OInteger(json_rational->getInteger())        ;
          }
        else
          {
            extracted_integer = OInteger(json_integer->getData())        ;
          }
        vector_Values1[num1] = extracted_integer;
      }
    assert(vector_Values1.size() >= 1);
    initValues();
    for (size_t num2 = 0; num2 < vector_Values1.size(); ++num2)
        appendValues(vector_Values1[num2]);
    for (size_t num1 = 0; num1 < vector_Values1.size(); ++num1)
      {
      }
  }

void RandomNumberGeneratorDiceRollRequestResultJSON::fromJSONNumFaces(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field NumFaces of RandomNumberGeneratorDiceRollRequestResultJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field NumFaces of RandomNumberGeneratorDiceRollRequestResultJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setNumFaces(extracted_integer);
  }

void RandomNumberGeneratorDiceRollRequestResultJSON::fromJSONIsDnDStyle(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field IsDnDStyle of RandomNumberGeneratorDiceRollRequestResultJSON is not true for false.");
          }
      }
    setIsDnDStyle(the_bool);
  }

void RandomNumberGeneratorDiceRollRequestResultJSON::fromJSONTotal(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field Total of RandomNumberGeneratorDiceRollRequestResultJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field Total of RandomNumberGeneratorDiceRollRequestResultJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setTotal(extracted_integer);
  }

void RandomNumberGeneratorDiceRollRequestResultJSON::fromJSONModifier(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field Modifier of RandomNumberGeneratorDiceRollRequestResultJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field Modifier of RandomNumberGeneratorDiceRollRequestResultJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setModifier(extracted_integer);
  }

RandomNumberGeneratorDiceRollRequestResultJSON::RandomNumberGeneratorDiceRollRequestResultJSON(void) :
        flagHasValues(false),
        flagHasNumFaces(false),
        flagHasIsDnDStyle(false),
        flagHasTotal(false),
        flagHasModifier(false)
  {
    extraIndex = create_string_index();
  }

RandomNumberGeneratorDiceRollRequestResultJSON::~RandomNumberGeneratorDiceRollRequestResultJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *RandomNumberGeneratorDiceRollRequestResultJSON::getRandomNumberRequestKind(void) const
  {
    return "DiceRollRequest";
  }

bool RandomNumberGeneratorDiceRollRequestResultJSON::hasValues(void) const
  {
    return flagHasValues;
  }

size_t RandomNumberGeneratorDiceRollRequestResultJSON::countOfValues(void) const
  {
    assert(flagHasValues);
    return storeValues.size();
  }

OInteger RandomNumberGeneratorDiceRollRequestResultJSON::elementOfValues(size_t element_num)
  {
    assert(flagHasValues);
    return storeValues[element_num];
  }

const OInteger RandomNumberGeneratorDiceRollRequestResultJSON::elementOfValues(size_t element_num) const
  {
    assert(flagHasValues);
    return storeValues[element_num];
  }

std::vector< OInteger > RandomNumberGeneratorDiceRollRequestResultJSON::getValues(void)
  {
    assert(flagHasValues);
    return storeValues;
  }

const std::vector< OInteger > RandomNumberGeneratorDiceRollRequestResultJSON::getValues(void) const
  {
    assert(flagHasValues);
    return storeValues;
  }

bool RandomNumberGeneratorDiceRollRequestResultJSON::hasNumFaces(void) const
  {
    return flagHasNumFaces;
  }

OInteger RandomNumberGeneratorDiceRollRequestResultJSON::getNumFaces(void)
  {
    assert(flagHasNumFaces);
    return storeNumFaces;
  }

const OInteger RandomNumberGeneratorDiceRollRequestResultJSON::getNumFaces(void) const
  {
    assert(flagHasNumFaces);
    return storeNumFaces;
  }

bool RandomNumberGeneratorDiceRollRequestResultJSON::hasIsDnDStyle(void) const
  {
    return flagHasIsDnDStyle;
  }

bool RandomNumberGeneratorDiceRollRequestResultJSON::getIsDnDStyle(void)
  {
    assert(flagHasIsDnDStyle);
    return storeIsDnDStyle;
  }

const bool RandomNumberGeneratorDiceRollRequestResultJSON::getIsDnDStyle(void) const
  {
    assert(flagHasIsDnDStyle);
    return storeIsDnDStyle;
  }

bool RandomNumberGeneratorDiceRollRequestResultJSON::hasTotal(void) const
  {
    return flagHasTotal;
  }

OInteger RandomNumberGeneratorDiceRollRequestResultJSON::getTotal(void)
  {
    assert(flagHasTotal);
    return storeTotal;
  }

const OInteger RandomNumberGeneratorDiceRollRequestResultJSON::getTotal(void) const
  {
    assert(flagHasTotal);
    return storeTotal;
  }

bool RandomNumberGeneratorDiceRollRequestResultJSON::hasModifier(void) const
  {
    return flagHasModifier;
  }

OInteger RandomNumberGeneratorDiceRollRequestResultJSON::getModifier(void)
  {
    assert(flagHasModifier);
    return storeModifier;
  }

const OInteger RandomNumberGeneratorDiceRollRequestResultJSON::getModifier(void) const
  {
    assert(flagHasModifier);
    return storeModifier;
  }

char RandomNumberGeneratorDiceRollRequestResultJSON::Generator::lowerBoundValues[] = "1";
char RandomNumberGeneratorDiceRollRequestResultJSON::Generator::lowerBoundNumFaces[] = "2";
RandomNumberGeneratorDiceRollRequestResultJSON *RandomNumberGeneratorDiceRollRequestResultJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    RandomNumberGeneratorDiceRollRequestResultJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<RandomNumberGeneratorDiceRollRequestResultJSON>, RandomNumberGeneratorDiceRollRequestResultJSON *, bool> generator("Type RandomNumberGeneratorDiceRollRequestResult", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
