/* file "HourlyForecastJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "HourlyForecastJSON.h"

#include "HourlyForecastJSON.h"


HourlyForecastJSON::TypeTemperatureJSON::TypeTemperatureJSON(const TypeTemperatureJSON &)
  {
    assert(false);
  }

HourlyForecastJSON::TypeTemperatureJSON &HourlyForecastJSON::TypeTemperatureJSON::operator=(const TypeTemperatureJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void HourlyForecastJSON::TypeTemperatureJSON::fromJSONValue(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    UnitsValue_TemperatureJSON *convert_classy = UnitsValue_TemperatureJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setValue(convert_classy);
    convert_classy->remove_reference();
  }

HourlyForecastJSON::TypeTemperatureJSON::TypeTemperatureJSON(void) :
        flagHasValue(false)
  {
    extraIndex = create_string_index();
  }

HourlyForecastJSON::TypeTemperatureJSON::~TypeTemperatureJSON(void)
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

bool HourlyForecastJSON::TypeTemperatureJSON::hasValue(void) const
  {
    return flagHasValue;
  }

UnitsValue_TemperatureJSON * HourlyForecastJSON::TypeTemperatureJSON::getValue(void)
  {
    assert(flagHasValue);
    return storeValue;
  }

const UnitsValue_TemperatureJSON * HourlyForecastJSON::TypeTemperatureJSON::getValue(void) const
  {
    assert(flagHasValue);
    return storeValue;
  }

HourlyForecastJSON::TypeFeelsLikeTemperatureJSON::TypeFeelsLikeTemperatureJSON(const TypeFeelsLikeTemperatureJSON &)
  {
    assert(false);
  }

HourlyForecastJSON::TypeFeelsLikeTemperatureJSON &HourlyForecastJSON::TypeFeelsLikeTemperatureJSON::operator=(const TypeFeelsLikeTemperatureJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void HourlyForecastJSON::TypeFeelsLikeTemperatureJSON::fromJSONValue(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    UnitsValue_TemperatureJSON *convert_classy = UnitsValue_TemperatureJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setValue(convert_classy);
    convert_classy->remove_reference();
  }

HourlyForecastJSON::TypeFeelsLikeTemperatureJSON::TypeFeelsLikeTemperatureJSON(void) :
        flagHasValue(false)
  {
    extraIndex = create_string_index();
  }

HourlyForecastJSON::TypeFeelsLikeTemperatureJSON::~TypeFeelsLikeTemperatureJSON(void)
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

bool HourlyForecastJSON::TypeFeelsLikeTemperatureJSON::hasValue(void) const
  {
    return flagHasValue;
  }

UnitsValue_TemperatureJSON * HourlyForecastJSON::TypeFeelsLikeTemperatureJSON::getValue(void)
  {
    assert(flagHasValue);
    return storeValue;
  }

const UnitsValue_TemperatureJSON * HourlyForecastJSON::TypeFeelsLikeTemperatureJSON::getValue(void) const
  {
    assert(flagHasValue);
    return storeValue;
  }

HourlyForecastJSON::TypeHeatIndexJSON::TypeHeatIndexJSON(const TypeHeatIndexJSON &)
  {
    assert(false);
  }

HourlyForecastJSON::TypeHeatIndexJSON &HourlyForecastJSON::TypeHeatIndexJSON::operator=(const TypeHeatIndexJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void HourlyForecastJSON::TypeHeatIndexJSON::fromJSONValue(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    UnitsValue_TemperatureJSON *convert_classy = UnitsValue_TemperatureJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setValue(convert_classy);
    convert_classy->remove_reference();
  }

HourlyForecastJSON::TypeHeatIndexJSON::TypeHeatIndexJSON(void) :
        flagHasValue(false)
  {
    extraIndex = create_string_index();
  }

HourlyForecastJSON::TypeHeatIndexJSON::~TypeHeatIndexJSON(void)
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

bool HourlyForecastJSON::TypeHeatIndexJSON::hasValue(void) const
  {
    return flagHasValue;
  }

UnitsValue_TemperatureJSON * HourlyForecastJSON::TypeHeatIndexJSON::getValue(void)
  {
    assert(flagHasValue);
    return storeValue;
  }

const UnitsValue_TemperatureJSON * HourlyForecastJSON::TypeHeatIndexJSON::getValue(void) const
  {
    assert(flagHasValue);
    return storeValue;
  }

HourlyForecastJSON::TypeWindchillJSON::TypeWindchillJSON(const TypeWindchillJSON &)
  {
    assert(false);
  }

HourlyForecastJSON::TypeWindchillJSON &HourlyForecastJSON::TypeWindchillJSON::operator=(const TypeWindchillJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void HourlyForecastJSON::TypeWindchillJSON::fromJSONValue(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    UnitsValue_TemperatureJSON *convert_classy = UnitsValue_TemperatureJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setValue(convert_classy);
    convert_classy->remove_reference();
  }

HourlyForecastJSON::TypeWindchillJSON::TypeWindchillJSON(void) :
        flagHasValue(false)
  {
    extraIndex = create_string_index();
  }

HourlyForecastJSON::TypeWindchillJSON::~TypeWindchillJSON(void)
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

bool HourlyForecastJSON::TypeWindchillJSON::hasValue(void) const
  {
    return flagHasValue;
  }

UnitsValue_TemperatureJSON * HourlyForecastJSON::TypeWindchillJSON::getValue(void)
  {
    assert(flagHasValue);
    return storeValue;
  }

const UnitsValue_TemperatureJSON * HourlyForecastJSON::TypeWindchillJSON::getValue(void) const
  {
    assert(flagHasValue);
    return storeValue;
  }

HourlyForecastJSON::TypeDewPointJSON::TypeDewPointJSON(const TypeDewPointJSON &)
  {
    assert(false);
  }

HourlyForecastJSON::TypeDewPointJSON &HourlyForecastJSON::TypeDewPointJSON::operator=(const TypeDewPointJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void HourlyForecastJSON::TypeDewPointJSON::fromJSONValue(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    UnitsValue_TemperatureJSON *convert_classy = UnitsValue_TemperatureJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setValue(convert_classy);
    convert_classy->remove_reference();
  }

HourlyForecastJSON::TypeDewPointJSON::TypeDewPointJSON(void) :
        flagHasValue(false)
  {
    extraIndex = create_string_index();
  }

HourlyForecastJSON::TypeDewPointJSON::~TypeDewPointJSON(void)
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

bool HourlyForecastJSON::TypeDewPointJSON::hasValue(void) const
  {
    return flagHasValue;
  }

UnitsValue_TemperatureJSON * HourlyForecastJSON::TypeDewPointJSON::getValue(void)
  {
    assert(flagHasValue);
    return storeValue;
  }

const UnitsValue_TemperatureJSON * HourlyForecastJSON::TypeDewPointJSON::getValue(void) const
  {
    assert(flagHasValue);
    return storeValue;
  }

HourlyForecastJSON::TypeUVIndexJSON::TypeUVIndexJSON(const TypeUVIndexJSON &)
  {
    assert(false);
  }

HourlyForecastJSON::TypeUVIndexJSON &HourlyForecastJSON::TypeUVIndexJSON::operator=(const TypeUVIndexJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void HourlyForecastJSON::TypeUVIndexJSON::fromJSONValue(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    uint8_t extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field Value of TypeUVIndexJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field Value of TypeUVIndexJSON is not an integer.");
          }
        extracted_integer = (uint8_t)(json_rational->getUnsignedLongInt())    ;
      }
    else
      {
        extracted_integer = (uint8_t)(json_integer->getUnsignedLongInt())    ;
      }
    setValue(extracted_integer);
  }

void HourlyForecastJSON::TypeUVIndexJSON::fromJSONText(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Text of TypeUVIndexJSON is not a string.");
    setText(std::string(json_string->getData()));
  }

HourlyForecastJSON::TypeUVIndexJSON::TypeUVIndexJSON(void) :
        flagHasValue(false),
        flagHasText(false)
  {
    extraIndex = create_string_index();
  }

HourlyForecastJSON::TypeUVIndexJSON::~TypeUVIndexJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool HourlyForecastJSON::TypeUVIndexJSON::hasValue(void) const
  {
    return flagHasValue;
  }

uint8_t HourlyForecastJSON::TypeUVIndexJSON::getValue(void)
  {
    assert(flagHasValue);
    return storeValue;
  }

const uint8_t HourlyForecastJSON::TypeUVIndexJSON::getValue(void) const
  {
    assert(flagHasValue);
    return storeValue;
  }

bool HourlyForecastJSON::TypeUVIndexJSON::hasText(void) const
  {
    return flagHasText;
  }

std::string HourlyForecastJSON::TypeUVIndexJSON::getText(void)
  {
    assert(flagHasText);
    return storeText;
  }

const std::string HourlyForecastJSON::TypeUVIndexJSON::getText(void) const
  {
    assert(flagHasText);
    return storeText;
  }

HourlyForecastJSON::TypeWindJSON::TypeWindJSON(const TypeWindJSON &)
  {
    assert(false);
  }

HourlyForecastJSON::TypeWindJSON &HourlyForecastJSON::TypeWindJSON::operator=(const TypeWindJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void HourlyForecastJSON::TypeWindJSON::fromJSONValue(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    UnitsValue_WindJSON *convert_classy = UnitsValue_WindJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setValue(convert_classy);
    convert_classy->remove_reference();
  }

void HourlyForecastJSON::TypeWindJSON::fromJSONDirectionAbbreviation(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field DirectionAbbreviation of TypeWindJSON is not a string.");
    setDirectionAbbreviation(std::string(json_string->getData()));
  }

void HourlyForecastJSON::TypeWindJSON::fromJSONDirectionText(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field DirectionText of TypeWindJSON is not a string.");
    setDirectionText(std::string(json_string->getData()));
  }

void HourlyForecastJSON::TypeWindJSON::fromJSONDirectionDegrees(JSONValue *json_value, bool ignore_extras)
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

HourlyForecastJSON::TypeWindJSON::TypeWindJSON(void) :
        flagHasValue(false),
        flagHasDirectionAbbreviation(false),
        flagHasDirectionText(false),
        flagHasDirectionDegrees(false)
  {
    extraIndex = create_string_index();
  }

HourlyForecastJSON::TypeWindJSON::~TypeWindJSON(void)
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

bool HourlyForecastJSON::TypeWindJSON::hasValue(void) const
  {
    return flagHasValue;
  }

UnitsValue_WindJSON * HourlyForecastJSON::TypeWindJSON::getValue(void)
  {
    assert(flagHasValue);
    return storeValue;
  }

const UnitsValue_WindJSON * HourlyForecastJSON::TypeWindJSON::getValue(void) const
  {
    assert(flagHasValue);
    return storeValue;
  }

bool HourlyForecastJSON::TypeWindJSON::hasDirectionAbbreviation(void) const
  {
    return flagHasDirectionAbbreviation;
  }

std::string HourlyForecastJSON::TypeWindJSON::getDirectionAbbreviation(void)
  {
    assert(flagHasDirectionAbbreviation);
    return storeDirectionAbbreviation;
  }

const std::string HourlyForecastJSON::TypeWindJSON::getDirectionAbbreviation(void) const
  {
    assert(flagHasDirectionAbbreviation);
    return storeDirectionAbbreviation;
  }

bool HourlyForecastJSON::TypeWindJSON::hasDirectionText(void) const
  {
    return flagHasDirectionText;
  }

std::string HourlyForecastJSON::TypeWindJSON::getDirectionText(void)
  {
    assert(flagHasDirectionText);
    return storeDirectionText;
  }

const std::string HourlyForecastJSON::TypeWindJSON::getDirectionText(void) const
  {
    assert(flagHasDirectionText);
    return storeDirectionText;
  }

bool HourlyForecastJSON::TypeWindJSON::hasDirectionDegrees(void) const
  {
    return flagHasDirectionDegrees;
  }

uint16_t HourlyForecastJSON::TypeWindJSON::getDirectionDegrees(void)
  {
    assert(flagHasDirectionDegrees);
    return storeDirectionDegrees;
  }

const uint16_t HourlyForecastJSON::TypeWindJSON::getDirectionDegrees(void) const
  {
    assert(flagHasDirectionDegrees);
    return storeDirectionDegrees;
  }

HourlyForecastJSON::TypeBarometricPressureJSON::TypeBarometricPressureJSON(const TypeBarometricPressureJSON &)
  {
    assert(false);
  }

HourlyForecastJSON::TypeBarometricPressureJSON &HourlyForecastJSON::TypeBarometricPressureJSON::operator=(const TypeBarometricPressureJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void HourlyForecastJSON::TypeBarometricPressureJSON::fromJSONValue(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    UnitsValue_PressureJSON *convert_classy = UnitsValue_PressureJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setValue(convert_classy);
    convert_classy->remove_reference();
  }

HourlyForecastJSON::TypeBarometricPressureJSON::TypeBarometricPressureJSON(void) :
        flagHasValue(false)
  {
    extraIndex = create_string_index();
  }

HourlyForecastJSON::TypeBarometricPressureJSON::~TypeBarometricPressureJSON(void)
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

bool HourlyForecastJSON::TypeBarometricPressureJSON::hasValue(void) const
  {
    return flagHasValue;
  }

UnitsValue_PressureJSON * HourlyForecastJSON::TypeBarometricPressureJSON::getValue(void)
  {
    assert(flagHasValue);
    return storeValue;
  }

const UnitsValue_PressureJSON * HourlyForecastJSON::TypeBarometricPressureJSON::getValue(void) const
  {
    assert(flagHasValue);
    return storeValue;
  }

HourlyForecastJSON::TypePrecipitationTotalJSON::TypePrecipitationTotalJSON(const TypePrecipitationTotalJSON &)
  {
    assert(false);
  }

HourlyForecastJSON::TypePrecipitationTotalJSON &HourlyForecastJSON::TypePrecipitationTotalJSON::operator=(const TypePrecipitationTotalJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void HourlyForecastJSON::TypePrecipitationTotalJSON::fromJSONValue(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    UnitsValue_PrecipitationJSON *convert_classy = UnitsValue_PrecipitationJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setValue(convert_classy);
    convert_classy->remove_reference();
  }

HourlyForecastJSON::TypePrecipitationTotalJSON::TypePrecipitationTotalJSON(void) :
        flagHasValue(false)
  {
    extraIndex = create_string_index();
  }

HourlyForecastJSON::TypePrecipitationTotalJSON::~TypePrecipitationTotalJSON(void)
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

bool HourlyForecastJSON::TypePrecipitationTotalJSON::hasValue(void) const
  {
    return flagHasValue;
  }

UnitsValue_PrecipitationJSON * HourlyForecastJSON::TypePrecipitationTotalJSON::getValue(void)
  {
    assert(flagHasValue);
    return storeValue;
  }

const UnitsValue_PrecipitationJSON * HourlyForecastJSON::TypePrecipitationTotalJSON::getValue(void) const
  {
    assert(flagHasValue);
    return storeValue;
  }

HourlyForecastJSON::TypeSnowTotalJSON::TypeSnowTotalJSON(const TypeSnowTotalJSON &)
  {
    assert(false);
  }

HourlyForecastJSON::TypeSnowTotalJSON &HourlyForecastJSON::TypeSnowTotalJSON::operator=(const TypeSnowTotalJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void HourlyForecastJSON::TypeSnowTotalJSON::fromJSONValue(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    UnitsValue_SnowJSON *convert_classy = UnitsValue_SnowJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setValue(convert_classy);
    convert_classy->remove_reference();
  }

HourlyForecastJSON::TypeSnowTotalJSON::TypeSnowTotalJSON(void) :
        flagHasValue(false)
  {
    extraIndex = create_string_index();
  }

HourlyForecastJSON::TypeSnowTotalJSON::~TypeSnowTotalJSON(void)
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

bool HourlyForecastJSON::TypeSnowTotalJSON::hasValue(void) const
  {
    return flagHasValue;
  }

UnitsValue_SnowJSON * HourlyForecastJSON::TypeSnowTotalJSON::getValue(void)
  {
    assert(flagHasValue);
    return storeValue;
  }

const UnitsValue_SnowJSON * HourlyForecastJSON::TypeSnowTotalJSON::getValue(void) const
  {
    assert(flagHasValue);
    return storeValue;
  }

HourlyForecastJSON::HourlyForecastJSON(const HourlyForecastJSON &)
  {
    assert(false);
  }

HourlyForecastJSON &HourlyForecastJSON::operator=(const HourlyForecastJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void HourlyForecastJSON::fromJSONForecastDateAndTime(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DateAndOrTimeJSON *convert_classy = DateAndOrTimeJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setForecastDateAndTime(convert_classy);
    convert_classy->remove_reference();
  }

void HourlyForecastJSON::fromJSONConditionsShortPhrase(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field ConditionsShortPhrase of HourlyForecastJSON is not a string.");
    setConditionsShortPhrase(std::string(json_string->getData()));
  }

void HourlyForecastJSON::fromJSONWeatherIconURL(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field WeatherIconURL of HourlyForecastJSON is not a string.");
    setWeatherIconURL(std::string(json_string->getData()));
  }

void HourlyForecastJSON::fromJSONConditionsImage(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    WeatherImageJSON *convert_classy = WeatherImageJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setConditionsImage(convert_classy);
    convert_classy->remove_reference();
  }

void HourlyForecastJSON::fromJSONTemperature(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TypeTemperatureJSON *convert_classy = TypeTemperatureJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setTemperature(convert_classy);
    convert_classy->remove_reference();
  }

void HourlyForecastJSON::fromJSONFeelsLikeTemperature(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TypeFeelsLikeTemperatureJSON *convert_classy = TypeFeelsLikeTemperatureJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setFeelsLikeTemperature(convert_classy);
    convert_classy->remove_reference();
  }

void HourlyForecastJSON::fromJSONHeatIndex(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TypeHeatIndexJSON *convert_classy = TypeHeatIndexJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setHeatIndex(convert_classy);
    convert_classy->remove_reference();
  }

void HourlyForecastJSON::fromJSONWindchill(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TypeWindchillJSON *convert_classy = TypeWindchillJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setWindchill(convert_classy);
    convert_classy->remove_reference();
  }

void HourlyForecastJSON::fromJSONDewPoint(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TypeDewPointJSON *convert_classy = TypeDewPointJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setDewPoint(convert_classy);
    convert_classy->remove_reference();
  }

void HourlyForecastJSON::fromJSONProbabilityOfPrecipitationPct(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    uint8_t extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field ProbabilityOfPrecipitationPct of HourlyForecastJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field ProbabilityOfPrecipitationPct of HourlyForecastJSON is not an integer.");
          }
        extracted_integer = (uint8_t)(json_rational->getUnsignedLongInt())    ;
      }
    else
      {
        extracted_integer = (uint8_t)(json_integer->getUnsignedLongInt())    ;
      }
    setProbabilityOfPrecipitationPct(extracted_integer);
  }

void HourlyForecastJSON::fromJSONHumidityPct(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    uint8_t extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field HumidityPct of HourlyForecastJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field HumidityPct of HourlyForecastJSON is not an integer.");
          }
        extracted_integer = (uint8_t)(json_rational->getUnsignedLongInt())    ;
      }
    else
      {
        extracted_integer = (uint8_t)(json_integer->getUnsignedLongInt())    ;
      }
    setHumidityPct(extracted_integer);
  }

void HourlyForecastJSON::fromJSONUVIndex(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TypeUVIndexJSON *convert_classy = TypeUVIndexJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setUVIndex(convert_classy);
    convert_classy->remove_reference();
  }

void HourlyForecastJSON::fromJSONWind(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TypeWindJSON *convert_classy = TypeWindJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setWind(convert_classy);
    convert_classy->remove_reference();
  }

void HourlyForecastJSON::fromJSONBarometricPressure(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TypeBarometricPressureJSON *convert_classy = TypeBarometricPressureJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setBarometricPressure(convert_classy);
    convert_classy->remove_reference();
  }

void HourlyForecastJSON::fromJSONPrecipitationTotal(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TypePrecipitationTotalJSON *convert_classy = TypePrecipitationTotalJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setPrecipitationTotal(convert_classy);
    convert_classy->remove_reference();
  }

void HourlyForecastJSON::fromJSONSnowTotal(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TypeSnowTotalJSON *convert_classy = TypeSnowTotalJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setSnowTotal(convert_classy);
    convert_classy->remove_reference();
  }

void HourlyForecastJSON::fromJSONCloudinessPct(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    uint8_t extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field CloudinessPct of HourlyForecastJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field CloudinessPct of HourlyForecastJSON is not an integer.");
          }
        extracted_integer = (uint8_t)(json_rational->getUnsignedLongInt())    ;
      }
    else
      {
        extracted_integer = (uint8_t)(json_integer->getUnsignedLongInt())    ;
      }
    setCloudinessPct(extracted_integer);
  }

HourlyForecastJSON::HourlyForecastJSON(void) :
        flagHasForecastDateAndTime(false),
        flagHasConditionsShortPhrase(false),
        flagHasWeatherIconURL(false),
        flagHasConditionsImage(false),
        flagHasTemperature(false),
        flagHasFeelsLikeTemperature(false),
        flagHasHeatIndex(false),
        flagHasWindchill(false),
        flagHasDewPoint(false),
        flagHasProbabilityOfPrecipitationPct(false),
        flagHasHumidityPct(false),
        flagHasUVIndex(false),
        flagHasWind(false),
        flagHasBarometricPressure(false),
        flagHasPrecipitationTotal(false),
        flagHasSnowTotal(false),
        flagHasCloudinessPct(false)
  {
    extraIndex = create_string_index();
  }

HourlyForecastJSON::~HourlyForecastJSON(void)
  {
    if (flagHasForecastDateAndTime)
      {
        storeForecastDateAndTime->remove_reference();
      }
    if (flagHasConditionsImage)
      {
        storeConditionsImage->remove_reference();
      }
    if (flagHasTemperature)
      {
        storeTemperature->remove_reference();
      }
    if (flagHasFeelsLikeTemperature)
      {
        storeFeelsLikeTemperature->remove_reference();
      }
    if (flagHasHeatIndex)
      {
        storeHeatIndex->remove_reference();
      }
    if (flagHasWindchill)
      {
        storeWindchill->remove_reference();
      }
    if (flagHasDewPoint)
      {
        storeDewPoint->remove_reference();
      }
    if (flagHasUVIndex)
      {
        storeUVIndex->remove_reference();
      }
    if (flagHasWind)
      {
        storeWind->remove_reference();
      }
    if (flagHasBarometricPressure)
      {
        storeBarometricPressure->remove_reference();
      }
    if (flagHasPrecipitationTotal)
      {
        storePrecipitationTotal->remove_reference();
      }
    if (flagHasSnowTotal)
      {
        storeSnowTotal->remove_reference();
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool HourlyForecastJSON::hasForecastDateAndTime(void) const
  {
    return flagHasForecastDateAndTime;
  }

DateAndOrTimeJSON * HourlyForecastJSON::getForecastDateAndTime(void)
  {
    assert(flagHasForecastDateAndTime);
    return storeForecastDateAndTime;
  }

const DateAndOrTimeJSON * HourlyForecastJSON::getForecastDateAndTime(void) const
  {
    assert(flagHasForecastDateAndTime);
    return storeForecastDateAndTime;
  }

bool HourlyForecastJSON::hasConditionsShortPhrase(void) const
  {
    return flagHasConditionsShortPhrase;
  }

std::string HourlyForecastJSON::getConditionsShortPhrase(void)
  {
    assert(flagHasConditionsShortPhrase);
    return storeConditionsShortPhrase;
  }

const std::string HourlyForecastJSON::getConditionsShortPhrase(void) const
  {
    assert(flagHasConditionsShortPhrase);
    return storeConditionsShortPhrase;
  }

bool HourlyForecastJSON::hasWeatherIconURL(void) const
  {
    return flagHasWeatherIconURL;
  }

std::string HourlyForecastJSON::getWeatherIconURL(void)
  {
    assert(flagHasWeatherIconURL);
    return storeWeatherIconURL;
  }

const std::string HourlyForecastJSON::getWeatherIconURL(void) const
  {
    assert(flagHasWeatherIconURL);
    return storeWeatherIconURL;
  }

bool HourlyForecastJSON::hasConditionsImage(void) const
  {
    return flagHasConditionsImage;
  }

WeatherImageJSON * HourlyForecastJSON::getConditionsImage(void)
  {
    assert(flagHasConditionsImage);
    return storeConditionsImage;
  }

const WeatherImageJSON * HourlyForecastJSON::getConditionsImage(void) const
  {
    assert(flagHasConditionsImage);
    return storeConditionsImage;
  }

bool HourlyForecastJSON::hasTemperature(void) const
  {
    return flagHasTemperature;
  }

HourlyForecastJSON::TypeTemperatureJSON * HourlyForecastJSON::getTemperature(void)
  {
    assert(flagHasTemperature);
    return storeTemperature;
  }

const HourlyForecastJSON::TypeTemperatureJSON * HourlyForecastJSON::getTemperature(void) const
  {
    assert(flagHasTemperature);
    return storeTemperature;
  }

bool HourlyForecastJSON::hasFeelsLikeTemperature(void) const
  {
    return flagHasFeelsLikeTemperature;
  }

HourlyForecastJSON::TypeFeelsLikeTemperatureJSON * HourlyForecastJSON::getFeelsLikeTemperature(void)
  {
    assert(flagHasFeelsLikeTemperature);
    return storeFeelsLikeTemperature;
  }

const HourlyForecastJSON::TypeFeelsLikeTemperatureJSON * HourlyForecastJSON::getFeelsLikeTemperature(void) const
  {
    assert(flagHasFeelsLikeTemperature);
    return storeFeelsLikeTemperature;
  }

bool HourlyForecastJSON::hasHeatIndex(void) const
  {
    return flagHasHeatIndex;
  }

HourlyForecastJSON::TypeHeatIndexJSON * HourlyForecastJSON::getHeatIndex(void)
  {
    assert(flagHasHeatIndex);
    return storeHeatIndex;
  }

const HourlyForecastJSON::TypeHeatIndexJSON * HourlyForecastJSON::getHeatIndex(void) const
  {
    assert(flagHasHeatIndex);
    return storeHeatIndex;
  }

bool HourlyForecastJSON::hasWindchill(void) const
  {
    return flagHasWindchill;
  }

HourlyForecastJSON::TypeWindchillJSON * HourlyForecastJSON::getWindchill(void)
  {
    assert(flagHasWindchill);
    return storeWindchill;
  }

const HourlyForecastJSON::TypeWindchillJSON * HourlyForecastJSON::getWindchill(void) const
  {
    assert(flagHasWindchill);
    return storeWindchill;
  }

bool HourlyForecastJSON::hasDewPoint(void) const
  {
    return flagHasDewPoint;
  }

HourlyForecastJSON::TypeDewPointJSON * HourlyForecastJSON::getDewPoint(void)
  {
    assert(flagHasDewPoint);
    return storeDewPoint;
  }

const HourlyForecastJSON::TypeDewPointJSON * HourlyForecastJSON::getDewPoint(void) const
  {
    assert(flagHasDewPoint);
    return storeDewPoint;
  }

bool HourlyForecastJSON::hasProbabilityOfPrecipitationPct(void) const
  {
    return flagHasProbabilityOfPrecipitationPct;
  }

uint8_t HourlyForecastJSON::getProbabilityOfPrecipitationPct(void)
  {
    assert(flagHasProbabilityOfPrecipitationPct);
    return storeProbabilityOfPrecipitationPct;
  }

const uint8_t HourlyForecastJSON::getProbabilityOfPrecipitationPct(void) const
  {
    assert(flagHasProbabilityOfPrecipitationPct);
    return storeProbabilityOfPrecipitationPct;
  }

bool HourlyForecastJSON::hasHumidityPct(void) const
  {
    return flagHasHumidityPct;
  }

uint8_t HourlyForecastJSON::getHumidityPct(void)
  {
    assert(flagHasHumidityPct);
    return storeHumidityPct;
  }

const uint8_t HourlyForecastJSON::getHumidityPct(void) const
  {
    assert(flagHasHumidityPct);
    return storeHumidityPct;
  }

bool HourlyForecastJSON::hasUVIndex(void) const
  {
    return flagHasUVIndex;
  }

HourlyForecastJSON::TypeUVIndexJSON * HourlyForecastJSON::getUVIndex(void)
  {
    assert(flagHasUVIndex);
    return storeUVIndex;
  }

const HourlyForecastJSON::TypeUVIndexJSON * HourlyForecastJSON::getUVIndex(void) const
  {
    assert(flagHasUVIndex);
    return storeUVIndex;
  }

bool HourlyForecastJSON::hasWind(void) const
  {
    return flagHasWind;
  }

HourlyForecastJSON::TypeWindJSON * HourlyForecastJSON::getWind(void)
  {
    assert(flagHasWind);
    return storeWind;
  }

const HourlyForecastJSON::TypeWindJSON * HourlyForecastJSON::getWind(void) const
  {
    assert(flagHasWind);
    return storeWind;
  }

bool HourlyForecastJSON::hasBarometricPressure(void) const
  {
    return flagHasBarometricPressure;
  }

HourlyForecastJSON::TypeBarometricPressureJSON * HourlyForecastJSON::getBarometricPressure(void)
  {
    assert(flagHasBarometricPressure);
    return storeBarometricPressure;
  }

const HourlyForecastJSON::TypeBarometricPressureJSON * HourlyForecastJSON::getBarometricPressure(void) const
  {
    assert(flagHasBarometricPressure);
    return storeBarometricPressure;
  }

bool HourlyForecastJSON::hasPrecipitationTotal(void) const
  {
    return flagHasPrecipitationTotal;
  }

HourlyForecastJSON::TypePrecipitationTotalJSON * HourlyForecastJSON::getPrecipitationTotal(void)
  {
    assert(flagHasPrecipitationTotal);
    return storePrecipitationTotal;
  }

const HourlyForecastJSON::TypePrecipitationTotalJSON * HourlyForecastJSON::getPrecipitationTotal(void) const
  {
    assert(flagHasPrecipitationTotal);
    return storePrecipitationTotal;
  }

bool HourlyForecastJSON::hasSnowTotal(void) const
  {
    return flagHasSnowTotal;
  }

HourlyForecastJSON::TypeSnowTotalJSON * HourlyForecastJSON::getSnowTotal(void)
  {
    assert(flagHasSnowTotal);
    return storeSnowTotal;
  }

const HourlyForecastJSON::TypeSnowTotalJSON * HourlyForecastJSON::getSnowTotal(void) const
  {
    assert(flagHasSnowTotal);
    return storeSnowTotal;
  }

bool HourlyForecastJSON::hasCloudinessPct(void) const
  {
    return flagHasCloudinessPct;
  }

uint8_t HourlyForecastJSON::getCloudinessPct(void)
  {
    assert(flagHasCloudinessPct);
    return storeCloudinessPct;
  }

const uint8_t HourlyForecastJSON::getCloudinessPct(void) const
  {
    assert(flagHasCloudinessPct);
    return storeCloudinessPct;
  }

HourlyForecastJSON::TypeTemperatureJSON *HourlyForecastJSON::TypeTemperatureJSON::from_json(JSONValue *json_value, bool ignore_extras)
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
HourlyForecastJSON::TypeFeelsLikeTemperatureJSON *HourlyForecastJSON::TypeFeelsLikeTemperatureJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    TypeFeelsLikeTemperatureJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<TypeFeelsLikeTemperatureJSON>, TypeFeelsLikeTemperatureJSON *, bool> generator("Type TypeFeelsLikeTemperature", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
HourlyForecastJSON::TypeHeatIndexJSON *HourlyForecastJSON::TypeHeatIndexJSON::from_json(JSONValue *json_value, bool ignore_extras)
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
HourlyForecastJSON::TypeWindchillJSON *HourlyForecastJSON::TypeWindchillJSON::from_json(JSONValue *json_value, bool ignore_extras)
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
HourlyForecastJSON::TypeDewPointJSON *HourlyForecastJSON::TypeDewPointJSON::from_json(JSONValue *json_value, bool ignore_extras)
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
HourlyForecastJSON::TypeUVIndexJSON *HourlyForecastJSON::TypeUVIndexJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    TypeUVIndexJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<TypeUVIndexJSON>, TypeUVIndexJSON *, bool> generator("Type TypeUVIndex", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
HourlyForecastJSON::TypeWindJSON *HourlyForecastJSON::TypeWindJSON::from_json(JSONValue *json_value, bool ignore_extras)
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
HourlyForecastJSON::TypeBarometricPressureJSON *HourlyForecastJSON::TypeBarometricPressureJSON::from_json(JSONValue *json_value, bool ignore_extras)
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
HourlyForecastJSON::TypePrecipitationTotalJSON *HourlyForecastJSON::TypePrecipitationTotalJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    TypePrecipitationTotalJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<TypePrecipitationTotalJSON>, TypePrecipitationTotalJSON *, bool> generator("Type TypePrecipitationTotal", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
HourlyForecastJSON::TypeSnowTotalJSON *HourlyForecastJSON::TypeSnowTotalJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    TypeSnowTotalJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<TypeSnowTotalJSON>, TypeSnowTotalJSON *, bool> generator("Type TypeSnowTotal", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
HourlyForecastJSON *HourlyForecastJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    HourlyForecastJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<HourlyForecastJSON>, HourlyForecastJSON *, bool> generator("Type HourlyForecast", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
