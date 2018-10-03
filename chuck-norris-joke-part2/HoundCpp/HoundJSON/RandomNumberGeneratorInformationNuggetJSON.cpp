/* file "RandomNumberGeneratorInformationNuggetJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "RandomNumberGeneratorInformationNuggetJSON.h"

#include "RandomNumberGeneratorInformationNuggetJSON.h"


RandomNumberGeneratorInformationNuggetJSON::RandomNumberGeneratorInformationNuggetJSON(const RandomNumberGeneratorInformationNuggetJSON &)
  {
    assert(false);
  }

RandomNumberGeneratorInformationNuggetJSON &RandomNumberGeneratorInformationNuggetJSON::operator=(const RandomNumberGeneratorInformationNuggetJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *RandomNumberGeneratorInformationNuggetJSON::extraRequestsToJSON(void) const
  {
    JSONArrayValue *generated_array_1_Requests = new JSONArrayValue();
    for (size_t num1 = 0; num1 < storeRequests.size(); ++num1)
      {
        JSONValueHandler handler_Requests;
        storeRequests[num1]->write_as_json(&handler_Requests);
        handler_Requests.result->add_reference();
        generated_array_1_Requests->appendComponent(handler_Requests.result);
        handler_Requests.result->remove_reference();
      }
    return generated_array_1_Requests;
  }

JSONValue *RandomNumberGeneratorInformationNuggetJSON::extraIsMetaqueryToJSON(void) const
  {
    JSONValue *generated_boolean_IsMetaquery = (storeIsMetaquery ? (JSONValue *)new JSONTrueValue() : (JSONValue *)new JSONFalseValue());
    return generated_boolean_IsMetaquery;
  }

JSONValue *RandomNumberGeneratorInformationNuggetJSON::extraSpecificMetaqueryToJSON(void) const
  {
    JSONValue *generated_boolean_SpecificMetaquery = (storeSpecificMetaquery ? (JSONValue *)new JSONTrueValue() : (JSONValue *)new JSONFalseValue());
    return generated_boolean_SpecificMetaquery;
  }

JSONValue *RandomNumberGeneratorInformationNuggetJSON::extraTooLargeToJSON(void) const
  {
    JSONValue *generated_boolean_TooLarge = (storeTooLarge ? (JSONValue *)new JSONTrueValue() : (JSONValue *)new JSONFalseValue());
    return generated_boolean_TooLarge;
  }

void RandomNumberGeneratorInformationNuggetJSON::fromJSONRequests(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field Requests of RandomNumberGeneratorInformationNuggetJSON is not an array.");
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

void RandomNumberGeneratorInformationNuggetJSON::fromJSONIsMetaquery(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field IsMetaquery of RandomNumberGeneratorInformationNuggetJSON is not true for false.");
          }
      }
    setIsMetaquery(the_bool);
  }

void RandomNumberGeneratorInformationNuggetJSON::fromJSONSpecificMetaquery(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field SpecificMetaquery of RandomNumberGeneratorInformationNuggetJSON is not true for false.");
          }
      }
    setSpecificMetaquery(the_bool);
  }

void RandomNumberGeneratorInformationNuggetJSON::fromJSONTooLarge(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field TooLarge of RandomNumberGeneratorInformationNuggetJSON is not true for false.");
          }
      }
    setTooLarge(the_bool);
  }

RandomNumberGeneratorInformationNuggetJSON::RandomNumberGeneratorInformationNuggetJSON(void) :
        flagHasRequests(false),
        flagHasIsMetaquery(false),
        flagHasSpecificMetaquery(false),
        flagHasTooLarge(false)
  {
  }

RandomNumberGeneratorInformationNuggetJSON::~RandomNumberGeneratorInformationNuggetJSON(void)
  {
    if (flagHasRequests)
      {
        for (size_t num4 = 0; num4 < storeRequests.size(); ++num4)
          {
            storeRequests[num4]->remove_reference();
          }
      }
  }

const char *RandomNumberGeneratorInformationNuggetJSON::getNuggetKind(void) const
  {
    return "RandomNumberGenerator";
  }

bool RandomNumberGeneratorInformationNuggetJSON::hasRequests(void) const
  {
    return flagHasRequests;
  }

size_t RandomNumberGeneratorInformationNuggetJSON::countOfRequests(void) const
  {
    assert(flagHasRequests);
    return storeRequests.size();
  }

RandomNumberGeneratorRequestResultJSON * RandomNumberGeneratorInformationNuggetJSON::elementOfRequests(size_t element_num)
  {
    assert(flagHasRequests);
    return storeRequests[element_num];
  }

const RandomNumberGeneratorRequestResultJSON * RandomNumberGeneratorInformationNuggetJSON::elementOfRequests(size_t element_num) const
  {
    assert(flagHasRequests);
    return storeRequests[element_num];
  }

std::vector< RandomNumberGeneratorRequestResultJSON * > RandomNumberGeneratorInformationNuggetJSON::getRequests(void)
  {
    assert(flagHasRequests);
    return storeRequests;
  }

const std::vector< RandomNumberGeneratorRequestResultJSON * > RandomNumberGeneratorInformationNuggetJSON::getRequests(void) const
  {
    assert(flagHasRequests);
    return storeRequests;
  }

bool RandomNumberGeneratorInformationNuggetJSON::hasIsMetaquery(void) const
  {
    return flagHasIsMetaquery;
  }

bool RandomNumberGeneratorInformationNuggetJSON::getIsMetaquery(void)
  {
    assert(flagHasIsMetaquery);
    return storeIsMetaquery;
  }

const bool RandomNumberGeneratorInformationNuggetJSON::getIsMetaquery(void) const
  {
    assert(flagHasIsMetaquery);
    return storeIsMetaquery;
  }

bool RandomNumberGeneratorInformationNuggetJSON::hasSpecificMetaquery(void) const
  {
    return flagHasSpecificMetaquery;
  }

bool RandomNumberGeneratorInformationNuggetJSON::getSpecificMetaquery(void)
  {
    assert(flagHasSpecificMetaquery);
    return storeSpecificMetaquery;
  }

const bool RandomNumberGeneratorInformationNuggetJSON::getSpecificMetaquery(void) const
  {
    assert(flagHasSpecificMetaquery);
    return storeSpecificMetaquery;
  }

bool RandomNumberGeneratorInformationNuggetJSON::hasTooLarge(void) const
  {
    return flagHasTooLarge;
  }

bool RandomNumberGeneratorInformationNuggetJSON::getTooLarge(void)
  {
    assert(flagHasTooLarge);
    return storeTooLarge;
  }

const bool RandomNumberGeneratorInformationNuggetJSON::getTooLarge(void) const
  {
    assert(flagHasTooLarge);
    return storeTooLarge;
  }

RandomNumberGeneratorInformationNuggetJSON *RandomNumberGeneratorInformationNuggetJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    RandomNumberGeneratorInformationNuggetJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<RandomNumberGeneratorInformationNuggetJSON>, RandomNumberGeneratorInformationNuggetJSON *, bool> generator("Type RandomNumberGeneratorInformationNugget", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
