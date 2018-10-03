/* file "HistoryObservationJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "HistoryObservationJSON.h"

#include "HistoryObservationJSON.h"


HistoryObservationJSON::TypeTemperatureJSON::TypeTemperatureJSON(const TypeTemperatureJSON &)
  {
    assert(false);
  }

HistoryObservationJSON::TypeTemperatureJSON &HistoryObservationJSON::TypeTemperatureJSON::operator=(const TypeTemperatureJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void HistoryObservationJSON::TypeTemperatureJSON::fromJSONValue(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    UnitsValue_TemperatureJSON *convert_classy = UnitsValue_TemperatureJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setValue(convert_classy);
    convert_classy->remove_reference();
  }

HistoryObservationJSON::TypeTemperatureJSON::TypeTemperatureJSON(void) :
        flagHasValue(false)
  {
    extraIndex = create_string_index();
  }

HistoryObservationJSON::TypeTemperatureJSON::~TypeTemperatureJSON(void)
  {
    if (flagHasValue)
      {
        storeValue->remove_reference();
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool HistoryObservationJSON::TypeTemperatureJSON::hasValue(void) const
  {
    return flagHasValue;
  }

UnitsValue_TemperatureJSON * HistoryObservationJSON::TypeTemperatureJSON::getValue(void)
  {
    assert(flagHasValue);
    return storeValue;
  }

const UnitsValue_TemperatureJSON * HistoryObservationJSON::TypeTemperatureJSON::getValue(void) const
  {
    assert(flagHasValue);
    return storeValue;
  }

HistoryObservationJSON::TypeDewPointJSON::TypeDewPointJSON(const TypeDewPointJSON &)
  {
    assert(false);
  }

HistoryObservationJSON::TypeDewPointJSON &HistoryObservationJSON::TypeDewPointJSON::operator=(const TypeDewPointJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void HistoryObservationJSON::TypeDewPointJSON::fromJSONValue(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    UnitsValue_TemperatureJSON *convert_classy = UnitsValue_TemperatureJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setValue(convert_classy);
    convert_classy->remove_reference();
  }

HistoryObservationJSON::TypeDewPointJSON::TypeDewPointJSON(void) :
        flagHasValue(false)
  {
    extraIndex = create_string_index();
  }

HistoryObservationJSON::TypeDewPointJSON::~TypeDewPointJSON(void)
  {
    if (flagHasValue)
      {
        storeValue->remove_reference();
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool HistoryObservationJSON::TypeDewPointJSON::hasValue(void) const
  {
    return flagHasValue;
  }

UnitsValue_TemperatureJSON * HistoryObservationJSON::TypeDewPointJSON::getValue(void)
  {
    assert(flagHasValue);
    return storeValue;
  }

const UnitsValue_TemperatureJSON * HistoryObservationJSON::TypeDewPointJSON::getValue(void) const
  {
    assert(flagHasValue);
    return storeValue;
  }

HistoryObservationJSON::TypeWindJSON::TypeWindJSON(const TypeWindJSON &)
  {
    assert(false);
  }

HistoryObservationJSON::TypeWindJSON &HistoryObservationJSON::TypeWindJSON::operator=(const TypeWindJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void HistoryObservationJSON::TypeWindJSON::fromJSONValue(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    UnitsValue_WindJSON *convert_classy = UnitsValue_WindJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setValue(convert_classy);
    convert_classy->remove_reference();
  }

void HistoryObservationJSON::TypeWindJSON::fromJSONDirectionAbbreviation(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field DirectionAbbreviation of TypeWindJSON is not a string.");
    setDirectionAbbreviation(std::string(json_string->getData()));
  }

void HistoryObservationJSON::TypeWindJSON::fromJSONDirectionText(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field DirectionText of TypeWindJSON is not a string.");
    setDirectionText(std::string(json_string->getData()));
  }

void HistoryObservationJSON::TypeWindJSON::fromJSONDirectionDegrees(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    uint16_t extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field DirectionDegrees of TypeWindJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field DirectionDegrees of TypeWindJSON is not an integer.");
          }
        extracted_integer = (uint16_t)(json_rational->getUnsignedLongInt())    ;
      }
    else
      {
        extracted_integer = (uint16_t)(json_integer->getUnsignedLongInt())    ;
      }
    setDirectionDegrees(extracted_integer);
  }

HistoryObservationJSON::TypeWindJSON::TypeWindJSON(void) :
        flagHasValue(false),
        flagHasDirectionAbbreviation(false),
        flagHasDirectionText(false),
        flagHasDirectionDegrees(false)
  {
    extraIndex = create_string_index();
  }

HistoryObservationJSON::TypeWindJSON::~TypeWindJSON(void)
  {
    if (flagHasValue)
      {
        storeValue->remove_reference();
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool HistoryObservationJSON::TypeWindJSON::hasValue(void) const
  {
    return flagHasValue;
  }

UnitsValue_WindJSON * HistoryObservationJSON::TypeWindJSON::getValue(void)
  {
    assert(flagHasValue);
    return storeValue;
  }

const UnitsValue_WindJSON * HistoryObservationJSON::TypeWindJSON::getValue(void) const
  {
    assert(flagHasValue);
    return storeValue;
  }

bool HistoryObservationJSON::TypeWindJSON::hasDirectionAbbreviation(void) const
  {
    return flagHasDirectionAbbreviation;
  }

std::string HistoryObservationJSON::TypeWindJSON::getDirectionAbbreviation(void)
  {
    assert(flagHasDirectionAbbreviation);
    return storeDirectionAbbreviation;
  }

const std::string HistoryObservationJSON::TypeWindJSON::getDirectionAbbreviation(void) const
  {
    assert(flagHasDirectionAbbreviation);
    return storeDirectionAbbreviation;
  }

bool HistoryObservationJSON::TypeWindJSON::hasDirectionText(void) const
  {
    return flagHasDirectionText;
  }

std::string HistoryObservationJSON::TypeWindJSON::getDirectionText(void)
  {
    assert(flagHasDirectionText);
    return storeDirectionText;
  }

const std::string HistoryObservationJSON::TypeWindJSON::getDirectionText(void) const
  {
    assert(flagHasDirectionText);
    return storeDirectionText;
  }

bool HistoryObservationJSON::TypeWindJSON::hasDirectionDegrees(void) const
  {
    return flagHasDirectionDegrees;
  }

uint16_t HistoryObservationJSON::TypeWindJSON::getDirectionDegrees(void)
  {
    assert(flagHasDirectionDegrees);
    return storeDirectionDegrees;
  }

const uint16_t HistoryObservationJSON::TypeWindJSON::getDirectionDegrees(void) const
  {
    assert(flagHasDirectionDegrees);
    return storeDirectionDegrees;
  }

HistoryObservationJSON::TypeWindGustJSON::TypeWindGustJSON(const TypeWindGustJSON &)
  {
    assert(false);
  }

HistoryObservationJSON::TypeWindGustJSON &HistoryObservationJSON::TypeWindGustJSON::operator=(const TypeWindGustJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void HistoryObservationJSON::TypeWindGustJSON::fromJSONValue(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    UnitsValue_WindJSON *convert_classy = UnitsValue_WindJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setValue(convert_classy);
    convert_classy->remove_reference();
  }

HistoryObservationJSON::TypeWindGustJSON::TypeWindGustJSON(void) :
        flagHasValue(false)
  {
    extraIndex = create_string_index();
  }

HistoryObservationJSON::TypeWindGustJSON::~TypeWindGustJSON(void)
  {
    if (flagHasValue)
      {
        storeValue->remove_reference();
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool HistoryObservationJSON::TypeWindGustJSON::hasValue(void) const
  {
    return flagHasValue;
  }

UnitsValue_WindJSON * HistoryObservationJSON::TypeWindGustJSON::getValue(void)
  {
    assert(flagHasValue);
    return storeValue;
  }

const UnitsValue_WindJSON * HistoryObservationJSON::TypeWindGustJSON::getValue(void) const
  {
    assert(flagHasValue);
    return storeValue;
  }

HistoryObservationJSON::TypeVisibilityJSON::TypeVisibilityJSON(const TypeVisibilityJSON &)
  {
    assert(false);
  }

HistoryObservationJSON::TypeVisibilityJSON &HistoryObservationJSON::TypeVisibilityJSON::operator=(const TypeVisibilityJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void HistoryObservationJSON::TypeVisibilityJSON::fromJSONValue(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    UnitsValue_VisibilityJSON *convert_classy = UnitsValue_VisibilityJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setValue(convert_classy);
    convert_classy->remove_reference();
  }

HistoryObservationJSON::TypeVisibilityJSON::TypeVisibilityJSON(void) :
        flagHasValue(false)
  {
    extraIndex = create_string_index();
  }

HistoryObservationJSON::TypeVisibilityJSON::~TypeVisibilityJSON(void)
  {
    if (flagHasValue)
      {
        storeValue->remove_reference();
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool HistoryObservationJSON::TypeVisibilityJSON::hasValue(void) const
  {
    return flagHasValue;
  }

UnitsValue_VisibilityJSON * HistoryObservationJSON::TypeVisibilityJSON::getValue(void)
  {
    assert(flagHasValue);
    return storeValue;
  }

const UnitsValue_VisibilityJSON * HistoryObservationJSON::TypeVisibilityJSON::getValue(void) const
  {
    assert(flagHasValue);
    return storeValue;
  }

HistoryObservationJSON::TypeBarometricPressureJSON::TypeBarometricPressureJSON(const TypeBarometricPressureJSON &)
  {
    assert(false);
  }

HistoryObservationJSON::TypeBarometricPressureJSON &HistoryObservationJSON::TypeBarometricPressureJSON::operator=(const TypeBarometricPressureJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void HistoryObservationJSON::TypeBarometricPressureJSON::fromJSONValue(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    UnitsValue_PressureJSON *convert_classy = UnitsValue_PressureJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setValue(convert_classy);
    convert_classy->remove_reference();
  }

void HistoryObservationJSON::TypeBarometricPressureJSON::fromJSONTrend(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Trend of TypeBarometricPressureJSON is not a string.");
    setTrend(std::string(json_string->getData()));
  }

HistoryObservationJSON::TypeBarometricPressureJSON::TypeBarometricPressureJSON(void) :
        flagHasValue(false),
        flagHasTrend(false)
  {
    extraIndex = create_string_index();
  }

HistoryObservationJSON::TypeBarometricPressureJSON::~TypeBarometricPressureJSON(void)
  {
    if (flagHasValue)
      {
        storeValue->remove_reference();
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool HistoryObservationJSON::TypeBarometricPressureJSON::hasValue(void) const
  {
    return flagHasValue;
  }

UnitsValue_PressureJSON * HistoryObservationJSON::TypeBarometricPressureJSON::getValue(void)
  {
    assert(flagHasValue);
    return storeValue;
  }

const UnitsValue_PressureJSON * HistoryObservationJSON::TypeBarometricPressureJSON::getValue(void) const
  {
    assert(flagHasValue);
    return storeValue;
  }

bool HistoryObservationJSON::TypeBarometricPressureJSON::hasTrend(void) const
  {
    return flagHasTrend;
  }

std::string HistoryObservationJSON::TypeBarometricPressureJSON::getTrend(void)
  {
    assert(flagHasTrend);
    return storeTrend;
  }

const std::string HistoryObservationJSON::TypeBarometricPressureJSON::getTrend(void) const
  {
    assert(flagHasTrend);
    return storeTrend;
  }

HistoryObservationJSON::TypeHeatIndexJSON::TypeHeatIndexJSON(const TypeHeatIndexJSON &)
  {
    assert(false);
  }

HistoryObservationJSON::TypeHeatIndexJSON &HistoryObservationJSON::TypeHeatIndexJSON::operator=(const TypeHeatIndexJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void HistoryObservationJSON::TypeHeatIndexJSON::fromJSONValue(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    UnitsValue_TemperatureJSON *convert_classy = UnitsValue_TemperatureJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setValue(convert_classy);
    convert_classy->remove_reference();
  }

HistoryObservationJSON::TypeHeatIndexJSON::TypeHeatIndexJSON(void) :
        flagHasValue(false)
  {
    extraIndex = create_string_index();
  }

HistoryObservationJSON::TypeHeatIndexJSON::~TypeHeatIndexJSON(void)
  {
    if (flagHasValue)
      {
        storeValue->remove_reference();
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool HistoryObservationJSON::TypeHeatIndexJSON::hasValue(void) const
  {
    return flagHasValue;
  }

UnitsValue_TemperatureJSON * HistoryObservationJSON::TypeHeatIndexJSON::getValue(void)
  {
    assert(flagHasValue);
    return storeValue;
  }

const UnitsValue_TemperatureJSON * HistoryObservationJSON::TypeHeatIndexJSON::getValue(void) const
  {
    assert(flagHasValue);
    return storeValue;
  }

HistoryObservationJSON::TypeWindchillJSON::TypeWindchillJSON(const TypeWindchillJSON &)
  {
    assert(false);
  }

HistoryObservationJSON::TypeWindchillJSON &HistoryObservationJSON::TypeWindchillJSON::operator=(const TypeWindchillJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void HistoryObservationJSON::TypeWindchillJSON::fromJSONValue(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    UnitsValue_TemperatureJSON *convert_classy = UnitsValue_TemperatureJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setValue(convert_classy);
    convert_classy->remove_reference();
  }

HistoryObservationJSON::TypeWindchillJSON::TypeWindchillJSON(void) :
        flagHasValue(false)
  {
    extraIndex = create_string_index();
  }

HistoryObservationJSON::TypeWindchillJSON::~TypeWindchillJSON(void)
  {
    if (flagHasValue)
      {
        storeValue->remove_reference();
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool HistoryObservationJSON::TypeWindchillJSON::hasValue(void) const
  {
    return flagHasValue;
  }

UnitsValue_TemperatureJSON * HistoryObservationJSON::TypeWindchillJSON::getValue(void)
  {
    assert(flagHasValue);
    return storeValue;
  }

const UnitsValue_TemperatureJSON * HistoryObservationJSON::TypeWindchillJSON::getValue(void) const
  {
    assert(flagHasValue);
    return storeValue;
  }

HistoryObservationJSON::TypePrecipitationJSON::TypePrecipitationJSON(const TypePrecipitationJSON &)
  {
    assert(false);
  }

HistoryObservationJSON::TypePrecipitationJSON &HistoryObservationJSON::TypePrecipitationJSON::operator=(const TypePrecipitationJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void HistoryObservationJSON::TypePrecipitationJSON::fromJSONValue(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    UnitsValue_PrecipitationJSON *convert_classy = UnitsValue_PrecipitationJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setValue(convert_classy);
    convert_classy->remove_reference();
  }

HistoryObservationJSON::TypePrecipitationJSON::TypePrecipitationJSON(void) :
        flagHasValue(false)
  {
    extraIndex = create_string_index();
  }

HistoryObservationJSON::TypePrecipitationJSON::~TypePrecipitationJSON(void)
  {
    if (flagHasValue)
      {
        storeValue->remove_reference();
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool HistoryObservationJSON::TypePrecipitationJSON::hasValue(void) const
  {
    return flagHasValue;
  }

UnitsValue_PrecipitationJSON * HistoryObservationJSON::TypePrecipitationJSON::getValue(void)
  {
    assert(flagHasValue);
    return storeValue;
  }

const UnitsValue_PrecipitationJSON * HistoryObservationJSON::TypePrecipitationJSON::getValue(void) const
  {
    assert(flagHasValue);
    return storeValue;
  }

HistoryObservationJSON::HistoryObservationJSON(const HistoryObservationJSON &)
  {
    assert(false);
  }

HistoryObservationJSON &HistoryObservationJSON::operator=(const HistoryObservationJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void HistoryObservationJSON::fromJSONObservationDateAndTime(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DateAndOrTimeJSON *convert_classy = DateAndOrTimeJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setObservationDateAndTime(convert_classy);
    convert_classy->remove_reference();
  }

void HistoryObservationJSON::fromJSONConditionsShortPhrase(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field ConditionsShortPhrase of HistoryObservationJSON is not a string.");
    setConditionsShortPhrase(std::string(json_string->getData()));
  }

void HistoryObservationJSON::fromJSONWeatherIconURL(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field WeatherIconURL of HistoryObservationJSON is not a string.");
    setWeatherIconURL(std::string(json_string->getData()));
  }

void HistoryObservationJSON::fromJSONConditionsImage(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    WeatherImageJSON *convert_classy = WeatherImageJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setConditionsImage(convert_classy);
    convert_classy->remove_reference();
  }

void HistoryObservationJSON::fromJSONTemperature(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TypeTemperatureJSON *convert_classy = TypeTemperatureJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setTemperature(convert_classy);
    convert_classy->remove_reference();
  }

void HistoryObservationJSON::fromJSONDewPoint(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TypeDewPointJSON *convert_classy = TypeDewPointJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setDewPoint(convert_classy);
    convert_classy->remove_reference();
  }

void HistoryObservationJSON::fromJSONHumidityPct(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    uint8_t extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field HumidityPct of HistoryObservationJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field HumidityPct of HistoryObservationJSON is not an integer.");
          }
        extracted_integer = (uint8_t)(json_rational->getUnsignedLongInt())    ;
      }
    else
      {
        extracted_integer = (uint8_t)(json_integer->getUnsignedLongInt())    ;
      }
    setHumidityPct(extracted_integer);
  }

void HistoryObservationJSON::fromJSONWind(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TypeWindJSON *convert_classy = TypeWindJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setWind(convert_classy);
    convert_classy->remove_reference();
  }

void HistoryObservationJSON::fromJSONWindGust(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TypeWindGustJSON *convert_classy = TypeWindGustJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setWindGust(convert_classy);
    convert_classy->remove_reference();
  }

void HistoryObservationJSON::fromJSONVisibility(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TypeVisibilityJSON *convert_classy = TypeVisibilityJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setVisibility(convert_classy);
    convert_classy->remove_reference();
  }

void HistoryObservationJSON::fromJSONBarometricPressure(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TypeBarometricPressureJSON *convert_classy = TypeBarometricPressureJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setBarometricPressure(convert_classy);
    convert_classy->remove_reference();
  }

void HistoryObservationJSON::fromJSONHeatIndex(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TypeHeatIndexJSON *convert_classy = TypeHeatIndexJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setHeatIndex(convert_classy);
    convert_classy->remove_reference();
  }

void HistoryObservationJSON::fromJSONWindchill(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TypeWindchillJSON *convert_classy = TypeWindchillJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setWindchill(convert_classy);
    convert_classy->remove_reference();
  }

void HistoryObservationJSON::fromJSONPrecipitation(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TypePrecipitationJSON *convert_classy = TypePrecipitationJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setPrecipitation(convert_classy);
    convert_classy->remove_reference();
  }

void HistoryObservationJSON::fromJSONFog(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field Fog of HistoryObservationJSON is not true for false.");
          }
      }
    setFog(the_bool);
  }

void HistoryObservationJSON::fromJSONRain(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field Rain of HistoryObservationJSON is not true for false.");
          }
      }
    setRain(the_bool);
  }

void HistoryObservationJSON::fromJSONSnow(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field Snow of HistoryObservationJSON is not true for false.");
          }
      }
    setSnow(the_bool);
  }

void HistoryObservationJSON::fromJSONHail(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field Hail of HistoryObservationJSON is not true for false.");
          }
      }
    setHail(the_bool);
  }

void HistoryObservationJSON::fromJSONThunder(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field Thunder of HistoryObservationJSON is not true for false.");
          }
      }
    setThunder(the_bool);
  }

void HistoryObservationJSON::fromJSONTornado(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field Tornado of HistoryObservationJSON is not true for false.");
          }
      }
    setTornado(the_bool);
  }

HistoryObservationJSON::HistoryObservationJSON(void) :
        flagHasObservationDateAndTime(false),
        flagHasConditionsShortPhrase(false),
        flagHasWeatherIconURL(false),
        flagHasConditionsImage(false),
        flagHasTemperature(false),
        flagHasDewPoint(false),
        flagHasHumidityPct(false),
        flagHasWind(false),
        flagHasWindGust(false),
        flagHasVisibility(false),
        flagHasBarometricPressure(false),
        flagHasHeatIndex(false),
        flagHasWindchill(false),
        flagHasPrecipitation(false),
        flagHasFog(false),
        flagHasRain(false),
        flagHasSnow(false),
        flagHasHail(false),
        flagHasThunder(false),
        flagHasTornado(false)
  {
    extraIndex = create_string_index();
  }

HistoryObservationJSON::~HistoryObservationJSON(void)
  {
    if (flagHasObservationDateAndTime)
      {
        storeObservationDateAndTime->remove_reference();
      }
    if (flagHasConditionsImage)
      {
        storeConditionsImage->remove_reference();
      }
    if (flagHasTemperature)
      {
        storeTemperature->remove_reference();
      }
    if (flagHasDewPoint)
      {
        storeDewPoint->remove_reference();
      }
    if (flagHasWind)
      {
        storeWind->remove_reference();
      }
    if (flagHasWindGust)
      {
        storeWindGust->remove_reference();
      }
    if (flagHasVisibility)
      {
        storeVisibility->remove_reference();
      }
    if (flagHasBarometricPressure)
      {
        storeBarometricPressure->remove_reference();
      }
    if (flagHasHeatIndex)
      {
        storeHeatIndex->remove_reference();
      }
    if (flagHasWindchill)
      {
        storeWindchill->remove_reference();
      }
    if (flagHasPrecipitation)
      {
        storePrecipitation->remove_reference();
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool HistoryObservationJSON::hasObservationDateAndTime(void) const
  {
    return flagHasObservationDateAndTime;
  }

DateAndOrTimeJSON * HistoryObservationJSON::getObservationDateAndTime(void)
  {
    assert(flagHasObservationDateAndTime);
    return storeObservationDateAndTime;
  }

const DateAndOrTimeJSON * HistoryObservationJSON::getObservationDateAndTime(void) const
  {
    assert(flagHasObservationDateAndTime);
    return storeObservationDateAndTime;
  }

bool HistoryObservationJSON::hasConditionsShortPhrase(void) const
  {
    return flagHasConditionsShortPhrase;
  }

std::string HistoryObservationJSON::getConditionsShortPhrase(void)
  {
    assert(flagHasConditionsShortPhrase);
    return storeConditionsShortPhrase;
  }

const std::string HistoryObservationJSON::getConditionsShortPhrase(void) const
  {
    assert(flagHasConditionsShortPhrase);
    return storeConditionsShortPhrase;
  }

bool HistoryObservationJSON::hasWeatherIconURL(void) const
  {
    return flagHasWeatherIconURL;
  }

std::string HistoryObservationJSON::getWeatherIconURL(void)
  {
    assert(flagHasWeatherIconURL);
    return storeWeatherIconURL;
  }

const std::string HistoryObservationJSON::getWeatherIconURL(void) const
  {
    assert(flagHasWeatherIconURL);
    return storeWeatherIconURL;
  }

bool HistoryObservationJSON::hasConditionsImage(void) const
  {
    return flagHasConditionsImage;
  }

WeatherImageJSON * HistoryObservationJSON::getConditionsImage(void)
  {
    assert(flagHasConditionsImage);
    return storeConditionsImage;
  }

const WeatherImageJSON * HistoryObservationJSON::getConditionsImage(void) const
  {
    assert(flagHasConditionsImage);
    return storeConditionsImage;
  }

bool HistoryObservationJSON::hasTemperature(void) const
  {
    return flagHasTemperature;
  }

HistoryObservationJSON::TypeTemperatureJSON * HistoryObservationJSON::getTemperature(void)
  {
    assert(flagHasTemperature);
    return storeTemperature;
  }

const HistoryObservationJSON::TypeTemperatureJSON * HistoryObservationJSON::getTemperature(void) const
  {
    assert(flagHasTemperature);
    return storeTemperature;
  }

bool HistoryObservationJSON::hasDewPoint(void) const
  {
    return flagHasDewPoint;
  }

HistoryObservationJSON::TypeDewPointJSON * HistoryObservationJSON::getDewPoint(void)
  {
    assert(flagHasDewPoint);
    return storeDewPoint;
  }

const HistoryObservationJSON::TypeDewPointJSON * HistoryObservationJSON::getDewPoint(void) const
  {
    assert(flagHasDewPoint);
    return storeDewPoint;
  }

bool HistoryObservationJSON::hasHumidityPct(void) const
  {
    return flagHasHumidityPct;
  }

uint8_t HistoryObservationJSON::getHumidityPct(void)
  {
    assert(flagHasHumidityPct);
    return storeHumidityPct;
  }

const uint8_t HistoryObservationJSON::getHumidityPct(void) const
  {
    assert(flagHasHumidityPct);
    return storeHumidityPct;
  }

bool HistoryObservationJSON::hasWind(void) const
  {
    return flagHasWind;
  }

HistoryObservationJSON::TypeWindJSON * HistoryObservationJSON::getWind(void)
  {
    assert(flagHasWind);
    return storeWind;
  }

const HistoryObservationJSON::TypeWindJSON * HistoryObservationJSON::getWind(void) const
  {
    assert(flagHasWind);
    return storeWind;
  }

bool HistoryObservationJSON::hasWindGust(void) const
  {
    return flagHasWindGust;
  }

HistoryObservationJSON::TypeWindGustJSON * HistoryObservationJSON::getWindGust(void)
  {
    assert(flagHasWindGust);
    return storeWindGust;
  }

const HistoryObservationJSON::TypeWindGustJSON * HistoryObservationJSON::getWindGust(void) const
  {
    assert(flagHasWindGust);
    return storeWindGust;
  }

bool HistoryObservationJSON::hasVisibility(void) const
  {
    return flagHasVisibility;
  }

HistoryObservationJSON::TypeVisibilityJSON * HistoryObservationJSON::getVisibility(void)
  {
    assert(flagHasVisibility);
    return storeVisibility;
  }

const HistoryObservationJSON::TypeVisibilityJSON * HistoryObservationJSON::getVisibility(void) const
  {
    assert(flagHasVisibility);
    return storeVisibility;
  }

bool HistoryObservationJSON::hasBarometricPressure(void) const
  {
    return flagHasBarometricPressure;
  }

HistoryObservationJSON::TypeBarometricPressureJSON * HistoryObservationJSON::getBarometricPressure(void)
  {
    assert(flagHasBarometricPressure);
    return storeBarometricPressure;
  }

const HistoryObservationJSON::TypeBarometricPressureJSON * HistoryObservationJSON::getBarometricPressure(void) const
  {
    assert(flagHasBarometricPressure);
    return storeBarometricPressure;
  }

bool HistoryObservationJSON::hasHeatIndex(void) const
  {
    return flagHasHeatIndex;
  }

HistoryObservationJSON::TypeHeatIndexJSON * HistoryObservationJSON::getHeatIndex(void)
  {
    assert(flagHasHeatIndex);
    return storeHeatIndex;
  }

const HistoryObservationJSON::TypeHeatIndexJSON * HistoryObservationJSON::getHeatIndex(void) const
  {
    assert(flagHasHeatIndex);
    return storeHeatIndex;
  }

bool HistoryObservationJSON::hasWindchill(void) const
  {
    return flagHasWindchill;
  }

HistoryObservationJSON::TypeWindchillJSON * HistoryObservationJSON::getWindchill(void)
  {
    assert(flagHasWindchill);
    return storeWindchill;
  }

const HistoryObservationJSON::TypeWindchillJSON * HistoryObservationJSON::getWindchill(void) const
  {
    assert(flagHasWindchill);
    return storeWindchill;
  }

bool HistoryObservationJSON::hasPrecipitation(void) const
  {
    return flagHasPrecipitation;
  }

HistoryObservationJSON::TypePrecipitationJSON * HistoryObservationJSON::getPrecipitation(void)
  {
    assert(flagHasPrecipitation);
    return storePrecipitation;
  }

const HistoryObservationJSON::TypePrecipitationJSON * HistoryObservationJSON::getPrecipitation(void) const
  {
    assert(flagHasPrecipitation);
    return storePrecipitation;
  }

bool HistoryObservationJSON::hasFog(void) const
  {
    return flagHasFog;
  }

bool HistoryObservationJSON::getFog(void)
  {
    assert(flagHasFog);
    return storeFog;
  }

const bool HistoryObservationJSON::getFog(void) const
  {
    assert(flagHasFog);
    return storeFog;
  }

bool HistoryObservationJSON::hasRain(void) const
  {
    return flagHasRain;
  }

bool HistoryObservationJSON::getRain(void)
  {
    assert(flagHasRain);
    return storeRain;
  }

const bool HistoryObservationJSON::getRain(void) const
  {
    assert(flagHasRain);
    return storeRain;
  }

bool HistoryObservationJSON::hasSnow(void) const
  {
    return flagHasSnow;
  }

bool HistoryObservationJSON::getSnow(void)
  {
    assert(flagHasSnow);
    return storeSnow;
  }

const bool HistoryObservationJSON::getSnow(void) const
  {
    assert(flagHasSnow);
    return storeSnow;
  }

bool HistoryObservationJSON::hasHail(void) const
  {
    return flagHasHail;
  }

bool HistoryObservationJSON::getHail(void)
  {
    assert(flagHasHail);
    return storeHail;
  }

const bool HistoryObservationJSON::getHail(void) const
  {
    assert(flagHasHail);
    return storeHail;
  }

bool HistoryObservationJSON::hasThunder(void) const
  {
    return flagHasThunder;
  }

bool HistoryObservationJSON::getThunder(void)
  {
    assert(flagHasThunder);
    return storeThunder;
  }

const bool HistoryObservationJSON::getThunder(void) const
  {
    assert(flagHasThunder);
    return storeThunder;
  }

bool HistoryObservationJSON::hasTornado(void) const
  {
    return flagHasTornado;
  }

bool HistoryObservationJSON::getTornado(void)
  {
    assert(flagHasTornado);
    return storeTornado;
  }

const bool HistoryObservationJSON::getTornado(void) const
  {
    assert(flagHasTornado);
    return storeTornado;
  }

HistoryObservationJSON::TypeTemperatureJSON *HistoryObservationJSON::TypeTemperatureJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    TypeTemperatureJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<TypeTemperatureJSON>, TypeTemperatureJSON *, bool> generator("Type TypeTemperature", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
HistoryObservationJSON::TypeDewPointJSON *HistoryObservationJSON::TypeDewPointJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    TypeDewPointJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<TypeDewPointJSON>, TypeDewPointJSON *, bool> generator("Type TypeDewPoint", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
HistoryObservationJSON::TypeWindJSON *HistoryObservationJSON::TypeWindJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    TypeWindJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<TypeWindJSON>, TypeWindJSON *, bool> generator("Type TypeWind", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
HistoryObservationJSON::TypeWindGustJSON *HistoryObservationJSON::TypeWindGustJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    TypeWindGustJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<TypeWindGustJSON>, TypeWindGustJSON *, bool> generator("Type TypeWindGust", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
HistoryObservationJSON::TypeVisibilityJSON *HistoryObservationJSON::TypeVisibilityJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    TypeVisibilityJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<TypeVisibilityJSON>, TypeVisibilityJSON *, bool> generator("Type TypeVisibility", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
HistoryObservationJSON::TypeBarometricPressureJSON *HistoryObservationJSON::TypeBarometricPressureJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    TypeBarometricPressureJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<TypeBarometricPressureJSON>, TypeBarometricPressureJSON *, bool> generator("Type TypeBarometricPressure", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
HistoryObservationJSON::TypeHeatIndexJSON *HistoryObservationJSON::TypeHeatIndexJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    TypeHeatIndexJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<TypeHeatIndexJSON>, TypeHeatIndexJSON *, bool> generator("Type TypeHeatIndex", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
HistoryObservationJSON::TypeWindchillJSON *HistoryObservationJSON::TypeWindchillJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    TypeWindchillJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<TypeWindchillJSON>, TypeWindchillJSON *, bool> generator("Type TypeWindchill", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
HistoryObservationJSON::TypePrecipitationJSON *HistoryObservationJSON::TypePrecipitationJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    TypePrecipitationJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<TypePrecipitationJSON>, TypePrecipitationJSON *, bool> generator("Type TypePrecipitation", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
HistoryObservationJSON *HistoryObservationJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    HistoryObservationJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<HistoryObservationJSON>, HistoryObservationJSON *, bool> generator("Type HistoryObservation", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
