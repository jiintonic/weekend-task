/* file "ShowWeatherAlmanacInformationNuggetJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "ShowWeatherAlmanacInformationNuggetJSON.h"

#include "ShowWeatherAlmanacInformationNuggetJSON.h"


ShowWeatherAlmanacInformationNuggetJSON::TypeNormalHighTemperatureJSON::TypeNormalHighTemperatureJSON(const TypeNormalHighTemperatureJSON &)
  {
    assert(false);
  }

ShowWeatherAlmanacInformationNuggetJSON::TypeNormalHighTemperatureJSON &ShowWeatherAlmanacInformationNuggetJSON::TypeNormalHighTemperatureJSON::operator=(const TypeNormalHighTemperatureJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void ShowWeatherAlmanacInformationNuggetJSON::TypeNormalHighTemperatureJSON::fromJSONValue(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    UnitsValue_TemperatureJSON *convert_classy = UnitsValue_TemperatureJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setValue(convert_classy);
    convert_classy->remove_reference();
  }

ShowWeatherAlmanacInformationNuggetJSON::TypeNormalHighTemperatureJSON::TypeNormalHighTemperatureJSON(void) :
        flagHasValue(false)
  {
    extraIndex = create_string_index();
  }

ShowWeatherAlmanacInformationNuggetJSON::TypeNormalHighTemperatureJSON::~TypeNormalHighTemperatureJSON(void)
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

bool ShowWeatherAlmanacInformationNuggetJSON::TypeNormalHighTemperatureJSON::hasValue(void) const
  {
    return flagHasValue;
  }

UnitsValue_TemperatureJSON * ShowWeatherAlmanacInformationNuggetJSON::TypeNormalHighTemperatureJSON::getValue(void)
  {
    assert(flagHasValue);
    return storeValue;
  }

const UnitsValue_TemperatureJSON * ShowWeatherAlmanacInformationNuggetJSON::TypeNormalHighTemperatureJSON::getValue(void) const
  {
    assert(flagHasValue);
    return storeValue;
  }

ShowWeatherAlmanacInformationNuggetJSON::TypeNormalLowTemperatureJSON::TypeNormalLowTemperatureJSON(const TypeNormalLowTemperatureJSON &)
  {
    assert(false);
  }

ShowWeatherAlmanacInformationNuggetJSON::TypeNormalLowTemperatureJSON &ShowWeatherAlmanacInformationNuggetJSON::TypeNormalLowTemperatureJSON::operator=(const TypeNormalLowTemperatureJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void ShowWeatherAlmanacInformationNuggetJSON::TypeNormalLowTemperatureJSON::fromJSONValue(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    UnitsValue_TemperatureJSON *convert_classy = UnitsValue_TemperatureJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setValue(convert_classy);
    convert_classy->remove_reference();
  }

ShowWeatherAlmanacInformationNuggetJSON::TypeNormalLowTemperatureJSON::TypeNormalLowTemperatureJSON(void) :
        flagHasValue(false)
  {
    extraIndex = create_string_index();
  }

ShowWeatherAlmanacInformationNuggetJSON::TypeNormalLowTemperatureJSON::~TypeNormalLowTemperatureJSON(void)
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

bool ShowWeatherAlmanacInformationNuggetJSON::TypeNormalLowTemperatureJSON::hasValue(void) const
  {
    return flagHasValue;
  }

UnitsValue_TemperatureJSON * ShowWeatherAlmanacInformationNuggetJSON::TypeNormalLowTemperatureJSON::getValue(void)
  {
    assert(flagHasValue);
    return storeValue;
  }

const UnitsValue_TemperatureJSON * ShowWeatherAlmanacInformationNuggetJSON::TypeNormalLowTemperatureJSON::getValue(void) const
  {
    assert(flagHasValue);
    return storeValue;
  }

ShowWeatherAlmanacInformationNuggetJSON::TypeRecordHighTemperatureJSON::TypeRecordHighTemperatureJSON(const TypeRecordHighTemperatureJSON &)
  {
    assert(false);
  }

ShowWeatherAlmanacInformationNuggetJSON::TypeRecordHighTemperatureJSON &ShowWeatherAlmanacInformationNuggetJSON::TypeRecordHighTemperatureJSON::operator=(const TypeRecordHighTemperatureJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void ShowWeatherAlmanacInformationNuggetJSON::TypeRecordHighTemperatureJSON::fromJSONValue(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    UnitsValue_TemperatureJSON *convert_classy = UnitsValue_TemperatureJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setValue(convert_classy);
    convert_classy->remove_reference();
  }

void ShowWeatherAlmanacInformationNuggetJSON::TypeRecordHighTemperatureJSON::fromJSONYear(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Year of TypeRecordHighTemperatureJSON is not a string.");
    setYear(std::string(json_string->getData()));
  }

ShowWeatherAlmanacInformationNuggetJSON::TypeRecordHighTemperatureJSON::TypeRecordHighTemperatureJSON(void) :
        flagHasValue(false),
        flagHasYear(false)
  {
    extraIndex = create_string_index();
  }

ShowWeatherAlmanacInformationNuggetJSON::TypeRecordHighTemperatureJSON::~TypeRecordHighTemperatureJSON(void)
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

bool ShowWeatherAlmanacInformationNuggetJSON::TypeRecordHighTemperatureJSON::hasValue(void) const
  {
    return flagHasValue;
  }

UnitsValue_TemperatureJSON * ShowWeatherAlmanacInformationNuggetJSON::TypeRecordHighTemperatureJSON::getValue(void)
  {
    assert(flagHasValue);
    return storeValue;
  }

const UnitsValue_TemperatureJSON * ShowWeatherAlmanacInformationNuggetJSON::TypeRecordHighTemperatureJSON::getValue(void) const
  {
    assert(flagHasValue);
    return storeValue;
  }

bool ShowWeatherAlmanacInformationNuggetJSON::TypeRecordHighTemperatureJSON::hasYear(void) const
  {
    return flagHasYear;
  }

std::string ShowWeatherAlmanacInformationNuggetJSON::TypeRecordHighTemperatureJSON::getYear(void)
  {
    assert(flagHasYear);
    return storeYear;
  }

const std::string ShowWeatherAlmanacInformationNuggetJSON::TypeRecordHighTemperatureJSON::getYear(void) const
  {
    assert(flagHasYear);
    return storeYear;
  }

ShowWeatherAlmanacInformationNuggetJSON::TypeRecordLowTemperatureJSON::TypeRecordLowTemperatureJSON(const TypeRecordLowTemperatureJSON &)
  {
    assert(false);
  }

ShowWeatherAlmanacInformationNuggetJSON::TypeRecordLowTemperatureJSON &ShowWeatherAlmanacInformationNuggetJSON::TypeRecordLowTemperatureJSON::operator=(const TypeRecordLowTemperatureJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void ShowWeatherAlmanacInformationNuggetJSON::TypeRecordLowTemperatureJSON::fromJSONValue(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    UnitsValue_TemperatureJSON *convert_classy = UnitsValue_TemperatureJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setValue(convert_classy);
    convert_classy->remove_reference();
  }

void ShowWeatherAlmanacInformationNuggetJSON::TypeRecordLowTemperatureJSON::fromJSONYear(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Year of TypeRecordLowTemperatureJSON is not a string.");
    setYear(std::string(json_string->getData()));
  }

ShowWeatherAlmanacInformationNuggetJSON::TypeRecordLowTemperatureJSON::TypeRecordLowTemperatureJSON(void) :
        flagHasValue(false),
        flagHasYear(false)
  {
    extraIndex = create_string_index();
  }

ShowWeatherAlmanacInformationNuggetJSON::TypeRecordLowTemperatureJSON::~TypeRecordLowTemperatureJSON(void)
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

bool ShowWeatherAlmanacInformationNuggetJSON::TypeRecordLowTemperatureJSON::hasValue(void) const
  {
    return flagHasValue;
  }

UnitsValue_TemperatureJSON * ShowWeatherAlmanacInformationNuggetJSON::TypeRecordLowTemperatureJSON::getValue(void)
  {
    assert(flagHasValue);
    return storeValue;
  }

const UnitsValue_TemperatureJSON * ShowWeatherAlmanacInformationNuggetJSON::TypeRecordLowTemperatureJSON::getValue(void) const
  {
    assert(flagHasValue);
    return storeValue;
  }

bool ShowWeatherAlmanacInformationNuggetJSON::TypeRecordLowTemperatureJSON::hasYear(void) const
  {
    return flagHasYear;
  }

std::string ShowWeatherAlmanacInformationNuggetJSON::TypeRecordLowTemperatureJSON::getYear(void)
  {
    assert(flagHasYear);
    return storeYear;
  }

const std::string ShowWeatherAlmanacInformationNuggetJSON::TypeRecordLowTemperatureJSON::getYear(void) const
  {
    assert(flagHasYear);
    return storeYear;
  }

ShowWeatherAlmanacInformationNuggetJSON::ShowWeatherAlmanacInformationNuggetJSON(const ShowWeatherAlmanacInformationNuggetJSON &)
  {
    assert(false);
  }

ShowWeatherAlmanacInformationNuggetJSON &ShowWeatherAlmanacInformationNuggetJSON::operator=(const ShowWeatherAlmanacInformationNuggetJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *ShowWeatherAlmanacInformationNuggetJSON::extraAttributionToJSON(void) const
  {
    JSONValueHandler handler_Attribution;
    storeAttribution->write_as_json(&handler_Attribution);
    handler_Attribution.result->add_reference();
    return handler_Attribution.result;
  }

JSONValue *ShowWeatherAlmanacInformationNuggetJSON::extraLocationToJSON(void) const
  {
    JSONValueHandler handler_Location;
    storeLocation->write_as_json(&handler_Location);
    handler_Location.result->add_reference();
    return handler_Location.result;
  }

JSONValue *ShowWeatherAlmanacInformationNuggetJSON::extraAlertsToJSON(void) const
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

JSONValue *ShowWeatherAlmanacInformationNuggetJSON::extraRequestedAlmanacAttributeToJSON(void) const
  {
    JSONStringValue *generated_string_RequestedAlmanacAttribute = new JSONStringValue(storeRequestedAlmanacAttribute.c_str());
    return generated_string_RequestedAlmanacAttribute;
  }

JSONValue *ShowWeatherAlmanacInformationNuggetJSON::extraAirportCodeToJSON(void) const
  {
    JSONStringValue *generated_string_AirportCode = new JSONStringValue(storeAirportCode.c_str());
    return generated_string_AirportCode;
  }

JSONValue *ShowWeatherAlmanacInformationNuggetJSON::extraNormalHighTemperatureToJSON(void) const
  {
    JSONValueHandler handler_NormalHighTemperature;
    storeNormalHighTemperature->write_as_json(&handler_NormalHighTemperature);
    handler_NormalHighTemperature.result->add_reference();
    return handler_NormalHighTemperature.result;
  }

JSONValue *ShowWeatherAlmanacInformationNuggetJSON::extraNormalLowTemperatureToJSON(void) const
  {
    JSONValueHandler handler_NormalLowTemperature;
    storeNormalLowTemperature->write_as_json(&handler_NormalLowTemperature);
    handler_NormalLowTemperature.result->add_reference();
    return handler_NormalLowTemperature.result;
  }

JSONValue *ShowWeatherAlmanacInformationNuggetJSON::extraRecordHighTemperatureToJSON(void) const
  {
    JSONValueHandler handler_RecordHighTemperature;
    storeRecordHighTemperature->write_as_json(&handler_RecordHighTemperature);
    handler_RecordHighTemperature.result->add_reference();
    return handler_RecordHighTemperature.result;
  }

JSONValue *ShowWeatherAlmanacInformationNuggetJSON::extraRecordLowTemperatureToJSON(void) const
  {
    JSONValueHandler handler_RecordLowTemperature;
    storeRecordLowTemperature->write_as_json(&handler_RecordLowTemperature);
    handler_RecordLowTemperature.result->add_reference();
    return handler_RecordLowTemperature.result;
  }

void ShowWeatherAlmanacInformationNuggetJSON::fromJSONAttribution(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    AttributionJSON *convert_classy = AttributionJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setAttribution(convert_classy);
    convert_classy->remove_reference();
  }

void ShowWeatherAlmanacInformationNuggetJSON::fromJSONLocation(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    MapLocationJSON *convert_classy = MapLocationJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setLocation(convert_classy);
    convert_classy->remove_reference();
  }

void ShowWeatherAlmanacInformationNuggetJSON::fromJSONAlerts(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field Alerts of ShowWeatherAlmanacInformationNuggetJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< AlertJSON * > vector_Alerts1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        AlertJSON *convert_classy = AlertJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_Alerts1[num1] = convert_classy;
      }
    initAlerts();
    for (size_t num2 = 0; num2 < vector_Alerts1.size(); ++num2)
        appendAlerts(vector_Alerts1[num2]);
    for (size_t num1 = 0; num1 < vector_Alerts1.size(); ++num1)
      {
        vector_Alerts1[num1]->remove_reference();
      }
  }

void ShowWeatherAlmanacInformationNuggetJSON::fromJSONRequestedAlmanacAttribute(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field RequestedAlmanacAttribute of ShowWeatherAlmanacInformationNuggetJSON is not a string.");
    setRequestedAlmanacAttribute(std::string(json_string->getData()));
  }

void ShowWeatherAlmanacInformationNuggetJSON::fromJSONAirportCode(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field AirportCode of ShowWeatherAlmanacInformationNuggetJSON is not a string.");
    setAirportCode(std::string(json_string->getData()));
  }

void ShowWeatherAlmanacInformationNuggetJSON::fromJSONNormalHighTemperature(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TypeNormalHighTemperatureJSON *convert_classy = TypeNormalHighTemperatureJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setNormalHighTemperature(convert_classy);
    convert_classy->remove_reference();
  }

void ShowWeatherAlmanacInformationNuggetJSON::fromJSONNormalLowTemperature(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TypeNormalLowTemperatureJSON *convert_classy = TypeNormalLowTemperatureJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setNormalLowTemperature(convert_classy);
    convert_classy->remove_reference();
  }

void ShowWeatherAlmanacInformationNuggetJSON::fromJSONRecordHighTemperature(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TypeRecordHighTemperatureJSON *convert_classy = TypeRecordHighTemperatureJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setRecordHighTemperature(convert_classy);
    convert_classy->remove_reference();
  }

void ShowWeatherAlmanacInformationNuggetJSON::fromJSONRecordLowTemperature(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TypeRecordLowTemperatureJSON *convert_classy = TypeRecordLowTemperatureJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setRecordLowTemperature(convert_classy);
    convert_classy->remove_reference();
  }

ShowWeatherAlmanacInformationNuggetJSON::ShowWeatherAlmanacInformationNuggetJSON(void) :
        flagHasAttribution(false),
        flagHasLocation(false),
        flagHasAlerts(false),
        flagHasRequestedAlmanacAttribute(false),
        flagHasAirportCode(false),
        flagHasNormalHighTemperature(false),
        flagHasNormalLowTemperature(false),
        flagHasRecordHighTemperature(false),
        flagHasRecordLowTemperature(false)
  {
    extraIndex = create_string_index();
  }

ShowWeatherAlmanacInformationNuggetJSON::~ShowWeatherAlmanacInformationNuggetJSON(void)
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
        for (size_t num4 = 0; num4 < storeAlerts.size(); ++num4)
          {
            storeAlerts[num4]->remove_reference();
          }
      }
    if (flagHasNormalHighTemperature)
      {
        storeNormalHighTemperature->remove_reference();
      }
    if (flagHasNormalLowTemperature)
      {
        storeNormalLowTemperature->remove_reference();
      }
    if (flagHasRecordHighTemperature)
      {
        storeRecordHighTemperature->remove_reference();
      }
    if (flagHasRecordLowTemperature)
      {
        storeRecordLowTemperature->remove_reference();
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *ShowWeatherAlmanacInformationNuggetJSON::getWeatherNuggetKind(void) const
  {
    return "ShowWeatherAlmanac";
  }

bool ShowWeatherAlmanacInformationNuggetJSON::hasAttribution(void) const
  {
    return flagHasAttribution;
  }

AttributionJSON * ShowWeatherAlmanacInformationNuggetJSON::getAttribution(void)
  {
    assert(flagHasAttribution);
    return storeAttribution;
  }

const AttributionJSON * ShowWeatherAlmanacInformationNuggetJSON::getAttribution(void) const
  {
    assert(flagHasAttribution);
    return storeAttribution;
  }

bool ShowWeatherAlmanacInformationNuggetJSON::hasLocation(void) const
  {
    return flagHasLocation;
  }

MapLocationJSON * ShowWeatherAlmanacInformationNuggetJSON::getLocation(void)
  {
    assert(flagHasLocation);
    return storeLocation;
  }

const MapLocationJSON * ShowWeatherAlmanacInformationNuggetJSON::getLocation(void) const
  {
    assert(flagHasLocation);
    return storeLocation;
  }

bool ShowWeatherAlmanacInformationNuggetJSON::hasAlerts(void) const
  {
    return flagHasAlerts;
  }

size_t ShowWeatherAlmanacInformationNuggetJSON::countOfAlerts(void) const
  {
    assert(flagHasAlerts);
    return storeAlerts.size();
  }

AlertJSON * ShowWeatherAlmanacInformationNuggetJSON::elementOfAlerts(size_t element_num)
  {
    assert(flagHasAlerts);
    return storeAlerts[element_num];
  }

const AlertJSON * ShowWeatherAlmanacInformationNuggetJSON::elementOfAlerts(size_t element_num) const
  {
    assert(flagHasAlerts);
    return storeAlerts[element_num];
  }

std::vector< AlertJSON * > ShowWeatherAlmanacInformationNuggetJSON::getAlerts(void)
  {
    assert(flagHasAlerts);
    return storeAlerts;
  }

const std::vector< AlertJSON * > ShowWeatherAlmanacInformationNuggetJSON::getAlerts(void) const
  {
    assert(flagHasAlerts);
    return storeAlerts;
  }

bool ShowWeatherAlmanacInformationNuggetJSON::hasRequestedAlmanacAttribute(void) const
  {
    return flagHasRequestedAlmanacAttribute;
  }

std::string ShowWeatherAlmanacInformationNuggetJSON::getRequestedAlmanacAttribute(void)
  {
    assert(flagHasRequestedAlmanacAttribute);
    return storeRequestedAlmanacAttribute;
  }

const std::string ShowWeatherAlmanacInformationNuggetJSON::getRequestedAlmanacAttribute(void) const
  {
    assert(flagHasRequestedAlmanacAttribute);
    return storeRequestedAlmanacAttribute;
  }

bool ShowWeatherAlmanacInformationNuggetJSON::hasAirportCode(void) const
  {
    return flagHasAirportCode;
  }

std::string ShowWeatherAlmanacInformationNuggetJSON::getAirportCode(void)
  {
    assert(flagHasAirportCode);
    return storeAirportCode;
  }

const std::string ShowWeatherAlmanacInformationNuggetJSON::getAirportCode(void) const
  {
    assert(flagHasAirportCode);
    return storeAirportCode;
  }

bool ShowWeatherAlmanacInformationNuggetJSON::hasNormalHighTemperature(void) const
  {
    return flagHasNormalHighTemperature;
  }

ShowWeatherAlmanacInformationNuggetJSON::TypeNormalHighTemperatureJSON * ShowWeatherAlmanacInformationNuggetJSON::getNormalHighTemperature(void)
  {
    assert(flagHasNormalHighTemperature);
    return storeNormalHighTemperature;
  }

const ShowWeatherAlmanacInformationNuggetJSON::TypeNormalHighTemperatureJSON * ShowWeatherAlmanacInformationNuggetJSON::getNormalHighTemperature(void) const
  {
    assert(flagHasNormalHighTemperature);
    return storeNormalHighTemperature;
  }

bool ShowWeatherAlmanacInformationNuggetJSON::hasNormalLowTemperature(void) const
  {
    return flagHasNormalLowTemperature;
  }

ShowWeatherAlmanacInformationNuggetJSON::TypeNormalLowTemperatureJSON * ShowWeatherAlmanacInformationNuggetJSON::getNormalLowTemperature(void)
  {
    assert(flagHasNormalLowTemperature);
    return storeNormalLowTemperature;
  }

const ShowWeatherAlmanacInformationNuggetJSON::TypeNormalLowTemperatureJSON * ShowWeatherAlmanacInformationNuggetJSON::getNormalLowTemperature(void) const
  {
    assert(flagHasNormalLowTemperature);
    return storeNormalLowTemperature;
  }

bool ShowWeatherAlmanacInformationNuggetJSON::hasRecordHighTemperature(void) const
  {
    return flagHasRecordHighTemperature;
  }

ShowWeatherAlmanacInformationNuggetJSON::TypeRecordHighTemperatureJSON * ShowWeatherAlmanacInformationNuggetJSON::getRecordHighTemperature(void)
  {
    assert(flagHasRecordHighTemperature);
    return storeRecordHighTemperature;
  }

const ShowWeatherAlmanacInformationNuggetJSON::TypeRecordHighTemperatureJSON * ShowWeatherAlmanacInformationNuggetJSON::getRecordHighTemperature(void) const
  {
    assert(flagHasRecordHighTemperature);
    return storeRecordHighTemperature;
  }

bool ShowWeatherAlmanacInformationNuggetJSON::hasRecordLowTemperature(void) const
  {
    return flagHasRecordLowTemperature;
  }

ShowWeatherAlmanacInformationNuggetJSON::TypeRecordLowTemperatureJSON * ShowWeatherAlmanacInformationNuggetJSON::getRecordLowTemperature(void)
  {
    assert(flagHasRecordLowTemperature);
    return storeRecordLowTemperature;
  }

const ShowWeatherAlmanacInformationNuggetJSON::TypeRecordLowTemperatureJSON * ShowWeatherAlmanacInformationNuggetJSON::getRecordLowTemperature(void) const
  {
    assert(flagHasRecordLowTemperature);
    return storeRecordLowTemperature;
  }

ShowWeatherAlmanacInformationNuggetJSON::TypeNormalHighTemperatureJSON *ShowWeatherAlmanacInformationNuggetJSON::TypeNormalHighTemperatureJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    TypeNormalHighTemperatureJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<TypeNormalHighTemperatureJSON>, TypeNormalHighTemperatureJSON *, bool> generator("Type TypeNormalHighTemperature", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
ShowWeatherAlmanacInformationNuggetJSON::TypeNormalLowTemperatureJSON *ShowWeatherAlmanacInformationNuggetJSON::TypeNormalLowTemperatureJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    TypeNormalLowTemperatureJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<TypeNormalLowTemperatureJSON>, TypeNormalLowTemperatureJSON *, bool> generator("Type TypeNormalLowTemperature", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
RegEx ShowWeatherAlmanacInformationNuggetJSON::TypeRecordHighTemperatureJSON::expressionYear("^(1[6-9][0-9][0-9])|(20[0-9][0-9])$");
ShowWeatherAlmanacInformationNuggetJSON::TypeRecordHighTemperatureJSON *ShowWeatherAlmanacInformationNuggetJSON::TypeRecordHighTemperatureJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    TypeRecordHighTemperatureJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<TypeRecordHighTemperatureJSON>, TypeRecordHighTemperatureJSON *, bool> generator("Type TypeRecordHighTemperature", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
RegEx ShowWeatherAlmanacInformationNuggetJSON::TypeRecordLowTemperatureJSON::expressionYear("^(1[6-9][0-9][0-9])|(20[0-9][0-9])$");
ShowWeatherAlmanacInformationNuggetJSON::TypeRecordLowTemperatureJSON *ShowWeatherAlmanacInformationNuggetJSON::TypeRecordLowTemperatureJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    TypeRecordLowTemperatureJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<TypeRecordLowTemperatureJSON>, TypeRecordLowTemperatureJSON *, bool> generator("Type TypeRecordLowTemperature", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
ShowWeatherAlmanacInformationNuggetJSON *ShowWeatherAlmanacInformationNuggetJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    ShowWeatherAlmanacInformationNuggetJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<ShowWeatherAlmanacInformationNuggetJSON>, ShowWeatherAlmanacInformationNuggetJSON *, bool> generator("Type ShowWeatherAlmanacInformationNugget", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
