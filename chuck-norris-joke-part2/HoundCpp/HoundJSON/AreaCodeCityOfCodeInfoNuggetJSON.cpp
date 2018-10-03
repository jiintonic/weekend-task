/* file "AreaCodeCityOfCodeInfoNuggetJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "AreaCodeCityOfCodeInfoNuggetJSON.h"

#include "AreaCodeCityOfCodeInfoNuggetJSON.h"


AreaCodeCityOfCodeInfoNuggetJSON::AreaCodeCityOfCodeInfoNuggetJSON(const AreaCodeCityOfCodeInfoNuggetJSON &)
  {
    assert(false);
  }

AreaCodeCityOfCodeInfoNuggetJSON &AreaCodeCityOfCodeInfoNuggetJSON::operator=(const AreaCodeCityOfCodeInfoNuggetJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *AreaCodeCityOfCodeInfoNuggetJSON::extraAreaCodeToJSON(void) const
  {
    JSONIntegerValue *generated_integer_AreaCode = new JSONIntegerValue(storeAreaCode.get_o_integer());
    return generated_integer_AreaCode;
  }

JSONValue *AreaCodeCityOfCodeInfoNuggetJSON::extraCityNameToJSON(void) const
  {
    JSONArrayValue *generated_array_1_CityName = new JSONArrayValue();
    for (size_t num1 = 0; num1 < storeCityName.size(); ++num1)
      {
        JSONStringValue *generated_string_CityName = new JSONStringValue(storeCityName[num1].c_str());
        generated_array_1_CityName->appendComponent(generated_string_CityName);
      }
    return generated_array_1_CityName;
  }

void AreaCodeCityOfCodeInfoNuggetJSON::fromJSONAreaCode(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field AreaCode of AreaCodeCityOfCodeInfoNuggetJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field AreaCode of AreaCodeCityOfCodeInfoNuggetJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setAreaCode(extracted_integer);
  }

void AreaCodeCityOfCodeInfoNuggetJSON::fromJSONCityName(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field CityName of AreaCodeCityOfCodeInfoNuggetJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< std::string > vector_CityName1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        const JSONStringValue *json_string = json_array1->component(num1)->string_value();
        if (json_string == NULL)
            throw("The value for an element of field CityName of AreaCodeCityOfCodeInfoNuggetJSON is not a string.");
        vector_CityName1[num1] = std::string(json_string->getData());
      }
    initCityName();
    for (size_t num2 = 0; num2 < vector_CityName1.size(); ++num2)
        appendCityName(vector_CityName1[num2]);
    for (size_t num1 = 0; num1 < vector_CityName1.size(); ++num1)
      {
      }
  }

AreaCodeCityOfCodeInfoNuggetJSON::AreaCodeCityOfCodeInfoNuggetJSON(void) :
        flagHasAreaCode(false),
        flagHasCityName(false)
  {
    extraIndex = create_string_index();
  }

AreaCodeCityOfCodeInfoNuggetJSON::~AreaCodeCityOfCodeInfoNuggetJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *AreaCodeCityOfCodeInfoNuggetJSON::getAreaCodeInfoNuggetKind(void) const
  {
    return "AreaCodeCityOfCodeInfoNugget";
  }

bool AreaCodeCityOfCodeInfoNuggetJSON::hasAreaCode(void) const
  {
    return flagHasAreaCode;
  }

OInteger AreaCodeCityOfCodeInfoNuggetJSON::getAreaCode(void)
  {
    assert(flagHasAreaCode);
    return storeAreaCode;
  }

const OInteger AreaCodeCityOfCodeInfoNuggetJSON::getAreaCode(void) const
  {
    assert(flagHasAreaCode);
    return storeAreaCode;
  }

bool AreaCodeCityOfCodeInfoNuggetJSON::hasCityName(void) const
  {
    return flagHasCityName;
  }

size_t AreaCodeCityOfCodeInfoNuggetJSON::countOfCityName(void) const
  {
    assert(flagHasCityName);
    return storeCityName.size();
  }

std::string AreaCodeCityOfCodeInfoNuggetJSON::elementOfCityName(size_t element_num)
  {
    assert(flagHasCityName);
    return storeCityName[element_num];
  }

const std::string AreaCodeCityOfCodeInfoNuggetJSON::elementOfCityName(size_t element_num) const
  {
    assert(flagHasCityName);
    return storeCityName[element_num];
  }

std::vector< std::string > AreaCodeCityOfCodeInfoNuggetJSON::getCityName(void)
  {
    assert(flagHasCityName);
    return storeCityName;
  }

const std::vector< std::string > AreaCodeCityOfCodeInfoNuggetJSON::getCityName(void) const
  {
    assert(flagHasCityName);
    return storeCityName;
  }

AreaCodeCityOfCodeInfoNuggetJSON *AreaCodeCityOfCodeInfoNuggetJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    AreaCodeCityOfCodeInfoNuggetJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<AreaCodeCityOfCodeInfoNuggetJSON>, AreaCodeCityOfCodeInfoNuggetJSON *, bool> generator("Type AreaCodeCityOfCodeInfoNugget", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
