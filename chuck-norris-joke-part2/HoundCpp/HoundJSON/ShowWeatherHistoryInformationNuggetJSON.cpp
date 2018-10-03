/* file "ShowWeatherHistoryInformationNuggetJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "ShowWeatherHistoryInformationNuggetJSON.h"

#include "ShowWeatherHistoryInformationNuggetJSON.h"


ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::TypePrecipitationJSON::TypePrecipitationJSON(const TypePrecipitationJSON &)
  {
    assert(false);
  }

ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::TypePrecipitationJSON &ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::TypePrecipitationJSON::operator=(const TypePrecipitationJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::TypePrecipitationJSON::fromJSONValue(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    UnitsValue_PrecipitationJSON *convert_classy = UnitsValue_PrecipitationJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setValue(convert_classy);
    convert_classy->remove_reference();
  }

ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::TypePrecipitationJSON::TypePrecipitationJSON(void) :
        flagHasValue(false)
  {
    extraIndex = create_string_index();
  }

ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::TypePrecipitationJSON::~TypePrecipitationJSON(void)
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

bool ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::TypePrecipitationJSON::hasValue(void) const
  {
    return flagHasValue;
  }

UnitsValue_PrecipitationJSON * ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::TypePrecipitationJSON::getValue(void)
  {
    assert(flagHasValue);
    return storeValue;
  }

const UnitsValue_PrecipitationJSON * ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::TypePrecipitationJSON::getValue(void) const
  {
    assert(flagHasValue);
    return storeValue;
  }

ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::TypeSnowfallJSON::TypeSnowfallJSON(const TypeSnowfallJSON &)
  {
    assert(false);
  }

ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::TypeSnowfallJSON &ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::TypeSnowfallJSON::operator=(const TypeSnowfallJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::TypeSnowfallJSON::fromJSONValue(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    UnitsValue_SnowJSON *convert_classy = UnitsValue_SnowJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setValue(convert_classy);
    convert_classy->remove_reference();
  }

ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::TypeSnowfallJSON::TypeSnowfallJSON(void) :
        flagHasValue(false)
  {
    extraIndex = create_string_index();
  }

ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::TypeSnowfallJSON::~TypeSnowfallJSON(void)
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

bool ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::TypeSnowfallJSON::hasValue(void) const
  {
    return flagHasValue;
  }

UnitsValue_SnowJSON * ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::TypeSnowfallJSON::getValue(void)
  {
    assert(flagHasValue);
    return storeValue;
  }

const UnitsValue_SnowJSON * ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::TypeSnowfallJSON::getValue(void) const
  {
    assert(flagHasValue);
    return storeValue;
  }

ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::TypeSnowfallMonthToDateJSON::TypeSnowfallMonthToDateJSON(const TypeSnowfallMonthToDateJSON &)
  {
    assert(false);
  }

ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::TypeSnowfallMonthToDateJSON &ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::TypeSnowfallMonthToDateJSON::operator=(const TypeSnowfallMonthToDateJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::TypeSnowfallMonthToDateJSON::fromJSONValue(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    UnitsValue_SnowJSON *convert_classy = UnitsValue_SnowJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setValue(convert_classy);
    convert_classy->remove_reference();
  }

ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::TypeSnowfallMonthToDateJSON::TypeSnowfallMonthToDateJSON(void) :
        flagHasValue(false)
  {
    extraIndex = create_string_index();
  }

ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::TypeSnowfallMonthToDateJSON::~TypeSnowfallMonthToDateJSON(void)
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

bool ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::TypeSnowfallMonthToDateJSON::hasValue(void) const
  {
    return flagHasValue;
  }

UnitsValue_SnowJSON * ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::TypeSnowfallMonthToDateJSON::getValue(void)
  {
    assert(flagHasValue);
    return storeValue;
  }

const UnitsValue_SnowJSON * ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::TypeSnowfallMonthToDateJSON::getValue(void) const
  {
    assert(flagHasValue);
    return storeValue;
  }

ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::TypeSnowfallSinceJulyFirstJSON::TypeSnowfallSinceJulyFirstJSON(const TypeSnowfallSinceJulyFirstJSON &)
  {
    assert(false);
  }

ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::TypeSnowfallSinceJulyFirstJSON &ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::TypeSnowfallSinceJulyFirstJSON::operator=(const TypeSnowfallSinceJulyFirstJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::TypeSnowfallSinceJulyFirstJSON::fromJSONValue(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    UnitsValue_SnowJSON *convert_classy = UnitsValue_SnowJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setValue(convert_classy);
    convert_classy->remove_reference();
  }

ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::TypeSnowfallSinceJulyFirstJSON::TypeSnowfallSinceJulyFirstJSON(void) :
        flagHasValue(false)
  {
    extraIndex = create_string_index();
  }

ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::TypeSnowfallSinceJulyFirstJSON::~TypeSnowfallSinceJulyFirstJSON(void)
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

bool ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::TypeSnowfallSinceJulyFirstJSON::hasValue(void) const
  {
    return flagHasValue;
  }

UnitsValue_SnowJSON * ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::TypeSnowfallSinceJulyFirstJSON::getValue(void)
  {
    assert(flagHasValue);
    return storeValue;
  }

const UnitsValue_SnowJSON * ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::TypeSnowfallSinceJulyFirstJSON::getValue(void) const
  {
    assert(flagHasValue);
    return storeValue;
  }

ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::TypeSnowDepthJSON::TypeSnowDepthJSON(const TypeSnowDepthJSON &)
  {
    assert(false);
  }

ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::TypeSnowDepthJSON &ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::TypeSnowDepthJSON::operator=(const TypeSnowDepthJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::TypeSnowDepthJSON::fromJSONValue(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    UnitsValue_SnowJSON *convert_classy = UnitsValue_SnowJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setValue(convert_classy);
    convert_classy->remove_reference();
  }

ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::TypeSnowDepthJSON::TypeSnowDepthJSON(void) :
        flagHasValue(false)
  {
    extraIndex = create_string_index();
  }

ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::TypeSnowDepthJSON::~TypeSnowDepthJSON(void)
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

bool ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::TypeSnowDepthJSON::hasValue(void) const
  {
    return flagHasValue;
  }

UnitsValue_SnowJSON * ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::TypeSnowDepthJSON::getValue(void)
  {
    assert(flagHasValue);
    return storeValue;
  }

const UnitsValue_SnowJSON * ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::TypeSnowDepthJSON::getValue(void) const
  {
    assert(flagHasValue);
    return storeValue;
  }

ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::TypeMaxTemperatureJSON::TypeMaxTemperatureJSON(const TypeMaxTemperatureJSON &)
  {
    assert(false);
  }

ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::TypeMaxTemperatureJSON &ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::TypeMaxTemperatureJSON::operator=(const TypeMaxTemperatureJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::TypeMaxTemperatureJSON::fromJSONValue(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    UnitsValue_TemperatureJSON *convert_classy = UnitsValue_TemperatureJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setValue(convert_classy);
    convert_classy->remove_reference();
  }

ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::TypeMaxTemperatureJSON::TypeMaxTemperatureJSON(void) :
        flagHasValue(false)
  {
    extraIndex = create_string_index();
  }

ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::TypeMaxTemperatureJSON::~TypeMaxTemperatureJSON(void)
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

bool ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::TypeMaxTemperatureJSON::hasValue(void) const
  {
    return flagHasValue;
  }

UnitsValue_TemperatureJSON * ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::TypeMaxTemperatureJSON::getValue(void)
  {
    assert(flagHasValue);
    return storeValue;
  }

const UnitsValue_TemperatureJSON * ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::TypeMaxTemperatureJSON::getValue(void) const
  {
    assert(flagHasValue);
    return storeValue;
  }

ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::TypeAvgTemperatureJSON::TypeAvgTemperatureJSON(const TypeAvgTemperatureJSON &)
  {
    assert(false);
  }

ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::TypeAvgTemperatureJSON &ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::TypeAvgTemperatureJSON::operator=(const TypeAvgTemperatureJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::TypeAvgTemperatureJSON::fromJSONValue(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    UnitsValue_TemperatureJSON *convert_classy = UnitsValue_TemperatureJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setValue(convert_classy);
    convert_classy->remove_reference();
  }

ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::TypeAvgTemperatureJSON::TypeAvgTemperatureJSON(void) :
        flagHasValue(false)
  {
    extraIndex = create_string_index();
  }

ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::TypeAvgTemperatureJSON::~TypeAvgTemperatureJSON(void)
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

bool ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::TypeAvgTemperatureJSON::hasValue(void) const
  {
    return flagHasValue;
  }

UnitsValue_TemperatureJSON * ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::TypeAvgTemperatureJSON::getValue(void)
  {
    assert(flagHasValue);
    return storeValue;
  }

const UnitsValue_TemperatureJSON * ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::TypeAvgTemperatureJSON::getValue(void) const
  {
    assert(flagHasValue);
    return storeValue;
  }

ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::TypeMinTemperatureJSON::TypeMinTemperatureJSON(const TypeMinTemperatureJSON &)
  {
    assert(false);
  }

ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::TypeMinTemperatureJSON &ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::TypeMinTemperatureJSON::operator=(const TypeMinTemperatureJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::TypeMinTemperatureJSON::fromJSONValue(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    UnitsValue_TemperatureJSON *convert_classy = UnitsValue_TemperatureJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setValue(convert_classy);
    convert_classy->remove_reference();
  }

ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::TypeMinTemperatureJSON::TypeMinTemperatureJSON(void) :
        flagHasValue(false)
  {
    extraIndex = create_string_index();
  }

ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::TypeMinTemperatureJSON::~TypeMinTemperatureJSON(void)
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

bool ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::TypeMinTemperatureJSON::hasValue(void) const
  {
    return flagHasValue;
  }

UnitsValue_TemperatureJSON * ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::TypeMinTemperatureJSON::getValue(void)
  {
    assert(flagHasValue);
    return storeValue;
  }

const UnitsValue_TemperatureJSON * ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::TypeMinTemperatureJSON::getValue(void) const
  {
    assert(flagHasValue);
    return storeValue;
  }

ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::TypeMaxDewPointJSON::TypeMaxDewPointJSON(const TypeMaxDewPointJSON &)
  {
    assert(false);
  }

ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::TypeMaxDewPointJSON &ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::TypeMaxDewPointJSON::operator=(const TypeMaxDewPointJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::TypeMaxDewPointJSON::fromJSONValue(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    UnitsValue_TemperatureJSON *convert_classy = UnitsValue_TemperatureJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setValue(convert_classy);
    convert_classy->remove_reference();
  }

ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::TypeMaxDewPointJSON::TypeMaxDewPointJSON(void) :
        flagHasValue(false)
  {
    extraIndex = create_string_index();
  }

ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::TypeMaxDewPointJSON::~TypeMaxDewPointJSON(void)
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

bool ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::TypeMaxDewPointJSON::hasValue(void) const
  {
    return flagHasValue;
  }

UnitsValue_TemperatureJSON * ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::TypeMaxDewPointJSON::getValue(void)
  {
    assert(flagHasValue);
    return storeValue;
  }

const UnitsValue_TemperatureJSON * ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::TypeMaxDewPointJSON::getValue(void) const
  {
    assert(flagHasValue);
    return storeValue;
  }

ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::TypeAvgDewPointJSON::TypeAvgDewPointJSON(const TypeAvgDewPointJSON &)
  {
    assert(false);
  }

ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::TypeAvgDewPointJSON &ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::TypeAvgDewPointJSON::operator=(const TypeAvgDewPointJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::TypeAvgDewPointJSON::fromJSONValue(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    UnitsValue_TemperatureJSON *convert_classy = UnitsValue_TemperatureJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setValue(convert_classy);
    convert_classy->remove_reference();
  }

ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::TypeAvgDewPointJSON::TypeAvgDewPointJSON(void) :
        flagHasValue(false)
  {
    extraIndex = create_string_index();
  }

ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::TypeAvgDewPointJSON::~TypeAvgDewPointJSON(void)
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

bool ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::TypeAvgDewPointJSON::hasValue(void) const
  {
    return flagHasValue;
  }

UnitsValue_TemperatureJSON * ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::TypeAvgDewPointJSON::getValue(void)
  {
    assert(flagHasValue);
    return storeValue;
  }

const UnitsValue_TemperatureJSON * ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::TypeAvgDewPointJSON::getValue(void) const
  {
    assert(flagHasValue);
    return storeValue;
  }

ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::TypeMinDewPointJSON::TypeMinDewPointJSON(const TypeMinDewPointJSON &)
  {
    assert(false);
  }

ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::TypeMinDewPointJSON &ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::TypeMinDewPointJSON::operator=(const TypeMinDewPointJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::TypeMinDewPointJSON::fromJSONValue(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    UnitsValue_TemperatureJSON *convert_classy = UnitsValue_TemperatureJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setValue(convert_classy);
    convert_classy->remove_reference();
  }

ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::TypeMinDewPointJSON::TypeMinDewPointJSON(void) :
        flagHasValue(false)
  {
    extraIndex = create_string_index();
  }

ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::TypeMinDewPointJSON::~TypeMinDewPointJSON(void)
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

bool ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::TypeMinDewPointJSON::hasValue(void) const
  {
    return flagHasValue;
  }

UnitsValue_TemperatureJSON * ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::TypeMinDewPointJSON::getValue(void)
  {
    assert(flagHasValue);
    return storeValue;
  }

const UnitsValue_TemperatureJSON * ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::TypeMinDewPointJSON::getValue(void) const
  {
    assert(flagHasValue);
    return storeValue;
  }

ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::TypeMaxPressureJSON::TypeMaxPressureJSON(const TypeMaxPressureJSON &)
  {
    assert(false);
  }

ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::TypeMaxPressureJSON &ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::TypeMaxPressureJSON::operator=(const TypeMaxPressureJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::TypeMaxPressureJSON::fromJSONValue(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    UnitsValue_PressureJSON *convert_classy = UnitsValue_PressureJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setValue(convert_classy);
    convert_classy->remove_reference();
  }

ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::TypeMaxPressureJSON::TypeMaxPressureJSON(void) :
        flagHasValue(false)
  {
    extraIndex = create_string_index();
  }

ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::TypeMaxPressureJSON::~TypeMaxPressureJSON(void)
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

bool ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::TypeMaxPressureJSON::hasValue(void) const
  {
    return flagHasValue;
  }

UnitsValue_PressureJSON * ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::TypeMaxPressureJSON::getValue(void)
  {
    assert(flagHasValue);
    return storeValue;
  }

const UnitsValue_PressureJSON * ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::TypeMaxPressureJSON::getValue(void) const
  {
    assert(flagHasValue);
    return storeValue;
  }

ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::TypeAvgPressureJSON::TypeAvgPressureJSON(const TypeAvgPressureJSON &)
  {
    assert(false);
  }

ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::TypeAvgPressureJSON &ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::TypeAvgPressureJSON::operator=(const TypeAvgPressureJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::TypeAvgPressureJSON::fromJSONValue(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    UnitsValue_PressureJSON *convert_classy = UnitsValue_PressureJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setValue(convert_classy);
    convert_classy->remove_reference();
  }

ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::TypeAvgPressureJSON::TypeAvgPressureJSON(void) :
        flagHasValue(false)
  {
    extraIndex = create_string_index();
  }

ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::TypeAvgPressureJSON::~TypeAvgPressureJSON(void)
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

bool ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::TypeAvgPressureJSON::hasValue(void) const
  {
    return flagHasValue;
  }

UnitsValue_PressureJSON * ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::TypeAvgPressureJSON::getValue(void)
  {
    assert(flagHasValue);
    return storeValue;
  }

const UnitsValue_PressureJSON * ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::TypeAvgPressureJSON::getValue(void) const
  {
    assert(flagHasValue);
    return storeValue;
  }

ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::TypeMinPressureJSON::TypeMinPressureJSON(const TypeMinPressureJSON &)
  {
    assert(false);
  }

ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::TypeMinPressureJSON &ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::TypeMinPressureJSON::operator=(const TypeMinPressureJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::TypeMinPressureJSON::fromJSONValue(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    UnitsValue_PressureJSON *convert_classy = UnitsValue_PressureJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setValue(convert_classy);
    convert_classy->remove_reference();
  }

ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::TypeMinPressureJSON::TypeMinPressureJSON(void) :
        flagHasValue(false)
  {
    extraIndex = create_string_index();
  }

ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::TypeMinPressureJSON::~TypeMinPressureJSON(void)
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

bool ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::TypeMinPressureJSON::hasValue(void) const
  {
    return flagHasValue;
  }

UnitsValue_PressureJSON * ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::TypeMinPressureJSON::getValue(void)
  {
    assert(flagHasValue);
    return storeValue;
  }

const UnitsValue_PressureJSON * ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::TypeMinPressureJSON::getValue(void) const
  {
    assert(flagHasValue);
    return storeValue;
  }

ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::TypeMaxWindJSON::TypeMaxWindJSON(const TypeMaxWindJSON &)
  {
    assert(false);
  }

ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::TypeMaxWindJSON &ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::TypeMaxWindJSON::operator=(const TypeMaxWindJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::TypeMaxWindJSON::fromJSONValue(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    UnitsValue_WindJSON *convert_classy = UnitsValue_WindJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setValue(convert_classy);
    convert_classy->remove_reference();
  }

ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::TypeMaxWindJSON::TypeMaxWindJSON(void) :
        flagHasValue(false)
  {
    extraIndex = create_string_index();
  }

ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::TypeMaxWindJSON::~TypeMaxWindJSON(void)
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

bool ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::TypeMaxWindJSON::hasValue(void) const
  {
    return flagHasValue;
  }

UnitsValue_WindJSON * ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::TypeMaxWindJSON::getValue(void)
  {
    assert(flagHasValue);
    return storeValue;
  }

const UnitsValue_WindJSON * ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::TypeMaxWindJSON::getValue(void) const
  {
    assert(flagHasValue);
    return storeValue;
  }

ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::TypeAvgWindJSON::TypeAvgWindJSON(const TypeAvgWindJSON &)
  {
    assert(false);
  }

ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::TypeAvgWindJSON &ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::TypeAvgWindJSON::operator=(const TypeAvgWindJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::TypeAvgWindJSON::fromJSONValue(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    UnitsValue_WindJSON *convert_classy = UnitsValue_WindJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setValue(convert_classy);
    convert_classy->remove_reference();
  }

void ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::TypeAvgWindJSON::fromJSONDirectionAbbreviation(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field DirectionAbbreviation of TypeAvgWindJSON is not a string.");
    setDirectionAbbreviation(std::string(json_string->getData()));
  }

void ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::TypeAvgWindJSON::fromJSONDirectionText(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field DirectionText of TypeAvgWindJSON is not a string.");
    setDirectionText(std::string(json_string->getData()));
  }

void ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::TypeAvgWindJSON::fromJSONDirectionDegrees(JSONValue *json_value, bool ignore_extras)
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

ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::TypeAvgWindJSON::TypeAvgWindJSON(void) :
        flagHasValue(false),
        flagHasDirectionAbbreviation(false),
        flagHasDirectionText(false),
        flagHasDirectionDegrees(false)
  {
    extraIndex = create_string_index();
  }

ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::TypeAvgWindJSON::~TypeAvgWindJSON(void)
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

bool ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::TypeAvgWindJSON::hasValue(void) const
  {
    return flagHasValue;
  }

UnitsValue_WindJSON * ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::TypeAvgWindJSON::getValue(void)
  {
    assert(flagHasValue);
    return storeValue;
  }

const UnitsValue_WindJSON * ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::TypeAvgWindJSON::getValue(void) const
  {
    assert(flagHasValue);
    return storeValue;
  }

bool ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::TypeAvgWindJSON::hasDirectionAbbreviation(void) const
  {
    return flagHasDirectionAbbreviation;
  }

std::string ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::TypeAvgWindJSON::getDirectionAbbreviation(void)
  {
    assert(flagHasDirectionAbbreviation);
    return storeDirectionAbbreviation;
  }

const std::string ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::TypeAvgWindJSON::getDirectionAbbreviation(void) const
  {
    assert(flagHasDirectionAbbreviation);
    return storeDirectionAbbreviation;
  }

bool ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::TypeAvgWindJSON::hasDirectionText(void) const
  {
    return flagHasDirectionText;
  }

std::string ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::TypeAvgWindJSON::getDirectionText(void)
  {
    assert(flagHasDirectionText);
    return storeDirectionText;
  }

const std::string ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::TypeAvgWindJSON::getDirectionText(void) const
  {
    assert(flagHasDirectionText);
    return storeDirectionText;
  }

bool ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::TypeAvgWindJSON::hasDirectionDegrees(void) const
  {
    return flagHasDirectionDegrees;
  }

uint16_t ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::TypeAvgWindJSON::getDirectionDegrees(void)
  {
    assert(flagHasDirectionDegrees);
    return storeDirectionDegrees;
  }

const uint16_t ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::TypeAvgWindJSON::getDirectionDegrees(void) const
  {
    assert(flagHasDirectionDegrees);
    return storeDirectionDegrees;
  }

ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::TypeMinWindJSON::TypeMinWindJSON(const TypeMinWindJSON &)
  {
    assert(false);
  }

ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::TypeMinWindJSON &ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::TypeMinWindJSON::operator=(const TypeMinWindJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::TypeMinWindJSON::fromJSONValue(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    UnitsValue_WindJSON *convert_classy = UnitsValue_WindJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setValue(convert_classy);
    convert_classy->remove_reference();
  }

ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::TypeMinWindJSON::TypeMinWindJSON(void) :
        flagHasValue(false)
  {
    extraIndex = create_string_index();
  }

ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::TypeMinWindJSON::~TypeMinWindJSON(void)
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

bool ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::TypeMinWindJSON::hasValue(void) const
  {
    return flagHasValue;
  }

UnitsValue_WindJSON * ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::TypeMinWindJSON::getValue(void)
  {
    assert(flagHasValue);
    return storeValue;
  }

const UnitsValue_WindJSON * ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::TypeMinWindJSON::getValue(void) const
  {
    assert(flagHasValue);
    return storeValue;
  }

ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::TypeMaxVisibilityJSON::TypeMaxVisibilityJSON(const TypeMaxVisibilityJSON &)
  {
    assert(false);
  }

ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::TypeMaxVisibilityJSON &ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::TypeMaxVisibilityJSON::operator=(const TypeMaxVisibilityJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::TypeMaxVisibilityJSON::fromJSONValue(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    UnitsValue_VisibilityJSON *convert_classy = UnitsValue_VisibilityJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setValue(convert_classy);
    convert_classy->remove_reference();
  }

ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::TypeMaxVisibilityJSON::TypeMaxVisibilityJSON(void) :
        flagHasValue(false)
  {
    extraIndex = create_string_index();
  }

ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::TypeMaxVisibilityJSON::~TypeMaxVisibilityJSON(void)
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

bool ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::TypeMaxVisibilityJSON::hasValue(void) const
  {
    return flagHasValue;
  }

UnitsValue_VisibilityJSON * ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::TypeMaxVisibilityJSON::getValue(void)
  {
    assert(flagHasValue);
    return storeValue;
  }

const UnitsValue_VisibilityJSON * ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::TypeMaxVisibilityJSON::getValue(void) const
  {
    assert(flagHasValue);
    return storeValue;
  }

ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::TypeAvgVisibilityJSON::TypeAvgVisibilityJSON(const TypeAvgVisibilityJSON &)
  {
    assert(false);
  }

ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::TypeAvgVisibilityJSON &ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::TypeAvgVisibilityJSON::operator=(const TypeAvgVisibilityJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::TypeAvgVisibilityJSON::fromJSONValue(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    UnitsValue_VisibilityJSON *convert_classy = UnitsValue_VisibilityJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setValue(convert_classy);
    convert_classy->remove_reference();
  }

ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::TypeAvgVisibilityJSON::TypeAvgVisibilityJSON(void) :
        flagHasValue(false)
  {
    extraIndex = create_string_index();
  }

ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::TypeAvgVisibilityJSON::~TypeAvgVisibilityJSON(void)
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

bool ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::TypeAvgVisibilityJSON::hasValue(void) const
  {
    return flagHasValue;
  }

UnitsValue_VisibilityJSON * ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::TypeAvgVisibilityJSON::getValue(void)
  {
    assert(flagHasValue);
    return storeValue;
  }

const UnitsValue_VisibilityJSON * ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::TypeAvgVisibilityJSON::getValue(void) const
  {
    assert(flagHasValue);
    return storeValue;
  }

ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::TypeMinVisibilityJSON::TypeMinVisibilityJSON(const TypeMinVisibilityJSON &)
  {
    assert(false);
  }

ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::TypeMinVisibilityJSON &ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::TypeMinVisibilityJSON::operator=(const TypeMinVisibilityJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::TypeMinVisibilityJSON::fromJSONValue(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    UnitsValue_VisibilityJSON *convert_classy = UnitsValue_VisibilityJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setValue(convert_classy);
    convert_classy->remove_reference();
  }

ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::TypeMinVisibilityJSON::TypeMinVisibilityJSON(void) :
        flagHasValue(false)
  {
    extraIndex = create_string_index();
  }

ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::TypeMinVisibilityJSON::~TypeMinVisibilityJSON(void)
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

bool ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::TypeMinVisibilityJSON::hasValue(void) const
  {
    return flagHasValue;
  }

UnitsValue_VisibilityJSON * ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::TypeMinVisibilityJSON::getValue(void)
  {
    assert(flagHasValue);
    return storeValue;
  }

const UnitsValue_VisibilityJSON * ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::TypeMinVisibilityJSON::getValue(void) const
  {
    assert(flagHasValue);
    return storeValue;
  }

ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::TypeDailySummaryJSON(const TypeDailySummaryJSON &)
  {
    assert(false);
  }

ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON &ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::operator=(const TypeDailySummaryJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::fromJSONDateAndTime(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DateAndOrTimeJSON *convert_classy = DateAndOrTimeJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setDateAndTime(convert_classy);
    convert_classy->remove_reference();
  }

void ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::fromJSONSunriseDateAndTime(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DateAndOrTimeJSON *convert_classy = DateAndOrTimeJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setSunriseDateAndTime(convert_classy);
    convert_classy->remove_reference();
  }

void ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::fromJSONSunsetDateAndTime(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DateAndOrTimeJSON *convert_classy = DateAndOrTimeJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setSunsetDateAndTime(convert_classy);
    convert_classy->remove_reference();
  }

void ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::fromJSONMoonPhaseText(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field MoonPhaseText of TypeDailySummaryJSON is not a string.");
    setMoonPhaseText(std::string(json_string->getData()));
  }

void ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::fromJSONMoonPhasePct(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    uint8_t extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field MoonPhasePct of TypeDailySummaryJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field MoonPhasePct of TypeDailySummaryJSON is not an integer.");
          }
        extracted_integer = (uint8_t)(json_rational->getUnsignedLongInt())    ;
      }
    else
      {
        extracted_integer = (uint8_t)(json_integer->getUnsignedLongInt())    ;
      }
    setMoonPhasePct(extracted_integer);
  }

void ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::fromJSONPrecipitation(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TypePrecipitationJSON *convert_classy = TypePrecipitationJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setPrecipitation(convert_classy);
    convert_classy->remove_reference();
  }

void ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::fromJSONSnowfall(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TypeSnowfallJSON *convert_classy = TypeSnowfallJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setSnowfall(convert_classy);
    convert_classy->remove_reference();
  }

void ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::fromJSONSnowfallMonthToDate(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TypeSnowfallMonthToDateJSON *convert_classy = TypeSnowfallMonthToDateJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setSnowfallMonthToDate(convert_classy);
    convert_classy->remove_reference();
  }

void ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::fromJSONSnowfallSinceJulyFirst(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TypeSnowfallSinceJulyFirstJSON *convert_classy = TypeSnowfallSinceJulyFirstJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setSnowfallSinceJulyFirst(convert_classy);
    convert_classy->remove_reference();
  }

void ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::fromJSONSnowDepth(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TypeSnowDepthJSON *convert_classy = TypeSnowDepthJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setSnowDepth(convert_classy);
    convert_classy->remove_reference();
  }

void ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::fromJSONMaxTemperature(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TypeMaxTemperatureJSON *convert_classy = TypeMaxTemperatureJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setMaxTemperature(convert_classy);
    convert_classy->remove_reference();
  }

void ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::fromJSONAvgTemperature(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TypeAvgTemperatureJSON *convert_classy = TypeAvgTemperatureJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setAvgTemperature(convert_classy);
    convert_classy->remove_reference();
  }

void ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::fromJSONMinTemperature(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TypeMinTemperatureJSON *convert_classy = TypeMinTemperatureJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setMinTemperature(convert_classy);
    convert_classy->remove_reference();
  }

void ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::fromJSONMaxDewPoint(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TypeMaxDewPointJSON *convert_classy = TypeMaxDewPointJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setMaxDewPoint(convert_classy);
    convert_classy->remove_reference();
  }

void ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::fromJSONAvgDewPoint(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TypeAvgDewPointJSON *convert_classy = TypeAvgDewPointJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setAvgDewPoint(convert_classy);
    convert_classy->remove_reference();
  }

void ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::fromJSONMinDewPoint(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TypeMinDewPointJSON *convert_classy = TypeMinDewPointJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setMinDewPoint(convert_classy);
    convert_classy->remove_reference();
  }

void ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::fromJSONMaxHumidityPct(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    uint8_t extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field MaxHumidityPct of TypeDailySummaryJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field MaxHumidityPct of TypeDailySummaryJSON is not an integer.");
          }
        extracted_integer = (uint8_t)(json_rational->getUnsignedLongInt())    ;
      }
    else
      {
        extracted_integer = (uint8_t)(json_integer->getUnsignedLongInt())    ;
      }
    setMaxHumidityPct(extracted_integer);
  }

void ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::fromJSONAvgHumidityPct(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    uint8_t extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field AvgHumidityPct of TypeDailySummaryJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field AvgHumidityPct of TypeDailySummaryJSON is not an integer.");
          }
        extracted_integer = (uint8_t)(json_rational->getUnsignedLongInt())    ;
      }
    else
      {
        extracted_integer = (uint8_t)(json_integer->getUnsignedLongInt())    ;
      }
    setAvgHumidityPct(extracted_integer);
  }

void ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::fromJSONMinHumidityPct(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    uint8_t extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field MinHumidityPct of TypeDailySummaryJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field MinHumidityPct of TypeDailySummaryJSON is not an integer.");
          }
        extracted_integer = (uint8_t)(json_rational->getUnsignedLongInt())    ;
      }
    else
      {
        extracted_integer = (uint8_t)(json_integer->getUnsignedLongInt())    ;
      }
    setMinHumidityPct(extracted_integer);
  }

void ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::fromJSONMaxPressure(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TypeMaxPressureJSON *convert_classy = TypeMaxPressureJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setMaxPressure(convert_classy);
    convert_classy->remove_reference();
  }

void ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::fromJSONAvgPressure(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TypeAvgPressureJSON *convert_classy = TypeAvgPressureJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setAvgPressure(convert_classy);
    convert_classy->remove_reference();
  }

void ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::fromJSONMinPressure(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TypeMinPressureJSON *convert_classy = TypeMinPressureJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setMinPressure(convert_classy);
    convert_classy->remove_reference();
  }

void ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::fromJSONMaxWind(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TypeMaxWindJSON *convert_classy = TypeMaxWindJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setMaxWind(convert_classy);
    convert_classy->remove_reference();
  }

void ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::fromJSONAvgWind(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TypeAvgWindJSON *convert_classy = TypeAvgWindJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setAvgWind(convert_classy);
    convert_classy->remove_reference();
  }

void ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::fromJSONMinWind(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TypeMinWindJSON *convert_classy = TypeMinWindJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setMinWind(convert_classy);
    convert_classy->remove_reference();
  }

void ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::fromJSONMaxVisibility(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TypeMaxVisibilityJSON *convert_classy = TypeMaxVisibilityJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setMaxVisibility(convert_classy);
    convert_classy->remove_reference();
  }

void ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::fromJSONAvgVisibility(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TypeAvgVisibilityJSON *convert_classy = TypeAvgVisibilityJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setAvgVisibility(convert_classy);
    convert_classy->remove_reference();
  }

void ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::fromJSONMinVisibility(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TypeMinVisibilityJSON *convert_classy = TypeMinVisibilityJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setMinVisibility(convert_classy);
    convert_classy->remove_reference();
  }

void ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::fromJSONFog(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field Fog of TypeDailySummaryJSON is not true for false.");
          }
      }
    setFog(the_bool);
  }

void ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::fromJSONRain(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field Rain of TypeDailySummaryJSON is not true for false.");
          }
      }
    setRain(the_bool);
  }

void ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::fromJSONSnow(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field Snow of TypeDailySummaryJSON is not true for false.");
          }
      }
    setSnow(the_bool);
  }

void ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::fromJSONHail(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field Hail of TypeDailySummaryJSON is not true for false.");
          }
      }
    setHail(the_bool);
  }

void ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::fromJSONThunder(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field Thunder of TypeDailySummaryJSON is not true for false.");
          }
      }
    setThunder(the_bool);
  }

void ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::fromJSONTornado(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field Tornado of TypeDailySummaryJSON is not true for false.");
          }
      }
    setTornado(the_bool);
  }

ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::TypeDailySummaryJSON(void) :
        flagHasDateAndTime(false),
        flagHasSunriseDateAndTime(false),
        flagHasSunsetDateAndTime(false),
        flagHasMoonPhaseText(false),
        flagHasMoonPhasePct(false),
        flagHasPrecipitation(false),
        flagHasSnowfall(false),
        flagHasSnowfallMonthToDate(false),
        flagHasSnowfallSinceJulyFirst(false),
        flagHasSnowDepth(false),
        flagHasMaxTemperature(false),
        flagHasAvgTemperature(false),
        flagHasMinTemperature(false),
        flagHasMaxDewPoint(false),
        flagHasAvgDewPoint(false),
        flagHasMinDewPoint(false),
        flagHasMaxHumidityPct(false),
        flagHasAvgHumidityPct(false),
        flagHasMinHumidityPct(false),
        flagHasMaxPressure(false),
        flagHasAvgPressure(false),
        flagHasMinPressure(false),
        flagHasMaxWind(false),
        flagHasAvgWind(false),
        flagHasMinWind(false),
        flagHasMaxVisibility(false),
        flagHasAvgVisibility(false),
        flagHasMinVisibility(false),
        flagHasFog(false),
        flagHasRain(false),
        flagHasSnow(false),
        flagHasHail(false),
        flagHasThunder(false),
        flagHasTornado(false)
  {
    extraIndex = create_string_index();
  }

ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::~TypeDailySummaryJSON(void)
  {
    if (flagHasDateAndTime)
      {
        storeDateAndTime->remove_reference();
      }
    if (flagHasSunriseDateAndTime)
      {
        storeSunriseDateAndTime->remove_reference();
      }
    if (flagHasSunsetDateAndTime)
      {
        storeSunsetDateAndTime->remove_reference();
      }
    if (flagHasPrecipitation)
      {
        storePrecipitation->remove_reference();
      }
    if (flagHasSnowfall)
      {
        storeSnowfall->remove_reference();
      }
    if (flagHasSnowfallMonthToDate)
      {
        storeSnowfallMonthToDate->remove_reference();
      }
    if (flagHasSnowfallSinceJulyFirst)
      {
        storeSnowfallSinceJulyFirst->remove_reference();
      }
    if (flagHasSnowDepth)
      {
        storeSnowDepth->remove_reference();
      }
    if (flagHasMaxTemperature)
      {
        storeMaxTemperature->remove_reference();
      }
    if (flagHasAvgTemperature)
      {
        storeAvgTemperature->remove_reference();
      }
    if (flagHasMinTemperature)
      {
        storeMinTemperature->remove_reference();
      }
    if (flagHasMaxDewPoint)
      {
        storeMaxDewPoint->remove_reference();
      }
    if (flagHasAvgDewPoint)
      {
        storeAvgDewPoint->remove_reference();
      }
    if (flagHasMinDewPoint)
      {
        storeMinDewPoint->remove_reference();
      }
    if (flagHasMaxPressure)
      {
        storeMaxPressure->remove_reference();
      }
    if (flagHasAvgPressure)
      {
        storeAvgPressure->remove_reference();
      }
    if (flagHasMinPressure)
      {
        storeMinPressure->remove_reference();
      }
    if (flagHasMaxWind)
      {
        storeMaxWind->remove_reference();
      }
    if (flagHasAvgWind)
      {
        storeAvgWind->remove_reference();
      }
    if (flagHasMinWind)
      {
        storeMinWind->remove_reference();
      }
    if (flagHasMaxVisibility)
      {
        storeMaxVisibility->remove_reference();
      }
    if (flagHasAvgVisibility)
      {
        storeAvgVisibility->remove_reference();
      }
    if (flagHasMinVisibility)
      {
        storeMinVisibility->remove_reference();
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::hasDateAndTime(void) const
  {
    return flagHasDateAndTime;
  }

DateAndOrTimeJSON * ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::getDateAndTime(void)
  {
    assert(flagHasDateAndTime);
    return storeDateAndTime;
  }

const DateAndOrTimeJSON * ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::getDateAndTime(void) const
  {
    assert(flagHasDateAndTime);
    return storeDateAndTime;
  }

bool ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::hasSunriseDateAndTime(void) const
  {
    return flagHasSunriseDateAndTime;
  }

DateAndOrTimeJSON * ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::getSunriseDateAndTime(void)
  {
    assert(flagHasSunriseDateAndTime);
    return storeSunriseDateAndTime;
  }

const DateAndOrTimeJSON * ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::getSunriseDateAndTime(void) const
  {
    assert(flagHasSunriseDateAndTime);
    return storeSunriseDateAndTime;
  }

bool ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::hasSunsetDateAndTime(void) const
  {
    return flagHasSunsetDateAndTime;
  }

DateAndOrTimeJSON * ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::getSunsetDateAndTime(void)
  {
    assert(flagHasSunsetDateAndTime);
    return storeSunsetDateAndTime;
  }

const DateAndOrTimeJSON * ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::getSunsetDateAndTime(void) const
  {
    assert(flagHasSunsetDateAndTime);
    return storeSunsetDateAndTime;
  }

bool ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::hasMoonPhaseText(void) const
  {
    return flagHasMoonPhaseText;
  }

std::string ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::getMoonPhaseText(void)
  {
    assert(flagHasMoonPhaseText);
    return storeMoonPhaseText;
  }

const std::string ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::getMoonPhaseText(void) const
  {
    assert(flagHasMoonPhaseText);
    return storeMoonPhaseText;
  }

bool ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::hasMoonPhasePct(void) const
  {
    return flagHasMoonPhasePct;
  }

uint8_t ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::getMoonPhasePct(void)
  {
    assert(flagHasMoonPhasePct);
    return storeMoonPhasePct;
  }

const uint8_t ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::getMoonPhasePct(void) const
  {
    assert(flagHasMoonPhasePct);
    return storeMoonPhasePct;
  }

bool ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::hasPrecipitation(void) const
  {
    return flagHasPrecipitation;
  }

ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::TypePrecipitationJSON * ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::getPrecipitation(void)
  {
    assert(flagHasPrecipitation);
    return storePrecipitation;
  }

const ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::TypePrecipitationJSON * ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::getPrecipitation(void) const
  {
    assert(flagHasPrecipitation);
    return storePrecipitation;
  }

bool ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::hasSnowfall(void) const
  {
    return flagHasSnowfall;
  }

ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::TypeSnowfallJSON * ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::getSnowfall(void)
  {
    assert(flagHasSnowfall);
    return storeSnowfall;
  }

const ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::TypeSnowfallJSON * ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::getSnowfall(void) const
  {
    assert(flagHasSnowfall);
    return storeSnowfall;
  }

bool ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::hasSnowfallMonthToDate(void) const
  {
    return flagHasSnowfallMonthToDate;
  }

ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::TypeSnowfallMonthToDateJSON * ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::getSnowfallMonthToDate(void)
  {
    assert(flagHasSnowfallMonthToDate);
    return storeSnowfallMonthToDate;
  }

const ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::TypeSnowfallMonthToDateJSON * ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::getSnowfallMonthToDate(void) const
  {
    assert(flagHasSnowfallMonthToDate);
    return storeSnowfallMonthToDate;
  }

bool ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::hasSnowfallSinceJulyFirst(void) const
  {
    return flagHasSnowfallSinceJulyFirst;
  }

ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::TypeSnowfallSinceJulyFirstJSON * ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::getSnowfallSinceJulyFirst(void)
  {
    assert(flagHasSnowfallSinceJulyFirst);
    return storeSnowfallSinceJulyFirst;
  }

const ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::TypeSnowfallSinceJulyFirstJSON * ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::getSnowfallSinceJulyFirst(void) const
  {
    assert(flagHasSnowfallSinceJulyFirst);
    return storeSnowfallSinceJulyFirst;
  }

bool ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::hasSnowDepth(void) const
  {
    return flagHasSnowDepth;
  }

ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::TypeSnowDepthJSON * ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::getSnowDepth(void)
  {
    assert(flagHasSnowDepth);
    return storeSnowDepth;
  }

const ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::TypeSnowDepthJSON * ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::getSnowDepth(void) const
  {
    assert(flagHasSnowDepth);
    return storeSnowDepth;
  }

bool ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::hasMaxTemperature(void) const
  {
    return flagHasMaxTemperature;
  }

ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::TypeMaxTemperatureJSON * ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::getMaxTemperature(void)
  {
    assert(flagHasMaxTemperature);
    return storeMaxTemperature;
  }

const ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::TypeMaxTemperatureJSON * ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::getMaxTemperature(void) const
  {
    assert(flagHasMaxTemperature);
    return storeMaxTemperature;
  }

bool ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::hasAvgTemperature(void) const
  {
    return flagHasAvgTemperature;
  }

ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::TypeAvgTemperatureJSON * ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::getAvgTemperature(void)
  {
    assert(flagHasAvgTemperature);
    return storeAvgTemperature;
  }

const ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::TypeAvgTemperatureJSON * ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::getAvgTemperature(void) const
  {
    assert(flagHasAvgTemperature);
    return storeAvgTemperature;
  }

bool ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::hasMinTemperature(void) const
  {
    return flagHasMinTemperature;
  }

ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::TypeMinTemperatureJSON * ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::getMinTemperature(void)
  {
    assert(flagHasMinTemperature);
    return storeMinTemperature;
  }

const ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::TypeMinTemperatureJSON * ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::getMinTemperature(void) const
  {
    assert(flagHasMinTemperature);
    return storeMinTemperature;
  }

bool ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::hasMaxDewPoint(void) const
  {
    return flagHasMaxDewPoint;
  }

ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::TypeMaxDewPointJSON * ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::getMaxDewPoint(void)
  {
    assert(flagHasMaxDewPoint);
    return storeMaxDewPoint;
  }

const ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::TypeMaxDewPointJSON * ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::getMaxDewPoint(void) const
  {
    assert(flagHasMaxDewPoint);
    return storeMaxDewPoint;
  }

bool ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::hasAvgDewPoint(void) const
  {
    return flagHasAvgDewPoint;
  }

ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::TypeAvgDewPointJSON * ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::getAvgDewPoint(void)
  {
    assert(flagHasAvgDewPoint);
    return storeAvgDewPoint;
  }

const ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::TypeAvgDewPointJSON * ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::getAvgDewPoint(void) const
  {
    assert(flagHasAvgDewPoint);
    return storeAvgDewPoint;
  }

bool ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::hasMinDewPoint(void) const
  {
    return flagHasMinDewPoint;
  }

ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::TypeMinDewPointJSON * ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::getMinDewPoint(void)
  {
    assert(flagHasMinDewPoint);
    return storeMinDewPoint;
  }

const ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::TypeMinDewPointJSON * ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::getMinDewPoint(void) const
  {
    assert(flagHasMinDewPoint);
    return storeMinDewPoint;
  }

bool ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::hasMaxHumidityPct(void) const
  {
    return flagHasMaxHumidityPct;
  }

uint8_t ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::getMaxHumidityPct(void)
  {
    assert(flagHasMaxHumidityPct);
    return storeMaxHumidityPct;
  }

const uint8_t ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::getMaxHumidityPct(void) const
  {
    assert(flagHasMaxHumidityPct);
    return storeMaxHumidityPct;
  }

bool ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::hasAvgHumidityPct(void) const
  {
    return flagHasAvgHumidityPct;
  }

uint8_t ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::getAvgHumidityPct(void)
  {
    assert(flagHasAvgHumidityPct);
    return storeAvgHumidityPct;
  }

const uint8_t ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::getAvgHumidityPct(void) const
  {
    assert(flagHasAvgHumidityPct);
    return storeAvgHumidityPct;
  }

bool ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::hasMinHumidityPct(void) const
  {
    return flagHasMinHumidityPct;
  }

uint8_t ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::getMinHumidityPct(void)
  {
    assert(flagHasMinHumidityPct);
    return storeMinHumidityPct;
  }

const uint8_t ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::getMinHumidityPct(void) const
  {
    assert(flagHasMinHumidityPct);
    return storeMinHumidityPct;
  }

bool ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::hasMaxPressure(void) const
  {
    return flagHasMaxPressure;
  }

ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::TypeMaxPressureJSON * ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::getMaxPressure(void)
  {
    assert(flagHasMaxPressure);
    return storeMaxPressure;
  }

const ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::TypeMaxPressureJSON * ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::getMaxPressure(void) const
  {
    assert(flagHasMaxPressure);
    return storeMaxPressure;
  }

bool ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::hasAvgPressure(void) const
  {
    return flagHasAvgPressure;
  }

ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::TypeAvgPressureJSON * ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::getAvgPressure(void)
  {
    assert(flagHasAvgPressure);
    return storeAvgPressure;
  }

const ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::TypeAvgPressureJSON * ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::getAvgPressure(void) const
  {
    assert(flagHasAvgPressure);
    return storeAvgPressure;
  }

bool ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::hasMinPressure(void) const
  {
    return flagHasMinPressure;
  }

ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::TypeMinPressureJSON * ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::getMinPressure(void)
  {
    assert(flagHasMinPressure);
    return storeMinPressure;
  }

const ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::TypeMinPressureJSON * ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::getMinPressure(void) const
  {
    assert(flagHasMinPressure);
    return storeMinPressure;
  }

bool ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::hasMaxWind(void) const
  {
    return flagHasMaxWind;
  }

ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::TypeMaxWindJSON * ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::getMaxWind(void)
  {
    assert(flagHasMaxWind);
    return storeMaxWind;
  }

const ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::TypeMaxWindJSON * ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::getMaxWind(void) const
  {
    assert(flagHasMaxWind);
    return storeMaxWind;
  }

bool ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::hasAvgWind(void) const
  {
    return flagHasAvgWind;
  }

ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::TypeAvgWindJSON * ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::getAvgWind(void)
  {
    assert(flagHasAvgWind);
    return storeAvgWind;
  }

const ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::TypeAvgWindJSON * ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::getAvgWind(void) const
  {
    assert(flagHasAvgWind);
    return storeAvgWind;
  }

bool ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::hasMinWind(void) const
  {
    return flagHasMinWind;
  }

ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::TypeMinWindJSON * ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::getMinWind(void)
  {
    assert(flagHasMinWind);
    return storeMinWind;
  }

const ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::TypeMinWindJSON * ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::getMinWind(void) const
  {
    assert(flagHasMinWind);
    return storeMinWind;
  }

bool ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::hasMaxVisibility(void) const
  {
    return flagHasMaxVisibility;
  }

ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::TypeMaxVisibilityJSON * ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::getMaxVisibility(void)
  {
    assert(flagHasMaxVisibility);
    return storeMaxVisibility;
  }

const ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::TypeMaxVisibilityJSON * ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::getMaxVisibility(void) const
  {
    assert(flagHasMaxVisibility);
    return storeMaxVisibility;
  }

bool ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::hasAvgVisibility(void) const
  {
    return flagHasAvgVisibility;
  }

ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::TypeAvgVisibilityJSON * ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::getAvgVisibility(void)
  {
    assert(flagHasAvgVisibility);
    return storeAvgVisibility;
  }

const ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::TypeAvgVisibilityJSON * ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::getAvgVisibility(void) const
  {
    assert(flagHasAvgVisibility);
    return storeAvgVisibility;
  }

bool ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::hasMinVisibility(void) const
  {
    return flagHasMinVisibility;
  }

ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::TypeMinVisibilityJSON * ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::getMinVisibility(void)
  {
    assert(flagHasMinVisibility);
    return storeMinVisibility;
  }

const ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::TypeMinVisibilityJSON * ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::getMinVisibility(void) const
  {
    assert(flagHasMinVisibility);
    return storeMinVisibility;
  }

bool ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::hasFog(void) const
  {
    return flagHasFog;
  }

bool ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::getFog(void)
  {
    assert(flagHasFog);
    return storeFog;
  }

const bool ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::getFog(void) const
  {
    assert(flagHasFog);
    return storeFog;
  }

bool ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::hasRain(void) const
  {
    return flagHasRain;
  }

bool ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::getRain(void)
  {
    assert(flagHasRain);
    return storeRain;
  }

const bool ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::getRain(void) const
  {
    assert(flagHasRain);
    return storeRain;
  }

bool ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::hasSnow(void) const
  {
    return flagHasSnow;
  }

bool ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::getSnow(void)
  {
    assert(flagHasSnow);
    return storeSnow;
  }

const bool ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::getSnow(void) const
  {
    assert(flagHasSnow);
    return storeSnow;
  }

bool ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::hasHail(void) const
  {
    return flagHasHail;
  }

bool ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::getHail(void)
  {
    assert(flagHasHail);
    return storeHail;
  }

const bool ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::getHail(void) const
  {
    assert(flagHasHail);
    return storeHail;
  }

bool ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::hasThunder(void) const
  {
    return flagHasThunder;
  }

bool ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::getThunder(void)
  {
    assert(flagHasThunder);
    return storeThunder;
  }

const bool ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::getThunder(void) const
  {
    assert(flagHasThunder);
    return storeThunder;
  }

bool ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::hasTornado(void) const
  {
    return flagHasTornado;
  }

bool ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::getTornado(void)
  {
    assert(flagHasTornado);
    return storeTornado;
  }

const bool ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::getTornado(void) const
  {
    assert(flagHasTornado);
    return storeTornado;
  }

ShowWeatherHistoryInformationNuggetJSON::ShowWeatherHistoryInformationNuggetJSON(const ShowWeatherHistoryInformationNuggetJSON &)
  {
    assert(false);
  }

ShowWeatherHistoryInformationNuggetJSON &ShowWeatherHistoryInformationNuggetJSON::operator=(const ShowWeatherHistoryInformationNuggetJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *ShowWeatherHistoryInformationNuggetJSON::extraAttributionToJSON(void) const
  {
    JSONValueHandler handler_Attribution;
    storeAttribution->write_as_json(&handler_Attribution);
    handler_Attribution.result->add_reference();
    return handler_Attribution.result;
  }

JSONValue *ShowWeatherHistoryInformationNuggetJSON::extraLocationToJSON(void) const
  {
    JSONValueHandler handler_Location;
    storeLocation->write_as_json(&handler_Location);
    handler_Location.result->add_reference();
    return handler_Location.result;
  }

JSONValue *ShowWeatherHistoryInformationNuggetJSON::extraStartDateAndTimeToJSON(void) const
  {
    JSONValueHandler handler_StartDateAndTime;
    storeStartDateAndTime->write_as_json(&handler_StartDateAndTime);
    handler_StartDateAndTime.result->add_reference();
    return handler_StartDateAndTime.result;
  }

JSONValue *ShowWeatherHistoryInformationNuggetJSON::extraEndDateAndTimeToJSON(void) const
  {
    JSONValueHandler handler_EndDateAndTime;
    storeEndDateAndTime->write_as_json(&handler_EndDateAndTime);
    handler_EndDateAndTime.result->add_reference();
    return handler_EndDateAndTime.result;
  }

JSONValue *ShowWeatherHistoryInformationNuggetJSON::extraAlertsToJSON(void) const
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

JSONValue *ShowWeatherHistoryInformationNuggetJSON::extraRequestedAttributeToJSON(void) const
  {
    JSONStringValue *generated_string_RequestedAttribute = new JSONStringValue(storeRequestedAttribute.c_str());
    return generated_string_RequestedAttribute;
  }

JSONValue *ShowWeatherHistoryInformationNuggetJSON::extraIsYesNoQueryToJSON(void) const
  {
    JSONValue *generated_boolean_IsYesNoQuery = (storeIsYesNoQuery ? (JSONValue *)new JSONTrueValue() : (JSONValue *)new JSONFalseValue());
    return generated_boolean_IsYesNoQuery;
  }

JSONValue *ShowWeatherHistoryInformationNuggetJSON::extraDateAndTimeToJSON(void) const
  {
    JSONValueHandler handler_DateAndTime;
    storeDateAndTime->write_as_json(&handler_DateAndTime);
    handler_DateAndTime.result->add_reference();
    return handler_DateAndTime.result;
  }

JSONValue *ShowWeatherHistoryInformationNuggetJSON::extraObservationsToJSON(void) const
  {
    JSONArrayValue *generated_array_2_Observations = new JSONArrayValue();
    for (size_t num2 = 0; num2 < storeObservations.size(); ++num2)
      {
        JSONValueHandler handler_Observations;
        storeObservations[num2]->write_as_json(&handler_Observations);
        handler_Observations.result->add_reference();
        generated_array_2_Observations->appendComponent(handler_Observations.result);
        handler_Observations.result->remove_reference();
      }
    return generated_array_2_Observations;
  }

JSONValue *ShowWeatherHistoryInformationNuggetJSON::extraDailySummaryToJSON(void) const
  {
    JSONValueHandler handler_DailySummary;
    storeDailySummary->write_as_json(&handler_DailySummary);
    handler_DailySummary.result->add_reference();
    return handler_DailySummary.result;
  }

void ShowWeatherHistoryInformationNuggetJSON::fromJSONAttribution(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    AttributionJSON *convert_classy = AttributionJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setAttribution(convert_classy);
    convert_classy->remove_reference();
  }

void ShowWeatherHistoryInformationNuggetJSON::fromJSONLocation(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    MapLocationJSON *convert_classy = MapLocationJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setLocation(convert_classy);
    convert_classy->remove_reference();
  }

void ShowWeatherHistoryInformationNuggetJSON::fromJSONStartDateAndTime(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DateAndOrTimeJSON *convert_classy = DateAndOrTimeJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setStartDateAndTime(convert_classy);
    convert_classy->remove_reference();
  }

void ShowWeatherHistoryInformationNuggetJSON::fromJSONEndDateAndTime(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DateAndOrTimeJSON *convert_classy = DateAndOrTimeJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setEndDateAndTime(convert_classy);
    convert_classy->remove_reference();
  }

void ShowWeatherHistoryInformationNuggetJSON::fromJSONAlerts(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field Alerts of ShowWeatherHistoryInformationNuggetJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< AlertJSON * > vector_Alerts1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        AlertJSON *convert_classy = AlertJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_Alerts1[num1] = convert_classy;
      }
    initAlerts();
    for (size_t num3 = 0; num3 < vector_Alerts1.size(); ++num3)
        appendAlerts(vector_Alerts1[num3]);
    for (size_t num1 = 0; num1 < vector_Alerts1.size(); ++num1)
      {
        vector_Alerts1[num1]->remove_reference();
      }
  }

void ShowWeatherHistoryInformationNuggetJSON::fromJSONRequestedAttribute(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field RequestedAttribute of ShowWeatherHistoryInformationNuggetJSON is not a string.");
    setRequestedAttribute(std::string(json_string->getData()));
  }

void ShowWeatherHistoryInformationNuggetJSON::fromJSONIsYesNoQuery(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field IsYesNoQuery of ShowWeatherHistoryInformationNuggetJSON is not true for false.");
          }
      }
    setIsYesNoQuery(the_bool);
  }

void ShowWeatherHistoryInformationNuggetJSON::fromJSONDateAndTime(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DateAndOrTimeJSON *convert_classy = DateAndOrTimeJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setDateAndTime(convert_classy);
    convert_classy->remove_reference();
  }

void ShowWeatherHistoryInformationNuggetJSON::fromJSONObservations(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field Observations of ShowWeatherHistoryInformationNuggetJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< HistoryObservationJSON * > vector_Observations1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        HistoryObservationJSON *convert_classy = HistoryObservationJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_Observations1[num1] = convert_classy;
      }
    initObservations();
    for (size_t num4 = 0; num4 < vector_Observations1.size(); ++num4)
        appendObservations(vector_Observations1[num4]);
    for (size_t num1 = 0; num1 < vector_Observations1.size(); ++num1)
      {
        vector_Observations1[num1]->remove_reference();
      }
  }

void ShowWeatherHistoryInformationNuggetJSON::fromJSONDailySummary(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TypeDailySummaryJSON *convert_classy = TypeDailySummaryJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setDailySummary(convert_classy);
    convert_classy->remove_reference();
  }

ShowWeatherHistoryInformationNuggetJSON::ShowWeatherHistoryInformationNuggetJSON(void) :
        flagHasAttribution(false),
        flagHasLocation(false),
        flagHasStartDateAndTime(false),
        flagHasEndDateAndTime(false),
        flagHasAlerts(false),
        flagHasRequestedAttribute(false),
        flagHasIsYesNoQuery(false),
        flagHasDateAndTime(false),
        flagHasObservations(false),
        flagHasDailySummary(false)
  {
    extraIndex = create_string_index();
  }

ShowWeatherHistoryInformationNuggetJSON::~ShowWeatherHistoryInformationNuggetJSON(void)
  {
    if (flagHasAttribution)
      {
        storeAttribution->remove_reference();
      }
    if (flagHasLocation)
      {
        storeLocation->remove_reference();
      }
    if (flagHasStartDateAndTime)
      {
        storeStartDateAndTime->remove_reference();
      }
    if (flagHasEndDateAndTime)
      {
        storeEndDateAndTime->remove_reference();
      }
    if (flagHasAlerts)
      {
        for (size_t num7 = 0; num7 < storeAlerts.size(); ++num7)
          {
            storeAlerts[num7]->remove_reference();
          }
      }
    if (flagHasDateAndTime)
      {
        storeDateAndTime->remove_reference();
      }
    if (flagHasObservations)
      {
        for (size_t num8 = 0; num8 < storeObservations.size(); ++num8)
          {
            storeObservations[num8]->remove_reference();
          }
      }
    if (flagHasDailySummary)
      {
        storeDailySummary->remove_reference();
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *ShowWeatherHistoryInformationNuggetJSON::getWeatherNuggetKind(void) const
  {
    return "ShowWeatherHistory";
  }

bool ShowWeatherHistoryInformationNuggetJSON::hasAttribution(void) const
  {
    return flagHasAttribution;
  }

AttributionJSON * ShowWeatherHistoryInformationNuggetJSON::getAttribution(void)
  {
    assert(flagHasAttribution);
    return storeAttribution;
  }

const AttributionJSON * ShowWeatherHistoryInformationNuggetJSON::getAttribution(void) const
  {
    assert(flagHasAttribution);
    return storeAttribution;
  }

bool ShowWeatherHistoryInformationNuggetJSON::hasLocation(void) const
  {
    return flagHasLocation;
  }

MapLocationJSON * ShowWeatherHistoryInformationNuggetJSON::getLocation(void)
  {
    assert(flagHasLocation);
    return storeLocation;
  }

const MapLocationJSON * ShowWeatherHistoryInformationNuggetJSON::getLocation(void) const
  {
    assert(flagHasLocation);
    return storeLocation;
  }

bool ShowWeatherHistoryInformationNuggetJSON::hasStartDateAndTime(void) const
  {
    return flagHasStartDateAndTime;
  }

DateAndOrTimeJSON * ShowWeatherHistoryInformationNuggetJSON::getStartDateAndTime(void)
  {
    assert(flagHasStartDateAndTime);
    return storeStartDateAndTime;
  }

const DateAndOrTimeJSON * ShowWeatherHistoryInformationNuggetJSON::getStartDateAndTime(void) const
  {
    assert(flagHasStartDateAndTime);
    return storeStartDateAndTime;
  }

bool ShowWeatherHistoryInformationNuggetJSON::hasEndDateAndTime(void) const
  {
    return flagHasEndDateAndTime;
  }

DateAndOrTimeJSON * ShowWeatherHistoryInformationNuggetJSON::getEndDateAndTime(void)
  {
    assert(flagHasEndDateAndTime);
    return storeEndDateAndTime;
  }

const DateAndOrTimeJSON * ShowWeatherHistoryInformationNuggetJSON::getEndDateAndTime(void) const
  {
    assert(flagHasEndDateAndTime);
    return storeEndDateAndTime;
  }

bool ShowWeatherHistoryInformationNuggetJSON::hasAlerts(void) const
  {
    return flagHasAlerts;
  }

size_t ShowWeatherHistoryInformationNuggetJSON::countOfAlerts(void) const
  {
    assert(flagHasAlerts);
    return storeAlerts.size();
  }

AlertJSON * ShowWeatherHistoryInformationNuggetJSON::elementOfAlerts(size_t element_num)
  {
    assert(flagHasAlerts);
    return storeAlerts[element_num];
  }

const AlertJSON * ShowWeatherHistoryInformationNuggetJSON::elementOfAlerts(size_t element_num) const
  {
    assert(flagHasAlerts);
    return storeAlerts[element_num];
  }

std::vector< AlertJSON * > ShowWeatherHistoryInformationNuggetJSON::getAlerts(void)
  {
    assert(flagHasAlerts);
    return storeAlerts;
  }

const std::vector< AlertJSON * > ShowWeatherHistoryInformationNuggetJSON::getAlerts(void) const
  {
    assert(flagHasAlerts);
    return storeAlerts;
  }

bool ShowWeatherHistoryInformationNuggetJSON::hasRequestedAttribute(void) const
  {
    return flagHasRequestedAttribute;
  }

std::string ShowWeatherHistoryInformationNuggetJSON::getRequestedAttribute(void)
  {
    assert(flagHasRequestedAttribute);
    return storeRequestedAttribute;
  }

const std::string ShowWeatherHistoryInformationNuggetJSON::getRequestedAttribute(void) const
  {
    assert(flagHasRequestedAttribute);
    return storeRequestedAttribute;
  }

bool ShowWeatherHistoryInformationNuggetJSON::hasIsYesNoQuery(void) const
  {
    return flagHasIsYesNoQuery;
  }

bool ShowWeatherHistoryInformationNuggetJSON::getIsYesNoQuery(void)
  {
    assert(flagHasIsYesNoQuery);
    return storeIsYesNoQuery;
  }

const bool ShowWeatherHistoryInformationNuggetJSON::getIsYesNoQuery(void) const
  {
    assert(flagHasIsYesNoQuery);
    return storeIsYesNoQuery;
  }

bool ShowWeatherHistoryInformationNuggetJSON::hasDateAndTime(void) const
  {
    return flagHasDateAndTime;
  }

DateAndOrTimeJSON * ShowWeatherHistoryInformationNuggetJSON::getDateAndTime(void)
  {
    assert(flagHasDateAndTime);
    return storeDateAndTime;
  }

const DateAndOrTimeJSON * ShowWeatherHistoryInformationNuggetJSON::getDateAndTime(void) const
  {
    assert(flagHasDateAndTime);
    return storeDateAndTime;
  }

bool ShowWeatherHistoryInformationNuggetJSON::hasObservations(void) const
  {
    return flagHasObservations;
  }

size_t ShowWeatherHistoryInformationNuggetJSON::countOfObservations(void) const
  {
    assert(flagHasObservations);
    return storeObservations.size();
  }

HistoryObservationJSON * ShowWeatherHistoryInformationNuggetJSON::elementOfObservations(size_t element_num)
  {
    assert(flagHasObservations);
    return storeObservations[element_num];
  }

const HistoryObservationJSON * ShowWeatherHistoryInformationNuggetJSON::elementOfObservations(size_t element_num) const
  {
    assert(flagHasObservations);
    return storeObservations[element_num];
  }

std::vector< HistoryObservationJSON * > ShowWeatherHistoryInformationNuggetJSON::getObservations(void)
  {
    assert(flagHasObservations);
    return storeObservations;
  }

const std::vector< HistoryObservationJSON * > ShowWeatherHistoryInformationNuggetJSON::getObservations(void) const
  {
    assert(flagHasObservations);
    return storeObservations;
  }

bool ShowWeatherHistoryInformationNuggetJSON::hasDailySummary(void) const
  {
    return flagHasDailySummary;
  }

ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON * ShowWeatherHistoryInformationNuggetJSON::getDailySummary(void)
  {
    assert(flagHasDailySummary);
    return storeDailySummary;
  }

const ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON * ShowWeatherHistoryInformationNuggetJSON::getDailySummary(void) const
  {
    assert(flagHasDailySummary);
    return storeDailySummary;
  }

ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::TypePrecipitationJSON *ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::TypePrecipitationJSON::from_json(JSONValue *json_value, bool ignore_extras)
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
ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::TypeSnowfallJSON *ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::TypeSnowfallJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    TypeSnowfallJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<TypeSnowfallJSON>, TypeSnowfallJSON *, bool> generator("Type TypeSnowfall", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::TypeSnowfallMonthToDateJSON *ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::TypeSnowfallMonthToDateJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    TypeSnowfallMonthToDateJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<TypeSnowfallMonthToDateJSON>, TypeSnowfallMonthToDateJSON *, bool> generator("Type TypeSnowfallMonthToDate", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::TypeSnowfallSinceJulyFirstJSON *ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::TypeSnowfallSinceJulyFirstJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    TypeSnowfallSinceJulyFirstJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<TypeSnowfallSinceJulyFirstJSON>, TypeSnowfallSinceJulyFirstJSON *, bool> generator("Type TypeSnowfallSinceJulyFirst", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::TypeSnowDepthJSON *ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::TypeSnowDepthJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    TypeSnowDepthJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<TypeSnowDepthJSON>, TypeSnowDepthJSON *, bool> generator("Type TypeSnowDepth", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::TypeMaxTemperatureJSON *ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::TypeMaxTemperatureJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    TypeMaxTemperatureJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<TypeMaxTemperatureJSON>, TypeMaxTemperatureJSON *, bool> generator("Type TypeMaxTemperature", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::TypeAvgTemperatureJSON *ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::TypeAvgTemperatureJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    TypeAvgTemperatureJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<TypeAvgTemperatureJSON>, TypeAvgTemperatureJSON *, bool> generator("Type TypeAvgTemperature", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::TypeMinTemperatureJSON *ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::TypeMinTemperatureJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    TypeMinTemperatureJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<TypeMinTemperatureJSON>, TypeMinTemperatureJSON *, bool> generator("Type TypeMinTemperature", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::TypeMaxDewPointJSON *ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::TypeMaxDewPointJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    TypeMaxDewPointJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<TypeMaxDewPointJSON>, TypeMaxDewPointJSON *, bool> generator("Type TypeMaxDewPoint", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::TypeAvgDewPointJSON *ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::TypeAvgDewPointJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    TypeAvgDewPointJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<TypeAvgDewPointJSON>, TypeAvgDewPointJSON *, bool> generator("Type TypeAvgDewPoint", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::TypeMinDewPointJSON *ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::TypeMinDewPointJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    TypeMinDewPointJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<TypeMinDewPointJSON>, TypeMinDewPointJSON *, bool> generator("Type TypeMinDewPoint", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::TypeMaxPressureJSON *ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::TypeMaxPressureJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    TypeMaxPressureJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<TypeMaxPressureJSON>, TypeMaxPressureJSON *, bool> generator("Type TypeMaxPressure", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::TypeAvgPressureJSON *ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::TypeAvgPressureJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    TypeAvgPressureJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<TypeAvgPressureJSON>, TypeAvgPressureJSON *, bool> generator("Type TypeAvgPressure", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::TypeMinPressureJSON *ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::TypeMinPressureJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    TypeMinPressureJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<TypeMinPressureJSON>, TypeMinPressureJSON *, bool> generator("Type TypeMinPressure", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::TypeMaxWindJSON *ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::TypeMaxWindJSON::from_json(JSONValue *json_value, bool ignore_extras)
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
ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::TypeAvgWindJSON *ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::TypeAvgWindJSON::from_json(JSONValue *json_value, bool ignore_extras)
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
ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::TypeMinWindJSON *ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::TypeMinWindJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    TypeMinWindJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<TypeMinWindJSON>, TypeMinWindJSON *, bool> generator("Type TypeMinWind", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::TypeMaxVisibilityJSON *ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::TypeMaxVisibilityJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    TypeMaxVisibilityJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<TypeMaxVisibilityJSON>, TypeMaxVisibilityJSON *, bool> generator("Type TypeMaxVisibility", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::TypeAvgVisibilityJSON *ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::TypeAvgVisibilityJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    TypeAvgVisibilityJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<TypeAvgVisibilityJSON>, TypeAvgVisibilityJSON *, bool> generator("Type TypeAvgVisibility", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::TypeMinVisibilityJSON *ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::TypeMinVisibilityJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    TypeMinVisibilityJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<TypeMinVisibilityJSON>, TypeMinVisibilityJSON *, bool> generator("Type TypeMinVisibility", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON *ShowWeatherHistoryInformationNuggetJSON::TypeDailySummaryJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    TypeDailySummaryJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<TypeDailySummaryJSON>, TypeDailySummaryJSON *, bool> generator("Type TypeDailySummary", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
ShowWeatherHistoryInformationNuggetJSON *ShowWeatherHistoryInformationNuggetJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    ShowWeatherHistoryInformationNuggetJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<ShowWeatherHistoryInformationNuggetJSON>, ShowWeatherHistoryInformationNuggetJSON *, bool> generator("Type ShowWeatherHistoryInformationNugget", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
