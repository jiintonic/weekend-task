/* file "ShowWeatherCurrentConditionsInformationNuggetJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "ShowWeatherCurrentConditionsInformationNuggetJSON.h"

#include "ShowWeatherCurrentConditionsInformationNuggetJSON.h"


ShowWeatherCurrentConditionsInformationNuggetJSON::TypeCurrentTemperatureJSON::TypeCurrentTemperatureJSON(const TypeCurrentTemperatureJSON &)
  {
    assert(false);
  }

ShowWeatherCurrentConditionsInformationNuggetJSON::TypeCurrentTemperatureJSON &ShowWeatherCurrentConditionsInformationNuggetJSON::TypeCurrentTemperatureJSON::operator=(const TypeCurrentTemperatureJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void ShowWeatherCurrentConditionsInformationNuggetJSON::TypeCurrentTemperatureJSON::fromJSONValue(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    UnitsValue_TemperatureJSON *convert_classy = UnitsValue_TemperatureJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setValue(convert_classy);
    convert_classy->remove_reference();
  }

ShowWeatherCurrentConditionsInformationNuggetJSON::TypeCurrentTemperatureJSON::TypeCurrentTemperatureJSON(void) :
        flagHasValue(false)
  {
    extraIndex = create_string_index();
  }

ShowWeatherCurrentConditionsInformationNuggetJSON::TypeCurrentTemperatureJSON::~TypeCurrentTemperatureJSON(void)
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

bool ShowWeatherCurrentConditionsInformationNuggetJSON::TypeCurrentTemperatureJSON::hasValue(void) const
  {
    return flagHasValue;
  }

UnitsValue_TemperatureJSON * ShowWeatherCurrentConditionsInformationNuggetJSON::TypeCurrentTemperatureJSON::getValue(void)
  {
    assert(flagHasValue);
    return storeValue;
  }

const UnitsValue_TemperatureJSON * ShowWeatherCurrentConditionsInformationNuggetJSON::TypeCurrentTemperatureJSON::getValue(void) const
  {
    assert(flagHasValue);
    return storeValue;
  }

ShowWeatherCurrentConditionsInformationNuggetJSON::TypeFeelsLikeTemperatureJSON::TypeFeelsLikeTemperatureJSON(const TypeFeelsLikeTemperatureJSON &)
  {
    assert(false);
  }

ShowWeatherCurrentConditionsInformationNuggetJSON::TypeFeelsLikeTemperatureJSON &ShowWeatherCurrentConditionsInformationNuggetJSON::TypeFeelsLikeTemperatureJSON::operator=(const TypeFeelsLikeTemperatureJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void ShowWeatherCurrentConditionsInformationNuggetJSON::TypeFeelsLikeTemperatureJSON::fromJSONValue(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    UnitsValue_TemperatureJSON *convert_classy = UnitsValue_TemperatureJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setValue(convert_classy);
    convert_classy->remove_reference();
  }

ShowWeatherCurrentConditionsInformationNuggetJSON::TypeFeelsLikeTemperatureJSON::TypeFeelsLikeTemperatureJSON(void) :
        flagHasValue(false)
  {
    extraIndex = create_string_index();
  }

ShowWeatherCurrentConditionsInformationNuggetJSON::TypeFeelsLikeTemperatureJSON::~TypeFeelsLikeTemperatureJSON(void)
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

bool ShowWeatherCurrentConditionsInformationNuggetJSON::TypeFeelsLikeTemperatureJSON::hasValue(void) const
  {
    return flagHasValue;
  }

UnitsValue_TemperatureJSON * ShowWeatherCurrentConditionsInformationNuggetJSON::TypeFeelsLikeTemperatureJSON::getValue(void)
  {
    assert(flagHasValue);
    return storeValue;
  }

const UnitsValue_TemperatureJSON * ShowWeatherCurrentConditionsInformationNuggetJSON::TypeFeelsLikeTemperatureJSON::getValue(void) const
  {
    assert(flagHasValue);
    return storeValue;
  }

ShowWeatherCurrentConditionsInformationNuggetJSON::TypeHeatIndexJSON::TypeHeatIndexJSON(const TypeHeatIndexJSON &)
  {
    assert(false);
  }

ShowWeatherCurrentConditionsInformationNuggetJSON::TypeHeatIndexJSON &ShowWeatherCurrentConditionsInformationNuggetJSON::TypeHeatIndexJSON::operator=(const TypeHeatIndexJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void ShowWeatherCurrentConditionsInformationNuggetJSON::TypeHeatIndexJSON::fromJSONValue(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    UnitsValue_TemperatureJSON *convert_classy = UnitsValue_TemperatureJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setValue(convert_classy);
    convert_classy->remove_reference();
  }

ShowWeatherCurrentConditionsInformationNuggetJSON::TypeHeatIndexJSON::TypeHeatIndexJSON(void) :
        flagHasValue(false)
  {
    extraIndex = create_string_index();
  }

ShowWeatherCurrentConditionsInformationNuggetJSON::TypeHeatIndexJSON::~TypeHeatIndexJSON(void)
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

bool ShowWeatherCurrentConditionsInformationNuggetJSON::TypeHeatIndexJSON::hasValue(void) const
  {
    return flagHasValue;
  }

UnitsValue_TemperatureJSON * ShowWeatherCurrentConditionsInformationNuggetJSON::TypeHeatIndexJSON::getValue(void)
  {
    assert(flagHasValue);
    return storeValue;
  }

const UnitsValue_TemperatureJSON * ShowWeatherCurrentConditionsInformationNuggetJSON::TypeHeatIndexJSON::getValue(void) const
  {
    assert(flagHasValue);
    return storeValue;
  }

ShowWeatherCurrentConditionsInformationNuggetJSON::TypeWindchillJSON::TypeWindchillJSON(const TypeWindchillJSON &)
  {
    assert(false);
  }

ShowWeatherCurrentConditionsInformationNuggetJSON::TypeWindchillJSON &ShowWeatherCurrentConditionsInformationNuggetJSON::TypeWindchillJSON::operator=(const TypeWindchillJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void ShowWeatherCurrentConditionsInformationNuggetJSON::TypeWindchillJSON::fromJSONValue(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    UnitsValue_TemperatureJSON *convert_classy = UnitsValue_TemperatureJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setValue(convert_classy);
    convert_classy->remove_reference();
  }

ShowWeatherCurrentConditionsInformationNuggetJSON::TypeWindchillJSON::TypeWindchillJSON(void) :
        flagHasValue(false)
  {
    extraIndex = create_string_index();
  }

ShowWeatherCurrentConditionsInformationNuggetJSON::TypeWindchillJSON::~TypeWindchillJSON(void)
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

bool ShowWeatherCurrentConditionsInformationNuggetJSON::TypeWindchillJSON::hasValue(void) const
  {
    return flagHasValue;
  }

UnitsValue_TemperatureJSON * ShowWeatherCurrentConditionsInformationNuggetJSON::TypeWindchillJSON::getValue(void)
  {
    assert(flagHasValue);
    return storeValue;
  }

const UnitsValue_TemperatureJSON * ShowWeatherCurrentConditionsInformationNuggetJSON::TypeWindchillJSON::getValue(void) const
  {
    assert(flagHasValue);
    return storeValue;
  }

ShowWeatherCurrentConditionsInformationNuggetJSON::TypeDewPointJSON::TypeDewPointJSON(const TypeDewPointJSON &)
  {
    assert(false);
  }

ShowWeatherCurrentConditionsInformationNuggetJSON::TypeDewPointJSON &ShowWeatherCurrentConditionsInformationNuggetJSON::TypeDewPointJSON::operator=(const TypeDewPointJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void ShowWeatherCurrentConditionsInformationNuggetJSON::TypeDewPointJSON::fromJSONValue(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    UnitsValue_TemperatureJSON *convert_classy = UnitsValue_TemperatureJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setValue(convert_classy);
    convert_classy->remove_reference();
  }

ShowWeatherCurrentConditionsInformationNuggetJSON::TypeDewPointJSON::TypeDewPointJSON(void) :
        flagHasValue(false)
  {
    extraIndex = create_string_index();
  }

ShowWeatherCurrentConditionsInformationNuggetJSON::TypeDewPointJSON::~TypeDewPointJSON(void)
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

bool ShowWeatherCurrentConditionsInformationNuggetJSON::TypeDewPointJSON::hasValue(void) const
  {
    return flagHasValue;
  }

UnitsValue_TemperatureJSON * ShowWeatherCurrentConditionsInformationNuggetJSON::TypeDewPointJSON::getValue(void)
  {
    assert(flagHasValue);
    return storeValue;
  }

const UnitsValue_TemperatureJSON * ShowWeatherCurrentConditionsInformationNuggetJSON::TypeDewPointJSON::getValue(void) const
  {
    assert(flagHasValue);
    return storeValue;
  }

ShowWeatherCurrentConditionsInformationNuggetJSON::TypeVisibilityJSON::TypeVisibilityJSON(const TypeVisibilityJSON &)
  {
    assert(false);
  }

ShowWeatherCurrentConditionsInformationNuggetJSON::TypeVisibilityJSON &ShowWeatherCurrentConditionsInformationNuggetJSON::TypeVisibilityJSON::operator=(const TypeVisibilityJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void ShowWeatherCurrentConditionsInformationNuggetJSON::TypeVisibilityJSON::fromJSONValue(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    UnitsValue_VisibilityJSON *convert_classy = UnitsValue_VisibilityJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setValue(convert_classy);
    convert_classy->remove_reference();
  }

ShowWeatherCurrentConditionsInformationNuggetJSON::TypeVisibilityJSON::TypeVisibilityJSON(void) :
        flagHasValue(false)
  {
    extraIndex = create_string_index();
  }

ShowWeatherCurrentConditionsInformationNuggetJSON::TypeVisibilityJSON::~TypeVisibilityJSON(void)
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

bool ShowWeatherCurrentConditionsInformationNuggetJSON::TypeVisibilityJSON::hasValue(void) const
  {
    return flagHasValue;
  }

UnitsValue_VisibilityJSON * ShowWeatherCurrentConditionsInformationNuggetJSON::TypeVisibilityJSON::getValue(void)
  {
    assert(flagHasValue);
    return storeValue;
  }

const UnitsValue_VisibilityJSON * ShowWeatherCurrentConditionsInformationNuggetJSON::TypeVisibilityJSON::getValue(void) const
  {
    assert(flagHasValue);
    return storeValue;
  }

ShowWeatherCurrentConditionsInformationNuggetJSON::TypePrecipitation1HourJSON::TypePrecipitation1HourJSON(const TypePrecipitation1HourJSON &)
  {
    assert(false);
  }

ShowWeatherCurrentConditionsInformationNuggetJSON::TypePrecipitation1HourJSON &ShowWeatherCurrentConditionsInformationNuggetJSON::TypePrecipitation1HourJSON::operator=(const TypePrecipitation1HourJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void ShowWeatherCurrentConditionsInformationNuggetJSON::TypePrecipitation1HourJSON::fromJSONValue(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    UnitsValue_PrecipitationJSON *convert_classy = UnitsValue_PrecipitationJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setValue(convert_classy);
    convert_classy->remove_reference();
  }

ShowWeatherCurrentConditionsInformationNuggetJSON::TypePrecipitation1HourJSON::TypePrecipitation1HourJSON(void) :
        flagHasValue(false)
  {
    extraIndex = create_string_index();
  }

ShowWeatherCurrentConditionsInformationNuggetJSON::TypePrecipitation1HourJSON::~TypePrecipitation1HourJSON(void)
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

bool ShowWeatherCurrentConditionsInformationNuggetJSON::TypePrecipitation1HourJSON::hasValue(void) const
  {
    return flagHasValue;
  }

UnitsValue_PrecipitationJSON * ShowWeatherCurrentConditionsInformationNuggetJSON::TypePrecipitation1HourJSON::getValue(void)
  {
    assert(flagHasValue);
    return storeValue;
  }

const UnitsValue_PrecipitationJSON * ShowWeatherCurrentConditionsInformationNuggetJSON::TypePrecipitation1HourJSON::getValue(void) const
  {
    assert(flagHasValue);
    return storeValue;
  }

ShowWeatherCurrentConditionsInformationNuggetJSON::TypePrecipitationTodayJSON::TypePrecipitationTodayJSON(const TypePrecipitationTodayJSON &)
  {
    assert(false);
  }

ShowWeatherCurrentConditionsInformationNuggetJSON::TypePrecipitationTodayJSON &ShowWeatherCurrentConditionsInformationNuggetJSON::TypePrecipitationTodayJSON::operator=(const TypePrecipitationTodayJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void ShowWeatherCurrentConditionsInformationNuggetJSON::TypePrecipitationTodayJSON::fromJSONValue(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    UnitsValue_PrecipitationJSON *convert_classy = UnitsValue_PrecipitationJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setValue(convert_classy);
    convert_classy->remove_reference();
  }

ShowWeatherCurrentConditionsInformationNuggetJSON::TypePrecipitationTodayJSON::TypePrecipitationTodayJSON(void) :
        flagHasValue(false)
  {
    extraIndex = create_string_index();
  }

ShowWeatherCurrentConditionsInformationNuggetJSON::TypePrecipitationTodayJSON::~TypePrecipitationTodayJSON(void)
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

bool ShowWeatherCurrentConditionsInformationNuggetJSON::TypePrecipitationTodayJSON::hasValue(void) const
  {
    return flagHasValue;
  }

UnitsValue_PrecipitationJSON * ShowWeatherCurrentConditionsInformationNuggetJSON::TypePrecipitationTodayJSON::getValue(void)
  {
    assert(flagHasValue);
    return storeValue;
  }

const UnitsValue_PrecipitationJSON * ShowWeatherCurrentConditionsInformationNuggetJSON::TypePrecipitationTodayJSON::getValue(void) const
  {
    assert(flagHasValue);
    return storeValue;
  }

ShowWeatherCurrentConditionsInformationNuggetJSON::TypeWindJSON::TypeWindJSON(const TypeWindJSON &)
  {
    assert(false);
  }

ShowWeatherCurrentConditionsInformationNuggetJSON::TypeWindJSON &ShowWeatherCurrentConditionsInformationNuggetJSON::TypeWindJSON::operator=(const TypeWindJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void ShowWeatherCurrentConditionsInformationNuggetJSON::TypeWindJSON::fromJSONValue(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    UnitsValue_WindJSON *convert_classy = UnitsValue_WindJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setValue(convert_classy);
    convert_classy->remove_reference();
  }

void ShowWeatherCurrentConditionsInformationNuggetJSON::TypeWindJSON::fromJSONDirectionAbbreviation(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field DirectionAbbreviation of TypeWindJSON is not a string.");
    setDirectionAbbreviation(std::string(json_string->getData()));
  }

void ShowWeatherCurrentConditionsInformationNuggetJSON::TypeWindJSON::fromJSONDirectionText(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field DirectionText of TypeWindJSON is not a string.");
    setDirectionText(std::string(json_string->getData()));
  }

void ShowWeatherCurrentConditionsInformationNuggetJSON::TypeWindJSON::fromJSONDirectionDegrees(JSONValue *json_value, bool ignore_extras)
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

ShowWeatherCurrentConditionsInformationNuggetJSON::TypeWindJSON::TypeWindJSON(void) :
        flagHasValue(false),
        flagHasDirectionAbbreviation(false),
        flagHasDirectionText(false),
        flagHasDirectionDegrees(false)
  {
    extraIndex = create_string_index();
  }

ShowWeatherCurrentConditionsInformationNuggetJSON::TypeWindJSON::~TypeWindJSON(void)
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

bool ShowWeatherCurrentConditionsInformationNuggetJSON::TypeWindJSON::hasValue(void) const
  {
    return flagHasValue;
  }

UnitsValue_WindJSON * ShowWeatherCurrentConditionsInformationNuggetJSON::TypeWindJSON::getValue(void)
  {
    assert(flagHasValue);
    return storeValue;
  }

const UnitsValue_WindJSON * ShowWeatherCurrentConditionsInformationNuggetJSON::TypeWindJSON::getValue(void) const
  {
    assert(flagHasValue);
    return storeValue;
  }

bool ShowWeatherCurrentConditionsInformationNuggetJSON::TypeWindJSON::hasDirectionAbbreviation(void) const
  {
    return flagHasDirectionAbbreviation;
  }

std::string ShowWeatherCurrentConditionsInformationNuggetJSON::TypeWindJSON::getDirectionAbbreviation(void)
  {
    assert(flagHasDirectionAbbreviation);
    return storeDirectionAbbreviation;
  }

const std::string ShowWeatherCurrentConditionsInformationNuggetJSON::TypeWindJSON::getDirectionAbbreviation(void) const
  {
    assert(flagHasDirectionAbbreviation);
    return storeDirectionAbbreviation;
  }

bool ShowWeatherCurrentConditionsInformationNuggetJSON::TypeWindJSON::hasDirectionText(void) const
  {
    return flagHasDirectionText;
  }

std::string ShowWeatherCurrentConditionsInformationNuggetJSON::TypeWindJSON::getDirectionText(void)
  {
    assert(flagHasDirectionText);
    return storeDirectionText;
  }

const std::string ShowWeatherCurrentConditionsInformationNuggetJSON::TypeWindJSON::getDirectionText(void) const
  {
    assert(flagHasDirectionText);
    return storeDirectionText;
  }

bool ShowWeatherCurrentConditionsInformationNuggetJSON::TypeWindJSON::hasDirectionDegrees(void) const
  {
    return flagHasDirectionDegrees;
  }

uint16_t ShowWeatherCurrentConditionsInformationNuggetJSON::TypeWindJSON::getDirectionDegrees(void)
  {
    assert(flagHasDirectionDegrees);
    return storeDirectionDegrees;
  }

const uint16_t ShowWeatherCurrentConditionsInformationNuggetJSON::TypeWindJSON::getDirectionDegrees(void) const
  {
    assert(flagHasDirectionDegrees);
    return storeDirectionDegrees;
  }

ShowWeatherCurrentConditionsInformationNuggetJSON::TypeWindGustJSON::TypeWindGustJSON(const TypeWindGustJSON &)
  {
    assert(false);
  }

ShowWeatherCurrentConditionsInformationNuggetJSON::TypeWindGustJSON &ShowWeatherCurrentConditionsInformationNuggetJSON::TypeWindGustJSON::operator=(const TypeWindGustJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void ShowWeatherCurrentConditionsInformationNuggetJSON::TypeWindGustJSON::fromJSONValue(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    UnitsValue_WindJSON *convert_classy = UnitsValue_WindJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setValue(convert_classy);
    convert_classy->remove_reference();
  }

ShowWeatherCurrentConditionsInformationNuggetJSON::TypeWindGustJSON::TypeWindGustJSON(void) :
        flagHasValue(false)
  {
    extraIndex = create_string_index();
  }

ShowWeatherCurrentConditionsInformationNuggetJSON::TypeWindGustJSON::~TypeWindGustJSON(void)
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

bool ShowWeatherCurrentConditionsInformationNuggetJSON::TypeWindGustJSON::hasValue(void) const
  {
    return flagHasValue;
  }

UnitsValue_WindJSON * ShowWeatherCurrentConditionsInformationNuggetJSON::TypeWindGustJSON::getValue(void)
  {
    assert(flagHasValue);
    return storeValue;
  }

const UnitsValue_WindJSON * ShowWeatherCurrentConditionsInformationNuggetJSON::TypeWindGustJSON::getValue(void) const
  {
    assert(flagHasValue);
    return storeValue;
  }

ShowWeatherCurrentConditionsInformationNuggetJSON::TypeBarometricPressureJSON::TypeBarometricPressureJSON(const TypeBarometricPressureJSON &)
  {
    assert(false);
  }

ShowWeatherCurrentConditionsInformationNuggetJSON::TypeBarometricPressureJSON &ShowWeatherCurrentConditionsInformationNuggetJSON::TypeBarometricPressureJSON::operator=(const TypeBarometricPressureJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void ShowWeatherCurrentConditionsInformationNuggetJSON::TypeBarometricPressureJSON::fromJSONValue(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    UnitsValue_PressureJSON *convert_classy = UnitsValue_PressureJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setValue(convert_classy);
    convert_classy->remove_reference();
  }

void ShowWeatherCurrentConditionsInformationNuggetJSON::TypeBarometricPressureJSON::fromJSONTrend(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Trend of TypeBarometricPressureJSON is not a string.");
    setTrend(std::string(json_string->getData()));
  }

ShowWeatherCurrentConditionsInformationNuggetJSON::TypeBarometricPressureJSON::TypeBarometricPressureJSON(void) :
        flagHasValue(false),
        flagHasTrend(false)
  {
    extraIndex = create_string_index();
  }

ShowWeatherCurrentConditionsInformationNuggetJSON::TypeBarometricPressureJSON::~TypeBarometricPressureJSON(void)
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

bool ShowWeatherCurrentConditionsInformationNuggetJSON::TypeBarometricPressureJSON::hasValue(void) const
  {
    return flagHasValue;
  }

UnitsValue_PressureJSON * ShowWeatherCurrentConditionsInformationNuggetJSON::TypeBarometricPressureJSON::getValue(void)
  {
    assert(flagHasValue);
    return storeValue;
  }

const UnitsValue_PressureJSON * ShowWeatherCurrentConditionsInformationNuggetJSON::TypeBarometricPressureJSON::getValue(void) const
  {
    assert(flagHasValue);
    return storeValue;
  }

bool ShowWeatherCurrentConditionsInformationNuggetJSON::TypeBarometricPressureJSON::hasTrend(void) const
  {
    return flagHasTrend;
  }

std::string ShowWeatherCurrentConditionsInformationNuggetJSON::TypeBarometricPressureJSON::getTrend(void)
  {
    assert(flagHasTrend);
    return storeTrend;
  }

const std::string ShowWeatherCurrentConditionsInformationNuggetJSON::TypeBarometricPressureJSON::getTrend(void) const
  {
    assert(flagHasTrend);
    return storeTrend;
  }

ShowWeatherCurrentConditionsInformationNuggetJSON::TypeUVIndexJSON::TypeUVIndexJSON(const TypeUVIndexJSON &)
  {
    assert(false);
  }

ShowWeatherCurrentConditionsInformationNuggetJSON::TypeUVIndexJSON &ShowWeatherCurrentConditionsInformationNuggetJSON::TypeUVIndexJSON::operator=(const TypeUVIndexJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void ShowWeatherCurrentConditionsInformationNuggetJSON::TypeUVIndexJSON::fromJSONValue(JSONValue *json_value, bool ignore_extras)
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

void ShowWeatherCurrentConditionsInformationNuggetJSON::TypeUVIndexJSON::fromJSONText(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Text of TypeUVIndexJSON is not a string.");
    setText(std::string(json_string->getData()));
  }

ShowWeatherCurrentConditionsInformationNuggetJSON::TypeUVIndexJSON::TypeUVIndexJSON(void) :
        flagHasValue(false),
        flagHasText(false)
  {
    extraIndex = create_string_index();
  }

ShowWeatherCurrentConditionsInformationNuggetJSON::TypeUVIndexJSON::~TypeUVIndexJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool ShowWeatherCurrentConditionsInformationNuggetJSON::TypeUVIndexJSON::hasValue(void) const
  {
    return flagHasValue;
  }

uint8_t ShowWeatherCurrentConditionsInformationNuggetJSON::TypeUVIndexJSON::getValue(void)
  {
    assert(flagHasValue);
    return storeValue;
  }

const uint8_t ShowWeatherCurrentConditionsInformationNuggetJSON::TypeUVIndexJSON::getValue(void) const
  {
    assert(flagHasValue);
    return storeValue;
  }

bool ShowWeatherCurrentConditionsInformationNuggetJSON::TypeUVIndexJSON::hasText(void) const
  {
    return flagHasText;
  }

std::string ShowWeatherCurrentConditionsInformationNuggetJSON::TypeUVIndexJSON::getText(void)
  {
    assert(flagHasText);
    return storeText;
  }

const std::string ShowWeatherCurrentConditionsInformationNuggetJSON::TypeUVIndexJSON::getText(void) const
  {
    assert(flagHasText);
    return storeText;
  }

ShowWeatherCurrentConditionsInformationNuggetJSON::ShowWeatherCurrentConditionsInformationNuggetJSON(const ShowWeatherCurrentConditionsInformationNuggetJSON &)
  {
    assert(false);
  }

ShowWeatherCurrentConditionsInformationNuggetJSON &ShowWeatherCurrentConditionsInformationNuggetJSON::operator=(const ShowWeatherCurrentConditionsInformationNuggetJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *ShowWeatherCurrentConditionsInformationNuggetJSON::extraAttributionToJSON(void) const
  {
    JSONValueHandler handler_Attribution;
    storeAttribution->write_as_json(&handler_Attribution);
    handler_Attribution.result->add_reference();
    return handler_Attribution.result;
  }

JSONValue *ShowWeatherCurrentConditionsInformationNuggetJSON::extraLocationToJSON(void) const
  {
    JSONValueHandler handler_Location;
    storeLocation->write_as_json(&handler_Location);
    handler_Location.result->add_reference();
    return handler_Location.result;
  }

JSONValue *ShowWeatherCurrentConditionsInformationNuggetJSON::extraAlertsToJSON(void) const
  {
    JSONArrayValue *generated_array_1_Alerts = new JSONArrayValue();
    for (size_t num1 = 0; num1 < storeAlerts.size(); ++num1)
      {
        JSONValueHandler handler_Alerts;
        storeAlerts[num1]->write_as_json(&handler_Alerts);
        handler_Alerts.result->add_reference();
        generated_array_1_Alerts->appendComponent(handler_Alerts.result);
        handler_Alerts.result->remove_reference();
      }
    return generated_array_1_Alerts;
  }

JSONValue *ShowWeatherCurrentConditionsInformationNuggetJSON::extraRequestedAttributeToJSON(void) const
  {
    JSONStringValue *generated_string_RequestedAttribute = new JSONStringValue(storeRequestedAttribute.c_str());
    return generated_string_RequestedAttribute;
  }

JSONValue *ShowWeatherCurrentConditionsInformationNuggetJSON::extraIsYesNoQueryToJSON(void) const
  {
    JSONValue *generated_boolean_IsYesNoQuery = (storeIsYesNoQuery ? (JSONValue *)new JSONTrueValue() : (JSONValue *)new JSONFalseValue());
    return generated_boolean_IsYesNoQuery;
  }

JSONValue *ShowWeatherCurrentConditionsInformationNuggetJSON::extraWeatherMapRequestedToJSON(void) const
  {
    JSONValue *generated_boolean_WeatherMapRequested = (storeWeatherMapRequested ? (JSONValue *)new JSONTrueValue() : (JSONValue *)new JSONFalseValue());
    return generated_boolean_WeatherMapRequested;
  }

JSONValue *ShowWeatherCurrentConditionsInformationNuggetJSON::extraAlongTheRouteToJSON(void) const
  {
    JSONValue *generated_boolean_AlongTheRoute = (storeAlongTheRoute ? (JSONValue *)new JSONTrueValue() : (JSONValue *)new JSONFalseValue());
    return generated_boolean_AlongTheRoute;
  }

JSONValue *ShowWeatherCurrentConditionsInformationNuggetJSON::extraObservationDateAndTimeToJSON(void) const
  {
    JSONValueHandler handler_ObservationDateAndTime;
    storeObservationDateAndTime->write_as_json(&handler_ObservationDateAndTime);
    handler_ObservationDateAndTime.result->add_reference();
    return handler_ObservationDateAndTime.result;
  }

JSONValue *ShowWeatherCurrentConditionsInformationNuggetJSON::extraConditionsShortPhraseToJSON(void) const
  {
    JSONStringValue *generated_string_ConditionsShortPhrase = new JSONStringValue(storeConditionsShortPhrase.c_str());
    return generated_string_ConditionsShortPhrase;
  }

JSONValue *ShowWeatherCurrentConditionsInformationNuggetJSON::extraCurrentTemperatureToJSON(void) const
  {
    JSONValueHandler handler_CurrentTemperature;
    storeCurrentTemperature->write_as_json(&handler_CurrentTemperature);
    handler_CurrentTemperature.result->add_reference();
    return handler_CurrentTemperature.result;
  }

JSONValue *ShowWeatherCurrentConditionsInformationNuggetJSON::extraFeelsLikeTemperatureToJSON(void) const
  {
    JSONValueHandler handler_FeelsLikeTemperature;
    storeFeelsLikeTemperature->write_as_json(&handler_FeelsLikeTemperature);
    handler_FeelsLikeTemperature.result->add_reference();
    return handler_FeelsLikeTemperature.result;
  }

JSONValue *ShowWeatherCurrentConditionsInformationNuggetJSON::extraHeatIndexToJSON(void) const
  {
    JSONValueHandler handler_HeatIndex;
    storeHeatIndex->write_as_json(&handler_HeatIndex);
    handler_HeatIndex.result->add_reference();
    return handler_HeatIndex.result;
  }

JSONValue *ShowWeatherCurrentConditionsInformationNuggetJSON::extraWindchillToJSON(void) const
  {
    JSONValueHandler handler_Windchill;
    storeWindchill->write_as_json(&handler_Windchill);
    handler_Windchill.result->add_reference();
    return handler_Windchill.result;
  }

JSONValue *ShowWeatherCurrentConditionsInformationNuggetJSON::extraDewPointToJSON(void) const
  {
    JSONValueHandler handler_DewPoint;
    storeDewPoint->write_as_json(&handler_DewPoint);
    handler_DewPoint.result->add_reference();
    return handler_DewPoint.result;
  }

JSONValue *ShowWeatherCurrentConditionsInformationNuggetJSON::extraWeatherIconURLToJSON(void) const
  {
    JSONStringValue *generated_string_WeatherIconURL = new JSONStringValue(storeWeatherIconURL.c_str());
    return generated_string_WeatherIconURL;
  }

JSONValue *ShowWeatherCurrentConditionsInformationNuggetJSON::extraConditionsImageToJSON(void) const
  {
    JSONValueHandler handler_ConditionsImage;
    storeConditionsImage->write_as_json(&handler_ConditionsImage);
    handler_ConditionsImage.result->add_reference();
    return handler_ConditionsImage.result;
  }

JSONValue *ShowWeatherCurrentConditionsInformationNuggetJSON::extraHumidityPctToJSON(void) const
  {
    JSONIntegerValue *generated_integer_HumidityPct = new JSONIntegerValue(storeHumidityPct);
    return generated_integer_HumidityPct;
  }

JSONValue *ShowWeatherCurrentConditionsInformationNuggetJSON::extraVisibilityToJSON(void) const
  {
    JSONValueHandler handler_Visibility;
    storeVisibility->write_as_json(&handler_Visibility);
    handler_Visibility.result->add_reference();
    return handler_Visibility.result;
  }

JSONValue *ShowWeatherCurrentConditionsInformationNuggetJSON::extraPrecipitation1HourToJSON(void) const
  {
    JSONValueHandler handler_Precipitation1Hour;
    storePrecipitation1Hour->write_as_json(&handler_Precipitation1Hour);
    handler_Precipitation1Hour.result->add_reference();
    return handler_Precipitation1Hour.result;
  }

JSONValue *ShowWeatherCurrentConditionsInformationNuggetJSON::extraPrecipitationTodayToJSON(void) const
  {
    JSONValueHandler handler_PrecipitationToday;
    storePrecipitationToday->write_as_json(&handler_PrecipitationToday);
    handler_PrecipitationToday.result->add_reference();
    return handler_PrecipitationToday.result;
  }

JSONValue *ShowWeatherCurrentConditionsInformationNuggetJSON::extraWindToJSON(void) const
  {
    JSONValueHandler handler_Wind;
    storeWind->write_as_json(&handler_Wind);
    handler_Wind.result->add_reference();
    return handler_Wind.result;
  }

JSONValue *ShowWeatherCurrentConditionsInformationNuggetJSON::extraWindGustToJSON(void) const
  {
    JSONValueHandler handler_WindGust;
    storeWindGust->write_as_json(&handler_WindGust);
    handler_WindGust.result->add_reference();
    return handler_WindGust.result;
  }

JSONValue *ShowWeatherCurrentConditionsInformationNuggetJSON::extraBarometricPressureToJSON(void) const
  {
    JSONValueHandler handler_BarometricPressure;
    storeBarometricPressure->write_as_json(&handler_BarometricPressure);
    handler_BarometricPressure.result->add_reference();
    return handler_BarometricPressure.result;
  }

JSONValue *ShowWeatherCurrentConditionsInformationNuggetJSON::extraUVIndexToJSON(void) const
  {
    JSONValueHandler handler_UVIndex;
    storeUVIndex->write_as_json(&handler_UVIndex);
    handler_UVIndex.result->add_reference();
    return handler_UVIndex.result;
  }

JSONValue *ShowWeatherCurrentConditionsInformationNuggetJSON::extraCloudinessPctToJSON(void) const
  {
    JSONIntegerValue *generated_integer_CloudinessPct = new JSONIntegerValue(storeCloudinessPct);
    return generated_integer_CloudinessPct;
  }

JSONValue *ShowWeatherCurrentConditionsInformationNuggetJSON::extraDailyForecastsToJSON(void) const
  {
    JSONArrayValue *generated_array_2_DailyForecasts = new JSONArrayValue();
    for (size_t num2 = 0; num2 < storeDailyForecasts.size(); ++num2)
      {
        JSONValueHandler handler_DailyForecasts;
        storeDailyForecasts[num2]->write_as_json(&handler_DailyForecasts);
        handler_DailyForecasts.result->add_reference();
        generated_array_2_DailyForecasts->appendComponent(handler_DailyForecasts.result);
        handler_DailyForecasts.result->remove_reference();
      }
    return generated_array_2_DailyForecasts;
  }

JSONValue *ShowWeatherCurrentConditionsInformationNuggetJSON::extraHourlyForecastsToJSON(void) const
  {
    JSONArrayValue *generated_array_3_HourlyForecasts = new JSONArrayValue();
    for (size_t num3 = 0; num3 < storeHourlyForecasts.size(); ++num3)
      {
        JSONValueHandler handler_HourlyForecasts;
        storeHourlyForecasts[num3]->write_as_json(&handler_HourlyForecasts);
        handler_HourlyForecasts.result->add_reference();
        generated_array_3_HourlyForecasts->appendComponent(handler_HourlyForecasts.result);
        handler_HourlyForecasts.result->remove_reference();
      }
    return generated_array_3_HourlyForecasts;
  }

void ShowWeatherCurrentConditionsInformationNuggetJSON::fromJSONAttribution(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    AttributionJSON *convert_classy = AttributionJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setAttribution(convert_classy);
    convert_classy->remove_reference();
  }

void ShowWeatherCurrentConditionsInformationNuggetJSON::fromJSONLocation(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    MapLocationJSON *convert_classy = MapLocationJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setLocation(convert_classy);
    convert_classy->remove_reference();
  }

void ShowWeatherCurrentConditionsInformationNuggetJSON::fromJSONAlerts(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field Alerts of ShowWeatherCurrentConditionsInformationNuggetJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< AlertJSON * > vector_Alerts1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        AlertJSON *convert_classy = AlertJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_Alerts1[num1] = convert_classy;
      }
    initAlerts();
    for (size_t num4 = 0; num4 < vector_Alerts1.size(); ++num4)
        appendAlerts(vector_Alerts1[num4]);
    for (size_t num1 = 0; num1 < vector_Alerts1.size(); ++num1)
      {
        vector_Alerts1[num1]->remove_reference();
      }
  }

void ShowWeatherCurrentConditionsInformationNuggetJSON::fromJSONRequestedAttribute(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field RequestedAttribute of ShowWeatherCurrentConditionsInformationNuggetJSON is not a string.");
    setRequestedAttribute(std::string(json_string->getData()));
  }

void ShowWeatherCurrentConditionsInformationNuggetJSON::fromJSONIsYesNoQuery(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field IsYesNoQuery of ShowWeatherCurrentConditionsInformationNuggetJSON is not true for false.");
          }
      }
    setIsYesNoQuery(the_bool);
  }

void ShowWeatherCurrentConditionsInformationNuggetJSON::fromJSONWeatherMapRequested(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field WeatherMapRequested of ShowWeatherCurrentConditionsInformationNuggetJSON is not true for false.");
          }
      }
    setWeatherMapRequested(the_bool);
  }

void ShowWeatherCurrentConditionsInformationNuggetJSON::fromJSONAlongTheRoute(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field AlongTheRoute of ShowWeatherCurrentConditionsInformationNuggetJSON is not true for false.");
          }
      }
    setAlongTheRoute(the_bool);
  }

void ShowWeatherCurrentConditionsInformationNuggetJSON::fromJSONObservationDateAndTime(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DateAndOrTimeJSON *convert_classy = DateAndOrTimeJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setObservationDateAndTime(convert_classy);
    convert_classy->remove_reference();
  }

void ShowWeatherCurrentConditionsInformationNuggetJSON::fromJSONConditionsShortPhrase(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field ConditionsShortPhrase of ShowWeatherCurrentConditionsInformationNuggetJSON is not a string.");
    setConditionsShortPhrase(std::string(json_string->getData()));
  }

void ShowWeatherCurrentConditionsInformationNuggetJSON::fromJSONCurrentTemperature(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TypeCurrentTemperatureJSON *convert_classy = TypeCurrentTemperatureJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setCurrentTemperature(convert_classy);
    convert_classy->remove_reference();
  }

void ShowWeatherCurrentConditionsInformationNuggetJSON::fromJSONFeelsLikeTemperature(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TypeFeelsLikeTemperatureJSON *convert_classy = TypeFeelsLikeTemperatureJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setFeelsLikeTemperature(convert_classy);
    convert_classy->remove_reference();
  }

void ShowWeatherCurrentConditionsInformationNuggetJSON::fromJSONHeatIndex(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TypeHeatIndexJSON *convert_classy = TypeHeatIndexJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setHeatIndex(convert_classy);
    convert_classy->remove_reference();
  }

void ShowWeatherCurrentConditionsInformationNuggetJSON::fromJSONWindchill(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TypeWindchillJSON *convert_classy = TypeWindchillJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setWindchill(convert_classy);
    convert_classy->remove_reference();
  }

void ShowWeatherCurrentConditionsInformationNuggetJSON::fromJSONDewPoint(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TypeDewPointJSON *convert_classy = TypeDewPointJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setDewPoint(convert_classy);
    convert_classy->remove_reference();
  }

void ShowWeatherCurrentConditionsInformationNuggetJSON::fromJSONWeatherIconURL(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field WeatherIconURL of ShowWeatherCurrentConditionsInformationNuggetJSON is not a string.");
    setWeatherIconURL(std::string(json_string->getData()));
  }

void ShowWeatherCurrentConditionsInformationNuggetJSON::fromJSONConditionsImage(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    WeatherImageJSON *convert_classy = WeatherImageJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setConditionsImage(convert_classy);
    convert_classy->remove_reference();
  }

void ShowWeatherCurrentConditionsInformationNuggetJSON::fromJSONHumidityPct(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    uint8_t extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field HumidityPct of ShowWeatherCurrentConditionsInformationNuggetJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field HumidityPct of ShowWeatherCurrentConditionsInformationNuggetJSON is not an integer.");
          }
        extracted_integer = (uint8_t)(json_rational->getUnsignedLongInt())    ;
      }
    else
      {
        extracted_integer = (uint8_t)(json_integer->getUnsignedLongInt())    ;
      }
    setHumidityPct(extracted_integer);
  }

void ShowWeatherCurrentConditionsInformationNuggetJSON::fromJSONVisibility(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TypeVisibilityJSON *convert_classy = TypeVisibilityJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setVisibility(convert_classy);
    convert_classy->remove_reference();
  }

void ShowWeatherCurrentConditionsInformationNuggetJSON::fromJSONPrecipitation1Hour(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TypePrecipitation1HourJSON *convert_classy = TypePrecipitation1HourJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setPrecipitation1Hour(convert_classy);
    convert_classy->remove_reference();
  }

void ShowWeatherCurrentConditionsInformationNuggetJSON::fromJSONPrecipitationToday(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TypePrecipitationTodayJSON *convert_classy = TypePrecipitationTodayJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setPrecipitationToday(convert_classy);
    convert_classy->remove_reference();
  }

void ShowWeatherCurrentConditionsInformationNuggetJSON::fromJSONWind(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TypeWindJSON *convert_classy = TypeWindJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setWind(convert_classy);
    convert_classy->remove_reference();
  }

void ShowWeatherCurrentConditionsInformationNuggetJSON::fromJSONWindGust(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TypeWindGustJSON *convert_classy = TypeWindGustJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setWindGust(convert_classy);
    convert_classy->remove_reference();
  }

void ShowWeatherCurrentConditionsInformationNuggetJSON::fromJSONBarometricPressure(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TypeBarometricPressureJSON *convert_classy = TypeBarometricPressureJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setBarometricPressure(convert_classy);
    convert_classy->remove_reference();
  }

void ShowWeatherCurrentConditionsInformationNuggetJSON::fromJSONUVIndex(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TypeUVIndexJSON *convert_classy = TypeUVIndexJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setUVIndex(convert_classy);
    convert_classy->remove_reference();
  }

void ShowWeatherCurrentConditionsInformationNuggetJSON::fromJSONCloudinessPct(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    uint8_t extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field CloudinessPct of ShowWeatherCurrentConditionsInformationNuggetJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field CloudinessPct of ShowWeatherCurrentConditionsInformationNuggetJSON is not an integer.");
          }
        extracted_integer = (uint8_t)(json_rational->getUnsignedLongInt())    ;
      }
    else
      {
        extracted_integer = (uint8_t)(json_integer->getUnsignedLongInt())    ;
      }
    setCloudinessPct(extracted_integer);
  }

void ShowWeatherCurrentConditionsInformationNuggetJSON::fromJSONDailyForecasts(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field DailyForecasts of ShowWeatherCurrentConditionsInformationNuggetJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< DailyForecastJSON * > vector_DailyForecasts1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        DailyForecastJSON *convert_classy = DailyForecastJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_DailyForecasts1[num1] = convert_classy;
      }
    initDailyForecasts();
    for (size_t num5 = 0; num5 < vector_DailyForecasts1.size(); ++num5)
        appendDailyForecasts(vector_DailyForecasts1[num5]);
    for (size_t num1 = 0; num1 < vector_DailyForecasts1.size(); ++num1)
      {
        vector_DailyForecasts1[num1]->remove_reference();
      }
  }

void ShowWeatherCurrentConditionsInformationNuggetJSON::fromJSONHourlyForecasts(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field HourlyForecasts of ShowWeatherCurrentConditionsInformationNuggetJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< HourlyForecastJSON * > vector_HourlyForecasts1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        HourlyForecastJSON *convert_classy = HourlyForecastJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_HourlyForecasts1[num1] = convert_classy;
      }
    initHourlyForecasts();
    for (size_t num6 = 0; num6 < vector_HourlyForecasts1.size(); ++num6)
        appendHourlyForecasts(vector_HourlyForecasts1[num6]);
    for (size_t num1 = 0; num1 < vector_HourlyForecasts1.size(); ++num1)
      {
        vector_HourlyForecasts1[num1]->remove_reference();
      }
  }

ShowWeatherCurrentConditionsInformationNuggetJSON::ShowWeatherCurrentConditionsInformationNuggetJSON(void) :
        flagHasAttribution(false),
        flagHasLocation(false),
        flagHasAlerts(false),
        flagHasRequestedAttribute(false),
        flagHasIsYesNoQuery(false),
        flagHasWeatherMapRequested(false),
        flagHasAlongTheRoute(false),
        flagHasObservationDateAndTime(false),
        flagHasConditionsShortPhrase(false),
        flagHasCurrentTemperature(false),
        flagHasFeelsLikeTemperature(false),
        flagHasHeatIndex(false),
        flagHasWindchill(false),
        flagHasDewPoint(false),
        flagHasWeatherIconURL(false),
        flagHasConditionsImage(false),
        flagHasHumidityPct(false),
        flagHasVisibility(false),
        flagHasPrecipitation1Hour(false),
        flagHasPrecipitationToday(false),
        flagHasWind(false),
        flagHasWindGust(false),
        flagHasBarometricPressure(false),
        flagHasUVIndex(false),
        flagHasCloudinessPct(false),
        flagHasDailyForecasts(false),
        flagHasHourlyForecasts(false)
  {
    extraIndex = create_string_index();
  }

ShowWeatherCurrentConditionsInformationNuggetJSON::~ShowWeatherCurrentConditionsInformationNuggetJSON(void)
  {
    if (flagHasAttribution)
      {
        storeAttribution->remove_reference();
      }
    if (flagHasLocation)
      {
        storeLocation->remove_reference();
      }
    if (flagHasAlerts)
      {
        for (size_t num10 = 0; num10 < storeAlerts.size(); ++num10)
          {
            storeAlerts[num10]->remove_reference();
          }
      }
    if (flagHasObservationDateAndTime)
      {
        storeObservationDateAndTime->remove_reference();
      }
    if (flagHasCurrentTemperature)
      {
        storeCurrentTemperature->remove_reference();
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
    if (flagHasConditionsImage)
      {
        storeConditionsImage->remove_reference();
      }
    if (flagHasVisibility)
      {
        storeVisibility->remove_reference();
      }
    if (flagHasPrecipitation1Hour)
      {
        storePrecipitation1Hour->remove_reference();
      }
    if (flagHasPrecipitationToday)
      {
        storePrecipitationToday->remove_reference();
      }
    if (flagHasWind)
      {
        storeWind->remove_reference();
      }
    if (flagHasWindGust)
      {
        storeWindGust->remove_reference();
      }
    if (flagHasBarometricPressure)
      {
        storeBarometricPressure->remove_reference();
      }
    if (flagHasUVIndex)
      {
        storeUVIndex->remove_reference();
      }
    if (flagHasDailyForecasts)
      {
        for (size_t num11 = 0; num11 < storeDailyForecasts.size(); ++num11)
          {
            storeDailyForecasts[num11]->remove_reference();
          }
      }
    if (flagHasHourlyForecasts)
      {
        for (size_t num12 = 0; num12 < storeHourlyForecasts.size(); ++num12)
          {
            storeHourlyForecasts[num12]->remove_reference();
          }
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *ShowWeatherCurrentConditionsInformationNuggetJSON::getWeatherNuggetKind(void) const
  {
    return "ShowWeatherCurrentConditions";
  }

bool ShowWeatherCurrentConditionsInformationNuggetJSON::hasAttribution(void) const
  {
    return flagHasAttribution;
  }

AttributionJSON * ShowWeatherCurrentConditionsInformationNuggetJSON::getAttribution(void)
  {
    assert(flagHasAttribution);
    return storeAttribution;
  }

const AttributionJSON * ShowWeatherCurrentConditionsInformationNuggetJSON::getAttribution(void) const
  {
    assert(flagHasAttribution);
    return storeAttribution;
  }

bool ShowWeatherCurrentConditionsInformationNuggetJSON::hasLocation(void) const
  {
    return flagHasLocation;
  }

MapLocationJSON * ShowWeatherCurrentConditionsInformationNuggetJSON::getLocation(void)
  {
    assert(flagHasLocation);
    return storeLocation;
  }

const MapLocationJSON * ShowWeatherCurrentConditionsInformationNuggetJSON::getLocation(void) const
  {
    assert(flagHasLocation);
    return storeLocation;
  }

bool ShowWeatherCurrentConditionsInformationNuggetJSON::hasAlerts(void) const
  {
    return flagHasAlerts;
  }

size_t ShowWeatherCurrentConditionsInformationNuggetJSON::countOfAlerts(void) const
  {
    assert(flagHasAlerts);
    return storeAlerts.size();
  }

AlertJSON * ShowWeatherCurrentConditionsInformationNuggetJSON::elementOfAlerts(size_t element_num)
  {
    assert(flagHasAlerts);
    return storeAlerts[element_num];
  }

const AlertJSON * ShowWeatherCurrentConditionsInformationNuggetJSON::elementOfAlerts(size_t element_num) const
  {
    assert(flagHasAlerts);
    return storeAlerts[element_num];
  }

std::vector< AlertJSON * > ShowWeatherCurrentConditionsInformationNuggetJSON::getAlerts(void)
  {
    assert(flagHasAlerts);
    return storeAlerts;
  }

const std::vector< AlertJSON * > ShowWeatherCurrentConditionsInformationNuggetJSON::getAlerts(void) const
  {
    assert(flagHasAlerts);
    return storeAlerts;
  }

bool ShowWeatherCurrentConditionsInformationNuggetJSON::hasRequestedAttribute(void) const
  {
    return flagHasRequestedAttribute;
  }

std::string ShowWeatherCurrentConditionsInformationNuggetJSON::getRequestedAttribute(void)
  {
    assert(flagHasRequestedAttribute);
    return storeRequestedAttribute;
  }

const std::string ShowWeatherCurrentConditionsInformationNuggetJSON::getRequestedAttribute(void) const
  {
    assert(flagHasRequestedAttribute);
    return storeRequestedAttribute;
  }

bool ShowWeatherCurrentConditionsInformationNuggetJSON::hasIsYesNoQuery(void) const
  {
    return flagHasIsYesNoQuery;
  }

bool ShowWeatherCurrentConditionsInformationNuggetJSON::getIsYesNoQuery(void)
  {
    assert(flagHasIsYesNoQuery);
    return storeIsYesNoQuery;
  }

const bool ShowWeatherCurrentConditionsInformationNuggetJSON::getIsYesNoQuery(void) const
  {
    assert(flagHasIsYesNoQuery);
    return storeIsYesNoQuery;
  }

bool ShowWeatherCurrentConditionsInformationNuggetJSON::hasWeatherMapRequested(void) const
  {
    return flagHasWeatherMapRequested;
  }

bool ShowWeatherCurrentConditionsInformationNuggetJSON::getWeatherMapRequested(void)
  {
    assert(flagHasWeatherMapRequested);
    return storeWeatherMapRequested;
  }

const bool ShowWeatherCurrentConditionsInformationNuggetJSON::getWeatherMapRequested(void) const
  {
    assert(flagHasWeatherMapRequested);
    return storeWeatherMapRequested;
  }

bool ShowWeatherCurrentConditionsInformationNuggetJSON::hasAlongTheRoute(void) const
  {
    return flagHasAlongTheRoute;
  }

bool ShowWeatherCurrentConditionsInformationNuggetJSON::getAlongTheRoute(void)
  {
    assert(flagHasAlongTheRoute);
    return storeAlongTheRoute;
  }

const bool ShowWeatherCurrentConditionsInformationNuggetJSON::getAlongTheRoute(void) const
  {
    assert(flagHasAlongTheRoute);
    return storeAlongTheRoute;
  }

bool ShowWeatherCurrentConditionsInformationNuggetJSON::hasObservationDateAndTime(void) const
  {
    return flagHasObservationDateAndTime;
  }

DateAndOrTimeJSON * ShowWeatherCurrentConditionsInformationNuggetJSON::getObservationDateAndTime(void)
  {
    assert(flagHasObservationDateAndTime);
    return storeObservationDateAndTime;
  }

const DateAndOrTimeJSON * ShowWeatherCurrentConditionsInformationNuggetJSON::getObservationDateAndTime(void) const
  {
    assert(flagHasObservationDateAndTime);
    return storeObservationDateAndTime;
  }

bool ShowWeatherCurrentConditionsInformationNuggetJSON::hasConditionsShortPhrase(void) const
  {
    return flagHasConditionsShortPhrase;
  }

std::string ShowWeatherCurrentConditionsInformationNuggetJSON::getConditionsShortPhrase(void)
  {
    assert(flagHasConditionsShortPhrase);
    return storeConditionsShortPhrase;
  }

const std::string ShowWeatherCurrentConditionsInformationNuggetJSON::getConditionsShortPhrase(void) const
  {
    assert(flagHasConditionsShortPhrase);
    return storeConditionsShortPhrase;
  }

bool ShowWeatherCurrentConditionsInformationNuggetJSON::hasCurrentTemperature(void) const
  {
    return flagHasCurrentTemperature;
  }

ShowWeatherCurrentConditionsInformationNuggetJSON::TypeCurrentTemperatureJSON * ShowWeatherCurrentConditionsInformationNuggetJSON::getCurrentTemperature(void)
  {
    assert(flagHasCurrentTemperature);
    return storeCurrentTemperature;
  }

const ShowWeatherCurrentConditionsInformationNuggetJSON::TypeCurrentTemperatureJSON * ShowWeatherCurrentConditionsInformationNuggetJSON::getCurrentTemperature(void) const
  {
    assert(flagHasCurrentTemperature);
    return storeCurrentTemperature;
  }

bool ShowWeatherCurrentConditionsInformationNuggetJSON::hasFeelsLikeTemperature(void) const
  {
    return flagHasFeelsLikeTemperature;
  }

ShowWeatherCurrentConditionsInformationNuggetJSON::TypeFeelsLikeTemperatureJSON * ShowWeatherCurrentConditionsInformationNuggetJSON::getFeelsLikeTemperature(void)
  {
    assert(flagHasFeelsLikeTemperature);
    return storeFeelsLikeTemperature;
  }

const ShowWeatherCurrentConditionsInformationNuggetJSON::TypeFeelsLikeTemperatureJSON * ShowWeatherCurrentConditionsInformationNuggetJSON::getFeelsLikeTemperature(void) const
  {
    assert(flagHasFeelsLikeTemperature);
    return storeFeelsLikeTemperature;
  }

bool ShowWeatherCurrentConditionsInformationNuggetJSON::hasHeatIndex(void) const
  {
    return flagHasHeatIndex;
  }

ShowWeatherCurrentConditionsInformationNuggetJSON::TypeHeatIndexJSON * ShowWeatherCurrentConditionsInformationNuggetJSON::getHeatIndex(void)
  {
    assert(flagHasHeatIndex);
    return storeHeatIndex;
  }

const ShowWeatherCurrentConditionsInformationNuggetJSON::TypeHeatIndexJSON * ShowWeatherCurrentConditionsInformationNuggetJSON::getHeatIndex(void) const
  {
    assert(flagHasHeatIndex);
    return storeHeatIndex;
  }

bool ShowWeatherCurrentConditionsInformationNuggetJSON::hasWindchill(void) const
  {
    return flagHasWindchill;
  }

ShowWeatherCurrentConditionsInformationNuggetJSON::TypeWindchillJSON * ShowWeatherCurrentConditionsInformationNuggetJSON::getWindchill(void)
  {
    assert(flagHasWindchill);
    return storeWindchill;
  }

const ShowWeatherCurrentConditionsInformationNuggetJSON::TypeWindchillJSON * ShowWeatherCurrentConditionsInformationNuggetJSON::getWindchill(void) const
  {
    assert(flagHasWindchill);
    return storeWindchill;
  }

bool ShowWeatherCurrentConditionsInformationNuggetJSON::hasDewPoint(void) const
  {
    return flagHasDewPoint;
  }

ShowWeatherCurrentConditionsInformationNuggetJSON::TypeDewPointJSON * ShowWeatherCurrentConditionsInformationNuggetJSON::getDewPoint(void)
  {
    assert(flagHasDewPoint);
    return storeDewPoint;
  }

const ShowWeatherCurrentConditionsInformationNuggetJSON::TypeDewPointJSON * ShowWeatherCurrentConditionsInformationNuggetJSON::getDewPoint(void) const
  {
    assert(flagHasDewPoint);
    return storeDewPoint;
  }

bool ShowWeatherCurrentConditionsInformationNuggetJSON::hasWeatherIconURL(void) const
  {
    return flagHasWeatherIconURL;
  }

std::string ShowWeatherCurrentConditionsInformationNuggetJSON::getWeatherIconURL(void)
  {
    assert(flagHasWeatherIconURL);
    return storeWeatherIconURL;
  }

const std::string ShowWeatherCurrentConditionsInformationNuggetJSON::getWeatherIconURL(void) const
  {
    assert(flagHasWeatherIconURL);
    return storeWeatherIconURL;
  }

bool ShowWeatherCurrentConditionsInformationNuggetJSON::hasConditionsImage(void) const
  {
    return flagHasConditionsImage;
  }

WeatherImageJSON * ShowWeatherCurrentConditionsInformationNuggetJSON::getConditionsImage(void)
  {
    assert(flagHasConditionsImage);
    return storeConditionsImage;
  }

const WeatherImageJSON * ShowWeatherCurrentConditionsInformationNuggetJSON::getConditionsImage(void) const
  {
    assert(flagHasConditionsImage);
    return storeConditionsImage;
  }

bool ShowWeatherCurrentConditionsInformationNuggetJSON::hasHumidityPct(void) const
  {
    return flagHasHumidityPct;
  }

uint8_t ShowWeatherCurrentConditionsInformationNuggetJSON::getHumidityPct(void)
  {
    assert(flagHasHumidityPct);
    return storeHumidityPct;
  }

const uint8_t ShowWeatherCurrentConditionsInformationNuggetJSON::getHumidityPct(void) const
  {
    assert(flagHasHumidityPct);
    return storeHumidityPct;
  }

bool ShowWeatherCurrentConditionsInformationNuggetJSON::hasVisibility(void) const
  {
    return flagHasVisibility;
  }

ShowWeatherCurrentConditionsInformationNuggetJSON::TypeVisibilityJSON * ShowWeatherCurrentConditionsInformationNuggetJSON::getVisibility(void)
  {
    assert(flagHasVisibility);
    return storeVisibility;
  }

const ShowWeatherCurrentConditionsInformationNuggetJSON::TypeVisibilityJSON * ShowWeatherCurrentConditionsInformationNuggetJSON::getVisibility(void) const
  {
    assert(flagHasVisibility);
    return storeVisibility;
  }

bool ShowWeatherCurrentConditionsInformationNuggetJSON::hasPrecipitation1Hour(void) const
  {
    return flagHasPrecipitation1Hour;
  }

ShowWeatherCurrentConditionsInformationNuggetJSON::TypePrecipitation1HourJSON * ShowWeatherCurrentConditionsInformationNuggetJSON::getPrecipitation1Hour(void)
  {
    assert(flagHasPrecipitation1Hour);
    return storePrecipitation1Hour;
  }

const ShowWeatherCurrentConditionsInformationNuggetJSON::TypePrecipitation1HourJSON * ShowWeatherCurrentConditionsInformationNuggetJSON::getPrecipitation1Hour(void) const
  {
    assert(flagHasPrecipitation1Hour);
    return storePrecipitation1Hour;
  }

bool ShowWeatherCurrentConditionsInformationNuggetJSON::hasPrecipitationToday(void) const
  {
    return flagHasPrecipitationToday;
  }

ShowWeatherCurrentConditionsInformationNuggetJSON::TypePrecipitationTodayJSON * ShowWeatherCurrentConditionsInformationNuggetJSON::getPrecipitationToday(void)
  {
    assert(flagHasPrecipitationToday);
    return storePrecipitationToday;
  }

const ShowWeatherCurrentConditionsInformationNuggetJSON::TypePrecipitationTodayJSON * ShowWeatherCurrentConditionsInformationNuggetJSON::getPrecipitationToday(void) const
  {
    assert(flagHasPrecipitationToday);
    return storePrecipitationToday;
  }

bool ShowWeatherCurrentConditionsInformationNuggetJSON::hasWind(void) const
  {
    return flagHasWind;
  }

ShowWeatherCurrentConditionsInformationNuggetJSON::TypeWindJSON * ShowWeatherCurrentConditionsInformationNuggetJSON::getWind(void)
  {
    assert(flagHasWind);
    return storeWind;
  }

const ShowWeatherCurrentConditionsInformationNuggetJSON::TypeWindJSON * ShowWeatherCurrentConditionsInformationNuggetJSON::getWind(void) const
  {
    assert(flagHasWind);
    return storeWind;
  }

bool ShowWeatherCurrentConditionsInformationNuggetJSON::hasWindGust(void) const
  {
    return flagHasWindGust;
  }

ShowWeatherCurrentConditionsInformationNuggetJSON::TypeWindGustJSON * ShowWeatherCurrentConditionsInformationNuggetJSON::getWindGust(void)
  {
    assert(flagHasWindGust);
    return storeWindGust;
  }

const ShowWeatherCurrentConditionsInformationNuggetJSON::TypeWindGustJSON * ShowWeatherCurrentConditionsInformationNuggetJSON::getWindGust(void) const
  {
    assert(flagHasWindGust);
    return storeWindGust;
  }

bool ShowWeatherCurrentConditionsInformationNuggetJSON::hasBarometricPressure(void) const
  {
    return flagHasBarometricPressure;
  }

ShowWeatherCurrentConditionsInformationNuggetJSON::TypeBarometricPressureJSON * ShowWeatherCurrentConditionsInformationNuggetJSON::getBarometricPressure(void)
  {
    assert(flagHasBarometricPressure);
    return storeBarometricPressure;
  }

const ShowWeatherCurrentConditionsInformationNuggetJSON::TypeBarometricPressureJSON * ShowWeatherCurrentConditionsInformationNuggetJSON::getBarometricPressure(void) const
  {
    assert(flagHasBarometricPressure);
    return storeBarometricPressure;
  }

bool ShowWeatherCurrentConditionsInformationNuggetJSON::hasUVIndex(void) const
  {
    return flagHasUVIndex;
  }

ShowWeatherCurrentConditionsInformationNuggetJSON::TypeUVIndexJSON * ShowWeatherCurrentConditionsInformationNuggetJSON::getUVIndex(void)
  {
    assert(flagHasUVIndex);
    return storeUVIndex;
  }

const ShowWeatherCurrentConditionsInformationNuggetJSON::TypeUVIndexJSON * ShowWeatherCurrentConditionsInformationNuggetJSON::getUVIndex(void) const
  {
    assert(flagHasUVIndex);
    return storeUVIndex;
  }

bool ShowWeatherCurrentConditionsInformationNuggetJSON::hasCloudinessPct(void) const
  {
    return flagHasCloudinessPct;
  }

uint8_t ShowWeatherCurrentConditionsInformationNuggetJSON::getCloudinessPct(void)
  {
    assert(flagHasCloudinessPct);
    return storeCloudinessPct;
  }

const uint8_t ShowWeatherCurrentConditionsInformationNuggetJSON::getCloudinessPct(void) const
  {
    assert(flagHasCloudinessPct);
    return storeCloudinessPct;
  }

bool ShowWeatherCurrentConditionsInformationNuggetJSON::hasDailyForecasts(void) const
  {
    return flagHasDailyForecasts;
  }

size_t ShowWeatherCurrentConditionsInformationNuggetJSON::countOfDailyForecasts(void) const
  {
    assert(flagHasDailyForecasts);
    return storeDailyForecasts.size();
  }

DailyForecastJSON * ShowWeatherCurrentConditionsInformationNuggetJSON::elementOfDailyForecasts(size_t element_num)
  {
    assert(flagHasDailyForecasts);
    return storeDailyForecasts[element_num];
  }

const DailyForecastJSON * ShowWeatherCurrentConditionsInformationNuggetJSON::elementOfDailyForecasts(size_t element_num) const
  {
    assert(flagHasDailyForecasts);
    return storeDailyForecasts[element_num];
  }

std::vector< DailyForecastJSON * > ShowWeatherCurrentConditionsInformationNuggetJSON::getDailyForecasts(void)
  {
    assert(flagHasDailyForecasts);
    return storeDailyForecasts;
  }

const std::vector< DailyForecastJSON * > ShowWeatherCurrentConditionsInformationNuggetJSON::getDailyForecasts(void) const
  {
    assert(flagHasDailyForecasts);
    return storeDailyForecasts;
  }

bool ShowWeatherCurrentConditionsInformationNuggetJSON::hasHourlyForecasts(void) const
  {
    return flagHasHourlyForecasts;
  }

size_t ShowWeatherCurrentConditionsInformationNuggetJSON::countOfHourlyForecasts(void) const
  {
    assert(flagHasHourlyForecasts);
    return storeHourlyForecasts.size();
  }

HourlyForecastJSON * ShowWeatherCurrentConditionsInformationNuggetJSON::elementOfHourlyForecasts(size_t element_num)
  {
    assert(flagHasHourlyForecasts);
    return storeHourlyForecasts[element_num];
  }

const HourlyForecastJSON * ShowWeatherCurrentConditionsInformationNuggetJSON::elementOfHourlyForecasts(size_t element_num) const
  {
    assert(flagHasHourlyForecasts);
    return storeHourlyForecasts[element_num];
  }

std::vector< HourlyForecastJSON * > ShowWeatherCurrentConditionsInformationNuggetJSON::getHourlyForecasts(void)
  {
    assert(flagHasHourlyForecasts);
    return storeHourlyForecasts;
  }

const std::vector< HourlyForecastJSON * > ShowWeatherCurrentConditionsInformationNuggetJSON::getHourlyForecasts(void) const
  {
    assert(flagHasHourlyForecasts);
    return storeHourlyForecasts;
  }

ShowWeatherCurrentConditionsInformationNuggetJSON::TypeCurrentTemperatureJSON *ShowWeatherCurrentConditionsInformationNuggetJSON::TypeCurrentTemperatureJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    TypeCurrentTemperatureJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<TypeCurrentTemperatureJSON>, TypeCurrentTemperatureJSON *, bool> generator("Type TypeCurrentTemperature", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
ShowWeatherCurrentConditionsInformationNuggetJSON::TypeFeelsLikeTemperatureJSON *ShowWeatherCurrentConditionsInformationNuggetJSON::TypeFeelsLikeTemperatureJSON::from_json(JSONValue *json_value, bool ignore_extras)
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
ShowWeatherCurrentConditionsInformationNuggetJSON::TypeHeatIndexJSON *ShowWeatherCurrentConditionsInformationNuggetJSON::TypeHeatIndexJSON::from_json(JSONValue *json_value, bool ignore_extras)
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
ShowWeatherCurrentConditionsInformationNuggetJSON::TypeWindchillJSON *ShowWeatherCurrentConditionsInformationNuggetJSON::TypeWindchillJSON::from_json(JSONValue *json_value, bool ignore_extras)
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
ShowWeatherCurrentConditionsInformationNuggetJSON::TypeDewPointJSON *ShowWeatherCurrentConditionsInformationNuggetJSON::TypeDewPointJSON::from_json(JSONValue *json_value, bool ignore_extras)
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
ShowWeatherCurrentConditionsInformationNuggetJSON::TypeVisibilityJSON *ShowWeatherCurrentConditionsInformationNuggetJSON::TypeVisibilityJSON::from_json(JSONValue *json_value, bool ignore_extras)
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
ShowWeatherCurrentConditionsInformationNuggetJSON::TypePrecipitation1HourJSON *ShowWeatherCurrentConditionsInformationNuggetJSON::TypePrecipitation1HourJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    TypePrecipitation1HourJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<TypePrecipitation1HourJSON>, TypePrecipitation1HourJSON *, bool> generator("Type TypePrecipitation1Hour", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
ShowWeatherCurrentConditionsInformationNuggetJSON::TypePrecipitationTodayJSON *ShowWeatherCurrentConditionsInformationNuggetJSON::TypePrecipitationTodayJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    TypePrecipitationTodayJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<TypePrecipitationTodayJSON>, TypePrecipitationTodayJSON *, bool> generator("Type TypePrecipitationToday", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
ShowWeatherCurrentConditionsInformationNuggetJSON::TypeWindJSON *ShowWeatherCurrentConditionsInformationNuggetJSON::TypeWindJSON::from_json(JSONValue *json_value, bool ignore_extras)
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
ShowWeatherCurrentConditionsInformationNuggetJSON::TypeWindGustJSON *ShowWeatherCurrentConditionsInformationNuggetJSON::TypeWindGustJSON::from_json(JSONValue *json_value, bool ignore_extras)
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
ShowWeatherCurrentConditionsInformationNuggetJSON::TypeBarometricPressureJSON *ShowWeatherCurrentConditionsInformationNuggetJSON::TypeBarometricPressureJSON::from_json(JSONValue *json_value, bool ignore_extras)
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
ShowWeatherCurrentConditionsInformationNuggetJSON::TypeUVIndexJSON *ShowWeatherCurrentConditionsInformationNuggetJSON::TypeUVIndexJSON::from_json(JSONValue *json_value, bool ignore_extras)
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
ShowWeatherCurrentConditionsInformationNuggetJSON *ShowWeatherCurrentConditionsInformationNuggetJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    ShowWeatherCurrentConditionsInformationNuggetJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<ShowWeatherCurrentConditionsInformationNuggetJSON>, ShowWeatherCurrentConditionsInformationNuggetJSON *, bool> generator("Type ShowWeatherCurrentConditionsInformationNugget", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
