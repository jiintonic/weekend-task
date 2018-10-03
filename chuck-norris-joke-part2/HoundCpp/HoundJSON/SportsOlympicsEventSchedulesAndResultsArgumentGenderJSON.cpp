/* file "SportsOlympicsEventSchedulesAndResultsArgumentGenderJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "SportsOlympicsEventSchedulesAndResultsArgumentGenderJSON.h"

#include "SportsOlympicsEventSchedulesAndResultsArgumentGenderJSON.h"


SportsOlympicsEventSchedulesAndResultsArgumentGenderJSON::SportsOlympicsEventSchedulesAndResultsArgumentGenderJSON(const SportsOlympicsEventSchedulesAndResultsArgumentGenderJSON &)
  {
    assert(false);
  }

SportsOlympicsEventSchedulesAndResultsArgumentGenderJSON &SportsOlympicsEventSchedulesAndResultsArgumentGenderJSON::operator=(const SportsOlympicsEventSchedulesAndResultsArgumentGenderJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *SportsOlympicsEventSchedulesAndResultsArgumentGenderJSON::extraGenderToJSON(void) const
  {
    JSONValueHandler handler_Gender;
    storeGender->write_as_json(&handler_Gender);
    handler_Gender.result->add_reference();
    return handler_Gender.result;
  }

void SportsOlympicsEventSchedulesAndResultsArgumentGenderJSON::fromJSONGender(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    SportsOlympicsGenderJSON *convert_classy = SportsOlympicsGenderJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setGender(convert_classy);
    convert_classy->remove_reference();
  }

SportsOlympicsEventSchedulesAndResultsArgumentGenderJSON::SportsOlympicsEventSchedulesAndResultsArgumentGenderJSON(void) :
        flagHasGender(false)
  {
    extraIndex = create_string_index();
  }

SportsOlympicsEventSchedulesAndResultsArgumentGenderJSON::~SportsOlympicsEventSchedulesAndResultsArgumentGenderJSON(void)
  {
    if (flagHasGender)
      {
        storeGender->remove_reference();
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *SportsOlympicsEventSchedulesAndResultsArgumentGenderJSON::getSportsOlympicsEventSchedulesAndResultsArgumentKind(void) const
  {
    return "Gender";
  }

bool SportsOlympicsEventSchedulesAndResultsArgumentGenderJSON::hasGender(void) const
  {
    return flagHasGender;
  }

SportsOlympicsGenderJSON * SportsOlympicsEventSchedulesAndResultsArgumentGenderJSON::getGender(void)
  {
    assert(flagHasGender);
    return storeGender;
  }

const SportsOlympicsGenderJSON * SportsOlympicsEventSchedulesAndResultsArgumentGenderJSON::getGender(void) const
  {
    assert(flagHasGender);
    return storeGender;
  }

SportsOlympicsGenderJSON::TypeValue SportsOlympicsEventSchedulesAndResultsArgumentGenderJSON::getGenderValue(void)
  {
    return getGender()->getValue();
  }

const SportsOlympicsGenderJSON::TypeValue SportsOlympicsEventSchedulesAndResultsArgumentGenderJSON::getGenderValue(void) const
  {
    return getGender()->getValue();
  }

const char *SportsOlympicsEventSchedulesAndResultsArgumentGenderJSON::getGenderAsChars(void) const
  {
    return getGender()->getValueAsChars();
  }

std::string SportsOlympicsEventSchedulesAndResultsArgumentGenderJSON::getGenderAsString(void) const
  {
    return getGender()->getValueAsString();
  }

SportsOlympicsEventSchedulesAndResultsArgumentGenderJSON *SportsOlympicsEventSchedulesAndResultsArgumentGenderJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    SportsOlympicsEventSchedulesAndResultsArgumentGenderJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<SportsOlympicsEventSchedulesAndResultsArgumentGenderJSON>, SportsOlympicsEventSchedulesAndResultsArgumentGenderJSON *, bool> generator("Type SportsOlympicsEventSchedulesAndResultsArgumentGender", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
