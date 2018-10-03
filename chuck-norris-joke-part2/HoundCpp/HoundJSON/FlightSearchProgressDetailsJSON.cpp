/* file "FlightSearchProgressDetailsJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "FlightSearchProgressDetailsJSON.h"

#include "FlightSearchProgressDetailsJSON.h"


FlightSearchProgressDetailsJSON::FlightSearchProgressDetailsJSON(const FlightSearchProgressDetailsJSON &)
  {
    assert(false);
  }

FlightSearchProgressDetailsJSON &FlightSearchProgressDetailsJSON::operator=(const FlightSearchProgressDetailsJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void FlightSearchProgressDetailsJSON::fromJSONSearchComplete(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field SearchComplete of FlightSearchProgressDetailsJSON is not true for false.");
          }
      }
    setSearchComplete(the_bool);
  }

void FlightSearchProgressDetailsJSON::fromJSONProgressUpdateCount(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field ProgressUpdateCount of FlightSearchProgressDetailsJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field ProgressUpdateCount of FlightSearchProgressDetailsJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setProgressUpdateCount(extracted_integer);
  }

void FlightSearchProgressDetailsJSON::fromJSONWaitingForDataProviders(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field WaitingForDataProviders of FlightSearchProgressDetailsJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    if (count1 < 1)
        throw("The value for field WaitingForDataProviders of FlightSearchProgressDetailsJSON has too few elements.");
    std::vector< FlightDataProviderJSON * > vector_WaitingForDataProviders1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        FlightDataProviderJSON *convert_classy = FlightDataProviderJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_WaitingForDataProviders1[num1] = convert_classy;
      }
    assert(vector_WaitingForDataProviders1.size() >= 1);
    initWaitingForDataProviders();
    for (size_t num2 = 0; num2 < vector_WaitingForDataProviders1.size(); ++num2)
        appendWaitingForDataProviders(vector_WaitingForDataProviders1[num2]);
    for (size_t num1 = 0; num1 < vector_WaitingForDataProviders1.size(); ++num1)
      {
        vector_WaitingForDataProviders1[num1]->remove_reference();
      }
  }

FlightSearchProgressDetailsJSON::FlightSearchProgressDetailsJSON(void) :
        flagHasSearchComplete(false),
        flagHasProgressUpdateCount(false),
        flagHasWaitingForDataProviders(false)
  {
    extraIndex = create_string_index();
  }

FlightSearchProgressDetailsJSON::~FlightSearchProgressDetailsJSON(void)
  {
    if (flagHasWaitingForDataProviders)
      {
        for (size_t num4 = 0; num4 < storeWaitingForDataProviders.size(); ++num4)
          {
            storeWaitingForDataProviders[num4]->remove_reference();
          }
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool FlightSearchProgressDetailsJSON::hasSearchComplete(void) const
  {
    return flagHasSearchComplete;
  }

bool FlightSearchProgressDetailsJSON::getSearchComplete(void)
  {
    assert(flagHasSearchComplete);
    return storeSearchComplete;
  }

const bool FlightSearchProgressDetailsJSON::getSearchComplete(void) const
  {
    assert(flagHasSearchComplete);
    return storeSearchComplete;
  }

bool FlightSearchProgressDetailsJSON::hasProgressUpdateCount(void) const
  {
    return flagHasProgressUpdateCount;
  }

OInteger FlightSearchProgressDetailsJSON::getProgressUpdateCount(void)
  {
    assert(flagHasProgressUpdateCount);
    return storeProgressUpdateCount;
  }

const OInteger FlightSearchProgressDetailsJSON::getProgressUpdateCount(void) const
  {
    assert(flagHasProgressUpdateCount);
    return storeProgressUpdateCount;
  }

bool FlightSearchProgressDetailsJSON::hasWaitingForDataProviders(void) const
  {
    return flagHasWaitingForDataProviders;
  }

size_t FlightSearchProgressDetailsJSON::countOfWaitingForDataProviders(void) const
  {
    assert(flagHasWaitingForDataProviders);
    return storeWaitingForDataProviders.size();
  }

FlightDataProviderJSON * FlightSearchProgressDetailsJSON::elementOfWaitingForDataProviders(size_t element_num)
  {
    assert(flagHasWaitingForDataProviders);
    return storeWaitingForDataProviders[element_num];
  }

const FlightDataProviderJSON * FlightSearchProgressDetailsJSON::elementOfWaitingForDataProviders(size_t element_num) const
  {
    assert(flagHasWaitingForDataProviders);
    return storeWaitingForDataProviders[element_num];
  }

std::vector< FlightDataProviderJSON * > FlightSearchProgressDetailsJSON::getWaitingForDataProviders(void)
  {
    assert(flagHasWaitingForDataProviders);
    return storeWaitingForDataProviders;
  }

const std::vector< FlightDataProviderJSON * > FlightSearchProgressDetailsJSON::getWaitingForDataProviders(void) const
  {
    assert(flagHasWaitingForDataProviders);
    return storeWaitingForDataProviders;
  }

char FlightSearchProgressDetailsJSON::Generator::lowerBoundProgressUpdateCount[] = "1";
FlightSearchProgressDetailsJSON *FlightSearchProgressDetailsJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    FlightSearchProgressDetailsJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<FlightSearchProgressDetailsJSON>, FlightSearchProgressDetailsJSON *, bool> generator("Type FlightSearchProgressDetails", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
