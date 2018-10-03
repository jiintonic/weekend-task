/* file "FlightStatusSearchResultJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "FlightStatusSearchResultJSON.h"

#include "FlightStatusSearchResultJSON.h"


FlightStatusSearchResultJSON::FlightStatusSearchResultJSON(const FlightStatusSearchResultJSON &)
  {
    assert(false);
  }

FlightStatusSearchResultJSON &FlightStatusSearchResultJSON::operator=(const FlightStatusSearchResultJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void FlightStatusSearchResultJSON::fromJSONFlightSpec(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    FlightSpecJSON *convert_classy = FlightSpecJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setFlightSpec(convert_classy);
    convert_classy->remove_reference();
  }

void FlightStatusSearchResultJSON::fromJSONErrorMessage(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field ErrorMessage of FlightStatusSearchResultJSON is not a string.");
    setErrorMessage(std::string(json_string->getData()));
  }

void FlightStatusSearchResultJSON::fromJSONErrorMessageSpoken(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field ErrorMessageSpoken of FlightStatusSearchResultJSON is not a string.");
    setErrorMessageSpoken(std::string(json_string->getData()));
  }

void FlightStatusSearchResultJSON::fromJSONFlightStatuses(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field FlightStatuses of FlightStatusSearchResultJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< FlightStatusJSON * > vector_FlightStatuses1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        FlightStatusJSON *convert_classy = FlightStatusJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_FlightStatuses1[num1] = convert_classy;
      }
    initFlightStatuses();
    for (size_t num2 = 0; num2 < vector_FlightStatuses1.size(); ++num2)
        appendFlightStatuses(vector_FlightStatuses1[num2]);
    for (size_t num1 = 0; num1 < vector_FlightStatuses1.size(); ++num1)
      {
        vector_FlightStatuses1[num1]->remove_reference();
      }
  }

void FlightStatusSearchResultJSON::fromJSONMostRelevantFlightIndex(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field MostRelevantFlightIndex of FlightStatusSearchResultJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field MostRelevantFlightIndex of FlightStatusSearchResultJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setMostRelevantFlightIndex(extracted_integer);
  }

void FlightStatusSearchResultJSON::fromJSONMostRelevantFlightCriteria(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    ResponseTypesJSON *convert_classy = ResponseTypesJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setMostRelevantFlightCriteria(convert_classy);
    convert_classy->remove_reference();
  }

FlightStatusSearchResultJSON::FlightStatusSearchResultJSON(void) :
        flagHasFlightSpec(false),
        flagHasErrorMessage(false),
        flagHasErrorMessageSpoken(false),
        flagHasFlightStatuses(false),
        flagHasMostRelevantFlightIndex(false),
        flagHasMostRelevantFlightCriteria(false)
  {
    extraIndex = create_string_index();
  }

FlightStatusSearchResultJSON::~FlightStatusSearchResultJSON(void)
  {
    if (flagHasFlightSpec)
      {
        storeFlightSpec->remove_reference();
      }
    if (flagHasFlightStatuses)
      {
        for (size_t num4 = 0; num4 < storeFlightStatuses.size(); ++num4)
          {
            storeFlightStatuses[num4]->remove_reference();
          }
      }
    if (flagHasMostRelevantFlightCriteria)
      {
        storeMostRelevantFlightCriteria->remove_reference();
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool FlightStatusSearchResultJSON::hasFlightSpec(void) const
  {
    return flagHasFlightSpec;
  }

FlightSpecJSON * FlightStatusSearchResultJSON::getFlightSpec(void)
  {
    assert(flagHasFlightSpec);
    return storeFlightSpec;
  }

const FlightSpecJSON * FlightStatusSearchResultJSON::getFlightSpec(void) const
  {
    assert(flagHasFlightSpec);
    return storeFlightSpec;
  }

bool FlightStatusSearchResultJSON::hasErrorMessage(void) const
  {
    return flagHasErrorMessage;
  }

std::string FlightStatusSearchResultJSON::getErrorMessage(void)
  {
    assert(flagHasErrorMessage);
    return storeErrorMessage;
  }

const std::string FlightStatusSearchResultJSON::getErrorMessage(void) const
  {
    assert(flagHasErrorMessage);
    return storeErrorMessage;
  }

bool FlightStatusSearchResultJSON::hasErrorMessageSpoken(void) const
  {
    return flagHasErrorMessageSpoken;
  }

std::string FlightStatusSearchResultJSON::getErrorMessageSpoken(void)
  {
    assert(flagHasErrorMessageSpoken);
    return storeErrorMessageSpoken;
  }

const std::string FlightStatusSearchResultJSON::getErrorMessageSpoken(void) const
  {
    assert(flagHasErrorMessageSpoken);
    return storeErrorMessageSpoken;
  }

bool FlightStatusSearchResultJSON::hasFlightStatuses(void) const
  {
    return flagHasFlightStatuses;
  }

size_t FlightStatusSearchResultJSON::countOfFlightStatuses(void) const
  {
    assert(flagHasFlightStatuses);
    return storeFlightStatuses.size();
  }

FlightStatusJSON * FlightStatusSearchResultJSON::elementOfFlightStatuses(size_t element_num)
  {
    assert(flagHasFlightStatuses);
    return storeFlightStatuses[element_num];
  }

const FlightStatusJSON * FlightStatusSearchResultJSON::elementOfFlightStatuses(size_t element_num) const
  {
    assert(flagHasFlightStatuses);
    return storeFlightStatuses[element_num];
  }

std::vector< FlightStatusJSON * > FlightStatusSearchResultJSON::getFlightStatuses(void)
  {
    assert(flagHasFlightStatuses);
    return storeFlightStatuses;
  }

const std::vector< FlightStatusJSON * > FlightStatusSearchResultJSON::getFlightStatuses(void) const
  {
    assert(flagHasFlightStatuses);
    return storeFlightStatuses;
  }

bool FlightStatusSearchResultJSON::hasMostRelevantFlightIndex(void) const
  {
    return flagHasMostRelevantFlightIndex;
  }

OInteger FlightStatusSearchResultJSON::getMostRelevantFlightIndex(void)
  {
    assert(flagHasMostRelevantFlightIndex);
    return storeMostRelevantFlightIndex;
  }

const OInteger FlightStatusSearchResultJSON::getMostRelevantFlightIndex(void) const
  {
    assert(flagHasMostRelevantFlightIndex);
    return storeMostRelevantFlightIndex;
  }

bool FlightStatusSearchResultJSON::hasMostRelevantFlightCriteria(void) const
  {
    return flagHasMostRelevantFlightCriteria;
  }

ResponseTypesJSON * FlightStatusSearchResultJSON::getMostRelevantFlightCriteria(void)
  {
    assert(flagHasMostRelevantFlightCriteria);
    return storeMostRelevantFlightCriteria;
  }

const ResponseTypesJSON * FlightStatusSearchResultJSON::getMostRelevantFlightCriteria(void) const
  {
    assert(flagHasMostRelevantFlightCriteria);
    return storeMostRelevantFlightCriteria;
  }

char FlightStatusSearchResultJSON::Generator::lowerBoundMostRelevantFlightIndex[] = "0";
FlightStatusSearchResultJSON *FlightStatusSearchResultJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    FlightStatusSearchResultJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<FlightStatusSearchResultJSON>, FlightStatusSearchResultJSON *, bool> generator("Type FlightStatusSearchResult", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
