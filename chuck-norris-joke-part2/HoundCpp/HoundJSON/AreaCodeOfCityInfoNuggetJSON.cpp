/* file "AreaCodeOfCityInfoNuggetJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "AreaCodeOfCityInfoNuggetJSON.h"

#include "AreaCodeOfCityInfoNuggetJSON.h"


AreaCodeOfCityInfoNuggetJSON::AreaCodeOfCityInfoNuggetJSON(const AreaCodeOfCityInfoNuggetJSON &)
  {
    assert(false);
  }

AreaCodeOfCityInfoNuggetJSON &AreaCodeOfCityInfoNuggetJSON::operator=(const AreaCodeOfCityInfoNuggetJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *AreaCodeOfCityInfoNuggetJSON::extraCityNameToJSON(void) const
  {
    JSONStringValue *generated_string_CityName = new JSONStringValue(storeCityName.c_str());
    return generated_string_CityName;
  }

JSONValue *AreaCodeOfCityInfoNuggetJSON::extraLocDumpToJSON(void) const
  {
    JSONStringValue *generated_string_LocDump = new JSONStringValue(storeLocDump.c_str());
    return generated_string_LocDump;
  }

JSONValue *AreaCodeOfCityInfoNuggetJSON::extraAreaCodesToJSON(void) const
  {
    JSONArrayValue *generated_array_1_AreaCodes = new JSONArrayValue();
    for (size_t num1 = 0; num1 < storeAreaCodes.size(); ++num1)
      {
        JSONIntegerValue *generated_integer_AreaCodes = new JSONIntegerValue(storeAreaCodes[num1].get_o_integer());
        generated_array_1_AreaCodes->appendComponent(generated_integer_AreaCodes);
      }
    return generated_array_1_AreaCodes;
  }

void AreaCodeOfCityInfoNuggetJSON::fromJSONCityName(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field CityName of AreaCodeOfCityInfoNuggetJSON is not a string.");
    setCityName(std::string(json_string->getData()));
  }

void AreaCodeOfCityInfoNuggetJSON::fromJSONLocDump(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field LocDump of AreaCodeOfCityInfoNuggetJSON is not a string.");
    setLocDump(std::string(json_string->getData()));
  }

void AreaCodeOfCityInfoNuggetJSON::fromJSONAreaCodes(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field AreaCodes of AreaCodeOfCityInfoNuggetJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< OInteger > vector_AreaCodes1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        OInteger extracted_integer;
        const JSONIntegerValue *json_integer = json_array1->component(num1)->integer_value();
        if (json_integer == NULL)
          {
            const JSONRationalValue *json_rational = json_array1->component(num1)->rational_value();
            if (json_rational == NULL)
              {
                throw("The value for an element of field AreaCodes of AreaCodeOfCityInfoNuggetJSON is not a number.");
              }
            if (!(json_rational->isInteger()))
              {
                throw("The value for an element of field AreaCodes of AreaCodeOfCityInfoNuggetJSON is not an integer.");
              }
            extracted_integer = OInteger(json_rational->getInteger())        ;
          }
        else
          {
            extracted_integer = OInteger(json_integer->getData())        ;
          }
        vector_AreaCodes1[num1] = extracted_integer;
      }
    initAreaCodes();
    for (size_t num2 = 0; num2 < vector_AreaCodes1.size(); ++num2)
        appendAreaCodes(vector_AreaCodes1[num2]);
    for (size_t num1 = 0; num1 < vector_AreaCodes1.size(); ++num1)
      {
      }
  }

AreaCodeOfCityInfoNuggetJSON::AreaCodeOfCityInfoNuggetJSON(void) :
        flagHasCityName(false),
        flagHasLocDump(false),
        flagHasAreaCodes(false)
  {
    extraIndex = create_string_index();
  }

AreaCodeOfCityInfoNuggetJSON::~AreaCodeOfCityInfoNuggetJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *AreaCodeOfCityInfoNuggetJSON::getAreaCodeInfoNuggetKind(void) const
  {
    return "AreaCodeOfCityInfoNugget";
  }

bool AreaCodeOfCityInfoNuggetJSON::hasCityName(void) const
  {
    return flagHasCityName;
  }

std::string AreaCodeOfCityInfoNuggetJSON::getCityName(void)
  {
    assert(flagHasCityName);
    return storeCityName;
  }

const std::string AreaCodeOfCityInfoNuggetJSON::getCityName(void) const
  {
    assert(flagHasCityName);
    return storeCityName;
  }

bool AreaCodeOfCityInfoNuggetJSON::hasLocDump(void) const
  {
    return flagHasLocDump;
  }

std::string AreaCodeOfCityInfoNuggetJSON::getLocDump(void)
  {
    assert(flagHasLocDump);
    return storeLocDump;
  }

const std::string AreaCodeOfCityInfoNuggetJSON::getLocDump(void) const
  {
    assert(flagHasLocDump);
    return storeLocDump;
  }

bool AreaCodeOfCityInfoNuggetJSON::hasAreaCodes(void) const
  {
    return flagHasAreaCodes;
  }

size_t AreaCodeOfCityInfoNuggetJSON::countOfAreaCodes(void) const
  {
    assert(flagHasAreaCodes);
    return storeAreaCodes.size();
  }

OInteger AreaCodeOfCityInfoNuggetJSON::elementOfAreaCodes(size_t element_num)
  {
    assert(flagHasAreaCodes);
    return storeAreaCodes[element_num];
  }

const OInteger AreaCodeOfCityInfoNuggetJSON::elementOfAreaCodes(size_t element_num) const
  {
    assert(flagHasAreaCodes);
    return storeAreaCodes[element_num];
  }

std::vector< OInteger > AreaCodeOfCityInfoNuggetJSON::getAreaCodes(void)
  {
    assert(flagHasAreaCodes);
    return storeAreaCodes;
  }

const std::vector< OInteger > AreaCodeOfCityInfoNuggetJSON::getAreaCodes(void) const
  {
    assert(flagHasAreaCodes);
    return storeAreaCodes;
  }

AreaCodeOfCityInfoNuggetJSON *AreaCodeOfCityInfoNuggetJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    AreaCodeOfCityInfoNuggetJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<AreaCodeOfCityInfoNuggetJSON>, AreaCodeOfCityInfoNuggetJSON *, bool> generator("Type AreaCodeOfCityInfoNugget", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
