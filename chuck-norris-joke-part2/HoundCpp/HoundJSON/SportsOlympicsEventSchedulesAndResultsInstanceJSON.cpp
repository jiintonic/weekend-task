/* file "SportsOlympicsEventSchedulesAndResultsInstanceJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "SportsOlympicsEventSchedulesAndResultsInstanceJSON.h"

#include "SportsOlympicsEventSchedulesAndResultsInstanceJSON.h"


SportsOlympicsEventSchedulesAndResultsInstanceJSON::SportsOlympicsEventSchedulesAndResultsInstanceJSON(const SportsOlympicsEventSchedulesAndResultsInstanceJSON &)
  {
    assert(false);
  }

SportsOlympicsEventSchedulesAndResultsInstanceJSON &SportsOlympicsEventSchedulesAndResultsInstanceJSON::operator=(const SportsOlympicsEventSchedulesAndResultsInstanceJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void SportsOlympicsEventSchedulesAndResultsInstanceJSON::fromJSONEvent(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    SportsOlympicsEventJSON *convert_classy = SportsOlympicsEventJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setEvent(convert_classy);
    convert_classy->remove_reference();
  }

void SportsOlympicsEventSchedulesAndResultsInstanceJSON::fromJSONEventCategory(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    SportsOlympicsEventCategoryJSON *convert_classy = SportsOlympicsEventCategoryJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setEventCategory(convert_classy);
    convert_classy->remove_reference();
  }

void SportsOlympicsEventSchedulesAndResultsInstanceJSON::fromJSONInstanceDescription(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field InstanceDescription of SportsOlympicsEventSchedulesAndResultsInstanceJSON is not a string.");
    setInstanceDescription(std::string(json_string->getData()));
  }

void SportsOlympicsEventSchedulesAndResultsInstanceJSON::fromJSONGames(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    SportsOlympicsGamesJSON *convert_classy = SportsOlympicsGamesJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setGames(convert_classy);
    convert_classy->remove_reference();
  }

void SportsOlympicsEventSchedulesAndResultsInstanceJSON::fromJSONMedalEvent(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field MedalEvent of SportsOlympicsEventSchedulesAndResultsInstanceJSON is not true for false.");
          }
      }
    setMedalEvent(the_bool);
  }

void SportsOlympicsEventSchedulesAndResultsInstanceJSON::fromJSONGeneralSummary(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field GeneralSummary of SportsOlympicsEventSchedulesAndResultsInstanceJSON is not true for false.");
          }
      }
    setGeneralSummary(the_bool);
  }

void SportsOlympicsEventSchedulesAndResultsInstanceJSON::fromJSONStartTime(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DateAndOrTimeJSON *convert_classy = DateAndOrTimeJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setStartTime(convert_classy);
    convert_classy->remove_reference();
  }

void SportsOlympicsEventSchedulesAndResultsInstanceJSON::fromJSONMedalWinners(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field MedalWinners of SportsOlympicsEventSchedulesAndResultsInstanceJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< SportsOlympicsEventSchedulesAndResultsInstanceMedalWinnerJSON * > vector_MedalWinners1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        SportsOlympicsEventSchedulesAndResultsInstanceMedalWinnerJSON *convert_classy = SportsOlympicsEventSchedulesAndResultsInstanceMedalWinnerJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_MedalWinners1[num1] = convert_classy;
      }
    initMedalWinners();
    for (size_t num3 = 0; num3 < vector_MedalWinners1.size(); ++num3)
        appendMedalWinners(vector_MedalWinners1[num3]);
    for (size_t num1 = 0; num1 < vector_MedalWinners1.size(); ++num1)
      {
        vector_MedalWinners1[num1]->remove_reference();
      }
  }

void SportsOlympicsEventSchedulesAndResultsInstanceJSON::fromJSONParticipants(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field Participants of SportsOlympicsEventSchedulesAndResultsInstanceJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< SportsOlympicsEventSchedulesAndResultsInstanceParticipantJSON * > vector_Participants1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        SportsOlympicsEventSchedulesAndResultsInstanceParticipantJSON *convert_classy = SportsOlympicsEventSchedulesAndResultsInstanceParticipantJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_Participants1[num1] = convert_classy;
      }
    initParticipants();
    for (size_t num4 = 0; num4 < vector_Participants1.size(); ++num4)
        appendParticipants(vector_Participants1[num4]);
    for (size_t num1 = 0; num1 < vector_Participants1.size(); ++num1)
      {
        vector_Participants1[num1]->remove_reference();
      }
  }

void SportsOlympicsEventSchedulesAndResultsInstanceJSON::fromJSONUpcoming(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field Upcoming of SportsOlympicsEventSchedulesAndResultsInstanceJSON is not true for false.");
          }
      }
    setUpcoming(the_bool);
  }

SportsOlympicsEventSchedulesAndResultsInstanceJSON::SportsOlympicsEventSchedulesAndResultsInstanceJSON(void) :
        flagHasEvent(false),
        flagHasEventCategory(false),
        flagHasInstanceDescription(false),
        flagHasGames(false),
        flagHasMedalEvent(false),
        flagHasGeneralSummary(false),
        flagHasStartTime(false),
        flagHasMedalWinners(false),
        flagHasParticipants(false),
        flagHasUpcoming(false)
  {
    extraIndex = create_string_index();
  }

SportsOlympicsEventSchedulesAndResultsInstanceJSON::~SportsOlympicsEventSchedulesAndResultsInstanceJSON(void)
  {
    if (flagHasEvent)
      {
        storeEvent->remove_reference();
      }
    if (flagHasEventCategory)
      {
        storeEventCategory->remove_reference();
      }
    if (flagHasGames)
      {
        storeGames->remove_reference();
      }
    if (flagHasStartTime)
      {
        storeStartTime->remove_reference();
      }
    if (flagHasMedalWinners)
      {
        for (size_t num7 = 0; num7 < storeMedalWinners.size(); ++num7)
          {
            storeMedalWinners[num7]->remove_reference();
          }
      }
    if (flagHasParticipants)
      {
        for (size_t num8 = 0; num8 < storeParticipants.size(); ++num8)
          {
            storeParticipants[num8]->remove_reference();
          }
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool SportsOlympicsEventSchedulesAndResultsInstanceJSON::hasEvent(void) const
  {
    return flagHasEvent;
  }

SportsOlympicsEventJSON * SportsOlympicsEventSchedulesAndResultsInstanceJSON::getEvent(void)
  {
    assert(flagHasEvent);
    return storeEvent;
  }

const SportsOlympicsEventJSON * SportsOlympicsEventSchedulesAndResultsInstanceJSON::getEvent(void) const
  {
    assert(flagHasEvent);
    return storeEvent;
  }

SportsOlympicsEventJSON::TypeValue SportsOlympicsEventSchedulesAndResultsInstanceJSON::getEventValue(void)
  {
    return getEvent()->getValue();
  }

const SportsOlympicsEventJSON::TypeValue SportsOlympicsEventSchedulesAndResultsInstanceJSON::getEventValue(void) const
  {
    return getEvent()->getValue();
  }

const char *SportsOlympicsEventSchedulesAndResultsInstanceJSON::getEventAsChars(void) const
  {
    return getEvent()->getValueAsChars();
  }

std::string SportsOlympicsEventSchedulesAndResultsInstanceJSON::getEventAsString(void) const
  {
    return getEvent()->getValueAsString();
  }

bool SportsOlympicsEventSchedulesAndResultsInstanceJSON::hasEventCategory(void) const
  {
    return flagHasEventCategory;
  }

SportsOlympicsEventCategoryJSON * SportsOlympicsEventSchedulesAndResultsInstanceJSON::getEventCategory(void)
  {
    assert(flagHasEventCategory);
    return storeEventCategory;
  }

const SportsOlympicsEventCategoryJSON * SportsOlympicsEventSchedulesAndResultsInstanceJSON::getEventCategory(void) const
  {
    assert(flagHasEventCategory);
    return storeEventCategory;
  }

SportsOlympicsEventCategoryJSON::TypeValue SportsOlympicsEventSchedulesAndResultsInstanceJSON::getEventCategoryValue(void)
  {
    return getEventCategory()->getValue();
  }

const SportsOlympicsEventCategoryJSON::TypeValue SportsOlympicsEventSchedulesAndResultsInstanceJSON::getEventCategoryValue(void) const
  {
    return getEventCategory()->getValue();
  }

const char *SportsOlympicsEventSchedulesAndResultsInstanceJSON::getEventCategoryAsChars(void) const
  {
    return getEventCategory()->getValueAsChars();
  }

std::string SportsOlympicsEventSchedulesAndResultsInstanceJSON::getEventCategoryAsString(void) const
  {
    return getEventCategory()->getValueAsString();
  }

bool SportsOlympicsEventSchedulesAndResultsInstanceJSON::hasInstanceDescription(void) const
  {
    return flagHasInstanceDescription;
  }

std::string SportsOlympicsEventSchedulesAndResultsInstanceJSON::getInstanceDescription(void)
  {
    assert(flagHasInstanceDescription);
    return storeInstanceDescription;
  }

const std::string SportsOlympicsEventSchedulesAndResultsInstanceJSON::getInstanceDescription(void) const
  {
    assert(flagHasInstanceDescription);
    return storeInstanceDescription;
  }

bool SportsOlympicsEventSchedulesAndResultsInstanceJSON::hasGames(void) const
  {
    return flagHasGames;
  }

SportsOlympicsGamesJSON * SportsOlympicsEventSchedulesAndResultsInstanceJSON::getGames(void)
  {
    assert(flagHasGames);
    return storeGames;
  }

const SportsOlympicsGamesJSON * SportsOlympicsEventSchedulesAndResultsInstanceJSON::getGames(void) const
  {
    assert(flagHasGames);
    return storeGames;
  }

bool SportsOlympicsEventSchedulesAndResultsInstanceJSON::hasMedalEvent(void) const
  {
    return flagHasMedalEvent;
  }

bool SportsOlympicsEventSchedulesAndResultsInstanceJSON::getMedalEvent(void)
  {
    assert(flagHasMedalEvent);
    return storeMedalEvent;
  }

const bool SportsOlympicsEventSchedulesAndResultsInstanceJSON::getMedalEvent(void) const
  {
    assert(flagHasMedalEvent);
    return storeMedalEvent;
  }

bool SportsOlympicsEventSchedulesAndResultsInstanceJSON::hasGeneralSummary(void) const
  {
    return flagHasGeneralSummary;
  }

bool SportsOlympicsEventSchedulesAndResultsInstanceJSON::getGeneralSummary(void)
  {
    assert(flagHasGeneralSummary);
    return storeGeneralSummary;
  }

const bool SportsOlympicsEventSchedulesAndResultsInstanceJSON::getGeneralSummary(void) const
  {
    assert(flagHasGeneralSummary);
    return storeGeneralSummary;
  }

bool SportsOlympicsEventSchedulesAndResultsInstanceJSON::hasStartTime(void) const
  {
    return flagHasStartTime;
  }

DateAndOrTimeJSON * SportsOlympicsEventSchedulesAndResultsInstanceJSON::getStartTime(void)
  {
    assert(flagHasStartTime);
    return storeStartTime;
  }

const DateAndOrTimeJSON * SportsOlympicsEventSchedulesAndResultsInstanceJSON::getStartTime(void) const
  {
    assert(flagHasStartTime);
    return storeStartTime;
  }

bool SportsOlympicsEventSchedulesAndResultsInstanceJSON::hasMedalWinners(void) const
  {
    return flagHasMedalWinners;
  }

size_t SportsOlympicsEventSchedulesAndResultsInstanceJSON::countOfMedalWinners(void) const
  {
    assert(flagHasMedalWinners);
    return storeMedalWinners.size();
  }

SportsOlympicsEventSchedulesAndResultsInstanceMedalWinnerJSON * SportsOlympicsEventSchedulesAndResultsInstanceJSON::elementOfMedalWinners(size_t element_num)
  {
    assert(flagHasMedalWinners);
    return storeMedalWinners[element_num];
  }

const SportsOlympicsEventSchedulesAndResultsInstanceMedalWinnerJSON * SportsOlympicsEventSchedulesAndResultsInstanceJSON::elementOfMedalWinners(size_t element_num) const
  {
    assert(flagHasMedalWinners);
    return storeMedalWinners[element_num];
  }

std::vector< SportsOlympicsEventSchedulesAndResultsInstanceMedalWinnerJSON * > SportsOlympicsEventSchedulesAndResultsInstanceJSON::getMedalWinners(void)
  {
    assert(flagHasMedalWinners);
    return storeMedalWinners;
  }

const std::vector< SportsOlympicsEventSchedulesAndResultsInstanceMedalWinnerJSON * > SportsOlympicsEventSchedulesAndResultsInstanceJSON::getMedalWinners(void) const
  {
    assert(flagHasMedalWinners);
    return storeMedalWinners;
  }

bool SportsOlympicsEventSchedulesAndResultsInstanceJSON::hasParticipants(void) const
  {
    return flagHasParticipants;
  }

size_t SportsOlympicsEventSchedulesAndResultsInstanceJSON::countOfParticipants(void) const
  {
    assert(flagHasParticipants);
    return storeParticipants.size();
  }

SportsOlympicsEventSchedulesAndResultsInstanceParticipantJSON * SportsOlympicsEventSchedulesAndResultsInstanceJSON::elementOfParticipants(size_t element_num)
  {
    assert(flagHasParticipants);
    return storeParticipants[element_num];
  }

const SportsOlympicsEventSchedulesAndResultsInstanceParticipantJSON * SportsOlympicsEventSchedulesAndResultsInstanceJSON::elementOfParticipants(size_t element_num) const
  {
    assert(flagHasParticipants);
    return storeParticipants[element_num];
  }

std::vector< SportsOlympicsEventSchedulesAndResultsInstanceParticipantJSON * > SportsOlympicsEventSchedulesAndResultsInstanceJSON::getParticipants(void)
  {
    assert(flagHasParticipants);
    return storeParticipants;
  }

const std::vector< SportsOlympicsEventSchedulesAndResultsInstanceParticipantJSON * > SportsOlympicsEventSchedulesAndResultsInstanceJSON::getParticipants(void) const
  {
    assert(flagHasParticipants);
    return storeParticipants;
  }

bool SportsOlympicsEventSchedulesAndResultsInstanceJSON::hasUpcoming(void) const
  {
    return flagHasUpcoming;
  }

bool SportsOlympicsEventSchedulesAndResultsInstanceJSON::getUpcoming(void)
  {
    assert(flagHasUpcoming);
    return storeUpcoming;
  }

const bool SportsOlympicsEventSchedulesAndResultsInstanceJSON::getUpcoming(void) const
  {
    assert(flagHasUpcoming);
    return storeUpcoming;
  }

SportsOlympicsEventSchedulesAndResultsInstanceJSON *SportsOlympicsEventSchedulesAndResultsInstanceJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    SportsOlympicsEventSchedulesAndResultsInstanceJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<SportsOlympicsEventSchedulesAndResultsInstanceJSON>, SportsOlympicsEventSchedulesAndResultsInstanceJSON *, bool> generator("Type SportsOlympicsEventSchedulesAndResultsInstance", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
