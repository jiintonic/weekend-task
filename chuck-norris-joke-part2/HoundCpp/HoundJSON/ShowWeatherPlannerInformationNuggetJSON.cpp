/* file "ShowWeatherPlannerInformationNuggetJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "ShowWeatherPlannerInformationNuggetJSON.h"

#include "ShowWeatherPlannerInformationNuggetJSON.h"


ShowWeatherPlannerInformationNuggetJSON::ShowWeatherPlannerInformationNuggetJSON(const ShowWeatherPlannerInformationNuggetJSON &)
  {
    assert(false);
  }

ShowWeatherPlannerInformationNuggetJSON &ShowWeatherPlannerInformationNuggetJSON::operator=(const ShowWeatherPlannerInformationNuggetJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *ShowWeatherPlannerInformationNuggetJSON::extraAttributionToJSON(void) const
  {
    JSONValueHandler handler_Attribution;
    storeAttribution->write_as_json(&handler_Attribution);
    handler_Attribution.result->add_reference();
    return handler_Attribution.result;
  }

JSONValue *ShowWeatherPlannerInformationNuggetJSON::extraLocationToJSON(void) const
  {
    JSONValueHandler handler_Location;
    storeLocation->write_as_json(&handler_Location);
    handler_Location.result->add_reference();
    return handler_Location.result;
  }

JSONValue *ShowWeatherPlannerInformationNuggetJSON::extraAlertsToJSON(void) const
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

JSONValue *ShowWeatherPlannerInformationNuggetJSON::extraRequestedAttributeToJSON(void) const
  {
    JSONStringValue *generated_string_RequestedAttribute = new JSONStringValue(storeRequestedAttribute.c_str());
    return generated_string_RequestedAttribute;
  }

JSONValue *ShowWeatherPlannerInformationNuggetJSON::extraRequestedStartDateAndTimeToJSON(void) const
  {
    JSONValueHandler handler_RequestedStartDateAndTime;
    storeRequestedStartDateAndTime->write_as_json(&handler_RequestedStartDateAndTime);
    handler_RequestedStartDateAndTime.result->add_reference();
    return handler_RequestedStartDateAndTime.result;
  }

JSONValue *ShowWeatherPlannerInformationNuggetJSON::extraRequestedEndDateAndTimeToJSON(void) const
  {
    JSONValueHandler handler_RequestedEndDateAndTime;
    storeRequestedEndDateAndTime->write_as_json(&handler_RequestedEndDateAndTime);
    handler_RequestedEndDateAndTime.result->add_reference();
    return handler_RequestedEndDateAndTime.result;
  }

JSONValue *ShowWeatherPlannerInformationNuggetJSON::extraRequestedStartDateTimeSpecToJSON(void) const
  {
    JSONValueHandler handler_RequestedStartDateTimeSpec;
    storeRequestedStartDateTimeSpec->write_as_json(&handler_RequestedStartDateTimeSpec);
    handler_RequestedStartDateTimeSpec.result->add_reference();
    return handler_RequestedStartDateTimeSpec.result;
  }

JSONValue *ShowWeatherPlannerInformationNuggetJSON::extraRequestedEndDateTimeSpecToJSON(void) const
  {
    JSONValueHandler handler_RequestedEndDateTimeSpec;
    storeRequestedEndDateTimeSpec->write_as_json(&handler_RequestedEndDateTimeSpec);
    handler_RequestedEndDateTimeSpec.result->add_reference();
    return handler_RequestedEndDateTimeSpec.result;
  }

JSONValue *ShowWeatherPlannerInformationNuggetJSON::extraPlannerToJSON(void) const
  {
    JSONValueHandler handler_Planner;
    storePlanner->write_as_json(&handler_Planner);
    handler_Planner.result->add_reference();
    return handler_Planner.result;
  }

void ShowWeatherPlannerInformationNuggetJSON::fromJSONAttribution(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    AttributionJSON *convert_classy = AttributionJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setAttribution(convert_classy);
    convert_classy->remove_reference();
  }

void ShowWeatherPlannerInformationNuggetJSON::fromJSONLocation(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    MapLocationJSON *convert_classy = MapLocationJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setLocation(convert_classy);
    convert_classy->remove_reference();
  }

void ShowWeatherPlannerInformationNuggetJSON::fromJSONAlerts(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field Alerts of ShowWeatherPlannerInformationNuggetJSON is not an array.");
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

void ShowWeatherPlannerInformationNuggetJSON::fromJSONRequestedAttribute(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field RequestedAttribute of ShowWeatherPlannerInformationNuggetJSON is not a string.");
    setRequestedAttribute(std::string(json_string->getData()));
  }

void ShowWeatherPlannerInformationNuggetJSON::fromJSONRequestedStartDateAndTime(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DateAndOrTimeJSON *convert_classy = DateAndOrTimeJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setRequestedStartDateAndTime(convert_classy);
    convert_classy->remove_reference();
  }

void ShowWeatherPlannerInformationNuggetJSON::fromJSONRequestedEndDateAndTime(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DateAndOrTimeJSON *convert_classy = DateAndOrTimeJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setRequestedEndDateAndTime(convert_classy);
    convert_classy->remove_reference();
  }

void ShowWeatherPlannerInformationNuggetJSON::fromJSONRequestedStartDateTimeSpec(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DateTimeSpecJSON *convert_classy = DateTimeSpecJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setRequestedStartDateTimeSpec(convert_classy);
    convert_classy->remove_reference();
  }

void ShowWeatherPlannerInformationNuggetJSON::fromJSONRequestedEndDateTimeSpec(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DateTimeSpecJSON *convert_classy = DateTimeSpecJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setRequestedEndDateTimeSpec(convert_classy);
    convert_classy->remove_reference();
  }

void ShowWeatherPlannerInformationNuggetJSON::fromJSONPlanner(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    PlannerJSON *convert_classy = PlannerJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setPlanner(convert_classy);
    convert_classy->remove_reference();
  }

ShowWeatherPlannerInformationNuggetJSON::ShowWeatherPlannerInformationNuggetJSON(void) :
        flagHasAttribution(false),
        flagHasLocation(false),
        flagHasAlerts(false),
        flagHasRequestedAttribute(false),
        flagHasRequestedStartDateAndTime(false),
        flagHasRequestedEndDateAndTime(false),
        flagHasRequestedStartDateTimeSpec(false),
        flagHasRequestedEndDateTimeSpec(false),
        flagHasPlanner(false)
  {
    extraIndex = create_string_index();
  }

ShowWeatherPlannerInformationNuggetJSON::~ShowWeatherPlannerInformationNuggetJSON(void)
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
    if (flagHasRequestedStartDateAndTime)
      {
        storeRequestedStartDateAndTime->remove_reference();
      }
    if (flagHasRequestedEndDateAndTime)
      {
        storeRequestedEndDateAndTime->remove_reference();
      }
    if (flagHasRequestedStartDateTimeSpec)
      {
        storeRequestedStartDateTimeSpec->remove_reference();
      }
    if (flagHasRequestedEndDateTimeSpec)
      {
        storeRequestedEndDateTimeSpec->remove_reference();
      }
    if (flagHasPlanner)
      {
        storePlanner->remove_reference();
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *ShowWeatherPlannerInformationNuggetJSON::getWeatherNuggetKind(void) const
  {
    return "ShowWeatherPlanner";
  }

bool ShowWeatherPlannerInformationNuggetJSON::hasAttribution(void) const
  {
    return flagHasAttribution;
  }

AttributionJSON * ShowWeatherPlannerInformationNuggetJSON::getAttribution(void)
  {
    assert(flagHasAttribution);
    return storeAttribution;
  }

const AttributionJSON * ShowWeatherPlannerInformationNuggetJSON::getAttribution(void) const
  {
    assert(flagHasAttribution);
    return storeAttribution;
  }

bool ShowWeatherPlannerInformationNuggetJSON::hasLocation(void) const
  {
    return flagHasLocation;
  }

MapLocationJSON * ShowWeatherPlannerInformationNuggetJSON::getLocation(void)
  {
    assert(flagHasLocation);
    return storeLocation;
  }

const MapLocationJSON * ShowWeatherPlannerInformationNuggetJSON::getLocation(void) const
  {
    assert(flagHasLocation);
    return storeLocation;
  }

bool ShowWeatherPlannerInformationNuggetJSON::hasAlerts(void) const
  {
    return flagHasAlerts;
  }

size_t ShowWeatherPlannerInformationNuggetJSON::countOfAlerts(void) const
  {
    assert(flagHasAlerts);
    return storeAlerts.size();
  }

AlertJSON * ShowWeatherPlannerInformationNuggetJSON::elementOfAlerts(size_t element_num)
  {
    assert(flagHasAlerts);
    return storeAlerts[element_num];
  }

const AlertJSON * ShowWeatherPlannerInformationNuggetJSON::elementOfAlerts(size_t element_num) const
  {
    assert(flagHasAlerts);
    return storeAlerts[element_num];
  }

std::vector< AlertJSON * > ShowWeatherPlannerInformationNuggetJSON::getAlerts(void)
  {
    assert(flagHasAlerts);
    return storeAlerts;
  }

const std::vector< AlertJSON * > ShowWeatherPlannerInformationNuggetJSON::getAlerts(void) const
  {
    assert(flagHasAlerts);
    return storeAlerts;
  }

bool ShowWeatherPlannerInformationNuggetJSON::hasRequestedAttribute(void) const
  {
    return flagHasRequestedAttribute;
  }

std::string ShowWeatherPlannerInformationNuggetJSON::getRequestedAttribute(void)
  {
    assert(flagHasRequestedAttribute);
    return storeRequestedAttribute;
  }

const std::string ShowWeatherPlannerInformationNuggetJSON::getRequestedAttribute(void) const
  {
    assert(flagHasRequestedAttribute);
    return storeRequestedAttribute;
  }

bool ShowWeatherPlannerInformationNuggetJSON::hasRequestedStartDateAndTime(void) const
  {
    return flagHasRequestedStartDateAndTime;
  }

DateAndOrTimeJSON * ShowWeatherPlannerInformationNuggetJSON::getRequestedStartDateAndTime(void)
  {
    assert(flagHasRequestedStartDateAndTime);
    return storeRequestedStartDateAndTime;
  }

const DateAndOrTimeJSON * ShowWeatherPlannerInformationNuggetJSON::getRequestedStartDateAndTime(void) const
  {
    assert(flagHasRequestedStartDateAndTime);
    return storeRequestedStartDateAndTime;
  }

bool ShowWeatherPlannerInformationNuggetJSON::hasRequestedEndDateAndTime(void) const
  {
    return flagHasRequestedEndDateAndTime;
  }

DateAndOrTimeJSON * ShowWeatherPlannerInformationNuggetJSON::getRequestedEndDateAndTime(void)
  {
    assert(flagHasRequestedEndDateAndTime);
    return storeRequestedEndDateAndTime;
  }

const DateAndOrTimeJSON * ShowWeatherPlannerInformationNuggetJSON::getRequestedEndDateAndTime(void) const
  {
    assert(flagHasRequestedEndDateAndTime);
    return storeRequestedEndDateAndTime;
  }

bool ShowWeatherPlannerInformationNuggetJSON::hasRequestedStartDateTimeSpec(void) const
  {
    return flagHasRequestedStartDateTimeSpec;
  }

DateTimeSpecJSON * ShowWeatherPlannerInformationNuggetJSON::getRequestedStartDateTimeSpec(void)
  {
    assert(flagHasRequestedStartDateTimeSpec);
    return storeRequestedStartDateTimeSpec;
  }

const DateTimeSpecJSON * ShowWeatherPlannerInformationNuggetJSON::getRequestedStartDateTimeSpec(void) const
  {
    assert(flagHasRequestedStartDateTimeSpec);
    return storeRequestedStartDateTimeSpec;
  }

bool ShowWeatherPlannerInformationNuggetJSON::hasRequestedEndDateTimeSpec(void) const
  {
    return flagHasRequestedEndDateTimeSpec;
  }

DateTimeSpecJSON * ShowWeatherPlannerInformationNuggetJSON::getRequestedEndDateTimeSpec(void)
  {
    assert(flagHasRequestedEndDateTimeSpec);
    return storeRequestedEndDateTimeSpec;
  }

const DateTimeSpecJSON * ShowWeatherPlannerInformationNuggetJSON::getRequestedEndDateTimeSpec(void) const
  {
    assert(flagHasRequestedEndDateTimeSpec);
    return storeRequestedEndDateTimeSpec;
  }

bool ShowWeatherPlannerInformationNuggetJSON::hasPlanner(void) const
  {
    return flagHasPlanner;
  }

PlannerJSON * ShowWeatherPlannerInformationNuggetJSON::getPlanner(void)
  {
    assert(flagHasPlanner);
    return storePlanner;
  }

const PlannerJSON * ShowWeatherPlannerInformationNuggetJSON::getPlanner(void) const
  {
    assert(flagHasPlanner);
    return storePlanner;
  }

ShowWeatherPlannerInformationNuggetJSON *ShowWeatherPlannerInformationNuggetJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    ShowWeatherPlannerInformationNuggetJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<ShowWeatherPlannerInformationNuggetJSON>, ShowWeatherPlannerInformationNuggetJSON *, bool> generator("Type ShowWeatherPlannerInformationNugget", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
