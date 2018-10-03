/* file "AlertJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "AlertJSON.h"

#include "AlertJSON.h"


AlertJSON::AlertJSON(const AlertJSON &)
  {
    assert(false);
  }

AlertJSON &AlertJSON::operator=(const AlertJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void AlertJSON::fromJSONType(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Type of AlertJSON is not a string.");
    setType(std::string(json_string->getData()));
  }

void AlertJSON::fromJSONDescription(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Description of AlertJSON is not a string.");
    setDescription(std::string(json_string->getData()));
  }

void AlertJSON::fromJSONMessage(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Message of AlertJSON is not a string.");
    setMessage(std::string(json_string->getData()));
  }

void AlertJSON::fromJSONLevelMeteoalarmName(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field LevelMeteoalarmName of AlertJSON is not a string.");
    setLevelMeteoalarmName(std::string(json_string->getData()));
  }

void AlertJSON::fromJSONWtypeMeteoalarmName(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field WtypeMeteoalarmName of AlertJSON is not a string.");
    setWtypeMeteoalarmName(std::string(json_string->getData()));
  }

void AlertJSON::fromJSONAttribution(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Attribution of AlertJSON is not a string.");
    setAttribution(std::string(json_string->getData()));
  }

void AlertJSON::fromJSONPhenomena(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Phenomena of AlertJSON is not a string.");
    setPhenomena(std::string(json_string->getData()));
  }

void AlertJSON::fromJSONSignificance(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Significance of AlertJSON is not a string.");
    setSignificance(std::string(json_string->getData()));
  }

void AlertJSON::fromJSONStartDateAndTime(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DateAndOrTimeJSON *convert_classy = DateAndOrTimeJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setStartDateAndTime(convert_classy);
    convert_classy->remove_reference();
  }

void AlertJSON::fromJSONEndDateAndTime(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DateAndOrTimeJSON *convert_classy = DateAndOrTimeJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setEndDateAndTime(convert_classy);
    convert_classy->remove_reference();
  }

AlertJSON::AlertJSON(void) :
        flagHasType(false),
        flagHasDescription(false),
        flagHasMessage(false),
        flagHasLevelMeteoalarmName(false),
        flagHasWtypeMeteoalarmName(false),
        flagHasAttribution(false),
        flagHasPhenomena(false),
        flagHasSignificance(false),
        flagHasStartDateAndTime(false),
        flagHasEndDateAndTime(false)
  {
    extraIndex = create_string_index();
  }

AlertJSON::~AlertJSON(void)
  {
    if (flagHasStartDateAndTime)
      {
        storeStartDateAndTime->remove_reference();
      }
    if (flagHasEndDateAndTime)
      {
        storeEndDateAndTime->remove_reference();
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool AlertJSON::hasType(void) const
  {
    return flagHasType;
  }

std::string AlertJSON::getType(void)
  {
    assert(flagHasType);
    return storeType;
  }

const std::string AlertJSON::getType(void) const
  {
    assert(flagHasType);
    return storeType;
  }

bool AlertJSON::hasDescription(void) const
  {
    return flagHasDescription;
  }

std::string AlertJSON::getDescription(void)
  {
    assert(flagHasDescription);
    return storeDescription;
  }

const std::string AlertJSON::getDescription(void) const
  {
    assert(flagHasDescription);
    return storeDescription;
  }

bool AlertJSON::hasMessage(void) const
  {
    return flagHasMessage;
  }

std::string AlertJSON::getMessage(void)
  {
    assert(flagHasMessage);
    return storeMessage;
  }

const std::string AlertJSON::getMessage(void) const
  {
    assert(flagHasMessage);
    return storeMessage;
  }

bool AlertJSON::hasLevelMeteoalarmName(void) const
  {
    return flagHasLevelMeteoalarmName;
  }

std::string AlertJSON::getLevelMeteoalarmName(void)
  {
    assert(flagHasLevelMeteoalarmName);
    return storeLevelMeteoalarmName;
  }

const std::string AlertJSON::getLevelMeteoalarmName(void) const
  {
    assert(flagHasLevelMeteoalarmName);
    return storeLevelMeteoalarmName;
  }

bool AlertJSON::hasWtypeMeteoalarmName(void) const
  {
    return flagHasWtypeMeteoalarmName;
  }

std::string AlertJSON::getWtypeMeteoalarmName(void)
  {
    assert(flagHasWtypeMeteoalarmName);
    return storeWtypeMeteoalarmName;
  }

const std::string AlertJSON::getWtypeMeteoalarmName(void) const
  {
    assert(flagHasWtypeMeteoalarmName);
    return storeWtypeMeteoalarmName;
  }

bool AlertJSON::hasAttribution(void) const
  {
    return flagHasAttribution;
  }

std::string AlertJSON::getAttribution(void)
  {
    assert(flagHasAttribution);
    return storeAttribution;
  }

const std::string AlertJSON::getAttribution(void) const
  {
    assert(flagHasAttribution);
    return storeAttribution;
  }

bool AlertJSON::hasPhenomena(void) const
  {
    return flagHasPhenomena;
  }

std::string AlertJSON::getPhenomena(void)
  {
    assert(flagHasPhenomena);
    return storePhenomena;
  }

const std::string AlertJSON::getPhenomena(void) const
  {
    assert(flagHasPhenomena);
    return storePhenomena;
  }

bool AlertJSON::hasSignificance(void) const
  {
    return flagHasSignificance;
  }

std::string AlertJSON::getSignificance(void)
  {
    assert(flagHasSignificance);
    return storeSignificance;
  }

const std::string AlertJSON::getSignificance(void) const
  {
    assert(flagHasSignificance);
    return storeSignificance;
  }

bool AlertJSON::hasStartDateAndTime(void) const
  {
    return flagHasStartDateAndTime;
  }

DateAndOrTimeJSON * AlertJSON::getStartDateAndTime(void)
  {
    assert(flagHasStartDateAndTime);
    return storeStartDateAndTime;
  }

const DateAndOrTimeJSON * AlertJSON::getStartDateAndTime(void) const
  {
    assert(flagHasStartDateAndTime);
    return storeStartDateAndTime;
  }

bool AlertJSON::hasEndDateAndTime(void) const
  {
    return flagHasEndDateAndTime;
  }

DateAndOrTimeJSON * AlertJSON::getEndDateAndTime(void)
  {
    assert(flagHasEndDateAndTime);
    return storeEndDateAndTime;
  }

const DateAndOrTimeJSON * AlertJSON::getEndDateAndTime(void) const
  {
    assert(flagHasEndDateAndTime);
    return storeEndDateAndTime;
  }

AlertJSON *AlertJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    AlertJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<AlertJSON>, AlertJSON *, bool> generator("Type Alert", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
