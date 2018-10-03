/* file "CurrentConditionsJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "CurrentConditionsJSON.h"

#include "CurrentConditionsJSON.h"


CurrentConditionsJSON::TypeCurrentTemperatureJSON::TypeCurrentTemperatureJSON(const TypeCurrentTemperatureJSON &)
  {
    assert(false);
  }

CurrentConditionsJSON::TypeCurrentTemperatureJSON &CurrentConditionsJSON::TypeCurrentTemperatureJSON::operator=(const TypeCurrentTemperatureJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void CurrentConditionsJSON::TypeCurrentTemperatureJSON::fromJSONValue(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    UnitsValue_TemperatureJSON *convert_classy = UnitsValue_TemperatureJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setValue(convert_classy);
    convert_classy->remove_reference();
  }

CurrentConditionsJSON::TypeCurrentTemperatureJSON::TypeCurrentTemperatureJSON(void) :
        flagHasValue(false)
  {
    extraIndex = create_string_index();
  }

CurrentConditionsJSON::TypeCurrentTemperatureJSON::~TypeCurrentTemperatureJSON(void)
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

bool CurrentConditionsJSON::TypeCurrentTemperatureJSON::hasValue(void) const
  {
    return flagHasValue;
  }

UnitsValue_TemperatureJSON * CurrentConditionsJSON::TypeCurrentTemperatureJSON::getValue(void)
  {
    assert(flagHasValue);
    return storeValue;
  }

const UnitsValue_TemperatureJSON * CurrentConditionsJSON::TypeCurrentTemperatureJSON::getValue(void) const
  {
    assert(flagHasValue);
    return storeValue;
  }

CurrentConditionsJSON::TypeFeelsLikeTemperatureJSON::TypeFeelsLikeTemperatureJSON(const TypeFeelsLikeTemperatureJSON &)
  {
    assert(false);
  }

CurrentConditionsJSON::TypeFeelsLikeTemperatureJSON &CurrentConditionsJSON::TypeFeelsLikeTemperatureJSON::operator=(const TypeFeelsLikeTemperatureJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void CurrentConditionsJSON::TypeFeelsLikeTemperatureJSON::fromJSONValue(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    UnitsValue_TemperatureJSON *convert_classy = UnitsValue_TemperatureJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setValue(convert_classy);
    convert_classy->remove_reference();
  }

CurrentConditionsJSON::TypeFeelsLikeTemperatureJSON::TypeFeelsLikeTemperatureJSON(void) :
        flagHasValue(false)
  {
    extraIndex = create_string_index();
  }

CurrentConditionsJSON::TypeFeelsLikeTemperatureJSON::~TypeFeelsLikeTemperatureJSON(void)
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

bool CurrentConditionsJSON::TypeFeelsLikeTemperatureJSON::hasValue(void) const
  {
    return flagHasValue;
  }

UnitsValue_TemperatureJSON * CurrentConditionsJSON::TypeFeelsLikeTemperatureJSON::getValue(void)
  {
    assert(flagHasValue);
    return storeValue;
  }

const UnitsValue_TemperatureJSON * CurrentConditionsJSON::TypeFeelsLikeTemperatureJSON::getValue(void) const
  {
    assert(flagHasValue);
    return storeValue;
  }

CurrentConditionsJSON::TypeHeatIndexJSON::TypeHeatIndexJSON(const TypeHeatIndexJSON &)
  {
    assert(false);
  }

CurrentConditionsJSON::TypeHeatIndexJSON &CurrentConditionsJSON::TypeHeatIndexJSON::operator=(const TypeHeatIndexJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void CurrentConditionsJSON::TypeHeatIndexJSON::fromJSONValue(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    UnitsValue_TemperatureJSON *convert_classy = UnitsValue_TemperatureJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setValue(convert_classy);
    convert_classy->remove_reference();
  }

CurrentConditionsJSON::TypeHeatIndexJSON::TypeHeatIndexJSON(void) :
        flagHasValue(false)
  {
    extraIndex = create_string_index();
  }

CurrentConditionsJSON::TypeHeatIndexJSON::~TypeHeatIndexJSON(void)
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

bool CurrentConditionsJSON::TypeHeatIndexJSON::hasValue(void) const
  {
    return flagHasValue;
  }

UnitsValue_TemperatureJSON * CurrentConditionsJSON::TypeHeatIndexJSON::getValue(void)
  {
    assert(flagHasValue);
    return storeValue;
  }

const UnitsValue_TemperatureJSON * CurrentConditionsJSON::TypeHeatIndexJSON::getValue(void) const
  {
    assert(flagHasValue);
    return storeValue;
  }

CurrentConditionsJSON::TypeWindchillJSON::TypeWindchillJSON(const TypeWindchillJSON &)
  {
    assert(false);
  }

CurrentConditionsJSON::TypeWindchillJSON &CurrentConditionsJSON::TypeWindchillJSON::operator=(const TypeWindchillJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void CurrentConditionsJSON::TypeWindchillJSON::fromJSONValue(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    UnitsValue_TemperatureJSON *convert_classy = UnitsValue_TemperatureJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setValue(convert_classy);
    convert_classy->remove_reference();
  }

CurrentConditionsJSON::TypeWindchillJSON::TypeWindchillJSON(void) :
        flagHasValue(false)
  {
    extraIndex = create_string_index();
  }

CurrentConditionsJSON::TypeWindchillJSON::~TypeWindchillJSON(void)
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

bool CurrentConditionsJSON::TypeWindchillJSON::hasValue(void) const
  {
    return flagHasValue;
  }

UnitsValue_TemperatureJSON * CurrentConditionsJSON::TypeWindchillJSON::getValue(void)
  {
    assert(flagHasValue);
    return storeValue;
  }

const UnitsValue_TemperatureJSON * CurrentConditionsJSON::TypeWindchillJSON::getValue(void) const
  {
    assert(flagHasValue);
    return storeValue;
  }

CurrentConditionsJSON::TypeDewPointJSON::TypeDewPointJSON(const TypeDewPointJSON &)
  {
    assert(false);
  }

CurrentConditionsJSON::TypeDewPointJSON &CurrentConditionsJSON::TypeDewPointJSON::operator=(const TypeDewPointJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void CurrentConditionsJSON::TypeDewPointJSON::fromJSONValue(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    UnitsValue_TemperatureJSON *convert_classy = UnitsValue_TemperatureJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setValue(convert_classy);
    convert_classy->remove_reference();
  }

CurrentConditionsJSON::TypeDewPointJSON::TypeDewPointJSON(void) :
        flagHasValue(false)
  {
    extraIndex = create_string_index();
  }

CurrentConditionsJSON::TypeDewPointJSON::~TypeDewPointJSON(void)
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

bool CurrentConditionsJSON::TypeDewPointJSON::hasValue(void) const
  {
    return flagHasValue;
  }

UnitsValue_TemperatureJSON * CurrentConditionsJSON::TypeDewPointJSON::getValue(void)
  {
    assert(flagHasValue);
    return storeValue;
  }

const UnitsValue_TemperatureJSON * CurrentConditionsJSON::TypeDewPointJSON::getValue(void) const
  {
    assert(flagHasValue);
    return storeValue;
  }

CurrentConditionsJSON::TypeVisibilityJSON::TypeVisibilityJSON(const TypeVisibilityJSON &)
  {
    assert(false);
  }

CurrentConditionsJSON::TypeVisibilityJSON &CurrentConditionsJSON::TypeVisibilityJSON::operator=(const TypeVisibilityJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void CurrentConditionsJSON::TypeVisibilityJSON::fromJSONValue(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    UnitsValue_VisibilityJSON *convert_classy = UnitsValue_VisibilityJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setValue(convert_classy);
    convert_classy->remove_reference();
  }

CurrentConditionsJSON::TypeVisibilityJSON::TypeVisibilityJSON(void) :
        flagHasValue(false)
  {
    extraIndex = create_string_index();
  }

CurrentConditionsJSON::TypeVisibilityJSON::~TypeVisibilityJSON(void)
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

bool CurrentConditionsJSON::TypeVisibilityJSON::hasValue(void) const
  {
    return flagHasValue;
  }

UnitsValue_VisibilityJSON * CurrentConditionsJSON::TypeVisibilityJSON::getValue(void)
  {
    assert(flagHasValue);
    return storeValue;
  }

const UnitsValue_VisibilityJSON * CurrentConditionsJSON::TypeVisibilityJSON::getValue(void) const
  {
    assert(flagHasValue);
    return storeValue;
  }

CurrentConditionsJSON::TypePrecipitation1HourJSON::TypePrecipitation1HourJSON(const TypePrecipitation1HourJSON &)
  {
    assert(false);
  }

CurrentConditionsJSON::TypePrecipitation1HourJSON &CurrentConditionsJSON::TypePrecipitation1HourJSON::operator=(const TypePrecipitation1HourJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void CurrentConditionsJSON::TypePrecipitation1HourJSON::fromJSONValue(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    UnitsValue_PrecipitationJSON *convert_classy = UnitsValue_PrecipitationJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setValue(convert_classy);
    convert_classy->remove_reference();
  }

CurrentConditionsJSON::TypePrecipitation1HourJSON::TypePrecipitation1HourJSON(void) :
        flagHasValue(false)
  {
    extraIndex = create_string_index();
  }

CurrentConditionsJSON::TypePrecipitation1HourJSON::~TypePrecipitation1HourJSON(void)
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

bool CurrentConditionsJSON::TypePrecipitation1HourJSON::hasValue(void) const
  {
    return flagHasValue;
  }

UnitsValue_PrecipitationJSON * CurrentConditionsJSON::TypePrecipitation1HourJSON::getValue(void)
  {
    assert(flagHasValue);
    return storeValue;
  }

const UnitsValue_PrecipitationJSON * CurrentConditionsJSON::TypePrecipitation1HourJSON::getValue(void) const
  {
    assert(flagHasValue);
    return storeValue;
  }

CurrentConditionsJSON::TypePrecipitationTodayJSON::TypePrecipitationTodayJSON(const TypePrecipitationTodayJSON &)
  {
    assert(false);
  }

CurrentConditionsJSON::TypePrecipitationTodayJSON &CurrentConditionsJSON::TypePrecipitationTodayJSON::operator=(const TypePrecipitationTodayJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void CurrentConditionsJSON::TypePrecipitationTodayJSON::fromJSONValue(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    UnitsValue_PrecipitationJSON *convert_classy = UnitsValue_PrecipitationJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setValue(convert_classy);
    convert_classy->remove_reference();
  }

CurrentConditionsJSON::TypePrecipitationTodayJSON::TypePrecipitationTodayJSON(void) :
        flagHasValue(false)
  {
    extraIndex = create_string_index();
  }

CurrentConditionsJSON::TypePrecipitationTodayJSON::~TypePrecipitationTodayJSON(void)
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

bool CurrentConditionsJSON::TypePrecipitationTodayJSON::hasValue(void) const
  {
    return flagHasValue;
  }

UnitsValue_PrecipitationJSON * CurrentConditionsJSON::TypePrecipitationTodayJSON::getValue(void)
  {
    assert(flagHasValue);
    return storeValue;
  }

const UnitsValue_PrecipitationJSON * CurrentConditionsJSON::TypePrecipitationTodayJSON::getValue(void) const
  {
    assert(flagHasValue);
    return storeValue;
  }

CurrentConditionsJSON::TypeWindJSON::TypeWindJSON(const TypeWindJSON &)
  {
    assert(false);
  }

CurrentConditionsJSON::TypeWindJSON &CurrentConditionsJSON::TypeWindJSON::operator=(const TypeWindJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void CurrentConditionsJSON::TypeWindJSON::fromJSONValue(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    UnitsValue_WindJSON *convert_classy = UnitsValue_WindJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setValue(convert_classy);
    convert_classy->remove_reference();
  }

void CurrentConditionsJSON::TypeWindJSON::fromJSONDirectionAbbreviation(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field DirectionAbbreviation of TypeWindJSON is not a string.");
    setDirectionAbbreviation(std::string(json_string->getData()));
  }

void CurrentConditionsJSON::TypeWindJSON::fromJSONDirectionText(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field DirectionText of TypeWindJSON is not a string.");
    setDirectionText(std::string(json_string->getData()));
  }

void CurrentConditionsJSON::TypeWindJSON::fromJSONDirectionDegrees(JSONValue *json_value, bool ignore_extras)
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

CurrentConditionsJSON::TypeWindJSON::TypeWindJSON(void) :
        flagHasValue(false),
        flagHasDirectionAbbreviation(false),
        flagHasDirectionText(false),
        flagHasDirectionDegrees(false)
  {
    extraIndex = create_string_index();
  }

CurrentConditionsJSON::TypeWindJSON::~TypeWindJSON(void)
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

bool CurrentConditionsJSON::TypeWindJSON::hasValue(void) const
  {
    return flagHasValue;
  }

UnitsValue_WindJSON * CurrentConditionsJSON::TypeWindJSON::getValue(void)
  {
    assert(flagHasValue);
    return storeValue;
  }

const UnitsValue_WindJSON * CurrentConditionsJSON::TypeWindJSON::getValue(void) const
  {
    assert(flagHasValue);
    return storeValue;
  }

bool CurrentConditionsJSON::TypeWindJSON::hasDirectionAbbreviation(void) const
  {
    return flagHasDirectionAbbreviation;
  }

std::string CurrentConditionsJSON::TypeWindJSON::getDirectionAbbreviation(void)
  {
    assert(flagHasDirectionAbbreviation);
    return storeDirectionAbbreviation;
  }

const std::string CurrentConditionsJSON::TypeWindJSON::getDirectionAbbreviation(void) const
  {
    assert(flagHasDirectionAbbreviation);
    return storeDirectionAbbreviation;
  }

bool CurrentConditionsJSON::TypeWindJSON::hasDirectionText(void) const
  {
    return flagHasDirectionText;
  }

std::string CurrentConditionsJSON::TypeWindJSON::getDirectionText(void)
  {
    assert(flagHasDirectionText);
    return storeDirectionText;
  }

const std::string CurrentConditionsJSON::TypeWindJSON::getDirectionText(void) const
  {
    assert(flagHasDirectionText);
    return storeDirectionText;
  }

bool CurrentConditionsJSON::TypeWindJSON::hasDirectionDegrees(void) const
  {
    return flagHasDirectionDegrees;
  }

uint16_t CurrentConditionsJSON::TypeWindJSON::getDirectionDegrees(void)
  {
    assert(flagHasDirectionDegrees);
    return storeDirectionDegrees;
  }

const uint16_t CurrentConditionsJSON::TypeWindJSON::getDirectionDegrees(void) const
  {
    assert(flagHasDirectionDegrees);
    return storeDirectionDegrees;
  }

CurrentConditionsJSON::TypeWindGustJSON::TypeWindGustJSON(const TypeWindGustJSON &)
  {
    assert(false);
  }

CurrentConditionsJSON::TypeWindGustJSON &CurrentConditionsJSON::TypeWindGustJSON::operator=(const TypeWindGustJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void CurrentConditionsJSON::TypeWindGustJSON::fromJSONValue(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    UnitsValue_WindJSON *convert_classy = UnitsValue_WindJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setValue(convert_classy);
    convert_classy->remove_reference();
  }

CurrentConditionsJSON::TypeWindGustJSON::TypeWindGustJSON(void) :
        flagHasValue(false)
  {
    extraIndex = create_string_index();
  }

CurrentConditionsJSON::TypeWindGustJSON::~TypeWindGustJSON(void)
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

bool CurrentConditionsJSON::TypeWindGustJSON::hasValue(void) const
  {
    return flagHasValue;
  }

UnitsValue_WindJSON * CurrentConditionsJSON::TypeWindGustJSON::getValue(void)
  {
    assert(flagHasValue);
    return storeValue;
  }

const UnitsValue_WindJSON * CurrentConditionsJSON::TypeWindGustJSON::getValue(void) const
  {
    assert(flagHasValue);
    return storeValue;
  }

CurrentConditionsJSON::TypeBarometricPressureJSON::TypeBarometricPressureJSON(const TypeBarometricPressureJSON &)
  {
    assert(false);
  }

CurrentConditionsJSON::TypeBarometricPressureJSON &CurrentConditionsJSON::TypeBarometricPressureJSON::operator=(const TypeBarometricPressureJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void CurrentConditionsJSON::TypeBarometricPressureJSON::fromJSONValue(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    UnitsValue_PressureJSON *convert_classy = UnitsValue_PressureJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setValue(convert_classy);
    convert_classy->remove_reference();
  }

void CurrentConditionsJSON::TypeBarometricPressureJSON::fromJSONTrend(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Trend of TypeBarometricPressureJSON is not a string.");
    setTrend(std::string(json_string->getData()));
  }

CurrentConditionsJSON::TypeBarometricPressureJSON::TypeBarometricPressureJSON(void) :
        flagHasValue(false),
        flagHasTrend(false)
  {
    extraIndex = create_string_index();
  }

CurrentConditionsJSON::TypeBarometricPressureJSON::~TypeBarometricPressureJSON(void)
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

bool CurrentConditionsJSON::TypeBarometricPressureJSON::hasValue(void) const
  {
    return flagHasValue;
  }

UnitsValue_PressureJSON * CurrentConditionsJSON::TypeBarometricPressureJSON::getValue(void)
  {
    assert(flagHasValue);
    return storeValue;
  }

const UnitsValue_PressureJSON * CurrentConditionsJSON::TypeBarometricPressureJSON::getValue(void) const
  {
    assert(flagHasValue);
    return storeValue;
  }

bool CurrentConditionsJSON::TypeBarometricPressureJSON::hasTrend(void) const
  {
    return flagHasTrend;
  }

std::string CurrentConditionsJSON::TypeBarometricPressureJSON::getTrend(void)
  {
    assert(flagHasTrend);
    return storeTrend;
  }

const std::string CurrentConditionsJSON::TypeBarometricPressureJSON::getTrend(void) const
  {
    assert(flagHasTrend);
    return storeTrend;
  }

CurrentConditionsJSON::TypeUVIndexJSON::TypeUVIndexJSON(const TypeUVIndexJSON &)
  {
    assert(false);
  }

CurrentConditionsJSON::TypeUVIndexJSON &CurrentConditionsJSON::TypeUVIndexJSON::operator=(const TypeUVIndexJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void CurrentConditionsJSON::TypeUVIndexJSON::fromJSONValue(JSONValue *json_value, bool ignore_extras)
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

void CurrentConditionsJSON::TypeUVIndexJSON::fromJSONText(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Text of TypeUVIndexJSON is not a string.");
    setText(std::string(json_string->getData()));
  }

CurrentConditionsJSON::TypeUVIndexJSON::TypeUVIndexJSON(void) :
        flagHasValue(false),
        flagHasText(false)
  {
    extraIndex = create_string_index();
  }

CurrentConditionsJSON::TypeUVIndexJSON::~TypeUVIndexJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool CurrentConditionsJSON::TypeUVIndexJSON::hasValue(void) const
  {
    return flagHasValue;
  }

uint8_t CurrentConditionsJSON::TypeUVIndexJSON::getValue(void)
  {
    assert(flagHasValue);
    return storeValue;
  }

const uint8_t CurrentConditionsJSON::TypeUVIndexJSON::getValue(void) const
  {
    assert(flagHasValue);
    return storeValue;
  }

bool CurrentConditionsJSON::TypeUVIndexJSON::hasText(void) const
  {
    return flagHasText;
  }

std::string CurrentConditionsJSON::TypeUVIndexJSON::getText(void)
  {
    assert(flagHasText);
    return storeText;
  }

const std::string CurrentConditionsJSON::TypeUVIndexJSON::getText(void) const
  {
    assert(flagHasText);
    return storeText;
  }

CurrentConditionsJSON::CurrentConditionsJSON(const CurrentConditionsJSON &)
  {
    assert(false);
  }

CurrentConditionsJSON &CurrentConditionsJSON::operator=(const CurrentConditionsJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void CurrentConditionsJSON::fromJSONLocation(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    MapLocationJSON *convert_classy = MapLocationJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setLocation(convert_classy);
    convert_classy->remove_reference();
  }

void CurrentConditionsJSON::fromJSONObservationDateAndTime(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DateAndOrTimeJSON *convert_classy = DateAndOrTimeJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setObservationDateAndTime(convert_classy);
    convert_classy->remove_reference();
  }

void CurrentConditionsJSON::fromJSONConditionsShortPhrase(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field ConditionsShortPhrase of CurrentConditionsJSON is not a string.");
    setConditionsShortPhrase(std::string(json_string->getData()));
  }

void CurrentConditionsJSON::fromJSONCurrentTemperature(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TypeCurrentTemperatureJSON *convert_classy = TypeCurrentTemperatureJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setCurrentTemperature(convert_classy);
    convert_classy->remove_reference();
  }

void CurrentConditionsJSON::fromJSONFeelsLikeTemperature(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TypeFeelsLikeTemperatureJSON *convert_classy = TypeFeelsLikeTemperatureJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setFeelsLikeTemperature(convert_classy);
    convert_classy->remove_reference();
  }

void CurrentConditionsJSON::fromJSONHeatIndex(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TypeHeatIndexJSON *convert_classy = TypeHeatIndexJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setHeatIndex(convert_classy);
    convert_classy->remove_reference();
  }

void CurrentConditionsJSON::fromJSONWindchill(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TypeWindchillJSON *convert_classy = TypeWindchillJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setWindchill(convert_classy);
    convert_classy->remove_reference();
  }

void CurrentConditionsJSON::fromJSONDewPoint(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TypeDewPointJSON *convert_classy = TypeDewPointJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setDewPoint(convert_classy);
    convert_classy->remove_reference();
  }

void CurrentConditionsJSON::fromJSONWeatherIconURL(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field WeatherIconURL of CurrentConditionsJSON is not a string.");
    setWeatherIconURL(std::string(json_string->getData()));
  }

void CurrentConditionsJSON::fromJSONConditionsImage(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    WeatherImageJSON *convert_classy = WeatherImageJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setConditionsImage(convert_classy);
    convert_classy->remove_reference();
  }

void CurrentConditionsJSON::fromJSONHumidityPct(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    uint8_t extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field HumidityPct of CurrentConditionsJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field HumidityPct of CurrentConditionsJSON is not an integer.");
          }
        extracted_integer = (uint8_t)(json_rational->getUnsignedLongInt())    ;
      }
    else
      {
        extracted_integer = (uint8_t)(json_integer->getUnsignedLongInt())    ;
      }
    setHumidityPct(extracted_integer);
  }

void CurrentConditionsJSON::fromJSONVisibility(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TypeVisibilityJSON *convert_classy = TypeVisibilityJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setVisibility(convert_classy);
    convert_classy->remove_reference();
  }

void CurrentConditionsJSON::fromJSONPrecipitation1Hour(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TypePrecipitation1HourJSON *convert_classy = TypePrecipitation1HourJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setPrecipitation1Hour(convert_classy);
    convert_classy->remove_reference();
  }

void CurrentConditionsJSON::fromJSONPrecipitationToday(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TypePrecipitationTodayJSON *convert_classy = TypePrecipitationTodayJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setPrecipitationToday(convert_classy);
    convert_classy->remove_reference();
  }

void CurrentConditionsJSON::fromJSONWind(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TypeWindJSON *convert_classy = TypeWindJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setWind(convert_classy);
    convert_classy->remove_reference();
  }

void CurrentConditionsJSON::fromJSONWindGust(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TypeWindGustJSON *convert_classy = TypeWindGustJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setWindGust(convert_classy);
    convert_classy->remove_reference();
  }

void CurrentConditionsJSON::fromJSONBarometricPressure(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TypeBarometricPressureJSON *convert_classy = TypeBarometricPressureJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setBarometricPressure(convert_classy);
    convert_classy->remove_reference();
  }

void CurrentConditionsJSON::fromJSONUVIndex(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TypeUVIndexJSON *convert_classy = TypeUVIndexJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setUVIndex(convert_classy);
    convert_classy->remove_reference();
  }

void CurrentConditionsJSON::fromJSONCloudinessPct(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    uint8_t extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field CloudinessPct of CurrentConditionsJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field CloudinessPct of CurrentConditionsJSON is not an integer.");
          }
        extracted_integer = (uint8_t)(json_rational->getUnsignedLongInt())    ;
      }
    else
      {
        extracted_integer = (uint8_t)(json_integer->getUnsignedLongInt())    ;
      }
    setCloudinessPct(extracted_integer);
  }

CurrentConditionsJSON::CurrentConditionsJSON(void) :
        flagHasLocation(false),
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
        flagHasCloudinessPct(false)
  {
    extraIndex = create_string_index();
  }

CurrentConditionsJSON::~CurrentConditionsJSON(void)
  {
    if (flagHasLocation)
      {
        storeLocation->remove_reference();
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
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool CurrentConditionsJSON::hasLocation(void) const
  {
    return flagHasLocation;
  }

MapLocationJSON * CurrentConditionsJSON::getLocation(void)
  {
    assert(flagHasLocation);
    return storeLocation;
  }

const MapLocationJSON * CurrentConditionsJSON::getLocation(void) const
  {
    assert(flagHasLocation);
    return storeLocation;
  }

bool CurrentConditionsJSON::hasObservationDateAndTime(void) const
  {
    return flagHasObservationDateAndTime;
  }

DateAndOrTimeJSON * CurrentConditionsJSON::getObservationDateAndTime(void)
  {
    assert(flagHasObservationDateAndTime);
    return storeObservationDateAndTime;
  }

const DateAndOrTimeJSON * CurrentConditionsJSON::getObservationDateAndTime(void) const
  {
    assert(flagHasObservationDateAndTime);
    return storeObservationDateAndTime;
  }

bool CurrentConditionsJSON::hasConditionsShortPhrase(void) const
  {
    return flagHasConditionsShortPhrase;
  }

std::string CurrentConditionsJSON::getConditionsShortPhrase(void)
  {
    assert(flagHasConditionsShortPhrase);
    return storeConditionsShortPhrase;
  }

const std::string CurrentConditionsJSON::getConditionsShortPhrase(void) const
  {
    assert(flagHasConditionsShortPhrase);
    return storeConditionsShortPhrase;
  }

bool CurrentConditionsJSON::hasCurrentTemperature(void) const
  {
    return flagHasCurrentTemperature;
  }

CurrentConditionsJSON::TypeCurrentTemperatureJSON * CurrentConditionsJSON::getCurrentTemperature(void)
  {
    assert(flagHasCurrentTemperature);
    return storeCurrentTemperature;
  }

const CurrentConditionsJSON::TypeCurrentTemperatureJSON * CurrentConditionsJSON::getCurrentTemperature(void) const
  {
    assert(flagHasCurrentTemperature);
    return storeCurrentTemperature;
  }

bool CurrentConditionsJSON::hasFeelsLikeTemperature(void) const
  {
    return flagHasFeelsLikeTemperature;
  }

CurrentConditionsJSON::TypeFeelsLikeTemperatureJSON * CurrentConditionsJSON::getFeelsLikeTemperature(void)
  {
    assert(flagHasFeelsLikeTemperature);
    return storeFeelsLikeTemperature;
  }

const CurrentConditionsJSON::TypeFeelsLikeTemperatureJSON * CurrentConditionsJSON::getFeelsLikeTemperature(void) const
  {
    assert(flagHasFeelsLikeTemperature);
    return storeFeelsLikeTemperature;
  }

bool CurrentConditionsJSON::hasHeatIndex(void) const
  {
    return flagHasHeatIndex;
  }

CurrentConditionsJSON::TypeHeatIndexJSON * CurrentConditionsJSON::getHeatIndex(void)
  {
    assert(flagHasHeatIndex);
    return storeHeatIndex;
  }

const CurrentConditionsJSON::TypeHeatIndexJSON * CurrentConditionsJSON::getHeatIndex(void) const
  {
    assert(flagHasHeatIndex);
    return storeHeatIndex;
  }

bool CurrentConditionsJSON::hasWindchill(void) const
  {
    return flagHasWindchill;
  }

CurrentConditionsJSON::TypeWindchillJSON * CurrentConditionsJSON::getWindchill(void)
  {
    assert(flagHasWindchill);
    return storeWindchill;
  }

const CurrentConditionsJSON::TypeWindchillJSON * CurrentConditionsJSON::getWindchill(void) const
  {
    assert(flagHasWindchill);
    return storeWindchill;
  }

bool CurrentConditionsJSON::hasDewPoint(void) const
  {
    return flagHasDewPoint;
  }

CurrentConditionsJSON::TypeDewPointJSON * CurrentConditionsJSON::getDewPoint(void)
  {
    assert(flagHasDewPoint);
    return storeDewPoint;
  }

const CurrentConditionsJSON::TypeDewPointJSON * CurrentConditionsJSON::getDewPoint(void) const
  {
    assert(flagHasDewPoint);
    return storeDewPoint;
  }

bool CurrentConditionsJSON::hasWeatherIconURL(void) const
  {
    return flagHasWeatherIconURL;
  }

std::string CurrentConditionsJSON::getWeatherIconURL(void)
  {
    assert(flagHasWeatherIconURL);
    return storeWeatherIconURL;
  }

const std::string CurrentConditionsJSON::getWeatherIconURL(void) const
  {
    assert(flagHasWeatherIconURL);
    return storeWeatherIconURL;
  }

bool CurrentConditionsJSON::hasConditionsImage(void) const
  {
    return flagHasConditionsImage;
  }

WeatherImageJSON * CurrentConditionsJSON::getConditionsImage(void)
  {
    assert(flagHasConditionsImage);
    return storeConditionsImage;
  }

const WeatherImageJSON * CurrentConditionsJSON::getConditionsImage(void) const
  {
    assert(flagHasConditionsImage);
    return storeConditionsImage;
  }

bool CurrentConditionsJSON::hasHumidityPct(void) const
  {
    return flagHasHumidityPct;
  }

uint8_t CurrentConditionsJSON::getHumidityPct(void)
  {
    assert(flagHasHumidityPct);
    return storeHumidityPct;
  }

const uint8_t CurrentConditionsJSON::getHumidityPct(void) const
  {
    assert(flagHasHumidityPct);
    return storeHumidityPct;
  }

bool CurrentConditionsJSON::hasVisibility(void) const
  {
    return flagHasVisibility;
  }

CurrentConditionsJSON::TypeVisibilityJSON * CurrentConditionsJSON::getVisibility(void)
  {
    assert(flagHasVisibility);
    return storeVisibility;
  }

const CurrentConditionsJSON::TypeVisibilityJSON * CurrentConditionsJSON::getVisibility(void) const
  {
    assert(flagHasVisibility);
    return storeVisibility;
  }

bool CurrentConditionsJSON::hasPrecipitation1Hour(void) const
  {
    return flagHasPrecipitation1Hour;
  }

CurrentConditionsJSON::TypePrecipitation1HourJSON * CurrentConditionsJSON::getPrecipitation1Hour(void)
  {
    assert(flagHasPrecipitation1Hour);
    return storePrecipitation1Hour;
  }

const CurrentConditionsJSON::TypePrecipitation1HourJSON * CurrentConditionsJSON::getPrecipitation1Hour(void) const
  {
    assert(flagHasPrecipitation1Hour);
    return storePrecipitation1Hour;
  }

bool CurrentConditionsJSON::hasPrecipitationToday(void) const
  {
    return flagHasPrecipitationToday;
  }

CurrentConditionsJSON::TypePrecipitationTodayJSON * CurrentConditionsJSON::getPrecipitationToday(void)
  {
    assert(flagHasPrecipitationToday);
    return storePrecipitationToday;
  }

const CurrentConditionsJSON::TypePrecipitationTodayJSON * CurrentConditionsJSON::getPrecipitationToday(void) const
  {
    assert(flagHasPrecipitationToday);
    return storePrecipitationToday;
  }

bool CurrentConditionsJSON::hasWind(void) const
  {
    return flagHasWind;
  }

CurrentConditionsJSON::TypeWindJSON * CurrentConditionsJSON::getWind(void)
  {
    assert(flagHasWind);
    return storeWind;
  }

const CurrentConditionsJSON::TypeWindJSON * CurrentConditionsJSON::getWind(void) const
  {
    assert(flagHasWind);
    return storeWind;
  }

bool CurrentConditionsJSON::hasWindGust(void) const
  {
    return flagHasWindGust;
  }

CurrentConditionsJSON::TypeWindGustJSON * CurrentConditionsJSON::getWindGust(void)
  {
    assert(flagHasWindGust);
    return storeWindGust;
  }

const CurrentConditionsJSON::TypeWindGustJSON * CurrentConditionsJSON::getWindGust(void) const
  {
    assert(flagHasWindGust);
    return storeWindGust;
  }

bool CurrentConditionsJSON::hasBarometricPressure(void) const
  {
    return flagHasBarometricPressure;
  }

CurrentConditionsJSON::TypeBarometricPressureJSON * CurrentConditionsJSON::getBarometricPressure(void)
  {
    assert(flagHasBarometricPressure);
    return storeBarometricPressure;
  }

const CurrentConditionsJSON::TypeBarometricPressureJSON * CurrentConditionsJSON::getBarometricPressure(void) const
  {
    assert(flagHasBarometricPressure);
    return storeBarometricPressure;
  }

bool CurrentConditionsJSON::hasUVIndex(void) const
  {
    return flagHasUVIndex;
  }

CurrentConditionsJSON::TypeUVIndexJSON * CurrentConditionsJSON::getUVIndex(void)
  {
    assert(flagHasUVIndex);
    return storeUVIndex;
  }

const CurrentConditionsJSON::TypeUVIndexJSON * CurrentConditionsJSON::getUVIndex(void) const
  {
    assert(flagHasUVIndex);
    return storeUVIndex;
  }

bool CurrentConditionsJSON::hasCloudinessPct(void) const
  {
    return flagHasCloudinessPct;
  }

uint8_t CurrentConditionsJSON::getCloudinessPct(void)
  {
    assert(flagHasCloudinessPct);
    return storeCloudinessPct;
  }

const uint8_t CurrentConditionsJSON::getCloudinessPct(void) const
  {
    assert(flagHasCloudinessPct);
    return storeCloudinessPct;
  }

CurrentConditionsJSON::TypeCurrentTemperatureJSON *CurrentConditionsJSON::TypeCurrentTemperatureJSON::from_json(JSONValue *json_value, bool ignore_extras)
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
CurrentConditionsJSON::TypeFeelsLikeTemperatureJSON *CurrentConditionsJSON::TypeFeelsLikeTemperatureJSON::from_json(JSONValue *json_value, bool ignore_extras)
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
CurrentConditionsJSON::TypeHeatIndexJSON *CurrentConditionsJSON::TypeHeatIndexJSON::from_json(JSONValue *json_value, bool ignore_extras)
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
CurrentConditionsJSON::TypeWindchillJSON *CurrentConditionsJSON::TypeWindchillJSON::from_json(JSONValue *json_value, bool ignore_extras)
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
CurrentConditionsJSON::TypeDewPointJSON *CurrentConditionsJSON::TypeDewPointJSON::from_json(JSONValue *json_value, bool ignore_extras)
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
CurrentConditionsJSON::TypeVisibilityJSON *CurrentConditionsJSON::TypeVisibilityJSON::from_json(JSONValue *json_value, bool ignore_extras)
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
CurrentConditionsJSON::TypePrecipitation1HourJSON *CurrentConditionsJSON::TypePrecipitation1HourJSON::from_json(JSONValue *json_value, bool ignore_extras)
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
CurrentConditionsJSON::TypePrecipitationTodayJSON *CurrentConditionsJSON::TypePrecipitationTodayJSON::from_json(JSONValue *json_value, bool ignore_extras)
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
CurrentConditionsJSON::TypeWindJSON *CurrentConditionsJSON::TypeWindJSON::from_json(JSONValue *json_value, bool ignore_extras)
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
CurrentConditionsJSON::TypeWindGustJSON *CurrentConditionsJSON::TypeWindGustJSON::from_json(JSONValue *json_value, bool ignore_extras)
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
CurrentConditionsJSON::TypeBarometricPressureJSON *CurrentConditionsJSON::TypeBarometricPressureJSON::from_json(JSONValue *json_value, bool ignore_extras)
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
CurrentConditionsJSON::TypeUVIndexJSON *CurrentConditionsJSON::TypeUVIndexJSON::from_json(JSONValue *json_value, bool ignore_extras)
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
CurrentConditionsJSON *CurrentConditionsJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    CurrentConditionsJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<CurrentConditionsJSON>, CurrentConditionsJSON *, bool> generator("Type CurrentConditions", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
