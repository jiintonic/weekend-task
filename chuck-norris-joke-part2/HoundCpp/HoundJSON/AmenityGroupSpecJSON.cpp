/* file "AmenityGroupSpecJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "AmenityGroupSpecJSON.h"

#include "AmenityGroupSpecJSON.h"


AmenityGroupSpecJSON::TypeAmenityGroupJSON::TypeAmenityGroupJSON(const TypeAmenityGroupJSON &)
  {
    assert(false);
  }

AmenityGroupSpecJSON::TypeAmenityGroupJSON &AmenityGroupSpecJSON::TypeAmenityGroupJSON::operator=(const TypeAmenityGroupJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void AmenityGroupSpecJSON::TypeAmenityGroupJSON::fromJSONAmenityAlias(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field AmenityAlias of TypeAmenityGroupJSON is not a string.");
    setAmenityAlias(std::string(json_string->getData()));
  }

void AmenityGroupSpecJSON::TypeAmenityGroupJSON::fromJSONAmenityName(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field AmenityName of TypeAmenityGroupJSON is not a string.");
    setAmenityName(std::string(json_string->getData()));
  }

void AmenityGroupSpecJSON::TypeAmenityGroupJSON::fromJSONAmenitySpokenNameSingular(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field AmenitySpokenNameSingular of TypeAmenityGroupJSON is not a string.");
    setAmenitySpokenNameSingular(std::string(json_string->getData()));
  }

void AmenityGroupSpecJSON::TypeAmenityGroupJSON::fromJSONAmenitySpokenNamePlural(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field AmenitySpokenNamePlural of TypeAmenityGroupJSON is not a string.");
    setAmenitySpokenNamePlural(std::string(json_string->getData()));
  }

void AmenityGroupSpecJSON::TypeAmenityGroupJSON::fromJSONAmenityTopLevelName(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field AmenityTopLevelName of TypeAmenityGroupJSON is not a string.");
    setAmenityTopLevelName(std::string(json_string->getData()));
  }

void AmenityGroupSpecJSON::TypeAmenityGroupJSON::fromJSONAmenityTopLevelSpokenNameSingular(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field AmenityTopLevelSpokenNameSingular of TypeAmenityGroupJSON is not a string.");
    setAmenityTopLevelSpokenNameSingular(std::string(json_string->getData()));
  }

void AmenityGroupSpecJSON::TypeAmenityGroupJSON::fromJSONAmenityTopLevelSpokenNamePlural(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field AmenityTopLevelSpokenNamePlural of TypeAmenityGroupJSON is not a string.");
    setAmenityTopLevelSpokenNamePlural(std::string(json_string->getData()));
  }

AmenityGroupSpecJSON::TypeAmenityGroupJSON::TypeAmenityGroupJSON(void) :
        flagHasAmenityAlias(false),
        flagHasAmenityName(false),
        flagHasAmenitySpokenNameSingular(false),
        flagHasAmenitySpokenNamePlural(false),
        flagHasAmenityTopLevelName(false),
        flagHasAmenityTopLevelSpokenNameSingular(false),
        flagHasAmenityTopLevelSpokenNamePlural(false)
  {
  }

AmenityGroupSpecJSON::TypeAmenityGroupJSON::~TypeAmenityGroupJSON(void)
  {
  }

bool AmenityGroupSpecJSON::TypeAmenityGroupJSON::hasAmenityAlias(void) const
  {
    return flagHasAmenityAlias;
  }

std::string AmenityGroupSpecJSON::TypeAmenityGroupJSON::getAmenityAlias(void)
  {
    assert(flagHasAmenityAlias);
    return storeAmenityAlias;
  }

const std::string AmenityGroupSpecJSON::TypeAmenityGroupJSON::getAmenityAlias(void) const
  {
    assert(flagHasAmenityAlias);
    return storeAmenityAlias;
  }

bool AmenityGroupSpecJSON::TypeAmenityGroupJSON::hasAmenityName(void) const
  {
    return flagHasAmenityName;
  }

std::string AmenityGroupSpecJSON::TypeAmenityGroupJSON::getAmenityName(void)
  {
    assert(flagHasAmenityName);
    return storeAmenityName;
  }

const std::string AmenityGroupSpecJSON::TypeAmenityGroupJSON::getAmenityName(void) const
  {
    assert(flagHasAmenityName);
    return storeAmenityName;
  }

bool AmenityGroupSpecJSON::TypeAmenityGroupJSON::hasAmenitySpokenNameSingular(void) const
  {
    return flagHasAmenitySpokenNameSingular;
  }

std::string AmenityGroupSpecJSON::TypeAmenityGroupJSON::getAmenitySpokenNameSingular(void)
  {
    assert(flagHasAmenitySpokenNameSingular);
    return storeAmenitySpokenNameSingular;
  }

const std::string AmenityGroupSpecJSON::TypeAmenityGroupJSON::getAmenitySpokenNameSingular(void) const
  {
    assert(flagHasAmenitySpokenNameSingular);
    return storeAmenitySpokenNameSingular;
  }

bool AmenityGroupSpecJSON::TypeAmenityGroupJSON::hasAmenitySpokenNamePlural(void) const
  {
    return flagHasAmenitySpokenNamePlural;
  }

std::string AmenityGroupSpecJSON::TypeAmenityGroupJSON::getAmenitySpokenNamePlural(void)
  {
    assert(flagHasAmenitySpokenNamePlural);
    return storeAmenitySpokenNamePlural;
  }

const std::string AmenityGroupSpecJSON::TypeAmenityGroupJSON::getAmenitySpokenNamePlural(void) const
  {
    assert(flagHasAmenitySpokenNamePlural);
    return storeAmenitySpokenNamePlural;
  }

bool AmenityGroupSpecJSON::TypeAmenityGroupJSON::hasAmenityTopLevelName(void) const
  {
    return flagHasAmenityTopLevelName;
  }

std::string AmenityGroupSpecJSON::TypeAmenityGroupJSON::getAmenityTopLevelName(void)
  {
    assert(flagHasAmenityTopLevelName);
    return storeAmenityTopLevelName;
  }

const std::string AmenityGroupSpecJSON::TypeAmenityGroupJSON::getAmenityTopLevelName(void) const
  {
    assert(flagHasAmenityTopLevelName);
    return storeAmenityTopLevelName;
  }

bool AmenityGroupSpecJSON::TypeAmenityGroupJSON::hasAmenityTopLevelSpokenNameSingular(void) const
  {
    return flagHasAmenityTopLevelSpokenNameSingular;
  }

std::string AmenityGroupSpecJSON::TypeAmenityGroupJSON::getAmenityTopLevelSpokenNameSingular(void)
  {
    assert(flagHasAmenityTopLevelSpokenNameSingular);
    return storeAmenityTopLevelSpokenNameSingular;
  }

const std::string AmenityGroupSpecJSON::TypeAmenityGroupJSON::getAmenityTopLevelSpokenNameSingular(void) const
  {
    assert(flagHasAmenityTopLevelSpokenNameSingular);
    return storeAmenityTopLevelSpokenNameSingular;
  }

bool AmenityGroupSpecJSON::TypeAmenityGroupJSON::hasAmenityTopLevelSpokenNamePlural(void) const
  {
    return flagHasAmenityTopLevelSpokenNamePlural;
  }

std::string AmenityGroupSpecJSON::TypeAmenityGroupJSON::getAmenityTopLevelSpokenNamePlural(void)
  {
    assert(flagHasAmenityTopLevelSpokenNamePlural);
    return storeAmenityTopLevelSpokenNamePlural;
  }

const std::string AmenityGroupSpecJSON::TypeAmenityGroupJSON::getAmenityTopLevelSpokenNamePlural(void) const
  {
    assert(flagHasAmenityTopLevelSpokenNamePlural);
    return storeAmenityTopLevelSpokenNamePlural;
  }

AmenityGroupSpecJSON::AmenityGroupSpecJSON(const AmenityGroupSpecJSON &)
  {
    assert(false);
  }

AmenityGroupSpecJSON &AmenityGroupSpecJSON::operator=(const AmenityGroupSpecJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void AmenityGroupSpecJSON::fromJSONAmenityGroupName(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field AmenityGroupName of AmenityGroupSpecJSON is not a string.");
    setAmenityGroupName(std::string(json_string->getData()));
  }

void AmenityGroupSpecJSON::fromJSONAmenityGroupSpokenNameSingular(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field AmenityGroupSpokenNameSingular of AmenityGroupSpecJSON is not a string.");
    setAmenityGroupSpokenNameSingular(std::string(json_string->getData()));
  }

void AmenityGroupSpecJSON::fromJSONAmenityGroupSpokenNamePlural(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field AmenityGroupSpokenNamePlural of AmenityGroupSpecJSON is not a string.");
    setAmenityGroupSpokenNamePlural(std::string(json_string->getData()));
  }

void AmenityGroupSpecJSON::fromJSONAmenityGroup(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field AmenityGroup of AmenityGroupSpecJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< TypeAmenityGroupJSON * > vector_AmenityGroup1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        TypeAmenityGroupJSON *convert_classy = TypeAmenityGroupJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_AmenityGroup1[num1] = convert_classy;
      }
    initAmenityGroup();
    for (size_t num2 = 0; num2 < vector_AmenityGroup1.size(); ++num2)
        appendAmenityGroup(vector_AmenityGroup1[num2]);
    for (size_t num1 = 0; num1 < vector_AmenityGroup1.size(); ++num1)
      {
        vector_AmenityGroup1[num1]->remove_reference();
      }
  }

AmenityGroupSpecJSON::AmenityGroupSpecJSON(void) :
        flagHasAmenityGroupName(false),
        flagHasAmenityGroupSpokenNameSingular(false),
        flagHasAmenityGroupSpokenNamePlural(false),
        flagHasAmenityGroup(false)
  {
  }

AmenityGroupSpecJSON::~AmenityGroupSpecJSON(void)
  {
    if (flagHasAmenityGroup)
      {
        for (size_t num4 = 0; num4 < storeAmenityGroup.size(); ++num4)
          {
            storeAmenityGroup[num4]->remove_reference();
          }
      }
  }

bool AmenityGroupSpecJSON::hasAmenityGroupName(void) const
  {
    return flagHasAmenityGroupName;
  }

std::string AmenityGroupSpecJSON::getAmenityGroupName(void)
  {
    assert(flagHasAmenityGroupName);
    return storeAmenityGroupName;
  }

const std::string AmenityGroupSpecJSON::getAmenityGroupName(void) const
  {
    assert(flagHasAmenityGroupName);
    return storeAmenityGroupName;
  }

bool AmenityGroupSpecJSON::hasAmenityGroupSpokenNameSingular(void) const
  {
    return flagHasAmenityGroupSpokenNameSingular;
  }

std::string AmenityGroupSpecJSON::getAmenityGroupSpokenNameSingular(void)
  {
    assert(flagHasAmenityGroupSpokenNameSingular);
    return storeAmenityGroupSpokenNameSingular;
  }

const std::string AmenityGroupSpecJSON::getAmenityGroupSpokenNameSingular(void) const
  {
    assert(flagHasAmenityGroupSpokenNameSingular);
    return storeAmenityGroupSpokenNameSingular;
  }

bool AmenityGroupSpecJSON::hasAmenityGroupSpokenNamePlural(void) const
  {
    return flagHasAmenityGroupSpokenNamePlural;
  }

std::string AmenityGroupSpecJSON::getAmenityGroupSpokenNamePlural(void)
  {
    assert(flagHasAmenityGroupSpokenNamePlural);
    return storeAmenityGroupSpokenNamePlural;
  }

const std::string AmenityGroupSpecJSON::getAmenityGroupSpokenNamePlural(void) const
  {
    assert(flagHasAmenityGroupSpokenNamePlural);
    return storeAmenityGroupSpokenNamePlural;
  }

bool AmenityGroupSpecJSON::hasAmenityGroup(void) const
  {
    return flagHasAmenityGroup;
  }

size_t AmenityGroupSpecJSON::countOfAmenityGroup(void) const
  {
    assert(flagHasAmenityGroup);
    return storeAmenityGroup.size();
  }

AmenityGroupSpecJSON::TypeAmenityGroupJSON * AmenityGroupSpecJSON::elementOfAmenityGroup(size_t element_num)
  {
    assert(flagHasAmenityGroup);
    return storeAmenityGroup[element_num];
  }

const AmenityGroupSpecJSON::TypeAmenityGroupJSON * AmenityGroupSpecJSON::elementOfAmenityGroup(size_t element_num) const
  {
    assert(flagHasAmenityGroup);
    return storeAmenityGroup[element_num];
  }

std::vector< AmenityGroupSpecJSON::TypeAmenityGroupJSON * > AmenityGroupSpecJSON::getAmenityGroup(void)
  {
    assert(flagHasAmenityGroup);
    return storeAmenityGroup;
  }

const std::vector< AmenityGroupSpecJSON::TypeAmenityGroupJSON * > AmenityGroupSpecJSON::getAmenityGroup(void) const
  {
    assert(flagHasAmenityGroup);
    return storeAmenityGroup;
  }

AmenityGroupSpecJSON::TypeAmenityGroupJSON *AmenityGroupSpecJSON::TypeAmenityGroupJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    TypeAmenityGroupJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<TypeAmenityGroupJSON>, TypeAmenityGroupJSON *, bool> generator("Type TypeAmenityGroup", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
AmenityGroupSpecJSON *AmenityGroupSpecJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    AmenityGroupSpecJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<AmenityGroupSpecJSON>, AmenityGroupSpecJSON *, bool> generator("Type AmenityGroupSpec", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
