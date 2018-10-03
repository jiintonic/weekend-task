/* file "EquationSolverInformationNuggetJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "EquationSolverInformationNuggetJSON.h"

#include "EquationSolverInformationNuggetJSON.h"


EquationSolverInformationNuggetJSON::TypeSolutionsJSON::TypeSolutionsJSON(const TypeSolutionsJSON &)
  {
    assert(false);
  }

EquationSolverInformationNuggetJSON::TypeSolutionsJSON &EquationSolverInformationNuggetJSON::TypeSolutionsJSON::operator=(const TypeSolutionsJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void EquationSolverInformationNuggetJSON::TypeSolutionsJSON::fromJSONReal(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONRationalValue *json_rational = json_value->rational_value();
    std::string the_rational_text;
    if (json_rational != NULL)
      {
        the_rational_text = json_rational->getText();
      }
    else
      {
        const JSONIntegerValue *json_integer = json_value->integer_value();
        if (json_integer != NULL)
          {
            the_rational_text = json_integer->getText();
          }
        else
          {
            throw("The value for field Real of TypeSolutionsJSON is not a number.");
          }
      }
    setRealText(the_rational_text);
  }

void EquationSolverInformationNuggetJSON::TypeSolutionsJSON::fromJSONImaginary(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONRationalValue *json_rational = json_value->rational_value();
    std::string the_rational_text;
    if (json_rational != NULL)
      {
        the_rational_text = json_rational->getText();
      }
    else
      {
        const JSONIntegerValue *json_integer = json_value->integer_value();
        if (json_integer != NULL)
          {
            the_rational_text = json_integer->getText();
          }
        else
          {
            throw("The value for field Imaginary of TypeSolutionsJSON is not a number.");
          }
      }
    setImaginaryText(the_rational_text);
  }

EquationSolverInformationNuggetJSON::TypeSolutionsJSON::TypeSolutionsJSON(void) :
        flagHasReal(false),
        flagHasImaginary(false)
  {
    extraIndex = create_string_index();
  }

EquationSolverInformationNuggetJSON::TypeSolutionsJSON::~TypeSolutionsJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool EquationSolverInformationNuggetJSON::TypeSolutionsJSON::hasReal(void) const
  {
    return flagHasReal;
  }

double EquationSolverInformationNuggetJSON::TypeSolutionsJSON::getReal(void)
  {
    assert(flagHasReal);
    if (textStoreReal != "")
      {
        return atof(textStoreReal.c_str());
      }
    return storeReal;
  }

const double EquationSolverInformationNuggetJSON::TypeSolutionsJSON::getReal(void) const
  {
    assert(flagHasReal);
    if (textStoreReal != "")
      {
        return atof(textStoreReal.c_str());
      }
    return storeReal;
  }

std::string EquationSolverInformationNuggetJSON::TypeSolutionsJSON::getRealAsText(void) const
  {
    assert(flagHasReal);
    if (textStoreReal == "")
      {
        char buffer[100];
        sprintf(&(buffer[0]), "%g", storeReal);
        return &(buffer[0]);
      }
    else
      {
        return (textStoreReal);
      }
  }

bool EquationSolverInformationNuggetJSON::TypeSolutionsJSON::hasImaginary(void) const
  {
    return flagHasImaginary;
  }

double EquationSolverInformationNuggetJSON::TypeSolutionsJSON::getImaginary(void)
  {
    assert(flagHasImaginary);
    if (textStoreImaginary != "")
      {
        return atof(textStoreImaginary.c_str());
      }
    return storeImaginary;
  }

const double EquationSolverInformationNuggetJSON::TypeSolutionsJSON::getImaginary(void) const
  {
    assert(flagHasImaginary);
    if (textStoreImaginary != "")
      {
        return atof(textStoreImaginary.c_str());
      }
    return storeImaginary;
  }

std::string EquationSolverInformationNuggetJSON::TypeSolutionsJSON::getImaginaryAsText(void) const
  {
    assert(flagHasImaginary);
    if (textStoreImaginary == "")
      {
        char buffer[100];
        sprintf(&(buffer[0]), "%g", storeImaginary);
        return &(buffer[0]);
      }
    else
      {
        return (textStoreImaginary);
      }
  }

EquationSolverInformationNuggetJSON::EquationSolverInformationNuggetJSON(const EquationSolverInformationNuggetJSON &)
  {
    assert(false);
  }

EquationSolverInformationNuggetJSON &EquationSolverInformationNuggetJSON::operator=(const EquationSolverInformationNuggetJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *EquationSolverInformationNuggetJSON::extraEquationToJSON(void) const
  {
    JSONStringValue *generated_string_Equation = new JSONStringValue(storeEquation.c_str());
    return generated_string_Equation;
  }

JSONValue *EquationSolverInformationNuggetJSON::extraVariableToJSON(void) const
  {
    JSONStringValue *generated_string_Variable = new JSONStringValue(storeVariable.c_str());
    return generated_string_Variable;
  }

JSONValue *EquationSolverInformationNuggetJSON::extraSolutionsToJSON(void) const
  {
    JSONArrayValue *generated_array_1_Solutions = new JSONArrayValue();
    for (size_t num1 = 0; num1 < storeSolutions.size(); ++num1)
      {
        JSONValueHandler handler_Solutions;
        storeSolutions[num1]->write_as_json(&handler_Solutions);
        handler_Solutions.result->add_reference();
        generated_array_1_Solutions->appendComponent(handler_Solutions.result);
        handler_Solutions.result->remove_reference();
      }
    return generated_array_1_Solutions;
  }

void EquationSolverInformationNuggetJSON::fromJSONEquation(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Equation of EquationSolverInformationNuggetJSON is not a string.");
    setEquation(std::string(json_string->getData()));
  }

void EquationSolverInformationNuggetJSON::fromJSONVariable(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Variable of EquationSolverInformationNuggetJSON is not a string.");
    setVariable(std::string(json_string->getData()));
  }

void EquationSolverInformationNuggetJSON::fromJSONSolutions(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field Solutions of EquationSolverInformationNuggetJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< TypeSolutionsJSON * > vector_Solutions1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        TypeSolutionsJSON *convert_classy = TypeSolutionsJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_Solutions1[num1] = convert_classy;
      }
    initSolutions();
    for (size_t num2 = 0; num2 < vector_Solutions1.size(); ++num2)
        appendSolutions(vector_Solutions1[num2]);
    for (size_t num1 = 0; num1 < vector_Solutions1.size(); ++num1)
      {
        vector_Solutions1[num1]->remove_reference();
      }
  }

EquationSolverInformationNuggetJSON::EquationSolverInformationNuggetJSON(void) :
        flagHasEquation(false),
        flagHasVariable(false),
        flagHasSolutions(false)
  {
    extraIndex = create_string_index();
  }

EquationSolverInformationNuggetJSON::~EquationSolverInformationNuggetJSON(void)
  {
    if (flagHasSolutions)
      {
        for (size_t num4 = 0; num4 < storeSolutions.size(); ++num4)
          {
            storeSolutions[num4]->remove_reference();
          }
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *EquationSolverInformationNuggetJSON::getNuggetKind(void) const
  {
    return "EquationSolverInformationNugget";
  }

bool EquationSolverInformationNuggetJSON::hasEquation(void) const
  {
    return flagHasEquation;
  }

std::string EquationSolverInformationNuggetJSON::getEquation(void)
  {
    assert(flagHasEquation);
    return storeEquation;
  }

const std::string EquationSolverInformationNuggetJSON::getEquation(void) const
  {
    assert(flagHasEquation);
    return storeEquation;
  }

bool EquationSolverInformationNuggetJSON::hasVariable(void) const
  {
    return flagHasVariable;
  }

std::string EquationSolverInformationNuggetJSON::getVariable(void)
  {
    assert(flagHasVariable);
    return storeVariable;
  }

const std::string EquationSolverInformationNuggetJSON::getVariable(void) const
  {
    assert(flagHasVariable);
    return storeVariable;
  }

bool EquationSolverInformationNuggetJSON::hasSolutions(void) const
  {
    return flagHasSolutions;
  }

size_t EquationSolverInformationNuggetJSON::countOfSolutions(void) const
  {
    assert(flagHasSolutions);
    return storeSolutions.size();
  }

EquationSolverInformationNuggetJSON::TypeSolutionsJSON * EquationSolverInformationNuggetJSON::elementOfSolutions(size_t element_num)
  {
    assert(flagHasSolutions);
    return storeSolutions[element_num];
  }

const EquationSolverInformationNuggetJSON::TypeSolutionsJSON * EquationSolverInformationNuggetJSON::elementOfSolutions(size_t element_num) const
  {
    assert(flagHasSolutions);
    return storeSolutions[element_num];
  }

std::vector< EquationSolverInformationNuggetJSON::TypeSolutionsJSON * > EquationSolverInformationNuggetJSON::getSolutions(void)
  {
    assert(flagHasSolutions);
    return storeSolutions;
  }

const std::vector< EquationSolverInformationNuggetJSON::TypeSolutionsJSON * > EquationSolverInformationNuggetJSON::getSolutions(void) const
  {
    assert(flagHasSolutions);
    return storeSolutions;
  }

EquationSolverInformationNuggetJSON::TypeSolutionsJSON *EquationSolverInformationNuggetJSON::TypeSolutionsJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    TypeSolutionsJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<TypeSolutionsJSON>, TypeSolutionsJSON *, bool> generator("Type TypeSolutions", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
EquationSolverInformationNuggetJSON *EquationSolverInformationNuggetJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    EquationSolverInformationNuggetJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<EquationSolverInformationNuggetJSON>, EquationSolverInformationNuggetJSON *, bool> generator("Type EquationSolverInformationNugget", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
