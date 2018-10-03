/* file "DailyForecastDayPartJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "DailyForecastDayPartJSON.h"

#include "DailyForecastDayPartJSON.h"


DailyForecastDayPartJSON::TypeWindJSON::TypeWindJSON(const TypeWindJSON &)
  {
    assert(false);
  }

DailyForecastDayPartJSON::TypeWindJSON &DailyForecastDayPartJSON::TypeWindJSON::operator=(const TypeWindJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void DailyForecastDayPartJSON::TypeWindJSON::fromJSONValue(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    UnitsValue_WindJSON *convert_classy = UnitsValue_WindJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setValue(convert_classy);
    convert_classy->remove_reference();
  }

void DailyForecastDayPartJSON::TypeWindJSON::fromJSONDirectionAbbreviation(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field DirectionAbbreviation of TypeWindJSON is not a string.");
    setDirectionAbbreviation(std::string(json_string->getData()));
  }

void DailyForecastDayPartJSON::TypeWindJSON::fromJSONDirectionText(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field DirectionText of TypeWindJSON is not a string.");
    setDirectionText(std::string(json_string->getData()));
  }

void DailyForecastDayPartJSON::TypeWindJSON::fromJSONDirectionDegrees(JSONValue *json_value, bool ignore_extras)
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

DailyForecastDayPartJSON::TypeWindJSON::TypeWindJSON(void) :
        flagHasValue(false),
        flagHasDirectionAbbreviation(false),
        flagHasDirectionText(false),
        flagHasDirectionDegrees(false)
  {
    extraIndex = create_string_index();
  }

DailyForecastDayPartJSON::TypeWindJSON::~TypeWindJSON(void)
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

bool DailyForecastDayPartJSON::TypeWindJSON::hasValue(void) const
  {
    return flagHasValue;
  }

UnitsValue_WindJSON * DailyForecastDayPartJSON::TypeWindJSON::getValue(void)
  {
    assert(flagHasValue);
    return storeValue;
  }

const UnitsValue_WindJSON * DailyForecastDayPartJSON::TypeWindJSON::getValue(void) const
  {
    assert(flagHasValue);
    return storeValue;
  }

bool DailyForecastDayPartJSON::TypeWindJSON::hasDirectionAbbreviation(void) const
  {
    return flagHasDirectionAbbreviation;
  }

std::string DailyForecastDayPartJSON::TypeWindJSON::getDirectionAbbreviation(void)
  {
    assert(flagHasDirectionAbbreviation);
    return storeDirectionAbbreviation;
  }

const std::string DailyForecastDayPartJSON::TypeWindJSON::getDirectionAbbreviation(void) const
  {
    assert(flagHasDirectionAbbreviation);
    return storeDirectionAbbreviation;
  }

bool DailyForecastDayPartJSON::TypeWindJSON::hasDirectionText(void) const
  {
    return flagHasDirectionText;
  }

std::string DailyForecastDayPartJSON::TypeWindJSON::getDirectionText(void)
  {
    assert(flagHasDirectionText);
    return storeDirectionText;
  }

const std::string DailyForecastDayPartJSON::TypeWindJSON::getDirectionText(void) const
  {
    assert(flagHasDirectionText);
    return storeDirectionText;
  }

bool DailyForecastDayPartJSON::TypeWindJSON::hasDirectionDegrees(void) const
  {
    return flagHasDirectionDegrees;
  }

uint16_t DailyForecastDayPartJSON::TypeWindJSON::getDirectionDegrees(void)
  {
    assert(flagHasDirectionDegrees);
    return storeDirectionDegrees;
  }

const uint16_t DailyForecastDayPartJSON::TypeWindJSON::getDirectionDegrees(void) const
  {
    assert(flagHasDirectionDegrees);
    return storeDirectionDegrees;
  }

DailyForecastDayPartJSON::TypeWindGustJSON::TypeWindGustJSON(const TypeWindGustJSON &)
  {
    assert(false);
  }

DailyForecastDayPartJSON::TypeWindGustJSON &DailyForecastDayPartJSON::TypeWindGustJSON::operator=(const TypeWindGustJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void DailyForecastDayPartJSON::TypeWindGustJSON::fromJSONValue(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    UnitsValue_WindJSON *convert_classy = UnitsValue_WindJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setValue(convert_classy);
    convert_classy->remove_reference();
  }

void DailyForecastDayPartJSON::TypeWindGustJSON::fromJSONDirectionAbbreviation(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field DirectionAbbreviation of TypeWindGustJSON is not a string.");
    setDirectionAbbreviation(std::string(json_string->getData()));
  }

void DailyForecastDayPartJSON::TypeWindGustJSON::fromJSONDirectionText(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field DirectionText of TypeWindGustJSON is not a string.");
    setDirectionText(std::string(json_string->getData()));
  }

void DailyForecastDayPartJSON::TypeWindGustJSON::fromJSONDirectionDegrees(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    uint16_t extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field DirectionDegrees of TypeWindGustJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field DirectionDegrees of TypeWindGustJSON is not an integer.");
          }
        extracted_integer = (uint16_t)(json_rational->getUnsignedLongInt())    ;
      }
    else
      {
        extracted_integer = (uint16_t)(json_integer->getUnsignedLongInt())    ;
      }
    setDirectionDegrees(extracted_integer);
  }

DailyForecastDayPartJSON::TypeWindGustJSON::TypeWindGustJSON(void) :
        flagHasValue(false),
        flagHasDirectionAbbreviation(false),
        flagHasDirectionText(false),
        flagHasDirectionDegrees(false)
  {
    extraIndex = create_string_index();
  }

DailyForecastDayPartJSON::TypeWindGustJSON::~TypeWindGustJSON(void)
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

bool DailyForecastDayPartJSON::TypeWindGustJSON::hasValue(void) const
  {
    return flagHasValue;
  }

UnitsValue_WindJSON * DailyForecastDayPartJSON::TypeWindGustJSON::getValue(void)
  {
    assert(flagHasValue);
    return storeValue;
  }

const UnitsValue_WindJSON * DailyForecastDayPartJSON::TypeWindGustJSON::getValue(void) const
  {
    assert(flagHasValue);
    return storeValue;
  }

bool DailyForecastDayPartJSON::TypeWindGustJSON::hasDirectionAbbreviation(void) const
  {
    return flagHasDirectionAbbreviation;
  }

std::string DailyForecastDayPartJSON::TypeWindGustJSON::getDirectionAbbreviation(void)
  {
    assert(flagHasDirectionAbbreviation);
    return storeDirectionAbbreviation;
  }

const std::string DailyForecastDayPartJSON::TypeWindGustJSON::getDirectionAbbreviation(void) const
  {
    assert(flagHasDirectionAbbreviation);
    return storeDirectionAbbreviation;
  }

bool DailyForecastDayPartJSON::TypeWindGustJSON::hasDirectionText(void) const
  {
    return flagHasDirectionText;
  }

std::string DailyForecastDayPartJSON::TypeWindGustJSON::getDirectionText(void)
  {
    assert(flagHasDirectionText);
    return storeDirectionText;
  }

const std::string DailyForecastDayPartJSON::TypeWindGustJSON::getDirectionText(void) const
  {
    assert(flagHasDirectionText);
    return storeDirectionText;
  }

bool DailyForecastDayPartJSON::TypeWindGustJSON::hasDirectionDegrees(void) const
  {
    return flagHasDirectionDegrees;
  }

uint16_t DailyForecastDayPartJSON::TypeWindGustJSON::getDirectionDegrees(void)
  {
    assert(flagHasDirectionDegrees);
    return storeDirectionDegrees;
  }

const uint16_t DailyForecastDayPartJSON::TypeWindGustJSON::getDirectionDegrees(void) const
  {
    assert(flagHasDirectionDegrees);
    return storeDirectionDegrees;
  }

DailyForecastDayPartJSON::TypeLiquidTotalJSON::TypeLiquidTotalJSON(const TypeLiquidTotalJSON &)
  {
    assert(false);
  }

DailyForecastDayPartJSON::TypeLiquidTotalJSON &DailyForecastDayPartJSON::TypeLiquidTotalJSON::operator=(const TypeLiquidTotalJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void DailyForecastDayPartJSON::TypeLiquidTotalJSON::fromJSONValue(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    UnitsValue_PrecipitationJSON *convert_classy = UnitsValue_PrecipitationJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setValue(convert_classy);
    convert_classy->remove_reference();
  }

DailyForecastDayPartJSON::TypeLiquidTotalJSON::TypeLiquidTotalJSON(void) :
        flagHasValue(false)
  {
    extraIndex = create_string_index();
  }

DailyForecastDayPartJSON::TypeLiquidTotalJSON::~TypeLiquidTotalJSON(void)
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

bool DailyForecastDayPartJSON::TypeLiquidTotalJSON::hasValue(void) const
  {
    return flagHasValue;
  }

UnitsValue_PrecipitationJSON * DailyForecastDayPartJSON::TypeLiquidTotalJSON::getValue(void)
  {
    assert(flagHasValue);
    return storeValue;
  }

const UnitsValue_PrecipitationJSON * DailyForecastDayPartJSON::TypeLiquidTotalJSON::getValue(void) const
  {
    assert(flagHasValue);
    return storeValue;
  }

DailyForecastDayPartJSON::TypeRainTotalJSON::TypeRainTotalJSON(const TypeRainTotalJSON &)
  {
    assert(false);
  }

DailyForecastDayPartJSON::TypeRainTotalJSON &DailyForecastDayPartJSON::TypeRainTotalJSON::operator=(const TypeRainTotalJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void DailyForecastDayPartJSON::TypeRainTotalJSON::fromJSONValue(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    UnitsValue_PrecipitationJSON *convert_classy = UnitsValue_PrecipitationJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setValue(convert_classy);
    convert_classy->remove_reference();
  }

DailyForecastDayPartJSON::TypeRainTotalJSON::TypeRainTotalJSON(void) :
        flagHasValue(false)
  {
    extraIndex = create_string_index();
  }

DailyForecastDayPartJSON::TypeRainTotalJSON::~TypeRainTotalJSON(void)
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

bool DailyForecastDayPartJSON::TypeRainTotalJSON::hasValue(void) const
  {
    return flagHasValue;
  }

UnitsValue_PrecipitationJSON * DailyForecastDayPartJSON::TypeRainTotalJSON::getValue(void)
  {
    assert(flagHasValue);
    return storeValue;
  }

const UnitsValue_PrecipitationJSON * DailyForecastDayPartJSON::TypeRainTotalJSON::getValue(void) const
  {
    assert(flagHasValue);
    return storeValue;
  }

DailyForecastDayPartJSON::TypeSnowTotalJSON::TypeSnowTotalJSON(const TypeSnowTotalJSON &)
  {
    assert(false);
  }

DailyForecastDayPartJSON::TypeSnowTotalJSON &DailyForecastDayPartJSON::TypeSnowTotalJSON::operator=(const TypeSnowTotalJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void DailyForecastDayPartJSON::TypeSnowTotalJSON::fromJSONValue(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    UnitsValue_SnowJSON *convert_classy = UnitsValue_SnowJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setValue(convert_classy);
    convert_classy->remove_reference();
  }

DailyForecastDayPartJSON::TypeSnowTotalJSON::TypeSnowTotalJSON(void) :
        flagHasValue(false)
  {
    extraIndex = create_string_index();
  }

DailyForecastDayPartJSON::TypeSnowTotalJSON::~TypeSnowTotalJSON(void)
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

bool DailyForecastDayPartJSON::TypeSnowTotalJSON::hasValue(void) const
  {
    return flagHasValue;
  }

UnitsValue_SnowJSON * DailyForecastDayPartJSON::TypeSnowTotalJSON::getValue(void)
  {
    assert(flagHasValue);
    return storeValue;
  }

const UnitsValue_SnowJSON * DailyForecastDayPartJSON::TypeSnowTotalJSON::getValue(void) const
  {
    assert(flagHasValue);
    return storeValue;
  }

DailyForecastDayPartJSON::TypeIceTotalJSON::TypeIceTotalJSON(const TypeIceTotalJSON &)
  {
    assert(false);
  }

DailyForecastDayPartJSON::TypeIceTotalJSON &DailyForecastDayPartJSON::TypeIceTotalJSON::operator=(const TypeIceTotalJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void DailyForecastDayPartJSON::TypeIceTotalJSON::fromJSONValue(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    UnitsValue_IceJSON *convert_classy = UnitsValue_IceJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setValue(convert_classy);
    convert_classy->remove_reference();
  }

DailyForecastDayPartJSON::TypeIceTotalJSON::TypeIceTotalJSON(void) :
        flagHasValue(false)
  {
    extraIndex = create_string_index();
  }

DailyForecastDayPartJSON::TypeIceTotalJSON::~TypeIceTotalJSON(void)
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

bool DailyForecastDayPartJSON::TypeIceTotalJSON::hasValue(void) const
  {
    return flagHasValue;
  }

UnitsValue_IceJSON * DailyForecastDayPartJSON::TypeIceTotalJSON::getValue(void)
  {
    assert(flagHasValue);
    return storeValue;
  }

const UnitsValue_IceJSON * DailyForecastDayPartJSON::TypeIceTotalJSON::getValue(void) const
  {
    assert(flagHasValue);
    return storeValue;
  }

DailyForecastDayPartJSON::DailyForecastDayPartJSON(const DailyForecastDayPartJSON &)
  {
    assert(false);
  }

DailyForecastDayPartJSON &DailyForecastDayPartJSON::operator=(const DailyForecastDayPartJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void DailyForecastDayPartJSON::fromJSONConditionsImage(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    WeatherImageJSON *convert_classy = WeatherImageJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setConditionsImage(convert_classy);
    convert_classy->remove_reference();
  }

void DailyForecastDayPartJSON::fromJSONIconPhrase(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field IconPhrase of DailyForecastDayPartJSON is not a string.");
    setIconPhrase(std::string(json_string->getData()));
  }

void DailyForecastDayPartJSON::fromJSONShortPhrase(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field ShortPhrase of DailyForecastDayPartJSON is not a string.");
    setShortPhrase(std::string(json_string->getData()));
  }

void DailyForecastDayPartJSON::fromJSONLongPhrase(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field LongPhrase of DailyForecastDayPartJSON is not a string.");
    setLongPhrase(std::string(json_string->getData()));
  }

void DailyForecastDayPartJSON::fromJSONWind(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TypeWindJSON *convert_classy = TypeWindJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setWind(convert_classy);
    convert_classy->remove_reference();
  }

void DailyForecastDayPartJSON::fromJSONWindGust(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TypeWindGustJSON *convert_classy = TypeWindGustJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setWindGust(convert_classy);
    convert_classy->remove_reference();
  }

void DailyForecastDayPartJSON::fromJSONLiquidTotal(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TypeLiquidTotalJSON *convert_classy = TypeLiquidTotalJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setLiquidTotal(convert_classy);
    convert_classy->remove_reference();
  }

void DailyForecastDayPartJSON::fromJSONRainTotal(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TypeRainTotalJSON *convert_classy = TypeRainTotalJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setRainTotal(convert_classy);
    convert_classy->remove_reference();
  }

void DailyForecastDayPartJSON::fromJSONSnowTotal(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TypeSnowTotalJSON *convert_classy = TypeSnowTotalJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setSnowTotal(convert_classy);
    convert_classy->remove_reference();
  }

void DailyForecastDayPartJSON::fromJSONIceTotal(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TypeIceTotalJSON *convert_classy = TypeIceTotalJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setIceTotal(convert_classy);
    convert_classy->remove_reference();
  }

void DailyForecastDayPartJSON::fromJSONProbabilityOfPrecipitationPct(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    uint8_t extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field ProbabilityOfPrecipitationPct of DailyForecastDayPartJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field ProbabilityOfPrecipitationPct of DailyForecastDayPartJSON is not an integer.");
          }
        extracted_integer = (uint8_t)(json_rational->getUnsignedLongInt())    ;
      }
    else
      {
        extracted_integer = (uint8_t)(json_integer->getUnsignedLongInt())    ;
      }
    setProbabilityOfPrecipitationPct(extracted_integer);
  }

void DailyForecastDayPartJSON::fromJSONProbabilityOfThunderstormPct(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    uint8_t extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field ProbabilityOfThunderstormPct of DailyForecastDayPartJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field ProbabilityOfThunderstormPct of DailyForecastDayPartJSON is not an integer.");
          }
        extracted_integer = (uint8_t)(json_rational->getUnsignedLongInt())    ;
      }
    else
      {
        extracted_integer = (uint8_t)(json_integer->getUnsignedLongInt())    ;
      }
    setProbabilityOfThunderstormPct(extracted_integer);
  }

void DailyForecastDayPartJSON::fromJSONProbabilityOfRainPct(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    uint8_t extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field ProbabilityOfRainPct of DailyForecastDayPartJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field ProbabilityOfRainPct of DailyForecastDayPartJSON is not an integer.");
          }
        extracted_integer = (uint8_t)(json_rational->getUnsignedLongInt())    ;
      }
    else
      {
        extracted_integer = (uint8_t)(json_integer->getUnsignedLongInt())    ;
      }
    setProbabilityOfRainPct(extracted_integer);
  }

void DailyForecastDayPartJSON::fromJSONProbabilityOfSnowPct(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    uint8_t extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field ProbabilityOfSnowPct of DailyForecastDayPartJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field ProbabilityOfSnowPct of DailyForecastDayPartJSON is not an integer.");
          }
        extracted_integer = (uint8_t)(json_rational->getUnsignedLongInt())    ;
      }
    else
      {
        extracted_integer = (uint8_t)(json_integer->getUnsignedLongInt())    ;
      }
    setProbabilityOfSnowPct(extracted_integer);
  }

void DailyForecastDayPartJSON::fromJSONProbabilityOfIcePct(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    uint8_t extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field ProbabilityOfIcePct of DailyForecastDayPartJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field ProbabilityOfIcePct of DailyForecastDayPartJSON is not an integer.");
          }
        extracted_integer = (uint8_t)(json_rational->getUnsignedLongInt())    ;
      }
    else
      {
        extracted_integer = (uint8_t)(json_integer->getUnsignedLongInt())    ;
      }
    setProbabilityOfIcePct(extracted_integer);
  }

void DailyForecastDayPartJSON::fromJSONHoursOfPrecipitation(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONRationalValue *json_rational = json_value->rational_value();
    std::string the_rational_text;
    if (json_rational != NULL)
      {
        the_rational_text = json_rational->getText();
      }
    else
      {
        const JSONIntegerValue *json_integer = json_value->integer_value();
        if (json_integer != NULL)
          {
            the_rational_text = json_integer->getText();
          }
        else
          {
            throw("The value for field HoursOfPrecipitation of DailyForecastDayPartJSON is not a number.");
          }
      }
    setHoursOfPrecipitationText(the_rational_text);
  }

void DailyForecastDayPartJSON::fromJSONHoursOfRain(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONRationalValue *json_rational = json_value->rational_value();
    std::string the_rational_text;
    if (json_rational != NULL)
      {
        the_rational_text = json_rational->getText();
      }
    else
      {
        const JSONIntegerValue *json_integer = json_value->integer_value();
        if (json_integer != NULL)
          {
            the_rational_text = json_integer->getText();
          }
        else
          {
            throw("The value for field HoursOfRain of DailyForecastDayPartJSON is not a number.");
          }
      }
    setHoursOfRainText(the_rational_text);
  }

void DailyForecastDayPartJSON::fromJSONCloudCoverPct(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    uint8_t extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field CloudCoverPct of DailyForecastDayPartJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field CloudCoverPct of DailyForecastDayPartJSON is not an integer.");
          }
        extracted_integer = (uint8_t)(json_rational->getUnsignedLongInt())    ;
      }
    else
      {
        extracted_integer = (uint8_t)(json_integer->getUnsignedLongInt())    ;
      }
    setCloudCoverPct(extracted_integer);
  }

DailyForecastDayPartJSON::DailyForecastDayPartJSON(void) :
        flagHasConditionsImage(false),
        flagHasIconPhrase(false),
        flagHasShortPhrase(false),
        flagHasLongPhrase(false),
        flagHasWind(false),
        flagHasWindGust(false),
        flagHasLiquidTotal(false),
        flagHasRainTotal(false),
        flagHasSnowTotal(false),
        flagHasIceTotal(false),
        flagHasProbabilityOfPrecipitationPct(false),
        flagHasProbabilityOfThunderstormPct(false),
        flagHasProbabilityOfRainPct(false),
        flagHasProbabilityOfSnowPct(false),
        flagHasProbabilityOfIcePct(false),
        flagHasHoursOfPrecipitation(false),
        flagHasHoursOfRain(false),
        flagHasCloudCoverPct(false)
  {
    extraIndex = create_string_index();
  }

DailyForecastDayPartJSON::~DailyForecastDayPartJSON(void)
  {
    if (flagHasConditionsImage)
      {
        storeConditionsImage->remove_reference();
      }
    if (flagHasWind)
      {
        storeWind->remove_reference();
      }
    if (flagHasWindGust)
      {
        storeWindGust->remove_reference();
      }
    if (flagHasLiquidTotal)
      {
        storeLiquidTotal->remove_reference();
      }
    if (flagHasRainTotal)
      {
        storeRainTotal->remove_reference();
      }
    if (flagHasSnowTotal)
      {
        storeSnowTotal->remove_reference();
      }
    if (flagHasIceTotal)
      {
        storeIceTotal->remove_reference();
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool DailyForecastDayPartJSON::hasConditionsImage(void) const
  {
    return flagHasConditionsImage;
  }

WeatherImageJSON * DailyForecastDayPartJSON::getConditionsImage(void)
  {
    assert(flagHasConditionsImage);
    return storeConditionsImage;
  }

const WeatherImageJSON * DailyForecastDayPartJSON::getConditionsImage(void) const
  {
    assert(flagHasConditionsImage);
    return storeConditionsImage;
  }

bool DailyForecastDayPartJSON::hasIconPhrase(void) const
  {
    return flagHasIconPhrase;
  }

std::string DailyForecastDayPartJSON::getIconPhrase(void)
  {
    assert(flagHasIconPhrase);
    return storeIconPhrase;
  }

const std::string DailyForecastDayPartJSON::getIconPhrase(void) const
  {
    assert(flagHasIconPhrase);
    return storeIconPhrase;
  }

bool DailyForecastDayPartJSON::hasShortPhrase(void) const
  {
    return flagHasShortPhrase;
  }

std::string DailyForecastDayPartJSON::getShortPhrase(void)
  {
    assert(flagHasShortPhrase);
    return storeShortPhrase;
  }

const std::string DailyForecastDayPartJSON::getShortPhrase(void) const
  {
    assert(flagHasShortPhrase);
    return storeShortPhrase;
  }

bool DailyForecastDayPartJSON::hasLongPhrase(void) const
  {
    return flagHasLongPhrase;
  }

std::string DailyForecastDayPartJSON::getLongPhrase(void)
  {
    assert(flagHasLongPhrase);
    return storeLongPhrase;
  }

const std::string DailyForecastDayPartJSON::getLongPhrase(void) const
  {
    assert(flagHasLongPhrase);
    return storeLongPhrase;
  }

bool DailyForecastDayPartJSON::hasWind(void) const
  {
    return flagHasWind;
  }

DailyForecastDayPartJSON::TypeWindJSON * DailyForecastDayPartJSON::getWind(void)
  {
    assert(flagHasWind);
    return storeWind;
  }

const DailyForecastDayPartJSON::TypeWindJSON * DailyForecastDayPartJSON::getWind(void) const
  {
    assert(flagHasWind);
    return storeWind;
  }

bool DailyForecastDayPartJSON::hasWindGust(void) const
  {
    return flagHasWindGust;
  }

DailyForecastDayPartJSON::TypeWindGustJSON * DailyForecastDayPartJSON::getWindGust(void)
  {
    assert(flagHasWindGust);
    return storeWindGust;
  }

const DailyForecastDayPartJSON::TypeWindGustJSON * DailyForecastDayPartJSON::getWindGust(void) const
  {
    assert(flagHasWindGust);
    return storeWindGust;
  }

bool DailyForecastDayPartJSON::hasLiquidTotal(void) const
  {
    return flagHasLiquidTotal;
  }

DailyForecastDayPartJSON::TypeLiquidTotalJSON * DailyForecastDayPartJSON::getLiquidTotal(void)
  {
    assert(flagHasLiquidTotal);
    return storeLiquidTotal;
  }

const DailyForecastDayPartJSON::TypeLiquidTotalJSON * DailyForecastDayPartJSON::getLiquidTotal(void) const
  {
    assert(flagHasLiquidTotal);
    return storeLiquidTotal;
  }

bool DailyForecastDayPartJSON::hasRainTotal(void) const
  {
    return flagHasRainTotal;
  }

DailyForecastDayPartJSON::TypeRainTotalJSON * DailyForecastDayPartJSON::getRainTotal(void)
  {
    assert(flagHasRainTotal);
    return storeRainTotal;
  }

const DailyForecastDayPartJSON::TypeRainTotalJSON * DailyForecastDayPartJSON::getRainTotal(void) const
  {
    assert(flagHasRainTotal);
    return storeRainTotal;
  }

bool DailyForecastDayPartJSON::hasSnowTotal(void) const
  {
    return flagHasSnowTotal;
  }

DailyForecastDayPartJSON::TypeSnowTotalJSON * DailyForecastDayPartJSON::getSnowTotal(void)
  {
    assert(flagHasSnowTotal);
    return storeSnowTotal;
  }

const DailyForecastDayPartJSON::TypeSnowTotalJSON * DailyForecastDayPartJSON::getSnowTotal(void) const
  {
    assert(flagHasSnowTotal);
    return storeSnowTotal;
  }

bool DailyForecastDayPartJSON::hasIceTotal(void) const
  {
    return flagHasIceTotal;
  }

DailyForecastDayPartJSON::TypeIceTotalJSON * DailyForecastDayPartJSON::getIceTotal(void)
  {
    assert(flagHasIceTotal);
    return storeIceTotal;
  }

const DailyForecastDayPartJSON::TypeIceTotalJSON * DailyForecastDayPartJSON::getIceTotal(void) const
  {
    assert(flagHasIceTotal);
    return storeIceTotal;
  }

bool DailyForecastDayPartJSON::hasProbabilityOfPrecipitationPct(void) const
  {
    return flagHasProbabilityOfPrecipitationPct;
  }

uint8_t DailyForecastDayPartJSON::getProbabilityOfPrecipitationPct(void)
  {
    assert(flagHasProbabilityOfPrecipitationPct);
    return storeProbabilityOfPrecipitationPct;
  }

const uint8_t DailyForecastDayPartJSON::getProbabilityOfPrecipitationPct(void) const
  {
    assert(flagHasProbabilityOfPrecipitationPct);
    return storeProbabilityOfPrecipitationPct;
  }

bool DailyForecastDayPartJSON::hasProbabilityOfThunderstormPct(void) const
  {
    return flagHasProbabilityOfThunderstormPct;
  }

uint8_t DailyForecastDayPartJSON::getProbabilityOfThunderstormPct(void)
  {
    assert(flagHasProbabilityOfThunderstormPct);
    return storeProbabilityOfThunderstormPct;
  }

const uint8_t DailyForecastDayPartJSON::getProbabilityOfThunderstormPct(void) const
  {
    assert(flagHasProbabilityOfThunderstormPct);
    return storeProbabilityOfThunderstormPct;
  }

bool DailyForecastDayPartJSON::hasProbabilityOfRainPct(void) const
  {
    return flagHasProbabilityOfRainPct;
  }

uint8_t DailyForecastDayPartJSON::getProbabilityOfRainPct(void)
  {
    assert(flagHasProbabilityOfRainPct);
    return storeProbabilityOfRainPct;
  }

const uint8_t DailyForecastDayPartJSON::getProbabilityOfRainPct(void) const
  {
    assert(flagHasProbabilityOfRainPct);
    return storeProbabilityOfRainPct;
  }

bool DailyForecastDayPartJSON::hasProbabilityOfSnowPct(void) const
  {
    return flagHasProbabilityOfSnowPct;
  }

uint8_t DailyForecastDayPartJSON::getProbabilityOfSnowPct(void)
  {
    assert(flagHasProbabilityOfSnowPct);
    return storeProbabilityOfSnowPct;
  }

const uint8_t DailyForecastDayPartJSON::getProbabilityOfSnowPct(void) const
  {
    assert(flagHasProbabilityOfSnowPct);
    return storeProbabilityOfSnowPct;
  }

bool DailyForecastDayPartJSON::hasProbabilityOfIcePct(void) const
  {
    return flagHasProbabilityOfIcePct;
  }

uint8_t DailyForecastDayPartJSON::getProbabilityOfIcePct(void)
  {
    assert(flagHasProbabilityOfIcePct);
    return storeProbabilityOfIcePct;
  }

const uint8_t DailyForecastDayPartJSON::getProbabilityOfIcePct(void) const
  {
    assert(flagHasProbabilityOfIcePct);
    return storeProbabilityOfIcePct;
  }

bool DailyForecastDayPartJSON::hasHoursOfPrecipitation(void) const
  {
    return flagHasHoursOfPrecipitation;
  }

double DailyForecastDayPartJSON::getHoursOfPrecipitation(void)
  {
    assert(flagHasHoursOfPrecipitation);
    if (textStoreHoursOfPrecipitation != "")
      {
        return atof(textStoreHoursOfPrecipitation.c_str());
      }
    return storeHoursOfPrecipitation;
  }

const double DailyForecastDayPartJSON::getHoursOfPrecipitation(void) const
  {
    assert(flagHasHoursOfPrecipitation);
    if (textStoreHoursOfPrecipitation != "")
      {
        return atof(textStoreHoursOfPrecipitation.c_str());
      }
    return storeHoursOfPrecipitation;
  }

std::string DailyForecastDayPartJSON::getHoursOfPrecipitationAsText(void) const
  {
    assert(flagHasHoursOfPrecipitation);
    if (textStoreHoursOfPrecipitation == "")
      {
        char buffer[100];
        sprintf(&(buffer[0]), "%g", storeHoursOfPrecipitation);
        return &(buffer[0]);
      }
    else
      {
        return (textStoreHoursOfPrecipitation);
      }
  }

bool DailyForecastDayPartJSON::hasHoursOfRain(void) const
  {
    return flagHasHoursOfRain;
  }

double DailyForecastDayPartJSON::getHoursOfRain(void)
  {
    assert(flagHasHoursOfRain);
    if (textStoreHoursOfRain != "")
      {
        return atof(textStoreHoursOfRain.c_str());
      }
    return storeHoursOfRain;
  }

const double DailyForecastDayPartJSON::getHoursOfRain(void) const
  {
    assert(flagHasHoursOfRain);
    if (textStoreHoursOfRain != "")
      {
        return atof(textStoreHoursOfRain.c_str());
      }
    return storeHoursOfRain;
  }

std::string DailyForecastDayPartJSON::getHoursOfRainAsText(void) const
  {
    assert(flagHasHoursOfRain);
    if (textStoreHoursOfRain == "")
      {
        char buffer[100];
        sprintf(&(buffer[0]), "%g", storeHoursOfRain);
        return &(buffer[0]);
      }
    else
      {
        return (textStoreHoursOfRain);
      }
  }

bool DailyForecastDayPartJSON::hasCloudCoverPct(void) const
  {
    return flagHasCloudCoverPct;
  }

uint8_t DailyForecastDayPartJSON::getCloudCoverPct(void)
  {
    assert(flagHasCloudCoverPct);
    return storeCloudCoverPct;
  }

const uint8_t DailyForecastDayPartJSON::getCloudCoverPct(void) const
  {
    assert(flagHasCloudCoverPct);
    return storeCloudCoverPct;
  }

DailyForecastDayPartJSON::TypeWindJSON *DailyForecastDayPartJSON::TypeWindJSON::from_json(JSONValue *json_value, bool ignore_extras)
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
DailyForecastDayPartJSON::TypeWindGustJSON *DailyForecastDayPartJSON::TypeWindGustJSON::from_json(JSONValue *json_value, bool ignore_extras)
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
DailyForecastDayPartJSON::TypeLiquidTotalJSON *DailyForecastDayPartJSON::TypeLiquidTotalJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    TypeLiquidTotalJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<TypeLiquidTotalJSON>, TypeLiquidTotalJSON *, bool> generator("Type TypeLiquidTotal", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
DailyForecastDayPartJSON::TypeRainTotalJSON *DailyForecastDayPartJSON::TypeRainTotalJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    TypeRainTotalJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<TypeRainTotalJSON>, TypeRainTotalJSON *, bool> generator("Type TypeRainTotal", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
DailyForecastDayPartJSON::TypeSnowTotalJSON *DailyForecastDayPartJSON::TypeSnowTotalJSON::from_json(JSONValue *json_value, bool ignore_extras)
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
DailyForecastDayPartJSON::TypeIceTotalJSON *DailyForecastDayPartJSON::TypeIceTotalJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    TypeIceTotalJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<TypeIceTotalJSON>, TypeIceTotalJSON *, bool> generator("Type TypeIceTotal", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
DailyForecastDayPartJSON *DailyForecastDayPartJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    DailyForecastDayPartJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<DailyForecastDayPartJSON>, DailyForecastDayPartJSON *, bool> generator("Type DailyForecastDayPart", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
