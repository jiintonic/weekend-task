/* file "SportsOlympicsEventSchedulesAndResultsArgumentEventJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "SportsOlympicsEventSchedulesAndResultsArgumentEventJSON.h"

#include "SportsOlympicsEventSchedulesAndResultsArgumentEventJSON.h"


SportsOlympicsEventSchedulesAndResultsArgumentEventJSON::SportsOlympicsEventSchedulesAndResultsArgumentEventJSON(const SportsOlympicsEventSchedulesAndResultsArgumentEventJSON &)
  {
    assert(false);
  }

SportsOlympicsEventSchedulesAndResultsArgumentEventJSON &SportsOlympicsEventSchedulesAndResultsArgumentEventJSON::operator=(const SportsOlympicsEventSchedulesAndResultsArgumentEventJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *SportsOlympicsEventSchedulesAndResultsArgumentEventJSON::extraEventsToJSON(void) const
  {
    JSONArrayValue *generated_array_1_Events = new JSONArrayValue();
    for (size_t num1 = 0; num1 < storeEvents.size(); ++num1)
      {
        JSONValueHandler handler_Events;
        storeEvents[num1]->write_as_json(&handler_Events);
        handler_Events.result->add_reference();
        generated_array_1_Events->appendComponent(handler_Events.result);
        handler_Events.result->remove_reference();
      }
    return generated_array_1_Events;
  }

void SportsOlympicsEventSchedulesAndResultsArgumentEventJSON::fromJSONEvents(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field Events of SportsOlympicsEventSchedulesAndResultsArgumentEventJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    if (count1 < 1)
        throw("The value for field Events of SportsOlympicsEventSchedulesAndResultsArgumentEventJSON has too few elements.");
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

SportsOlympicsEventSchedulesAndResultsArgumentEventJSON::SportsOlympicsEventSchedulesAndResultsArgumentEventJSON(void) :
        flagHasEvents(false)
  {
    extraIndex = create_string_index();
  }

SportsOlympicsEventSchedulesAndResultsArgumentEventJSON::~SportsOlympicsEventSchedulesAndResultsArgumentEventJSON(void)
  {
    if (flagHasEvents)
      {
        for (size_t num4 = 0; num4 < storeEvents.size(); ++num4)
          {
            storeEvents[num4]->remove_reference();
          }
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *SportsOlympicsEventSchedulesAndResultsArgumentEventJSON::getSportsOlympicsEventSchedulesAndResultsArgumentKind(void) const
  {
    return "Event";
  }

bool SportsOlympicsEventSchedulesAndResultsArgumentEventJSON::hasEvents(void) const
  {
    return flagHasEvents;
  }

size_t SportsOlympicsEventSchedulesAndResultsArgumentEventJSON::countOfEvents(void) const
  {
    assert(flagHasEvents);
    return storeEvents.size();
  }

SportsOlympicsEventJSON * SportsOlympicsEventSchedulesAndResultsArgumentEventJSON::elementOfEvents(size_t element_num)
  {
    assert(flagHasEvents);
    return storeEvents[element_num];
  }

const SportsOlympicsEventJSON * SportsOlympicsEventSchedulesAndResultsArgumentEventJSON::elementOfEvents(size_t element_num) const
  {
    assert(flagHasEvents);
    return storeEvents[element_num];
  }

std::vector< SportsOlympicsEventJSON * > SportsOlympicsEventSchedulesAndResultsArgumentEventJSON::getEvents(void)
  {
    assert(flagHasEvents);
    return storeEvents;
  }

const std::vector< SportsOlympicsEventJSON * > SportsOlympicsEventSchedulesAndResultsArgumentEventJSON::getEvents(void) const
  {
    assert(flagHasEvents);
    return storeEvents;
  }

SportsOlympicsEventSchedulesAndResultsArgumentEventJSON *SportsOlympicsEventSchedulesAndResultsArgumentEventJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    SportsOlympicsEventSchedulesAndResultsArgumentEventJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<SportsOlympicsEventSchedulesAndResultsArgumentEventJSON>, SportsOlympicsEventSchedulesAndResultsArgumentEventJSON *, bool> generator("Type SportsOlympicsEventSchedulesAndResultsArgumentEvent", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
