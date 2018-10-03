/* file "SportsOlympicsBasicAttributeArgumentQueryTypeJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "SportsOlympicsBasicAttributeArgumentQueryTypeJSON.h"

#include "SportsOlympicsBasicAttributeArgumentQueryTypeJSON.h"


SportsOlympicsBasicAttributeArgumentQueryTypeJSON::SportsOlympicsBasicAttributeArgumentQueryTypeJSON(const SportsOlympicsBasicAttributeArgumentQueryTypeJSON &)
  {
    assert(false);
  }

SportsOlympicsBasicAttributeArgumentQueryTypeJSON &SportsOlympicsBasicAttributeArgumentQueryTypeJSON::operator=(const SportsOlympicsBasicAttributeArgumentQueryTypeJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *SportsOlympicsBasicAttributeArgumentQueryTypeJSON::extraTypeToJSON(void) const
  {
    JSONValueHandler handler_Type;
    storeType->write_as_json(&handler_Type);
    handler_Type.result->add_reference();
    return handler_Type.result;
  }

void SportsOlympicsBasicAttributeArgumentQueryTypeJSON::fromJSONType(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    SportsOlympicsBasicAttributeTypeJSON *convert_classy = SportsOlympicsBasicAttributeTypeJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setType(convert_classy);
    convert_classy->remove_reference();
  }

SportsOlympicsBasicAttributeArgumentQueryTypeJSON::SportsOlympicsBasicAttributeArgumentQueryTypeJSON(void) :
        flagHasType(false)
  {
    extraIndex = create_string_index();
  }

SportsOlympicsBasicAttributeArgumentQueryTypeJSON::~SportsOlympicsBasicAttributeArgumentQueryTypeJSON(void)
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

const char *SportsOlympicsBasicAttributeArgumentQueryTypeJSON::getSportsOlympicsBasicAttributeArgumentKind(void) const
  {
    return "QueryType";
  }

bool SportsOlympicsBasicAttributeArgumentQueryTypeJSON::hasType(void) const
  {
    return flagHasType;
  }

SportsOlympicsBasicAttributeTypeJSON * SportsOlympicsBasicAttributeArgumentQueryTypeJSON::getType(void)
  {
    assert(flagHasType);
    return storeType;
  }

const SportsOlympicsBasicAttributeTypeJSON * SportsOlympicsBasicAttributeArgumentQueryTypeJSON::getType(void) const
  {
    assert(flagHasType);
    return storeType;
  }

SportsOlympicsBasicAttributeTypeJSON::TypeValue SportsOlympicsBasicAttributeArgumentQueryTypeJSON::getTypeValue(void)
  {
    return getType()->getValue();
  }

const SportsOlympicsBasicAttributeTypeJSON::TypeValue SportsOlympicsBasicAttributeArgumentQueryTypeJSON::getTypeValue(void) const
  {
    return getType()->getValue();
  }

const char *SportsOlympicsBasicAttributeArgumentQueryTypeJSON::getTypeAsChars(void) const
  {
    return getType()->getValueAsChars();
  }

std::string SportsOlympicsBasicAttributeArgumentQueryTypeJSON::getTypeAsString(void) const
  {
    return getType()->getValueAsString();
  }

SportsOlympicsBasicAttributeArgumentQueryTypeJSON *SportsOlympicsBasicAttributeArgumentQueryTypeJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    SportsOlympicsBasicAttributeArgumentQueryTypeJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<SportsOlympicsBasicAttributeArgumentQueryTypeJSON>, SportsOlympicsBasicAttributeArgumentQueryTypeJSON *, bool> generator("Type SportsOlympicsBasicAttributeArgumentQueryType", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
