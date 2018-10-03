/* file "HomeAutomationActionResponseJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "HomeAutomationActionResponseJSON.h"

#include "HomeAutomationActionResponseJSON.h"


HomeAutomationActionResponseJSON::TypeErrorJSON::TypeErrorJSON(const TypeErrorJSON &)
  {
    assert(false);
  }

HomeAutomationActionResponseJSON::TypeErrorJSON &HomeAutomationActionResponseJSON::TypeErrorJSON::operator=(const TypeErrorJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void HomeAutomationActionResponseJSON::TypeErrorJSON::fromJSONErrorCode(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field ErrorCode of TypeErrorJSON is not a string.");
    setErrorCode(std::string(json_string->getData()));
  }

void HomeAutomationActionResponseJSON::TypeErrorJSON::fromJSONErrorString(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field ErrorString of TypeErrorJSON is not a string.");
    setErrorString(std::string(json_string->getData()));
  }

HomeAutomationActionResponseJSON::TypeErrorJSON::TypeErrorJSON(void) :
        flagHasErrorCode(false),
        flagHasErrorString(false)
  {
    extraIndex = create_string_index();
  }

HomeAutomationActionResponseJSON::TypeErrorJSON::~TypeErrorJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool HomeAutomationActionResponseJSON::TypeErrorJSON::hasErrorCode(void) const
  {
    return flagHasErrorCode;
  }

std::string HomeAutomationActionResponseJSON::TypeErrorJSON::getErrorCode(void)
  {
    assert(flagHasErrorCode);
    return storeErrorCode;
  }

const std::string HomeAutomationActionResponseJSON::TypeErrorJSON::getErrorCode(void) const
  {
    assert(flagHasErrorCode);
    return storeErrorCode;
  }

bool HomeAutomationActionResponseJSON::TypeErrorJSON::hasErrorString(void) const
  {
    return flagHasErrorString;
  }

std::string HomeAutomationActionResponseJSON::TypeErrorJSON::getErrorString(void)
  {
    assert(flagHasErrorString);
    return storeErrorString;
  }

const std::string HomeAutomationActionResponseJSON::TypeErrorJSON::getErrorString(void) const
  {
    assert(flagHasErrorString);
    return storeErrorString;
  }

HomeAutomationActionResponseJSON::TypeSensorReadingJSON::TypeSensorReadingJSON(const TypeSensorReadingJSON &)
  {
    assert(false);
  }

HomeAutomationActionResponseJSON::TypeSensorReadingJSON &HomeAutomationActionResponseJSON::TypeSensorReadingJSON::operator=(const TypeSensorReadingJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void HomeAutomationActionResponseJSON::TypeSensorReadingJSON::fromJSONName(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Name of TypeSensorReadingJSON is not a string.");
    setName(std::string(json_string->getData()));
  }

void HomeAutomationActionResponseJSON::TypeSensorReadingJSON::fromJSONLevel(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field Level of TypeSensorReadingJSON is not a number.");
          }
      }
    setLevelText(the_rational_text);
  }

HomeAutomationActionResponseJSON::TypeSensorReadingJSON::TypeSensorReadingJSON(void) :
        flagHasName(false),
        flagHasLevel(false)
  {
    extraIndex = create_string_index();
  }

HomeAutomationActionResponseJSON::TypeSensorReadingJSON::~TypeSensorReadingJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool HomeAutomationActionResponseJSON::TypeSensorReadingJSON::hasName(void) const
  {
    return flagHasName;
  }

std::string HomeAutomationActionResponseJSON::TypeSensorReadingJSON::getName(void)
  {
    assert(flagHasName);
    return storeName;
  }

const std::string HomeAutomationActionResponseJSON::TypeSensorReadingJSON::getName(void) const
  {
    assert(flagHasName);
    return storeName;
  }

bool HomeAutomationActionResponseJSON::TypeSensorReadingJSON::hasLevel(void) const
  {
    return flagHasLevel;
  }

double HomeAutomationActionResponseJSON::TypeSensorReadingJSON::getLevel(void)
  {
    assert(flagHasLevel);
    if (textStoreLevel != "")
      {
        return atof(textStoreLevel.c_str());
      }
    return storeLevel;
  }

const double HomeAutomationActionResponseJSON::TypeSensorReadingJSON::getLevel(void) const
  {
    assert(flagHasLevel);
    if (textStoreLevel != "")
      {
        return atof(textStoreLevel.c_str());
      }
    return storeLevel;
  }

std::string HomeAutomationActionResponseJSON::TypeSensorReadingJSON::getLevelAsText(void) const
  {
    assert(flagHasLevel);
    if (textStoreLevel == "")
      {
        char buffer[100];
        sprintf(&(buffer[0]), "%g", storeLevel);
        return &(buffer[0]);
      }
    else
      {
        return (textStoreLevel);
      }
  }

HomeAutomationActionResponseJSON::HomeAutomationActionResponseJSON(const HomeAutomationActionResponseJSON &)
  {
    assert(false);
  }

HomeAutomationActionResponseJSON &HomeAutomationActionResponseJSON::operator=(const HomeAutomationActionResponseJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void HomeAutomationActionResponseJSON::fromJSONError(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TypeErrorJSON *convert_classy = TypeErrorJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setError(convert_classy);
    convert_classy->remove_reference();
  }

void HomeAutomationActionResponseJSON::fromJSONAuto(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field Auto of HomeAutomationActionResponseJSON is not true for false.");
          }
      }
    setAuto(the_bool);
  }

void HomeAutomationActionResponseJSON::fromJSONSleep(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field Sleep of HomeAutomationActionResponseJSON is not true for false.");
          }
      }
    setSleep(the_bool);
  }

void HomeAutomationActionResponseJSON::fromJSONWake(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field Wake of HomeAutomationActionResponseJSON is not true for false.");
          }
      }
    setWake(the_bool);
  }

void HomeAutomationActionResponseJSON::fromJSONTurnOn(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field TurnOn of HomeAutomationActionResponseJSON is not true for false.");
          }
      }
    setTurnOn(the_bool);
  }

void HomeAutomationActionResponseJSON::fromJSONTurnOff(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field TurnOff of HomeAutomationActionResponseJSON is not true for false.");
          }
      }
    setTurnOff(the_bool);
  }

void HomeAutomationActionResponseJSON::fromJSONSetBrightness(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field SetBrightness of HomeAutomationActionResponseJSON is not a number.");
          }
      }
    setSetBrightnessText(the_rational_text);
  }

void HomeAutomationActionResponseJSON::fromJSONSetColor(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    ColorJSON *convert_classy = ColorJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setSetColor(convert_classy);
    convert_classy->remove_reference();
  }

void HomeAutomationActionResponseJSON::fromJSONHeat(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field Heat of HomeAutomationActionResponseJSON is not true for false.");
          }
      }
    setHeat(the_bool);
  }

void HomeAutomationActionResponseJSON::fromJSONCool(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field Cool of HomeAutomationActionResponseJSON is not true for false.");
          }
      }
    setCool(the_bool);
  }

void HomeAutomationActionResponseJSON::fromJSONDry(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field Dry of HomeAutomationActionResponseJSON is not true for false.");
          }
      }
    setDry(the_bool);
  }

void HomeAutomationActionResponseJSON::fromJSONWind(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field Wind of HomeAutomationActionResponseJSON is not true for false.");
          }
      }
    setWind(the_bool);
  }

void HomeAutomationActionResponseJSON::fromJSONSetTemperature(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    HomeAutomationTemperatureJSON *convert_classy = HomeAutomationTemperatureJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setSetTemperature(convert_classy);
    convert_classy->remove_reference();
  }

void HomeAutomationActionResponseJSON::fromJSONSetWindSpeed(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field SetWindSpeed of HomeAutomationActionResponseJSON is not a number.");
          }
      }
    setSetWindSpeedText(the_rational_text);
  }

void HomeAutomationActionResponseJSON::fromJSONStartCleaning(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field StartCleaning of HomeAutomationActionResponseJSON is not true for false.");
          }
      }
    setStartCleaning(the_bool);
  }

void HomeAutomationActionResponseJSON::fromJSONStopCleaning(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field StopCleaning of HomeAutomationActionResponseJSON is not true for false.");
          }
      }
    setStopCleaning(the_bool);
  }

void HomeAutomationActionResponseJSON::fromJSONTurboControl(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    HomeAutomationTurboModeJSON *convert_classy = HomeAutomationTurboModeJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setTurboControl(convert_classy);
    convert_classy->remove_reference();
  }

void HomeAutomationActionResponseJSON::fromJSONReady(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field Ready of HomeAutomationActionResponseJSON is not true for false.");
          }
      }
    setReady(the_bool);
  }

void HomeAutomationActionResponseJSON::fromJSONPause(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field Pause of HomeAutomationActionResponseJSON is not true for false.");
          }
      }
    setPause(the_bool);
  }

void HomeAutomationActionResponseJSON::fromJSONCancel(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field Cancel of HomeAutomationActionResponseJSON is not true for false.");
          }
      }
    setCancel(the_bool);
  }

void HomeAutomationActionResponseJSON::fromJSONCurrentTemperature(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    HomeAutomationTemperatureJSON *convert_classy = HomeAutomationTemperatureJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setCurrentTemperature(convert_classy);
    convert_classy->remove_reference();
  }

void HomeAutomationActionResponseJSON::fromJSONLock(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field Lock of HomeAutomationActionResponseJSON is not true for false.");
          }
      }
    setLock(the_bool);
  }

void HomeAutomationActionResponseJSON::fromJSONUnlock(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field Unlock of HomeAutomationActionResponseJSON is not true for false.");
          }
      }
    setUnlock(the_bool);
  }

void HomeAutomationActionResponseJSON::fromJSONOpen(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field Open of HomeAutomationActionResponseJSON is not true for false.");
          }
      }
    setOpen(the_bool);
  }

void HomeAutomationActionResponseJSON::fromJSONClose(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field Close of HomeAutomationActionResponseJSON is not true for false.");
          }
      }
    setClose(the_bool);
  }

void HomeAutomationActionResponseJSON::fromJSONAlarm(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field Alarm of HomeAutomationActionResponseJSON is not true for false.");
          }
      }
    setAlarm(the_bool);
  }

void HomeAutomationActionResponseJSON::fromJSONTimeRemaining(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field TimeRemaining of HomeAutomationActionResponseJSON is not a number.");
          }
      }
    setTimeRemainingText(the_rational_text);
  }

void HomeAutomationActionResponseJSON::fromJSONStage(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Stage of HomeAutomationActionResponseJSON is not a string.");
    setStage(std::string(json_string->getData()));
  }

void HomeAutomationActionResponseJSON::fromJSONSensorReading(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field SensorReading of HomeAutomationActionResponseJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    if (count1 < 1)
        throw("The value for field SensorReading of HomeAutomationActionResponseJSON has too few elements.");
    std::vector< TypeSensorReadingJSON * > vector_SensorReading1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        TypeSensorReadingJSON *convert_classy = TypeSensorReadingJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_SensorReading1[num1] = convert_classy;
      }
    assert(vector_SensorReading1.size() >= 1);
    initSensorReading();
    for (size_t num2 = 0; num2 < vector_SensorReading1.size(); ++num2)
        appendSensorReading(vector_SensorReading1[num2]);
    for (size_t num1 = 0; num1 < vector_SensorReading1.size(); ++num1)
      {
        vector_SensorReading1[num1]->remove_reference();
      }
  }

void HomeAutomationActionResponseJSON::fromJSONMotionSensor(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    HomeAutomationMotionStatusJSON *convert_classy = HomeAutomationMotionStatusJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setMotionSensor(convert_classy);
    convert_classy->remove_reference();
  }

void HomeAutomationActionResponseJSON::fromJSONMovementSensor(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    HomeAutomationMovementStatusJSON *convert_classy = HomeAutomationMovementStatusJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setMovementSensor(convert_classy);
    convert_classy->remove_reference();
  }

HomeAutomationActionResponseJSON::HomeAutomationActionResponseJSON(void) :
        flagHasError(false),
        flagHasAuto(false),
        flagHasSleep(false),
        flagHasWake(false),
        flagHasTurnOn(false),
        flagHasTurnOff(false),
        flagHasSetBrightness(false),
        flagHasSetColor(false),
        flagHasHeat(false),
        flagHasCool(false),
        flagHasDry(false),
        flagHasWind(false),
        flagHasSetTemperature(false),
        flagHasSetWindSpeed(false),
        flagHasStartCleaning(false),
        flagHasStopCleaning(false),
        flagHasTurboControl(false),
        flagHasReady(false),
        flagHasPause(false),
        flagHasCancel(false),
        flagHasCurrentTemperature(false),
        flagHasLock(false),
        flagHasUnlock(false),
        flagHasOpen(false),
        flagHasClose(false),
        flagHasAlarm(false),
        flagHasTimeRemaining(false),
        flagHasStage(false),
        flagHasSensorReading(false),
        flagHasMotionSensor(false),
        flagHasMovementSensor(false)
  {
    extraIndex = create_string_index();
  }

HomeAutomationActionResponseJSON::~HomeAutomationActionResponseJSON(void)
  {
    if (flagHasError)
      {
        storeError->remove_reference();
      }
    if (flagHasSetColor)
      {
        storeSetColor->remove_reference();
      }
    if (flagHasSetTemperature)
      {
        storeSetTemperature->remove_reference();
      }
    if (flagHasTurboControl)
      {
        storeTurboControl->remove_reference();
      }
    if (flagHasCurrentTemperature)
      {
        storeCurrentTemperature->remove_reference();
      }
    if (flagHasSensorReading)
      {
        for (size_t num4 = 0; num4 < storeSensorReading.size(); ++num4)
          {
            storeSensorReading[num4]->remove_reference();
          }
      }
    if (flagHasMotionSensor)
      {
        storeMotionSensor->remove_reference();
      }
    if (flagHasMovementSensor)
      {
        storeMovementSensor->remove_reference();
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool HomeAutomationActionResponseJSON::hasError(void) const
  {
    return flagHasError;
  }

HomeAutomationActionResponseJSON::TypeErrorJSON * HomeAutomationActionResponseJSON::getError(void)
  {
    assert(flagHasError);
    return storeError;
  }

const HomeAutomationActionResponseJSON::TypeErrorJSON * HomeAutomationActionResponseJSON::getError(void) const
  {
    assert(flagHasError);
    return storeError;
  }

bool HomeAutomationActionResponseJSON::hasAuto(void) const
  {
    return flagHasAuto;
  }

bool HomeAutomationActionResponseJSON::getAuto(void)
  {
    assert(flagHasAuto);
    return storeAuto;
  }

const bool HomeAutomationActionResponseJSON::getAuto(void) const
  {
    assert(flagHasAuto);
    return storeAuto;
  }

bool HomeAutomationActionResponseJSON::hasSleep(void) const
  {
    return flagHasSleep;
  }

bool HomeAutomationActionResponseJSON::getSleep(void)
  {
    assert(flagHasSleep);
    return storeSleep;
  }

const bool HomeAutomationActionResponseJSON::getSleep(void) const
  {
    assert(flagHasSleep);
    return storeSleep;
  }

bool HomeAutomationActionResponseJSON::hasWake(void) const
  {
    return flagHasWake;
  }

bool HomeAutomationActionResponseJSON::getWake(void)
  {
    assert(flagHasWake);
    return storeWake;
  }

const bool HomeAutomationActionResponseJSON::getWake(void) const
  {
    assert(flagHasWake);
    return storeWake;
  }

bool HomeAutomationActionResponseJSON::hasTurnOn(void) const
  {
    return flagHasTurnOn;
  }

bool HomeAutomationActionResponseJSON::getTurnOn(void)
  {
    assert(flagHasTurnOn);
    return storeTurnOn;
  }

const bool HomeAutomationActionResponseJSON::getTurnOn(void) const
  {
    assert(flagHasTurnOn);
    return storeTurnOn;
  }

bool HomeAutomationActionResponseJSON::hasTurnOff(void) const
  {
    return flagHasTurnOff;
  }

bool HomeAutomationActionResponseJSON::getTurnOff(void)
  {
    assert(flagHasTurnOff);
    return storeTurnOff;
  }

const bool HomeAutomationActionResponseJSON::getTurnOff(void) const
  {
    assert(flagHasTurnOff);
    return storeTurnOff;
  }

bool HomeAutomationActionResponseJSON::hasSetBrightness(void) const
  {
    return flagHasSetBrightness;
  }

double HomeAutomationActionResponseJSON::getSetBrightness(void)
  {
    assert(flagHasSetBrightness);
    if (textStoreSetBrightness != "")
      {
        return atof(textStoreSetBrightness.c_str());
      }
    return storeSetBrightness;
  }

const double HomeAutomationActionResponseJSON::getSetBrightness(void) const
  {
    assert(flagHasSetBrightness);
    if (textStoreSetBrightness != "")
      {
        return atof(textStoreSetBrightness.c_str());
      }
    return storeSetBrightness;
  }

std::string HomeAutomationActionResponseJSON::getSetBrightnessAsText(void) const
  {
    assert(flagHasSetBrightness);
    if (textStoreSetBrightness == "")
      {
        char buffer[100];
        sprintf(&(buffer[0]), "%g", storeSetBrightness);
        return &(buffer[0]);
      }
    else
      {
        return (textStoreSetBrightness);
      }
  }

bool HomeAutomationActionResponseJSON::hasSetColor(void) const
  {
    return flagHasSetColor;
  }

ColorJSON * HomeAutomationActionResponseJSON::getSetColor(void)
  {
    assert(flagHasSetColor);
    return storeSetColor;
  }

const ColorJSON * HomeAutomationActionResponseJSON::getSetColor(void) const
  {
    assert(flagHasSetColor);
    return storeSetColor;
  }

bool HomeAutomationActionResponseJSON::hasHeat(void) const
  {
    return flagHasHeat;
  }

bool HomeAutomationActionResponseJSON::getHeat(void)
  {
    assert(flagHasHeat);
    return storeHeat;
  }

const bool HomeAutomationActionResponseJSON::getHeat(void) const
  {
    assert(flagHasHeat);
    return storeHeat;
  }

bool HomeAutomationActionResponseJSON::hasCool(void) const
  {
    return flagHasCool;
  }

bool HomeAutomationActionResponseJSON::getCool(void)
  {
    assert(flagHasCool);
    return storeCool;
  }

const bool HomeAutomationActionResponseJSON::getCool(void) const
  {
    assert(flagHasCool);
    return storeCool;
  }

bool HomeAutomationActionResponseJSON::hasDry(void) const
  {
    return flagHasDry;
  }

bool HomeAutomationActionResponseJSON::getDry(void)
  {
    assert(flagHasDry);
    return storeDry;
  }

const bool HomeAutomationActionResponseJSON::getDry(void) const
  {
    assert(flagHasDry);
    return storeDry;
  }

bool HomeAutomationActionResponseJSON::hasWind(void) const
  {
    return flagHasWind;
  }

bool HomeAutomationActionResponseJSON::getWind(void)
  {
    assert(flagHasWind);
    return storeWind;
  }

const bool HomeAutomationActionResponseJSON::getWind(void) const
  {
    assert(flagHasWind);
    return storeWind;
  }

bool HomeAutomationActionResponseJSON::hasSetTemperature(void) const
  {
    return flagHasSetTemperature;
  }

HomeAutomationTemperatureJSON * HomeAutomationActionResponseJSON::getSetTemperature(void)
  {
    assert(flagHasSetTemperature);
    return storeSetTemperature;
  }

const HomeAutomationTemperatureJSON * HomeAutomationActionResponseJSON::getSetTemperature(void) const
  {
    assert(flagHasSetTemperature);
    return storeSetTemperature;
  }

bool HomeAutomationActionResponseJSON::hasSetWindSpeed(void) const
  {
    return flagHasSetWindSpeed;
  }

double HomeAutomationActionResponseJSON::getSetWindSpeed(void)
  {
    assert(flagHasSetWindSpeed);
    if (textStoreSetWindSpeed != "")
      {
        return atof(textStoreSetWindSpeed.c_str());
      }
    return storeSetWindSpeed;
  }

const double HomeAutomationActionResponseJSON::getSetWindSpeed(void) const
  {
    assert(flagHasSetWindSpeed);
    if (textStoreSetWindSpeed != "")
      {
        return atof(textStoreSetWindSpeed.c_str());
      }
    return storeSetWindSpeed;
  }

std::string HomeAutomationActionResponseJSON::getSetWindSpeedAsText(void) const
  {
    assert(flagHasSetWindSpeed);
    if (textStoreSetWindSpeed == "")
      {
        char buffer[100];
        sprintf(&(buffer[0]), "%g", storeSetWindSpeed);
        return &(buffer[0]);
      }
    else
      {
        return (textStoreSetWindSpeed);
      }
  }

bool HomeAutomationActionResponseJSON::hasStartCleaning(void) const
  {
    return flagHasStartCleaning;
  }

bool HomeAutomationActionResponseJSON::getStartCleaning(void)
  {
    assert(flagHasStartCleaning);
    return storeStartCleaning;
  }

const bool HomeAutomationActionResponseJSON::getStartCleaning(void) const
  {
    assert(flagHasStartCleaning);
    return storeStartCleaning;
  }

bool HomeAutomationActionResponseJSON::hasStopCleaning(void) const
  {
    return flagHasStopCleaning;
  }

bool HomeAutomationActionResponseJSON::getStopCleaning(void)
  {
    assert(flagHasStopCleaning);
    return storeStopCleaning;
  }

const bool HomeAutomationActionResponseJSON::getStopCleaning(void) const
  {
    assert(flagHasStopCleaning);
    return storeStopCleaning;
  }

bool HomeAutomationActionResponseJSON::hasTurboControl(void) const
  {
    return flagHasTurboControl;
  }

HomeAutomationTurboModeJSON * HomeAutomationActionResponseJSON::getTurboControl(void)
  {
    assert(flagHasTurboControl);
    return storeTurboControl;
  }

const HomeAutomationTurboModeJSON * HomeAutomationActionResponseJSON::getTurboControl(void) const
  {
    assert(flagHasTurboControl);
    return storeTurboControl;
  }

HomeAutomationTurboModeJSON::TypeValue HomeAutomationActionResponseJSON::getTurboControlValue(void)
  {
    return getTurboControl()->getValue();
  }

const HomeAutomationTurboModeJSON::TypeValue HomeAutomationActionResponseJSON::getTurboControlValue(void) const
  {
    return getTurboControl()->getValue();
  }

const char *HomeAutomationActionResponseJSON::getTurboControlAsChars(void) const
  {
    return getTurboControl()->getValueAsChars();
  }

std::string HomeAutomationActionResponseJSON::getTurboControlAsString(void) const
  {
    return getTurboControl()->getValueAsString();
  }

bool HomeAutomationActionResponseJSON::hasReady(void) const
  {
    return flagHasReady;
  }

bool HomeAutomationActionResponseJSON::getReady(void)
  {
    assert(flagHasReady);
    return storeReady;
  }

const bool HomeAutomationActionResponseJSON::getReady(void) const
  {
    assert(flagHasReady);
    return storeReady;
  }

bool HomeAutomationActionResponseJSON::hasPause(void) const
  {
    return flagHasPause;
  }

bool HomeAutomationActionResponseJSON::getPause(void)
  {
    assert(flagHasPause);
    return storePause;
  }

const bool HomeAutomationActionResponseJSON::getPause(void) const
  {
    assert(flagHasPause);
    return storePause;
  }

bool HomeAutomationActionResponseJSON::hasCancel(void) const
  {
    return flagHasCancel;
  }

bool HomeAutomationActionResponseJSON::getCancel(void)
  {
    assert(flagHasCancel);
    return storeCancel;
  }

const bool HomeAutomationActionResponseJSON::getCancel(void) const
  {
    assert(flagHasCancel);
    return storeCancel;
  }

bool HomeAutomationActionResponseJSON::hasCurrentTemperature(void) const
  {
    return flagHasCurrentTemperature;
  }

HomeAutomationTemperatureJSON * HomeAutomationActionResponseJSON::getCurrentTemperature(void)
  {
    assert(flagHasCurrentTemperature);
    return storeCurrentTemperature;
  }

const HomeAutomationTemperatureJSON * HomeAutomationActionResponseJSON::getCurrentTemperature(void) const
  {
    assert(flagHasCurrentTemperature);
    return storeCurrentTemperature;
  }

bool HomeAutomationActionResponseJSON::hasLock(void) const
  {
    return flagHasLock;
  }

bool HomeAutomationActionResponseJSON::getLock(void)
  {
    assert(flagHasLock);
    return storeLock;
  }

const bool HomeAutomationActionResponseJSON::getLock(void) const
  {
    assert(flagHasLock);
    return storeLock;
  }

bool HomeAutomationActionResponseJSON::hasUnlock(void) const
  {
    return flagHasUnlock;
  }

bool HomeAutomationActionResponseJSON::getUnlock(void)
  {
    assert(flagHasUnlock);
    return storeUnlock;
  }

const bool HomeAutomationActionResponseJSON::getUnlock(void) const
  {
    assert(flagHasUnlock);
    return storeUnlock;
  }

bool HomeAutomationActionResponseJSON::hasOpen(void) const
  {
    return flagHasOpen;
  }

bool HomeAutomationActionResponseJSON::getOpen(void)
  {
    assert(flagHasOpen);
    return storeOpen;
  }

const bool HomeAutomationActionResponseJSON::getOpen(void) const
  {
    assert(flagHasOpen);
    return storeOpen;
  }

bool HomeAutomationActionResponseJSON::hasClose(void) const
  {
    return flagHasClose;
  }

bool HomeAutomationActionResponseJSON::getClose(void)
  {
    assert(flagHasClose);
    return storeClose;
  }

const bool HomeAutomationActionResponseJSON::getClose(void) const
  {
    assert(flagHasClose);
    return storeClose;
  }

bool HomeAutomationActionResponseJSON::hasAlarm(void) const
  {
    return flagHasAlarm;
  }

bool HomeAutomationActionResponseJSON::getAlarm(void)
  {
    assert(flagHasAlarm);
    return storeAlarm;
  }

const bool HomeAutomationActionResponseJSON::getAlarm(void) const
  {
    assert(flagHasAlarm);
    return storeAlarm;
  }

bool HomeAutomationActionResponseJSON::hasTimeRemaining(void) const
  {
    return flagHasTimeRemaining;
  }

double HomeAutomationActionResponseJSON::getTimeRemaining(void)
  {
    assert(flagHasTimeRemaining);
    if (textStoreTimeRemaining != "")
      {
        return atof(textStoreTimeRemaining.c_str());
      }
    return storeTimeRemaining;
  }

const double HomeAutomationActionResponseJSON::getTimeRemaining(void) const
  {
    assert(flagHasTimeRemaining);
    if (textStoreTimeRemaining != "")
      {
        return atof(textStoreTimeRemaining.c_str());
      }
    return storeTimeRemaining;
  }

std::string HomeAutomationActionResponseJSON::getTimeRemainingAsText(void) const
  {
    assert(flagHasTimeRemaining);
    if (textStoreTimeRemaining == "")
      {
        char buffer[100];
        sprintf(&(buffer[0]), "%g", storeTimeRemaining);
        return &(buffer[0]);
      }
    else
      {
        return (textStoreTimeRemaining);
      }
  }

bool HomeAutomationActionResponseJSON::hasStage(void) const
  {
    return flagHasStage;
  }

std::string HomeAutomationActionResponseJSON::getStage(void)
  {
    assert(flagHasStage);
    return storeStage;
  }

const std::string HomeAutomationActionResponseJSON::getStage(void) const
  {
    assert(flagHasStage);
    return storeStage;
  }

bool HomeAutomationActionResponseJSON::hasSensorReading(void) const
  {
    return flagHasSensorReading;
  }

size_t HomeAutomationActionResponseJSON::countOfSensorReading(void) const
  {
    assert(flagHasSensorReading);
    return storeSensorReading.size();
  }

HomeAutomationActionResponseJSON::TypeSensorReadingJSON * HomeAutomationActionResponseJSON::elementOfSensorReading(size_t element_num)
  {
    assert(flagHasSensorReading);
    return storeSensorReading[element_num];
  }

const HomeAutomationActionResponseJSON::TypeSensorReadingJSON * HomeAutomationActionResponseJSON::elementOfSensorReading(size_t element_num) const
  {
    assert(flagHasSensorReading);
    return storeSensorReading[element_num];
  }

std::vector< HomeAutomationActionResponseJSON::TypeSensorReadingJSON * > HomeAutomationActionResponseJSON::getSensorReading(void)
  {
    assert(flagHasSensorReading);
    return storeSensorReading;
  }

const std::vector< HomeAutomationActionResponseJSON::TypeSensorReadingJSON * > HomeAutomationActionResponseJSON::getSensorReading(void) const
  {
    assert(flagHasSensorReading);
    return storeSensorReading;
  }

bool HomeAutomationActionResponseJSON::hasMotionSensor(void) const
  {
    return flagHasMotionSensor;
  }

HomeAutomationMotionStatusJSON * HomeAutomationActionResponseJSON::getMotionSensor(void)
  {
    assert(flagHasMotionSensor);
    return storeMotionSensor;
  }

const HomeAutomationMotionStatusJSON * HomeAutomationActionResponseJSON::getMotionSensor(void) const
  {
    assert(flagHasMotionSensor);
    return storeMotionSensor;
  }

bool HomeAutomationActionResponseJSON::hasMovementSensor(void) const
  {
    return flagHasMovementSensor;
  }

HomeAutomationMovementStatusJSON * HomeAutomationActionResponseJSON::getMovementSensor(void)
  {
    assert(flagHasMovementSensor);
    return storeMovementSensor;
  }

const HomeAutomationMovementStatusJSON * HomeAutomationActionResponseJSON::getMovementSensor(void) const
  {
    assert(flagHasMovementSensor);
    return storeMovementSensor;
  }

HomeAutomationActionResponseJSON::TypeErrorJSON *HomeAutomationActionResponseJSON::TypeErrorJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    TypeErrorJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<TypeErrorJSON>, TypeErrorJSON *, bool> generator("Type TypeError", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
HomeAutomationActionResponseJSON::TypeSensorReadingJSON *HomeAutomationActionResponseJSON::TypeSensorReadingJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    TypeSensorReadingJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<TypeSensorReadingJSON>, TypeSensorReadingJSON *, bool> generator("Type TypeSensorReading", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
HomeAutomationActionResponseJSON *HomeAutomationActionResponseJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    HomeAutomationActionResponseJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<HomeAutomationActionResponseJSON>, HomeAutomationActionResponseJSON *, bool> generator("Type HomeAutomationActionResponse", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
