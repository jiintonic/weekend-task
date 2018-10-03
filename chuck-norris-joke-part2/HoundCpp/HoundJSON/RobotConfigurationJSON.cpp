/* file "RobotConfigurationJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "RobotConfigurationJSON.h"

#include "RobotConfigurationJSON.h"


RobotConfigurationJSON::TypeSensorsJSON::TypeSensorsJSON(const TypeSensorsJSON &)
  {
    assert(false);
  }

RobotConfigurationJSON::TypeSensorsJSON &RobotConfigurationJSON::TypeSensorsJSON::operator=(const TypeSensorsJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void RobotConfigurationJSON::TypeSensorsJSON::fromJSONHasCamera(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field HasCamera of TypeSensorsJSON is not true for false.");
          }
      }
    setHasCamera(the_bool);
  }

void RobotConfigurationJSON::TypeSensorsJSON::fromJSONHasVideoCamera(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field HasVideoCamera of TypeSensorsJSON is not true for false.");
          }
      }
    setHasVideoCamera(the_bool);
  }

RobotConfigurationJSON::TypeSensorsJSON::TypeSensorsJSON(void) :
        flagHasHasCamera(false),
        flagHasHasVideoCamera(false)
  {
    extraIndex = create_string_index();
  }

RobotConfigurationJSON::TypeSensorsJSON::~TypeSensorsJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool RobotConfigurationJSON::TypeSensorsJSON::hasHasCamera(void) const
  {
    return flagHasHasCamera;
  }

bool RobotConfigurationJSON::TypeSensorsJSON::getHasCamera(void)
  {
    assert(flagHasHasCamera);
    return storeHasCamera;
  }

const bool RobotConfigurationJSON::TypeSensorsJSON::getHasCamera(void) const
  {
    assert(flagHasHasCamera);
    return storeHasCamera;
  }

bool RobotConfigurationJSON::TypeSensorsJSON::hasHasVideoCamera(void) const
  {
    return flagHasHasVideoCamera;
  }

bool RobotConfigurationJSON::TypeSensorsJSON::getHasVideoCamera(void)
  {
    assert(flagHasHasVideoCamera);
    return storeHasVideoCamera;
  }

const bool RobotConfigurationJSON::TypeSensorsJSON::getHasVideoCamera(void) const
  {
    assert(flagHasHasVideoCamera);
    return storeHasVideoCamera;
  }

RobotConfigurationJSON::RobotConfigurationJSON(const RobotConfigurationJSON &)
  {
    assert(false);
  }

RobotConfigurationJSON &RobotConfigurationJSON::operator=(const RobotConfigurationJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void RobotConfigurationJSON::fromJSONArmCount(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field ArmCount of RobotConfigurationJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field ArmCount of RobotConfigurationJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setArmCount(extracted_integer);
  }

void RobotConfigurationJSON::fromJSONLegCount(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field LegCount of RobotConfigurationJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field LegCount of RobotConfigurationJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setLegCount(extracted_integer);
  }

void RobotConfigurationJSON::fromJSONIsMobile(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field IsMobile of RobotConfigurationJSON is not true for false.");
          }
      }
    setIsMobile(the_bool);
  }

void RobotConfigurationJSON::fromJSONSensors(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TypeSensorsJSON *convert_classy = TypeSensorsJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setSensors(convert_classy);
    convert_classy->remove_reference();
  }

RobotConfigurationJSON::RobotConfigurationJSON(void) :
        flagHasArmCount(false),
        flagHasLegCount(false),
        flagHasIsMobile(false),
        flagHasSensors(false)
  {
    extraIndex = create_string_index();
  }

RobotConfigurationJSON::~RobotConfigurationJSON(void)
  {
    if (flagHasSensors)
      {
        storeSensors->remove_reference();
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool RobotConfigurationJSON::hasArmCount(void) const
  {
    return flagHasArmCount;
  }

OInteger RobotConfigurationJSON::getArmCount(void)
  {
    assert(flagHasArmCount);
    return storeArmCount;
  }

const OInteger RobotConfigurationJSON::getArmCount(void) const
  {
    assert(flagHasArmCount);
    return storeArmCount;
  }

bool RobotConfigurationJSON::hasLegCount(void) const
  {
    return flagHasLegCount;
  }

OInteger RobotConfigurationJSON::getLegCount(void)
  {
    assert(flagHasLegCount);
    return storeLegCount;
  }

const OInteger RobotConfigurationJSON::getLegCount(void) const
  {
    assert(flagHasLegCount);
    return storeLegCount;
  }

bool RobotConfigurationJSON::hasIsMobile(void) const
  {
    return flagHasIsMobile;
  }

bool RobotConfigurationJSON::getIsMobile(void)
  {
    assert(flagHasIsMobile);
    return storeIsMobile;
  }

const bool RobotConfigurationJSON::getIsMobile(void) const
  {
    assert(flagHasIsMobile);
    return storeIsMobile;
  }

bool RobotConfigurationJSON::hasSensors(void) const
  {
    return flagHasSensors;
  }

RobotConfigurationJSON::TypeSensorsJSON * RobotConfigurationJSON::getSensors(void)
  {
    assert(flagHasSensors);
    return storeSensors;
  }

const RobotConfigurationJSON::TypeSensorsJSON * RobotConfigurationJSON::getSensors(void) const
  {
    assert(flagHasSensors);
    return storeSensors;
  }

RobotConfigurationJSON::TypeSensorsJSON *RobotConfigurationJSON::TypeSensorsJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    TypeSensorsJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<TypeSensorsJSON>, TypeSensorsJSON *, bool> generator("Type TypeSensors", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
RobotConfigurationJSON *RobotConfigurationJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    RobotConfigurationJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<RobotConfigurationJSON>, RobotConfigurationJSON *, bool> generator("Type RobotConfiguration", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
