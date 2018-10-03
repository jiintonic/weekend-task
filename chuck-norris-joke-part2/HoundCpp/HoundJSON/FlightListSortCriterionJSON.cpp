/* file "FlightListSortCriterionJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "FlightListSortCriterionJSON.h"

#include "FlightListSortCriterionJSON.h"


FlightListSortCriterionJSON::FlightListSortCriterionJSON(const FlightListSortCriterionJSON &)
  {
    assert(false);
  }

FlightListSortCriterionJSON &FlightListSortCriterionJSON::operator=(const FlightListSortCriterionJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void FlightListSortCriterionJSON::fromJSONSortByField(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    FlightSortFieldJSON *convert_classy = FlightSortFieldJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setSortByField(convert_classy);
    convert_classy->remove_reference();
  }

void FlightListSortCriterionJSON::fromJSONSortOrder(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    SortOrderJSON *convert_classy = SortOrderJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setSortOrder(convert_classy);
    convert_classy->remove_reference();
  }

FlightListSortCriterionJSON::FlightListSortCriterionJSON(void) :
        flagHasSortByField(false),
        flagHasSortOrder(false)
  {
    extraIndex = create_string_index();
  }

FlightListSortCriterionJSON::~FlightListSortCriterionJSON(void)
  {
    if (flagHasSortByField)
      {
        storeSortByField->remove_reference();
      }
    if (flagHasSortOrder)
      {
        storeSortOrder->remove_reference();
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool FlightListSortCriterionJSON::hasSortByField(void) const
  {
    return flagHasSortByField;
  }

FlightSortFieldJSON * FlightListSortCriterionJSON::getSortByField(void)
  {
    assert(flagHasSortByField);
    return storeSortByField;
  }

const FlightSortFieldJSON * FlightListSortCriterionJSON::getSortByField(void) const
  {
    assert(flagHasSortByField);
    return storeSortByField;
  }

FlightSortFieldJSON::TypeValue FlightListSortCriterionJSON::getSortByFieldValue(void)
  {
    return getSortByField()->getValue();
  }

const FlightSortFieldJSON::TypeValue FlightListSortCriterionJSON::getSortByFieldValue(void) const
  {
    return getSortByField()->getValue();
  }

const char *FlightListSortCriterionJSON::getSortByFieldAsChars(void) const
  {
    return getSortByField()->getValueAsChars();
  }

std::string FlightListSortCriterionJSON::getSortByFieldAsString(void) const
  {
    return getSortByField()->getValueAsString();
  }

bool FlightListSortCriterionJSON::hasSortOrder(void) const
  {
    return flagHasSortOrder;
  }

SortOrderJSON * FlightListSortCriterionJSON::getSortOrder(void)
  {
    assert(flagHasSortOrder);
    return storeSortOrder;
  }

const SortOrderJSON * FlightListSortCriterionJSON::getSortOrder(void) const
  {
    assert(flagHasSortOrder);
    return storeSortOrder;
  }

SortOrderJSON::TypeValue FlightListSortCriterionJSON::getSortOrderValue(void)
  {
    return getSortOrder()->getValue();
  }

const SortOrderJSON::TypeValue FlightListSortCriterionJSON::getSortOrderValue(void) const
  {
    return getSortOrder()->getValue();
  }

const char *FlightListSortCriterionJSON::getSortOrderAsChars(void) const
  {
    return getSortOrder()->getValueAsChars();
  }

std::string FlightListSortCriterionJSON::getSortOrderAsString(void) const
  {
    return getSortOrder()->getValueAsString();
  }

FlightListSortCriterionJSON *FlightListSortCriterionJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    FlightListSortCriterionJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<FlightListSortCriterionJSON>, FlightListSortCriterionJSON *, bool> generator("Type FlightListSortCriterion", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
