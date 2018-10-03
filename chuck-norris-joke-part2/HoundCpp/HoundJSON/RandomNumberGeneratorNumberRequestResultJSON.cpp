/* file "RandomNumberGeneratorNumberRequestResultJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "RandomNumberGeneratorNumberRequestResultJSON.h"

#include "RandomNumberGeneratorNumberRequestResultJSON.h"


RandomNumberGeneratorNumberRequestResultJSON::TypeNumberType RandomNumberGeneratorNumberRequestResultJSON::stringToNumberType(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'I':
            if (strcmp(&(chars[1]), "nteger") == 0)
                return NumberType_Integer;
            break;
        case 'R':
            if (strcmp(&(chars[1]), "ational") == 0)
                return NumberType_Rational;
            break;
        default:
            break;
      }
    throw("The value for field `NumberType' is not one of the legal values.");
  }

const char *RandomNumberGeneratorNumberRequestResultJSON::stringFromNumberType(TypeNumberType the_enum)
  {
    switch (the_enum)
      {
        case NumberType_Integer:
            return "Integer";
        case NumberType_Rational:
            return "Rational";
        default:
            assert(false);
            return NULL;
      }
  }

RandomNumberGeneratorNumberRequestResultJSON::RandomNumberGeneratorNumberRequestResultJSON(const RandomNumberGeneratorNumberRequestResultJSON &)
  {
    assert(false);
  }

RandomNumberGeneratorNumberRequestResultJSON &RandomNumberGeneratorNumberRequestResultJSON::operator=(const RandomNumberGeneratorNumberRequestResultJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *RandomNumberGeneratorNumberRequestResultJSON::extraValuesToJSON(void) const
  {
    JSONArrayValue *generated_array_1_Values = new JSONArrayValue();
    for (size_t num1 = 0; num1 < storeValues.size(); ++num1)
      {
        JSONValue *generated_rational_Values;
        if (((double)(long int)storeValues[num1]) == storeValues[num1])
            generated_rational_Values = new JSONIntegerValue((long int)(storeValues[num1]));
        else
            generated_rational_Values = new JSONRationalValue(storeValues[num1], DBL_DIG);
        generated_array_1_Values->appendComponent(generated_rational_Values);
      }
    return generated_array_1_Values;
  }

JSONValue *RandomNumberGeneratorNumberRequestResultJSON::extraNumberTypeToJSON(void) const
  {
    JSONStringValue *generated_string_NumberType;
    switch (storeNumberType)
      {
        case NumberType_Integer:
            generated_string_NumberType = new JSONStringValue("Integer");
            break;
        case NumberType_Rational:
            generated_string_NumberType = new JSONStringValue("Rational");
            break;
        default:
            assert(false);
            generated_string_NumberType = NULL;
      }
    return generated_string_NumberType;
  }

JSONValue *RandomNumberGeneratorNumberRequestResultJSON::extraUpperBoundToJSON(void) const
  {
    JSONValue *generated_rational_UpperBound;
    if (((double)(long int)storeUpperBound) == storeUpperBound)
        generated_rational_UpperBound = new JSONIntegerValue((long int)(storeUpperBound));
    else
        generated_rational_UpperBound = new JSONRationalValue(storeUpperBound, DBL_DIG);
    return generated_rational_UpperBound;
  }

JSONValue *RandomNumberGeneratorNumberRequestResultJSON::extraLowerBoundToJSON(void) const
  {
    JSONValue *generated_rational_LowerBound;
    if (((double)(long int)storeLowerBound) == storeLowerBound)
        generated_rational_LowerBound = new JSONIntegerValue((long int)(storeLowerBound));
    else
        generated_rational_LowerBound = new JSONRationalValue(storeLowerBound, DBL_DIG);
    return generated_rational_LowerBound;
  }

void RandomNumberGeneratorNumberRequestResultJSON::fromJSONValues(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field Values of RandomNumberGeneratorNumberRequestResultJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    if (count1 < 1)
        throw("The value for field Values of RandomNumberGeneratorNumberRequestResultJSON has too few elements.");
    std::vector< double > vector_Values1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        const JSONRationalValue *json_rational = json_array1->component(num1)->rational_value();
        double the_double;
        if (json_rational != NULL)
          {
            the_double = json_rational->getDouble();
          }
        else
          {
            const JSONIntegerValue *json_integer = json_array1->component(num1)->integer_value();
            if (json_integer != NULL)
              {
                the_double = json_integer->getLongInt();
              }
            else
              {
                throw("The value for an element of field Values of RandomNumberGeneratorNumberRequestResultJSON is not a number.");
              }
          }
        vector_Values1[num1] = the_double;
      }
    assert(vector_Values1.size() >= 1);
    initValues();
    for (size_t num2 = 0; num2 < vector_Values1.size(); ++num2)
        appendValues(vector_Values1[num2]);
    for (size_t num1 = 0; num1 < vector_Values1.size(); ++num1)
      {
      }
  }

void RandomNumberGeneratorNumberRequestResultJSON::fromJSONNumberType(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field NumberType of RandomNumberGeneratorNumberRequestResultJSON is not a string.");
    TypeNumberType the_enum;
    switch ((unsigned char)(json_string->getData()[0]))
      {
        case 'I':
            if (strcmp(&(json_string->getData()[1]), "nteger") == 0)
                  {
                    the_enum = NumberType_Integer;
                    goto enum_is_done;
                  }
            break;
        case 'R':
            if (strcmp(&(json_string->getData()[1]), "ational") == 0)
                  {
                    the_enum = NumberType_Rational;
                    goto enum_is_done;
                  }
            break;
        default:
            break;
      }
    throw("The value for field NumberType of RandomNumberGeneratorNumberRequestResultJSON is not one of the legal strings.");
  enum_is_done:;
    setNumberType(the_enum);
  }

void RandomNumberGeneratorNumberRequestResultJSON::fromJSONUpperBound(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field UpperBound of RandomNumberGeneratorNumberRequestResultJSON is not a number.");
          }
      }
    setUpperBoundText(the_rational_text);
  }

void RandomNumberGeneratorNumberRequestResultJSON::fromJSONLowerBound(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field LowerBound of RandomNumberGeneratorNumberRequestResultJSON is not a number.");
          }
      }
    setLowerBoundText(the_rational_text);
  }

RandomNumberGeneratorNumberRequestResultJSON::RandomNumberGeneratorNumberRequestResultJSON(void) :
        flagHasValues(false),
        flagHasNumberType(false),
        flagHasUpperBound(false),
        flagHasLowerBound(false)
  {
  }

RandomNumberGeneratorNumberRequestResultJSON::~RandomNumberGeneratorNumberRequestResultJSON(void)
  {
  }

const char *RandomNumberGeneratorNumberRequestResultJSON::getRandomNumberRequestKind(void) const
  {
    return "NumberRequest";
  }

bool RandomNumberGeneratorNumberRequestResultJSON::hasValues(void) const
  {
    return flagHasValues;
  }

size_t RandomNumberGeneratorNumberRequestResultJSON::countOfValues(void) const
  {
    assert(flagHasValues);
    return storeValues.size();
  }

double RandomNumberGeneratorNumberRequestResultJSON::elementOfValues(size_t element_num)
  {
    assert(flagHasValues);
    return storeValues[element_num];
  }

const double RandomNumberGeneratorNumberRequestResultJSON::elementOfValues(size_t element_num) const
  {
    assert(flagHasValues);
    return storeValues[element_num];
  }

std::vector< double > RandomNumberGeneratorNumberRequestResultJSON::getValues(void)
  {
    assert(flagHasValues);
    return storeValues;
  }

const std::vector< double > RandomNumberGeneratorNumberRequestResultJSON::getValues(void) const
  {
    assert(flagHasValues);
    return storeValues;
  }

bool RandomNumberGeneratorNumberRequestResultJSON::hasNumberType(void) const
  {
    return flagHasNumberType;
  }

RandomNumberGeneratorNumberRequestResultJSON::TypeNumberType RandomNumberGeneratorNumberRequestResultJSON::getNumberType(void)
  {
    assert(flagHasNumberType);
    return storeNumberType;
  }

const RandomNumberGeneratorNumberRequestResultJSON::TypeNumberType RandomNumberGeneratorNumberRequestResultJSON::getNumberType(void) const
  {
    assert(flagHasNumberType);
    return storeNumberType;
  }

const char *RandomNumberGeneratorNumberRequestResultJSON::getNumberTypeAsChars(void) const
  {
    return stringFromNumberType(getNumberType());
  }

std::string RandomNumberGeneratorNumberRequestResultJSON::getNumberTypeAsString(void) const
  {
    return stringFromNumberType(getNumberType());
  }

bool RandomNumberGeneratorNumberRequestResultJSON::hasUpperBound(void) const
  {
    return flagHasUpperBound;
  }

double RandomNumberGeneratorNumberRequestResultJSON::getUpperBound(void)
  {
    assert(flagHasUpperBound);
    if (textStoreUpperBound != "")
      {
        return atof(textStoreUpperBound.c_str());
      }
    return storeUpperBound;
  }

const double RandomNumberGeneratorNumberRequestResultJSON::getUpperBound(void) const
  {
    assert(flagHasUpperBound);
    if (textStoreUpperBound != "")
      {
        return atof(textStoreUpperBound.c_str());
      }
    return storeUpperBound;
  }

std::string RandomNumberGeneratorNumberRequestResultJSON::getUpperBoundAsText(void) const
  {
    assert(flagHasUpperBound);
    if (textStoreUpperBound == "")
      {
        char buffer[100];
        sprintf(&(buffer[0]), "%g", storeUpperBound);
        return &(buffer[0]);
      }
    else
      {
        return (textStoreUpperBound);
      }
  }

bool RandomNumberGeneratorNumberRequestResultJSON::hasLowerBound(void) const
  {
    return flagHasLowerBound;
  }

double RandomNumberGeneratorNumberRequestResultJSON::getLowerBound(void)
  {
    assert(flagHasLowerBound);
    if (textStoreLowerBound != "")
      {
        return atof(textStoreLowerBound.c_str());
      }
    return storeLowerBound;
  }

const double RandomNumberGeneratorNumberRequestResultJSON::getLowerBound(void) const
  {
    assert(flagHasLowerBound);
    if (textStoreLowerBound != "")
      {
        return atof(textStoreLowerBound.c_str());
      }
    return storeLowerBound;
  }

std::string RandomNumberGeneratorNumberRequestResultJSON::getLowerBoundAsText(void) const
  {
    assert(flagHasLowerBound);
    if (textStoreLowerBound == "")
      {
        char buffer[100];
        sprintf(&(buffer[0]), "%g", storeLowerBound);
        return &(buffer[0]);
      }
    else
      {
        return (textStoreLowerBound);
      }
  }

RandomNumberGeneratorNumberRequestResultJSON *RandomNumberGeneratorNumberRequestResultJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    RandomNumberGeneratorNumberRequestResultJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<RandomNumberGeneratorNumberRequestResultJSON>, RandomNumberGeneratorNumberRequestResultJSON *, bool> generator("Type RandomNumberGeneratorNumberRequestResult", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
