/* file "SportsOlympicsEventSchedulesAndResultsQueryResultJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "SportsOlympicsEventSchedulesAndResultsQueryResultJSON.h"

#include "SportsOlympicsEventSchedulesAndResultsQueryResultJSON.h"


SportsOlympicsEventSchedulesAndResultsQueryResultJSON::SportsOlympicsEventSchedulesAndResultsQueryResultJSON(const SportsOlympicsEventSchedulesAndResultsQueryResultJSON &)
  {
    assert(false);
  }

SportsOlympicsEventSchedulesAndResultsQueryResultJSON &SportsOlympicsEventSchedulesAndResultsQueryResultJSON::operator=(const SportsOlympicsEventSchedulesAndResultsQueryResultJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void SportsOlympicsEventSchedulesAndResultsQueryResultJSON::fromJSONRankResult(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field RankResult of SportsOlympicsEventSchedulesAndResultsQueryResultJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field RankResult of SportsOlympicsEventSchedulesAndResultsQueryResultJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setRankResult(extracted_integer);
  }

void SportsOlympicsEventSchedulesAndResultsQueryResultJSON::fromJSONEventInstancesMappings(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field EventInstancesMappings of SportsOlympicsEventSchedulesAndResultsQueryResultJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< SportsOlympicsEventSchedulesAndResultsEventInstanceMappingJSON * > vector_EventInstancesMappings1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        SportsOlympicsEventSchedulesAndResultsEventInstanceMappingJSON *convert_classy = SportsOlympicsEventSchedulesAndResultsEventInstanceMappingJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_EventInstancesMappings1[num1] = convert_classy;
      }
    initEventInstancesMappings();
    for (size_t num2 = 0; num2 < vector_EventInstancesMappings1.size(); ++num2)
        appendEventInstancesMappings(vector_EventInstancesMappings1[num2]);
    for (size_t num1 = 0; num1 < vector_EventInstancesMappings1.size(); ++num1)
      {
        vector_EventInstancesMappings1[num1]->remove_reference();
      }
  }

void SportsOlympicsEventSchedulesAndResultsQueryResultJSON::fromJSONError(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    SportsOlympicsEventSchedulesAndResultsErrorJSON *convert_classy = SportsOlympicsEventSchedulesAndResultsErrorJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setError(convert_classy);
    convert_classy->remove_reference();
  }

SportsOlympicsEventSchedulesAndResultsQueryResultJSON::SportsOlympicsEventSchedulesAndResultsQueryResultJSON(void) :
        flagHasRankResult(false),
        flagHasEventInstancesMappings(false),
        flagHasError(false)
  {
    extraIndex = create_string_index();
  }

SportsOlympicsEventSchedulesAndResultsQueryResultJSON::~SportsOlympicsEventSchedulesAndResultsQueryResultJSON(void)
  {
    if (flagHasEventInstancesMappings)
      {
        for (size_t num4 = 0; num4 < storeEventInstancesMappings.size(); ++num4)
          {
            storeEventInstancesMappings[num4]->remove_reference();
          }
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

bool SportsOlympicsEventSchedulesAndResultsQueryResultJSON::hasRankResult(void) const
  {
    return flagHasRankResult;
  }

OInteger SportsOlympicsEventSchedulesAndResultsQueryResultJSON::getRankResult(void)
  {
    assert(flagHasRankResult);
    return storeRankResult;
  }

const OInteger SportsOlympicsEventSchedulesAndResultsQueryResultJSON::getRankResult(void) const
  {
    assert(flagHasRankResult);
    return storeRankResult;
  }

bool SportsOlympicsEventSchedulesAndResultsQueryResultJSON::hasEventInstancesMappings(void) const
  {
    return flagHasEventInstancesMappings;
  }

size_t SportsOlympicsEventSchedulesAndResultsQueryResultJSON::countOfEventInstancesMappings(void) const
  {
    assert(flagHasEventInstancesMappings);
    return storeEventInstancesMappings.size();
  }

SportsOlympicsEventSchedulesAndResultsEventInstanceMappingJSON * SportsOlympicsEventSchedulesAndResultsQueryResultJSON::elementOfEventInstancesMappings(size_t element_num)
  {
    assert(flagHasEventInstancesMappings);
    return storeEventInstancesMappings[element_num];
  }

const SportsOlympicsEventSchedulesAndResultsEventInstanceMappingJSON * SportsOlympicsEventSchedulesAndResultsQueryResultJSON::elementOfEventInstancesMappings(size_t element_num) const
  {
    assert(flagHasEventInstancesMappings);
    return storeEventInstancesMappings[element_num];
  }

std::vector< SportsOlympicsEventSchedulesAndResultsEventInstanceMappingJSON * > SportsOlympicsEventSchedulesAndResultsQueryResultJSON::getEventInstancesMappings(void)
  {
    assert(flagHasEventInstancesMappings);
    return storeEventInstancesMappings;
  }

const std::vector< SportsOlympicsEventSchedulesAndResultsEventInstanceMappingJSON * > SportsOlympicsEventSchedulesAndResultsQueryResultJSON::getEventInstancesMappings(void) const
  {
    assert(flagHasEventInstancesMappings);
    return storeEventInstancesMappings;
  }

bool SportsOlympicsEventSchedulesAndResultsQueryResultJSON::hasError(void) const
  {
    return flagHasError;
  }

SportsOlympicsEventSchedulesAndResultsErrorJSON * SportsOlympicsEventSchedulesAndResultsQueryResultJSON::getError(void)
  {
    assert(flagHasError);
    return storeError;
  }

const SportsOlympicsEventSchedulesAndResultsErrorJSON * SportsOlympicsEventSchedulesAndResultsQueryResultJSON::getError(void) const
  {
    assert(flagHasError);
    return storeError;
  }

SportsOlympicsEventSchedulesAndResultsErrorJSON::TypeValue SportsOlympicsEventSchedulesAndResultsQueryResultJSON::getErrorValue(void)
  {
    return getError()->getValue();
  }

const SportsOlympicsEventSchedulesAndResultsErrorJSON::TypeValue SportsOlympicsEventSchedulesAndResultsQueryResultJSON::getErrorValue(void) const
  {
    return getError()->getValue();
  }

const char *SportsOlympicsEventSchedulesAndResultsQueryResultJSON::getErrorAsChars(void) const
  {
    return getError()->getValueAsChars();
  }

std::string SportsOlympicsEventSchedulesAndResultsQueryResultJSON::getErrorAsString(void) const
  {
    return getError()->getValueAsString();
  }

char SportsOlympicsEventSchedulesAndResultsQueryResultJSON::Generator::lowerBoundRankResult[] = "1";
SportsOlympicsEventSchedulesAndResultsQueryResultJSON *SportsOlympicsEventSchedulesAndResultsQueryResultJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    SportsOlympicsEventSchedulesAndResultsQueryResultJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<SportsOlympicsEventSchedulesAndResultsQueryResultJSON>, SportsOlympicsEventSchedulesAndResultsQueryResultJSON *, bool> generator("Type SportsOlympicsEventSchedulesAndResultsQueryResult", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
