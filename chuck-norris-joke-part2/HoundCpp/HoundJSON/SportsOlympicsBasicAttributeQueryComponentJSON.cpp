/* file "SportsOlympicsBasicAttributeQueryComponentJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "SportsOlympicsBasicAttributeQueryComponentJSON.h"

#include "SportsOlympicsBasicAttributeQueryComponentJSON.h"


SportsOlympicsBasicAttributeQueryComponentJSON::SportsOlympicsBasicAttributeQueryComponentJSON(const SportsOlympicsBasicAttributeQueryComponentJSON &)
  {
    assert(false);
  }

SportsOlympicsBasicAttributeQueryComponentJSON &SportsOlympicsBasicAttributeQueryComponentJSON::operator=(const SportsOlympicsBasicAttributeQueryComponentJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void SportsOlympicsBasicAttributeQueryComponentJSON::fromJSONType(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    SportsOlympicsBasicAttributeTypeJSON *convert_classy = SportsOlympicsBasicAttributeTypeJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setType(convert_classy);
    convert_classy->remove_reference();
  }

void SportsOlympicsBasicAttributeQueryComponentJSON::fromJSONGamesIndices(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field GamesIndices of SportsOlympicsBasicAttributeQueryComponentJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< OInteger > vector_GamesIndices1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        OInteger extracted_integer;
        const JSONIntegerValue *json_integer = json_array1->component(num1)->integer_value();
        if (json_integer == NULL)
          {
            const JSONRationalValue *json_rational = json_array1->component(num1)->rational_value();
            if (json_rational == NULL)
              {
                throw("The value for an element of field GamesIndices of SportsOlympicsBasicAttributeQueryComponentJSON is not a number.");
              }
            if (!(json_rational->isInteger()))
              {
                throw("The value for an element of field GamesIndices of SportsOlympicsBasicAttributeQueryComponentJSON is not an integer.");
              }
            extracted_integer = OInteger(json_rational->getInteger())        ;
          }
        else
          {
            extracted_integer = OInteger(json_integer->getData())        ;
          }
        vector_GamesIndices1[num1] = extracted_integer;
      }
    initGamesIndices();
    for (size_t num2 = 0; num2 < vector_GamesIndices1.size(); ++num2)
        appendGamesIndices(vector_GamesIndices1[num2]);
    for (size_t num1 = 0; num1 < vector_GamesIndices1.size(); ++num1)
      {
      }
  }

void SportsOlympicsBasicAttributeQueryComponentJSON::fromJSONError(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    SportsOlympicsBasicAttributeErrorJSON *convert_classy = SportsOlympicsBasicAttributeErrorJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setError(convert_classy);
    convert_classy->remove_reference();
  }

SportsOlympicsBasicAttributeQueryComponentJSON::SportsOlympicsBasicAttributeQueryComponentJSON(void) :
        flagHasType(false),
        flagHasGamesIndices(false),
        flagHasError(false)
  {
    extraIndex = create_string_index();
  }

SportsOlympicsBasicAttributeQueryComponentJSON::~SportsOlympicsBasicAttributeQueryComponentJSON(void)
  {
    if (flagHasType)
      {
        storeType->remove_reference();
      }
    if (flagHasError)
      {
        storeError->remove_reference();
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool SportsOlympicsBasicAttributeQueryComponentJSON::hasType(void) const
  {
    return flagHasType;
  }

SportsOlympicsBasicAttributeTypeJSON * SportsOlympicsBasicAttributeQueryComponentJSON::getType(void)
  {
    assert(flagHasType);
    return storeType;
  }

const SportsOlympicsBasicAttributeTypeJSON * SportsOlympicsBasicAttributeQueryComponentJSON::getType(void) const
  {
    assert(flagHasType);
    return storeType;
  }

SportsOlympicsBasicAttributeTypeJSON::TypeValue SportsOlympicsBasicAttributeQueryComponentJSON::getTypeValue(void)
  {
    return getType()->getValue();
  }

const SportsOlympicsBasicAttributeTypeJSON::TypeValue SportsOlympicsBasicAttributeQueryComponentJSON::getTypeValue(void) const
  {
    return getType()->getValue();
  }

const char *SportsOlympicsBasicAttributeQueryComponentJSON::getTypeAsChars(void) const
  {
    return getType()->getValueAsChars();
  }

std::string SportsOlympicsBasicAttributeQueryComponentJSON::getTypeAsString(void) const
  {
    return getType()->getValueAsString();
  }

bool SportsOlympicsBasicAttributeQueryComponentJSON::hasGamesIndices(void) const
  {
    return flagHasGamesIndices;
  }

size_t SportsOlympicsBasicAttributeQueryComponentJSON::countOfGamesIndices(void) const
  {
    assert(flagHasGamesIndices);
    return storeGamesIndices.size();
  }

OInteger SportsOlympicsBasicAttributeQueryComponentJSON::elementOfGamesIndices(size_t element_num)
  {
    assert(flagHasGamesIndices);
    return storeGamesIndices[element_num];
  }

const OInteger SportsOlympicsBasicAttributeQueryComponentJSON::elementOfGamesIndices(size_t element_num) const
  {
    assert(flagHasGamesIndices);
    return storeGamesIndices[element_num];
  }

std::vector< OInteger > SportsOlympicsBasicAttributeQueryComponentJSON::getGamesIndices(void)
  {
    assert(flagHasGamesIndices);
    return storeGamesIndices;
  }

const std::vector< OInteger > SportsOlympicsBasicAttributeQueryComponentJSON::getGamesIndices(void) const
  {
    assert(flagHasGamesIndices);
    return storeGamesIndices;
  }

bool SportsOlympicsBasicAttributeQueryComponentJSON::hasError(void) const
  {
    return flagHasError;
  }

SportsOlympicsBasicAttributeErrorJSON * SportsOlympicsBasicAttributeQueryComponentJSON::getError(void)
  {
    assert(flagHasError);
    return storeError;
  }

const SportsOlympicsBasicAttributeErrorJSON * SportsOlympicsBasicAttributeQueryComponentJSON::getError(void) const
  {
    assert(flagHasError);
    return storeError;
  }

SportsOlympicsBasicAttributeErrorJSON::TypeValue SportsOlympicsBasicAttributeQueryComponentJSON::getErrorValue(void)
  {
    return getError()->getValue();
  }

const SportsOlympicsBasicAttributeErrorJSON::TypeValue SportsOlympicsBasicAttributeQueryComponentJSON::getErrorValue(void) const
  {
    return getError()->getValue();
  }

const char *SportsOlympicsBasicAttributeQueryComponentJSON::getErrorAsChars(void) const
  {
    return getError()->getValueAsChars();
  }

std::string SportsOlympicsBasicAttributeQueryComponentJSON::getErrorAsString(void) const
  {
    return getError()->getValueAsString();
  }

char SportsOlympicsBasicAttributeQueryComponentJSON::Generator::lowerBoundGamesIndices[] = "0";
SportsOlympicsBasicAttributeQueryComponentJSON *SportsOlympicsBasicAttributeQueryComponentJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    SportsOlympicsBasicAttributeQueryComponentJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<SportsOlympicsBasicAttributeQueryComponentJSON>, SportsOlympicsBasicAttributeQueryComponentJSON *, bool> generator("Type SportsOlympicsBasicAttributeQueryComponent", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
