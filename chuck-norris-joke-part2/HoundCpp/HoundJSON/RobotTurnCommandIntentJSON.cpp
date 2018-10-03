/* file "RobotTurnCommandIntentJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "RobotTurnCommandIntentJSON.h"

#include "RobotTurnCommandIntentJSON.h"


RobotTurnCommandIntentJSON::RobotTurnCommandIntentJSON(const RobotTurnCommandIntentJSON &)
  {
    assert(false);
  }

RobotTurnCommandIntentJSON &RobotTurnCommandIntentJSON::operator=(const RobotTurnCommandIntentJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *RobotTurnCommandIntentJSON::extraDirectionToJSON(void) const
  {
    JSONIntegerValue *generated_integer_Direction = new JSONIntegerValue(storeDirection.get_o_integer());
    return generated_integer_Direction;
  }

void RobotTurnCommandIntentJSON::fromJSONDirection(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field Direction of RobotTurnCommandIntentJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field Direction of RobotTurnCommandIntentJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setDirection(extracted_integer);
  }

RobotTurnCommandIntentJSON::RobotTurnCommandIntentJSON(void) :
        flagHasDirection(false)
  {
    extraIndex = create_string_index();
  }

RobotTurnCommandIntentJSON::~RobotTurnCommandIntentJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *RobotTurnCommandIntentJSON::getRobotIntentKind(void) const
  {
    return "TurnCommand";
  }

bool RobotTurnCommandIntentJSON::hasDirection(void) const
  {
    return flagHasDirection;
  }

OInteger RobotTurnCommandIntentJSON::getDirection(void)
  {
    assert(flagHasDirection);
    return storeDirection;
  }

const OInteger RobotTurnCommandIntentJSON::getDirection(void) const
  {
    assert(flagHasDirection);
    return storeDirection;
  }

char RobotTurnCommandIntentJSON::Generator::lowerBoundDirection[] = "-180";
char RobotTurnCommandIntentJSON::Generator::upperBoundDirection[] = "180";
RobotTurnCommandIntentJSON *RobotTurnCommandIntentJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    RobotTurnCommandIntentJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<RobotTurnCommandIntentJSON>, RobotTurnCommandIntentJSON *, bool> generator("Type RobotTurnCommandIntent", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
