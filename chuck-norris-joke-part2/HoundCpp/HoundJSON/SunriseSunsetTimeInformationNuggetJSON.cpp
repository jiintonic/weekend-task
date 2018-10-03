/* file "SunriseSunsetTimeInformationNuggetJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "SunriseSunsetTimeInformationNuggetJSON.h"

#include "SunriseSunsetTimeInformationNuggetJSON.h"


SunriseSunsetTimeInformationNuggetJSON::SunriseSunsetTimeInformationNuggetJSON(const SunriseSunsetTimeInformationNuggetJSON &)
  {
    assert(false);
  }

SunriseSunsetTimeInformationNuggetJSON &SunriseSunsetTimeInformationNuggetJSON::operator=(const SunriseSunsetTimeInformationNuggetJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *SunriseSunsetTimeInformationNuggetJSON::extraMapLocationToJSON(void) const
  {
    JSONValueHandler handler_MapLocation;
    storeMapLocation->write_as_json(&handler_MapLocation);
    handler_MapLocation.result->add_reference();
    return handler_MapLocation.result;
  }

JSONValue *SunriseSunsetTimeInformationNuggetJSON::extraRequestedTypeToJSON(void) const
  {
    JSONStringValue *generated_string_RequestedType = new JSONStringValue(storeRequestedType.c_str());
    return generated_string_RequestedType;
  }

JSONValue *SunriseSunsetTimeInformationNuggetJSON::extraDateTimeRangeSpecToJSON(void) const
  {
    JSONValueHandler handler_DateTimeRangeSpec;
    storeDateTimeRangeSpec->write_as_json(&handler_DateTimeRangeSpec);
    handler_DateTimeRangeSpec.result->add_reference();
    return handler_DateTimeRangeSpec.result;
  }

JSONValue *SunriseSunsetTimeInformationNuggetJSON::extraRequestedInThePastToJSON(void) const
  {
    JSONValue *generated_boolean_RequestedInThePast = (storeRequestedInThePast ? (JSONValue *)new JSONTrueValue() : (JSONValue *)new JSONFalseValue());
    return generated_boolean_RequestedInThePast;
  }

JSONValue *SunriseSunsetTimeInformationNuggetJSON::extraCalculatedDateAndTimesToJSON(void) const
  {
    JSONArrayValue *generated_array_1_CalculatedDateAndTimes = new JSONArrayValue();
    for (size_t num1 = 0; num1 < storeCalculatedDateAndTimes.size(); ++num1)
      {
        JSONValueHandler handler_CalculatedDateAndTimes;
        storeCalculatedDateAndTimes[num1]->write_as_json(&handler_CalculatedDateAndTimes);
        handler_CalculatedDateAndTimes.result->add_reference();
        generated_array_1_CalculatedDateAndTimes->appendComponent(handler_CalculatedDateAndTimes.result);
        handler_CalculatedDateAndTimes.result->remove_reference();
      }
    return generated_array_1_CalculatedDateAndTimes;
  }

void SunriseSunsetTimeInformationNuggetJSON::fromJSONMapLocation(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    MapLocationJSON *convert_classy = MapLocationJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setMapLocation(convert_classy);
    convert_classy->remove_reference();
  }

void SunriseSunsetTimeInformationNuggetJSON::fromJSONRequestedType(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field RequestedType of SunriseSunsetTimeInformationNuggetJSON is not a string.");
    setRequestedType(std::string(json_string->getData()));
  }

void SunriseSunsetTimeInformationNuggetJSON::fromJSONDateTimeRangeSpec(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DateTimeRangeSpecJSON *convert_classy = DateTimeRangeSpecJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setDateTimeRangeSpec(convert_classy);
    convert_classy->remove_reference();
  }

void SunriseSunsetTimeInformationNuggetJSON::fromJSONRequestedInThePast(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field RequestedInThePast of SunriseSunsetTimeInformationNuggetJSON is not true for false.");
          }
      }
    setRequestedInThePast(the_bool);
  }

void SunriseSunsetTimeInformationNuggetJSON::fromJSONCalculatedDateAndTimes(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field CalculatedDateAndTimes of SunriseSunsetTimeInformationNuggetJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< DateAndOrTimeJSON * > vector_CalculatedDateAndTimes1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        DateAndOrTimeJSON *convert_classy = DateAndOrTimeJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_CalculatedDateAndTimes1[num1] = convert_classy;
      }
    initCalculatedDateAndTimes();
    for (size_t num2 = 0; num2 < vector_CalculatedDateAndTimes1.size(); ++num2)
        appendCalculatedDateAndTimes(vector_CalculatedDateAndTimes1[num2]);
    for (size_t num1 = 0; num1 < vector_CalculatedDateAndTimes1.size(); ++num1)
      {
        vector_CalculatedDateAndTimes1[num1]->remove_reference();
      }
  }

SunriseSunsetTimeInformationNuggetJSON::SunriseSunsetTimeInformationNuggetJSON(void) :
        flagHasMapLocation(false),
        flagHasRequestedType(false),
        flagHasDateTimeRangeSpec(false),
        flagHasRequestedInThePast(false),
        flagHasCalculatedDateAndTimes(false)
  {
    storeRequestedInThePast = false;
    extraIndex = create_string_index();
  }

SunriseSunsetTimeInformationNuggetJSON::~SunriseSunsetTimeInformationNuggetJSON(void)
  {
    if (flagHasMapLocation)
      {
        storeMapLocation->remove_reference();
      }
    if (flagHasDateTimeRangeSpec)
      {
        storeDateTimeRangeSpec->remove_reference();
      }
    if (flagHasCalculatedDateAndTimes)
      {
        for (size_t num4 = 0; num4 < storeCalculatedDateAndTimes.size(); ++num4)
          {
            storeCalculatedDateAndTimes[num4]->remove_reference();
          }
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *SunriseSunsetTimeInformationNuggetJSON::getDateAndTimeNuggetKind(void) const
  {
    return "SunriseSunsetTime";
  }

bool SunriseSunsetTimeInformationNuggetJSON::hasMapLocation(void) const
  {
    return flagHasMapLocation;
  }

MapLocationJSON * SunriseSunsetTimeInformationNuggetJSON::getMapLocation(void)
  {
    assert(flagHasMapLocation);
    return storeMapLocation;
  }

const MapLocationJSON * SunriseSunsetTimeInformationNuggetJSON::getMapLocation(void) const
  {
    assert(flagHasMapLocation);
    return storeMapLocation;
  }

bool SunriseSunsetTimeInformationNuggetJSON::hasRequestedType(void) const
  {
    return flagHasRequestedType;
  }

std::string SunriseSunsetTimeInformationNuggetJSON::getRequestedType(void)
  {
    assert(flagHasRequestedType);
    return storeRequestedType;
  }

const std::string SunriseSunsetTimeInformationNuggetJSON::getRequestedType(void) const
  {
    assert(flagHasRequestedType);
    return storeRequestedType;
  }

bool SunriseSunsetTimeInformationNuggetJSON::hasDateTimeRangeSpec(void) const
  {
    return flagHasDateTimeRangeSpec;
  }

DateTimeRangeSpecJSON * SunriseSunsetTimeInformationNuggetJSON::getDateTimeRangeSpec(void)
  {
    assert(flagHasDateTimeRangeSpec);
    return storeDateTimeRangeSpec;
  }

const DateTimeRangeSpecJSON * SunriseSunsetTimeInformationNuggetJSON::getDateTimeRangeSpec(void) const
  {
    assert(flagHasDateTimeRangeSpec);
    return storeDateTimeRangeSpec;
  }

bool SunriseSunsetTimeInformationNuggetJSON::hasRequestedInThePast(void) const
  {
    return flagHasRequestedInThePast;
  }

bool SunriseSunsetTimeInformationNuggetJSON::getRequestedInThePast(void)
  {
    return storeRequestedInThePast;
  }

const bool SunriseSunsetTimeInformationNuggetJSON::getRequestedInThePast(void) const
  {
    return storeRequestedInThePast;
  }

bool SunriseSunsetTimeInformationNuggetJSON::hasCalculatedDateAndTimes(void) const
  {
    return flagHasCalculatedDateAndTimes;
  }

size_t SunriseSunsetTimeInformationNuggetJSON::countOfCalculatedDateAndTimes(void) const
  {
    assert(flagHasCalculatedDateAndTimes);
    return storeCalculatedDateAndTimes.size();
  }

DateAndOrTimeJSON * SunriseSunsetTimeInformationNuggetJSON::elementOfCalculatedDateAndTimes(size_t element_num)
  {
    assert(flagHasCalculatedDateAndTimes);
    return storeCalculatedDateAndTimes[element_num];
  }

const DateAndOrTimeJSON * SunriseSunsetTimeInformationNuggetJSON::elementOfCalculatedDateAndTimes(size_t element_num) const
  {
    assert(flagHasCalculatedDateAndTimes);
    return storeCalculatedDateAndTimes[element_num];
  }

std::vector< DateAndOrTimeJSON * > SunriseSunsetTimeInformationNuggetJSON::getCalculatedDateAndTimes(void)
  {
    assert(flagHasCalculatedDateAndTimes);
    return storeCalculatedDateAndTimes;
  }

const std::vector< DateAndOrTimeJSON * > SunriseSunsetTimeInformationNuggetJSON::getCalculatedDateAndTimes(void) const
  {
    assert(flagHasCalculatedDateAndTimes);
    return storeCalculatedDateAndTimes;
  }

SunriseSunsetTimeInformationNuggetJSON *SunriseSunsetTimeInformationNuggetJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    SunriseSunsetTimeInformationNuggetJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<SunriseSunsetTimeInformationNuggetJSON>, SunriseSunsetTimeInformationNuggetJSON *, bool> generator("Type SunriseSunsetTimeInformationNugget", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
