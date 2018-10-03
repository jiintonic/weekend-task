/* file "SportsOlympicsEventSchedulesAndResultsEventInstanceMappingJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "SportsOlympicsEventSchedulesAndResultsEventInstanceMappingJSON.h"

#include "SportsOlympicsEventSchedulesAndResultsEventInstanceMappingJSON.h"


SportsOlympicsEventSchedulesAndResultsEventInstanceMappingJSON::SportsOlympicsEventSchedulesAndResultsEventInstanceMappingJSON(const SportsOlympicsEventSchedulesAndResultsEventInstanceMappingJSON &)
  {
    assert(false);
  }

SportsOlympicsEventSchedulesAndResultsEventInstanceMappingJSON &SportsOlympicsEventSchedulesAndResultsEventInstanceMappingJSON::operator=(const SportsOlympicsEventSchedulesAndResultsEventInstanceMappingJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void SportsOlympicsEventSchedulesAndResultsEventInstanceMappingJSON::fromJSONEventInstancesIndex(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field EventInstancesIndex of SportsOlympicsEventSchedulesAndResultsEventInstanceMappingJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field EventInstancesIndex of SportsOlympicsEventSchedulesAndResultsEventInstanceMappingJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setEventInstancesIndex(extracted_integer);
  }

void SportsOlympicsEventSchedulesAndResultsEventInstanceMappingJSON::fromJSONMedalWinnersIndices(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field MedalWinnersIndices of SportsOlympicsEventSchedulesAndResultsEventInstanceMappingJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< OInteger > vector_MedalWinnersIndices1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        OInteger extracted_integer;
        const JSONIntegerValue *json_integer = json_array1->component(num1)->integer_value();
        if (json_integer == NULL)
          {
            const JSONRationalValue *json_rational = json_array1->component(num1)->rational_value();
            if (json_rational == NULL)
              {
                throw("The value for an element of field MedalWinnersIndices of SportsOlympicsEventSchedulesAndResultsEventInstanceMappingJSON is not a number.");
              }
            if (!(json_rational->isInteger()))
              {
                throw("The value for an element of field MedalWinnersIndices of SportsOlympicsEventSchedulesAndResultsEventInstanceMappingJSON is not an integer.");
              }
            extracted_integer = OInteger(json_rational->getInteger())        ;
          }
        else
          {
            extracted_integer = OInteger(json_integer->getData())        ;
          }
        vector_MedalWinnersIndices1[num1] = extracted_integer;
      }
    initMedalWinnersIndices();
    for (size_t num3 = 0; num3 < vector_MedalWinnersIndices1.size(); ++num3)
        appendMedalWinnersIndices(vector_MedalWinnersIndices1[num3]);
    for (size_t num1 = 0; num1 < vector_MedalWinnersIndices1.size(); ++num1)
      {
      }
  }

void SportsOlympicsEventSchedulesAndResultsEventInstanceMappingJSON::fromJSONParticipantsIndices(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field ParticipantsIndices of SportsOlympicsEventSchedulesAndResultsEventInstanceMappingJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< OInteger > vector_ParticipantsIndices1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        OInteger extracted_integer;
        const JSONIntegerValue *json_integer = json_array1->component(num1)->integer_value();
        if (json_integer == NULL)
          {
            const JSONRationalValue *json_rational = json_array1->component(num1)->rational_value();
            if (json_rational == NULL)
              {
                throw("The value for an element of field ParticipantsIndices of SportsOlympicsEventSchedulesAndResultsEventInstanceMappingJSON is not a number.");
              }
            if (!(json_rational->isInteger()))
              {
                throw("The value for an element of field ParticipantsIndices of SportsOlympicsEventSchedulesAndResultsEventInstanceMappingJSON is not an integer.");
              }
            extracted_integer = OInteger(json_rational->getInteger())        ;
          }
        else
          {
            extracted_integer = OInteger(json_integer->getData())        ;
          }
        vector_ParticipantsIndices1[num1] = extracted_integer;
      }
    initParticipantsIndices();
    for (size_t num4 = 0; num4 < vector_ParticipantsIndices1.size(); ++num4)
        appendParticipantsIndices(vector_ParticipantsIndices1[num4]);
    for (size_t num1 = 0; num1 < vector_ParticipantsIndices1.size(); ++num1)
      {
      }
  }

SportsOlympicsEventSchedulesAndResultsEventInstanceMappingJSON::SportsOlympicsEventSchedulesAndResultsEventInstanceMappingJSON(void) :
        flagHasEventInstancesIndex(false),
        flagHasMedalWinnersIndices(false),
        flagHasParticipantsIndices(false)
  {
    extraIndex = create_string_index();
  }

SportsOlympicsEventSchedulesAndResultsEventInstanceMappingJSON::~SportsOlympicsEventSchedulesAndResultsEventInstanceMappingJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool SportsOlympicsEventSchedulesAndResultsEventInstanceMappingJSON::hasEventInstancesIndex(void) const
  {
    return flagHasEventInstancesIndex;
  }

OInteger SportsOlympicsEventSchedulesAndResultsEventInstanceMappingJSON::getEventInstancesIndex(void)
  {
    assert(flagHasEventInstancesIndex);
    return storeEventInstancesIndex;
  }

const OInteger SportsOlympicsEventSchedulesAndResultsEventInstanceMappingJSON::getEventInstancesIndex(void) const
  {
    assert(flagHasEventInstancesIndex);
    return storeEventInstancesIndex;
  }

bool SportsOlympicsEventSchedulesAndResultsEventInstanceMappingJSON::hasMedalWinnersIndices(void) const
  {
    return flagHasMedalWinnersIndices;
  }

size_t SportsOlympicsEventSchedulesAndResultsEventInstanceMappingJSON::countOfMedalWinnersIndices(void) const
  {
    assert(flagHasMedalWinnersIndices);
    return storeMedalWinnersIndices.size();
  }

OInteger SportsOlympicsEventSchedulesAndResultsEventInstanceMappingJSON::elementOfMedalWinnersIndices(size_t element_num)
  {
    assert(flagHasMedalWinnersIndices);
    return storeMedalWinnersIndices[element_num];
  }

const OInteger SportsOlympicsEventSchedulesAndResultsEventInstanceMappingJSON::elementOfMedalWinnersIndices(size_t element_num) const
  {
    assert(flagHasMedalWinnersIndices);
    return storeMedalWinnersIndices[element_num];
  }

std::vector< OInteger > SportsOlympicsEventSchedulesAndResultsEventInstanceMappingJSON::getMedalWinnersIndices(void)
  {
    assert(flagHasMedalWinnersIndices);
    return storeMedalWinnersIndices;
  }

const std::vector< OInteger > SportsOlympicsEventSchedulesAndResultsEventInstanceMappingJSON::getMedalWinnersIndices(void) const
  {
    assert(flagHasMedalWinnersIndices);
    return storeMedalWinnersIndices;
  }

bool SportsOlympicsEventSchedulesAndResultsEventInstanceMappingJSON::hasParticipantsIndices(void) const
  {
    return flagHasParticipantsIndices;
  }

size_t SportsOlympicsEventSchedulesAndResultsEventInstanceMappingJSON::countOfParticipantsIndices(void) const
  {
    assert(flagHasParticipantsIndices);
    return storeParticipantsIndices.size();
  }

OInteger SportsOlympicsEventSchedulesAndResultsEventInstanceMappingJSON::elementOfParticipantsIndices(size_t element_num)
  {
    assert(flagHasParticipantsIndices);
    return storeParticipantsIndices[element_num];
  }

const OInteger SportsOlympicsEventSchedulesAndResultsEventInstanceMappingJSON::elementOfParticipantsIndices(size_t element_num) const
  {
    assert(flagHasParticipantsIndices);
    return storeParticipantsIndices[element_num];
  }

std::vector< OInteger > SportsOlympicsEventSchedulesAndResultsEventInstanceMappingJSON::getParticipantsIndices(void)
  {
    assert(flagHasParticipantsIndices);
    return storeParticipantsIndices;
  }

const std::vector< OInteger > SportsOlympicsEventSchedulesAndResultsEventInstanceMappingJSON::getParticipantsIndices(void) const
  {
    assert(flagHasParticipantsIndices);
    return storeParticipantsIndices;
  }

char SportsOlympicsEventSchedulesAndResultsEventInstanceMappingJSON::Generator::lowerBoundEventInstancesIndex[] = "0";
char SportsOlympicsEventSchedulesAndResultsEventInstanceMappingJSON::Generator::lowerBoundMedalWinnersIndices[] = "0";
char SportsOlympicsEventSchedulesAndResultsEventInstanceMappingJSON::Generator::lowerBoundParticipantsIndices[] = "0";
SportsOlympicsEventSchedulesAndResultsEventInstanceMappingJSON *SportsOlympicsEventSchedulesAndResultsEventInstanceMappingJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    SportsOlympicsEventSchedulesAndResultsEventInstanceMappingJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<SportsOlympicsEventSchedulesAndResultsEventInstanceMappingJSON>, SportsOlympicsEventSchedulesAndResultsEventInstanceMappingJSON *, bool> generator("Type SportsOlympicsEventSchedulesAndResultsEventInstanceMapping", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
