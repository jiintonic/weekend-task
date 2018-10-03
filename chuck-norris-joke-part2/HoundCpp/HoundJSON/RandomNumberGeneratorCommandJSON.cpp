/* file "RandomNumberGeneratorCommandJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "RandomNumberGeneratorCommandJSON.h"

#include "RandomNumberGeneratorCommandJSON.h"


RandomNumberGeneratorCommandJSON::TypeNativeDataJSON::TypeNativeDataJSON(const TypeNativeDataJSON &)
  {
    assert(false);
  }

RandomNumberGeneratorCommandJSON::TypeNativeDataJSON &RandomNumberGeneratorCommandJSON::TypeNativeDataJSON::operator=(const TypeNativeDataJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void RandomNumberGeneratorCommandJSON::TypeNativeDataJSON::fromJSONRequests(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field Requests of TypeNativeDataJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< RandomNumberGeneratorRequestResultJSON * > vector_Requests1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        RandomNumberGeneratorRequestResultJSON *convert_classy = RandomNumberGeneratorRequestResultJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_Requests1[num1] = convert_classy;
      }
    initRequests();
    for (size_t num2 = 0; num2 < vector_Requests1.size(); ++num2)
        appendRequests(vector_Requests1[num2]);
    for (size_t num1 = 0; num1 < vector_Requests1.size(); ++num1)
      {
        vector_Requests1[num1]->remove_reference();
      }
  }

void RandomNumberGeneratorCommandJSON::TypeNativeDataJSON::fromJSONIsMetaquery(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field IsMetaquery of TypeNativeDataJSON is not true for false.");
          }
      }
    setIsMetaquery(the_bool);
  }

void RandomNumberGeneratorCommandJSON::TypeNativeDataJSON::fromJSONSpecificMetaquery(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field SpecificMetaquery of TypeNativeDataJSON is not true for false.");
          }
      }
    setSpecificMetaquery(the_bool);
  }

RandomNumberGeneratorCommandJSON::TypeNativeDataJSON::TypeNativeDataJSON(void) :
        flagHasRequests(false),
        flagHasIsMetaquery(false),
        flagHasSpecificMetaquery(false)
  {
  }

RandomNumberGeneratorCommandJSON::TypeNativeDataJSON::~TypeNativeDataJSON(void)
  {
    if (flagHasRequests)
      {
        for (size_t num4 = 0; num4 < storeRequests.size(); ++num4)
          {
            storeRequests[num4]->remove_reference();
          }
      }
  }

bool RandomNumberGeneratorCommandJSON::TypeNativeDataJSON::hasRequests(void) const
  {
    return flagHasRequests;
  }

size_t RandomNumberGeneratorCommandJSON::TypeNativeDataJSON::countOfRequests(void) const
  {
    assert(flagHasRequests);
    return storeRequests.size();
  }

RandomNumberGeneratorRequestResultJSON * RandomNumberGeneratorCommandJSON::TypeNativeDataJSON::elementOfRequests(size_t element_num)
  {
    assert(flagHasRequests);
    return storeRequests[element_num];
  }

const RandomNumberGeneratorRequestResultJSON * RandomNumberGeneratorCommandJSON::TypeNativeDataJSON::elementOfRequests(size_t element_num) const
  {
    assert(flagHasRequests);
    return storeRequests[element_num];
  }

std::vector< RandomNumberGeneratorRequestResultJSON * > RandomNumberGeneratorCommandJSON::TypeNativeDataJSON::getRequests(void)
  {
    assert(flagHasRequests);
    return storeRequests;
  }

const std::vector< RandomNumberGeneratorRequestResultJSON * > RandomNumberGeneratorCommandJSON::TypeNativeDataJSON::getRequests(void) const
  {
    assert(flagHasRequests);
    return storeRequests;
  }

bool RandomNumberGeneratorCommandJSON::TypeNativeDataJSON::hasIsMetaquery(void) const
  {
    return flagHasIsMetaquery;
  }

bool RandomNumberGeneratorCommandJSON::TypeNativeDataJSON::getIsMetaquery(void)
  {
    assert(flagHasIsMetaquery);
    return storeIsMetaquery;
  }

const bool RandomNumberGeneratorCommandJSON::TypeNativeDataJSON::getIsMetaquery(void) const
  {
    assert(flagHasIsMetaquery);
    return storeIsMetaquery;
  }

bool RandomNumberGeneratorCommandJSON::TypeNativeDataJSON::hasSpecificMetaquery(void) const
  {
    return flagHasSpecificMetaquery;
  }

bool RandomNumberGeneratorCommandJSON::TypeNativeDataJSON::getSpecificMetaquery(void)
  {
    assert(flagHasSpecificMetaquery);
    return storeSpecificMetaquery;
  }

const bool RandomNumberGeneratorCommandJSON::TypeNativeDataJSON::getSpecificMetaquery(void) const
  {
    assert(flagHasSpecificMetaquery);
    return storeSpecificMetaquery;
  }

RandomNumberGeneratorCommandJSON::RandomNumberGeneratorCommandJSON(const RandomNumberGeneratorCommandJSON &)
  {
    assert(false);
  }

RandomNumberGeneratorCommandJSON &RandomNumberGeneratorCommandJSON::operator=(const RandomNumberGeneratorCommandJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *RandomNumberGeneratorCommandJSON::extraNativeDataToJSON(void) const
  {
    JSONValueHandler handler_NativeData;
    storeNativeData->write_as_json(&handler_NativeData);
    handler_NativeData.result->add_reference();
    return handler_NativeData.result;
  }

JSONValue *RandomNumberGeneratorCommandJSON::extraTooLargeToJSON(void) const
  {
    JSONValue *generated_boolean_TooLarge = (storeTooLarge ? (JSONValue *)new JSONTrueValue() : (JSONValue *)new JSONFalseValue());
    return generated_boolean_TooLarge;
  }

void RandomNumberGeneratorCommandJSON::fromJSONNativeData(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TypeNativeDataJSON *convert_classy = TypeNativeDataJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setNativeData(convert_classy);
    convert_classy->remove_reference();
  }

void RandomNumberGeneratorCommandJSON::fromJSONTooLarge(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field TooLarge of RandomNumberGeneratorCommandJSON is not true for false.");
          }
      }
    setTooLarge(the_bool);
  }

RandomNumberGeneratorCommandJSON::RandomNumberGeneratorCommandJSON(void) :
        flagHasNativeData(false),
        flagHasTooLarge(false)
  {
  }

RandomNumberGeneratorCommandJSON::~RandomNumberGeneratorCommandJSON(void)
  {
    if (flagHasNativeData)
      {
        storeNativeData->remove_reference();
      }
  }

const char *RandomNumberGeneratorCommandJSON::getCommandKind(void) const
  {
    return "RandomNumberGeneratorCommand";
  }

bool RandomNumberGeneratorCommandJSON::hasNativeData(void) const
  {
    return flagHasNativeData;
  }

RandomNumberGeneratorCommandJSON::TypeNativeDataJSON * RandomNumberGeneratorCommandJSON::getNativeData(void)
  {
    assert(flagHasNativeData);
    return storeNativeData;
  }

const RandomNumberGeneratorCommandJSON::TypeNativeDataJSON * RandomNumberGeneratorCommandJSON::getNativeData(void) const
  {
    assert(flagHasNativeData);
    return storeNativeData;
  }

bool RandomNumberGeneratorCommandJSON::hasTooLarge(void) const
  {
    return flagHasTooLarge;
  }

bool RandomNumberGeneratorCommandJSON::getTooLarge(void)
  {
    assert(flagHasTooLarge);
    return storeTooLarge;
  }

const bool RandomNumberGeneratorCommandJSON::getTooLarge(void) const
  {
    assert(flagHasTooLarge);
    return storeTooLarge;
  }

RandomNumberGeneratorCommandJSON::TypeNativeDataJSON *RandomNumberGeneratorCommandJSON::TypeNativeDataJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    TypeNativeDataJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<TypeNativeDataJSON>, TypeNativeDataJSON *, bool> generator("Type TypeNativeData", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
RandomNumberGeneratorCommandJSON *RandomNumberGeneratorCommandJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    RandomNumberGeneratorCommandJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<RandomNumberGeneratorCommandJSON>, RandomNumberGeneratorCommandJSON *, bool> generator("Type RandomNumberGeneratorCommand", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
