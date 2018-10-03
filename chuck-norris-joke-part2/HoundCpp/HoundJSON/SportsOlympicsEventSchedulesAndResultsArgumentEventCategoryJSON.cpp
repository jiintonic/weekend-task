/* file "SportsOlympicsEventSchedulesAndResultsArgumentEventCategoryJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "SportsOlympicsEventSchedulesAndResultsArgumentEventCategoryJSON.h"

#include "SportsOlympicsEventSchedulesAndResultsArgumentEventCategoryJSON.h"


SportsOlympicsEventSchedulesAndResultsArgumentEventCategoryJSON::SportsOlympicsEventSchedulesAndResultsArgumentEventCategoryJSON(const SportsOlympicsEventSchedulesAndResultsArgumentEventCategoryJSON &)
  {
    assert(false);
  }

SportsOlympicsEventSchedulesAndResultsArgumentEventCategoryJSON &SportsOlympicsEventSchedulesAndResultsArgumentEventCategoryJSON::operator=(const SportsOlympicsEventSchedulesAndResultsArgumentEventCategoryJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *SportsOlympicsEventSchedulesAndResultsArgumentEventCategoryJSON::extraEventCategoriesToJSON(void) const
  {
    JSONArrayValue *generated_array_1_EventCategories = new JSONArrayValue();
    for (size_t num1 = 0; num1 < storeEventCategories.size(); ++num1)
      {
        JSONValueHandler handler_EventCategories;
        storeEventCategories[num1]->write_as_json(&handler_EventCategories);
        handler_EventCategories.result->add_reference();
        generated_array_1_EventCategories->appendComponent(handler_EventCategories.result);
        handler_EventCategories.result->remove_reference();
      }
    return generated_array_1_EventCategories;
  }

void SportsOlympicsEventSchedulesAndResultsArgumentEventCategoryJSON::fromJSONEventCategories(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field EventCategories of SportsOlympicsEventSchedulesAndResultsArgumentEventCategoryJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    if (count1 < 1)
        throw("The value for field EventCategories of SportsOlympicsEventSchedulesAndResultsArgumentEventCategoryJSON has too few elements.");
    std::vector< SportsOlympicsEventCategoryJSON * > vector_EventCategories1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        SportsOlympicsEventCategoryJSON *convert_classy = SportsOlympicsEventCategoryJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_EventCategories1[num1] = convert_classy;
      }
    assert(vector_EventCategories1.size() >= 1);
    initEventCategories();
    for (size_t num2 = 0; num2 < vector_EventCategories1.size(); ++num2)
        appendEventCategories(vector_EventCategories1[num2]);
    for (size_t num1 = 0; num1 < vector_EventCategories1.size(); ++num1)
      {
        vector_EventCategories1[num1]->remove_reference();
      }
  }

SportsOlympicsEventSchedulesAndResultsArgumentEventCategoryJSON::SportsOlympicsEventSchedulesAndResultsArgumentEventCategoryJSON(void) :
        flagHasEventCategories(false)
  {
    extraIndex = create_string_index();
  }

SportsOlympicsEventSchedulesAndResultsArgumentEventCategoryJSON::~SportsOlympicsEventSchedulesAndResultsArgumentEventCategoryJSON(void)
  {
    if (flagHasEventCategories)
      {
        for (size_t num4 = 0; num4 < storeEventCategories.size(); ++num4)
          {
            storeEventCategories[num4]->remove_reference();
          }
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *SportsOlympicsEventSchedulesAndResultsArgumentEventCategoryJSON::getSportsOlympicsEventSchedulesAndResultsArgumentKind(void) const
  {
    return "EventCategory";
  }

bool SportsOlympicsEventSchedulesAndResultsArgumentEventCategoryJSON::hasEventCategories(void) const
  {
    return flagHasEventCategories;
  }

size_t SportsOlympicsEventSchedulesAndResultsArgumentEventCategoryJSON::countOfEventCategories(void) const
  {
    assert(flagHasEventCategories);
    return storeEventCategories.size();
  }

SportsOlympicsEventCategoryJSON * SportsOlympicsEventSchedulesAndResultsArgumentEventCategoryJSON::elementOfEventCategories(size_t element_num)
  {
    assert(flagHasEventCategories);
    return storeEventCategories[element_num];
  }

const SportsOlympicsEventCategoryJSON * SportsOlympicsEventSchedulesAndResultsArgumentEventCategoryJSON::elementOfEventCategories(size_t element_num) const
  {
    assert(flagHasEventCategories);
    return storeEventCategories[element_num];
  }

std::vector< SportsOlympicsEventCategoryJSON * > SportsOlympicsEventSchedulesAndResultsArgumentEventCategoryJSON::getEventCategories(void)
  {
    assert(flagHasEventCategories);
    return storeEventCategories;
  }

const std::vector< SportsOlympicsEventCategoryJSON * > SportsOlympicsEventSchedulesAndResultsArgumentEventCategoryJSON::getEventCategories(void) const
  {
    assert(flagHasEventCategories);
    return storeEventCategories;
  }

SportsOlympicsEventSchedulesAndResultsArgumentEventCategoryJSON *SportsOlympicsEventSchedulesAndResultsArgumentEventCategoryJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    SportsOlympicsEventSchedulesAndResultsArgumentEventCategoryJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<SportsOlympicsEventSchedulesAndResultsArgumentEventCategoryJSON>, SportsOlympicsEventSchedulesAndResultsArgumentEventCategoryJSON *, bool> generator("Type SportsOlympicsEventSchedulesAndResultsArgumentEventCategory", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
