/* file "SportsOlympicsEventSchedulesAndResultsArgumentQueryTypeJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "SportsOlympicsEventSchedulesAndResultsArgumentQueryTypeJSON.h"

#include "SportsOlympicsEventSchedulesAndResultsArgumentQueryTypeJSON.h"


SportsOlympicsEventSchedulesAndResultsArgumentQueryTypeJSON::SportsOlympicsEventSchedulesAndResultsArgumentQueryTypeJSON(const SportsOlympicsEventSchedulesAndResultsArgumentQueryTypeJSON &)
  {
    assert(false);
  }

SportsOlympicsEventSchedulesAndResultsArgumentQueryTypeJSON &SportsOlympicsEventSchedulesAndResultsArgumentQueryTypeJSON::operator=(const SportsOlympicsEventSchedulesAndResultsArgumentQueryTypeJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *SportsOlympicsEventSchedulesAndResultsArgumentQueryTypeJSON::extraTypeToJSON(void) const
  {
    JSONValueHandler handler_Type;
    storeType->write_as_json(&handler_Type);
    handler_Type.result->add_reference();
    return handler_Type.result;
  }

void SportsOlympicsEventSchedulesAndResultsArgumentQueryTypeJSON::fromJSONType(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    SportsOlympicsEventSchedulesAndResultsQueryTypeJSON *convert_classy = SportsOlympicsEventSchedulesAndResultsQueryTypeJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setType(convert_classy);
    convert_classy->remove_reference();
  }

SportsOlympicsEventSchedulesAndResultsArgumentQueryTypeJSON::SportsOlympicsEventSchedulesAndResultsArgumentQueryTypeJSON(void) :
        flagHasType(false)
  {
    extraIndex = create_string_index();
  }

SportsOlympicsEventSchedulesAndResultsArgumentQueryTypeJSON::~SportsOlympicsEventSchedulesAndResultsArgumentQueryTypeJSON(void)
  {
    if (flagHasType)
      {
        storeType->remove_reference();
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *SportsOlympicsEventSchedulesAndResultsArgumentQueryTypeJSON::getSportsOlympicsEventSchedulesAndResultsArgumentKind(void) const
  {
    return "QueryType";
  }

bool SportsOlympicsEventSchedulesAndResultsArgumentQueryTypeJSON::hasType(void) const
  {
    return flagHasType;
  }

SportsOlympicsEventSchedulesAndResultsQueryTypeJSON * SportsOlympicsEventSchedulesAndResultsArgumentQueryTypeJSON::getType(void)
  {
    assert(flagHasType);
    return storeType;
  }

const SportsOlympicsEventSchedulesAndResultsQueryTypeJSON * SportsOlympicsEventSchedulesAndResultsArgumentQueryTypeJSON::getType(void) const
  {
    assert(flagHasType);
    return storeType;
  }

SportsOlympicsEventSchedulesAndResultsQueryTypeJSON::TypeValue SportsOlympicsEventSchedulesAndResultsArgumentQueryTypeJSON::getTypeValue(void)
  {
    return getType()->getValue();
  }

const SportsOlympicsEventSchedulesAndResultsQueryTypeJSON::TypeValue SportsOlympicsEventSchedulesAndResultsArgumentQueryTypeJSON::getTypeValue(void) const
  {
    return getType()->getValue();
  }

const char *SportsOlympicsEventSchedulesAndResultsArgumentQueryTypeJSON::getTypeAsChars(void) const
  {
    return getType()->getValueAsChars();
  }

std::string SportsOlympicsEventSchedulesAndResultsArgumentQueryTypeJSON::getTypeAsString(void) const
  {
    return getType()->getValueAsString();
  }

SportsOlympicsEventSchedulesAndResultsArgumentQueryTypeJSON *SportsOlympicsEventSchedulesAndResultsArgumentQueryTypeJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    SportsOlympicsEventSchedulesAndResultsArgumentQueryTypeJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<SportsOlympicsEventSchedulesAndResultsArgumentQueryTypeJSON>, SportsOlympicsEventSchedulesAndResultsArgumentQueryTypeJSON *, bool> generator("Type SportsOlympicsEventSchedulesAndResultsArgumentQueryType", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
