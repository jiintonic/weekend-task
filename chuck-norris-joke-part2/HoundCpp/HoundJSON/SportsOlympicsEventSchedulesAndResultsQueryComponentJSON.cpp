/* file "SportsOlympicsEventSchedulesAndResultsQueryComponentJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "SportsOlympicsEventSchedulesAndResultsQueryComponentJSON.h"

#include "SportsOlympicsEventSchedulesAndResultsQueryComponentJSON.h"


SportsOlympicsEventSchedulesAndResultsQueryComponentJSON::SportsOlympicsEventSchedulesAndResultsQueryComponentJSON(const SportsOlympicsEventSchedulesAndResultsQueryComponentJSON &)
  {
    assert(false);
  }

SportsOlympicsEventSchedulesAndResultsQueryComponentJSON &SportsOlympicsEventSchedulesAndResultsQueryComponentJSON::operator=(const SportsOlympicsEventSchedulesAndResultsQueryComponentJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void SportsOlympicsEventSchedulesAndResultsQueryComponentJSON::fromJSONQueryType(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    SportsOlympicsEventSchedulesAndResultsQueryTypeJSON *convert_classy = SportsOlympicsEventSchedulesAndResultsQueryTypeJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setQueryType(convert_classy);
    convert_classy->remove_reference();
  }

void SportsOlympicsEventSchedulesAndResultsQueryComponentJSON::fromJSONEvents(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field Events of SportsOlympicsEventSchedulesAndResultsQueryComponentJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    if (count1 < 1)
        throw("The value for field Events of SportsOlympicsEventSchedulesAndResultsQueryComponentJSON has too few elements.");
    std::vector< SportsOlympicsEventJSON * > vector_Events1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        SportsOlympicsEventJSON *convert_classy = SportsOlympicsEventJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_Events1[num1] = convert_classy;
      }
    assert(vector_Events1.size() >= 1);
    initEvents();
    for (size_t num2 = 0; num2 < vector_Events1.size(); ++num2)
        appendEvents(vector_Events1[num2]);
    for (size_t num1 = 0; num1 < vector_Events1.size(); ++num1)
      {
        vector_Events1[num1]->remove_reference();
      }
  }

void SportsOlympicsEventSchedulesAndResultsQueryComponentJSON::fromJSONGames(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    SportsOlympicsGamesJSON *convert_classy = SportsOlympicsGamesJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setGames(convert_classy);
    convert_classy->remove_reference();
  }

void SportsOlympicsEventSchedulesAndResultsQueryComponentJSON::fromJSONRank(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field Rank of SportsOlympicsEventSchedulesAndResultsQueryComponentJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field Rank of SportsOlympicsEventSchedulesAndResultsQueryComponentJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setRank(extracted_integer);
  }

void SportsOlympicsEventSchedulesAndResultsQueryComponentJSON::fromJSONDateTimeRange(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DateTimeRangeSpecJSON *convert_classy = DateTimeRangeSpecJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setDateTimeRange(convert_classy);
    convert_classy->remove_reference();
  }

SportsOlympicsEventSchedulesAndResultsQueryComponentJSON::SportsOlympicsEventSchedulesAndResultsQueryComponentJSON(void) :
        flagHasQueryType(false),
        flagHasEvents(false),
        flagHasGames(false),
        flagHasRank(false),
        flagHasDateTimeRange(false)
  {
    extraIndex = create_string_index();
  }

SportsOlympicsEventSchedulesAndResultsQueryComponentJSON::~SportsOlympicsEventSchedulesAndResultsQueryComponentJSON(void)
  {
    if (flagHasQueryType)
      {
        storeQueryType->remove_reference();
      }
    if (flagHasEvents)
      {
        for (size_t num4 = 0; num4 < storeEvents.size(); ++num4)
          {
            storeEvents[num4]->remove_reference();
          }
      }
    if (flagHasGames)
      {
        storeGames->remove_reference();
      }
    if (flagHasDateTimeRange)
      {
        storeDateTimeRange->remove_reference();
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool SportsOlympicsEventSchedulesAndResultsQueryComponentJSON::hasQueryType(void) const
  {
    return flagHasQueryType;
  }

SportsOlympicsEventSchedulesAndResultsQueryTypeJSON * SportsOlympicsEventSchedulesAndResultsQueryComponentJSON::getQueryType(void)
  {
    assert(flagHasQueryType);
    return storeQueryType;
  }

const SportsOlympicsEventSchedulesAndResultsQueryTypeJSON * SportsOlympicsEventSchedulesAndResultsQueryComponentJSON::getQueryType(void) const
  {
    assert(flagHasQueryType);
    return storeQueryType;
  }

SportsOlympicsEventSchedulesAndResultsQueryTypeJSON::TypeValue SportsOlympicsEventSchedulesAndResultsQueryComponentJSON::getQueryTypeValue(void)
  {
    return getQueryType()->getValue();
  }

const SportsOlympicsEventSchedulesAndResultsQueryTypeJSON::TypeValue SportsOlympicsEventSchedulesAndResultsQueryComponentJSON::getQueryTypeValue(void) const
  {
    return getQueryType()->getValue();
  }

const char *SportsOlympicsEventSchedulesAndResultsQueryComponentJSON::getQueryTypeAsChars(void) const
  {
    return getQueryType()->getValueAsChars();
  }

std::string SportsOlympicsEventSchedulesAndResultsQueryComponentJSON::getQueryTypeAsString(void) const
  {
    return getQueryType()->getValueAsString();
  }

bool SportsOlympicsEventSchedulesAndResultsQueryComponentJSON::hasEvents(void) const
  {
    return flagHasEvents;
  }

size_t SportsOlympicsEventSchedulesAndResultsQueryComponentJSON::countOfEvents(void) const
  {
    assert(flagHasEvents);
    return storeEvents.size();
  }

SportsOlympicsEventJSON * SportsOlympicsEventSchedulesAndResultsQueryComponentJSON::elementOfEvents(size_t element_num)
  {
    assert(flagHasEvents);
    return storeEvents[element_num];
  }

const SportsOlympicsEventJSON * SportsOlympicsEventSchedulesAndResultsQueryComponentJSON::elementOfEvents(size_t element_num) const
  {
    assert(flagHasEvents);
    return storeEvents[element_num];
  }

std::vector< SportsOlympicsEventJSON * > SportsOlympicsEventSchedulesAndResultsQueryComponentJSON::getEvents(void)
  {
    assert(flagHasEvents);
    return storeEvents;
  }

const std::vector< SportsOlympicsEventJSON * > SportsOlympicsEventSchedulesAndResultsQueryComponentJSON::getEvents(void) const
  {
    assert(flagHasEvents);
    return storeEvents;
  }

bool SportsOlympicsEventSchedulesAndResultsQueryComponentJSON::hasGames(void) const
  {
    return flagHasGames;
  }

SportsOlympicsGamesJSON * SportsOlympicsEventSchedulesAndResultsQueryComponentJSON::getGames(void)
  {
    assert(flagHasGames);
    return storeGames;
  }

const SportsOlympicsGamesJSON * SportsOlympicsEventSchedulesAndResultsQueryComponentJSON::getGames(void) const
  {
    assert(flagHasGames);
    return storeGames;
  }

bool SportsOlympicsEventSchedulesAndResultsQueryComponentJSON::hasRank(void) const
  {
    return flagHasRank;
  }

OInteger SportsOlympicsEventSchedulesAndResultsQueryComponentJSON::getRank(void)
  {
    assert(flagHasRank);
    return storeRank;
  }

const OInteger SportsOlympicsEventSchedulesAndResultsQueryComponentJSON::getRank(void) const
  {
    assert(flagHasRank);
    return storeRank;
  }

bool SportsOlympicsEventSchedulesAndResultsQueryComponentJSON::hasDateTimeRange(void) const
  {
    return flagHasDateTimeRange;
  }

DateTimeRangeSpecJSON * SportsOlympicsEventSchedulesAndResultsQueryComponentJSON::getDateTimeRange(void)
  {
    assert(flagHasDateTimeRange);
    return storeDateTimeRange;
  }

const DateTimeRangeSpecJSON * SportsOlympicsEventSchedulesAndResultsQueryComponentJSON::getDateTimeRange(void) const
  {
    assert(flagHasDateTimeRange);
    return storeDateTimeRange;
  }

char SportsOlympicsEventSchedulesAndResultsQueryComponentJSON::Generator::lowerBoundRank[] = "1";
SportsOlympicsEventSchedulesAndResultsQueryComponentJSON *SportsOlympicsEventSchedulesAndResultsQueryComponentJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    SportsOlympicsEventSchedulesAndResultsQueryComponentJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<SportsOlympicsEventSchedulesAndResultsQueryComponentJSON>, SportsOlympicsEventSchedulesAndResultsQueryComponentJSON *, bool> generator("Type SportsOlympicsEventSchedulesAndResultsQueryComponent", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
