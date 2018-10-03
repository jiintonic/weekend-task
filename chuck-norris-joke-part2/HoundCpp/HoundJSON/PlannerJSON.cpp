/* file "PlannerJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "PlannerJSON.h"

#include "PlannerJSON.h"


PlannerJSON::TypeMinHighTemperatureJSON::TypeMinHighTemperatureJSON(const TypeMinHighTemperatureJSON &)
  {
    assert(false);
  }

PlannerJSON::TypeMinHighTemperatureJSON &PlannerJSON::TypeMinHighTemperatureJSON::operator=(const TypeMinHighTemperatureJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void PlannerJSON::TypeMinHighTemperatureJSON::fromJSONValue(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    UnitsValue_TemperatureJSON *convert_classy = UnitsValue_TemperatureJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setValue(convert_classy);
    convert_classy->remove_reference();
  }

PlannerJSON::TypeMinHighTemperatureJSON::TypeMinHighTemperatureJSON(void) :
        flagHasValue(false)
  {
    extraIndex = create_string_index();
  }

PlannerJSON::TypeMinHighTemperatureJSON::~TypeMinHighTemperatureJSON(void)
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

bool PlannerJSON::TypeMinHighTemperatureJSON::hasValue(void) const
  {
    return flagHasValue;
  }

UnitsValue_TemperatureJSON * PlannerJSON::TypeMinHighTemperatureJSON::getValue(void)
  {
    assert(flagHasValue);
    return storeValue;
  }

const UnitsValue_TemperatureJSON * PlannerJSON::TypeMinHighTemperatureJSON::getValue(void) const
  {
    assert(flagHasValue);
    return storeValue;
  }

PlannerJSON::TypeAvgHighTemperatureJSON::TypeAvgHighTemperatureJSON(const TypeAvgHighTemperatureJSON &)
  {
    assert(false);
  }

PlannerJSON::TypeAvgHighTemperatureJSON &PlannerJSON::TypeAvgHighTemperatureJSON::operator=(const TypeAvgHighTemperatureJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void PlannerJSON::TypeAvgHighTemperatureJSON::fromJSONValue(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    UnitsValue_TemperatureJSON *convert_classy = UnitsValue_TemperatureJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setValue(convert_classy);
    convert_classy->remove_reference();
  }

PlannerJSON::TypeAvgHighTemperatureJSON::TypeAvgHighTemperatureJSON(void) :
        flagHasValue(false)
  {
    extraIndex = create_string_index();
  }

PlannerJSON::TypeAvgHighTemperatureJSON::~TypeAvgHighTemperatureJSON(void)
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

bool PlannerJSON::TypeAvgHighTemperatureJSON::hasValue(void) const
  {
    return flagHasValue;
  }

UnitsValue_TemperatureJSON * PlannerJSON::TypeAvgHighTemperatureJSON::getValue(void)
  {
    assert(flagHasValue);
    return storeValue;
  }

const UnitsValue_TemperatureJSON * PlannerJSON::TypeAvgHighTemperatureJSON::getValue(void) const
  {
    assert(flagHasValue);
    return storeValue;
  }

PlannerJSON::TypeMaxHighTemperatureJSON::TypeMaxHighTemperatureJSON(const TypeMaxHighTemperatureJSON &)
  {
    assert(false);
  }

PlannerJSON::TypeMaxHighTemperatureJSON &PlannerJSON::TypeMaxHighTemperatureJSON::operator=(const TypeMaxHighTemperatureJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void PlannerJSON::TypeMaxHighTemperatureJSON::fromJSONValue(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    UnitsValue_TemperatureJSON *convert_classy = UnitsValue_TemperatureJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setValue(convert_classy);
    convert_classy->remove_reference();
  }

PlannerJSON::TypeMaxHighTemperatureJSON::TypeMaxHighTemperatureJSON(void) :
        flagHasValue(false)
  {
    extraIndex = create_string_index();
  }

PlannerJSON::TypeMaxHighTemperatureJSON::~TypeMaxHighTemperatureJSON(void)
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

bool PlannerJSON::TypeMaxHighTemperatureJSON::hasValue(void) const
  {
    return flagHasValue;
  }

UnitsValue_TemperatureJSON * PlannerJSON::TypeMaxHighTemperatureJSON::getValue(void)
  {
    assert(flagHasValue);
    return storeValue;
  }

const UnitsValue_TemperatureJSON * PlannerJSON::TypeMaxHighTemperatureJSON::getValue(void) const
  {
    assert(flagHasValue);
    return storeValue;
  }

PlannerJSON::TypeMinLowTemperatureJSON::TypeMinLowTemperatureJSON(const TypeMinLowTemperatureJSON &)
  {
    assert(false);
  }

PlannerJSON::TypeMinLowTemperatureJSON &PlannerJSON::TypeMinLowTemperatureJSON::operator=(const TypeMinLowTemperatureJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void PlannerJSON::TypeMinLowTemperatureJSON::fromJSONValue(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    UnitsValue_TemperatureJSON *convert_classy = UnitsValue_TemperatureJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setValue(convert_classy);
    convert_classy->remove_reference();
  }

PlannerJSON::TypeMinLowTemperatureJSON::TypeMinLowTemperatureJSON(void) :
        flagHasValue(false)
  {
    extraIndex = create_string_index();
  }

PlannerJSON::TypeMinLowTemperatureJSON::~TypeMinLowTemperatureJSON(void)
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

bool PlannerJSON::TypeMinLowTemperatureJSON::hasValue(void) const
  {
    return flagHasValue;
  }

UnitsValue_TemperatureJSON * PlannerJSON::TypeMinLowTemperatureJSON::getValue(void)
  {
    assert(flagHasValue);
    return storeValue;
  }

const UnitsValue_TemperatureJSON * PlannerJSON::TypeMinLowTemperatureJSON::getValue(void) const
  {
    assert(flagHasValue);
    return storeValue;
  }

PlannerJSON::TypeAvgLowTemperatureJSON::TypeAvgLowTemperatureJSON(const TypeAvgLowTemperatureJSON &)
  {
    assert(false);
  }

PlannerJSON::TypeAvgLowTemperatureJSON &PlannerJSON::TypeAvgLowTemperatureJSON::operator=(const TypeAvgLowTemperatureJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void PlannerJSON::TypeAvgLowTemperatureJSON::fromJSONValue(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    UnitsValue_TemperatureJSON *convert_classy = UnitsValue_TemperatureJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setValue(convert_classy);
    convert_classy->remove_reference();
  }

PlannerJSON::TypeAvgLowTemperatureJSON::TypeAvgLowTemperatureJSON(void) :
        flagHasValue(false)
  {
    extraIndex = create_string_index();
  }

PlannerJSON::TypeAvgLowTemperatureJSON::~TypeAvgLowTemperatureJSON(void)
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

bool PlannerJSON::TypeAvgLowTemperatureJSON::hasValue(void) const
  {
    return flagHasValue;
  }

UnitsValue_TemperatureJSON * PlannerJSON::TypeAvgLowTemperatureJSON::getValue(void)
  {
    assert(flagHasValue);
    return storeValue;
  }

const UnitsValue_TemperatureJSON * PlannerJSON::TypeAvgLowTemperatureJSON::getValue(void) const
  {
    assert(flagHasValue);
    return storeValue;
  }

PlannerJSON::TypeMaxLowTemperatureJSON::TypeMaxLowTemperatureJSON(const TypeMaxLowTemperatureJSON &)
  {
    assert(false);
  }

PlannerJSON::TypeMaxLowTemperatureJSON &PlannerJSON::TypeMaxLowTemperatureJSON::operator=(const TypeMaxLowTemperatureJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void PlannerJSON::TypeMaxLowTemperatureJSON::fromJSONValue(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    UnitsValue_TemperatureJSON *convert_classy = UnitsValue_TemperatureJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setValue(convert_classy);
    convert_classy->remove_reference();
  }

PlannerJSON::TypeMaxLowTemperatureJSON::TypeMaxLowTemperatureJSON(void) :
        flagHasValue(false)
  {
    extraIndex = create_string_index();
  }

PlannerJSON::TypeMaxLowTemperatureJSON::~TypeMaxLowTemperatureJSON(void)
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

bool PlannerJSON::TypeMaxLowTemperatureJSON::hasValue(void) const
  {
    return flagHasValue;
  }

UnitsValue_TemperatureJSON * PlannerJSON::TypeMaxLowTemperatureJSON::getValue(void)
  {
    assert(flagHasValue);
    return storeValue;
  }

const UnitsValue_TemperatureJSON * PlannerJSON::TypeMaxLowTemperatureJSON::getValue(void) const
  {
    assert(flagHasValue);
    return storeValue;
  }

PlannerJSON::TypeAvgTemperatureJSON::TypeAvgTemperatureJSON(const TypeAvgTemperatureJSON &)
  {
    assert(false);
  }

PlannerJSON::TypeAvgTemperatureJSON &PlannerJSON::TypeAvgTemperatureJSON::operator=(const TypeAvgTemperatureJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void PlannerJSON::TypeAvgTemperatureJSON::fromJSONValue(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    UnitsValue_TemperatureJSON *convert_classy = UnitsValue_TemperatureJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setValue(convert_classy);
    convert_classy->remove_reference();
  }

PlannerJSON::TypeAvgTemperatureJSON::TypeAvgTemperatureJSON(void) :
        flagHasValue(false)
  {
    extraIndex = create_string_index();
  }

PlannerJSON::TypeAvgTemperatureJSON::~TypeAvgTemperatureJSON(void)
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

bool PlannerJSON::TypeAvgTemperatureJSON::hasValue(void) const
  {
    return flagHasValue;
  }

UnitsValue_TemperatureJSON * PlannerJSON::TypeAvgTemperatureJSON::getValue(void)
  {
    assert(flagHasValue);
    return storeValue;
  }

const UnitsValue_TemperatureJSON * PlannerJSON::TypeAvgTemperatureJSON::getValue(void) const
  {
    assert(flagHasValue);
    return storeValue;
  }

PlannerJSON::TypeMinPrecipitationJSON::TypeMinPrecipitationJSON(const TypeMinPrecipitationJSON &)
  {
    assert(false);
  }

PlannerJSON::TypeMinPrecipitationJSON &PlannerJSON::TypeMinPrecipitationJSON::operator=(const TypeMinPrecipitationJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void PlannerJSON::TypeMinPrecipitationJSON::fromJSONValue(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    UnitsValue_PlannerPrecipitationJSON *convert_classy = UnitsValue_PlannerPrecipitationJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setValue(convert_classy);
    convert_classy->remove_reference();
  }

PlannerJSON::TypeMinPrecipitationJSON::TypeMinPrecipitationJSON(void) :
        flagHasValue(false)
  {
    extraIndex = create_string_index();
  }

PlannerJSON::TypeMinPrecipitationJSON::~TypeMinPrecipitationJSON(void)
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

bool PlannerJSON::TypeMinPrecipitationJSON::hasValue(void) const
  {
    return flagHasValue;
  }

UnitsValue_PlannerPrecipitationJSON * PlannerJSON::TypeMinPrecipitationJSON::getValue(void)
  {
    assert(flagHasValue);
    return storeValue;
  }

const UnitsValue_PlannerPrecipitationJSON * PlannerJSON::TypeMinPrecipitationJSON::getValue(void) const
  {
    assert(flagHasValue);
    return storeValue;
  }

PlannerJSON::TypeAvgPrecipitationJSON::TypeAvgPrecipitationJSON(const TypeAvgPrecipitationJSON &)
  {
    assert(false);
  }

PlannerJSON::TypeAvgPrecipitationJSON &PlannerJSON::TypeAvgPrecipitationJSON::operator=(const TypeAvgPrecipitationJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void PlannerJSON::TypeAvgPrecipitationJSON::fromJSONValue(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    UnitsValue_PlannerPrecipitationJSON *convert_classy = UnitsValue_PlannerPrecipitationJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setValue(convert_classy);
    convert_classy->remove_reference();
  }

PlannerJSON::TypeAvgPrecipitationJSON::TypeAvgPrecipitationJSON(void) :
        flagHasValue(false)
  {
    extraIndex = create_string_index();
  }

PlannerJSON::TypeAvgPrecipitationJSON::~TypeAvgPrecipitationJSON(void)
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

bool PlannerJSON::TypeAvgPrecipitationJSON::hasValue(void) const
  {
    return flagHasValue;
  }

UnitsValue_PlannerPrecipitationJSON * PlannerJSON::TypeAvgPrecipitationJSON::getValue(void)
  {
    assert(flagHasValue);
    return storeValue;
  }

const UnitsValue_PlannerPrecipitationJSON * PlannerJSON::TypeAvgPrecipitationJSON::getValue(void) const
  {
    assert(flagHasValue);
    return storeValue;
  }

PlannerJSON::TypeMaxPrecipitationJSON::TypeMaxPrecipitationJSON(const TypeMaxPrecipitationJSON &)
  {
    assert(false);
  }

PlannerJSON::TypeMaxPrecipitationJSON &PlannerJSON::TypeMaxPrecipitationJSON::operator=(const TypeMaxPrecipitationJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void PlannerJSON::TypeMaxPrecipitationJSON::fromJSONValue(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    UnitsValue_PlannerPrecipitationJSON *convert_classy = UnitsValue_PlannerPrecipitationJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setValue(convert_classy);
    convert_classy->remove_reference();
  }

PlannerJSON::TypeMaxPrecipitationJSON::TypeMaxPrecipitationJSON(void) :
        flagHasValue(false)
  {
    extraIndex = create_string_index();
  }

PlannerJSON::TypeMaxPrecipitationJSON::~TypeMaxPrecipitationJSON(void)
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

bool PlannerJSON::TypeMaxPrecipitationJSON::hasValue(void) const
  {
    return flagHasValue;
  }

UnitsValue_PlannerPrecipitationJSON * PlannerJSON::TypeMaxPrecipitationJSON::getValue(void)
  {
    assert(flagHasValue);
    return storeValue;
  }

const UnitsValue_PlannerPrecipitationJSON * PlannerJSON::TypeMaxPrecipitationJSON::getValue(void) const
  {
    assert(flagHasValue);
    return storeValue;
  }

PlannerJSON::TypeMinHighDewPointJSON::TypeMinHighDewPointJSON(const TypeMinHighDewPointJSON &)
  {
    assert(false);
  }

PlannerJSON::TypeMinHighDewPointJSON &PlannerJSON::TypeMinHighDewPointJSON::operator=(const TypeMinHighDewPointJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void PlannerJSON::TypeMinHighDewPointJSON::fromJSONValue(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    UnitsValue_TemperatureJSON *convert_classy = UnitsValue_TemperatureJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setValue(convert_classy);
    convert_classy->remove_reference();
  }

PlannerJSON::TypeMinHighDewPointJSON::TypeMinHighDewPointJSON(void) :
        flagHasValue(false)
  {
    extraIndex = create_string_index();
  }

PlannerJSON::TypeMinHighDewPointJSON::~TypeMinHighDewPointJSON(void)
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

bool PlannerJSON::TypeMinHighDewPointJSON::hasValue(void) const
  {
    return flagHasValue;
  }

UnitsValue_TemperatureJSON * PlannerJSON::TypeMinHighDewPointJSON::getValue(void)
  {
    assert(flagHasValue);
    return storeValue;
  }

const UnitsValue_TemperatureJSON * PlannerJSON::TypeMinHighDewPointJSON::getValue(void) const
  {
    assert(flagHasValue);
    return storeValue;
  }

PlannerJSON::TypeAvgHighDewPointJSON::TypeAvgHighDewPointJSON(const TypeAvgHighDewPointJSON &)
  {
    assert(false);
  }

PlannerJSON::TypeAvgHighDewPointJSON &PlannerJSON::TypeAvgHighDewPointJSON::operator=(const TypeAvgHighDewPointJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void PlannerJSON::TypeAvgHighDewPointJSON::fromJSONValue(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    UnitsValue_TemperatureJSON *convert_classy = UnitsValue_TemperatureJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setValue(convert_classy);
    convert_classy->remove_reference();
  }

PlannerJSON::TypeAvgHighDewPointJSON::TypeAvgHighDewPointJSON(void) :
        flagHasValue(false)
  {
    extraIndex = create_string_index();
  }

PlannerJSON::TypeAvgHighDewPointJSON::~TypeAvgHighDewPointJSON(void)
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

bool PlannerJSON::TypeAvgHighDewPointJSON::hasValue(void) const
  {
    return flagHasValue;
  }

UnitsValue_TemperatureJSON * PlannerJSON::TypeAvgHighDewPointJSON::getValue(void)
  {
    assert(flagHasValue);
    return storeValue;
  }

const UnitsValue_TemperatureJSON * PlannerJSON::TypeAvgHighDewPointJSON::getValue(void) const
  {
    assert(flagHasValue);
    return storeValue;
  }

PlannerJSON::TypeMaxHighDewPointJSON::TypeMaxHighDewPointJSON(const TypeMaxHighDewPointJSON &)
  {
    assert(false);
  }

PlannerJSON::TypeMaxHighDewPointJSON &PlannerJSON::TypeMaxHighDewPointJSON::operator=(const TypeMaxHighDewPointJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void PlannerJSON::TypeMaxHighDewPointJSON::fromJSONValue(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    UnitsValue_TemperatureJSON *convert_classy = UnitsValue_TemperatureJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setValue(convert_classy);
    convert_classy->remove_reference();
  }

PlannerJSON::TypeMaxHighDewPointJSON::TypeMaxHighDewPointJSON(void) :
        flagHasValue(false)
  {
    extraIndex = create_string_index();
  }

PlannerJSON::TypeMaxHighDewPointJSON::~TypeMaxHighDewPointJSON(void)
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

bool PlannerJSON::TypeMaxHighDewPointJSON::hasValue(void) const
  {
    return flagHasValue;
  }

UnitsValue_TemperatureJSON * PlannerJSON::TypeMaxHighDewPointJSON::getValue(void)
  {
    assert(flagHasValue);
    return storeValue;
  }

const UnitsValue_TemperatureJSON * PlannerJSON::TypeMaxHighDewPointJSON::getValue(void) const
  {
    assert(flagHasValue);
    return storeValue;
  }

PlannerJSON::TypeMinLowDewPointJSON::TypeMinLowDewPointJSON(const TypeMinLowDewPointJSON &)
  {
    assert(false);
  }

PlannerJSON::TypeMinLowDewPointJSON &PlannerJSON::TypeMinLowDewPointJSON::operator=(const TypeMinLowDewPointJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void PlannerJSON::TypeMinLowDewPointJSON::fromJSONValue(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    UnitsValue_TemperatureJSON *convert_classy = UnitsValue_TemperatureJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setValue(convert_classy);
    convert_classy->remove_reference();
  }

PlannerJSON::TypeMinLowDewPointJSON::TypeMinLowDewPointJSON(void) :
        flagHasValue(false)
  {
    extraIndex = create_string_index();
  }

PlannerJSON::TypeMinLowDewPointJSON::~TypeMinLowDewPointJSON(void)
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

bool PlannerJSON::TypeMinLowDewPointJSON::hasValue(void) const
  {
    return flagHasValue;
  }

UnitsValue_TemperatureJSON * PlannerJSON::TypeMinLowDewPointJSON::getValue(void)
  {
    assert(flagHasValue);
    return storeValue;
  }

const UnitsValue_TemperatureJSON * PlannerJSON::TypeMinLowDewPointJSON::getValue(void) const
  {
    assert(flagHasValue);
    return storeValue;
  }

PlannerJSON::TypeAvgLowDewPointJSON::TypeAvgLowDewPointJSON(const TypeAvgLowDewPointJSON &)
  {
    assert(false);
  }

PlannerJSON::TypeAvgLowDewPointJSON &PlannerJSON::TypeAvgLowDewPointJSON::operator=(const TypeAvgLowDewPointJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void PlannerJSON::TypeAvgLowDewPointJSON::fromJSONValue(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    UnitsValue_TemperatureJSON *convert_classy = UnitsValue_TemperatureJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setValue(convert_classy);
    convert_classy->remove_reference();
  }

PlannerJSON::TypeAvgLowDewPointJSON::TypeAvgLowDewPointJSON(void) :
        flagHasValue(false)
  {
    extraIndex = create_string_index();
  }

PlannerJSON::TypeAvgLowDewPointJSON::~TypeAvgLowDewPointJSON(void)
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

bool PlannerJSON::TypeAvgLowDewPointJSON::hasValue(void) const
  {
    return flagHasValue;
  }

UnitsValue_TemperatureJSON * PlannerJSON::TypeAvgLowDewPointJSON::getValue(void)
  {
    assert(flagHasValue);
    return storeValue;
  }

const UnitsValue_TemperatureJSON * PlannerJSON::TypeAvgLowDewPointJSON::getValue(void) const
  {
    assert(flagHasValue);
    return storeValue;
  }

PlannerJSON::TypeMaxLowDewPointJSON::TypeMaxLowDewPointJSON(const TypeMaxLowDewPointJSON &)
  {
    assert(false);
  }

PlannerJSON::TypeMaxLowDewPointJSON &PlannerJSON::TypeMaxLowDewPointJSON::operator=(const TypeMaxLowDewPointJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void PlannerJSON::TypeMaxLowDewPointJSON::fromJSONValue(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    UnitsValue_TemperatureJSON *convert_classy = UnitsValue_TemperatureJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setValue(convert_classy);
    convert_classy->remove_reference();
  }

PlannerJSON::TypeMaxLowDewPointJSON::TypeMaxLowDewPointJSON(void) :
        flagHasValue(false)
  {
    extraIndex = create_string_index();
  }

PlannerJSON::TypeMaxLowDewPointJSON::~TypeMaxLowDewPointJSON(void)
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

bool PlannerJSON::TypeMaxLowDewPointJSON::hasValue(void) const
  {
    return flagHasValue;
  }

UnitsValue_TemperatureJSON * PlannerJSON::TypeMaxLowDewPointJSON::getValue(void)
  {
    assert(flagHasValue);
    return storeValue;
  }

const UnitsValue_TemperatureJSON * PlannerJSON::TypeMaxLowDewPointJSON::getValue(void) const
  {
    assert(flagHasValue);
    return storeValue;
  }

PlannerJSON::TypeChanceOfJSON::TypeChanceOfJSON(const TypeChanceOfJSON &)
  {
    assert(false);
  }

PlannerJSON::TypeChanceOfJSON &PlannerJSON::TypeChanceOfJSON::operator=(const TypeChanceOfJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void PlannerJSON::TypeChanceOfJSON::fromJSONKey(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Key of TypeChanceOfJSON is not a string.");
    setKey(std::string(json_string->getData()));
  }

void PlannerJSON::TypeChanceOfJSON::fromJSONName(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Name of TypeChanceOfJSON is not a string.");
    setName(std::string(json_string->getData()));
  }

void PlannerJSON::TypeChanceOfJSON::fromJSONDescription(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Description of TypeChanceOfJSON is not a string.");
    setDescription(std::string(json_string->getData()));
  }

void PlannerJSON::TypeChanceOfJSON::fromJSONPercentage(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    uint8_t extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field Percentage of TypeChanceOfJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field Percentage of TypeChanceOfJSON is not an integer.");
          }
        extracted_integer = (uint8_t)(json_rational->getUnsignedLongInt())    ;
      }
    else
      {
        extracted_integer = (uint8_t)(json_integer->getUnsignedLongInt())    ;
      }
    setPercentage(extracted_integer);
  }

PlannerJSON::TypeChanceOfJSON::TypeChanceOfJSON(void) :
        flagHasKey(false),
        flagHasName(false),
        flagHasDescription(false),
        flagHasPercentage(false)
  {
    extraIndex = create_string_index();
  }

PlannerJSON::TypeChanceOfJSON::~TypeChanceOfJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool PlannerJSON::TypeChanceOfJSON::hasKey(void) const
  {
    return flagHasKey;
  }

std::string PlannerJSON::TypeChanceOfJSON::getKey(void)
  {
    assert(flagHasKey);
    return storeKey;
  }

const std::string PlannerJSON::TypeChanceOfJSON::getKey(void) const
  {
    assert(flagHasKey);
    return storeKey;
  }

bool PlannerJSON::TypeChanceOfJSON::hasName(void) const
  {
    return flagHasName;
  }

std::string PlannerJSON::TypeChanceOfJSON::getName(void)
  {
    assert(flagHasName);
    return storeName;
  }

const std::string PlannerJSON::TypeChanceOfJSON::getName(void) const
  {
    assert(flagHasName);
    return storeName;
  }

bool PlannerJSON::TypeChanceOfJSON::hasDescription(void) const
  {
    return flagHasDescription;
  }

std::string PlannerJSON::TypeChanceOfJSON::getDescription(void)
  {
    assert(flagHasDescription);
    return storeDescription;
  }

const std::string PlannerJSON::TypeChanceOfJSON::getDescription(void) const
  {
    assert(flagHasDescription);
    return storeDescription;
  }

bool PlannerJSON::TypeChanceOfJSON::hasPercentage(void) const
  {
    return flagHasPercentage;
  }

uint8_t PlannerJSON::TypeChanceOfJSON::getPercentage(void)
  {
    assert(flagHasPercentage);
    return storePercentage;
  }

const uint8_t PlannerJSON::TypeChanceOfJSON::getPercentage(void) const
  {
    assert(flagHasPercentage);
    return storePercentage;
  }

PlannerJSON::PlannerJSON(const PlannerJSON &)
  {
    assert(false);
  }

PlannerJSON &PlannerJSON::operator=(const PlannerJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void PlannerJSON::fromJSONPlannerStartDateAndTime(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DateAndOrTimeJSON *convert_classy = DateAndOrTimeJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setPlannerStartDateAndTime(convert_classy);
    convert_classy->remove_reference();
  }

void PlannerJSON::fromJSONPlannerEndDateAndTime(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DateAndOrTimeJSON *convert_classy = DateAndOrTimeJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setPlannerEndDateAndTime(convert_classy);
    convert_classy->remove_reference();
  }

void PlannerJSON::fromJSONMinHighTemperature(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TypeMinHighTemperatureJSON *convert_classy = TypeMinHighTemperatureJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setMinHighTemperature(convert_classy);
    convert_classy->remove_reference();
  }

void PlannerJSON::fromJSONAvgHighTemperature(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TypeAvgHighTemperatureJSON *convert_classy = TypeAvgHighTemperatureJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setAvgHighTemperature(convert_classy);
    convert_classy->remove_reference();
  }

void PlannerJSON::fromJSONMaxHighTemperature(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TypeMaxHighTemperatureJSON *convert_classy = TypeMaxHighTemperatureJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setMaxHighTemperature(convert_classy);
    convert_classy->remove_reference();
  }

void PlannerJSON::fromJSONMinLowTemperature(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TypeMinLowTemperatureJSON *convert_classy = TypeMinLowTemperatureJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setMinLowTemperature(convert_classy);
    convert_classy->remove_reference();
  }

void PlannerJSON::fromJSONAvgLowTemperature(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TypeAvgLowTemperatureJSON *convert_classy = TypeAvgLowTemperatureJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setAvgLowTemperature(convert_classy);
    convert_classy->remove_reference();
  }

void PlannerJSON::fromJSONMaxLowTemperature(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TypeMaxLowTemperatureJSON *convert_classy = TypeMaxLowTemperatureJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setMaxLowTemperature(convert_classy);
    convert_classy->remove_reference();
  }

void PlannerJSON::fromJSONAvgTemperature(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TypeAvgTemperatureJSON *convert_classy = TypeAvgTemperatureJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setAvgTemperature(convert_classy);
    convert_classy->remove_reference();
  }

void PlannerJSON::fromJSONMinPrecipitation(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TypeMinPrecipitationJSON *convert_classy = TypeMinPrecipitationJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setMinPrecipitation(convert_classy);
    convert_classy->remove_reference();
  }

void PlannerJSON::fromJSONAvgPrecipitation(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TypeAvgPrecipitationJSON *convert_classy = TypeAvgPrecipitationJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setAvgPrecipitation(convert_classy);
    convert_classy->remove_reference();
  }

void PlannerJSON::fromJSONMaxPrecipitation(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TypeMaxPrecipitationJSON *convert_classy = TypeMaxPrecipitationJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setMaxPrecipitation(convert_classy);
    convert_classy->remove_reference();
  }

void PlannerJSON::fromJSONMinHighDewPoint(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TypeMinHighDewPointJSON *convert_classy = TypeMinHighDewPointJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setMinHighDewPoint(convert_classy);
    convert_classy->remove_reference();
  }

void PlannerJSON::fromJSONAvgHighDewPoint(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TypeAvgHighDewPointJSON *convert_classy = TypeAvgHighDewPointJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setAvgHighDewPoint(convert_classy);
    convert_classy->remove_reference();
  }

void PlannerJSON::fromJSONMaxHighDewPoint(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TypeMaxHighDewPointJSON *convert_classy = TypeMaxHighDewPointJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setMaxHighDewPoint(convert_classy);
    convert_classy->remove_reference();
  }

void PlannerJSON::fromJSONMinLowDewPoint(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TypeMinLowDewPointJSON *convert_classy = TypeMinLowDewPointJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setMinLowDewPoint(convert_classy);
    convert_classy->remove_reference();
  }

void PlannerJSON::fromJSONAvgLowDewPoint(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TypeAvgLowDewPointJSON *convert_classy = TypeAvgLowDewPointJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setAvgLowDewPoint(convert_classy);
    convert_classy->remove_reference();
  }

void PlannerJSON::fromJSONMaxLowDewPoint(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TypeMaxLowDewPointJSON *convert_classy = TypeMaxLowDewPointJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setMaxLowDewPoint(convert_classy);
    convert_classy->remove_reference();
  }

void PlannerJSON::fromJSONCloudCoverConditions(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field CloudCoverConditions of PlannerJSON is not a string.");
    setCloudCoverConditions(std::string(json_string->getData()));
  }

void PlannerJSON::fromJSONChanceOf(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field ChanceOf of PlannerJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< TypeChanceOfJSON * > vector_ChanceOf1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        TypeChanceOfJSON *convert_classy = TypeChanceOfJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_ChanceOf1[num1] = convert_classy;
      }
    initChanceOf();
    for (size_t num2 = 0; num2 < vector_ChanceOf1.size(); ++num2)
        appendChanceOf(vector_ChanceOf1[num2]);
    for (size_t num1 = 0; num1 < vector_ChanceOf1.size(); ++num1)
      {
        vector_ChanceOf1[num1]->remove_reference();
      }
  }

PlannerJSON::PlannerJSON(void) :
        flagHasPlannerStartDateAndTime(false),
        flagHasPlannerEndDateAndTime(false),
        flagHasMinHighTemperature(false),
        flagHasAvgHighTemperature(false),
        flagHasMaxHighTemperature(false),
        flagHasMinLowTemperature(false),
        flagHasAvgLowTemperature(false),
        flagHasMaxLowTemperature(false),
        flagHasAvgTemperature(false),
        flagHasMinPrecipitation(false),
        flagHasAvgPrecipitation(false),
        flagHasMaxPrecipitation(false),
        flagHasMinHighDewPoint(false),
        flagHasAvgHighDewPoint(false),
        flagHasMaxHighDewPoint(false),
        flagHasMinLowDewPoint(false),
        flagHasAvgLowDewPoint(false),
        flagHasMaxLowDewPoint(false),
        flagHasCloudCoverConditions(false),
        flagHasChanceOf(false)
  {
    extraIndex = create_string_index();
  }

PlannerJSON::~PlannerJSON(void)
  {
    if (flagHasPlannerStartDateAndTime)
      {
        storePlannerStartDateAndTime->remove_reference();
      }
    if (flagHasPlannerEndDateAndTime)
      {
        storePlannerEndDateAndTime->remove_reference();
      }
    if (flagHasMinHighTemperature)
      {
        storeMinHighTemperature->remove_reference();
      }
    if (flagHasAvgHighTemperature)
      {
        storeAvgHighTemperature->remove_reference();
      }
    if (flagHasMaxHighTemperature)
      {
        storeMaxHighTemperature->remove_reference();
      }
    if (flagHasMinLowTemperature)
      {
        storeMinLowTemperature->remove_reference();
      }
    if (flagHasAvgLowTemperature)
      {
        storeAvgLowTemperature->remove_reference();
      }
    if (flagHasMaxLowTemperature)
      {
        storeMaxLowTemperature->remove_reference();
      }
    if (flagHasAvgTemperature)
      {
        storeAvgTemperature->remove_reference();
      }
    if (flagHasMinPrecipitation)
      {
        storeMinPrecipitation->remove_reference();
      }
    if (flagHasAvgPrecipitation)
      {
        storeAvgPrecipitation->remove_reference();
      }
    if (flagHasMaxPrecipitation)
      {
        storeMaxPrecipitation->remove_reference();
      }
    if (flagHasMinHighDewPoint)
      {
        storeMinHighDewPoint->remove_reference();
      }
    if (flagHasAvgHighDewPoint)
      {
        storeAvgHighDewPoint->remove_reference();
      }
    if (flagHasMaxHighDewPoint)
      {
        storeMaxHighDewPoint->remove_reference();
      }
    if (flagHasMinLowDewPoint)
      {
        storeMinLowDewPoint->remove_reference();
      }
    if (flagHasAvgLowDewPoint)
      {
        storeAvgLowDewPoint->remove_reference();
      }
    if (flagHasMaxLowDewPoint)
      {
        storeMaxLowDewPoint->remove_reference();
      }
    if (flagHasChanceOf)
      {
        for (size_t num4 = 0; num4 < storeChanceOf.size(); ++num4)
          {
            storeChanceOf[num4]->remove_reference();
          }
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool PlannerJSON::hasPlannerStartDateAndTime(void) const
  {
    return flagHasPlannerStartDateAndTime;
  }

DateAndOrTimeJSON * PlannerJSON::getPlannerStartDateAndTime(void)
  {
    assert(flagHasPlannerStartDateAndTime);
    return storePlannerStartDateAndTime;
  }

const DateAndOrTimeJSON * PlannerJSON::getPlannerStartDateAndTime(void) const
  {
    assert(flagHasPlannerStartDateAndTime);
    return storePlannerStartDateAndTime;
  }

bool PlannerJSON::hasPlannerEndDateAndTime(void) const
  {
    return flagHasPlannerEndDateAndTime;
  }

DateAndOrTimeJSON * PlannerJSON::getPlannerEndDateAndTime(void)
  {
    assert(flagHasPlannerEndDateAndTime);
    return storePlannerEndDateAndTime;
  }

const DateAndOrTimeJSON * PlannerJSON::getPlannerEndDateAndTime(void) const
  {
    assert(flagHasPlannerEndDateAndTime);
    return storePlannerEndDateAndTime;
  }

bool PlannerJSON::hasMinHighTemperature(void) const
  {
    return flagHasMinHighTemperature;
  }

PlannerJSON::TypeMinHighTemperatureJSON * PlannerJSON::getMinHighTemperature(void)
  {
    assert(flagHasMinHighTemperature);
    return storeMinHighTemperature;
  }

const PlannerJSON::TypeMinHighTemperatureJSON * PlannerJSON::getMinHighTemperature(void) const
  {
    assert(flagHasMinHighTemperature);
    return storeMinHighTemperature;
  }

bool PlannerJSON::hasAvgHighTemperature(void) const
  {
    return flagHasAvgHighTemperature;
  }

PlannerJSON::TypeAvgHighTemperatureJSON * PlannerJSON::getAvgHighTemperature(void)
  {
    assert(flagHasAvgHighTemperature);
    return storeAvgHighTemperature;
  }

const PlannerJSON::TypeAvgHighTemperatureJSON * PlannerJSON::getAvgHighTemperature(void) const
  {
    assert(flagHasAvgHighTemperature);
    return storeAvgHighTemperature;
  }

bool PlannerJSON::hasMaxHighTemperature(void) const
  {
    return flagHasMaxHighTemperature;
  }

PlannerJSON::TypeMaxHighTemperatureJSON * PlannerJSON::getMaxHighTemperature(void)
  {
    assert(flagHasMaxHighTemperature);
    return storeMaxHighTemperature;
  }

const PlannerJSON::TypeMaxHighTemperatureJSON * PlannerJSON::getMaxHighTemperature(void) const
  {
    assert(flagHasMaxHighTemperature);
    return storeMaxHighTemperature;
  }

bool PlannerJSON::hasMinLowTemperature(void) const
  {
    return flagHasMinLowTemperature;
  }

PlannerJSON::TypeMinLowTemperatureJSON * PlannerJSON::getMinLowTemperature(void)
  {
    assert(flagHasMinLowTemperature);
    return storeMinLowTemperature;
  }

const PlannerJSON::TypeMinLowTemperatureJSON * PlannerJSON::getMinLowTemperature(void) const
  {
    assert(flagHasMinLowTemperature);
    return storeMinLowTemperature;
  }

bool PlannerJSON::hasAvgLowTemperature(void) const
  {
    return flagHasAvgLowTemperature;
  }

PlannerJSON::TypeAvgLowTemperatureJSON * PlannerJSON::getAvgLowTemperature(void)
  {
    assert(flagHasAvgLowTemperature);
    return storeAvgLowTemperature;
  }

const PlannerJSON::TypeAvgLowTemperatureJSON * PlannerJSON::getAvgLowTemperature(void) const
  {
    assert(flagHasAvgLowTemperature);
    return storeAvgLowTemperature;
  }

bool PlannerJSON::hasMaxLowTemperature(void) const
  {
    return flagHasMaxLowTemperature;
  }

PlannerJSON::TypeMaxLowTemperatureJSON * PlannerJSON::getMaxLowTemperature(void)
  {
    assert(flagHasMaxLowTemperature);
    return storeMaxLowTemperature;
  }

const PlannerJSON::TypeMaxLowTemperatureJSON * PlannerJSON::getMaxLowTemperature(void) const
  {
    assert(flagHasMaxLowTemperature);
    return storeMaxLowTemperature;
  }

bool PlannerJSON::hasAvgTemperature(void) const
  {
    return flagHasAvgTemperature;
  }

PlannerJSON::TypeAvgTemperatureJSON * PlannerJSON::getAvgTemperature(void)
  {
    assert(flagHasAvgTemperature);
    return storeAvgTemperature;
  }

const PlannerJSON::TypeAvgTemperatureJSON * PlannerJSON::getAvgTemperature(void) const
  {
    assert(flagHasAvgTemperature);
    return storeAvgTemperature;
  }

bool PlannerJSON::hasMinPrecipitation(void) const
  {
    return flagHasMinPrecipitation;
  }

PlannerJSON::TypeMinPrecipitationJSON * PlannerJSON::getMinPrecipitation(void)
  {
    assert(flagHasMinPrecipitation);
    return storeMinPrecipitation;
  }

const PlannerJSON::TypeMinPrecipitationJSON * PlannerJSON::getMinPrecipitation(void) const
  {
    assert(flagHasMinPrecipitation);
    return storeMinPrecipitation;
  }

bool PlannerJSON::hasAvgPrecipitation(void) const
  {
    return flagHasAvgPrecipitation;
  }

PlannerJSON::TypeAvgPrecipitationJSON * PlannerJSON::getAvgPrecipitation(void)
  {
    assert(flagHasAvgPrecipitation);
    return storeAvgPrecipitation;
  }

const PlannerJSON::TypeAvgPrecipitationJSON * PlannerJSON::getAvgPrecipitation(void) const
  {
    assert(flagHasAvgPrecipitation);
    return storeAvgPrecipitation;
  }

bool PlannerJSON::hasMaxPrecipitation(void) const
  {
    return flagHasMaxPrecipitation;
  }

PlannerJSON::TypeMaxPrecipitationJSON * PlannerJSON::getMaxPrecipitation(void)
  {
    assert(flagHasMaxPrecipitation);
    return storeMaxPrecipitation;
  }

const PlannerJSON::TypeMaxPrecipitationJSON * PlannerJSON::getMaxPrecipitation(void) const
  {
    assert(flagHasMaxPrecipitation);
    return storeMaxPrecipitation;
  }

bool PlannerJSON::hasMinHighDewPoint(void) const
  {
    return flagHasMinHighDewPoint;
  }

PlannerJSON::TypeMinHighDewPointJSON * PlannerJSON::getMinHighDewPoint(void)
  {
    assert(flagHasMinHighDewPoint);
    return storeMinHighDewPoint;
  }

const PlannerJSON::TypeMinHighDewPointJSON * PlannerJSON::getMinHighDewPoint(void) const
  {
    assert(flagHasMinHighDewPoint);
    return storeMinHighDewPoint;
  }

bool PlannerJSON::hasAvgHighDewPoint(void) const
  {
    return flagHasAvgHighDewPoint;
  }

PlannerJSON::TypeAvgHighDewPointJSON * PlannerJSON::getAvgHighDewPoint(void)
  {
    assert(flagHasAvgHighDewPoint);
    return storeAvgHighDewPoint;
  }

const PlannerJSON::TypeAvgHighDewPointJSON * PlannerJSON::getAvgHighDewPoint(void) const
  {
    assert(flagHasAvgHighDewPoint);
    return storeAvgHighDewPoint;
  }

bool PlannerJSON::hasMaxHighDewPoint(void) const
  {
    return flagHasMaxHighDewPoint;
  }

PlannerJSON::TypeMaxHighDewPointJSON * PlannerJSON::getMaxHighDewPoint(void)
  {
    assert(flagHasMaxHighDewPoint);
    return storeMaxHighDewPoint;
  }

const PlannerJSON::TypeMaxHighDewPointJSON * PlannerJSON::getMaxHighDewPoint(void) const
  {
    assert(flagHasMaxHighDewPoint);
    return storeMaxHighDewPoint;
  }

bool PlannerJSON::hasMinLowDewPoint(void) const
  {
    return flagHasMinLowDewPoint;
  }

PlannerJSON::TypeMinLowDewPointJSON * PlannerJSON::getMinLowDewPoint(void)
  {
    assert(flagHasMinLowDewPoint);
    return storeMinLowDewPoint;
  }

const PlannerJSON::TypeMinLowDewPointJSON * PlannerJSON::getMinLowDewPoint(void) const
  {
    assert(flagHasMinLowDewPoint);
    return storeMinLowDewPoint;
  }

bool PlannerJSON::hasAvgLowDewPoint(void) const
  {
    return flagHasAvgLowDewPoint;
  }

PlannerJSON::TypeAvgLowDewPointJSON * PlannerJSON::getAvgLowDewPoint(void)
  {
    assert(flagHasAvgLowDewPoint);
    return storeAvgLowDewPoint;
  }

const PlannerJSON::TypeAvgLowDewPointJSON * PlannerJSON::getAvgLowDewPoint(void) const
  {
    assert(flagHasAvgLowDewPoint);
    return storeAvgLowDewPoint;
  }

bool PlannerJSON::hasMaxLowDewPoint(void) const
  {
    return flagHasMaxLowDewPoint;
  }

PlannerJSON::TypeMaxLowDewPointJSON * PlannerJSON::getMaxLowDewPoint(void)
  {
    assert(flagHasMaxLowDewPoint);
    return storeMaxLowDewPoint;
  }

const PlannerJSON::TypeMaxLowDewPointJSON * PlannerJSON::getMaxLowDewPoint(void) const
  {
    assert(flagHasMaxLowDewPoint);
    return storeMaxLowDewPoint;
  }

bool PlannerJSON::hasCloudCoverConditions(void) const
  {
    return flagHasCloudCoverConditions;
  }

std::string PlannerJSON::getCloudCoverConditions(void)
  {
    assert(flagHasCloudCoverConditions);
    return storeCloudCoverConditions;
  }

const std::string PlannerJSON::getCloudCoverConditions(void) const
  {
    assert(flagHasCloudCoverConditions);
    return storeCloudCoverConditions;
  }

bool PlannerJSON::hasChanceOf(void) const
  {
    return flagHasChanceOf;
  }

size_t PlannerJSON::countOfChanceOf(void) const
  {
    assert(flagHasChanceOf);
    return storeChanceOf.size();
  }

PlannerJSON::TypeChanceOfJSON * PlannerJSON::elementOfChanceOf(size_t element_num)
  {
    assert(flagHasChanceOf);
    return storeChanceOf[element_num];
  }

const PlannerJSON::TypeChanceOfJSON * PlannerJSON::elementOfChanceOf(size_t element_num) const
  {
    assert(flagHasChanceOf);
    return storeChanceOf[element_num];
  }

std::vector< PlannerJSON::TypeChanceOfJSON * > PlannerJSON::getChanceOf(void)
  {
    assert(flagHasChanceOf);
    return storeChanceOf;
  }

const std::vector< PlannerJSON::TypeChanceOfJSON * > PlannerJSON::getChanceOf(void) const
  {
    assert(flagHasChanceOf);
    return storeChanceOf;
  }

PlannerJSON::TypeMinHighTemperatureJSON *PlannerJSON::TypeMinHighTemperatureJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    TypeMinHighTemperatureJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<TypeMinHighTemperatureJSON>, TypeMinHighTemperatureJSON *, bool> generator("Type TypeMinHighTemperature", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
PlannerJSON::TypeAvgHighTemperatureJSON *PlannerJSON::TypeAvgHighTemperatureJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    TypeAvgHighTemperatureJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<TypeAvgHighTemperatureJSON>, TypeAvgHighTemperatureJSON *, bool> generator("Type TypeAvgHighTemperature", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
PlannerJSON::TypeMaxHighTemperatureJSON *PlannerJSON::TypeMaxHighTemperatureJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    TypeMaxHighTemperatureJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<TypeMaxHighTemperatureJSON>, TypeMaxHighTemperatureJSON *, bool> generator("Type TypeMaxHighTemperature", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
PlannerJSON::TypeMinLowTemperatureJSON *PlannerJSON::TypeMinLowTemperatureJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    TypeMinLowTemperatureJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<TypeMinLowTemperatureJSON>, TypeMinLowTemperatureJSON *, bool> generator("Type TypeMinLowTemperature", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
PlannerJSON::TypeAvgLowTemperatureJSON *PlannerJSON::TypeAvgLowTemperatureJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    TypeAvgLowTemperatureJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<TypeAvgLowTemperatureJSON>, TypeAvgLowTemperatureJSON *, bool> generator("Type TypeAvgLowTemperature", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
PlannerJSON::TypeMaxLowTemperatureJSON *PlannerJSON::TypeMaxLowTemperatureJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    TypeMaxLowTemperatureJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<TypeMaxLowTemperatureJSON>, TypeMaxLowTemperatureJSON *, bool> generator("Type TypeMaxLowTemperature", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
PlannerJSON::TypeAvgTemperatureJSON *PlannerJSON::TypeAvgTemperatureJSON::from_json(JSONValue *json_value, bool ignore_extras)
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
PlannerJSON::TypeMinPrecipitationJSON *PlannerJSON::TypeMinPrecipitationJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    TypeMinPrecipitationJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<TypeMinPrecipitationJSON>, TypeMinPrecipitationJSON *, bool> generator("Type TypeMinPrecipitation", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
PlannerJSON::TypeAvgPrecipitationJSON *PlannerJSON::TypeAvgPrecipitationJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    TypeAvgPrecipitationJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<TypeAvgPrecipitationJSON>, TypeAvgPrecipitationJSON *, bool> generator("Type TypeAvgPrecipitation", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
PlannerJSON::TypeMaxPrecipitationJSON *PlannerJSON::TypeMaxPrecipitationJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    TypeMaxPrecipitationJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<TypeMaxPrecipitationJSON>, TypeMaxPrecipitationJSON *, bool> generator("Type TypeMaxPrecipitation", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
PlannerJSON::TypeMinHighDewPointJSON *PlannerJSON::TypeMinHighDewPointJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    TypeMinHighDewPointJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<TypeMinHighDewPointJSON>, TypeMinHighDewPointJSON *, bool> generator("Type TypeMinHighDewPoint", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
PlannerJSON::TypeAvgHighDewPointJSON *PlannerJSON::TypeAvgHighDewPointJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    TypeAvgHighDewPointJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<TypeAvgHighDewPointJSON>, TypeAvgHighDewPointJSON *, bool> generator("Type TypeAvgHighDewPoint", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
PlannerJSON::TypeMaxHighDewPointJSON *PlannerJSON::TypeMaxHighDewPointJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    TypeMaxHighDewPointJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<TypeMaxHighDewPointJSON>, TypeMaxHighDewPointJSON *, bool> generator("Type TypeMaxHighDewPoint", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
PlannerJSON::TypeMinLowDewPointJSON *PlannerJSON::TypeMinLowDewPointJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    TypeMinLowDewPointJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<TypeMinLowDewPointJSON>, TypeMinLowDewPointJSON *, bool> generator("Type TypeMinLowDewPoint", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
PlannerJSON::TypeAvgLowDewPointJSON *PlannerJSON::TypeAvgLowDewPointJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    TypeAvgLowDewPointJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<TypeAvgLowDewPointJSON>, TypeAvgLowDewPointJSON *, bool> generator("Type TypeAvgLowDewPoint", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
PlannerJSON::TypeMaxLowDewPointJSON *PlannerJSON::TypeMaxLowDewPointJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    TypeMaxLowDewPointJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<TypeMaxLowDewPointJSON>, TypeMaxLowDewPointJSON *, bool> generator("Type TypeMaxLowDewPoint", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
PlannerJSON::TypeChanceOfJSON *PlannerJSON::TypeChanceOfJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    TypeChanceOfJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<TypeChanceOfJSON>, TypeChanceOfJSON *, bool> generator("Type TypeChanceOf", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
PlannerJSON *PlannerJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    PlannerJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<PlannerJSON>, PlannerJSON *, bool> generator("Type Planner", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
