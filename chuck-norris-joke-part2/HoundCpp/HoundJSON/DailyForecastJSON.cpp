/* file "DailyForecastJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "DailyForecastJSON.h"

#include "DailyForecastJSON.h"


DailyForecastJSON::TypeHighTemperatureJSON::TypeHighTemperatureJSON(const TypeHighTemperatureJSON &)
  {
    assert(false);
  }

DailyForecastJSON::TypeHighTemperatureJSON &DailyForecastJSON::TypeHighTemperatureJSON::operator=(const TypeHighTemperatureJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void DailyForecastJSON::TypeHighTemperatureJSON::fromJSONValue(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    UnitsValue_TemperatureJSON *convert_classy = UnitsValue_TemperatureJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setValue(convert_classy);
    convert_classy->remove_reference();
  }

DailyForecastJSON::TypeHighTemperatureJSON::TypeHighTemperatureJSON(void) :
        flagHasValue(false)
  {
    extraIndex = create_string_index();
  }

DailyForecastJSON::TypeHighTemperatureJSON::~TypeHighTemperatureJSON(void)
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

bool DailyForecastJSON::TypeHighTemperatureJSON::hasValue(void) const
  {
    return flagHasValue;
  }

UnitsValue_TemperatureJSON * DailyForecastJSON::TypeHighTemperatureJSON::getValue(void)
  {
    assert(flagHasValue);
    return storeValue;
  }

const UnitsValue_TemperatureJSON * DailyForecastJSON::TypeHighTemperatureJSON::getValue(void) const
  {
    assert(flagHasValue);
    return storeValue;
  }

DailyForecastJSON::TypeLowTemperatureJSON::TypeLowTemperatureJSON(const TypeLowTemperatureJSON &)
  {
    assert(false);
  }

DailyForecastJSON::TypeLowTemperatureJSON &DailyForecastJSON::TypeLowTemperatureJSON::operator=(const TypeLowTemperatureJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void DailyForecastJSON::TypeLowTemperatureJSON::fromJSONValue(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    UnitsValue_TemperatureJSON *convert_classy = UnitsValue_TemperatureJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setValue(convert_classy);
    convert_classy->remove_reference();
  }

DailyForecastJSON::TypeLowTemperatureJSON::TypeLowTemperatureJSON(void) :
        flagHasValue(false)
  {
    extraIndex = create_string_index();
  }

DailyForecastJSON::TypeLowTemperatureJSON::~TypeLowTemperatureJSON(void)
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

bool DailyForecastJSON::TypeLowTemperatureJSON::hasValue(void) const
  {
    return flagHasValue;
  }

UnitsValue_TemperatureJSON * DailyForecastJSON::TypeLowTemperatureJSON::getValue(void)
  {
    assert(flagHasValue);
    return storeValue;
  }

const UnitsValue_TemperatureJSON * DailyForecastJSON::TypeLowTemperatureJSON::getValue(void) const
  {
    assert(flagHasValue);
    return storeValue;
  }

DailyForecastJSON::TypePrecipitationTotalJSON::TypePrecipitationTotalJSON(const TypePrecipitationTotalJSON &)
  {
    assert(false);
  }

DailyForecastJSON::TypePrecipitationTotalJSON &DailyForecastJSON::TypePrecipitationTotalJSON::operator=(const TypePrecipitationTotalJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void DailyForecastJSON::TypePrecipitationTotalJSON::fromJSONValue(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    UnitsValue_PrecipitationJSON *convert_classy = UnitsValue_PrecipitationJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setValue(convert_classy);
    convert_classy->remove_reference();
  }

DailyForecastJSON::TypePrecipitationTotalJSON::TypePrecipitationTotalJSON(void) :
        flagHasValue(false)
  {
    extraIndex = create_string_index();
  }

DailyForecastJSON::TypePrecipitationTotalJSON::~TypePrecipitationTotalJSON(void)
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

bool DailyForecastJSON::TypePrecipitationTotalJSON::hasValue(void) const
  {
    return flagHasValue;
  }

UnitsValue_PrecipitationJSON * DailyForecastJSON::TypePrecipitationTotalJSON::getValue(void)
  {
    assert(flagHasValue);
    return storeValue;
  }

const UnitsValue_PrecipitationJSON * DailyForecastJSON::TypePrecipitationTotalJSON::getValue(void) const
  {
    assert(flagHasValue);
    return storeValue;
  }

DailyForecastJSON::TypePrecipitationDayJSON::TypePrecipitationDayJSON(const TypePrecipitationDayJSON &)
  {
    assert(false);
  }

DailyForecastJSON::TypePrecipitationDayJSON &DailyForecastJSON::TypePrecipitationDayJSON::operator=(const TypePrecipitationDayJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void DailyForecastJSON::TypePrecipitationDayJSON::fromJSONValue(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    UnitsValue_PrecipitationJSON *convert_classy = UnitsValue_PrecipitationJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setValue(convert_classy);
    convert_classy->remove_reference();
  }

DailyForecastJSON::TypePrecipitationDayJSON::TypePrecipitationDayJSON(void) :
        flagHasValue(false)
  {
    extraIndex = create_string_index();
  }

DailyForecastJSON::TypePrecipitationDayJSON::~TypePrecipitationDayJSON(void)
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

bool DailyForecastJSON::TypePrecipitationDayJSON::hasValue(void) const
  {
    return flagHasValue;
  }

UnitsValue_PrecipitationJSON * DailyForecastJSON::TypePrecipitationDayJSON::getValue(void)
  {
    assert(flagHasValue);
    return storeValue;
  }

const UnitsValue_PrecipitationJSON * DailyForecastJSON::TypePrecipitationDayJSON::getValue(void) const
  {
    assert(flagHasValue);
    return storeValue;
  }

DailyForecastJSON::TypePrecipitationNightJSON::TypePrecipitationNightJSON(const TypePrecipitationNightJSON &)
  {
    assert(false);
  }

DailyForecastJSON::TypePrecipitationNightJSON &DailyForecastJSON::TypePrecipitationNightJSON::operator=(const TypePrecipitationNightJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void DailyForecastJSON::TypePrecipitationNightJSON::fromJSONValue(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    UnitsValue_PrecipitationJSON *convert_classy = UnitsValue_PrecipitationJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setValue(convert_classy);
    convert_classy->remove_reference();
  }

DailyForecastJSON::TypePrecipitationNightJSON::TypePrecipitationNightJSON(void) :
        flagHasValue(false)
  {
    extraIndex = create_string_index();
  }

DailyForecastJSON::TypePrecipitationNightJSON::~TypePrecipitationNightJSON(void)
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

bool DailyForecastJSON::TypePrecipitationNightJSON::hasValue(void) const
  {
    return flagHasValue;
  }

UnitsValue_PrecipitationJSON * DailyForecastJSON::TypePrecipitationNightJSON::getValue(void)
  {
    assert(flagHasValue);
    return storeValue;
  }

const UnitsValue_PrecipitationJSON * DailyForecastJSON::TypePrecipitationNightJSON::getValue(void) const
  {
    assert(flagHasValue);
    return storeValue;
  }

DailyForecastJSON::TypeSnowTotalJSON::TypeSnowTotalJSON(const TypeSnowTotalJSON &)
  {
    assert(false);
  }

DailyForecastJSON::TypeSnowTotalJSON &DailyForecastJSON::TypeSnowTotalJSON::operator=(const TypeSnowTotalJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void DailyForecastJSON::TypeSnowTotalJSON::fromJSONValue(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    UnitsValue_SnowJSON *convert_classy = UnitsValue_SnowJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setValue(convert_classy);
    convert_classy->remove_reference();
  }

DailyForecastJSON::TypeSnowTotalJSON::TypeSnowTotalJSON(void) :
        flagHasValue(false)
  {
    extraIndex = create_string_index();
  }

DailyForecastJSON::TypeSnowTotalJSON::~TypeSnowTotalJSON(void)
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

bool DailyForecastJSON::TypeSnowTotalJSON::hasValue(void) const
  {
    return flagHasValue;
  }

UnitsValue_SnowJSON * DailyForecastJSON::TypeSnowTotalJSON::getValue(void)
  {
    assert(flagHasValue);
    return storeValue;
  }

const UnitsValue_SnowJSON * DailyForecastJSON::TypeSnowTotalJSON::getValue(void) const
  {
    assert(flagHasValue);
    return storeValue;
  }

DailyForecastJSON::TypeSnowDayJSON::TypeSnowDayJSON(const TypeSnowDayJSON &)
  {
    assert(false);
  }

DailyForecastJSON::TypeSnowDayJSON &DailyForecastJSON::TypeSnowDayJSON::operator=(const TypeSnowDayJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void DailyForecastJSON::TypeSnowDayJSON::fromJSONValue(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    UnitsValue_SnowJSON *convert_classy = UnitsValue_SnowJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setValue(convert_classy);
    convert_classy->remove_reference();
  }

DailyForecastJSON::TypeSnowDayJSON::TypeSnowDayJSON(void) :
        flagHasValue(false)
  {
    extraIndex = create_string_index();
  }

DailyForecastJSON::TypeSnowDayJSON::~TypeSnowDayJSON(void)
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

bool DailyForecastJSON::TypeSnowDayJSON::hasValue(void) const
  {
    return flagHasValue;
  }

UnitsValue_SnowJSON * DailyForecastJSON::TypeSnowDayJSON::getValue(void)
  {
    assert(flagHasValue);
    return storeValue;
  }

const UnitsValue_SnowJSON * DailyForecastJSON::TypeSnowDayJSON::getValue(void) const
  {
    assert(flagHasValue);
    return storeValue;
  }

DailyForecastJSON::TypeSnowNightJSON::TypeSnowNightJSON(const TypeSnowNightJSON &)
  {
    assert(false);
  }

DailyForecastJSON::TypeSnowNightJSON &DailyForecastJSON::TypeSnowNightJSON::operator=(const TypeSnowNightJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void DailyForecastJSON::TypeSnowNightJSON::fromJSONValue(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    UnitsValue_SnowJSON *convert_classy = UnitsValue_SnowJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setValue(convert_classy);
    convert_classy->remove_reference();
  }

DailyForecastJSON::TypeSnowNightJSON::TypeSnowNightJSON(void) :
        flagHasValue(false)
  {
    extraIndex = create_string_index();
  }

DailyForecastJSON::TypeSnowNightJSON::~TypeSnowNightJSON(void)
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

bool DailyForecastJSON::TypeSnowNightJSON::hasValue(void) const
  {
    return flagHasValue;
  }

UnitsValue_SnowJSON * DailyForecastJSON::TypeSnowNightJSON::getValue(void)
  {
    assert(flagHasValue);
    return storeValue;
  }

const UnitsValue_SnowJSON * DailyForecastJSON::TypeSnowNightJSON::getValue(void) const
  {
    assert(flagHasValue);
    return storeValue;
  }

DailyForecastJSON::TypeMaxWindJSON::TypeMaxWindJSON(const TypeMaxWindJSON &)
  {
    assert(false);
  }

DailyForecastJSON::TypeMaxWindJSON &DailyForecastJSON::TypeMaxWindJSON::operator=(const TypeMaxWindJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void DailyForecastJSON::TypeMaxWindJSON::fromJSONValue(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    UnitsValue_WindJSON *convert_classy = UnitsValue_WindJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setValue(convert_classy);
    convert_classy->remove_reference();
  }

void DailyForecastJSON::TypeMaxWindJSON::fromJSONDirectionAbbreviation(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field DirectionAbbreviation of TypeMaxWindJSON is not a string.");
    setDirectionAbbreviation(std::string(json_string->getData()));
  }

void DailyForecastJSON::TypeMaxWindJSON::fromJSONDirectionText(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field DirectionText of TypeMaxWindJSON is not a string.");
    setDirectionText(std::string(json_string->getData()));
  }

void DailyForecastJSON::TypeMaxWindJSON::fromJSONDirectionDegrees(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    uint16_t extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field DirectionDegrees of TypeMaxWindJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field DirectionDegrees of TypeMaxWindJSON is not an integer.");
          }
        extracted_integer = (uint16_t)(json_rational->getUnsignedLongInt())    ;
      }
    else
      {
        extracted_integer = (uint16_t)(json_integer->getUnsignedLongInt())    ;
      }
    setDirectionDegrees(extracted_integer);
  }

DailyForecastJSON::TypeMaxWindJSON::TypeMaxWindJSON(void) :
        flagHasValue(false),
        flagHasDirectionAbbreviation(false),
        flagHasDirectionText(false),
        flagHasDirectionDegrees(false)
  {
    extraIndex = create_string_index();
  }

DailyForecastJSON::TypeMaxWindJSON::~TypeMaxWindJSON(void)
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

bool DailyForecastJSON::TypeMaxWindJSON::hasValue(void) const
  {
    return flagHasValue;
  }

UnitsValue_WindJSON * DailyForecastJSON::TypeMaxWindJSON::getValue(void)
  {
    assert(flagHasValue);
    return storeValue;
  }

const UnitsValue_WindJSON * DailyForecastJSON::TypeMaxWindJSON::getValue(void) const
  {
    assert(flagHasValue);
    return storeValue;
  }

bool DailyForecastJSON::TypeMaxWindJSON::hasDirectionAbbreviation(void) const
  {
    return flagHasDirectionAbbreviation;
  }

std::string DailyForecastJSON::TypeMaxWindJSON::getDirectionAbbreviation(void)
  {
    assert(flagHasDirectionAbbreviation);
    return storeDirectionAbbreviation;
  }

const std::string DailyForecastJSON::TypeMaxWindJSON::getDirectionAbbreviation(void) const
  {
    assert(flagHasDirectionAbbreviation);
    return storeDirectionAbbreviation;
  }

bool DailyForecastJSON::TypeMaxWindJSON::hasDirectionText(void) const
  {
    return flagHasDirectionText;
  }

std::string DailyForecastJSON::TypeMaxWindJSON::getDirectionText(void)
  {
    assert(flagHasDirectionText);
    return storeDirectionText;
  }

const std::string DailyForecastJSON::TypeMaxWindJSON::getDirectionText(void) const
  {
    assert(flagHasDirectionText);
    return storeDirectionText;
  }

bool DailyForecastJSON::TypeMaxWindJSON::hasDirectionDegrees(void) const
  {
    return flagHasDirectionDegrees;
  }

uint16_t DailyForecastJSON::TypeMaxWindJSON::getDirectionDegrees(void)
  {
    assert(flagHasDirectionDegrees);
    return storeDirectionDegrees;
  }

const uint16_t DailyForecastJSON::TypeMaxWindJSON::getDirectionDegrees(void) const
  {
    assert(flagHasDirectionDegrees);
    return storeDirectionDegrees;
  }

DailyForecastJSON::TypeAvgWindJSON::TypeAvgWindJSON(const TypeAvgWindJSON &)
  {
    assert(false);
  }

DailyForecastJSON::TypeAvgWindJSON &DailyForecastJSON::TypeAvgWindJSON::operator=(const TypeAvgWindJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void DailyForecastJSON::TypeAvgWindJSON::fromJSONValue(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    UnitsValue_WindJSON *convert_classy = UnitsValue_WindJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setValue(convert_classy);
    convert_classy->remove_reference();
  }

void DailyForecastJSON::TypeAvgWindJSON::fromJSONDirectionAbbreviation(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field DirectionAbbreviation of TypeAvgWindJSON is not a string.");
    setDirectionAbbreviation(std::string(json_string->getData()));
  }

void DailyForecastJSON::TypeAvgWindJSON::fromJSONDirectionText(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field DirectionText of TypeAvgWindJSON is not a string.");
    setDirectionText(std::string(json_string->getData()));
  }

void DailyForecastJSON::TypeAvgWindJSON::fromJSONDirectionDegrees(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    uint16_t extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field DirectionDegrees of TypeAvgWindJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field DirectionDegrees of TypeAvgWindJSON is not an integer.");
          }
        extracted_integer = (uint16_t)(json_rational->getUnsignedLongInt())    ;
      }
    else
      {
        extracted_integer = (uint16_t)(json_integer->getUnsignedLongInt())    ;
      }
    setDirectionDegrees(extracted_integer);
  }

DailyForecastJSON::TypeAvgWindJSON::TypeAvgWindJSON(void) :
        flagHasValue(false),
        flagHasDirectionAbbreviation(false),
        flagHasDirectionText(false),
        flagHasDirectionDegrees(false)
  {
    extraIndex = create_string_index();
  }

DailyForecastJSON::TypeAvgWindJSON::~TypeAvgWindJSON(void)
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

bool DailyForecastJSON::TypeAvgWindJSON::hasValue(void) const
  {
    return flagHasValue;
  }

UnitsValue_WindJSON * DailyForecastJSON::TypeAvgWindJSON::getValue(void)
  {
    assert(flagHasValue);
    return storeValue;
  }

const UnitsValue_WindJSON * DailyForecastJSON::TypeAvgWindJSON::getValue(void) const
  {
    assert(flagHasValue);
    return storeValue;
  }

bool DailyForecastJSON::TypeAvgWindJSON::hasDirectionAbbreviation(void) const
  {
    return flagHasDirectionAbbreviation;
  }

std::string DailyForecastJSON::TypeAvgWindJSON::getDirectionAbbreviation(void)
  {
    assert(flagHasDirectionAbbreviation);
    return storeDirectionAbbreviation;
  }

const std::string DailyForecastJSON::TypeAvgWindJSON::getDirectionAbbreviation(void) const
  {
    assert(flagHasDirectionAbbreviation);
    return storeDirectionAbbreviation;
  }

bool DailyForecastJSON::TypeAvgWindJSON::hasDirectionText(void) const
  {
    return flagHasDirectionText;
  }

std::string DailyForecastJSON::TypeAvgWindJSON::getDirectionText(void)
  {
    assert(flagHasDirectionText);
    return storeDirectionText;
  }

const std::string DailyForecastJSON::TypeAvgWindJSON::getDirectionText(void) const
  {
    assert(flagHasDirectionText);
    return storeDirectionText;
  }

bool DailyForecastJSON::TypeAvgWindJSON::hasDirectionDegrees(void) const
  {
    return flagHasDirectionDegrees;
  }

uint16_t DailyForecastJSON::TypeAvgWindJSON::getDirectionDegrees(void)
  {
    assert(flagHasDirectionDegrees);
    return storeDirectionDegrees;
  }

const uint16_t DailyForecastJSON::TypeAvgWindJSON::getDirectionDegrees(void) const
  {
    assert(flagHasDirectionDegrees);
    return storeDirectionDegrees;
  }

DailyForecastJSON::DailyForecastJSON(const DailyForecastJSON &)
  {
    assert(false);
  }

DailyForecastJSON &DailyForecastJSON::operator=(const DailyForecastJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void DailyForecastJSON::fromJSONForecastDateAndTime(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DateAndOrTimeJSON *convert_classy = DateAndOrTimeJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setForecastDateAndTime(convert_classy);
    convert_classy->remove_reference();
  }

void DailyForecastJSON::fromJSONSunriseDateAndTime(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DateAndOrTimeJSON *convert_classy = DateAndOrTimeJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setSunriseDateAndTime(convert_classy);
    convert_classy->remove_reference();
  }

void DailyForecastJSON::fromJSONSunsetDateAndTime(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DateAndOrTimeJSON *convert_classy = DateAndOrTimeJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setSunsetDateAndTime(convert_classy);
    convert_classy->remove_reference();
  }

void DailyForecastJSON::fromJSONMoonPhaseText(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field MoonPhaseText of DailyForecastJSON is not a string.");
    setMoonPhaseText(std::string(json_string->getData()));
  }

void DailyForecastJSON::fromJSONMoonPhasePct(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    uint8_t extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field MoonPhasePct of DailyForecastJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field MoonPhasePct of DailyForecastJSON is not an integer.");
          }
        extracted_integer = (uint8_t)(json_rational->getUnsignedLongInt())    ;
      }
    else
      {
        extracted_integer = (uint8_t)(json_integer->getUnsignedLongInt())    ;
      }
    setMoonPhasePct(extracted_integer);
  }

void DailyForecastJSON::fromJSONForecastShortPhrase(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field ForecastShortPhrase of DailyForecastJSON is not a string.");
    setForecastShortPhrase(std::string(json_string->getData()));
  }

void DailyForecastJSON::fromJSONWeatherIconURL(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field WeatherIconURL of DailyForecastJSON is not a string.");
    setWeatherIconURL(std::string(json_string->getData()));
  }

void DailyForecastJSON::fromJSONConditionsImage(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    WeatherImageJSON *convert_classy = WeatherImageJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setConditionsImage(convert_classy);
    convert_classy->remove_reference();
  }

void DailyForecastJSON::fromJSONHighTemperature(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TypeHighTemperatureJSON *convert_classy = TypeHighTemperatureJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setHighTemperature(convert_classy);
    convert_classy->remove_reference();
  }

void DailyForecastJSON::fromJSONLowTemperature(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TypeLowTemperatureJSON *convert_classy = TypeLowTemperatureJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setLowTemperature(convert_classy);
    convert_classy->remove_reference();
  }

void DailyForecastJSON::fromJSONProbabilityOfPrecipitationPct(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    uint8_t extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field ProbabilityOfPrecipitationPct of DailyForecastJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field ProbabilityOfPrecipitationPct of DailyForecastJSON is not an integer.");
          }
        extracted_integer = (uint8_t)(json_rational->getUnsignedLongInt())    ;
      }
    else
      {
        extracted_integer = (uint8_t)(json_integer->getUnsignedLongInt())    ;
      }
    setProbabilityOfPrecipitationPct(extracted_integer);
  }

void DailyForecastJSON::fromJSONPrecipitationTotal(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TypePrecipitationTotalJSON *convert_classy = TypePrecipitationTotalJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setPrecipitationTotal(convert_classy);
    convert_classy->remove_reference();
  }

void DailyForecastJSON::fromJSONPrecipitationDay(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TypePrecipitationDayJSON *convert_classy = TypePrecipitationDayJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setPrecipitationDay(convert_classy);
    convert_classy->remove_reference();
  }

void DailyForecastJSON::fromJSONPrecipitationNight(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TypePrecipitationNightJSON *convert_classy = TypePrecipitationNightJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setPrecipitationNight(convert_classy);
    convert_classy->remove_reference();
  }

void DailyForecastJSON::fromJSONDay(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DailyForecastDayPartJSON *convert_classy = DailyForecastDayPartJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setDay(convert_classy);
    convert_classy->remove_reference();
  }

void DailyForecastJSON::fromJSONNight(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DailyForecastDayPartJSON *convert_classy = DailyForecastDayPartJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setNight(convert_classy);
    convert_classy->remove_reference();
  }

void DailyForecastJSON::fromJSONSnowTotal(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TypeSnowTotalJSON *convert_classy = TypeSnowTotalJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setSnowTotal(convert_classy);
    convert_classy->remove_reference();
  }

void DailyForecastJSON::fromJSONSnowDay(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TypeSnowDayJSON *convert_classy = TypeSnowDayJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setSnowDay(convert_classy);
    convert_classy->remove_reference();
  }

void DailyForecastJSON::fromJSONSnowNight(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TypeSnowNightJSON *convert_classy = TypeSnowNightJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setSnowNight(convert_classy);
    convert_classy->remove_reference();
  }

void DailyForecastJSON::fromJSONMaxHumidityPct(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    uint8_t extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field MaxHumidityPct of DailyForecastJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field MaxHumidityPct of DailyForecastJSON is not an integer.");
          }
        extracted_integer = (uint8_t)(json_rational->getUnsignedLongInt())    ;
      }
    else
      {
        extracted_integer = (uint8_t)(json_integer->getUnsignedLongInt())    ;
      }
    setMaxHumidityPct(extracted_integer);
  }

void DailyForecastJSON::fromJSONAvgHumidityPct(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    uint8_t extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field AvgHumidityPct of DailyForecastJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field AvgHumidityPct of DailyForecastJSON is not an integer.");
          }
        extracted_integer = (uint8_t)(json_rational->getUnsignedLongInt())    ;
      }
    else
      {
        extracted_integer = (uint8_t)(json_integer->getUnsignedLongInt())    ;
      }
    setAvgHumidityPct(extracted_integer);
  }

void DailyForecastJSON::fromJSONMinHumidityPct(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    uint8_t extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field MinHumidityPct of DailyForecastJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field MinHumidityPct of DailyForecastJSON is not an integer.");
          }
        extracted_integer = (uint8_t)(json_rational->getUnsignedLongInt())    ;
      }
    else
      {
        extracted_integer = (uint8_t)(json_integer->getUnsignedLongInt())    ;
      }
    setMinHumidityPct(extracted_integer);
  }

void DailyForecastJSON::fromJSONMaxWind(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TypeMaxWindJSON *convert_classy = TypeMaxWindJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setMaxWind(convert_classy);
    convert_classy->remove_reference();
  }

void DailyForecastJSON::fromJSONAvgWind(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TypeAvgWindJSON *convert_classy = TypeAvgWindJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setAvgWind(convert_classy);
    convert_classy->remove_reference();
  }

DailyForecastJSON::DailyForecastJSON(void) :
        flagHasForecastDateAndTime(false),
        flagHasSunriseDateAndTime(false),
        flagHasSunsetDateAndTime(false),
        flagHasMoonPhaseText(false),
        flagHasMoonPhasePct(false),
        flagHasForecastShortPhrase(false),
        flagHasWeatherIconURL(false),
        flagHasConditionsImage(false),
        flagHasHighTemperature(false),
        flagHasLowTemperature(false),
        flagHasProbabilityOfPrecipitationPct(false),
        flagHasPrecipitationTotal(false),
        flagHasPrecipitationDay(false),
        flagHasPrecipitationNight(false),
        flagHasDay(false),
        flagHasNight(false),
        flagHasSnowTotal(false),
        flagHasSnowDay(false),
        flagHasSnowNight(false),
        flagHasMaxHumidityPct(false),
        flagHasAvgHumidityPct(false),
        flagHasMinHumidityPct(false),
        flagHasMaxWind(false),
        flagHasAvgWind(false)
  {
    extraIndex = create_string_index();
  }

DailyForecastJSON::~DailyForecastJSON(void)
  {
    if (flagHasForecastDateAndTime)
      {
        storeForecastDateAndTime->remove_reference();
      }
    if (flagHasSunriseDateAndTime)
      {
        storeSunriseDateAndTime->remove_reference();
      }
    if (flagHasSunsetDateAndTime)
      {
        storeSunsetDateAndTime->remove_reference();
      }
    if (flagHasConditionsImage)
      {
        storeConditionsImage->remove_reference();
      }
    if (flagHasHighTemperature)
      {
        storeHighTemperature->remove_reference();
      }
    if (flagHasLowTemperature)
      {
        storeLowTemperature->remove_reference();
      }
    if (flagHasPrecipitationTotal)
      {
        storePrecipitationTotal->remove_reference();
      }
    if (flagHasPrecipitationDay)
      {
        storePrecipitationDay->remove_reference();
      }
    if (flagHasPrecipitationNight)
      {
        storePrecipitationNight->remove_reference();
      }
    if (flagHasDay)
      {
        storeDay->remove_reference();
      }
    if (flagHasNight)
      {
        storeNight->remove_reference();
      }
    if (flagHasSnowTotal)
      {
        storeSnowTotal->remove_reference();
      }
    if (flagHasSnowDay)
      {
        storeSnowDay->remove_reference();
      }
    if (flagHasSnowNight)
      {
        storeSnowNight->remove_reference();
      }
    if (flagHasMaxWind)
      {
        storeMaxWind->remove_reference();
      }
    if (flagHasAvgWind)
      {
        storeAvgWind->remove_reference();
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool DailyForecastJSON::hasForecastDateAndTime(void) const
  {
    return flagHasForecastDateAndTime;
  }

DateAndOrTimeJSON * DailyForecastJSON::getForecastDateAndTime(void)
  {
    assert(flagHasForecastDateAndTime);
    return storeForecastDateAndTime;
  }

const DateAndOrTimeJSON * DailyForecastJSON::getForecastDateAndTime(void) const
  {
    assert(flagHasForecastDateAndTime);
    return storeForecastDateAndTime;
  }

bool DailyForecastJSON::hasSunriseDateAndTime(void) const
  {
    return flagHasSunriseDateAndTime;
  }

DateAndOrTimeJSON * DailyForecastJSON::getSunriseDateAndTime(void)
  {
    assert(flagHasSunriseDateAndTime);
    return storeSunriseDateAndTime;
  }

const DateAndOrTimeJSON * DailyForecastJSON::getSunriseDateAndTime(void) const
  {
    assert(flagHasSunriseDateAndTime);
    return storeSunriseDateAndTime;
  }

bool DailyForecastJSON::hasSunsetDateAndTime(void) const
  {
    return flagHasSunsetDateAndTime;
  }

DateAndOrTimeJSON * DailyForecastJSON::getSunsetDateAndTime(void)
  {
    assert(flagHasSunsetDateAndTime);
    return storeSunsetDateAndTime;
  }

const DateAndOrTimeJSON * DailyForecastJSON::getSunsetDateAndTime(void) const
  {
    assert(flagHasSunsetDateAndTime);
    return storeSunsetDateAndTime;
  }

bool DailyForecastJSON::hasMoonPhaseText(void) const
  {
    return flagHasMoonPhaseText;
  }

std::string DailyForecastJSON::getMoonPhaseText(void)
  {
    assert(flagHasMoonPhaseText);
    return storeMoonPhaseText;
  }

const std::string DailyForecastJSON::getMoonPhaseText(void) const
  {
    assert(flagHasMoonPhaseText);
    return storeMoonPhaseText;
  }

bool DailyForecastJSON::hasMoonPhasePct(void) const
  {
    return flagHasMoonPhasePct;
  }

uint8_t DailyForecastJSON::getMoonPhasePct(void)
  {
    assert(flagHasMoonPhasePct);
    return storeMoonPhasePct;
  }

const uint8_t DailyForecastJSON::getMoonPhasePct(void) const
  {
    assert(flagHasMoonPhasePct);
    return storeMoonPhasePct;
  }

bool DailyForecastJSON::hasForecastShortPhrase(void) const
  {
    return flagHasForecastShortPhrase;
  }

std::string DailyForecastJSON::getForecastShortPhrase(void)
  {
    assert(flagHasForecastShortPhrase);
    return storeForecastShortPhrase;
  }

const std::string DailyForecastJSON::getForecastShortPhrase(void) const
  {
    assert(flagHasForecastShortPhrase);
    return storeForecastShortPhrase;
  }

bool DailyForecastJSON::hasWeatherIconURL(void) const
  {
    return flagHasWeatherIconURL;
  }

std::string DailyForecastJSON::getWeatherIconURL(void)
  {
    assert(flagHasWeatherIconURL);
    return storeWeatherIconURL;
  }

const std::string DailyForecastJSON::getWeatherIconURL(void) const
  {
    assert(flagHasWeatherIconURL);
    return storeWeatherIconURL;
  }

bool DailyForecastJSON::hasConditionsImage(void) const
  {
    return flagHasConditionsImage;
  }

WeatherImageJSON * DailyForecastJSON::getConditionsImage(void)
  {
    assert(flagHasConditionsImage);
    return storeConditionsImage;
  }

const WeatherImageJSON * DailyForecastJSON::getConditionsImage(void) const
  {
    assert(flagHasConditionsImage);
    return storeConditionsImage;
  }

bool DailyForecastJSON::hasHighTemperature(void) const
  {
    return flagHasHighTemperature;
  }

DailyForecastJSON::TypeHighTemperatureJSON * DailyForecastJSON::getHighTemperature(void)
  {
    assert(flagHasHighTemperature);
    return storeHighTemperature;
  }

const DailyForecastJSON::TypeHighTemperatureJSON * DailyForecastJSON::getHighTemperature(void) const
  {
    assert(flagHasHighTemperature);
    return storeHighTemperature;
  }

bool DailyForecastJSON::hasLowTemperature(void) const
  {
    return flagHasLowTemperature;
  }

DailyForecastJSON::TypeLowTemperatureJSON * DailyForecastJSON::getLowTemperature(void)
  {
    assert(flagHasLowTemperature);
    return storeLowTemperature;
  }

const DailyForecastJSON::TypeLowTemperatureJSON * DailyForecastJSON::getLowTemperature(void) const
  {
    assert(flagHasLowTemperature);
    return storeLowTemperature;
  }

bool DailyForecastJSON::hasProbabilityOfPrecipitationPct(void) const
  {
    return flagHasProbabilityOfPrecipitationPct;
  }

uint8_t DailyForecastJSON::getProbabilityOfPrecipitationPct(void)
  {
    assert(flagHasProbabilityOfPrecipitationPct);
    return storeProbabilityOfPrecipitationPct;
  }

const uint8_t DailyForecastJSON::getProbabilityOfPrecipitationPct(void) const
  {
    assert(flagHasProbabilityOfPrecipitationPct);
    return storeProbabilityOfPrecipitationPct;
  }

bool DailyForecastJSON::hasPrecipitationTotal(void) const
  {
    return flagHasPrecipitationTotal;
  }

DailyForecastJSON::TypePrecipitationTotalJSON * DailyForecastJSON::getPrecipitationTotal(void)
  {
    assert(flagHasPrecipitationTotal);
    return storePrecipitationTotal;
  }

const DailyForecastJSON::TypePrecipitationTotalJSON * DailyForecastJSON::getPrecipitationTotal(void) const
  {
    assert(flagHasPrecipitationTotal);
    return storePrecipitationTotal;
  }

bool DailyForecastJSON::hasPrecipitationDay(void) const
  {
    return flagHasPrecipitationDay;
  }

DailyForecastJSON::TypePrecipitationDayJSON * DailyForecastJSON::getPrecipitationDay(void)
  {
    assert(flagHasPrecipitationDay);
    return storePrecipitationDay;
  }

const DailyForecastJSON::TypePrecipitationDayJSON * DailyForecastJSON::getPrecipitationDay(void) const
  {
    assert(flagHasPrecipitationDay);
    return storePrecipitationDay;
  }

bool DailyForecastJSON::hasPrecipitationNight(void) const
  {
    return flagHasPrecipitationNight;
  }

DailyForecastJSON::TypePrecipitationNightJSON * DailyForecastJSON::getPrecipitationNight(void)
  {
    assert(flagHasPrecipitationNight);
    return storePrecipitationNight;
  }

const DailyForecastJSON::TypePrecipitationNightJSON * DailyForecastJSON::getPrecipitationNight(void) const
  {
    assert(flagHasPrecipitationNight);
    return storePrecipitationNight;
  }

bool DailyForecastJSON::hasDay(void) const
  {
    return flagHasDay;
  }

DailyForecastDayPartJSON * DailyForecastJSON::getDay(void)
  {
    assert(flagHasDay);
    return storeDay;
  }

const DailyForecastDayPartJSON * DailyForecastJSON::getDay(void) const
  {
    assert(flagHasDay);
    return storeDay;
  }

bool DailyForecastJSON::hasNight(void) const
  {
    return flagHasNight;
  }

DailyForecastDayPartJSON * DailyForecastJSON::getNight(void)
  {
    assert(flagHasNight);
    return storeNight;
  }

const DailyForecastDayPartJSON * DailyForecastJSON::getNight(void) const
  {
    assert(flagHasNight);
    return storeNight;
  }

bool DailyForecastJSON::hasSnowTotal(void) const
  {
    return flagHasSnowTotal;
  }

DailyForecastJSON::TypeSnowTotalJSON * DailyForecastJSON::getSnowTotal(void)
  {
    assert(flagHasSnowTotal);
    return storeSnowTotal;
  }

const DailyForecastJSON::TypeSnowTotalJSON * DailyForecastJSON::getSnowTotal(void) const
  {
    assert(flagHasSnowTotal);
    return storeSnowTotal;
  }

bool DailyForecastJSON::hasSnowDay(void) const
  {
    return flagHasSnowDay;
  }

DailyForecastJSON::TypeSnowDayJSON * DailyForecastJSON::getSnowDay(void)
  {
    assert(flagHasSnowDay);
    return storeSnowDay;
  }

const DailyForecastJSON::TypeSnowDayJSON * DailyForecastJSON::getSnowDay(void) const
  {
    assert(flagHasSnowDay);
    return storeSnowDay;
  }

bool DailyForecastJSON::hasSnowNight(void) const
  {
    return flagHasSnowNight;
  }

DailyForecastJSON::TypeSnowNightJSON * DailyForecastJSON::getSnowNight(void)
  {
    assert(flagHasSnowNight);
    return storeSnowNight;
  }

const DailyForecastJSON::TypeSnowNightJSON * DailyForecastJSON::getSnowNight(void) const
  {
    assert(flagHasSnowNight);
    return storeSnowNight;
  }

bool DailyForecastJSON::hasMaxHumidityPct(void) const
  {
    return flagHasMaxHumidityPct;
  }

uint8_t DailyForecastJSON::getMaxHumidityPct(void)
  {
    assert(flagHasMaxHumidityPct);
    return storeMaxHumidityPct;
  }

const uint8_t DailyForecastJSON::getMaxHumidityPct(void) const
  {
    assert(flagHasMaxHumidityPct);
    return storeMaxHumidityPct;
  }

bool DailyForecastJSON::hasAvgHumidityPct(void) const
  {
    return flagHasAvgHumidityPct;
  }

uint8_t DailyForecastJSON::getAvgHumidityPct(void)
  {
    assert(flagHasAvgHumidityPct);
    return storeAvgHumidityPct;
  }

const uint8_t DailyForecastJSON::getAvgHumidityPct(void) const
  {
    assert(flagHasAvgHumidityPct);
    return storeAvgHumidityPct;
  }

bool DailyForecastJSON::hasMinHumidityPct(void) const
  {
    return flagHasMinHumidityPct;
  }

uint8_t DailyForecastJSON::getMinHumidityPct(void)
  {
    assert(flagHasMinHumidityPct);
    return storeMinHumidityPct;
  }

const uint8_t DailyForecastJSON::getMinHumidityPct(void) const
  {
    assert(flagHasMinHumidityPct);
    return storeMinHumidityPct;
  }

bool DailyForecastJSON::hasMaxWind(void) const
  {
    return flagHasMaxWind;
  }

DailyForecastJSON::TypeMaxWindJSON * DailyForecastJSON::getMaxWind(void)
  {
    assert(flagHasMaxWind);
    return storeMaxWind;
  }

const DailyForecastJSON::TypeMaxWindJSON * DailyForecastJSON::getMaxWind(void) const
  {
    assert(flagHasMaxWind);
    return storeMaxWind;
  }

bool DailyForecastJSON::hasAvgWind(void) const
  {
    return flagHasAvgWind;
  }

DailyForecastJSON::TypeAvgWindJSON * DailyForecastJSON::getAvgWind(void)
  {
    assert(flagHasAvgWind);
    return storeAvgWind;
  }

const DailyForecastJSON::TypeAvgWindJSON * DailyForecastJSON::getAvgWind(void) const
  {
    assert(flagHasAvgWind);
    return storeAvgWind;
  }

DailyForecastJSON::TypeHighTemperatureJSON *DailyForecastJSON::TypeHighTemperatureJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    TypeHighTemperatureJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<TypeHighTemperatureJSON>, TypeHighTemperatureJSON *, bool> generator("Type TypeHighTemperature", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
DailyForecastJSON::TypeLowTemperatureJSON *DailyForecastJSON::TypeLowTemperatureJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    TypeLowTemperatureJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<TypeLowTemperatureJSON>, TypeLowTemperatureJSON *, bool> generator("Type TypeLowTemperature", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
DailyForecastJSON::TypePrecipitationTotalJSON *DailyForecastJSON::TypePrecipitationTotalJSON::from_json(JSONValue *json_value, bool ignore_extras)
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
DailyForecastJSON::TypePrecipitationDayJSON *DailyForecastJSON::TypePrecipitationDayJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    TypePrecipitationDayJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<TypePrecipitationDayJSON>, TypePrecipitationDayJSON *, bool> generator("Type TypePrecipitationDay", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
DailyForecastJSON::TypePrecipitationNightJSON *DailyForecastJSON::TypePrecipitationNightJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    TypePrecipitationNightJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<TypePrecipitationNightJSON>, TypePrecipitationNightJSON *, bool> generator("Type TypePrecipitationNight", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
DailyForecastJSON::TypeSnowTotalJSON *DailyForecastJSON::TypeSnowTotalJSON::from_json(JSONValue *json_value, bool ignore_extras)
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
DailyForecastJSON::TypeSnowDayJSON *DailyForecastJSON::TypeSnowDayJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    TypeSnowDayJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<TypeSnowDayJSON>, TypeSnowDayJSON *, bool> generator("Type TypeSnowDay", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
DailyForecastJSON::TypeSnowNightJSON *DailyForecastJSON::TypeSnowNightJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    TypeSnowNightJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<TypeSnowNightJSON>, TypeSnowNightJSON *, bool> generator("Type TypeSnowNight", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
DailyForecastJSON::TypeMaxWindJSON *DailyForecastJSON::TypeMaxWindJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    TypeMaxWindJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<TypeMaxWindJSON>, TypeMaxWindJSON *, bool> generator("Type TypeMaxWind", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
DailyForecastJSON::TypeAvgWindJSON *DailyForecastJSON::TypeAvgWindJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    TypeAvgWindJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<TypeAvgWindJSON>, TypeAvgWindJSON *, bool> generator("Type TypeAvgWind", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
DailyForecastJSON *DailyForecastJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    DailyForecastJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<DailyForecastJSON>, DailyForecastJSON *, bool> generator("Type DailyForecast", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
